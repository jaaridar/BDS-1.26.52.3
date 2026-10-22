/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xba19b40 (ELF vaddr 0xb919b40)
 * Label: caller-of-callee
 * Body:  [[0ba19b40, 0ba1a009] [0ba1a010, 0ba1b982] [0ba1b990, 0ba1cd53] [0ba1cd60, 0ba1db21] [0ba1db30, 0ba1f461] [0ba1f470, 0ba20101] [0ba20110, 0ba201e8] [0ba201f0, 0ba20798]]
 * Ghidra: FUN_0ba19b40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ba19b40(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  undefined4 uVar7;
  undefined4 uVar8;
  ulong *puVar9;
  undefined *puVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  code *pcVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  code *pcVar27;
  code *pcVar28;
  long lVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  uint uStack_f20;
  undefined4 uStack_f1c;
  undefined8 uStack_f18;
  undefined1 uStack_f10;
  undefined2 uStack_f0f;
  undefined1 uStack_f0d;
  undefined4 uStack_f0c;
  long lStack_f08;
  undefined8 uStack_f00;
  ulong uStack_ef8;
  undefined4 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined4 uStack_ed0;
  undefined4 uStack_ecc;
  undefined4 uStack_ec8;
  undefined1 uStack_ec4;
  undefined2 uStack_ec3;
  undefined1 uStack_ec1;
  uint uStack_ec0;
  undefined4 uStack_ebc;
  undefined1 uStack_eb8;
  undefined2 uStack_eb7;
  undefined1 uStack_eb5;
  undefined4 uStack_eb4;
  byte bStack_eb0;
  undefined4 uStack_eaf;
  undefined1 uStack_eab;
  undefined1 uStack_eaa;
  undefined1 uStack_ea9;
  undefined1 uStack_ea8;
  undefined1 uStack_ea7;
  undefined4 uStack_ea6;
  undefined1 uStack_ea2;
  undefined8 uStack_ea0;
  ulong *puStack_e98;
  ulong uStack_e90;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  ulong *puStack_e78;
  ulong *puStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  ulong uStack_e58;
  ulong uStack_e50;
  ulong *puStack_e48;
  ulong *puStack_e40;
  ulong *puStack_e38;
  long *plStack_e30;
  long *plStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  ulong uStack_e10;
  undefined4 uStack_e08;
  undefined4 uStack_e04;
  uint uStack_e00;
  undefined4 uStack_dfc;
  ulong uStack_df8;
  byte bStack_df0;
  undefined4 uStack_def;
  undefined4 uStack_deb;
  undefined4 uStack_de7;
  undefined4 uStack_de3;
  undefined1 uStack_ddf;
  undefined6 uStack_dde;
  undefined4 uStack_dd8;
  undefined1 uStack_dd4;
  undefined1 uStack_dd3;
  undefined2 uStack_dd2;
  undefined1 uStack_dd0;
  undefined2 uStack_dcf;
  undefined1 uStack_dcd;
  undefined1 uStack_dcc;
  undefined1 uStack_dcb;
  undefined1 uStack_dca;
  undefined1 uStack_dc9;
  undefined1 uStack_dc8;
  undefined6 uStack_dc7;
  undefined1 uStack_dc1;
  undefined1 auStack_dc0 [16];
  ulong uStack_db0;
  ulong uStack_da8;
  ulong uStack_da0;
  ulong uStack_d98;
  code *pcStack_d90;
  code *pcStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  ulong uStack_d70;
  undefined1 auStack_d60 [24];
  code *pcStack_d48;
  undefined1 auStack_d20 [24];
  code *pcStack_d08;
  undefined1 auStack_cd8 [24];
  code *pcStack_cc0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  ulong uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  ulong uStack_c70;
  ulong *puStack_c68;
  ulong *puStack_c60;
  ulong *puStack_c58;
  long *plStack_c50;
  code *pcStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  ulong uStack_c30;
  undefined *puStack_c28;
  undefined1 auStack_c20 [24];
  code *pcStack_c08;
  undefined1 auStack_be0 [24];
  code *pcStack_bc8;
  undefined1 auStack_b98 [24];
  code *pcStack_b80;
  undefined1 auStack_b58 [4];
  undefined4 uStack_b54;
  undefined8 uStack_b50;
  undefined8 *puStack_b48;
  undefined1 auStack_b40 [8];
  undefined8 uStack_b38;
  code *pcStack_b30;
  undefined1 auStack_b28 [16];
  undefined *puStack_b18;
  code *pcStack_b10;
  code *pcStack_b08;
  long *plStack_b00;
  ulong uStack_af8;
  code *pcStack_af0;
  long *plStack_ae8;
  long lStack_ae0;
  byte bStack_ad8;
  code *apcStack_ac8 [3];
  code *pcStack_ab0;
  undefined1 auStack_aa0 [24];
  code *pcStack_a88;
  undefined1 auStack_a80 [24];
  code *pcStack_a68;
  undefined1 auStack_a58 [24];
  code *apcStack_a40 [2];
  undefined1 auStack_a30 [24];
  code *pcStack_a18;
  code *pcStack_a10;
  ulong uStack_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined1 auStack_9f0 [16];
  undefined1 auStack_9e0 [8];
  code *pcStack_9d8;
  code *pcStack_9c8;
  undefined1 auStack_9b0 [16];
  undefined1 auStack_9a0 [8];
  code *pcStack_998;
  code *pcStack_988;
  undefined1 auStack_968 [8];
  undefined1 auStack_960 [16];
  code *pcStack_950;
  code *pcStack_948;
  undefined1 auStack_928 [16];
  undefined1 auStack_918 [24];
  code *pcStack_900;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined1 auStack_8b0 [16];
  undefined1 auStack_8a0 [8];
  undefined1 auStack_898 [16];
  code *pcStack_888;
  code *pcStack_880;
  undefined1 auStack_860 [16];
  undefined1 auStack_850 [8];
  code *pcStack_848;
  code *pcStack_838;
  undefined1 auStack_820 [16];
  undefined1 auStack_810 [8];
  code *pcStack_808;
  undefined1 auStack_800 [24];
  code *pcStack_7e8;
  undefined1 auStack_7d8 [24];
  code *apcStack_7c0 [3];
  code *pcStack_7a8;
  ulong uStack_798;
  ulong uStack_790;
  undefined4 *puStack_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined1 auStack_770 [8];
  code *pcStack_768;
  undefined1 auStack_760 [24];
  code *pcStack_748;
  undefined1 auStack_738 [24];
  code *apcStack_720 [3];
  code *pcStack_708;
  undefined1 auStack_6f8 [16];
  undefined1 auStack_6e8 [8];
  undefined1 auStack_6e0 [16];
  code *pcStack_6d0;
  code *pcStack_6c8;
  undefined1 auStack_6a8 [16];
  undefined1 auStack_698 [8];
  code *pcStack_690;
  code *pcStack_680;
  undefined1 auStack_668 [16];
  ulong uStack_658;
  code *pcStack_650;
  ulong uStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [24];
  code *pcStack_608;
  undefined1 auStack_5e0 [24];
  code *pcStack_5c8;
  undefined1 auStack_5a0 [24];
  code *pcStack_588;
  undefined1 auStack_558 [24];
  code *pcStack_540;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  ulong uStack_4e8;
  long *plStack_4e0;
  undefined8 *puStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  ulong *puStack_480;
  ulong *puStack_478;
  long lStack_470;
  ulong uStack_468;
  ulong uStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_418;
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  ulong *puStack_3d8;
  ulong *puStack_3d0;
  ulong *puStack_3c8;
  code *pcStack_3c0;
  code *pcStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined1 auStack_390 [24];
  code *pcStack_378;
  undefined1 auStack_350 [24];
  code *pcStack_338;
  undefined1 auStack_308 [24];
  code *pcStack_2f0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulong *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [24];
  code *pcStack_278;
  undefined1 auStack_250 [24];
  code *pcStack_238;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1c8 [24];
  code *pcStack_1b0;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined4 *apuStack_150 [2];
  undefined *puStack_140;
  code *pcStack_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [24];
  code *pcStack_f8;
  undefined1 auStack_d0 [24];
  code *pcStack_b8;
  undefined1 auStack_88 [24];
  code *pcStack_70;
  long *plStack_40;
  ulong uStack_38;
  
  puStack_b48 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puStack_b48 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar5 = _UNK_013501ca;
  _auStack_b58 = (undefined *)0x1b;
  uStack_b50 = (long *)0x17;
  *puStack_b48 = _DAT_013501c2;
  puStack_b48[1] = uVar5;
  *(undefined8 *)((long)puStack_b48 + 0xf) = 0x6c616e7265746e49;
  *(undefined1 *)((long)puStack_b48 + 0x17) = 0;
  uStack_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  lStack_518 = 0;
  lStack_510 = 0;
  puStack_4d8 = (undefined8 *)0x0;
  func_0x048b1dc0(auStack_4d0);
  func_0x048b1dc0(&uStack_4c0);
  uStack_420 = 0;
  lStack_418 = 0;
  lStack_430 = 0;
  uStack_428 = 0;
  lStack_440 = 0;
  lStack_438 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  uStack_460 = 0;
  lStack_458 = 0;
  lStack_470 = 0;
  uStack_468 = 0;
  puStack_480 = (ulong *)0x0;
  puStack_478 = (ulong *)0x0;
  lStack_490 = 0;
  lStack_488 = 0;
  lStack_4a0 = 0;
  lStack_498 = 0;
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  if ((uStack_4e8 & 1) == 0) {
    if (((ulong)_auStack_b58 & 1) == 0) {
      puStack_4d8 = puStack_b48;
      uStack_4e8 = (ulong)_auStack_b58;
      plStack_4e0 = uStack_b50;
    }
    else {
      func_0x04885070(&uStack_4e8,puStack_b48,uStack_b50);
    }
  }
  else {
    plVar20 = (long *)((ulong)_auStack_b58 >> 1 & 0x7f);
    puVar16 = (undefined8 *)(auStack_b58 + 1);
    if (((ulong)_auStack_b58 & 1) != 0) {
      plVar20 = uStack_b50;
      puVar16 = puStack_b48;
    }
    func_0x04885120(&uStack_4e8,puVar16,plVar20);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  uStack_2c8 = (ulong *)0x726579616c700c;
  func_0x0986b000(auStack_b58,&uStack_2c8);
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  uStack_d78 = 0;
  uStack_d70 = 0;
  pcStack_d88 = (code *)0x0;
  uStack_d80 = 0;
  uStack_d98 = 0;
  pcStack_d90 = (code *)0x0;
  uStack_da8 = 0;
  uStack_da0 = 0;
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  auStack_dc0._0_8_ = 0x79616c5074656722;
  auStack_dc0._8_8_ = 0x6369767265537265;
  uStack_db0 = 0x7365;
  func_0x098c1d50(&uStack_408,auStack_b58);
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f2fb0f8;
  uVar12 = func_0x0d858500(&uStack_408);
  pcVar28 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar12;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f2fb148;
  *(undefined4 *)(pcVar15 + 0x48) = (undefined4)uStack_408;
  *(undefined4 *)(pcVar15 + 0x4c) = uStack_408._4_4_;
  *(undefined4 *)(pcVar15 + 0x50) = (undefined4)uStack_400;
  *(undefined4 *)(pcVar15 + 0x54) = uStack_400._4_4_;
  *(ulong *)(pcVar15 + 0x58) = uStack_3f8;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  uVar12 = func_0x0d858620(pcVar28);
  pcVar27 = pcStack_d88;
  *(undefined4 *)(pcVar15 + 0x28) = uVar12;
  pcStack_d90 = pcVar28;
  if (pcStack_d88 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcStack_d88 + 8);
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *(long *)pcStack_d88;
      pcStack_d88 = pcVar15;
      (**(code **)(lVar25 + 0x10))(pcVar27);
      func_0x0412c2d0(pcVar27);
      pcVar15 = pcStack_d88;
    }
  }
  pcStack_d88 = pcVar15;
  cVar11 = func_0x098c1ed0(&uStack_dd8,auStack_b58);
  if (cVar11 == '\0') {
    puVar17 = (ulong *)0xf6c4790;
    uVar5 = uStack_c40;
    auVar6 = auStack_b40;
    pcVar15 = uStack_408;
  }
  else {
    if (puStack_480 < puStack_478) {
      *puStack_480 = 0;
      puStack_480[1] = 0;
      puStack_480[2] = 0;
      *puStack_480 = CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8)));
      puStack_480[1] =
           CONCAT17(uStack_dc9,
                    CONCAT16(uStack_dca,
                             CONCAT15(uStack_dcb,
                                      CONCAT14(uStack_dcc,
                                               CONCAT13(uStack_dcd,CONCAT21(uStack_dcf,uStack_dd0)))
                                     )));
      puStack_480[2] = CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
      uStack_dd8 = 0;
      uStack_dd4 = 0;
      uStack_dd3 = 0;
      uStack_dd2 = 0;
      uStack_dd0 = 0;
      uStack_dcf = 0;
      uStack_dcd = 0;
      uStack_dcc = 0;
      uStack_dcb = 0;
      uStack_dca = 0;
      uStack_dc9 = 0;
      uStack_dc8 = 0;
      uStack_dc7 = 0;
      uStack_dc1 = 0;
      puStack_480[5] = uStack_db0;
      puStack_480[3] = auStack_dc0._0_8_;
      puStack_480[4] = auStack_dc0._8_8_;
      auStack_dc0._0_8_ = 0;
      auStack_dc0._8_8_ = 0;
      uStack_db0 = 0;
      puStack_480[6] = 0;
      puStack_480[7] = 0;
      puStack_480[8] = 0;
      puStack_480[6] = uStack_da8;
      puStack_480[7] = uStack_da0;
      puStack_480[8] = uStack_d98;
      uStack_da8 = 0;
      uStack_da0 = 0;
      uStack_d98 = 0;
      puStack_480[9] = (ulong)pcStack_d90;
      puStack_480[10] = (ulong)pcStack_d88;
      pcStack_d90 = (code *)0x0;
      pcStack_d88 = (code *)0x0;
      puStack_480[0xb] = 0;
      puStack_480[0xc] = 0;
      puStack_480[0xd] = 0;
      *(undefined4 *)(puStack_480 + 0xb) = (undefined4)uStack_d80;
      *(undefined4 *)((long)puStack_480 + 0x5c) = uStack_d80._4_4_;
      *(undefined4 *)(puStack_480 + 0xc) = (undefined4)uStack_d78;
      *(undefined4 *)((long)puStack_480 + 100) = uStack_d78._4_4_;
      puStack_480[0xd] = uStack_d70;
      uStack_d80 = 0;
      uStack_d78 = 0;
      uStack_d70 = 0;
      puStack_480 = puStack_480 + 0xe;
    }
    else {
      puStack_480 = (ulong *)func_0x0652ac80(&lStack_488,&uStack_dd8);
    }
    puVar17 = puStack_480 + -0xe;
    uVar5 = uStack_c40;
    auVar6 = auStack_b40;
    pcVar15 = uStack_408;
  }
  uStack_408 = pcVar15;
  if (pcVar15 != (code *)0x0) {
    auStack_b40._4_4_ = (undefined4)((ulong)auVar6 >> 0x20);
    uStack_c40._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
    if (pcVar15 != uStack_400) {
      pcVar28 = uStack_400 + -0x40;
      uStack_c40 = uVar5;
      auStack_b40 = auVar6;
      do {
        if (*(code **)(pcVar28 + 0x18) != (code *)0x0) {
          (**(code **)(pcVar28 + 0x18))(pcVar28);
        }
        if (*(code **)(pcVar28 + -0x30) != (code *)0x0) {
          (**(code **)(pcVar28 + -0x30))(pcVar28 + -0x48);
        }
        if (*(code **)(pcVar28 + -0x70) != (code *)0x0) {
          (**(code **)(pcVar28 + -0x70))(pcVar28 + -0x88);
        }
        if (*(code **)(pcVar28 + -0xb0) != (code *)0x0) {
          (**(code **)(pcVar28 + -0xb0))(pcVar28 + -200);
        }
        pcVar27 = pcVar28 + -0xd8;
        pcVar28 = pcVar28 + -0x118;
      } while (pcVar27 != pcVar15);
    }
    uStack_400 = pcVar15;
    func_0x0412a280(uStack_408,uStack_3f8 - (long)uStack_408);
  }
  func_0x05f93280(&uStack_dd8);
  func_0x064e40a0(puVar17);
  if (apcStack_a40[0] != (code *)0x0) {
    (*apcStack_a40[0])(auStack_a58);
  }
  if (pcStack_a88 != (code *)0x0) {
    (*pcStack_a88)(auStack_aa0);
  }
  if (apcStack_ac8[0] != (code *)0x0) {
    (*apcStack_ac8[0])(&lStack_ae0);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b28 + 8);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  bStack_eb0 = 0x1a;
  uStack_eaf = 0x65747865;
  uStack_eab = 0x6e;
  uStack_eaa = 0x73;
  uStack_ea9 = 0x69;
  uStack_ea8 = 0x6f;
  uStack_ea7 = 0x6e;
  uStack_ea6 = 0x656d614e;
  uStack_ea2 = 0;
  func_0x068c6fe0(&uStack_dd8,&bStack_eb0);
  uStack_ec8 = CONCAT31((int3)_DAT_013bb05f,0x24);
  uStack_ec4 = (undefined1)((uint)_DAT_013bb05f >> 0x18);
  uStack_ec3 = (undefined2)_UNK_013bb063;
  uStack_ec1 = (undefined1)((uint)_UNK_013bb063 >> 0x10);
  uStack_ec0._1_3_ = (undefined3)_UNK_013bb067;
  uStack_ec0 = CONCAT31(uStack_ec0._1_3_,(char)((uint)_UNK_013bb063 >> 0x18));
  uStack_ebc._1_3_ = (undefined3)_UNK_013bb06b;
  uStack_ebc = CONCAT31(uStack_ebc._1_3_,(char)((uint)_UNK_013bb067 >> 0x18));
  uStack_eb8 = (undefined1)((uint)_UNK_013bb06b >> 0x18);
  uStack_eb7 = 0x6e6f;
  uStack_eb5 = 0;
  func_0x0ba21810(&uStack_408,&uStack_ec8);
  puStack_ef0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_ef0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar8 = _UNK_014079b8;
  uVar7 = _UNK_014079b4;
  uVar12 = _UNK_014079b0;
  uStack_f00 = 0x21;
  uStack_ef8 = 0x18;
  *puStack_ef0 = _DAT_014079ac;
  puStack_ef0[1] = uVar12;
  puStack_ef0[2] = uVar7;
  puStack_ef0[3] = uVar8;
  *(undefined8 *)(puStack_ef0 + 4) = 0x6e6f6974636e7546;
  *(undefined1 *)(puStack_ef0 + 6) = 0;
  func_0x0ba21810(&uStack_2c8,&uStack_f00);
  bStack_df0 = 0x20;
  uStack_def = _DAT_01455b0c;
  uStack_deb = _UNK_01455b10;
  uStack_de7 = _UNK_01455b14;
  uStack_de3 = _UNK_01455b18;
  uStack_ddf = 0;
  func_0x0ba21810(&uStack_188,&bStack_df0);
  uStack_e08 = 0x74706f0e;
  uStack_e04 = 0x736e6f69;
  uStack_e00 = uStack_e00 & 0xffffff00;
  uStack_c98 = 0;
  uStack_c90 = 0;
  uStack_c88 = 0;
  func_0x048b1dc0(&uStack_c80);
  func_0x0652b590(&uStack_c70);
  if ((uStack_c98 & 1) == 0) {
    if ((uStack_e08 & 1) == 0) {
      uStack_c88 = uStack_df8;
      uStack_c98 = CONCAT44(uStack_e04,uStack_e08);
      uStack_c90 = CONCAT44(uStack_dfc,uStack_e00);
    }
    else {
      func_0x04885070(&uStack_c98,uStack_df8,CONCAT44(uStack_dfc,uStack_e00));
    }
  }
  else {
    bVar30 = (uStack_e08 & 1) != 0;
    uVar18 = (long)&uStack_e08 + 1;
    if (bVar30) {
      uVar18 = uStack_df8;
    }
    uVar23 = (ulong)((byte)uStack_e08 >> 1);
    if (bVar30) {
      uVar23 = CONCAT44(uStack_dfc,uStack_e00);
    }
    func_0x04885120(&uStack_c98,uVar18,uVar23);
  }
  plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar20 == (long *)0x0) {
    func_0x048b0de0(auStack_b58,&puStack_e78);
    _DAT_0f54fd90 = auStack_b58;
    uRam000000000f54fd94 = uStack_b54;
    uVar12 = (undefined4)uStack_b50;
    uVar7 = uStack_b50._4_4_;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar7;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_b50;
    if (uStack_b50 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_b50 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_b50 + 0x10))(uStack_b50);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6c9de8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6c9de8), iVar14 != 0)) {
    func_0x0bacb1a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6c9d68,0xf53dab8);
    func_0x0410844d(&DAT_0f6c9de8);
  }
  plVar21 = (long *)(*plVar20 +
                    (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                           *(uint *)(_DAT_0f6c9d68 + 4)) * 8);
  do {
    lVar25 = *plVar21;
    if (lVar25 == -1) goto LAB_0ba1a440;
    plVar21 = (long *)(plVar20[3] + lVar25 * 0x18);
  } while (*(uint *)(plVar20[3] + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f6c9d68 + 4));
  if (plVar21 == (long *)plVar20[4]) {
LAB_0ba1a440:
    uStack_c80 = &DAT_0f6c9d68;
  }
  else {
    uStack_c80 = (undefined *)plVar21[2];
  }
  _auStack_b58 = (undefined *)((ulong)_auStack_b58 & 0xffffffffffffff00);
  uStack_af8 = uStack_af8 & 0xffffffffffffff00;
  uStack_c78 = plVar20;
  if (pcStack_c48 != (code *)0x0) {
    (*pcStack_c48)(&puStack_c60);
  }
  plStack_c50 = (long *)&UNK_0bacb590;
  pcStack_c48 = (code *)&UNK_0bacb880;
  uStack_c40 = CONCAT35(uStack_c40._5_3_,0x14fa48bd9);
  puStack_c60 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puStack_c60 == (ulong *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  puVar10 = puStack_c28;
  *(undefined1 *)puStack_c60 = 0;
  *(undefined1 *)(puStack_c60 + 0xc) = 0;
  puStack_c28 = &UNK_0bacb3e0;
  if (puVar10 != &UNK_0bacb3e0) {
    uStack_c30 = 0;
  }
  uStack_e68 = (ulong **)0x0;
  uStack_e18 = 0;
  uStack_e10 = 0;
  plStack_e28 = (long *)0x0;
  uStack_e20 = 0;
  puStack_e38 = (ulong *)0x0;
  plStack_e30 = (long *)0x0;
  puStack_e48 = (ulong *)0x0;
  puStack_e40 = (ulong *)0x0;
  puStack_e78 = (ulong *)0x0;
  puStack_e70 = (ulong *)0x0;
  uStack_e60 = 0x6574736967657222;
  uStack_e58 = 0x69736e6574784572;
  uStack_e50 = 0x6e6f;
  plStack_40 = param_1;
  func_0x06523ef0(auStack_b58,&uStack_db0);
  func_0x06523ef0(apcStack_a40,&uStack_3e0);
  func_0x06523ef0(auStack_928,auStack_2a0);
  func_0x06523ef0(auStack_810,auStack_160);
  func_0x06523ef0(auStack_6f8,&uStack_c70);
  uStack_f18._0_4_ = 0;
  uStack_f18._4_4_ = 0;
  uStack_f10 = 0;
  uStack_f0f = 0;
  uStack_f0d = 0;
  uStack_f0c = 0;
  lStack_f08 = 0;
  uStack_e90 = uStack_e90 & 0xffffffffffffff00;
  puStack_e98 = &uStack_f18;
  uStack_ee8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x578);
  if (uStack_ee8 == (ulong *)0x0) {
    func_0x0eec74c0(0x578,0);
  }
  uStack_f18._0_4_ = (uint)uStack_ee8;
  uStack_f18._4_4_ = (undefined4)((ulong)uStack_ee8 >> 0x20);
  uStack_f10 = SUB81(uStack_ee8,0);
  uStack_f0f = (undefined2)((ulong)uStack_ee8 >> 8);
  uStack_f0d = (undefined1)((ulong)uStack_ee8 >> 0x18);
  lStack_f08 = (long)uStack_ee8 + 0x578;
  uStack_f30 = &uStack_38;
  uStack_f28 = &uStack_ee8;
  uStack_f20 = uStack_f20 & 0xffffff00;
  uStack_f38 = (ulong **)&uStack_f18;
  uStack_f0c = uStack_f18._4_4_;
  uStack_38 = (ulong)uStack_ee8;
  func_0x06523ef0(uStack_ee8,auStack_b58);
  uStack_ee8 = (ulong *)((long)uStack_ee8 + 0x118);
  func_0x06523ef0(uStack_ee8,apcStack_a40);
  uStack_ee8 = (ulong *)((long)uStack_ee8 + 0x118);
  func_0x06523ef0(uStack_ee8,auStack_928);
  uStack_ee8 = (ulong *)((long)uStack_ee8 + 0x118);
  func_0x06523ef0(uStack_ee8,auStack_810);
  uStack_ee8 = (ulong *)((long)uStack_ee8 + 0x118);
  func_0x06523ef0(uStack_ee8,auStack_6f8);
  puVar17 = uStack_ee8 + 0x23;
  uStack_f10 = SUB81(puVar17,0);
  uStack_f0f = (undefined2)((ulong)puVar17 >> 8);
  uStack_f0d = (undefined1)((ulong)puVar17 >> 0x18);
  uStack_f0c = (undefined4)((ulong)puVar17 >> 0x20);
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_620);
  }
  if (pcStack_650 != (code *)0x0) {
    (*pcStack_650)(auStack_668);
  }
  if (pcStack_690 != (code *)0x0) {
    (*pcStack_690)(auStack_6a8);
  }
  if (pcStack_6d0 != (code *)0x0) {
    (*pcStack_6d0)(auStack_6e8);
  }
  if (apcStack_720[0] != (code *)0x0) {
    (*apcStack_720[0])(auStack_738);
  }
  if (pcStack_768 != (code *)0x0) {
    (*pcStack_768)(&uStack_780);
  }
  if (pcStack_7a8 != (code *)0x0) {
    (*pcStack_7a8)(apcStack_7c0);
  }
  if (pcStack_7e8 != (code *)0x0) {
    (*pcStack_7e8)(auStack_800);
  }
  if (pcStack_838 != (code *)0x0) {
    (*pcStack_838)(auStack_850);
  }
  if (pcStack_880 != (code *)0x0) {
    (*pcStack_880)(auStack_898);
  }
  if ((code *)CONCAT44(uStack_8bc,uStack_8c0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_8bc,uStack_8c0))(&uStack_8d8);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_950 != (code *)0x0) {
    (*pcStack_950)(auStack_968);
  }
  if (pcStack_998 != (code *)0x0) {
    (*pcStack_998)(auStack_9b0);
  }
  if (pcStack_9d8 != (code *)0x0) {
    (*pcStack_9d8)(auStack_9f0);
  }
  if (pcStack_a18 != (code *)0x0) {
    (*pcStack_a18)(auStack_a30);
  }
  if (pcStack_a68 != (code *)0x0) {
    (*pcStack_a68)(auStack_a80);
  }
  if (pcStack_ab0 != (code *)0x0) {
    (*pcStack_ab0)(apcStack_ac8);
  }
  if (pcStack_af0 != (code *)0x0) {
    (*pcStack_af0)(&pcStack_b08);
  }
  if (pcStack_b30 != (code *)0x0) {
    (*pcStack_b30)(&puStack_b48);
  }
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f2fb1d8;
  uVar12 = func_0x0d858500(&uStack_f18);
  plVar20 = puVar16 + 3;
  *(undefined1 *)(puVar16 + 4) = 2;
  *(undefined4 *)((long)puVar16 + 0x24) = uVar12;
  *(undefined4 *)(puVar16 + 5) = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[8] = 0;
  puVar16[3] = &UNK_0f2fb228;
  *(uint *)(puVar16 + 9) = (uint)uStack_f18;
  *(undefined4 *)((long)puVar16 + 0x4c) = uStack_f18._4_4_;
  *(uint *)(puVar16 + 10) = CONCAT13(uStack_f0d,CONCAT21(uStack_f0f,uStack_f10));
  *(undefined4 *)((long)puVar16 + 0x54) = uStack_f0c;
  puVar16[0xb] = lStack_f08;
  uStack_f18._0_4_ = 0;
  uStack_f18._4_4_ = 0;
  uStack_f10 = 0;
  uStack_f0f = 0;
  uStack_f0d = 0;
  uStack_f0c = 0;
  lStack_f08 = 0;
  uVar12 = func_0x0d858620(plVar20);
  plVar21 = plStack_e28;
  *(undefined4 *)(puVar16 + 5) = uVar12;
  plStack_e30 = plVar20;
  if (plStack_e28 == (long *)0x0) {
LAB_0ba1a9e1:
    lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    plStack_e28 = puVar16;
  }
  else {
    LOCK();
    plVar20 = plStack_e28 + 1;
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0ba1a9e1;
    lVar25 = *plStack_e28;
    plStack_e28 = puVar16;
    (**(code **)(lVar25 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (lVar25 == 0) {
    func_0x048b0de0(auStack_b58,&uStack_f38);
    _DAT_0f54fd90 = auStack_b58;
    uRam000000000f54fd94 = uStack_b54;
    uVar12 = (undefined4)uStack_b50;
    uVar7 = uStack_b50._4_4_;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar7;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_b50;
    if (uStack_b50 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_b50 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_b50 + 0x10))(uStack_b50);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6c9e08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6c9e08), iVar14 != 0)) {
    func_0x0bacb2d0();
    func_0x0410844d(&DAT_0f6c9e08);
  }
  if ((DAT_0f6c9e08 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6c9e08), iVar14 != 0)) {
    func_0x0bacb2d0();
    func_0x0410844d(&DAT_0f6c9e08);
  }
  _auStack_b58 = &DAT_0f6c9df0;
  uStack_b50 = (long *)CONCAT44(uStack_b50._4_4_,_DAT_0f6c9df4);
  puStack_b48 = (undefined8 *)0x0;
  auStack_b40._0_4_ = 0x80;
  uStack_b38 = (undefined *)0x68;
  pcStack_b30 = (code *)&UNK_0bacb0e0;
  auStack_b28._0_8_ = &UNK_0bacb350;
  auStack_b28._8_8_ = 0;
  puStack_b18 = &UNK_0bacb920;
  pcStack_b10 = (code *)0x1;
  pcStack_b08 = (code *)&SUB_048b5640;
  plStack_b00 = (long *)&UNK_0bacb9b0;
  uStack_af8 = uStack_af8 & 0xffffffff00000000;
  pcStack_af0 = (code *)0x0;
  plStack_ae8 = (long *)0x0;
  lStack_ae0 = 0;
  func_0x048aee30(&uStack_ee8,lVar25,auStack_b58,0x4fa48bd9);
  lVar25 = lStack_ae0;
  lStack_ae0 = 0;
  if (lVar25 != 0) {
    FUN_048ae940(lVar25);
    func_0x0412a280(lVar25,0x78);
  }
  plVar20 = plStack_ae8;
  if (plStack_ae8 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_ae8 + 1;
    lVar25 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plStack_ae8 + 0x10))(plStack_ae8);
      func_0x0412c2d0(plVar20);
    }
  }
  if ((DAT_0f6c9ef0 == '\0') && (iVar14 = func_0x04108328(&DAT_0f6c9ef0), iVar14 != 0)) {
    func_0x0bacf740();
    func_0x0410844d(&DAT_0f6c9ef0);
  }
  auStack_b58 = (undefined1  [4])_DAT_0f6c9edc;
  uStack_b50 = (long *)0x1;
  puStack_b48 = (undefined8 *)&UNK_0bacf120;
  auStack_b40 = (undefined1  [8])&UNK_0bacf1e0;
  func_0x065abe60(&uStack_ee8);
  uStack_e88 = (undefined4)uStack_ed8;
  uStack_e84 = uStack_ed8._4_4_;
  uStack_e80 = uStack_ed0;
  uStack_e7c = uStack_ecc;
  puStack_e98 = uStack_ee8;
  uStack_e90 = (ulong)uStack_ee0;
  auStack_b58 = (undefined1  [4])0xf55160ec;
  uStack_b50 = (long *)0x0;
  puStack_b48 = (undefined8 *)((ulong)puStack_b48 & 0xffffffff00000000);
  auStack_b40 = (undefined1  [8])0x0;
  uStack_b38 = &UNK_065b4120;
  pcStack_b30 = (code *)&SUB_048b06d0;
  auStack_b28._0_8_ = &UNK_0bacfa60;
  auStack_b28._8_8_ = 0;
  puStack_b18 = (undefined *)((ulong)puStack_b18 & 0xffffffff00000000);
  pcStack_b10 = (code *)0x0;
  pcStack_b08 = (code *)0x0;
  func_0x049057f0(&puStack_e98,auStack_b58);
  func_0x048aea50(auStack_b58);
  uStack_f28 = (ulong *)CONCAT44(uStack_e84,uStack_e88);
  uStack_f20 = uStack_e80;
  uStack_f1c = uStack_e7c;
  uStack_f38 = (ulong **)puStack_e98;
  uStack_f30 = (ulong *)uStack_e90;
  _auStack_b58 = (undefined *)CONCAT44(uStack_b54,0xf55160ec);
  uStack_b50 = (long *)0x0;
  puStack_b48 = (undefined8 *)CONCAT44(puStack_b48._4_4_,1);
  auStack_b40 = (undefined1  [8])0x0;
  uStack_b38 = &UNK_065b4120;
  pcStack_b30 = (code *)&SUB_048b06d0;
  auStack_b28._0_8_ = &UNK_0bacfd10;
  auStack_b28._8_8_ = 0;
  puStack_b18 = (undefined *)((ulong)puStack_b18 & 0xffffffff00000000);
  pcStack_b10 = (code *)0x0;
  pcStack_b08 = (code *)0x0;
  func_0x049057f0(&uStack_f38,auStack_b58);
  func_0x048aea50(auStack_b58);
  puStack_b48 = (undefined8 *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
  _auStack_b58 = (undefined *)
                 CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8)));
  uStack_b50 = (long *)CONCAT17(uStack_dc9,
                                CONCAT16(uStack_dca,
                                         CONCAT15(uStack_dcb,
                                                  CONCAT14(uStack_dcc,
                                                           CONCAT13(uStack_dcd,
                                                                    CONCAT21(uStack_dcf,uStack_dd0))
                                                          ))));
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  auStack_b40 = (undefined1  [8])auStack_dc0._0_8_;
  uStack_b38 = (undefined *)auStack_dc0._8_8_;
  func_0x065281f0(&pcStack_b30,&uStack_db0);
  uStack_a08 = uStack_3f8;
  pcStack_a18 = uStack_408;
  pcStack_a10 = uStack_400;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  uStack_a00 = (undefined4)uStack_3f0;
  uStack_9fc = uStack_3f0._4_4_;
  uStack_9f8 = (undefined4)uStack_3e8;
  uStack_9f4 = uStack_3e8._4_4_;
  func_0x065281f0(auStack_9f0,&uStack_3e0);
  uStack_8c8 = (ulong)puStack_2b8;
  uStack_8d8 = (ulong)uStack_2c8;
  uStack_8d0 = (ulong)uStack_2c0;
  uStack_2c8 = (ulong *)0x0;
  uStack_2c0 = (ulong **)0x0;
  puStack_2b8 = (ulong *)0x0;
  uStack_8c0 = (undefined4)uStack_2b0;
  uStack_8bc = uStack_2b0._4_4_;
  uStack_8b8 = (undefined4)uStack_2a8;
  uStack_8b4 = uStack_2a8._4_4_;
  func_0x065281f0(auStack_8b0,auStack_2a0);
  puStack_788 = (undefined4 *)puStack_178;
  uStack_798 = (ulong)uStack_188;
  uStack_790 = (ulong)uStack_180;
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  uStack_780 = (undefined4)uStack_170;
  uStack_77c = uStack_170._4_4_;
  uStack_778 = (undefined4)uStack_168;
  uStack_774 = uStack_168._4_4_;
  func_0x065281f0(auStack_770,auStack_160);
  uStack_648 = uStack_c88;
  uStack_658 = uStack_c98;
  pcStack_650 = (code *)uStack_c90;
  uStack_c98 = 0;
  uStack_c90 = 0;
  uStack_c88 = 0;
  uStack_640 = (undefined4)uStack_c80;
  uStack_63c = uStack_c80._4_4_;
  uStack_638 = (undefined4)uStack_c78;
  uStack_634 = uStack_c78._4_4_;
  func_0x065281f0(auStack_630,&uStack_c70);
  uStack_f38 = (ulong **)0x0;
  uStack_f30 = (ulong *)0x0;
  uStack_f28 = (ulong *)0x0;
  uStack_e90 = uStack_e90 & 0xffffffffffffff00;
  puStack_e98 = &uStack_f38;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x640);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x640,0);
  }
  puVar2 = puVar17 + 200;
  uStack_f38 = (ulong **)puVar17;
  uStack_f30 = puVar17;
  uStack_f28 = puVar2;
  if (((ulong)_auStack_b58 & 1) == 0) {
    puVar17[2] = (ulong)puStack_b48;
    *puVar17 = (ulong)_auStack_b58;
    puVar17[1] = (ulong)uStack_b50;
  }
  else {
    func_0x0412e5e0(puVar17,puStack_b48,uStack_b50);
  }
  *(undefined4 *)(puVar17 + 3) = auStack_b40._0_4_;
  *(undefined4 *)((long)puVar17 + 0x1c) = auStack_b40._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)uStack_b38;
  *(undefined4 *)((long)puVar17 + 0x24) = uStack_b38._4_4_;
  func_0x06523ef0(puVar17 + 5,&pcStack_b30);
  if (((ulong)pcStack_a18 & 1) == 0) {
    puVar17[0x2a] = uStack_a08;
    puVar17[0x28] = (ulong)pcStack_a18;
    puVar17[0x29] = (ulong)pcStack_a10;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x28,uStack_a08,pcStack_a10);
  }
  *(undefined4 *)(puVar17 + 0x2b) = uStack_a00;
  *(undefined4 *)((long)puVar17 + 0x15c) = uStack_9fc;
  *(undefined4 *)(puVar17 + 0x2c) = uStack_9f8;
  *(undefined4 *)((long)puVar17 + 0x164) = uStack_9f4;
  func_0x06523ef0(puVar17 + 0x2d,auStack_9f0);
  if ((uStack_8d8 & 1) == 0) {
    puVar17[0x52] = uStack_8c8;
    puVar17[0x50] = uStack_8d8;
    puVar17[0x51] = uStack_8d0;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x50,uStack_8c8,uStack_8d0);
  }
  *(undefined4 *)(puVar17 + 0x53) = uStack_8c0;
  *(undefined4 *)((long)puVar17 + 0x29c) = uStack_8bc;
  *(undefined4 *)(puVar17 + 0x54) = uStack_8b8;
  *(undefined4 *)((long)puVar17 + 0x2a4) = uStack_8b4;
  func_0x06523ef0(puVar17 + 0x55,auStack_8b0);
  if ((uStack_798 & 1) == 0) {
    puVar17[0x7a] = (ulong)puStack_788;
    puVar17[0x78] = uStack_798;
    puVar17[0x79] = uStack_790;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x78,puStack_788,uStack_790);
  }
  *(undefined4 *)(puVar17 + 0x7b) = uStack_780;
  *(undefined4 *)((long)puVar17 + 0x3dc) = uStack_77c;
  *(undefined4 *)(puVar17 + 0x7c) = uStack_778;
  *(undefined4 *)((long)puVar17 + 0x3e4) = uStack_774;
  func_0x06523ef0(puVar17 + 0x7d,auStack_770);
  if ((uStack_658 & 1) == 0) {
    puVar17[0xa2] = uStack_648;
    puVar17[0xa0] = uStack_658;
    puVar17[0xa1] = (ulong)pcStack_650;
  }
  else {
    func_0x0412e5e0(puVar17 + 0xa0,uStack_648,pcStack_650);
  }
  *(undefined4 *)(puVar17 + 0xa3) = uStack_640;
  *(undefined4 *)((long)puVar17 + 0x51c) = uStack_63c;
  *(undefined4 *)(puVar17 + 0xa4) = uStack_638;
  *(undefined4 *)((long)puVar17 + 0x524) = uStack_634;
  func_0x06523ef0(puVar17 + 0xa5,auStack_630);
  uStack_f30 = puVar2;
  if (pcStack_540 != (code *)0x0) {
    (*pcStack_540)(auStack_558);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(auStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(auStack_5e0);
  }
  if (pcStack_608 != (code *)0x0) {
    (*pcStack_608)(auStack_620);
  }
  if ((uStack_658 & 1) != 0) {
    func_0x0412a280(uStack_648,uStack_658 & 0xfffffffffffffffe);
  }
  if (pcStack_680 != (code *)0x0) {
    (*pcStack_680)(auStack_698);
  }
  if (pcStack_6c8 != (code *)0x0) {
    (*pcStack_6c8)(auStack_6e0);
  }
  if (pcStack_708 != (code *)0x0) {
    (*pcStack_708)(apcStack_720);
  }
  if (pcStack_748 != (code *)0x0) {
    (*pcStack_748)(auStack_760);
  }
  if ((uStack_798 & 1) != 0) {
    func_0x0412a280(puStack_788,uStack_798 & 0xfffffffffffffffe);
  }
  if (apcStack_7c0[0] != (code *)0x0) {
    (*apcStack_7c0[0])(auStack_7d8);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(auStack_820);
  }
  if (pcStack_848 != (code *)0x0) {
    (*pcStack_848)(auStack_860);
  }
  if (pcStack_888 != (code *)0x0) {
    (*pcStack_888)(auStack_8a0);
  }
  if ((uStack_8d8 & 1) != 0) {
    func_0x0412a280(uStack_8c8,uStack_8d8 & 0xfffffffffffffffe);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_948 != (code *)0x0) {
    (*pcStack_948)(auStack_960);
  }
  if (pcStack_988 != (code *)0x0) {
    (*pcStack_988)(auStack_9a0);
  }
  if (pcStack_9c8 != (code *)0x0) {
    (*pcStack_9c8)(auStack_9e0);
  }
  if (((ulong)pcStack_a18 & 1) != 0) {
    func_0x0412a280(uStack_a08,(ulong)pcStack_a18 & 0xfffffffffffffffe);
  }
  if (apcStack_a40[0] != (code *)0x0) {
    (*apcStack_a40[0])(auStack_a58);
  }
  if (pcStack_a88 != (code *)0x0) {
    (*pcStack_a88)(auStack_aa0);
  }
  if (apcStack_ac8[0] != (code *)0x0) {
    (*apcStack_ac8[0])(&lStack_ae0);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b28 + 8);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_e30 + 0x20))();
  uVar23 = ((long)uStack_f30 - (long)uStack_f38 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar13 != 0) && ((uint)uVar23 != 0)) {
    uVar26 = 0;
    uVar18 = 0;
    do {
      auVar31 = (**(code **)(*plStack_e30 + 0x28))(plStack_e30,uVar26);
      uVar22 = auVar31._8_8_;
      lVar25 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == uVar22) {
        if (auVar31._0_8_ == 0) {
          lVar24 = FUN_048aead0(auVar31._8_8_);
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1b501;
LAB_0ba1b51e:
          lVar24 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_0ba1b530;
        }
        else {
          iVar14 = *(int *)(auVar31._0_8_ + 8);
          if (lVar25 == 0) goto LAB_0ba1b51e;
LAB_0ba1b501:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1b530;
        }
      }
      else {
LAB_0ba1b530:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1b725;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1b725;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1b725;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1b725;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1b725;
        }
        puVar17 = (ulong *)uStack_f38;
        puVar2 = uStack_f30;
        if (uStack_f38[uVar18 * 0x28 + 4] != (ulong *)uVar22) goto joined_r0x0ba1b922;
        if (uStack_f38[uVar18 * 0x28 + 3] == (ulong *)0x0) {
          lVar24 = FUN_048aead0();
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1b6f5;
LAB_0ba1b70d:
          lVar25 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1b912;
        }
        else {
          iVar14 = *(int *)((long)uStack_f38[uVar18 * 0x28 + 3] + 8);
          if (lVar25 == 0) goto LAB_0ba1b70d;
LAB_0ba1b6f5:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1b912;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ba1b725:
    } while (((uint)uVar18 < (uint)uVar23) && (uVar26 = uVar26 + 1, uVar26 < uVar13));
    uVar23 = ((long)uStack_f30 - (long)uStack_f38 >> 6) * -0x3333333333333333;
  }
  puVar17 = puStack_e48;
  if (uVar23 == uVar18) {
    puVar2 = puStack_e40;
    if (puStack_e48 != (ulong *)0x0) {
      while (puVar17 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_e40 = puVar17;
      func_0x0412a280(puStack_e48,(long)puStack_e38 - (long)puStack_e48);
    }
    puStack_e38 = uStack_f28;
    if (puStack_480 < puStack_478) {
      *puStack_480 = 0;
      puStack_480[1] = 0;
      puStack_480[2] = 0;
      *puStack_480 = (ulong)puStack_e78;
      puStack_480[1] = (ulong)puStack_e70;
      puStack_480[2] = (ulong)uStack_e68;
      puStack_e78 = (ulong *)0x0;
      puStack_e70 = (ulong *)0x0;
      uStack_e68 = (ulong **)0x0;
      puStack_480[5] = uStack_e50;
      puStack_480[3] = uStack_e60;
      puStack_480[4] = uStack_e58;
      uStack_e60 = 0;
      uStack_e58 = 0;
      uStack_e50 = 0;
      puStack_480[6] = 0;
      puStack_480[7] = 0;
      puStack_480[8] = 0;
      puStack_480[6] = (ulong)uStack_f38;
      puStack_480[7] = (ulong)uStack_f30;
      puStack_480[8] = (ulong)uStack_f28;
      puStack_e48 = (ulong *)0x0;
      puStack_e40 = (ulong *)0x0;
      puStack_e38 = (ulong *)0x0;
      puStack_480[9] = (ulong)plStack_e30;
      puStack_480[10] = (ulong)plStack_e28;
      plStack_e30 = (long *)0x0;
      plStack_e28 = (undefined8 *)0x0;
      puStack_480[0xb] = 0;
      puStack_480[0xc] = 0;
      puStack_480[0xd] = 0;
      *(undefined4 *)(puStack_480 + 0xb) = (undefined4)uStack_e20;
      *(undefined4 *)((long)puStack_480 + 0x5c) = uStack_e20._4_4_;
      *(undefined4 *)(puStack_480 + 0xc) = (undefined4)uStack_e18;
      *(undefined4 *)((long)puStack_480 + 100) = uStack_e18._4_4_;
      puStack_480[0xd] = uStack_e10;
      uStack_e20 = 0;
      uStack_e18 = 0;
      uStack_e10 = 0;
      puStack_480 = puStack_480 + 0xe;
    }
    else {
      puStack_e48 = (ulong *)uStack_f38;
      puStack_e40 = uStack_f30;
      puStack_480 = (ulong *)func_0x0652ac80(&lStack_488,&puStack_e78);
    }
    puVar17 = puStack_480 + -0xe;
    lVar25 = CONCAT44(uStack_f18._4_4_,(uint)uStack_f18);
  }
  else {
LAB_0ba1b912:
    puVar17 = (ulong *)uStack_f38;
    puVar2 = uStack_f30;
    if (uStack_f38 != (ulong **)0x0) {
joined_r0x0ba1b922:
      while (puVar9 = (ulong *)uStack_f38, uStack_f38 != (ulong **)puVar2) {
        uStack_f38 = (ulong **)puVar17;
        func_0x05fe8450(puVar2 + -0x28);
        puVar17 = (ulong *)uStack_f38;
        puVar2 = puVar2 + -0x28;
        uStack_f38 = (ulong **)puVar9;
      }
      uStack_f30 = (ulong *)uStack_f38;
      uStack_f38 = (ulong **)puVar17;
      func_0x0412a280(puVar17,(long)uStack_f28 - (long)puVar17);
    }
    puVar17 = (ulong *)0xf6c4790;
    lVar25 = CONCAT44(uStack_f18._4_4_,(uint)uStack_f18);
  }
  if (lVar25 != 0) {
    lVar29 = CONCAT44(uStack_f0c,CONCAT13(uStack_f0d,CONCAT21(uStack_f0f,uStack_f10)));
    lVar24 = lVar25;
    if (lVar25 != lVar29) {
      lVar24 = lVar29 + -0x40;
      do {
        if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
          (**(code **)(lVar24 + 0x18))(lVar24);
        }
        if (*(code **)(lVar24 + -0x30) != (code *)0x0) {
          (**(code **)(lVar24 + -0x30))(lVar24 + -0x48);
        }
        if (*(code **)(lVar24 + -0x70) != (code *)0x0) {
          (**(code **)(lVar24 + -0x70))(lVar24 + -0x88);
        }
        if (*(code **)(lVar24 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar24 + -0xb0))(lVar24 + -200);
        }
        lVar29 = lVar24 + -0xd8;
        lVar24 = lVar24 + -0x118;
      } while (lVar29 != lVar25);
      lVar24 = CONCAT44(uStack_f18._4_4_,(uint)uStack_f18);
    }
    uStack_f10 = (undefined1)lVar25;
    uStack_f0f = (undefined2)((ulong)lVar25 >> 8);
    uStack_f0d = (undefined1)((ulong)lVar25 >> 0x18);
    uStack_f0c = (undefined4)((ulong)lVar25 >> 0x20);
    func_0x0412a280(lVar24,lStack_f08 - lVar24);
  }
  func_0x05f93280(&puStack_e78);
  func_0x064e40a0(puVar17);
  if (pcStack_b80 != (code *)0x0) {
    (*pcStack_b80)(auStack_b98);
  }
  if (pcStack_bc8 != (code *)0x0) {
    (*pcStack_bc8)(auStack_be0);
  }
  if (pcStack_c08 != (code *)0x0) {
    (*pcStack_c08)(auStack_c20);
  }
  if (pcStack_c48 != (code *)0x0) {
    (*pcStack_c48)(&puStack_c60);
  }
  if ((uStack_c98 & 1) != 0) {
    func_0x0412a280(uStack_c88,uStack_c98 & 0xfffffffffffffffe);
  }
  if ((uStack_e08 & 1) != 0) {
    func_0x0412a280(uStack_df8,CONCAT44(uStack_e04,uStack_e08) & 0xfffffffffffffffe);
  }
  if (pcStack_70 != (code *)0x0) {
    (*pcStack_70)(auStack_88);
  }
  if (pcStack_b8 != (code *)0x0) {
    (*pcStack_b8)(auStack_d0);
  }
  if (pcStack_f8 != (code *)0x0) {
    (*pcStack_f8)(auStack_110);
  }
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(apuStack_150);
  }
  if (((ulong)uStack_188 & 1) != 0) {
    func_0x0412a280(puStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
  }
  if ((bStack_df0 & 1) != 0) {
    uStack_de3._3_1_ = (undefined1)((uint)uStack_de3 >> 0x18);
    uVar4 = CONCAT11(uStack_ddf,uStack_de3._3_1_);
    func_0x0412a280(CONCAT62(uStack_dde,uVar4),
                    CONCAT35((undefined3)uStack_deb,CONCAT41(uStack_def,bStack_df0)) &
                    0xfffffffffffffffe);
  }
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((uStack_f00 & 1) != 0) {
    func_0x0412a280(puStack_ef0,uStack_f00 & 0xfffffffffffffffe);
  }
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(&puStack_3d0);
  }
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  if ((uStack_ec8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_eb4,CONCAT13(uStack_eb5,CONCAT21(uStack_eb7,uStack_eb8))),
                    CONCAT17(uStack_ec1,CONCAT25(uStack_ec3,CONCAT14(uStack_ec4,uStack_ec8))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_cc0 != (code *)0x0) {
    (*pcStack_cc0)(auStack_cd8);
  }
  if (pcStack_d08 != (code *)0x0) {
    (*pcStack_d08)(auStack_d20);
  }
  if (pcStack_d48 != (code *)0x0) {
    (*pcStack_d48)(auStack_d60);
  }
  if (pcStack_d88 != (code *)0x0) {
    (*pcStack_d88)(&uStack_da0);
  }
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_eb0 & 1) != 0) {
    func_0x0412a280(uStack_ea0,
                    CONCAT17(uStack_ea9,
                             CONCAT16(uStack_eaa,
                                      CONCAT15(uStack_eab,CONCAT41(uStack_eaf,bStack_eb0)))) &
                    0xfffffffffffffffe);
  }
  puStack_e98 = (ulong *)0x726579616c700c;
  func_0x0986b000(&uStack_dd8,&puStack_e98);
  uStack_ee8 = (ulong *)0x656372756f730c;
  func_0x068c6fe0(&uStack_408,&uStack_ee8);
  uStack_f18._0_4_ = 0x65766512;
  uStack_f18._4_4_ = 0x614e746e;
  uStack_f10 = 0x6d;
  uStack_f0f = 0x65;
  func_0x068c6fe0(&uStack_2c8,&uStack_f18);
  bStack_eb0 = 0x10;
  uStack_eaf = 0x6174656d;
  uStack_eab = 100;
  uStack_eaa = 0x61;
  uStack_ea9 = 0x74;
  uStack_ea8 = 0x61;
  uStack_ea7 = 0;
  func_0x068c6fe0(&uStack_188,&bStack_eb0);
  uStack_c88 = 0;
  uStack_c38 = 0;
  uStack_c30 = 0;
  pcStack_c48 = (code *)0x0;
  uStack_c40 = 0;
  puStack_c58 = (ulong *)0x0;
  plStack_c50 = (long *)0x0;
  puStack_c68 = (ulong *)0x0;
  puStack_c60 = (ulong *)0x0;
  uStack_c98 = 0;
  uStack_c90 = 0;
  uStack_c80 = (undefined *)0x6c65546572696624;
  uStack_c78 = (long *)0x7645797274656d65;
  uStack_c70 = 0x746e65;
  func_0x06523ef0(auStack_b58,&uStack_db0);
  func_0x06523ef0(apcStack_a40,&uStack_3e0);
  func_0x06523ef0(auStack_928,auStack_2a0);
  func_0x06523ef0(auStack_810,auStack_160);
  uStack_f38 = (ulong **)0x0;
  uStack_f30 = (ulong *)0x0;
  uStack_f28 = (ulong *)0x0;
  uStack_ec8 = (uint)&uStack_f38;
  uStack_ec4 = (undefined1)((ulong)&uStack_f38 >> 0x20);
  uStack_ec3 = (undefined2)((ulong)&uStack_f38 >> 0x28);
  uStack_ec1 = (undefined1)((ulong)&uStack_f38 >> 0x38);
  uStack_ec0 = uStack_ec0 & 0xffffff00;
  uVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x460);
  if (uVar18 == 0) {
    func_0x0eec74c0(0x460,0);
  }
  uStack_f28 = (ulong *)(uVar18 + 0x460);
  bStack_df0 = (byte)uVar18;
  uStack_def = (undefined4)(uVar18 >> 8);
  uStack_deb._0_3_ = (undefined3)(uVar18 >> 0x28);
  puStack_e78 = &uStack_f38;
  puStack_e70 = (ulong *)&bStack_df0;
  uStack_e68 = (ulong **)&uStack_f00;
  uStack_e60 = uStack_e60 & 0xffffffffffffff00;
  uStack_f38 = (ulong **)uVar18;
  uStack_f30 = (ulong *)uVar18;
  uStack_f00 = uVar18;
  func_0x06523ef0(uVar18,auStack_b58);
  uStack_f00 = uStack_f00 + 0x118;
  func_0x06523ef0(uStack_f00,apcStack_a40);
  uStack_f00 = uStack_f00 + 0x118;
  func_0x06523ef0(uStack_f00,auStack_928);
  uStack_f00 = uStack_f00 + 0x118;
  func_0x06523ef0(uStack_f00,auStack_810);
  uStack_f30 = (ulong *)(uStack_f00 + 0x118);
  if (apcStack_720[0] != (code *)0x0) {
    (*apcStack_720[0])(auStack_738);
  }
  if (pcStack_768 != (code *)0x0) {
    (*pcStack_768)(&uStack_780);
  }
  if (pcStack_7a8 != (code *)0x0) {
    (*pcStack_7a8)(apcStack_7c0);
  }
  if (pcStack_7e8 != (code *)0x0) {
    (*pcStack_7e8)(auStack_800);
  }
  if (pcStack_838 != (code *)0x0) {
    (*pcStack_838)(auStack_850);
  }
  if (pcStack_880 != (code *)0x0) {
    (*pcStack_880)(auStack_898);
  }
  if ((code *)CONCAT44(uStack_8bc,uStack_8c0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_8bc,uStack_8c0))(&uStack_8d8);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_950 != (code *)0x0) {
    (*pcStack_950)(auStack_968);
  }
  if (pcStack_998 != (code *)0x0) {
    (*pcStack_998)(auStack_9b0);
  }
  if (pcStack_9d8 != (code *)0x0) {
    (*pcStack_9d8)(auStack_9f0);
  }
  if (pcStack_a18 != (code *)0x0) {
    (*pcStack_a18)(auStack_a30);
  }
  if (pcStack_a68 != (code *)0x0) {
    (*pcStack_a68)(auStack_a80);
  }
  if (pcStack_ab0 != (code *)0x0) {
    (*pcStack_ab0)(apcStack_ac8);
  }
  if (pcStack_af0 != (code *)0x0) {
    (*pcStack_af0)(&pcStack_b08);
  }
  if (pcStack_b30 != (code *)0x0) {
    (*pcStack_b30)(&puStack_b48);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar15 + 8) = 0;
  *(undefined8 *)((long)pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f2fb2d8;
  uVar12 = func_0x0d858500(&uStack_f38);
  plVar20 = (long *)((long)pcVar15 + 0x18);
  *(undefined1 *)((long)pcVar15 + 0x20) = 0;
  *(undefined4 *)((long)pcVar15 + 0x24) = uVar12;
  *(undefined4 *)((long)pcVar15 + 0x28) = 0;
  *(undefined8 *)((long)pcVar15 + 0x30) = 0;
  *(undefined8 *)((long)pcVar15 + 0x38) = 0;
  *(undefined8 *)((long)pcVar15 + 0x40) = 0;
  *(undefined **)((long)pcVar15 + 0x18) = &UNK_0f2fb328;
  *(undefined4 *)((long)pcVar15 + 0x48) = (undefined4)uStack_f38;
  *(undefined4 *)((long)pcVar15 + 0x4c) = uStack_f38._4_4_;
  *(undefined4 *)((long)pcVar15 + 0x50) = (undefined4)uStack_f30;
  *(undefined4 *)((long)pcVar15 + 0x54) = uStack_f30._4_4_;
  *(ulong **)((long)pcVar15 + 0x58) = uStack_f28;
  uStack_f38 = (ulong **)0x0;
  uStack_f30 = (ulong *)0x0;
  uStack_f28 = (ulong *)0x0;
  uVar12 = func_0x0d858620(plVar20);
  pcVar28 = pcStack_c48;
  *(undefined4 *)((long)pcVar15 + 0x28) = uVar12;
  plStack_c50 = plVar20;
  if (pcStack_c48 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcStack_c48 + 8);
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *(long *)pcStack_c48;
      pcStack_c48 = pcVar15;
      (**(code **)(lVar25 + 0x10))(pcVar28);
      func_0x0412c2d0(pcVar28);
      pcVar15 = pcStack_c48;
    }
  }
  pcStack_c48 = pcVar15;
  puStack_b48 = (undefined8 *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
  _auStack_b58 = (undefined *)
                 CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8)));
  uStack_b50 = (long *)CONCAT17(uStack_dc9,
                                CONCAT16(uStack_dca,
                                         CONCAT15(uStack_dcb,
                                                  CONCAT14(uStack_dcc,
                                                           CONCAT13(uStack_dcd,
                                                                    CONCAT21(uStack_dcf,uStack_dd0))
                                                          ))));
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  auStack_b40 = (undefined1  [8])auStack_dc0._0_8_;
  uStack_b38 = (undefined *)auStack_dc0._8_8_;
  func_0x065281f0(&pcStack_b30,&uStack_db0);
  uStack_a08 = uStack_3f8;
  pcStack_a18 = uStack_408;
  pcStack_a10 = uStack_400;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  uStack_a00 = (undefined4)uStack_3f0;
  uStack_9fc = uStack_3f0._4_4_;
  uStack_9f8 = (undefined4)uStack_3e8;
  uStack_9f4 = uStack_3e8._4_4_;
  func_0x065281f0(auStack_9f0,&uStack_3e0);
  uStack_8c8 = (ulong)puStack_2b8;
  uStack_8d8 = (ulong)uStack_2c8;
  uStack_8d0 = (ulong)uStack_2c0;
  uStack_2c8 = (ulong *)0x0;
  uStack_2c0 = (ulong **)0x0;
  puStack_2b8 = (ulong *)0x0;
  uStack_8c0 = (undefined4)uStack_2b0;
  uStack_8bc = uStack_2b0._4_4_;
  uStack_8b8 = (undefined4)uStack_2a8;
  uStack_8b4 = uStack_2a8._4_4_;
  func_0x065281f0(auStack_8b0,auStack_2a0);
  puStack_788 = (undefined4 *)puStack_178;
  uStack_798 = (ulong)uStack_188;
  uStack_790 = (ulong)uStack_180;
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  uStack_780 = (undefined4)uStack_170;
  uStack_77c = uStack_170._4_4_;
  uStack_778 = (undefined4)uStack_168;
  uStack_774 = uStack_168._4_4_;
  func_0x065281f0(auStack_770,auStack_160);
  puStack_e78 = (ulong *)0x0;
  puStack_e70 = (ulong *)0x0;
  uStack_e68 = (ulong **)0x0;
  uStack_ec8 = (uint)&puStack_e78;
  uStack_ec4 = (undefined1)((ulong)&puStack_e78 >> 0x20);
  uStack_ec3 = (undefined2)((ulong)&puStack_e78 >> 0x28);
  uStack_ec1 = (undefined1)((ulong)&puStack_e78 >> 0x38);
  uStack_ec0 = uStack_ec0 & 0xffffff00;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x500);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x500,0);
  }
  puVar2 = puVar17 + 0xa0;
  puStack_e78 = puVar17;
  puStack_e70 = puVar17;
  uStack_e68 = (ulong **)puVar2;
  if (((ulong)_auStack_b58 & 1) == 0) {
    puVar17[2] = (ulong)puStack_b48;
    *puVar17 = (ulong)_auStack_b58;
    puVar17[1] = (ulong)uStack_b50;
  }
  else {
    func_0x0412e5e0(puVar17,puStack_b48,uStack_b50);
  }
  *(undefined4 *)(puVar17 + 3) = auStack_b40._0_4_;
  *(undefined4 *)((long)puVar17 + 0x1c) = auStack_b40._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)uStack_b38;
  *(undefined4 *)((long)puVar17 + 0x24) = uStack_b38._4_4_;
  func_0x06523ef0(puVar17 + 5,&pcStack_b30);
  if (((ulong)pcStack_a18 & 1) == 0) {
    puVar17[0x2a] = uStack_a08;
    puVar17[0x28] = (ulong)pcStack_a18;
    puVar17[0x29] = (ulong)pcStack_a10;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x28,uStack_a08,pcStack_a10);
  }
  *(undefined4 *)(puVar17 + 0x2b) = uStack_a00;
  *(undefined4 *)((long)puVar17 + 0x15c) = uStack_9fc;
  *(undefined4 *)(puVar17 + 0x2c) = uStack_9f8;
  *(undefined4 *)((long)puVar17 + 0x164) = uStack_9f4;
  func_0x06523ef0(puVar17 + 0x2d,auStack_9f0);
  if ((uStack_8d8 & 1) == 0) {
    puVar17[0x52] = uStack_8c8;
    puVar17[0x50] = uStack_8d8;
    puVar17[0x51] = uStack_8d0;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x50,uStack_8c8,uStack_8d0);
  }
  *(undefined4 *)(puVar17 + 0x53) = uStack_8c0;
  *(undefined4 *)((long)puVar17 + 0x29c) = uStack_8bc;
  *(undefined4 *)(puVar17 + 0x54) = uStack_8b8;
  *(undefined4 *)((long)puVar17 + 0x2a4) = uStack_8b4;
  func_0x06523ef0(puVar17 + 0x55,auStack_8b0);
  if ((uStack_798 & 1) == 0) {
    puVar17[0x7a] = (ulong)puStack_788;
    puVar17[0x78] = uStack_798;
    puVar17[0x79] = uStack_790;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x78,puStack_788,uStack_790);
  }
  *(undefined4 *)(puVar17 + 0x7b) = uStack_780;
  *(undefined4 *)((long)puVar17 + 0x3dc) = uStack_77c;
  *(undefined4 *)(puVar17 + 0x7c) = uStack_778;
  *(undefined4 *)((long)puVar17 + 0x3e4) = uStack_774;
  func_0x06523ef0(puVar17 + 0x7d,auStack_770);
  puStack_e70 = puVar2;
  if (pcStack_680 != (code *)0x0) {
    (*pcStack_680)(auStack_698);
  }
  if (pcStack_6c8 != (code *)0x0) {
    (*pcStack_6c8)(auStack_6e0);
  }
  if (pcStack_708 != (code *)0x0) {
    (*pcStack_708)(apcStack_720);
  }
  if (pcStack_748 != (code *)0x0) {
    (*pcStack_748)(auStack_760);
  }
  if ((uStack_798 & 1) != 0) {
    func_0x0412a280(puStack_788,uStack_798 & 0xfffffffffffffffe);
  }
  if (apcStack_7c0[0] != (code *)0x0) {
    (*apcStack_7c0[0])(auStack_7d8);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(auStack_820);
  }
  if (pcStack_848 != (code *)0x0) {
    (*pcStack_848)(auStack_860);
  }
  if (pcStack_888 != (code *)0x0) {
    (*pcStack_888)(auStack_8a0);
  }
  if ((uStack_8d8 & 1) != 0) {
    func_0x0412a280(uStack_8c8,uStack_8d8 & 0xfffffffffffffffe);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_948 != (code *)0x0) {
    (*pcStack_948)(auStack_960);
  }
  if (pcStack_988 != (code *)0x0) {
    (*pcStack_988)(auStack_9a0);
  }
  if (pcStack_9c8 != (code *)0x0) {
    (*pcStack_9c8)(auStack_9e0);
  }
  if (((ulong)pcStack_a18 & 1) != 0) {
    func_0x0412a280(uStack_a08,(ulong)pcStack_a18 & 0xfffffffffffffffe);
  }
  if (apcStack_a40[0] != (code *)0x0) {
    (*apcStack_a40[0])(auStack_a58);
  }
  if (pcStack_a88 != (code *)0x0) {
    (*pcStack_a88)(auStack_aa0);
  }
  if (apcStack_ac8[0] != (code *)0x0) {
    (*apcStack_ac8[0])(&lStack_ae0);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b28 + 8);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_c50 + 0x20))();
  uVar23 = ((long)puStack_e70 - (long)puStack_e78 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar13 != 0) && ((uint)uVar23 != 0)) {
    uVar26 = 0;
    uVar18 = 0;
    do {
      auVar31 = (**(code **)(*plStack_c50 + 0x28))(plStack_c50,uVar26);
      uVar22 = auVar31._8_8_;
      lVar25 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == uVar22) {
        if (auVar31._0_8_ == 0) {
          lVar24 = FUN_048aead0(auVar31._8_8_);
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1c891;
LAB_0ba1c8ae:
          lVar24 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_0ba1c8c0;
        }
        else {
          iVar14 = *(int *)(auVar31._0_8_ + 8);
          if (lVar25 == 0) goto LAB_0ba1c8ae;
LAB_0ba1c891:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1c8c0;
        }
      }
      else {
LAB_0ba1c8c0:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1cab8;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1cab8;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1cab8;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1cab8;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1cab8;
        }
        puVar17 = puStack_e78;
        puVar2 = puStack_e70;
        if (puStack_e78[uVar18 * 0x28 + 4] != uVar22) goto joined_r0x0ba1cce3;
        if (puStack_e78[uVar18 * 0x28 + 3] == 0) {
          lVar24 = FUN_048aead0();
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1ca88;
LAB_0ba1caa0:
          lVar25 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1ccd0;
        }
        else {
          iVar14 = *(int *)(puStack_e78[uVar18 * 0x28 + 3] + 8);
          if (lVar25 == 0) goto LAB_0ba1caa0;
LAB_0ba1ca88:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1ccd0;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ba1cab8:
    } while (((uint)uVar18 < (uint)uVar23) && (uVar26 = uVar26 + 1, uVar26 < uVar13));
    uVar23 = ((long)puStack_e70 - (long)puStack_e78 >> 6) * -0x3333333333333333;
  }
  puVar17 = puStack_c68;
  if (uVar23 == uVar18) {
    puVar2 = puStack_c60;
    if (puStack_c68 != (ulong *)0x0) {
      while (puVar17 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_c60 = puVar17;
      func_0x0412a280(puStack_c68,(long)puStack_c58 - (long)puStack_c68);
    }
    puStack_c58 = (ulong *)uStack_e68;
    if (puStack_480 < puStack_478) {
      *puStack_480 = 0;
      puStack_480[1] = 0;
      puStack_480[2] = 0;
      *puStack_480 = uStack_c98;
      puStack_480[1] = uStack_c90;
      puStack_480[2] = uStack_c88;
      uStack_c98 = 0;
      uStack_c90 = 0;
      uStack_c88 = 0;
      puStack_480[5] = uStack_c70;
      puStack_480[3] = (ulong)uStack_c80;
      puStack_480[4] = (ulong)uStack_c78;
      uStack_c80 = (undefined *)0x0;
      uStack_c78 = (long *)0x0;
      uStack_c70 = 0;
      puStack_480[6] = 0;
      puStack_480[7] = 0;
      puStack_480[8] = 0;
      puStack_480[6] = (ulong)puStack_e78;
      puStack_480[7] = (ulong)puStack_e70;
      puStack_480[8] = (ulong)uStack_e68;
      puStack_c68 = (ulong *)0x0;
      puStack_c60 = (ulong *)0x0;
      puStack_c58 = (ulong *)0x0;
      puStack_480[9] = (ulong)plStack_c50;
      puStack_480[10] = (ulong)pcStack_c48;
      plStack_c50 = (long *)0x0;
      pcStack_c48 = (code *)0x0;
      puStack_480[0xb] = 0;
      puStack_480[0xc] = 0;
      puStack_480[0xd] = 0;
      *(undefined4 *)(puStack_480 + 0xb) = (undefined4)uStack_c40;
      *(undefined4 *)((long)puStack_480 + 0x5c) = uStack_c40._4_4_;
      *(undefined4 *)(puStack_480 + 0xc) = (undefined4)uStack_c38;
      *(undefined4 *)((long)puStack_480 + 100) = uStack_c38._4_4_;
      puStack_480[0xd] = uStack_c30;
      uStack_c40 = 0;
      uStack_c38 = 0;
      uStack_c30 = 0;
      puStack_480 = puStack_480 + 0xe;
    }
    else {
      puStack_c68 = puStack_e78;
      puStack_c60 = puStack_e70;
      puStack_480 = (ulong *)func_0x0652ac80(&lStack_488,&uStack_c98);
    }
    puVar17 = puStack_480 + -0xe;
    uVar18 = (ulong)uStack_f38;
  }
  else {
LAB_0ba1ccd0:
    puVar17 = puStack_e78;
    puVar2 = puStack_e70;
    if (puStack_e78 != (ulong *)0x0) {
joined_r0x0ba1cce3:
      while (puVar9 = puStack_e78, puStack_e78 != puVar2) {
        puStack_e78 = puVar17;
        func_0x05fe8450(puVar2 + -0x28);
        puVar17 = puStack_e78;
        puVar2 = puVar2 + -0x28;
        puStack_e78 = puVar9;
      }
      puStack_e70 = puStack_e78;
      puStack_e78 = puVar17;
      func_0x0412a280(puVar17,(long)uStack_e68 - (long)puVar17);
    }
    puVar17 = (ulong *)0xf6c4790;
    uVar18 = (ulong)uStack_f38;
  }
  uStack_f38 = (ulong **)uVar18;
  if (uVar18 != 0) {
    if ((ulong *)uVar18 != uStack_f30) {
      lVar25 = (long)uStack_f30 - 0x40;
      do {
        if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
          (**(code **)(lVar25 + 0x18))(lVar25);
        }
        if (*(code **)(lVar25 + -0x30) != (code *)0x0) {
          (**(code **)(lVar25 + -0x30))(lVar25 + -0x48);
        }
        if (*(code **)(lVar25 + -0x70) != (code *)0x0) {
          (**(code **)(lVar25 + -0x70))(lVar25 + -0x88);
        }
        if (*(code **)(lVar25 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar25 + -0xb0))(lVar25 + -200);
        }
        uVar23 = lVar25 - 0xd8;
        lVar25 = lVar25 + -0x118;
      } while (uVar23 != uVar18);
    }
    uStack_f30 = (ulong *)uVar18;
    func_0x0412a280(uStack_f38,(long)uStack_f28 - (long)uStack_f38);
  }
  func_0x05f93280(&uStack_c98);
  func_0x064e40a0(puVar17);
  if (pcStack_70 != (code *)0x0) {
    (*pcStack_70)(auStack_88);
  }
  if (pcStack_b8 != (code *)0x0) {
    (*pcStack_b8)(auStack_d0);
  }
  if (pcStack_f8 != (code *)0x0) {
    (*pcStack_f8)(auStack_110);
  }
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(apuStack_150);
  }
  if (((ulong)uStack_188 & 1) != 0) {
    func_0x0412a280(puStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
  }
  if ((bStack_eb0 & 1) != 0) {
    func_0x0412a280(uStack_ea0,
                    CONCAT17(uStack_ea9,
                             CONCAT16(uStack_eaa,
                                      CONCAT15(uStack_eab,CONCAT41(uStack_eaf,bStack_eb0)))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  if (((uint)uStack_f18 & 1) != 0) {
    func_0x0412a280(lStack_f08,CONCAT44(uStack_f18._4_4_,(uint)uStack_f18) & 0xfffffffffffffffe);
  }
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(&puStack_3d0);
  }
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_ee8 & 1) != 0) {
    func_0x0412a280(uStack_ed8,(ulong)uStack_ee8 & 0xfffffffffffffffe);
  }
  if (pcStack_cc0 != (code *)0x0) {
    (*pcStack_cc0)(auStack_cd8);
  }
  if (pcStack_d08 != (code *)0x0) {
    (*pcStack_d08)(auStack_d20);
  }
  if (pcStack_d48 != (code *)0x0) {
    (*pcStack_d48)(auStack_d60);
  }
  if (pcStack_d88 != (code *)0x0) {
    (*pcStack_d88)(&uStack_da0);
  }
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  if (((ulong)puStack_e98 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_e84,uStack_e88),(ulong)puStack_e98 & 0xfffffffffffffffe);
  }
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar5 = _UNK_01335027;
  *puVar16 = _DAT_0133501f;
  puVar16[1] = uVar5;
  *(undefined8 *)((long)puVar16 + 0xf) = 0x656372756f53656d;
  *(undefined1 *)((long)puVar16 + 0x17) = 0;
  uStack_c98 = 0x6769666e6f630c;
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  func_0x048b1dc0(auStack_dc0);
  puStack_410 = puVar16;
  func_0x0652b590(&uStack_db0);
  if ((uStack_dd8 & 1) == 0) {
    if ((uStack_c98 & 1) == 0) {
      uStack_dc8 = (undefined1)uStack_c88;
      uStack_dc7 = (undefined6)(uStack_c88 >> 8);
      uStack_dc1 = (undefined1)(uStack_c88 >> 0x38);
      uStack_dd8 = (uint)uStack_c98;
      uStack_dd4 = (undefined1)(uStack_c98 >> 0x20);
      uStack_dd3 = (undefined1)(uStack_c98 >> 0x28);
      uStack_dd2 = (undefined2)(uStack_c98 >> 0x30);
      uStack_dd0 = (undefined1)uStack_c90;
      uStack_dcf = (undefined2)(uStack_c90 >> 8);
      uStack_dcd = (undefined1)(uStack_c90 >> 0x18);
      uStack_dcc = (undefined1)(uStack_c90 >> 0x20);
      uStack_dcb = (undefined1)(uStack_c90 >> 0x28);
      uStack_dca = (undefined1)(uStack_c90 >> 0x30);
      uStack_dc9 = (undefined1)(uStack_c90 >> 0x38);
    }
    else {
      func_0x04885070(&uStack_dd8,uStack_c88,uStack_c90);
    }
  }
  else {
    uVar23 = uStack_c98 >> 1 & 0x7f;
    uVar18 = (long)&uStack_c98 + 1;
    if ((uStack_c98 & 1) != 0) {
      uVar23 = uStack_c90;
      uVar18 = uStack_c88;
    }
    func_0x04885120(&uStack_dd8,uVar18,uVar23);
  }
  auStack_dc0 = func_0x0b80d5b0();
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  pcStack_3b8 = (code *)0x0;
  uStack_3b0 = 0;
  puStack_3c8 = (ulong *)0x0;
  pcStack_3c0 = (code *)0x0;
  puStack_3d8 = (ulong *)0x0;
  puStack_3d0 = (ulong *)0x0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  func_0x04885070(&uStack_3f0,puVar16,0x17);
  func_0x06523ef0(auStack_b58,&uStack_db0);
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  puStack_e70 = (ulong *)((ulong)puStack_e70 & 0xffffffffffffff00);
  puStack_e78 = &uStack_188;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  puStack_178 = puVar17 + 0x23;
  uStack_2c0 = &puStack_e98;
  puStack_2b8 = &uStack_f38;
  uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
  uStack_f38 = (ulong **)puVar17;
  puStack_e98 = puVar17;
  uStack_2c8 = &uStack_188;
  uStack_188 = puVar17;
  uStack_180 = puVar17;
  func_0x06523ef0(puVar17,auStack_b58);
  uStack_180 = (ulong *)(uStack_f38 + 0x23);
  if (pcStack_a68 != (code *)0x0) {
    (*pcStack_a68)(auStack_a80);
  }
  if (pcStack_ab0 != (code *)0x0) {
    (*pcStack_ab0)(apcStack_ac8);
  }
  if (pcStack_af0 != (code *)0x0) {
    (*pcStack_af0)(&pcStack_b08);
  }
  if (pcStack_b30 != (code *)0x0) {
    (*pcStack_b30)(&puStack_b48);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f2fb3c8;
  uVar12 = func_0x0d858500(&uStack_188);
  pcVar28 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar12;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f2fb418;
  *(undefined4 *)(pcVar15 + 0x48) = (undefined4)uStack_188;
  *(undefined4 *)(pcVar15 + 0x4c) = uStack_188._4_4_;
  *(undefined4 *)(pcVar15 + 0x50) = (undefined4)uStack_180;
  *(undefined4 *)(pcVar15 + 0x54) = uStack_180._4_4_;
  *(ulong **)(pcVar15 + 0x58) = puStack_178;
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  uVar12 = func_0x0d858620(pcVar28);
  pcVar27 = pcStack_3b8;
  *(undefined4 *)(pcVar15 + 0x28) = uVar12;
  pcStack_3c0 = pcVar28;
  if (pcStack_3b8 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcStack_3b8 + 8);
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *(long *)pcStack_3b8;
      pcStack_3b8 = pcVar15;
      (**(code **)(lVar25 + 0x10))(pcVar27);
      func_0x0412c2d0(pcVar27);
      pcVar15 = pcStack_3b8;
    }
  }
  pcStack_3b8 = pcVar15;
  puStack_b48 = (undefined8 *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
  _auStack_b58 = (undefined *)
                 CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8)));
  uStack_b50 = (long *)CONCAT17(uStack_dc9,
                                CONCAT16(uStack_dca,
                                         CONCAT15(uStack_dcb,
                                                  CONCAT14(uStack_dcc,
                                                           CONCAT13(uStack_dcd,
                                                                    CONCAT21(uStack_dcf,uStack_dd0))
                                                          ))));
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  _auStack_b40 = auStack_dc0;
  func_0x065281f0(&pcStack_b30,&uStack_db0);
  uStack_2c8 = (ulong *)0x0;
  uStack_2c0 = (ulong **)0x0;
  puStack_2b8 = (ulong *)0x0;
  puStack_e78 = &uStack_2c8;
  puStack_e70 = (ulong *)((ulong)puStack_e70 & 0xffffffffffffff00);
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar17 + 0x28;
  uStack_2c8 = puVar17;
  puStack_2b8 = puVar2;
  if (((ulong)_auStack_b58 & 1) == 0) {
    puVar17[2] = (ulong)puStack_b48;
    *puVar17 = (ulong)_auStack_b58;
    puVar17[1] = (ulong)uStack_b50;
    uStack_2c0 = (ulong **)puVar17;
  }
  else {
    uStack_2c0 = (ulong **)puVar17;
    func_0x0412e5e0(puVar17,puStack_b48,uStack_b50);
  }
  *(undefined4 *)(puVar17 + 3) = auStack_b40._0_4_;
  *(undefined4 *)((long)puVar17 + 0x1c) = auStack_b40._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)uStack_b38;
  *(undefined4 *)((long)puVar17 + 0x24) = uStack_b38._4_4_;
  func_0x06523ef0(puVar17 + 5,&pcStack_b30);
  uStack_2c0 = (ulong **)puVar2;
  if (apcStack_a40[0] != (code *)0x0) {
    (*apcStack_a40[0])(auStack_a58);
  }
  if (pcStack_a88 != (code *)0x0) {
    (*pcStack_a88)(auStack_aa0);
  }
  if (apcStack_ac8[0] != (code *)0x0) {
    (*apcStack_ac8[0])(&lStack_ae0);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b28 + 8);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*(long *)pcStack_3c0 + 0x20))();
  uVar23 = ((long)uStack_2c0 - (long)uStack_2c8 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar13 != 0) && ((uint)uVar23 != 0)) {
    uVar26 = 0;
    uVar18 = 0;
    do {
      auVar31 = (**(code **)(*(long *)pcStack_3c0 + 0x28))(pcStack_3c0,uVar26);
      uVar22 = auVar31._8_8_;
      lVar25 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == uVar22) {
        if (auVar31._0_8_ == 0) {
          lVar24 = FUN_048aead0(auVar31._8_8_);
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1d681;
LAB_0ba1d69e:
          lVar24 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_0ba1d6b0;
        }
        else {
          iVar14 = *(int *)(auVar31._0_8_ + 8);
          if (lVar25 == 0) goto LAB_0ba1d69e;
LAB_0ba1d681:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1d6b0;
        }
      }
      else {
LAB_0ba1d6b0:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1d8a8;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1d8a8;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1d8a8;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1d8a8;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1d8a8;
        }
        puVar17 = uStack_2c8;
        puVar2 = (ulong *)uStack_2c0;
        if (uStack_2c8[uVar18 * 0x28 + 4] != uVar22) goto joined_r0x0ba1dabb;
        if (uStack_2c8[uVar18 * 0x28 + 3] == 0) {
          lVar24 = FUN_048aead0();
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1d878;
LAB_0ba1d890:
          lVar25 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1daa8;
        }
        else {
          iVar14 = *(int *)(uStack_2c8[uVar18 * 0x28 + 3] + 8);
          if (lVar25 == 0) goto LAB_0ba1d890;
LAB_0ba1d878:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1daa8;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ba1d8a8:
    } while (((uint)uVar18 < (uint)uVar23) && (uVar26 = uVar26 + 1, uVar26 < uVar13));
    uVar23 = ((long)uStack_2c0 - (long)uStack_2c8 >> 6) * -0x3333333333333333;
  }
  puVar17 = puStack_3d8;
  if (uVar23 == uVar18) {
    puVar2 = puStack_3d0;
    if (puStack_3d8 != (ulong *)0x0) {
      while (puVar17 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_3d0 = puVar17;
      func_0x0412a280(puStack_3d8,(long)puStack_3c8 - (long)puStack_3d8);
    }
    puStack_3c8 = puStack_2b8;
    if (puStack_480 < puStack_478) {
      *puStack_480 = 0;
      puStack_480[1] = 0;
      puStack_480[2] = 0;
      *puStack_480 = (ulong)uStack_408;
      puStack_480[1] = (ulong)uStack_400;
      puStack_480[2] = uStack_3f8;
      uStack_408 = (code *)0x0;
      uStack_400 = (code *)0x0;
      uStack_3f8 = 0;
      puStack_480[5] = uStack_3e0;
      puStack_480[3] = uStack_3f0;
      puStack_480[4] = uStack_3e8;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      puStack_480[6] = 0;
      puStack_480[7] = 0;
      puStack_480[8] = 0;
      puStack_480[6] = (ulong)uStack_2c8;
      puStack_480[7] = (ulong)uStack_2c0;
      puStack_480[8] = (ulong)puStack_2b8;
      puStack_3d8 = (ulong *)0x0;
      puStack_3d0 = (ulong *)0x0;
      puStack_3c8 = (ulong *)0x0;
      puStack_480[9] = (ulong)pcStack_3c0;
      puStack_480[10] = (ulong)pcStack_3b8;
      pcStack_3c0 = (code *)0x0;
      pcStack_3b8 = (code *)0x0;
      puStack_480[0xb] = 0;
      puStack_480[0xc] = 0;
      puStack_480[0xd] = 0;
      *(undefined4 *)(puStack_480 + 0xb) = (undefined4)uStack_3b0;
      *(undefined4 *)((long)puStack_480 + 0x5c) = uStack_3b0._4_4_;
      *(undefined4 *)(puStack_480 + 0xc) = (undefined4)uStack_3a8;
      *(undefined4 *)((long)puStack_480 + 100) = uStack_3a8._4_4_;
      puStack_480[0xd] = uStack_3a0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      puStack_480 = puStack_480 + 0xe;
    }
    else {
      puStack_3d8 = uStack_2c8;
      puStack_3d0 = (ulong *)uStack_2c0;
      puStack_480 = (ulong *)func_0x0652ac80(&lStack_488,&uStack_408);
    }
    puVar17 = puStack_480 + -0xe;
    uVar18 = (ulong)uStack_188;
  }
  else {
LAB_0ba1daa8:
    puVar17 = uStack_2c8;
    puVar2 = (ulong *)uStack_2c0;
    if (uStack_2c8 != (ulong *)0x0) {
joined_r0x0ba1dabb:
      while (puVar9 = uStack_2c8, uStack_2c8 != puVar2) {
        uStack_2c8 = puVar17;
        func_0x05fe8450(puVar2 + -0x28);
        puVar17 = uStack_2c8;
        puVar2 = puVar2 + -0x28;
        uStack_2c8 = puVar9;
      }
      uStack_2c0 = (ulong **)uStack_2c8;
      uStack_2c8 = puVar17;
      func_0x0412a280(puVar17,(long)puStack_2b8 - (long)puVar17);
    }
    puVar17 = (ulong *)0xf6c4790;
    uVar18 = (ulong)uStack_188;
  }
  uStack_188 = (ulong *)uVar18;
  if (uVar18 != 0) {
    if ((ulong *)uVar18 != uStack_180) {
      lVar25 = (long)uStack_180 - 0x40;
      do {
        if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
          (**(code **)(lVar25 + 0x18))(lVar25);
        }
        if (*(code **)(lVar25 + -0x30) != (code *)0x0) {
          (**(code **)(lVar25 + -0x30))(lVar25 + -0x48);
        }
        if (*(code **)(lVar25 + -0x70) != (code *)0x0) {
          (**(code **)(lVar25 + -0x70))(lVar25 + -0x88);
        }
        if (*(code **)(lVar25 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar25 + -0xb0))(lVar25 + -200);
        }
        uVar23 = lVar25 - 0xd8;
        lVar25 = lVar25 + -0x118;
      } while (uVar23 != uVar18);
    }
    uStack_180 = (ulong *)uVar18;
    func_0x0412a280(uStack_188,(long)puStack_178 - (long)uStack_188);
  }
  func_0x05f93280(&uStack_408);
  func_0x064e40a0(puVar17);
  puVar16 = puStack_410;
  if (pcStack_cc0 != (code *)0x0) {
    (*pcStack_cc0)(auStack_cd8);
  }
  if (pcStack_d08 != (code *)0x0) {
    (*pcStack_d08)(auStack_d20);
  }
  if (pcStack_d48 != (code *)0x0) {
    (*pcStack_d48)(auStack_d60);
  }
  if (pcStack_d88 != (code *)0x0) {
    (*pcStack_d88)(&uStack_da0);
  }
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_c98 & 1) != 0) {
    func_0x0412a280(uStack_c88,uStack_c98 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar16,0x1a);
  uStack_f18._0_4_ = 0x6d696412;
  uStack_f18._4_4_ = 0x69736e65;
  uStack_f10 = 0x6f;
  uStack_f0f = 0x6e;
  func_0x09417840(&uStack_dd8,&uStack_f18);
  bStack_eb0 = 0xc;
  uStack_eaf = 0x756c6f76;
  uStack_eab = 0x6d;
  uStack_eaa = 0x65;
  uStack_ea9 = 0;
  func_0x064fcb00(&uStack_408,&bStack_eb0);
  uStack_ec8 = 0x6f69620a;
  uStack_ec4 = 0x6d;
  uStack_ec3 = 0x65;
  uStack_2c8 = (ulong *)0x0;
  uStack_2c0 = (ulong **)0x0;
  puStack_2b8 = (ulong *)0x0;
  func_0x048b1dc0(&uStack_2b0);
  func_0x0652b590(auStack_2a0);
  if (((ulong)uStack_2c8 & 1) == 0) {
    if ((uStack_ec8 & 1) == 0) {
      puStack_2b8 = (ulong *)CONCAT44(uStack_eb4,
                                      CONCAT13(uStack_eb5,CONCAT21(uStack_eb7,uStack_eb8)));
      uStack_2c8 = (ulong *)CONCAT44(CONCAT13(uStack_ec1,CONCAT21(uStack_ec3,uStack_ec4)),uStack_ec8
                                    );
      uStack_2c0 = (ulong **)CONCAT44(uStack_ebc,uStack_ec0);
    }
    else {
      func_0x04885070(&uStack_2c8,
                      CONCAT44(uStack_eb4,CONCAT13(uStack_eb5,CONCAT21(uStack_eb7,uStack_eb8))),
                      CONCAT44(uStack_ebc,uStack_ec0));
    }
  }
  else {
    bVar30 = (uStack_ec8 & 1) != 0;
    lVar25 = (long)&uStack_ec8 + 1;
    if (bVar30) {
      lVar25 = CONCAT44(uStack_eb4,CONCAT13(uStack_eb5,CONCAT21(uStack_eb7,uStack_eb8)));
    }
    uVar18 = (ulong)((byte)uStack_ec8 >> 1);
    if (bVar30) {
      uVar18 = CONCAT44(uStack_ebc,uStack_ec0);
    }
    func_0x04885120(&uStack_2c8,lVar25,uVar18);
  }
  lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar25 == 0) {
    func_0x048b0de0(auStack_b58,&uStack_188);
    _DAT_0f54fd90 = auStack_b58;
    uRam000000000f54fd94 = uStack_b54;
    uVar12 = (undefined4)uStack_b50;
    uVar7 = uStack_b50._4_4_;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar7;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_b50;
    if (uStack_b50 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_b50 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_b50 + 0x10))(uStack_b50);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  uStack_2b0 = func_0x08d091b0(lVar25);
  uStack_f00 = 0x736e6f6974706f0e;
  uStack_ef8 = uStack_ef8 & 0xffffffffffffff00;
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  uStack_2a8 = lVar25;
  func_0x048b1dc0(&uStack_170);
  func_0x0652b590(auStack_160);
  if (((ulong)uStack_188 & 1) == 0) {
    if ((uStack_f00 & 1) == 0) {
      puStack_178 = (ulong *)puStack_ef0;
      uStack_188 = (ulong *)uStack_f00;
      uStack_180 = (ulong *)uStack_ef8;
    }
    else {
      func_0x04885070(&uStack_188,puStack_ef0,uStack_ef8);
    }
  }
  else {
    uVar18 = uStack_f00 >> 1 & 0x7f;
    puVar19 = (undefined4 *)((long)&uStack_f00 + 1);
    if ((uStack_f00 & 1) != 0) {
      uVar18 = uStack_ef8;
      puVar19 = puStack_ef0;
    }
    func_0x04885120(&uStack_188,puVar19,uVar18);
  }
  plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar20 == (long *)0x0) {
    func_0x048b0de0(auStack_b58,&uStack_c98);
    _DAT_0f54fd90 = auStack_b58;
    uRam000000000f54fd94 = uStack_b54;
    uVar12 = (undefined4)uStack_b50;
    uVar7 = uStack_b50._4_4_;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar7;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_b50;
    if (uStack_b50 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_b50 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_b50 + 0x10))(uStack_b50);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6ca0f8 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6ca0f8);
    if (iVar14 != 0) {
      func_0x0bad38c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6ca078,0xf53dab8);
      func_0x0410844d(&DAT_0f6ca0f8);
    }
  }
  plVar21 = (long *)(*plVar20 +
                    (ulong)((int)((ulong)(plVar20[1] - *plVar20) >> 3) - 1U &
                           *(uint *)(_DAT_0f6ca078 + 4)) * 8);
  do {
    lVar25 = *plVar21;
    if (lVar25 == -1) goto LAB_0ba1e030;
    plVar21 = (long *)(plVar20[3] + lVar25 * 0x18);
  } while (*(uint *)(plVar20[3] + 8 + lVar25 * 0x18) != *(uint *)(_DAT_0f6ca078 + 4));
  if (plVar21 == (long *)plVar20[4]) {
LAB_0ba1e030:
    uStack_170 = &DAT_0f6ca078;
  }
  else {
    uStack_170 = (undefined *)plVar21[2];
  }
  _auStack_b58 = (undefined *)((ulong)_auStack_b58 & 0xffffffffffffff00);
  bStack_ad8 = 0;
  uStack_168 = plVar20;
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(apuStack_150);
  }
  puStack_140 = &UNK_0bad3cb0;
  uStack_130 = 0x10628ffc;
  pcStack_138 = (code *)&UNK_0bad4070;
  uStack_12c = 1;
  puVar19 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
  if (puVar19 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x88,0);
  }
  *(undefined1 *)puVar19 = 0;
  *(undefined1 *)(puVar19 + 0x20) = 0;
  if (bStack_ad8 == 1) {
    *(undefined2 *)(puVar19 + 1) = (undefined2)uStack_b54;
    *puVar19 = auStack_b58;
    *(undefined1 *)(puVar19 + 2) = 0;
    *(undefined1 *)(puVar19 + 0x1e) = 0;
    if ((char)lStack_ae0 == '\x01') {
      func_0x08cfd9a0(puVar19 + 2,&uStack_b50);
      *(undefined1 *)(puVar19 + 0x1e) = 1;
    }
    *(undefined1 *)(puVar19 + 0x20) = 1;
  }
  puVar10 = puStack_118;
  puStack_118 = &UNK_0bad3b00;
  if (puVar10 != &UNK_0bad3b00) {
    uStack_120 = 0;
  }
  apuStack_150[0] = puVar19;
  if (((bStack_ad8 & 1) != 0) && ((char)lStack_ae0 == '\x01')) {
    func_0x08cfd750(&uStack_b50);
  }
  uStack_c88 = 0;
  uStack_c70 = 0;
  uStack_c38 = 0;
  uStack_c30 = 0;
  pcStack_c48 = (code *)0x0;
  uStack_c40 = 0;
  puStack_c58 = (ulong *)0x0;
  plStack_c50 = (long *)0x0;
  puStack_c68 = (ulong *)0x0;
  puStack_c60 = (ulong *)0x0;
  uStack_c98 = 0;
  uStack_c90 = 0;
  uStack_c80 = (undefined *)0x6f69426c6c696614;
  uStack_c78 = (long *)0x73656d;
  func_0x06523ef0(auStack_b58,&uStack_db0);
  func_0x06523ef0(apcStack_a40,&uStack_3e0);
  func_0x06523ef0(auStack_928,auStack_2a0);
  func_0x06523ef0(auStack_810,auStack_160);
  uStack_ee8 = (ulong *)0x0;
  uStack_ee0 = (ulong *)0x0;
  uStack_ed8 = (ulong *)0x0;
  uStack_f38 = (ulong **)&uStack_ee8;
  uStack_f30 = (ulong *)((ulong)uStack_f30 & 0xffffffffffffff00);
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x460);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x460,0);
  }
  uStack_ed8 = puVar17 + 0x8c;
  bStack_df0 = (byte)puVar17;
  uStack_def = (undefined4)((ulong)puVar17 >> 8);
  uStack_deb._0_3_ = (undefined3)((ulong)puVar17 >> 0x28);
  puStack_e78 = &uStack_ee8;
  puStack_e70 = (ulong *)&bStack_df0;
  uStack_e68 = &puStack_e98;
  uStack_e60 = uStack_e60 & 0xffffffffffffff00;
  uStack_ee8 = puVar17;
  uStack_ee0 = puVar17;
  puStack_e98 = puVar17;
  func_0x06523ef0(puVar17,auStack_b58);
  puStack_e98 = puStack_e98 + 0x23;
  func_0x06523ef0(puStack_e98,apcStack_a40);
  puStack_e98 = puStack_e98 + 0x23;
  func_0x06523ef0(puStack_e98,auStack_928);
  puStack_e98 = puStack_e98 + 0x23;
  func_0x06523ef0(puStack_e98,auStack_810);
  uStack_ee0 = puStack_e98 + 0x23;
  if (apcStack_720[0] != (code *)0x0) {
    (*apcStack_720[0])(auStack_738);
  }
  if (pcStack_768 != (code *)0x0) {
    (*pcStack_768)(&uStack_780);
  }
  if (pcStack_7a8 != (code *)0x0) {
    (*pcStack_7a8)(apcStack_7c0);
  }
  if (pcStack_7e8 != (code *)0x0) {
    (*pcStack_7e8)(auStack_800);
  }
  if (pcStack_838 != (code *)0x0) {
    (*pcStack_838)(auStack_850);
  }
  if (pcStack_880 != (code *)0x0) {
    (*pcStack_880)(auStack_898);
  }
  if ((code *)CONCAT44(uStack_8bc,uStack_8c0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_8bc,uStack_8c0))(&uStack_8d8);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_950 != (code *)0x0) {
    (*pcStack_950)(auStack_968);
  }
  if (pcStack_998 != (code *)0x0) {
    (*pcStack_998)(auStack_9b0);
  }
  if (pcStack_9d8 != (code *)0x0) {
    (*pcStack_9d8)(auStack_9f0);
  }
  if (pcStack_a18 != (code *)0x0) {
    (*pcStack_a18)(auStack_a30);
  }
  if (pcStack_a68 != (code *)0x0) {
    (*pcStack_a68)(auStack_a80);
  }
  if (pcStack_ab0 != (code *)0x0) {
    (*pcStack_ab0)(apcStack_ac8);
  }
  if (pcStack_af0 != (code *)0x0) {
    (*pcStack_af0)(&pcStack_b08);
  }
  if (pcStack_b30 != (code *)0x0) {
    (*pcStack_b30)(&puStack_b48);
  }
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar15 + 8) = 0;
  *(undefined8 *)((long)pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f2fb498;
  uVar12 = func_0x0d858500(&uStack_ee8);
  plVar20 = (long *)((long)pcVar15 + 0x18);
  *(undefined1 *)((long)pcVar15 + 0x20) = 0;
  *(undefined4 *)((long)pcVar15 + 0x24) = uVar12;
  *(undefined4 *)((long)pcVar15 + 0x28) = 0;
  *(undefined8 *)((long)pcVar15 + 0x30) = 0;
  *(undefined8 *)((long)pcVar15 + 0x38) = 0;
  *(undefined8 *)((long)pcVar15 + 0x40) = 0;
  *(undefined **)((long)pcVar15 + 0x18) = &UNK_0f2fb4e8;
  *(undefined4 *)((long)pcVar15 + 0x48) = (undefined4)uStack_ee8;
  *(undefined4 *)((long)pcVar15 + 0x4c) = uStack_ee8._4_4_;
  *(undefined4 *)((long)pcVar15 + 0x50) = (undefined4)uStack_ee0;
  *(undefined4 *)((long)pcVar15 + 0x54) = uStack_ee0._4_4_;
  *(ulong **)((long)pcVar15 + 0x58) = uStack_ed8;
  uStack_ee8 = (ulong *)0x0;
  uStack_ee0 = (ulong *)0x0;
  uStack_ed8 = (ulong *)0x0;
  uVar12 = func_0x0d858620(plVar20);
  pcVar28 = pcStack_c48;
  *(undefined4 *)((long)pcVar15 + 0x28) = uVar12;
  plStack_c50 = plVar20;
  if (pcStack_c48 != (code *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pcStack_c48 + 8);
    lVar25 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *(long *)pcStack_c48;
      pcStack_c48 = pcVar15;
      (**(code **)(lVar25 + 0x10))(pcVar28);
      func_0x0412c2d0(pcVar28);
      pcVar15 = pcStack_c48;
    }
  }
  pcStack_c48 = pcVar15;
  func_0x065df140();
  lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar25 == 0) {
    func_0x048b0de0(auStack_b58,&puStack_e78);
    _DAT_0f54fd90 = auStack_b58;
    uRam000000000f54fd94 = uStack_b54;
    uVar12 = (undefined4)uStack_b50;
    uVar7 = uStack_b50._4_4_;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    plVar20 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar12;
    uRam000000000f54fd9c = uVar7;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar21 = plVar20 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
    }
    plVar20 = uStack_b50;
    if (uStack_b50 != (long *)0x0) {
      LOCK();
      plVar21 = uStack_b50 + 1;
      lVar25 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_b50 + 0x10))(uStack_b50);
        func_0x0412c2d0(plVar20);
      }
    }
    lVar25 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f6ca118 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6ca118);
    if (iVar14 != 0) {
      func_0x0bad39f0();
      func_0x0410844d(&DAT_0f6ca118);
    }
  }
  if (DAT_0f6ca118 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6ca118);
    if (iVar14 != 0) {
      func_0x0bad39f0();
      func_0x0410844d(&DAT_0f6ca118);
    }
  }
  _auStack_b58 = &DAT_0f6ca100;
  uStack_b50 = (long *)CONCAT44(uStack_b50._4_4_,_DAT_0f6ca104);
  puStack_b48 = (undefined8 *)0x0;
  auStack_b40._0_4_ = 0x80;
  uStack_b38 = (undefined *)0x88;
  pcStack_b30 = (code *)&UNK_0bad3800;
  auStack_b28._0_8_ = &UNK_0bad3a70;
  auStack_b28._8_8_ = 0;
  puStack_b18 = &UNK_0bad40b0;
  pcStack_b10 = (code *)0x1;
  pcStack_b08 = (code *)&SUB_048b5640;
  plStack_b00 = (long *)&UNK_0bad4140;
  uStack_af8 = uStack_af8 & 0xffffffff00000000;
  pcStack_af0 = (code *)0x0;
  plStack_ae8 = (long *)0x0;
  lStack_ae0 = 0;
  func_0x048aee30(&puStack_e98,lVar25,auStack_b58,0x10628ffc);
  lVar25 = lStack_ae0;
  lStack_ae0 = 0;
  if (lVar25 != 0) {
    FUN_048ae940(lVar25);
    func_0x0412a280(lVar25,0x78);
  }
  plVar20 = plStack_ae8;
  if (plStack_ae8 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_ae8 + 1;
    lVar25 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*plStack_ae8 + 0x10))(plStack_ae8);
      func_0x0412c2d0(plVar20);
    }
  }
  if (DAT_0f6ca148 == '\0') {
    iVar14 = func_0x04108328(&DAT_0f6ca148);
    if (iVar14 != 0) {
      func_0x0bad55b0();
      func_0x0410844d(&DAT_0f6ca148);
    }
  }
  auStack_b58 = (undefined1  [4])_DAT_0f6ca134;
  uStack_b50 = (long *)0x1;
  puStack_b48 = (undefined8 *)&UNK_0bad5000;
  auStack_b40 = (undefined1  [8])&UNK_0bad5010;
  func_0x065abe60(&puStack_e98);
  uStack_f28._0_4_ = uStack_e88;
  uStack_f28._4_4_ = uStack_e84;
  uStack_f20 = uStack_e80;
  uStack_f1c = uStack_e7c;
  uStack_f38 = (ulong **)puStack_e98;
  uStack_f30 = (ulong *)uStack_e90;
  auStack_b58 = (undefined1  [4])0xf55160ec;
  uStack_b50 = (long *)0x0;
  puStack_b48 = (undefined8 *)((ulong)puStack_b48 & 0xffffffff00000000);
  auStack_b40 = (undefined1  [8])0x0;
  uStack_b38 = &UNK_065b4120;
  pcStack_b30 = (code *)&SUB_048b06d0;
  auStack_b28._0_8_ = &UNK_0bad58d0;
  auStack_b28._8_8_ = 0;
  puStack_b18 = (undefined *)((ulong)puStack_b18 & 0xffffffff00000000);
  pcStack_b10 = (code *)0x0;
  pcStack_b08 = (code *)0x0;
  func_0x049057f0(&uStack_f38,auStack_b58);
  func_0x048aea50(auStack_b58);
  uStack_e68 = (ulong **)CONCAT44(uStack_f28._4_4_,(undefined4)uStack_f28);
  uStack_e60 = CONCAT44(uStack_f1c,uStack_f20);
  puStack_e78 = (ulong *)uStack_f38;
  puStack_e70 = uStack_f30;
  _auStack_b58 = (undefined *)CONCAT44(uStack_b54,0xf55160ec);
  uStack_b50 = (long *)0x0;
  puStack_b48 = (undefined8 *)CONCAT44(puStack_b48._4_4_,1);
  auStack_b40 = (undefined1  [8])0x0;
  uStack_b38 = &UNK_065b4120;
  pcStack_b30 = (code *)&SUB_048b06d0;
  auStack_b28._0_8_ = &UNK_0bad5b80;
  auStack_b28._8_8_ = 0;
  puStack_b18 = (undefined *)((ulong)puStack_b18 & 0xffffffff00000000);
  pcStack_b10 = (code *)0x0;
  pcStack_b08 = (code *)0x0;
  func_0x049057f0(&puStack_e78,auStack_b58);
  func_0x048aea50(auStack_b58);
  puStack_b48 = (undefined8 *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
  _auStack_b58 = (undefined *)
                 CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8)));
  uStack_b50 = (long *)CONCAT17(uStack_dc9,
                                CONCAT16(uStack_dca,
                                         CONCAT15(uStack_dcb,
                                                  CONCAT14(uStack_dcc,
                                                           CONCAT13(uStack_dcd,
                                                                    CONCAT21(uStack_dcf,uStack_dd0))
                                                          ))));
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  _auStack_b40 = auStack_dc0;
  func_0x065281f0(&pcStack_b30,&uStack_db0);
  uStack_a08 = uStack_3f8;
  pcStack_a18 = uStack_408;
  pcStack_a10 = uStack_400;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  uStack_a00 = (undefined4)uStack_3f0;
  uStack_9fc = uStack_3f0._4_4_;
  uStack_9f8 = (undefined4)uStack_3e8;
  uStack_9f4 = uStack_3e8._4_4_;
  func_0x065281f0(auStack_9f0,&uStack_3e0);
  uStack_8c8 = (ulong)puStack_2b8;
  uStack_8d8 = (ulong)uStack_2c8;
  uStack_8d0 = (ulong)uStack_2c0;
  uStack_2c8 = (ulong *)0x0;
  uStack_2c0 = (ulong **)0x0;
  puStack_2b8 = (ulong *)0x0;
  uStack_8c0 = (undefined4)uStack_2b0;
  uStack_8bc = uStack_2b0._4_4_;
  uStack_8b8 = (undefined4)uStack_2a8;
  uStack_8b4 = uStack_2a8._4_4_;
  func_0x065281f0(auStack_8b0,auStack_2a0);
  puStack_788 = (undefined4 *)puStack_178;
  uStack_798 = (ulong)uStack_188;
  uStack_790 = (ulong)uStack_180;
  uStack_188 = (ulong *)0x0;
  uStack_180 = (ulong *)0x0;
  puStack_178 = (ulong *)0x0;
  uStack_780 = (undefined4)uStack_170;
  uStack_77c = uStack_170._4_4_;
  uStack_778 = (undefined4)uStack_168;
  uStack_774 = uStack_168._4_4_;
  func_0x065281f0(auStack_770,auStack_160);
  puStack_e78 = (ulong *)0x0;
  puStack_e70 = (ulong *)0x0;
  uStack_e68 = (ulong **)0x0;
  uStack_f30 = (ulong *)((ulong)uStack_f30 & 0xffffffffffffff00);
  uStack_f38 = &puStack_e78;
  puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x500);
  if (puVar17 == (ulong *)0x0) {
    func_0x0eec74c0(0x500,0);
  }
  puVar2 = puVar17 + 0xa0;
  puStack_e78 = puVar17;
  puStack_e70 = puVar17;
  uStack_e68 = (ulong **)puVar2;
  if (((ulong)_auStack_b58 & 1) == 0) {
    puVar17[2] = (ulong)puStack_b48;
    *puVar17 = (ulong)_auStack_b58;
    puVar17[1] = (ulong)uStack_b50;
  }
  else {
    func_0x0412e5e0(puVar17,puStack_b48,uStack_b50);
  }
  *(undefined4 *)(puVar17 + 3) = auStack_b40._0_4_;
  *(undefined4 *)((long)puVar17 + 0x1c) = auStack_b40._4_4_;
  *(undefined4 *)(puVar17 + 4) = (undefined4)uStack_b38;
  *(undefined4 *)((long)puVar17 + 0x24) = uStack_b38._4_4_;
  func_0x06523ef0(puVar17 + 5,&pcStack_b30);
  if (((ulong)pcStack_a18 & 1) == 0) {
    puVar17[0x2a] = uStack_a08;
    puVar17[0x28] = (ulong)pcStack_a18;
    puVar17[0x29] = (ulong)pcStack_a10;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x28,uStack_a08,pcStack_a10);
  }
  *(undefined4 *)(puVar17 + 0x2b) = uStack_a00;
  *(undefined4 *)((long)puVar17 + 0x15c) = uStack_9fc;
  *(undefined4 *)(puVar17 + 0x2c) = uStack_9f8;
  *(undefined4 *)((long)puVar17 + 0x164) = uStack_9f4;
  func_0x06523ef0(puVar17 + 0x2d,auStack_9f0);
  if ((uStack_8d8 & 1) == 0) {
    puVar17[0x52] = uStack_8c8;
    puVar17[0x50] = uStack_8d8;
    puVar17[0x51] = uStack_8d0;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x50,uStack_8c8,uStack_8d0);
  }
  *(undefined4 *)(puVar17 + 0x53) = uStack_8c0;
  *(undefined4 *)((long)puVar17 + 0x29c) = uStack_8bc;
  *(undefined4 *)(puVar17 + 0x54) = uStack_8b8;
  *(undefined4 *)((long)puVar17 + 0x2a4) = uStack_8b4;
  func_0x06523ef0(puVar17 + 0x55,auStack_8b0);
  if ((uStack_798 & 1) == 0) {
    puVar17[0x7a] = (ulong)puStack_788;
    puVar17[0x78] = uStack_798;
    puVar17[0x79] = uStack_790;
  }
  else {
    func_0x0412e5e0(puVar17 + 0x78,puStack_788,uStack_790);
  }
  *(undefined4 *)(puVar17 + 0x7b) = uStack_780;
  *(undefined4 *)((long)puVar17 + 0x3dc) = uStack_77c;
  *(undefined4 *)(puVar17 + 0x7c) = uStack_778;
  *(undefined4 *)((long)puVar17 + 0x3e4) = uStack_774;
  func_0x06523ef0(puVar17 + 0x7d,auStack_770);
  puStack_e70 = puVar2;
  if (pcStack_680 != (code *)0x0) {
    (*pcStack_680)(auStack_698);
  }
  if (pcStack_6c8 != (code *)0x0) {
    (*pcStack_6c8)(auStack_6e0);
  }
  if (pcStack_708 != (code *)0x0) {
    (*pcStack_708)(apcStack_720);
  }
  if (pcStack_748 != (code *)0x0) {
    (*pcStack_748)(auStack_760);
  }
  if ((uStack_798 & 1) != 0) {
    func_0x0412a280(puStack_788,uStack_798 & 0xfffffffffffffffe);
  }
  if (apcStack_7c0[0] != (code *)0x0) {
    (*apcStack_7c0[0])(auStack_7d8);
  }
  if (pcStack_808 != (code *)0x0) {
    (*pcStack_808)(auStack_820);
  }
  if (pcStack_848 != (code *)0x0) {
    (*pcStack_848)(auStack_860);
  }
  if (pcStack_888 != (code *)0x0) {
    (*pcStack_888)(auStack_8a0);
  }
  if ((uStack_8d8 & 1) != 0) {
    func_0x0412a280(uStack_8c8,uStack_8d8 & 0xfffffffffffffffe);
  }
  if (pcStack_900 != (code *)0x0) {
    (*pcStack_900)(auStack_918);
  }
  if (pcStack_948 != (code *)0x0) {
    (*pcStack_948)(auStack_960);
  }
  if (pcStack_988 != (code *)0x0) {
    (*pcStack_988)(auStack_9a0);
  }
  if (pcStack_9c8 != (code *)0x0) {
    (*pcStack_9c8)(auStack_9e0);
  }
  if (((ulong)pcStack_a18 & 1) != 0) {
    func_0x0412a280(uStack_a08,(ulong)pcStack_a18 & 0xfffffffffffffffe);
  }
  if (apcStack_a40[0] != (code *)0x0) {
    (*apcStack_a40[0])(auStack_a58);
  }
  if (pcStack_a88 != (code *)0x0) {
    (*pcStack_a88)(auStack_aa0);
  }
  if (apcStack_ac8[0] != (code *)0x0) {
    (*apcStack_ac8[0])(&lStack_ae0);
  }
  if (pcStack_b08 != (code *)0x0) {
    (*pcStack_b08)(auStack_b28 + 8);
  }
  if (((ulong)_auStack_b58 & 1) != 0) {
    func_0x0412a280(puStack_b48,(ulong)_auStack_b58 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_c50 + 0x20))();
  uVar23 = ((long)puStack_e70 - (long)puStack_e78 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((uVar13 != 0) && ((uint)uVar23 != 0)) {
    uVar26 = 0;
    uVar18 = 0;
    do {
      auVar31 = (**(code **)(*plStack_c50 + 0x28))(plStack_c50,uVar26);
      uVar22 = auVar31._8_8_;
      lVar25 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ == uVar22) {
        if (auVar31._0_8_ == 0) {
          lVar24 = FUN_048aead0(auVar31._8_8_);
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1efb1;
LAB_0ba1efce:
          lVar24 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar24 + 8)) goto LAB_0ba1efe0;
        }
        else {
          iVar14 = *(int *)(auVar31._0_8_ + 8);
          if (lVar25 == 0) goto LAB_0ba1efce;
LAB_0ba1efb1:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1efe0;
        }
      }
      else {
LAB_0ba1efe0:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1f1d8;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1f1d8;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1f1d8;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1f1d8;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == uVar22) {
          if (auVar31._0_8_ == 0) {
            lVar24 = FUN_048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar24 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar25 == 0) {
            lVar24 = FUN_048aead0(uVar22);
            iVar3 = *(int *)(lVar24 + 8);
          }
          else {
            iVar3 = *(int *)(lVar25 + 8);
          }
          if (iVar14 == iVar3) goto LAB_0ba1f1d8;
        }
        puVar17 = puStack_e78;
        puVar2 = puStack_e70;
        if (puStack_e78[uVar18 * 0x28 + 4] != uVar22) goto joined_r0x0ba1f3f2;
        if (puStack_e78[uVar18 * 0x28 + 3] == 0) {
          lVar24 = FUN_048aead0();
          iVar14 = *(int *)(lVar24 + 8);
          if (lVar25 != 0) goto LAB_0ba1f1a8;
LAB_0ba1f1c0:
          lVar25 = FUN_048aead0(uVar22);
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1f3df;
        }
        else {
          iVar14 = *(int *)(puStack_e78[uVar18 * 0x28 + 3] + 8);
          if (lVar25 == 0) goto LAB_0ba1f1c0;
LAB_0ba1f1a8:
          if (iVar14 != *(int *)(lVar25 + 8)) goto LAB_0ba1f3df;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ba1f1d8:
    } while (((uint)uVar18 < (uint)uVar23) && (uVar26 = uVar26 + 1, uVar26 < uVar13));
    uVar23 = ((long)puStack_e70 - (long)puStack_e78 >> 6) * -0x3333333333333333;
  }
  puVar17 = puStack_c68;
  if (uVar23 == uVar18) {
    puVar2 = puStack_c60;
    if (puStack_c68 != (ulong *)0x0) {
      while (puVar17 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_c60 = puVar17;
      func_0x0412a280(puStack_c68,(long)puStack_c58 - (long)puStack_c68);
    }
    puStack_c58 = (ulong *)uStack_e68;
    if (puStack_480 < puStack_478) {
      *puStack_480 = 0;
      puStack_480[1] = 0;
      puStack_480[2] = 0;
      *puStack_480 = uStack_c98;
      puStack_480[1] = uStack_c90;
      puStack_480[2] = uStack_c88;
      uStack_c98 = 0;
      uStack_c90 = 0;
      uStack_c88 = 0;
      puStack_480[5] = uStack_c70;
      puStack_480[3] = (ulong)uStack_c80;
      puStack_480[4] = (ulong)uStack_c78;
      uStack_c80 = (undefined *)0x0;
      uStack_c78 = (long *)0x0;
      uStack_c70 = 0;
      puStack_480[6] = 0;
      puStack_480[7] = 0;
      puStack_480[8] = 0;
      puStack_480[6] = (ulong)puStack_e78;
      puStack_480[7] = (ulong)puStack_e70;
      puStack_480[8] = (ulong)uStack_e68;
      puStack_c68 = (ulong *)0x0;
      puStack_c60 = (ulong *)0x0;
      puStack_c58 = (ulong *)0x0;
      puStack_480[9] = (ulong)plStack_c50;
      puStack_480[10] = (ulong)pcStack_c48;
      plStack_c50 = (long *)0x0;
      pcStack_c48 = (code *)0x0;
      puStack_480[0xb] = 0;
      puStack_480[0xc] = 0;
      puStack_480[0xd] = 0;
      puStack_480[0xb] = uStack_c40;
      puStack_480[0xc] = uStack_c38;
      puStack_480[0xd] = uStack_c30;
      uStack_c40 = 0;
      uStack_c38 = 0;
      uStack_c30 = 0;
      puStack_480 = puStack_480 + 0xe;
    }
    else {
      puStack_c68 = puStack_e78;
      puStack_c60 = puStack_e70;
      puStack_480 = (ulong *)func_0x0652ac80(&lStack_488,&uStack_c98);
    }
    puVar17 = puStack_480 + -0xe;
    uVar18 = (ulong)uStack_ee8;
  }
  else {
LAB_0ba1f3df:
    puVar17 = puStack_e78;
    puVar2 = puStack_e70;
    if (puStack_e78 != (ulong *)0x0) {
joined_r0x0ba1f3f2:
      while (puVar9 = puStack_e78, puStack_e78 != puVar2) {
        puStack_e78 = puVar17;
        func_0x05fe8450(puVar2 + -0x28);
        puVar17 = puStack_e78;
        puVar2 = puVar2 + -0x28;
        puStack_e78 = puVar9;
      }
      puStack_e70 = puStack_e78;
      puStack_e78 = puVar17;
      func_0x0412a280(puVar17,(long)uStack_e68 - (long)puVar17);
    }
    puVar17 = (ulong *)0xf6c4790;
    uVar18 = (ulong)uStack_ee8;
  }
  uStack_ee8 = (ulong *)uVar18;
  if (uVar18 != 0) {
    if ((ulong *)uVar18 != uStack_ee0) {
      lVar25 = (long)uStack_ee0 - 0x40;
      do {
        if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
          (**(code **)(lVar25 + 0x18))(lVar25);
        }
        if (*(code **)(lVar25 + -0x30) != (code *)0x0) {
          (**(code **)(lVar25 + -0x30))(lVar25 + -0x48);
        }
        if (*(code **)(lVar25 + -0x70) != (code *)0x0) {
          (**(code **)(lVar25 + -0x70))(lVar25 + -0x88);
        }
        if (*(code **)(lVar25 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar25 + -0xb0))(lVar25 + -200);
        }
        uVar23 = lVar25 - 0xd8;
        lVar25 = lVar25 + -0x118;
      } while (uVar23 != uVar18);
    }
    uStack_ee0 = (ulong *)uVar18;
    func_0x0412a280(uStack_ee8,(long)uStack_ed8 - (long)uStack_ee8);
  }
  func_0x05f93280(&uStack_c98);
  func_0x064e40a0(puVar17);
  if (pcStack_70 != (code *)0x0) {
    (*pcStack_70)(auStack_88);
  }
  if (pcStack_b8 != (code *)0x0) {
    (*pcStack_b8)(auStack_d0);
  }
  if (pcStack_f8 != (code *)0x0) {
    (*pcStack_f8)(auStack_110);
  }
  if (pcStack_138 != (code *)0x0) {
    (*pcStack_138)(apuStack_150);
  }
  if (((ulong)uStack_188 & 1) != 0) {
    func_0x0412a280(puStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
  }
  if ((uStack_f00 & 1) != 0) {
    func_0x0412a280(puStack_ef0,uStack_f00 & 0xfffffffffffffffe);
  }
  if (pcStack_1b0 != (code *)0x0) {
    (*pcStack_1b0)(auStack_1c8);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(auStack_250);
  }
  if (pcStack_278 != (code *)0x0) {
    (*pcStack_278)(auStack_290);
  }
  if (((ulong)uStack_2c8 & 1) != 0) {
    func_0x0412a280(puStack_2b8,(ulong)uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((uStack_ec8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_eb4,CONCAT13(uStack_eb5,CONCAT21(uStack_eb7,uStack_eb8))),
                    CONCAT17(uStack_ec1,CONCAT25(uStack_ec3,CONCAT14(uStack_ec4,uStack_ec8))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(&puStack_3d0);
  }
  if (((ulong)uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)uStack_408 & 0xfffffffffffffffe);
  }
  if ((bStack_eb0 & 1) != 0) {
    func_0x0412a280(uStack_ea0,
                    CONCAT17(uStack_ea9,
                             CONCAT16(uStack_eaa,
                                      CONCAT15(uStack_eab,CONCAT41(uStack_eaf,bStack_eb0)))) &
                    0xfffffffffffffffe);
  }
  if (pcStack_cc0 != (code *)0x0) {
    (*pcStack_cc0)(auStack_cd8);
  }
  if (pcStack_d08 != (code *)0x0) {
    (*pcStack_d08)(auStack_d20);
  }
  if (pcStack_d48 != (code *)0x0) {
    (*pcStack_d48)(auStack_d60);
  }
  if (pcStack_d88 != (code *)0x0) {
    (*pcStack_d88)(&uStack_da0);
  }
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  if (((uint)uStack_f18 & 1) != 0) {
    func_0x0412a280(lStack_f08,CONCAT44(uStack_f18._4_4_,(uint)uStack_f18) & 0xfffffffffffffffe);
  }
  uStack_dd8 = 0x4e736914;
  uStack_dd4 = 0x65;
  uStack_dd3 = 0x77;
  uStack_dd2 = 0x654c;
  uStack_dd0 = 0x76;
  uStack_dcf = 0x6c65;
  uStack_dcd = 0;
  func_0x065af670(auStack_b58);
  lVar25 = (long)&uStack_dd8 + 1;
  if (((ulong)auStack_b40 & 1) == 0) {
    if ((uStack_dd8 & 1) == 0) {
      pcStack_b30 = (code *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
      auStack_b40[5] = uStack_dd3;
      auStack_b40[4] = uStack_dd4;
      auStack_b40._6_2_ = uStack_dd2;
      auStack_b40._0_4_ = uStack_dd8;
      uStack_b38 = (undefined *)
                   CONCAT44(CONCAT13(uStack_dc9,CONCAT12(uStack_dca,CONCAT11(uStack_dcb,uStack_dcc))
                                    ),CONCAT13(uStack_dcd,CONCAT21(uStack_dcf,uStack_dd0)));
    }
    else {
      func_0x04885070(auStack_b40,CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                      CONCAT17(uStack_dc9,
                               CONCAT16(uStack_dca,
                                        CONCAT15(uStack_dcb,
                                                 CONCAT14(uStack_dcc,
                                                          CONCAT13(uStack_dcd,
                                                                   CONCAT21(uStack_dcf,uStack_dd0)))
                                                ))));
    }
  }
  else {
    bVar30 = (uStack_dd8 & 1) == 0;
    lVar24 = CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
    if (bVar30) {
      lVar24 = lVar25;
    }
    uVar18 = (ulong)((byte)uStack_dd8 >> 1);
    if (!bVar30) {
      uVar18 = CONCAT17(uStack_dc9,
                        CONCAT16(uStack_dca,
                                 CONCAT15(uStack_dcb,
                                          CONCAT14(uStack_dcc,
                                                   CONCAT13(uStack_dcd,
                                                            CONCAT21(uStack_dcf,uStack_dd0))))));
    }
    func_0x04885120(auStack_b40,lVar24,uVar18);
  }
  auStack_b28 = func_0x0651e0c0();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar21 = plStack_b00;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f2fb588;
  pcStack_b08 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f2fb5d8;
  if (plStack_b00 == (long *)0x0) {
LAB_0ba1f91a:
    plStack_b00 = plVar20;
    if (uStack_468 < uStack_460) goto LAB_0ba1f92c;
LAB_0ba1f968:
    uStack_468 = func_0x065b01f0(&lStack_470,auStack_b58);
  }
  else {
    LOCK();
    plVar1 = plStack_b00 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0ba1f91a;
    lVar24 = *plStack_b00;
    plStack_b00 = plVar20;
    (**(code **)(lVar24 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    if (uStack_460 <= uStack_468) goto LAB_0ba1f968;
LAB_0ba1f92c:
    uVar18 = uStack_468;
    func_0x065b0410(uStack_468,auStack_b58);
    uStack_468 = uVar18 + 0x1b0;
  }
  lVar24 = uStack_468 - 0x1b0;
  func_0x0652dc20(auStack_b58);
  func_0x064e40a0(lVar24);
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  uStack_dd8 = 0x6765721a;
  uStack_dd4 = 0x69;
  uStack_dd3 = 0x6f;
  uStack_dd2 = 0x4d6e;
  uStack_dd0 = 0x61;
  uStack_dcf = 0x616e;
  uStack_dcd = 0x67;
  uStack_dcc = 0x65;
  uStack_dcb = 0x72;
  uStack_dca = 0;
  func_0x065af670(auStack_b58);
  if (((ulong)auStack_b40 & 1) == 0) {
    if ((uStack_dd8 & 1) == 0) {
      pcStack_b30 = (code *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
      auStack_b40[5] = uStack_dd3;
      auStack_b40[4] = uStack_dd4;
      auStack_b40._6_2_ = uStack_dd2;
      auStack_b40._0_4_ = uStack_dd8;
      uStack_b38 = (undefined *)
                   CONCAT44(CONCAT13(uStack_dc9,CONCAT12(uStack_dca,CONCAT11(uStack_dcb,uStack_dcc))
                                    ),CONCAT13(uStack_dcd,CONCAT21(uStack_dcf,uStack_dd0)));
    }
    else {
      func_0x04885070(auStack_b40,CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                      CONCAT17(uStack_dc9,
                               CONCAT16(uStack_dca,
                                        CONCAT15(uStack_dcb,
                                                 CONCAT14(uStack_dcc,
                                                          CONCAT13(uStack_dcd,
                                                                   CONCAT21(uStack_dcf,uStack_dd0)))
                                                ))));
    }
  }
  else {
    bVar30 = (uStack_dd8 & 1) == 0;
    lVar24 = CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
    if (bVar30) {
      lVar24 = lVar25;
    }
    uVar18 = (ulong)((byte)uStack_dd8 >> 1);
    if (!bVar30) {
      uVar18 = CONCAT17(uStack_dc9,
                        CONCAT16(uStack_dca,
                                 CONCAT15(uStack_dcb,
                                          CONCAT14(uStack_dcc,
                                                   CONCAT13(uStack_dcd,
                                                            CONCAT21(uStack_dcf,uStack_dd0))))));
    }
    func_0x04885120(auStack_b40,lVar24,uVar18);
  }
  auVar31 = func_0x0bad61a0();
  auStack_b28 = auVar31;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar20 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar21 = plStack_b00;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f2fb638;
  pcStack_b08 = (code *)(plVar20 + 3);
  *(undefined1 *)(plVar20 + 4) = 1;
  plVar20[5] = 0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[3] = (long)&UNK_0f2fb688;
  if (plStack_b00 == (long *)0x0) {
LAB_0ba1fb1f:
    plStack_b00 = plVar20;
    if (uStack_468 < uStack_460) goto LAB_0ba1fb31;
LAB_0ba1fb6d:
    uStack_468 = func_0x065b01f0(&lStack_470,auStack_b58);
  }
  else {
    LOCK();
    plVar1 = plStack_b00 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0ba1fb1f;
    lVar24 = *plStack_b00;
    plStack_b00 = plVar20;
    (**(code **)(lVar24 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    if (uStack_460 <= uStack_468) goto LAB_0ba1fb6d;
LAB_0ba1fb31:
    uVar18 = uStack_468;
    func_0x065b0410(uStack_468,auStack_b58);
    uStack_468 = uVar18 + 0x1b0;
  }
  lVar24 = uStack_468 - 0x1b0;
  func_0x0652dc20(auStack_b58);
  func_0x064e40a0(lVar24);
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  uStack_dd8 = CONCAT31((int3)_DAT_011c855d,0x2c);
  uStack_dd4 = (undefined1)((uint)_DAT_011c855d >> 0x18);
  uStack_dd3 = (undefined1)_UNK_011c8561;
  uStack_dd2 = (undefined2)((uint)_UNK_011c8561 >> 8);
  uStack_dd0 = (undefined1)((uint)_UNK_011c8561 >> 0x18);
  uStack_dcf = (undefined2)_UNK_011c8565;
  uStack_dcd = (undefined1)((uint)_UNK_011c8565 >> 0x10);
  uStack_dcc = (undefined1)((uint)_UNK_011c8565 >> 0x18);
  uStack_dcb = (undefined1)_UNK_011c8569;
  uStack_dca = (undefined1)((uint)_UNK_011c8569 >> 8);
  uStack_dc9 = 0x6e;
  uStack_dc8 = 0x4d;
  uStack_dc7 = 0x726567616e61;
  uStack_dc1 = 0;
  func_0x065af670(auStack_b58);
  plVar20 = plStack_40;
  if (((ulong)auStack_b40 & 1) == 0) {
    if ((uStack_dd8 & 1) == 0) {
      pcStack_b30 = (code *)CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
      auStack_b40[5] = uStack_dd3;
      auStack_b40[4] = uStack_dd4;
      auStack_b40._6_2_ = uStack_dd2;
      auStack_b40._0_4_ = uStack_dd8;
      uStack_b38 = (undefined *)
                   CONCAT44(CONCAT13(uStack_dc9,CONCAT12(uStack_dca,CONCAT11(uStack_dcb,uStack_dcc))
                                    ),CONCAT13(uStack_dcd,CONCAT21(uStack_dcf,uStack_dd0)));
    }
    else {
      func_0x04885070(auStack_b40,CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                      CONCAT17(uStack_dc9,
                               CONCAT16(uStack_dca,
                                        CONCAT15(uStack_dcb,
                                                 CONCAT14(uStack_dcc,
                                                          CONCAT13(uStack_dcd,
                                                                   CONCAT21(uStack_dcf,uStack_dd0)))
                                                ))));
    }
  }
  else {
    bVar30 = (uStack_dd8 & 1) != 0;
    if (bVar30) {
      lVar25 = CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8));
    }
    uVar18 = (ulong)((byte)uStack_dd8 >> 1);
    if (bVar30) {
      uVar18 = CONCAT17(uStack_dc9,
                        CONCAT16(uStack_dca,
                                 CONCAT15(uStack_dcb,
                                          CONCAT14(uStack_dcc,
                                                   CONCAT13(uStack_dcd,
                                                            CONCAT21(uStack_dcf,uStack_dd0))))));
    }
    func_0x04885120(auStack_b40,lVar25,uVar18);
  }
  auVar31 = func_0x0bad66d0();
  auStack_b28 = auVar31;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar21 = plStack_b00;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f2fb6e8;
  pcStack_b08 = (code *)(puVar16 + 3);
  *(undefined1 *)(puVar16 + 4) = 1;
  puVar16[5] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[3] = &UNK_0f2fb738;
  if (plStack_b00 == (long *)0x0) {
LAB_0ba1fd1f:
    plStack_b00 = puVar16;
    if (uStack_460 <= uStack_468) {
LAB_0ba1fd6d:
      uStack_468 = func_0x065b01f0(&lStack_470,auStack_b58);
      goto LAB_0ba1fd85;
    }
  }
  else {
    LOCK();
    plVar1 = plStack_b00 + 1;
    lVar25 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar25 != 0) goto LAB_0ba1fd1f;
    lVar25 = *plStack_b00;
    plStack_b00 = puVar16;
    (**(code **)(lVar25 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    if (uStack_460 <= uStack_468) goto LAB_0ba1fd6d;
  }
  uVar18 = uStack_468;
  func_0x065b0410(uStack_468,auStack_b58);
  uStack_468 = uVar18 + 0x1b0;
LAB_0ba1fd85:
  lVar25 = uStack_468 + -0x1b0;
  func_0x0652dc20(auStack_b58);
  func_0x064e40a0(lVar25);
  if ((uStack_dd8 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_dc1,CONCAT61(uStack_dc7,uStack_dc8)),
                    CONCAT26(uStack_dd2,CONCAT15(uStack_dd3,CONCAT14(uStack_dd4,uStack_dd8))) &
                    0xfffffffffffffffe);
  }
  puStack_b48 = (undefined8 *)0x0;
  pcStack_b30 = (code *)0x0;
  uStack_af8 = 0;
  pcStack_af0 = (code *)0x0;
  pcStack_b08 = (code *)0x0;
  plStack_b00 = (long *)0x0;
  puStack_b18 = (undefined *)0x0;
  pcStack_b10 = (code *)0x0;
  auStack_b28._0_8_ = 0;
  auStack_b28._8_8_ = 0;
  _auStack_b58 = (undefined *)0x0;
  uStack_b50 = (long *)0x0;
  auStack_b40 = (undefined1  [8])0x4564616f6c657218;
  uStack_b38 = (undefined *)0x726f746964;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  pcVar15 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar15 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar15 + 8) = 0;
  *(undefined8 *)(pcVar15 + 0x10) = 0;
  *(undefined **)pcVar15 = &UNK_0f2fb798;
  uVar12 = func_0x0d858500(&uStack_408);
  pcVar28 = pcVar15 + 0x18;
  pcVar15[0x20] = (code)0x0;
  *(undefined4 *)(pcVar15 + 0x24) = uVar12;
  *(undefined4 *)(pcVar15 + 0x28) = 0;
  *(undefined8 *)(pcVar15 + 0x30) = 0;
  *(undefined8 *)(pcVar15 + 0x38) = 0;
  *(undefined8 *)(pcVar15 + 0x40) = 0;
  *(undefined **)(pcVar15 + 0x18) = &UNK_0f2fb7e8;
  *(undefined8 *)(pcVar15 + 0x48) = 0;
  *(undefined8 *)(pcVar15 + 0x50) = 0;
  *(undefined8 *)(pcVar15 + 0x58) = 0;
  uStack_408 = (code *)0x0;
  uStack_400 = (code *)0x0;
  uStack_3f8 = 0;
  uVar12 = func_0x0d858620(pcVar28);
  pcVar27 = pcStack_b08;
  *(undefined4 *)(pcVar15 + 0x28) = uVar12;
  pcStack_b10 = pcVar28;
  if (pcStack_b08 != (code *)0x0) {
    LOCK();
    pcVar28 = pcStack_b08 + 8;
    lVar25 = *(long *)pcVar28;
    *(long *)pcVar28 = *(long *)pcVar28 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      lVar25 = *(long *)pcStack_b08;
      pcStack_b08 = pcVar15;
      (**(code **)(lVar25 + 0x10))(pcVar27);
      func_0x0412c2d0(pcVar27);
      pcVar15 = pcStack_b08;
    }
  }
  pcStack_b08 = pcVar15;
  uStack_dd8 = 0;
  uStack_dd4 = 0;
  uStack_dd3 = 0;
  uStack_dd2 = 0;
  uStack_dd0 = 0;
  uStack_dcf = 0;
  uStack_dcd = 0;
  uStack_dcc = 0;
  uStack_dcb = 0;
  uStack_dca = 0;
  uStack_dc9 = 0;
  uStack_dc8 = 0;
  uStack_dc7 = 0;
  uStack_dc1 = 0;
  (**(code **)(*(long *)pcStack_b10 + 0x20))();
  uVar5 = auStack_b28._0_8_;
  lVar25 = auStack_b28._8_8_;
  if (auStack_b28._0_8_ != 0) {
    while (uVar5 != lVar25) {
      func_0x05fe8450(lVar25 + -0x140);
      lVar25 = lVar25 + -0x140;
    }
    auStack_b28._8_8_ = uVar5;
    func_0x0412a280(auStack_b28._0_8_,(long)puStack_b18 - auStack_b28._0_8_);
  }
  auStack_b28._0_8_ = 0;
  auStack_b28._8_8_ = 0;
  puStack_b18 = (undefined *)0x0;
  if (puStack_480 < puStack_478) {
    *puStack_480 = 0;
    puStack_480[1] = 0;
    puStack_480[2] = 0;
    *puStack_480 = (ulong)_auStack_b58;
    puStack_480[1] = (ulong)uStack_b50;
    puStack_480[2] = (ulong)puStack_b48;
    _auStack_b58 = (undefined *)0x0;
    uStack_b50 = (long *)0x0;
    puStack_b48 = (undefined8 *)0x0;
    puStack_480[5] = (ulong)pcStack_b30;
    puStack_480[3] = (ulong)auStack_b40;
    puStack_480[4] = (ulong)uStack_b38;
    auStack_b40 = (undefined1  [8])0x0;
    uStack_b38 = (undefined *)0x0;
    pcStack_b30 = (code *)0x0;
    puStack_480[6] = 0;
    puStack_480[7] = 0;
    puStack_480[8] = 0;
    puStack_480[6] = 0;
    puStack_480[7] = 0;
    puStack_480[8] = 0;
    auStack_b28._0_8_ = 0;
    auStack_b28._8_8_ = 0;
    puStack_b18 = (undefined *)0x0;
    puStack_480[9] = (ulong)pcStack_b10;
    puStack_480[10] = (ulong)pcStack_b08;
    pcStack_b10 = (code *)0x0;
    pcStack_b08 = (code *)0x0;
    puStack_480[0xb] = 0;
    puStack_480[0xc] = 0;
    puStack_480[0xd] = 0;
    puStack_480[0xb] = (ulong)plStack_b00;
    puStack_480[0xc] = uStack_af8;
    puStack_480[0xd] = (ulong)pcStack_af0;
    plStack_b00 = (long *)0x0;
    uStack_af8 = 0;
    pcStack_af0 = (code *)0x0;
    puVar17 = puStack_480 + 0xe;
    lVar25 = (long)uStack_408;
  }
  else {
    puVar17 = (ulong *)func_0x0652ac80(&lStack_488,auStack_b58);
    lVar25 = (long)uStack_408;
  }
  puStack_480 = puVar17;
  uStack_408 = (code *)lVar25;
  if (lVar25 != 0) {
    if ((code *)lVar25 != uStack_400) {
      lVar24 = (long)uStack_400 + -0x40;
      do {
        if (*(code **)(lVar24 + 0x18) != (code *)0x0) {
          (**(code **)(lVar24 + 0x18))(lVar24);
        }
        if (*(code **)(lVar24 + -0x30) != (code *)0x0) {
          (**(code **)(lVar24 + -0x30))(lVar24 + -0x48);
        }
        if (*(code **)(lVar24 + -0x70) != (code *)0x0) {
          (**(code **)(lVar24 + -0x70))(lVar24 + -0x88);
        }
        if (*(code **)(lVar24 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar24 + -0xb0))(lVar24 + -200);
        }
        lVar29 = lVar24 + -0xd8;
        lVar24 = lVar24 + -0x118;
      } while (lVar29 != lVar25);
    }
    func_0x0412a280(uStack_408,uStack_3f8 - (long)uStack_408);
  }
  func_0x05f93280(auStack_b58);
  func_0x064e40a0(puVar17 + -0xe);
  func_0x064e40a0(&lStack_518);
  auStack_4d0 = func_0x0baca160();
  lVar24 = lStack_500;
  lVar25 = lStack_4f8;
  if (lStack_500 != 0) {
    for (; lVar24 != lVar25; lVar25 = lVar25 + -0x30) {
      if ((*(byte *)(lVar25 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar25 + -0x10),
                        *(ulong *)(lVar25 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_4f8 = lVar24;
    func_0x0412a280(lStack_500,lStack_4f0 - lStack_500);
  }
  lVar29 = lStack_508;
  lVar24 = lStack_510;
  lVar25 = lStack_518;
  lStack_518 = 0;
  lStack_510 = 0;
  lStack_508 = 0;
  *plVar20 = lVar25;
  plVar20[1] = lVar24;
  plVar20[2] = lVar29;
  lStack_500 = 0;
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  plVar20[5] = (long)puStack_4d8;
  plVar20[3] = uStack_4e8;
  plVar20[4] = (long)plStack_4e0;
  uStack_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  puStack_4d8 = (undefined8 *)0x0;
  *(undefined4 *)(plVar20 + 8) = uStack_4c0;
  *(undefined4 *)((long)plVar20 + 0x44) = uStack_4bc;
  *(undefined4 *)(plVar20 + 9) = uStack_4b8;
  *(undefined4 *)((long)plVar20 + 0x4c) = uStack_4b4;
  *(undefined1 (*) [16])(plVar20 + 6) = auStack_4d0;
  plVar20[10] = lStack_4b0;
  plVar20[0xb] = lStack_4a8;
  plVar20[0xc] = lStack_4a0;
  lStack_4b0 = 0;
  lStack_4a8 = 0;
  lStack_4a0 = 0;
  plVar20[0xd] = lStack_498;
  plVar20[0xe] = lStack_490;
  lStack_498 = 0;
  lStack_490 = 0;
  plVar20[0xf] = lStack_488;
  plVar20[0x10] = (long)puStack_480;
  plVar20[0x11] = (long)puStack_478;
  lStack_488 = 0;
  puStack_480 = (ulong *)0x0;
  puStack_478 = (ulong *)0x0;
  plVar20[0x12] = lStack_470;
  plVar20[0x13] = uStack_468;
  plVar20[0x14] = uStack_460;
  lStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  plVar20[0x15] = lStack_458;
  plVar20[0x16] = lStack_450;
  plVar20[0x17] = lStack_448;
  lStack_458 = 0;
  lStack_450 = 0;
  lStack_448 = 0;
  plVar20[0x18] = lStack_440;
  plVar20[0x19] = lStack_438;
  plVar20[0x1a] = lStack_430;
  lStack_440 = 0;
  lStack_438 = 0;
  lStack_430 = 0;
  *(undefined4 *)(plVar20 + 0x1b) = (undefined4)uStack_428;
  *(undefined4 *)((long)plVar20 + 0xdc) = uStack_428._4_4_;
  *(undefined4 *)(plVar20 + 0x1c) = (undefined4)uStack_420;
  *(undefined4 *)((long)plVar20 + 0xe4) = uStack_420._4_4_;
  plVar20[0x1d] = lStack_418;
  uStack_428 = 0;
  uStack_420 = 0;
  lStack_418 = 0;
  func_0x0651ffe0(&lStack_500);
  lVar24 = lStack_518;
  lVar25 = lStack_510;
  if (lStack_518 != 0) {
    for (; lVar24 != lVar25; lVar25 = lVar25 + -0x30) {
      if ((*(byte *)(lVar25 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar25 + -0x10),
                        *(ulong *)(lVar25 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_510 = lVar24;
    func_0x0412a280(lStack_518,lStack_508 - lStack_518);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11c855d  customDimensionManager
 * 0x133501f  createCustomBiomeSource
 * 0x13501c2  MinecraftEditorInternal
 * 0x13bb05f  activationFunction
 * 0x14079ac  sessionLifecycleFunction
 * 0x1455b0c  shutdownFunction
 */
