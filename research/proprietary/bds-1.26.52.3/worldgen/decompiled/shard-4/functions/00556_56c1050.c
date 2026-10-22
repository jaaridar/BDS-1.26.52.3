/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x57c1050 (ELF vaddr 0x56c1050)
 * Label: caller-of-callee
 * Body:  [[057c1050, 057c21ce] [057c21d0, 057c27a5] [057c27b0, 057c27ec] [057c27f0, 057c4b41] [057c58b1, 057c5938]]
 * Ghidra: FUN_057c1050
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_057c1050(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined5 uVar18;
  undefined2 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  byte *pbVar23;
  undefined4 *puVar24;
  uint *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  byte **ppbVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  byte *pbVar34;
  bool bVar35;
  byte *pbStack_b28;
  byte *pbStack_b20;
  byte *pbStack_b18;
  byte *pbStack_b10;
  long *plStack_b08;
  undefined8 uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  undefined8 uStack_ae8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  undefined8 uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  byte *pbStack_a88;
  long *plStack_a80;
  undefined1 uStack_a71;
  uint *puStack_a70;
  byte *pbStack_a68;
  undefined4 uStack_a60;
  undefined2 uStack_a5c;
  undefined2 uStack_a5a;
  undefined4 uStack_a58;
  undefined2 uStack_a54;
  undefined2 uStack_a52;
  byte *pbStack_a50;
  undefined8 uStack_a48;
  byte *pbStack_a28;
  undefined8 uStack_a20;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  byte *pbStack_a10;
  undefined8 uStack_a08;
  long *plStack_9e0;
  byte bStack_9d8;
  undefined7 uStack_9d7;
  undefined1 uStack_9d0;
  undefined4 uStack_9cf;
  undefined1 uStack_9cb;
  undefined8 uStack_9c8;
  byte bStack_9c0;
  undefined4 uStack_9bf;
  undefined4 uStack_9bb;
  undefined4 uStack_9b7;
  undefined4 uStack_9b3;
  undefined4 uStack_9af;
  undefined3 uStack_9ab;
  byte bStack_9a8;
  undefined6 uStack_9a7;
  undefined1 uStack_9a1;
  undefined1 uStack_9a0;
  undefined6 uStack_99f;
  undefined1 uStack_999;
  undefined8 uStack_998;
  byte bStack_990;
  undefined7 uStack_98f;
  undefined1 uStack_988;
  undefined4 uStack_987;
  undefined1 uStack_983;
  undefined8 uStack_980;
  ulong uStack_978;
  undefined8 uStack_970;
  undefined8 *puStack_968;
  ulong uStack_960;
  undefined8 uStack_958;
  undefined8 *puStack_950;
  ulong uStack_948;
  undefined8 uStack_940;
  undefined8 *puStack_938;
  ulong uStack_930;
  undefined8 uStack_928;
  undefined8 *puStack_920;
  byte bStack_918;
  undefined4 uStack_917;
  undefined4 uStack_913;
  undefined4 uStack_90f;
  undefined4 uStack_90b;
  undefined1 uStack_907;
  undefined6 uStack_906;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined4 *puStack_8f0;
  ulong uStack_8e8;
  undefined8 uStack_8e0;
  undefined4 *puStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined4 *puStack_8c0;
  ulong uStack_8b8;
  undefined8 uStack_8b0;
  undefined4 *puStack_8a8;
  ulong uStack_8a0;
  undefined8 uStack_898;
  undefined4 *puStack_890;
  ulong uStack_888;
  undefined8 uStack_880;
  undefined4 *puStack_878;
  byte bStack_870;
  undefined7 uStack_86f;
  undefined1 uStack_868;
  undefined1 uStack_867;
  undefined8 uStack_860;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  ulong uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  ulong uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  ulong uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  ulong uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  ulong uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  ulong uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  ulong uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  ulong uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  ulong uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  ulong uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  ulong uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  uint *puStack_678;
  long *plStack_670;
  byte bStack_668;
  undefined1 uStack_667;
  undefined1 uStack_666;
  undefined5 uStack_665;
  undefined8 uStack_658;
  byte bStack_650;
  undefined1 uStack_64f;
  undefined1 uStack_64e;
  undefined5 uStack_64d;
  undefined8 uStack_640;
  byte bStack_638;
  undefined1 uStack_637;
  undefined1 uStack_636;
  undefined5 uStack_635;
  undefined8 uStack_628;
  byte bStack_620;
  undefined1 uStack_61f;
  undefined1 uStack_61e;
  undefined5 uStack_61d;
  undefined8 uStack_610;
  byte bStack_608;
  undefined1 uStack_607;
  undefined1 uStack_606;
  undefined5 uStack_605;
  undefined8 uStack_5f8;
  byte bStack_5f0;
  undefined1 uStack_5ef;
  undefined1 uStack_5ee;
  undefined5 uStack_5ed;
  undefined8 uStack_5e0;
  byte bStack_5d8;
  undefined1 uStack_5d7;
  undefined1 uStack_5d6;
  undefined5 uStack_5d5;
  undefined8 uStack_5c8;
  byte bStack_5c0;
  undefined1 uStack_5bf;
  undefined1 uStack_5be;
  undefined5 uStack_5bd;
  undefined8 uStack_5b0;
  byte bStack_5a8;
  undefined1 uStack_5a7;
  undefined1 uStack_5a6;
  undefined5 uStack_5a5;
  undefined8 uStack_598;
  byte bStack_590;
  undefined1 uStack_58f;
  undefined6 uStack_58e;
  undefined8 uStack_580;
  byte bStack_578;
  undefined1 uStack_577;
  undefined6 uStack_576;
  undefined8 uStack_568;
  byte bStack_560;
  undefined1 uStack_55f;
  undefined6 uStack_55e;
  undefined8 uStack_550;
  byte bStack_548;
  undefined1 uStack_547;
  undefined6 uStack_546;
  undefined8 uStack_538;
  byte bStack_530;
  undefined1 uStack_52f;
  undefined6 uStack_52e;
  undefined8 uStack_520;
  byte bStack_518;
  undefined1 uStack_517;
  undefined6 uStack_516;
  undefined8 uStack_508;
  byte bStack_500;
  undefined1 uStack_4ff;
  undefined6 uStack_4fe;
  undefined8 uStack_4f0;
  byte bStack_4e8;
  undefined1 uStack_4e7;
  undefined6 uStack_4e6;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  byte *pbStack_4c8;
  undefined8 *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 *puStack_4b0;
  byte bStack_4a8;
  undefined7 uStack_4a7;
  undefined8 uStack_498;
  byte bStack_490;
  undefined7 uStack_48f;
  undefined8 uStack_480;
  byte bStack_478;
  undefined7 uStack_477;
  undefined8 uStack_468;
  byte bStack_460;
  undefined7 uStack_45f;
  undefined8 uStack_450;
  uint uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  byte *pbStack_438;
  undefined1 auStack_430 [16];
  byte bStack_420;
  undefined7 uStack_41f;
  undefined8 uStack_410;
  byte bStack_408;
  undefined7 uStack_407;
  undefined8 uStack_3f8;
  byte bStack_3f0;
  undefined7 uStack_3ef;
  undefined8 uStack_3e0;
  byte bStack_3d8;
  undefined7 uStack_3d7;
  undefined8 uStack_3c8;
  uint uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  byte *pbStack_3b0;
  undefined1 auStack_3a8 [16];
  byte bStack_398;
  undefined7 uStack_397;
  undefined8 uStack_388;
  byte bStack_380;
  undefined7 uStack_37f;
  undefined8 uStack_370;
  byte bStack_368;
  undefined7 uStack_367;
  undefined8 uStack_358;
  byte bStack_350;
  undefined7 uStack_34f;
  undefined8 uStack_340;
  byte bStack_338;
  undefined7 uStack_337;
  undefined8 uStack_328;
  undefined1 auStack_320 [16];
  byte bStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_300;
  byte bStack_2f8;
  undefined7 uStack_2f7;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined7 uStack_2df;
  undefined8 uStack_2d0;
  byte bStack_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  byte bStack_288;
  undefined7 uStack_287;
  undefined8 uStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined8 uStack_260;
  byte bStack_258;
  undefined7 uStack_257;
  undefined8 uStack_248;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_230;
  byte bStack_228;
  undefined7 uStack_227;
  undefined8 uStack_218;
  undefined1 auStack_210 [16];
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c0;
  byte bStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  byte bStack_178;
  undefined7 uStack_177;
  undefined8 uStack_168;
  byte bStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_150;
  byte bStack_148;
  undefined7 uStack_147;
  undefined8 uStack_138;
  byte bStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_120;
  byte bStack_118;
  undefined7 uStack_117;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  byte bStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puStack_878 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_878 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar27 = _UNK_012584fa;
  uStack_888 = 0x29;
  uStack_880 = 0x22;
  *(undefined8 *)(puStack_878 + 4) = _DAT_012584f2;
  *(undefined8 *)(puStack_878 + 6) = uVar27;
  uVar13 = _UNK_012584ee;
  uVar12 = _UNK_012584ea;
  uVar11 = _UNK_012584e6;
  *puStack_878 = _DAT_012584e2;
  puStack_878[1] = uVar11;
  puStack_878[2] = uVar12;
  puStack_878[3] = uVar13;
  *(undefined2 *)(puStack_878 + 8) = 0x6b63;
  *(undefined1 *)((long)puStack_878 + 0x22) = 0;
  bStack_870 = 0x10;
  uStack_86f = 0x7469726f697270;
  uStack_868 = 0x79;
  uStack_867 = 0;
  bStack_5a8 = 2;
  uStack_5a7 = 0x30;
  uStack_5a6 = 0;
  bStack_5c0 = 2;
  uStack_5bf = 0x30;
  uStack_5be = 0;
  bStack_4e8 = 0;
  uStack_4e7 = 0;
  func_0x0564aad0(&puStack_4b8,&uStack_888,&bStack_870,0,&bStack_5a8,0,&bStack_5c0,&bStack_4e8);
  uVar27 = *param_1;
  pbStack_a28 = (byte *)0x0;
  if ((uStack_448 & 1) == 0) {
    pbStack_a10 = pbStack_438;
    uStack_a20 = (undefined8 *)CONCAT44(uStack_444,uStack_448);
    uStack_a18 = uStack_440;
    uStack_a14 = uStack_43c;
  }
  else {
    func_0x0412e5e0(&uStack_a20,pbStack_438,CONCAT44(uStack_43c,uStack_440));
  }
  uStack_a08 = 0;
  if (((ulong)uStack_a20 & 1) == 0) {
    if ((byte)uStack_a20 >> 1 != 0) goto LAB_057c11e1;
LAB_057c12d6:
    pbVar34 = (byte *)0x0;
  }
  else {
    if (CONCAT44(uStack_a14,uStack_a18) == 0) goto LAB_057c12d6;
LAB_057c11e1:
    if (((ulong)uStack_a20 & 1) == 0) {
      pbVar23 = (byte *)((long)&uStack_a20 + 1);
      if (pbVar23 != (byte *)0x0) goto LAB_057c1208;
      goto LAB_057c12d6;
    }
    pbVar23 = pbStack_a10;
    if (pbStack_a10 == (byte *)0x0) goto LAB_057c12d6;
LAB_057c1208:
    if (*pbVar23 == 0) goto LAB_057c12d6;
    pbVar34 = (byte *)0xcbf29ce484222325;
    uVar26 = func_0x0eee2e90(pbVar23);
    if (uVar26 != 0) {
      uVar29 = (ulong)((uint)uVar26 & 7);
      if (7 < uVar26) {
        uVar26 = uVar26 & 0xfffffffffffffff8;
        do {
          pbVar34 = (byte *)(((((((((long)pbVar34 * 0x100000001b3 ^ (ulong)*pbVar23) * 0x100000001b3
                                  ^ (ulong)pbVar23[1]) * 0x100000001b3 ^ (ulong)pbVar23[2]) *
                                 0x100000001b3 ^ (ulong)pbVar23[3]) * 0x100000001b3 ^
                               (ulong)pbVar23[4]) * 0x100000001b3 ^ (ulong)pbVar23[5]) *
                              0x100000001b3 ^ (ulong)pbVar23[6]) * 0x100000001b3 ^ (ulong)pbVar23[7]
                            );
          pbVar23 = pbVar23 + 8;
          uVar26 = uVar26 - 8;
        } while (uVar26 != 0);
      }
      if (uVar29 != 0) {
        uVar26 = 0;
        do {
          pbVar34 = (byte *)((long)pbVar34 * 0x100000001b3 ^ (ulong)pbVar23[uVar26]);
          uVar26 = uVar26 + 1;
        } while (uVar29 != uVar26);
      }
    }
  }
  pbStack_b28 = (byte *)0x0;
  pbStack_a28 = pbVar34;
  func_0x0564b850(&pbStack_b20,&puStack_4b8);
  uStack_a60 = 0;
  uStack_a5c = 0;
  uStack_a5a = 0;
  pbStack_a68 = &UNK_0efe4168;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar20 = pbStack_b28;
  puVar20[1] = pbStack_b20;
  puVar20[5] = uStack_b00;
  puVar20[3] = pbStack_b10;
  puVar20[4] = plStack_b08;
  pbStack_b10 = (byte *)0x0;
  plStack_b08 = (long *)0x0;
  uStack_b00 = 0;
  puVar20[8] = uStack_ae8;
  puVar20[6] = uStack_af8;
  puVar20[7] = uStack_af0;
  uStack_af8 = 0;
  uStack_af0 = 0;
  uStack_ae8 = 0;
  puVar20[0xb] = uStack_ad0;
  puVar20[9] = uStack_ae0;
  puVar20[10] = uStack_ad8;
  uStack_ae0 = 0;
  uStack_ad8 = 0;
  uStack_ad0 = 0;
  puVar20[0xe] = uStack_ab8;
  puVar20[0xc] = uStack_ac8;
  puVar20[0xd] = uStack_ac0;
  uStack_ac8 = 0;
  uStack_ac0 = 0;
  uStack_ab8 = 0;
  puVar20[0x11] = uStack_aa0;
  *(undefined4 *)(puVar20 + 0xf) = (undefined4)uStack_ab0;
  *(undefined4 *)((long)puVar20 + 0x7c) = uStack_ab0._4_4_;
  *(undefined4 *)(puVar20 + 0x10) = (undefined4)uStack_aa8;
  *(undefined4 *)((long)puVar20 + 0x84) = uStack_aa8._4_4_;
  uStack_ab0 = 0;
  uStack_aa8 = 0;
  uStack_aa0 = 0;
  uStack_a60 = (uint)puVar20;
  uStack_a5c = (undefined2)((ulong)puVar20 >> 0x20);
  uStack_a5a = (undefined2)((ulong)puVar20 >> 0x30);
  lVar21 = func_0x057f55f0(uVar27,&pbStack_a28,&pbStack_a68);
  if (pbStack_a68 != (byte *)0x0) {
    (**(code **)(pbStack_a68 + 8))(&pbStack_a68);
  }
  if ((uStack_ab0 & 1) != 0) {
    func_0x0412a280(uStack_aa0,uStack_ab0 & 0xfffffffffffffffe);
  }
  if ((uStack_ac8 & 1) != 0) {
    func_0x0412a280(uStack_ab8,uStack_ac8 & 0xfffffffffffffffe);
  }
  if ((uStack_ae0 & 1) != 0) {
    func_0x0412a280(uStack_ad0,uStack_ae0 & 0xfffffffffffffffe);
  }
  if ((uStack_af8 & 1) != 0) {
    func_0x0412a280(uStack_ae8,uStack_af8 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_b10 & 1) != 0) {
    func_0x0412a280(uStack_b00,(ulong)pbStack_b10 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_a20 & 1) != 0) {
    func_0x0412a280(pbStack_a10,(ulong)uStack_a20 & 0xfffffffffffffffe);
  }
  pbStack_b28 = (byte *)0x0;
  pbStack_b20 = (byte *)((ulong)pbStack_b20 & 0xffffffffffffff00);
  func_0x0564b850(&pbStack_b18,&puStack_4b8);
  uStack_a20 = (undefined8 *)0x0;
  pbStack_a28 = &UNK_0efe4180;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 *)(puVar20 + 1) = pbStack_b20._0_1_;
  *puVar20 = pbStack_b28;
  puVar20[2] = pbStack_b18;
  puVar20[6] = uStack_af8;
  puVar20[4] = plStack_b08;
  puVar20[5] = uStack_b00;
  plStack_b08 = (long *)0x0;
  uStack_b00 = 0;
  uStack_af8 = 0;
  puVar20[9] = uStack_ae0;
  puVar20[7] = uStack_af0;
  puVar20[8] = uStack_ae8;
  uStack_af0 = 0;
  uStack_ae8 = 0;
  uStack_ae0 = 0;
  puVar20[0xc] = uStack_ac8;
  puVar20[10] = uStack_ad8;
  puVar20[0xb] = uStack_ad0;
  uStack_ad8 = 0;
  uStack_ad0 = 0;
  uStack_ac8 = 0;
  puVar20[0xf] = uStack_ab0;
  puVar20[0xd] = uStack_ac0;
  puVar20[0xe] = uStack_ab8;
  uStack_ac0 = 0;
  uStack_ab8 = 0;
  uStack_ab0 = 0;
  puVar20[0x12] = uStack_a98;
  *(undefined4 *)(puVar20 + 0x10) = (undefined4)uStack_aa8;
  *(undefined4 *)((long)puVar20 + 0x84) = uStack_aa8._4_4_;
  *(undefined4 *)(puVar20 + 0x11) = (undefined4)uStack_aa0;
  *(undefined4 *)((long)puVar20 + 0x8c) = uStack_aa0._4_4_;
  uStack_aa8 = 0;
  uStack_aa0 = 0;
  uStack_a98 = 0;
  ppbVar30 = (byte **)(lVar21 + 0x110);
  uStack_a20 = puVar20;
  if (ppbVar30 == &pbStack_a28) {
    func_0x0564b7b0(puVar20 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar20);
  }
  else {
    pbVar23 = &UNK_0efe4180;
    if ((*ppbVar30 == (byte *)0x0) ||
       ((**(code **)(*ppbVar30 + 8))(ppbVar30), pbVar23 = pbStack_a28, pbStack_a28 != (byte *)0x0))
    {
      (**(code **)pbVar23)(&pbStack_a28,ppbVar30);
      pbVar23 = pbStack_a28;
      pbStack_a28 = (byte *)0x0;
      *ppbVar30 = pbVar23;
    }
    else {
      pbStack_a28 = (byte *)0x0;
      *ppbVar30 = (byte *)0x0;
    }
  }
  if ((uStack_aa8 & 1) != 0) {
    func_0x0412a280(uStack_a98,uStack_aa8 & 0xfffffffffffffffe);
  }
  if ((uStack_ac0 & 1) != 0) {
    func_0x0412a280(uStack_ab0,uStack_ac0 & 0xfffffffffffffffe);
  }
  if ((uStack_ad8 & 1) != 0) {
    func_0x0412a280(uStack_ac8,uStack_ad8 & 0xfffffffffffffffe);
  }
  if ((uStack_af0 & 1) != 0) {
    func_0x0412a280(uStack_ae0,uStack_af0 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_b08 & 1) != 0) {
    func_0x0412a280(uStack_af8,(ulong)plStack_b08 & 0xfffffffffffffffe);
  }
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(pbStack_438,CONCAT44(uStack_444,uStack_448) & 0xfffffffffffffffe);
  }
  if ((bStack_460 & 1) != 0) {
    func_0x0412a280(uStack_450,CONCAT71(uStack_45f,bStack_460) & 0xfffffffffffffffe);
  }
  if ((bStack_478 & 1) != 0) {
    func_0x0412a280(uStack_468,CONCAT71(uStack_477,bStack_478) & 0xfffffffffffffffe);
  }
  if ((bStack_490 & 1) != 0) {
    func_0x0412a280(uStack_480,CONCAT71(uStack_48f,bStack_490) & 0xfffffffffffffffe);
  }
  if ((bStack_4a8 & 1) != 0) {
    func_0x0412a280(uStack_498,CONCAT71(uStack_4a7,bStack_4a8) & 0xfffffffffffffffe);
  }
  if ((bStack_4e8 & 1) != 0) {
    func_0x0412a280(uStack_4d8,
                    CONCAT62(uStack_4e6,CONCAT11(uStack_4e7,bStack_4e8)) & 0xfffffffffffffffe);
  }
  if ((bStack_5c0 & 1) != 0) {
    func_0x0412a280(uStack_5b0,
                    CONCAT53(uStack_5bd,CONCAT12(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_5a8 & 1) != 0) {
    func_0x0412a280(uStack_598,
                    CONCAT53(uStack_5a5,CONCAT12(uStack_5a6,CONCAT11(uStack_5a7,bStack_5a8))) &
                    0xfffffffffffffffe);
  }
  if ((bStack_870 & 1) != 0) {
    func_0x0412a280(uStack_860,CONCAT71(uStack_86f,bStack_870) & 0xfffffffffffffffe);
  }
  uVar27 = *param_1;
  uStack_a52 = 0;
  pbStack_a50 = (byte *)0x0;
  uStack_a48 = 0;
  uStack_a60 = 0x6e6f631a;
  uStack_a5c = 0x7274;
  uStack_a5a = 0x6c6f;
  uStack_a58 = 0x616c665f;
  uStack_a54 = 0x7367;
  pbStack_a68 = (byte *)0x86e3afe1b1c6e2ac;
  uStack_a20 = (undefined8 *)0x0;
  pbStack_a28 = &UNK_0efe4390;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0efe41a8;
  pbStack_b28 = (byte *)0x0;
  pbStack_b20 = (byte *)0x0;
  if (pbStack_a28 == (byte *)0x0) {
    pbStack_b28 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_a28)(&pbStack_a28,&pbStack_b28);
    pbStack_b28 = pbStack_a28;
  }
  pbStack_a28 = (byte *)0x0;
  plVar22[4] = (long)&UNK_0f2ccd78;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[8] = 0;
  plVar22[9] = 0;
  plVar22[10] = 0;
  plVar22[0xb] = 0;
  plVar22[0xc] = 0;
  *(undefined1 *)(plVar22 + 0xd) = 0;
  plStack_a80 = plVar22;
  puStack_4c0 = param_1;
  func_0x04aa75f0(plVar22 + 0xe,&lStack_78,&UNK_01254d89);
  *(undefined1 *)(plVar22 + 0x10) = 0;
  plVar33 = plVar22 + 0x11;
  plVar22[0x11] = 0;
  plVar22[0x12] = 0;
  plVar22[0x13] = 0;
  plVar22[0x14] = 0;
  plVar22[0x15] = 0;
  plVar22[0x16] = 0;
  plVar22[0x17] = 0xffffffff;
  plVar22[0x26] = 0;
  plVar22[0x27] = 0;
  plVar22[0x18] = 0;
  plVar22[0x19] = 0;
  plVar22[0x1a] = 0;
  plVar22[0x1b] = 0;
  plVar22[0x1c] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1e] = 0;
  plVar22[0x1f] = 0;
  plVar22[4] = (long)&UNK_0efe41f8;
  ppbVar30 = (byte **)(plVar22 + 0x2e);
  plVar22[0x2e] = 0;
  plVar22[0x2f] = 0;
  if (ppbVar30 != &pbStack_b28) {
    if (pbStack_b28 == (byte *)0x0) {
      pbVar23 = (byte *)0x0;
    }
    else {
      (**(code **)pbStack_b28)(&pbStack_b28,ppbVar30);
      pbVar23 = pbStack_b28;
    }
    pbStack_b28 = (byte *)0x0;
    *ppbVar30 = pbVar23;
  }
  puVar25 = (uint *)(plVar22 + 0x12);
  if (plVar33 != (long *)&DAT_0f551f58) {
    if ((*puVar25 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar22[0x14] = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar25 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar22 + 0x94) = uVar11;
        *(undefined4 *)(plVar22 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar22 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar25,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      lVar21 = 0xf551f61;
      if (bVar35) {
        lVar21 = _DAT_0f551f70;
      }
      uVar26 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar26 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar25,lVar21,uVar26);
    }
  }
  plVar31 = plVar22 + 1;
  plVar22[0x11] = _DAT_0f551f58;
  plVar22[0x15] = 0;
  puStack_a70 = puVar25;
  if (pbStack_b28 != (byte *)0x0) {
    (**(code **)(pbStack_b28 + 8))(&pbStack_b28);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  pbStack_a88 = (byte *)plVar31;
  pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar23 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar23[8] = 0;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  pbVar23[0x10] = 0;
  pbVar23[0x11] = 0;
  pbVar23[0x12] = 0;
  pbVar23[0x13] = 0;
  pbVar23[0x14] = 0;
  pbVar23[0x15] = 0;
  pbVar23[0x16] = 0;
  pbVar23[0x17] = 0;
  *(undefined **)pbVar23 = &UNK_0efe42f0;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x38] = 0;
  pbVar23[0x39] = 0;
  pbVar23[0x3a] = 0;
  pbVar23[0x3b] = 0;
  pbVar23[0x3c] = 0;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  *(undefined **)(pbVar23 + 0x20) = &UNK_0efe4340;
  *(long **)(pbVar23 + 0x70) = plVar22 + 4;
  *(long **)(pbVar23 + 0x78) = plVar22;
  LOCK();
  plVar22[1] = plVar22[1] + 1;
  UNLOCK();
  pbStack_b28 = pbVar23 + 0x20;
  pbStack_b20 = pbVar23;
  puVar24 = (undefined4 *)func_0x057f5b70(uVar27,&pbStack_a68);
  plVar22 = *(long **)(puVar24 + 0x24);
  if (plVar22 < *(long **)(puVar24 + 0x26)) {
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 != plVar33) {
      if ((*puStack_a70 & 1) == 0) {
        plVar22[3] = *(long *)(puStack_a70 + 4);
        lVar21 = *(long *)(puStack_a70 + 2);
        plVar22[1] = *(long *)puStack_a70;
        plVar22[2] = lVar21;
      }
      else {
        func_0x04885070(plVar22 + 1,plStack_a80[0x14],plStack_a80[0x13]);
      }
    }
    *plVar22 = *plVar33;
    plVar22[5] = (long)(pbVar23 + 0x20);
    plVar22[6] = (long)pbVar23;
    LOCK();
    *(long *)(pbVar23 + 8) = *(long *)(pbVar23 + 8) + 1;
    UNLOCK();
    plVar22 = plVar22 + 7;
    *(long **)(puVar24 + 0x24) = plVar22;
  }
  else {
    plVar22 = (long *)func_0x057f79c0(puVar24 + 0x22,plVar33,&pbStack_b28);
  }
  plVar33 = plStack_a80;
  *(long **)(puVar24 + 0x24) = plVar22;
  uVar11 = *puVar24;
  uVar12 = puVar24[1];
  uVar13 = puVar24[2];
  uVar14 = puVar24[3];
  if (*(long *)(puVar24 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar24 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plStack_a80[0xf];
  *(undefined4 *)(plStack_a80 + 0xe) = uVar11;
  *(undefined4 *)((long)plStack_a80 + 0x74) = uVar12;
  *(undefined4 *)(plStack_a80 + 0xf) = uVar13;
  *(undefined4 *)((long)plStack_a80 + 0x7c) = uVar14;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar31 = plVar22 + 1;
    lVar21 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  pbVar23 = pbStack_b20;
  *(undefined1 *)(plVar33 + 0x10) = *(undefined1 *)((long)puVar24 + 0xa1);
  if (pbStack_b20 != (byte *)0x0) {
    LOCK();
    pbVar34 = pbStack_b20 + 8;
    lVar21 = *(long *)pbVar34;
    *(long *)pbVar34 = *(long *)pbVar34 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)pbStack_b20 + 0x10))(pbStack_b20);
      func_0x0412c2d0(pbVar23);
    }
  }
  pbVar23 = pbStack_a88;
  LOCK();
  lVar21 = *(long *)pbStack_a88;
  *(long *)pbStack_a88 = *(long *)pbStack_a88 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
    LOCK();
    lVar21 = *(long *)pbVar23;
    *(long *)pbVar23 = *(long *)pbVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *(long *)pbStack_a88;
    *(long *)pbStack_a88 = *(long *)pbStack_a88 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
    func_0x0412c2d0(plVar33);
  }
  if (pbStack_a28 != (byte *)0x0) {
    (**(code **)(pbStack_a28 + 8))(&pbStack_a28);
  }
  if ((uStack_a60 & 1) != 0) {
    func_0x0412a280(pbStack_a50,
                    CONCAT26(uStack_a5a,CONCAT24(uStack_a5c,uStack_a60)) & 0xfffffffffffffffe);
  }
  uStack_70 = 0;
  uStack_a60 = 0;
  uStack_a5c = 0;
  uStack_a5a = 0;
  lStack_78 = 0;
  pbStack_a68 = &UNK_0efe45e0;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  pbStack_b28 = pbStack_a68;
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0efe43b8;
  pbStack_b20 = (byte *)0x0;
  pbStack_a68 = (byte *)0x0;
  plVar22[4] = (long)&UNK_0f2ccd78;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[8] = 0;
  plVar22[9] = 0;
  plVar22[10] = 0;
  plVar22[0xb] = 0;
  plVar22[0xc] = 0;
  *(undefined1 *)(plVar22 + 0xd) = 0;
  func_0x04aa75f0(plVar22 + 0xe,&uStack_a71,&UNK_01254d89);
  *(undefined1 *)(plVar22 + 0x10) = 0;
  pbVar23 = (byte *)(plVar22 + 0x11);
  plVar22[0x11] = 0;
  plVar22[0x12] = 0;
  plVar22[0x13] = 0;
  plVar22[0x14] = 0;
  plVar22[0x15] = 0;
  plVar22[0x16] = 0;
  plVar22[0x17] = 0xffffffff;
  plVar22[0x26] = 0;
  plVar22[0x27] = 0;
  plVar22[0x18] = 0;
  plVar22[0x19] = 0;
  plVar22[0x1a] = 0;
  plVar22[0x1b] = 0;
  plVar22[0x1c] = 0;
  plVar22[0x1d] = 0;
  plVar22[0x1e] = 0;
  plVar22[0x1f] = 0;
  plVar22[4] = (long)&UNK_0efe4408;
  plVar22[0x2e] = 0;
  plVar22[0x2f] = 0;
  plVar22[0x30] = 0;
  plVar22[0x31] = 0;
  plVar22[0x32] = 0;
  plVar22[0x33] = 0;
  plVar22[0x34] = 0;
  *(undefined4 *)(plVar22 + 0x35) = 0x3f800000;
  plVar22[0x36] = 0;
  plVar22[0x37] = 0;
  if (pbStack_b28 == (byte *)0x0) {
    pbVar34 = (byte *)0x0;
  }
  else {
    (**(code **)pbStack_b28)(&pbStack_b28,plVar22 + 0x36);
    pbVar34 = pbStack_b28;
  }
  pbStack_b28 = (byte *)0x0;
  plVar22[0x36] = (long)pbVar34;
  *(undefined1 *)(plVar22 + 0x3e) = 0;
  puStack_678 = (uint *)(plVar22 + 0x12);
  pbStack_a88 = pbVar23;
  if (pbVar23 != &DAT_0f552138) {
    if ((*puStack_678 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar22[0x14] = _DAT_0f552150;
        uVar13 = uRam000000000f55214c;
        uVar12 = _DAT_0f552148;
        uVar11 = uRam000000000f552144;
        *puStack_678 = _DAT_0f552140;
        *(undefined4 *)((long)plVar22 + 0x94) = uVar11;
        *(undefined4 *)(plVar22 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar22 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puStack_678,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar35 = (_DAT_0f552140 & 1) != 0;
      lVar21 = 0xf552141;
      if (bVar35) {
        lVar21 = _DAT_0f552150;
      }
      uVar26 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar35) {
        uVar26 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      FUN_04885120(puStack_678,lVar21,uVar26);
    }
  }
  plVar22[0x11] = _DAT_0f552138;
  plVar22[0x15] = 0;
  if (pbStack_b28 != (byte *)0x0) {
    (**(code **)(pbStack_b28 + 8))(&pbStack_b28);
  }
  pbVar23 = (byte *)(plVar22 + 1);
  if (pbStack_a68 != (byte *)0x0) {
    (**(code **)(pbStack_a68 + 8))(&pbStack_a68);
  }
  LOCK();
  *(long *)pbVar23 = *(long *)pbVar23 + 1;
  UNLOCK();
  pbStack_4c8 = pbVar23;
  puVar25 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar25 == (uint *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)puVar25 + 8) = 0;
  *(long *)((long)puVar25 + 0x10) = 0;
  *(undefined **)puVar25 = &UNK_0efe44e8;
  *(long *)((long)puVar25 + 0x30) = 0;
  *(long *)((long)puVar25 + 0x38) = 0;
  *(undefined **)((long)puVar25 + 0x20) = &UNK_0efe4538;
  *(long **)((long)puVar25 + 0x70) = plVar22 + 4;
  *(long **)((long)puVar25 + 0x78) = plVar22;
  LOCK();
  plVar22[1] = plVar22[1] + 1;
  UNLOCK();
  plStack_670 = (long *)((long)puVar25 + 8);
  puVar7 = (undefined4 *)plVar33[0x1c];
  puVar6 = (undefined4 *)plVar33[0x1b];
  for (puVar24 = puVar6; puStack_a70 = puVar25, puVar24 != puVar7; puVar24 = puVar24 + 0x2a) {
    if ((*(long *)(puVar24 + 0x1e) == 0) && (*(long *)(puVar24 + 0x20) == -1)) goto LAB_057c2509;
  }
  if ((undefined4 *)plVar33[0x1d] <= puVar7) {
    plVar31 = (long *)((long)puVar7 - (long)puVar6);
    uVar26 = ((long)plVar31 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar26) goto LAB_057c4b13;
    lVar21 = plVar33[0x1d] - (long)puVar6 >> 3;
    uVar29 = lVar21 * -0x6186186186186186;
    if (uVar26 < uVar29) {
      uVar26 = uVar29;
    }
    plVar1 = plVar33 + 0x1b;
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar26 = 0x186186186186186;
    }
    plStack_b08 = plVar1;
    if (uVar26 == 0) {
      pbVar23 = (byte *)0x0;
LAB_057c22b8:
      pbStack_b20 = (byte *)((long)plVar31 + (long)pbVar23);
      pbStack_b10 = pbVar23 + uVar26 * 0xa8;
      pbStack_b28 = pbVar23;
      pbStack_b18 = pbStack_b20;
      plStack_9e0 = plVar1;
      func_0x05827440(pbStack_b20);
      pbVar34 = pbStack_b18 + 0xa8;
      lVar21 = plVar33[0x1b];
      lVar8 = plVar33[0x1c];
      pbVar23 = pbStack_b20 + (lVar21 - lVar8);
      if (lVar21 != lVar8) {
        lVar32 = 0;
        do {
          uVar27 = ((undefined8 *)(lVar21 + lVar32))[1];
          *(undefined8 *)(pbVar23 + lVar32) = *(undefined8 *)(lVar21 + lVar32);
          *(undefined8 *)(pbVar23 + lVar32 + 8) = uVar27;
          *(undefined8 *)(lVar21 + lVar32) = 0;
          ((undefined8 *)(lVar21 + lVar32))[1] = 0;
          pbVar3 = pbVar23 + lVar32 + 0x20;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar23 + lVar32 + 0x10;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar23 + lVar32 + 0x30;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          *(undefined8 *)(pbVar23 + lVar32 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar32);
          puVar24 = (undefined4 *)(lVar21 + 0x18 + lVar32);
          uVar11 = puVar24[1];
          uVar12 = puVar24[2];
          uVar13 = puVar24[3];
          pbVar3 = pbVar23 + lVar32 + 0x18;
          *(undefined4 *)pbVar3 = *puVar24;
          *(undefined4 *)(pbVar3 + 4) = uVar11;
          *(undefined4 *)(pbVar3 + 8) = uVar12;
          *(undefined4 *)(pbVar3 + 0xc) = uVar13;
          *(undefined2 *)(lVar21 + 0x18 + lVar32) = 0;
          *(undefined8 *)(pbVar23 + lVar32 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar32);
          FUN_04167a20(pbVar23 + lVar32 + 0x38,lVar21 + lVar32 + 0x38);
          puVar20 = (undefined8 *)(lVar21 + 0x40 + lVar32);
          uVar27 = puVar20[1];
          *(undefined8 *)(pbVar23 + lVar32 + 0x40) = *puVar20;
          *(undefined8 *)(pbVar23 + lVar32 + 0x40 + 8) = uVar27;
          puVar20 = (undefined8 *)(lVar21 + 0x50 + lVar32);
          uVar27 = puVar20[1];
          *(undefined8 *)(pbVar23 + lVar32 + 0x50) = *puVar20;
          *(undefined8 *)(pbVar23 + lVar32 + 0x50 + 8) = uVar27;
          puVar20 = (undefined8 *)(lVar21 + 0x60 + lVar32);
          uVar27 = puVar20[1];
          *(undefined8 *)(pbVar23 + lVar32 + 0x60) = *puVar20;
          *(undefined8 *)(pbVar23 + lVar32 + 0x60 + 8) = uVar27;
          puVar20 = (undefined8 *)(lVar21 + 0x60 + lVar32);
          *puVar20 = 0;
          puVar20[1] = 0;
          *(undefined8 *)(pbVar23 + lVar32 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar32);
          puVar20 = (undefined8 *)(lVar21 + 0x78 + lVar32);
          uVar27 = puVar20[1];
          *(undefined8 *)(pbVar23 + lVar32 + 0x78) = *puVar20;
          *(undefined8 *)(pbVar23 + lVar32 + 0x78 + 8) = uVar27;
          pbVar3 = pbVar23 + lVar32 + 0x88;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          pbVar3[8] = 0;
          pbVar3[9] = 0;
          pbVar3[10] = 0;
          pbVar3[0xb] = 0;
          pbVar3[0xc] = 0;
          pbVar3[0xd] = 0;
          pbVar3[0xe] = 0;
          pbVar3[0xf] = 0;
          pbVar3 = pbVar23 + lVar32 + 0x98;
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
          puVar24 = (undefined4 *)(lVar21 + 0x88 + lVar32);
          uVar11 = puVar24[1];
          uVar12 = puVar24[2];
          uVar13 = puVar24[3];
          pbVar3 = pbVar23 + lVar32 + 0x88;
          *(undefined4 *)pbVar3 = *puVar24;
          *(undefined4 *)(pbVar3 + 4) = uVar11;
          *(undefined4 *)(pbVar3 + 8) = uVar12;
          *(undefined4 *)(pbVar3 + 0xc) = uVar13;
          *(undefined8 *)(pbVar23 + lVar32 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar32);
          puVar20 = (undefined8 *)(lVar21 + 0x88 + lVar32);
          *puVar20 = 0;
          puVar20[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar32) = 0;
          *(undefined2 *)(pbVar23 + lVar32 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar32);
          lVar2 = lVar21 + lVar32;
          lVar32 = lVar32 + 0xa8;
        } while (lVar2 + 0xa8 != lVar8);
        do {
          func_0x05823d40(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar8);
        lVar21 = *plStack_9e0;
        plVar33 = plStack_a80;
      }
      puVar25 = puStack_a70;
      plVar33[0x1b] = (long)pbVar23;
      plVar33[0x1c] = (long)pbVar34;
      lVar8 = plVar33[0x1d];
      plVar33[0x1d] = (long)pbStack_b10;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar8 - lVar21);
      }
      goto LAB_057c24a0;
    }
    if (uVar26 < 0x186186186186187) {
      pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0xa8);
      if (pbVar23 == (byte *)0x0) {
        func_0x0eec74c0(uVar26 * 0xa8,0);
        pbVar23 = (byte *)0x0;
      }
      goto LAB_057c22b8;
    }
LAB_057c4b09:
    func_0x04882eb0();
LAB_057c4b0e:
    func_0x05827680();
LAB_057c4b13:
    uVar27 = func_0x058275b0();
    if ((*pbVar23 & 1) != 0) {
      func_0x0412a280(plVar31[3],plVar31[1] & 0xfffffffffffffffe);
    }
    func_0x058275c0(&pbStack_b28);
    puVar25 = puStack_a70;
    LOCK();
    lVar21 = *plStack_670;
    *plStack_670 = *plStack_670 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*(long *)puStack_a70 + 0x10))(puStack_a70);
      func_0x0412c2d0(puVar25);
    }
    func_0x05825250(plVar22);
    func_0x05825280(plVar22);
    if (lStack_78 != 0) {
      (**(code **)(lStack_78 + 8))(&lStack_78);
    }
    if ((uStack_888 & 1) != 0) {
      func_0x0412a280(puStack_878,uStack_888 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar27);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  func_0x05827440(puVar7);
  pbVar34 = (byte *)(puVar7 + 0x2a);
  plVar33[0x1c] = (long)pbVar34;
LAB_057c24a0:
  plVar33[0x1c] = (long)pbVar34;
  pbVar23 = *(byte **)(pbVar34 + -0xa8);
  if ((*pbVar23 & 1) == 0) {
    *pbVar23 = 0x26;
    pbVar23 = pbVar23 + 1;
  }
  else {
    pbVar23[8] = 0x13;
    pbVar23[9] = 0;
    pbVar23[10] = 0;
    pbVar23[0xb] = 0;
    pbVar23[0xc] = 0;
    pbVar23[0xd] = 0;
    pbVar23[0xe] = 0;
    pbVar23[0xf] = 0;
    pbVar23 = *(byte **)(pbVar23 + 0x10);
  }
  uVar13 = _UNK_01494d69;
  uVar12 = _UNK_01494d65;
  uVar11 = _UNK_01494d61;
  *(undefined4 *)pbVar23 = _DAT_01494d5d;
  *(undefined4 *)(pbVar23 + 4) = uVar11;
  *(undefined4 *)(pbVar23 + 8) = uVar12;
  *(undefined4 *)(pbVar23 + 0xc) = uVar13;
  pbVar23[0xf] = 0x65;
  pbVar23[0x10] = 0x6e;
  pbVar23[0x11] = 0x74;
  pbVar23[0x12] = 0x3e;
  pbVar23[0x13] = 0;
  lVar21 = plVar33[0x1c];
  puVar24 = (undefined4 *)(lVar21 - 0xa8);
  *(char *)(lVar21 + -7) = (char)plVar33[0x10];
  *(undefined8 *)(lVar21 + -0x30) = 0;
  *(undefined8 *)(lVar21 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar21 + -8) = 0;
LAB_057c2509:
  plVar31 = (long *)((long)puVar25 + 0x20);
  pbVar23 = *(byte **)(puVar24 + 0x24);
  if (pbVar23 < *(byte **)(puVar24 + 0x26)) {
    pbVar23[0x10] = 0;
    pbVar23[0x11] = 0;
    pbVar23[0x12] = 0;
    pbVar23[0x13] = 0;
    pbVar23[0x14] = 0;
    pbVar23[0x15] = 0;
    pbVar23[0x16] = 0;
    pbVar23[0x17] = 0;
    pbVar23[0x18] = 0;
    pbVar23[0x19] = 0;
    pbVar23[0x1a] = 0;
    pbVar23[0x1b] = 0;
    pbVar23[0x1c] = 0;
    pbVar23[0x1d] = 0;
    pbVar23[0x1e] = 0;
    pbVar23[0x1f] = 0;
    pbVar23[0] = 0;
    pbVar23[1] = 0;
    pbVar23[2] = 0;
    pbVar23[3] = 0;
    pbVar23[4] = 0;
    pbVar23[5] = 0;
    pbVar23[6] = 0;
    pbVar23[7] = 0;
    pbVar23[8] = 0;
    pbVar23[9] = 0;
    pbVar23[10] = 0;
    pbVar23[0xb] = 0;
    pbVar23[0xc] = 0;
    pbVar23[0xd] = 0;
    pbVar23[0xe] = 0;
    pbVar23[0xf] = 0;
    pbVar23[0x20] = 0;
    pbVar23[0x21] = 0;
    pbVar23[0x22] = 0;
    pbVar23[0x23] = 0;
    pbVar23[0x24] = 0;
    pbVar23[0x25] = 0;
    pbVar23[0x26] = 0;
    pbVar23[0x27] = 0;
    if (pbVar23 != pbStack_a88) {
      if ((*puStack_678 & 1) == 0) {
        *(undefined8 *)(pbVar23 + 0x18) = *(undefined8 *)(puStack_678 + 4);
        uVar27 = *(undefined8 *)(puStack_678 + 2);
        *(undefined8 *)(pbVar23 + 8) = *(undefined8 *)puStack_678;
        *(undefined8 *)(pbVar23 + 0x10) = uVar27;
      }
      else {
        func_0x04885070(pbVar23 + 8,plVar22[0x14],plVar22[0x13]);
      }
    }
    *(undefined8 *)pbVar23 = *(undefined8 *)pbStack_a88;
    *(long **)(pbVar23 + 0x28) = plVar31;
    *(uint **)(pbVar23 + 0x30) = puVar25;
    LOCK();
    *(long *)((long)puVar25 + 8) = *(long *)((long)puVar25 + 8) + 1;
    UNLOCK();
    pbVar23 = pbVar23 + 0x38;
    *(byte **)(puVar24 + 0x24) = pbVar23;
  }
  else {
    pbVar23 = pbVar23 + -*(long *)(puVar24 + 0x22);
    uVar26 = ((long)pbVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar26) goto LAB_057c4b0e;
    lVar21 = (long)*(byte **)(puVar24 + 0x26) - *(long *)(puVar24 + 0x22) >> 3;
    uVar29 = lVar21 * -0x2492492492492492;
    if (uVar26 < uVar29) {
      uVar26 = uVar29;
    }
    plStack_b08 = (long *)(puVar24 + 0x22);
    if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
      uVar26 = 0x492492492492492;
    }
    plStack_9e0 = plVar31;
    plStack_4d0 = plStack_b08;
    if (uVar26 == 0) {
      pbVar34 = (byte *)0x0;
    }
    else {
      if (0x492492492492492 < uVar26) goto LAB_057c4b09;
      pbVar34 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0x38);
      if (pbVar34 == (byte *)0x0) {
        func_0x0eec74c0(uVar26 * 0x38,0);
        pbVar34 = (byte *)0x0;
      }
    }
    puVar25 = puStack_a70;
    pbVar3 = pbVar23 + (long)pbVar34;
    pbStack_b10 = pbVar34 + uVar26 * 0x38;
    pbVar4 = pbVar23 + (long)(pbVar34 + 0x10);
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4 = pbVar23 + (long)pbVar34;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar4[8] = 0;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4 = pbVar23 + (long)(pbVar34 + 0x20);
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbStack_b18 = pbVar3;
    pbStack_b28 = pbVar34;
    pbStack_b20 = pbVar3;
    if (pbVar3 != pbStack_a88) {
      if ((*puStack_678 & 1) == 0) {
        *(undefined8 *)(pbVar23 + (long)(pbVar34 + 0x18)) = *(undefined8 *)(puStack_678 + 4);
        uVar15 = puStack_678[1];
        uVar16 = puStack_678[2];
        uVar17 = puStack_678[3];
        *(uint *)(pbVar23 + (long)(pbVar34 + 8)) = *puStack_678;
        *(uint *)(pbVar23 + (long)(pbVar34 + 0xc)) = uVar15;
        *(uint *)(pbVar23 + (long)(pbVar34 + 0x10)) = uVar16;
        *(uint *)(pbVar23 + (long)(pbVar34 + 0x14)) = uVar17;
      }
      else {
        func_0x04885070(pbVar23 + (long)(pbVar34 + 8),plVar22[0x14],plVar22[0x13]);
      }
    }
    *(undefined8 *)pbVar3 = *(undefined8 *)pbStack_a88;
    *(long **)(pbVar3 + 0x28) = plStack_9e0;
    *(uint **)(pbVar3 + 0x30) = puVar25;
    LOCK();
    plVar33 = (long *)((long)puVar25 + 8);
    *plVar33 = *plVar33 + 1;
    UNLOCK();
    pbStack_b18 = pbStack_b18 + 0x38;
    puVar20 = *(undefined8 **)(puVar24 + 0x22);
    puVar9 = *(undefined8 **)(puVar24 + 0x24);
    pbVar34 = pbStack_b20 + ((long)puVar20 - (long)puVar9);
    pbVar23 = pbVar34;
    puVar28 = puVar20;
    if ((long)puVar20 - (long)puVar9 != 0) {
      do {
        pbVar23[0x10] = 0;
        pbVar23[0x11] = 0;
        pbVar23[0x12] = 0;
        pbVar23[0x13] = 0;
        pbVar23[0x14] = 0;
        pbVar23[0x15] = 0;
        pbVar23[0x16] = 0;
        pbVar23[0x17] = 0;
        pbVar23[0x18] = 0;
        pbVar23[0x19] = 0;
        pbVar23[0x1a] = 0;
        pbVar23[0x1b] = 0;
        pbVar23[0x1c] = 0;
        pbVar23[0x1d] = 0;
        pbVar23[0x1e] = 0;
        pbVar23[0x1f] = 0;
        pbVar23[0] = 0;
        pbVar23[1] = 0;
        pbVar23[2] = 0;
        pbVar23[3] = 0;
        pbVar23[4] = 0;
        pbVar23[5] = 0;
        pbVar23[6] = 0;
        pbVar23[7] = 0;
        pbVar23[8] = 0;
        pbVar23[9] = 0;
        pbVar23[10] = 0;
        pbVar23[0xb] = 0;
        pbVar23[0xc] = 0;
        pbVar23[0xd] = 0;
        pbVar23[0xe] = 0;
        pbVar23[0xf] = 0;
        pbVar23[0x20] = 0;
        pbVar23[0x21] = 0;
        pbVar23[0x22] = 0;
        pbVar23[0x23] = 0;
        pbVar23[0x24] = 0;
        pbVar23[0x25] = 0;
        pbVar23[0x26] = 0;
        pbVar23[0x27] = 0;
        *(undefined8 *)(pbVar23 + 0x18) = puVar28[3];
        uVar27 = puVar28[2];
        *(undefined8 *)(pbVar23 + 8) = puVar28[1];
        *(undefined8 *)(pbVar23 + 0x10) = uVar27;
        *(undefined2 *)(puVar28 + 1) = 0;
        *(undefined8 *)pbVar23 = *puVar28;
        uVar11 = *(undefined4 *)((long)puVar28 + 0x2c);
        uVar12 = *(undefined4 *)(puVar28 + 6);
        uVar13 = *(undefined4 *)((long)puVar28 + 0x34);
        *(undefined4 *)(pbVar23 + 0x28) = *(undefined4 *)(puVar28 + 5);
        *(undefined4 *)(pbVar23 + 0x2c) = uVar11;
        *(undefined4 *)(pbVar23 + 0x30) = uVar12;
        *(undefined4 *)(pbVar23 + 0x34) = uVar13;
        puVar28[5] = 0;
        puVar28[6] = 0;
        puVar28 = puVar28 + 7;
        pbVar23 = pbVar23 + 0x38;
        pbStack_a88 = pbVar34;
      } while (puVar28 != puVar9);
      do {
        plVar33 = (long *)puVar20[6];
        if (plVar33 == (long *)0x0) {
LAB_057c27d4:
          bVar5 = *(byte *)(puVar20 + 1);
        }
        else {
          LOCK();
          plVar31 = plVar33 + 1;
          lVar21 = *plVar31;
          *plVar31 = *plVar31 + -1;
          UNLOCK();
          if (lVar21 != 0) goto LAB_057c27d4;
          (**(code **)(*plVar33 + 0x10))(plVar33);
          func_0x0412c2d0(plVar33);
          bVar5 = *(byte *)(puVar20 + 1);
        }
        if ((bVar5 & 1) != 0) {
          func_0x0412a280(puVar20[3],puVar20[1] & 0xfffffffffffffffe);
        }
        puVar20 = puVar20 + 7;
      } while (puVar20 != puVar9);
      puVar20 = (undefined8 *)*plStack_4d0;
      pbVar34 = pbStack_a88;
    }
    puVar25 = puStack_a70;
    pbVar23 = pbStack_b18;
    *(byte **)(puVar24 + 0x22) = pbVar34;
    *(byte **)(puVar24 + 0x24) = pbStack_b18;
    lVar21 = *(long *)(puVar24 + 0x26);
    *(byte **)(puVar24 + 0x26) = pbStack_b10;
    if (puVar20 != (undefined8 *)0x0) {
      func_0x0412a280(puVar20,lVar21 - (long)puVar20);
    }
  }
  plVar33 = plStack_a80;
  *(byte **)(puVar24 + 0x24) = pbVar23;
  uVar11 = *puVar24;
  uVar12 = puVar24[1];
  uVar13 = puVar24[2];
  uVar14 = puVar24[3];
  if (*(long *)(puVar24 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar24 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar22[0xf];
  *(undefined4 *)(plVar22 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar22 + 0x74) = uVar12;
  *(undefined4 *)(plVar22 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar22 + 0x7c) = uVar14;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar1 = plVar31 + 1;
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar22 + 0x10) = *(undefined1 *)((long)puVar24 + 0xa1);
  LOCK();
  lVar21 = *plStack_670;
  *plStack_670 = *plStack_670 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
    func_0x0412c2d0(puVar25);
  }
  puVar20 = puStack_4c0;
  pbVar23 = pbStack_4c8;
  LOCK();
  lVar21 = *(long *)pbStack_4c8;
  *(long *)pbStack_4c8 = *(long *)pbStack_4c8 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    func_0x0412c2d0(plVar22);
    LOCK();
    lVar21 = *(long *)pbVar23;
    *(long *)pbVar23 = *(long *)pbVar23 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *(long *)pbStack_4c8;
    *(long *)pbStack_4c8 = *(long *)pbStack_4c8 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar22 + 0x10))(plVar22);
    func_0x0412c2d0(plVar22);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  ppbVar30 = (byte **)(plVar33 + 0x26);
  pbStack_b20 = (byte *)0x0;
  pbStack_b28 = &UNK_0efe45f8;
  if (ppbVar30 != &pbStack_b28) {
    if ((*ppbVar30 == (byte *)0x0) ||
       ((**(code **)(*ppbVar30 + 8))(ppbVar30), pbStack_b28 != (byte *)0x0)) {
      (**(code **)pbStack_b28)(&pbStack_b28,ppbVar30);
      pbVar23 = pbStack_b28;
    }
    else {
      pbVar23 = (byte *)0x0;
    }
    *ppbVar30 = pbVar23;
  }
  if ((uStack_888 & 1) != 0) {
    func_0x0412a280(puStack_878,uStack_888 & 0xfffffffffffffffe);
  }
  uStack_698 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  (**(code **)(*(long *)*puVar20 + 0x10))((long *)*puVar20,&uStack_698);
  if ((uStack_698 & 1) != 0) {
    func_0x0412a280(uStack_688,uStack_698 & 0xfffffffffffffffe);
  }
  bStack_990 = 0x18;
  uStack_98f = 0x645f636967616d;
  uStack_988 = 0x61;
  uStack_987 = 0x6567616d;
  uStack_983 = 0;
  puStack_890 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_890 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_01340dfc;
  uStack_8a0 = 0x21;
  uStack_898 = 0x1a;
  *(ulong *)((long)puStack_890 + 10) = CONCAT26(_UNK_01340dfa,CONCAT42(_UNK_01340df6,_DAT_01340df4))
  ;
  *(undefined8 *)((long)puStack_890 + 0x12) = uVar27;
  uVar13 = _UNK_01340df6;
  uVar12 = _UNK_01340dee;
  uVar11 = CONCAT22(_DAT_01340df4,_UNK_01340df2);
  *puStack_890 = _DAT_01340dea;
  puStack_890[1] = uVar12;
  puStack_890[2] = uVar11;
  puStack_890[3] = uVar13;
  *(undefined1 *)((long)puStack_890 + 0x1a) = 0;
  bStack_5d8 = 2;
  uStack_5d7 = 0x30;
  uStack_5d6 = 0;
  bStack_500 = 0;
  uStack_4ff = 0;
  func_0x0576f7a0(auStack_100,param_2,&bStack_990,1,&uStack_8a0,0,&bStack_5d8,&bStack_500);
  plVar22 = (long *)func_0x057c5940(*puVar20,8,auStack_100);
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_6b8,&uStack_6d8);
  if ((uStack_6d8 & 1) != 0) {
    func_0x0412a280(uStack_6c8,uStack_6d8 & 0xfffffffffffffffe);
  }
  if ((uStack_6b8 & 1) != 0) {
    func_0x0412a280(uStack_6a8,uStack_6b8 & 0xfffffffffffffffe);
  }
  if ((bStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT71(uStack_8f,bStack_90) & 0xfffffffffffffffe);
  }
  if ((bStack_a8 & 1) != 0) {
    func_0x0412a280(uStack_98,CONCAT71(uStack_a7,bStack_a8) & 0xfffffffffffffffe);
  }
  if ((bStack_c0 & 1) != 0) {
    func_0x0412a280(uStack_b0,CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe);
  }
  if ((bStack_d8 & 1) != 0) {
    func_0x0412a280(uStack_c8,CONCAT71(uStack_d7,bStack_d8) & 0xfffffffffffffffe);
  }
  if ((bStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
  }
  if ((bStack_500 & 1) != 0) {
    func_0x0412a280(uStack_4f0,
                    CONCAT62(uStack_4fe,CONCAT11(uStack_4ff,bStack_500)) & 0xfffffffffffffffe);
  }
  if ((bStack_5d8 & 1) != 0) {
    func_0x0412a280(uStack_5c8,
                    CONCAT53(uStack_5d5,CONCAT12(uStack_5d6,CONCAT11(uStack_5d7,bStack_5d8))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_8a0 & 1) != 0) {
    func_0x0412a280(puStack_890,uStack_8a0 & 0xfffffffffffffffe);
  }
  if ((bStack_990 & 1) != 0) {
    func_0x0412a280(uStack_980,CONCAT71(uStack_98f,bStack_990) & 0xfffffffffffffffe);
  }
  puStack_8a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_8a8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_01222d51;
  uStack_8b8 = 0x21;
  uStack_8b0 = 0x1c;
  *(ulong *)(puStack_8a8 + 3) = CONCAT44(_UNK_01222d4d,_DAT_01222d49);
  *(undefined8 *)(puStack_8a8 + 5) = uVar27;
  uVar13 = _DAT_01222d49;
  uVar12 = _UNK_01222d45;
  uVar11 = _UNK_01222d41;
  *puStack_8a8 = _DAT_01222d3d;
  puStack_8a8[1] = uVar11;
  puStack_8a8[2] = uVar12;
  puStack_8a8[3] = uVar13;
  *(undefined1 *)(puStack_8a8 + 7) = 0;
  puStack_8c0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puStack_8c0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar27 = _UNK_014ae9dc;
  uStack_8d0 = 0x31;
  uStack_8c8 = 0x2a;
  *(ulong *)((long)puStack_8c0 + 0x1a) = CONCAT26(_UNK_014ae9da,_DAT_014ae9d4);
  *(undefined8 *)((long)puStack_8c0 + 0x22) = uVar27;
  uVar27 = CONCAT62(_DAT_014ae9d4,_UNK_014ae9d2);
  *(undefined8 *)(puStack_8c0 + 4) = _DAT_014ae9ca;
  *(undefined8 *)(puStack_8c0 + 6) = uVar27;
  uVar13 = _UNK_014ae9c6;
  uVar12 = _UNK_014ae9c2;
  uVar11 = _UNK_014ae9be;
  *puStack_8c0 = _DAT_014ae9ba;
  puStack_8c0[1] = uVar11;
  puStack_8c0[2] = uVar12;
  puStack_8c0[3] = uVar13;
  *(undefined1 *)((long)puStack_8c0 + 0x2a) = 0;
  bStack_5f0 = 2;
  uStack_5ef = 0x30;
  uStack_5ee = 0;
  bStack_518 = 0;
  uStack_517 = 0;
  func_0x0576f7a0(auStack_188,param_2,&uStack_8b8,2,&uStack_8d0,0,&bStack_5f0,&bStack_518);
  plVar22 = (long *)func_0x057c5940(*puVar20,0xc,auStack_188);
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  uStack_6e8 = 0;
  uStack_718 = 0;
  uStack_710 = 0;
  uStack_708 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_6f8,&uStack_718);
  if ((uStack_718 & 1) != 0) {
    func_0x0412a280(uStack_708,uStack_718 & 0xfffffffffffffffe);
  }
  if ((uStack_6f8 & 1) != 0) {
    func_0x0412a280(uStack_6e8,uStack_6f8 & 0xfffffffffffffffe);
  }
  if ((bStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,CONCAT71(uStack_117,bStack_118) & 0xfffffffffffffffe);
  }
  if ((bStack_130 & 1) != 0) {
    func_0x0412a280(uStack_120,CONCAT71(uStack_12f,bStack_130) & 0xfffffffffffffffe);
  }
  if ((bStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,CONCAT71(uStack_147,bStack_148) & 0xfffffffffffffffe);
  }
  if ((bStack_160 & 1) != 0) {
    func_0x0412a280(uStack_150,CONCAT71(uStack_15f,bStack_160) & 0xfffffffffffffffe);
  }
  if ((bStack_178 & 1) != 0) {
    func_0x0412a280(uStack_168,CONCAT71(uStack_177,bStack_178) & 0xfffffffffffffffe);
  }
  if ((bStack_518 & 1) != 0) {
    func_0x0412a280(uStack_508,
                    CONCAT62(uStack_516,CONCAT11(uStack_517,bStack_518)) & 0xfffffffffffffffe);
  }
  if ((bStack_5f0 & 1) != 0) {
    func_0x0412a280(uStack_5e0,
                    CONCAT53(uStack_5ed,CONCAT12(uStack_5ee,CONCAT11(uStack_5ef,bStack_5f0))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_8d0 & 1) != 0) {
    func_0x0412a280(puStack_8c0,uStack_8d0 & 0xfffffffffffffffe);
  }
  if ((uStack_8b8 & 1) != 0) {
    func_0x0412a280(puStack_8a8,uStack_8b8 & 0xfffffffffffffffe);
  }
  puStack_8d8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_8d8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar13 = _UNK_012f21ca;
  uVar12 = _UNK_012f21c6;
  uVar11 = _UNK_012f21c2;
  uStack_8e8 = 0x21;
  uStack_8e0 = 0x18;
  *puStack_8d8 = _DAT_012f21be;
  puStack_8d8[1] = uVar11;
  puStack_8d8[2] = uVar12;
  puStack_8d8[3] = uVar13;
  *(undefined8 *)(puStack_8d8 + 4) = 0x6567616d61645f63;
  *(undefined1 *)(puStack_8d8 + 6) = 0;
  puStack_8f0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_8f0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar27 = _UNK_011b919f;
  uStack_900 = 0x29;
  uStack_8f8 = 0x26;
  *(undefined8 *)(puStack_8f0 + 4) = _DAT_011b9197;
  *(undefined8 *)(puStack_8f0 + 6) = uVar27;
  uVar13 = _UNK_011b9193;
  uVar12 = _UNK_011b918f;
  uVar11 = _UNK_011b918b;
  *puStack_8f0 = _DAT_011b9187;
  puStack_8f0[1] = uVar11;
  puStack_8f0[2] = uVar12;
  puStack_8f0[3] = uVar13;
  *(undefined8 *)((long)puStack_8f0 + 0x1e) = 0x4547414d41445f43;
  *(undefined1 *)((long)puStack_8f0 + 0x26) = 0;
  bStack_608 = 2;
  uStack_607 = 0x30;
  uStack_606 = 0;
  bStack_530 = 0;
  uStack_52f = 0;
  func_0x0576f7a0(auStack_210,param_2,&uStack_8e8,2,&uStack_900,0,&bStack_608,&bStack_530);
  plVar22 = (long *)func_0x057c5940(*puVar20,0x10,auStack_210);
  uStack_738 = 0;
  uStack_730 = 0;
  uStack_728 = 0;
  uStack_758 = 0;
  uStack_750 = 0;
  uStack_748 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_738,&uStack_758);
  if ((uStack_758 & 1) != 0) {
    func_0x0412a280(uStack_748,uStack_758 & 0xfffffffffffffffe);
  }
  if ((uStack_738 & 1) != 0) {
    func_0x0412a280(uStack_728,uStack_738 & 0xfffffffffffffffe);
  }
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
  }
  if ((bStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,CONCAT71(uStack_1b7,bStack_1b8) & 0xfffffffffffffffe);
  }
  if ((bStack_1d0 & 1) != 0) {
    func_0x0412a280(uStack_1c0,CONCAT71(uStack_1cf,bStack_1d0) & 0xfffffffffffffffe);
  }
  if ((bStack_1e8 & 1) != 0) {
    func_0x0412a280(uStack_1d8,CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
  }
  if ((bStack_200 & 1) != 0) {
    func_0x0412a280(uStack_1f0,CONCAT71(uStack_1ff,bStack_200) & 0xfffffffffffffffe);
  }
  if ((bStack_530 & 1) != 0) {
    func_0x0412a280(uStack_520,
                    CONCAT62(uStack_52e,CONCAT11(uStack_52f,bStack_530)) & 0xfffffffffffffffe);
  }
  if ((bStack_608 & 1) != 0) {
    func_0x0412a280(uStack_5f8,
                    CONCAT53(uStack_605,CONCAT12(uStack_606,CONCAT11(uStack_607,bStack_608))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_900 & 1) != 0) {
    func_0x0412a280(puStack_8f0,uStack_900 & 0xfffffffffffffffe);
  }
  if ((uStack_8e8 & 1) != 0) {
    func_0x0412a280(puStack_8d8,uStack_8e8 & 0xfffffffffffffffe);
  }
  bStack_918 = 0x20;
  uStack_917 = _DAT_0135c6f2;
  uStack_913 = _UNK_0135c6f6;
  uStack_90f = _UNK_0135c6fa;
  uStack_90b = _UNK_0135c6fe;
  uStack_907 = 0;
  puStack_920 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_920 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_012726e0;
  uStack_930 = 0x21;
  uStack_928 = 0x1e;
  *(ulong *)((long)puStack_920 + 0xe) = CONCAT62(_UNK_012726da,_DAT_012726d8);
  *(undefined8 *)((long)puStack_920 + 0x16) = uVar27;
  uVar27 = CONCAT26(_DAT_012726d8,_UNK_012726d2);
  *puStack_920 = _DAT_012726ca;
  puStack_920[1] = uVar27;
  *(undefined1 *)((long)puStack_920 + 0x1e) = 0;
  bStack_620 = 2;
  uStack_61f = 0x30;
  uStack_61e = 0;
  bStack_548 = 0;
  uStack_547 = 0;
  func_0x0560fc60(_DAT_011986e0,0,auStack_298,param_2,&bStack_918,&uStack_930,&bStack_620,
                  &bStack_548);
  plVar22 = (long *)func_0x057c60a0(*puVar20,0x20,auStack_298);
  uStack_778 = 0;
  uStack_770 = 0;
  uStack_768 = 0;
  uStack_798 = 0;
  uStack_790 = 0;
  uStack_788 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_778,&uStack_798);
  if ((uStack_798 & 1) != 0) {
    func_0x0412a280(uStack_788,uStack_798 & 0xfffffffffffffffe);
  }
  if ((uStack_778 & 1) != 0) {
    func_0x0412a280(uStack_768,uStack_778 & 0xfffffffffffffffe);
  }
  if ((bStack_228 & 1) != 0) {
    func_0x0412a280(uStack_218,CONCAT71(uStack_227,bStack_228) & 0xfffffffffffffffe);
  }
  if ((bStack_240 & 1) != 0) {
    func_0x0412a280(uStack_230,CONCAT71(uStack_23f,bStack_240) & 0xfffffffffffffffe);
  }
  if ((bStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,CONCAT71(uStack_257,bStack_258) & 0xfffffffffffffffe);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  if ((bStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,CONCAT71(uStack_287,bStack_288) & 0xfffffffffffffffe);
  }
  if ((bStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,
                    CONCAT62(uStack_546,CONCAT11(uStack_547,bStack_548)) & 0xfffffffffffffffe);
  }
  if ((bStack_620 & 1) != 0) {
    func_0x0412a280(uStack_610,
                    CONCAT53(uStack_61d,CONCAT12(uStack_61e,CONCAT11(uStack_61f,bStack_620))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_930 & 1) != 0) {
    func_0x0412a280(puStack_920,uStack_930 & 0xfffffffffffffffe);
  }
  if ((bStack_918 & 1) != 0) {
    uStack_90b._3_1_ = (undefined1)((uint)uStack_90b >> 0x18);
    uVar19 = CONCAT11(uStack_907,uStack_90b._3_1_);
    func_0x0412a280(CONCAT62(uStack_906,uVar19),
                    CONCAT35((undefined3)uStack_913,CONCAT41(uStack_917,bStack_918)) &
                    0xfffffffffffffffe);
  }
  bStack_9a8 = 0x1c;
  uStack_9a7 = 0x5f78616d5f78;
  uStack_9a1 = 0x72;
  uStack_9a0 = 0x6f;
  uStack_99f = 0x6e6f69746174;
  uStack_999 = 0;
  puStack_938 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_938 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_01495959;
  uStack_948 = 0x21;
  uStack_940 = 0x1c;
  *(ulong *)((long)puStack_938 + 0xc) = CONCAT44(_UNK_01495955,_DAT_01495951);
  *(undefined8 *)((long)puStack_938 + 0x14) = uVar27;
  uVar27 = CONCAT44(_DAT_01495951,_UNK_0149594d);
  *puStack_938 = _DAT_01495945;
  puStack_938[1] = uVar27;
  *(undefined1 *)((long)puStack_938 + 0x1c) = 0;
  bStack_638 = 2;
  uStack_637 = 0x30;
  uStack_636 = 0;
  bStack_560 = 0;
  uStack_55f = 0;
  func_0x0560fc60(_DAT_011984e4,0,auStack_320,param_2,&bStack_9a8,&uStack_948,&bStack_638,
                  &bStack_560);
  plVar22 = (long *)func_0x057c60a0(*puVar20,0x14,auStack_320);
  uStack_7b8 = 0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_7d8 = 0;
  uStack_7d0 = 0;
  uStack_7c8 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_7b8,&uStack_7d8);
  if ((uStack_7d8 & 1) != 0) {
    func_0x0412a280(uStack_7c8,uStack_7d8 & 0xfffffffffffffffe);
  }
  if ((uStack_7b8 & 1) != 0) {
    func_0x0412a280(uStack_7a8,uStack_7b8 & 0xfffffffffffffffe);
  }
  if ((bStack_2b0 & 1) != 0) {
    func_0x0412a280(uStack_2a0,CONCAT71(uStack_2af,bStack_2b0) & 0xfffffffffffffffe);
  }
  if ((bStack_2c8 & 1) != 0) {
    func_0x0412a280(uStack_2b8,CONCAT71(uStack_2c7,bStack_2c8) & 0xfffffffffffffffe);
  }
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,CONCAT71(uStack_2df,bStack_2e0) & 0xfffffffffffffffe);
  }
  if ((bStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
  }
  if ((bStack_310 & 1) != 0) {
    func_0x0412a280(uStack_300,CONCAT71(uStack_30f,bStack_310) & 0xfffffffffffffffe);
  }
  if ((bStack_560 & 1) != 0) {
    func_0x0412a280(uStack_550,
                    CONCAT62(uStack_55e,CONCAT11(uStack_55f,bStack_560)) & 0xfffffffffffffffe);
  }
  if ((bStack_638 & 1) != 0) {
    func_0x0412a280(uStack_628,
                    CONCAT53(uStack_635,CONCAT12(uStack_636,CONCAT11(uStack_637,bStack_638))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_948 & 1) != 0) {
    func_0x0412a280(puStack_938,uStack_948 & 0xfffffffffffffffe);
  }
  if ((bStack_9a8 & 1) != 0) {
    func_0x0412a280(uStack_998,
                    CONCAT17(uStack_9a1,CONCAT61(uStack_9a7,bStack_9a8)) & 0xfffffffffffffffe);
  }
  bStack_9c0 = 0x26;
  uStack_9bf = _DAT_0128b6ca;
  uStack_9bb = _UNK_0128b6ce;
  uStack_9b7 = _UNK_0128b6d2;
  uStack_9b3 = CONCAT13(0x74,(int3)_UNK_0128b6d6);
  uStack_9af = 0x6e6f69;
  puStack_950 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puStack_950 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar27 = _UNK_013910b4;
  uStack_960 = 0x29;
  uStack_958 = 0x21;
  puStack_950[2] = _DAT_013910ac;
  puStack_950[3] = uVar27;
  uVar27 = _UNK_013910a4;
  *puStack_950 = _DAT_0139109c;
  puStack_950[1] = uVar27;
  *(undefined2 *)(puStack_950 + 4) = 0x4e;
  bStack_650 = 2;
  uStack_64f = 0x30;
  uStack_64e = 0;
  bStack_578 = 0;
  uStack_577 = 0;
  func_0x0560fc60(_DAT_011984e4,0,auStack_3a8,param_2,&bStack_9c0,&uStack_960,&bStack_650,
                  &bStack_578);
  plVar22 = (long *)func_0x057c60a0(*puVar20,0x18,auStack_3a8);
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7e8 = 0;
  uStack_818 = 0;
  uStack_810 = 0;
  uStack_808 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_7f8,&uStack_818);
  if ((uStack_818 & 1) != 0) {
    func_0x0412a280(uStack_808,uStack_818 & 0xfffffffffffffffe);
  }
  if ((uStack_7f8 & 1) != 0) {
    func_0x0412a280(uStack_7e8,uStack_7f8 & 0xfffffffffffffffe);
  }
  if ((bStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,CONCAT71(uStack_337,bStack_338) & 0xfffffffffffffffe);
  }
  if ((bStack_350 & 1) != 0) {
    func_0x0412a280(uStack_340,CONCAT71(uStack_34f,bStack_350) & 0xfffffffffffffffe);
  }
  if ((bStack_368 & 1) != 0) {
    func_0x0412a280(uStack_358,CONCAT71(uStack_367,bStack_368) & 0xfffffffffffffffe);
  }
  if ((bStack_380 & 1) != 0) {
    func_0x0412a280(uStack_370,CONCAT71(uStack_37f,bStack_380) & 0xfffffffffffffffe);
  }
  if ((bStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,CONCAT71(uStack_397,bStack_398) & 0xfffffffffffffffe);
  }
  if ((bStack_578 & 1) != 0) {
    func_0x0412a280(uStack_568,
                    CONCAT62(uStack_576,CONCAT11(uStack_577,bStack_578)) & 0xfffffffffffffffe);
  }
  if ((bStack_650 & 1) != 0) {
    func_0x0412a280(uStack_640,
                    CONCAT53(uStack_64d,CONCAT12(uStack_64e,CONCAT11(uStack_64f,bStack_650))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_960 & 1) != 0) {
    func_0x0412a280(puStack_950,uStack_960 & 0xfffffffffffffffe);
  }
  if ((bStack_9c0 & 1) != 0) {
    uStack_9b3._3_1_ = (undefined1)((uint)uStack_9b3 >> 0x18);
    uVar18 = CONCAT41(uStack_9af,uStack_9b3._3_1_);
    func_0x0412a280(CONCAT35(uStack_9ab,uVar18),
                    CONCAT35((undefined3)uStack_9bb,CONCAT41(uStack_9bf,bStack_9c0)) &
                    0xfffffffffffffffe);
  }
  bStack_9d8 = 0x18;
  uStack_9d7 = 0x7369645f6e696d;
  uStack_9d0 = 0x74;
  uStack_9cf = 0x65636e61;
  uStack_9cb = 0;
  puStack_968 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_968 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar27 = _UNK_014c9ce9;
  uStack_978 = 0x21;
  uStack_970 = 0x1a;
  *(ulong *)((long)puStack_968 + 10) = CONCAT26(_UNK_014c9ce7,_DAT_014c9ce1);
  *(undefined8 *)((long)puStack_968 + 0x12) = uVar27;
  uVar27 = CONCAT62(_DAT_014c9ce1,_UNK_014c9cdf);
  *puStack_968 = _DAT_014c9cd7;
  puStack_968[1] = uVar27;
  *(undefined1 *)((long)puStack_968 + 0x1a) = 0;
  bStack_668 = 2;
  uStack_667 = 0x30;
  uStack_666 = 0;
  bStack_590 = 0;
  uStack_58f = 0;
  func_0x05611160(_DAT_01198af0,0,auStack_430,param_2,&bStack_9d8,&uStack_978,&bStack_668,
                  &bStack_590);
  uVar27 = *puVar20;
  pbStack_a68 = (byte *)0x0;
  if ((uStack_3c0 & 1) == 0) {
    pbStack_a50 = pbStack_3b0;
    uStack_a60 = uStack_3c0;
    uStack_a5c = (undefined2)uStack_3bc;
    uStack_a5a = (undefined2)((uint)uStack_3bc >> 0x10);
    uStack_a58 = uStack_3b8;
    uStack_a54 = (undefined2)uStack_3b4;
    uStack_a52 = (undefined2)((uint)uStack_3b4 >> 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_a60,pbStack_3b0,CONCAT44(uStack_3b4,uStack_3b8));
  }
  uStack_a48 = 0;
  if ((uStack_a60 & 1) == 0) {
    if ((byte)uStack_a60 >> 1 != 0) goto LAB_057c4115;
  }
  else if (CONCAT26(uStack_a52,CONCAT24(uStack_a54,uStack_a58)) != 0) {
LAB_057c4115:
    pbVar23 = pbStack_a50;
    if ((uStack_a60 & 1) == 0) {
      pbVar23 = (byte *)((long)&uStack_a60 + 1);
    }
    if ((pbVar23 != (byte *)0x0) && (*pbVar23 != 0)) {
      pbVar34 = (byte *)0xcbf29ce484222325;
      uVar26 = func_0x0eee2e90(pbVar23);
      if (uVar26 != 0) {
        uVar29 = (ulong)((uint)uVar26 & 7);
        if (7 < uVar26) {
          uVar26 = uVar26 & 0xfffffffffffffff8;
          do {
            pbVar34 = (byte *)(((((((((long)pbVar34 * 0x100000001b3 ^ (ulong)*pbVar23) *
                                     0x100000001b3 ^ (ulong)pbVar23[1]) * 0x100000001b3 ^
                                   (ulong)pbVar23[2]) * 0x100000001b3 ^ (ulong)pbVar23[3]) *
                                  0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                                (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) *
                               0x100000001b3 ^ (ulong)pbVar23[7]);
            pbVar23 = pbVar23 + 8;
            uVar26 = uVar26 - 8;
          } while (uVar26 != 0);
        }
        if (uVar29 != 0) {
          uVar26 = 0;
          do {
            pbVar34 = (byte *)((long)pbVar34 * 0x100000001b3 ^ (ulong)pbVar23[uVar26]);
            uVar26 = uVar26 + 1;
          } while (uVar29 != uVar26);
        }
      }
      goto LAB_057c4209;
    }
  }
  pbVar34 = (byte *)0x0;
LAB_057c4209:
  pbStack_b28 = (byte *)0x1c;
  pbStack_a68 = pbVar34;
  func_0x05640c10(&pbStack_b20,auStack_430);
  puStack_4b0 = (undefined8 *)0x0;
  puStack_4b8 = &UNK_0efe1378;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x90,0);
  }
  *puVar20 = pbStack_b28;
  puVar20[1] = pbStack_b20;
  puVar20[5] = uStack_b00;
  puVar20[3] = pbStack_b10;
  puVar20[4] = plStack_b08;
  pbStack_b10 = (byte *)0x0;
  plStack_b08 = (long *)0x0;
  uStack_b00 = 0;
  puVar20[8] = uStack_ae8;
  puVar20[6] = uStack_af8;
  puVar20[7] = uStack_af0;
  uStack_af8 = 0;
  uStack_af0 = 0;
  uStack_ae8 = 0;
  puVar20[0xb] = uStack_ad0;
  puVar20[9] = uStack_ae0;
  puVar20[10] = uStack_ad8;
  uStack_ae0 = 0;
  uStack_ad8 = 0;
  uStack_ad0 = 0;
  puVar20[0xe] = uStack_ab8;
  puVar20[0xc] = uStack_ac8;
  puVar20[0xd] = uStack_ac0;
  uStack_ac8 = 0;
  uStack_ac0 = 0;
  uStack_ab8 = 0;
  puVar20[0x11] = uStack_aa0;
  *(undefined4 *)(puVar20 + 0xf) = (undefined4)uStack_ab0;
  *(undefined4 *)((long)puVar20 + 0x7c) = uStack_ab0._4_4_;
  *(undefined4 *)(puVar20 + 0x10) = (undefined4)uStack_aa8;
  *(undefined4 *)((long)puVar20 + 0x84) = uStack_aa8._4_4_;
  uStack_ab0 = 0;
  uStack_aa8 = 0;
  uStack_aa0 = 0;
  puStack_4b0 = puVar20;
  plVar22 = (long *)func_0x057f7ec0(uVar27,&pbStack_a68,&puStack_4b8);
  if (puStack_4b8 != (undefined *)0x0) {
    (**(code **)(puStack_4b8 + 8))(&puStack_4b8);
  }
  if ((uStack_ab0 & 1) != 0) {
    func_0x0412a280(uStack_aa0,uStack_ab0 & 0xfffffffffffffffe);
  }
  if ((uStack_ac8 & 1) != 0) {
    func_0x0412a280(uStack_ab8,uStack_ac8 & 0xfffffffffffffffe);
  }
  if ((uStack_ae0 & 1) != 0) {
    func_0x0412a280(uStack_ad0,uStack_ae0 & 0xfffffffffffffffe);
  }
  if ((uStack_af8 & 1) != 0) {
    func_0x0412a280(uStack_ae8,uStack_af8 & 0xfffffffffffffffe);
  }
  if (((ulong)pbStack_b10 & 1) != 0) {
    func_0x0412a280(uStack_b00,(ulong)pbStack_b10 & 0xfffffffffffffffe);
  }
  if ((uStack_a60 & 1) != 0) {
    func_0x0412a280(pbStack_a50,
                    CONCAT26(uStack_a5a,CONCAT24(uStack_a5c,uStack_a60)) & 0xfffffffffffffffe);
  }
  pbStack_b28 = (byte *)0x1c;
  pbStack_b20 = (byte *)((ulong)pbStack_b20 & 0xffffffffffffff00);
  func_0x05640c10(&pbStack_b18,auStack_430);
  uStack_a60 = 0;
  uStack_a5c = 0;
  uStack_a5a = 0;
  pbStack_a68 = &UNK_0efe1390;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  *(undefined1 *)(puVar20 + 1) = pbStack_b20._0_1_;
  *puVar20 = pbStack_b28;
  puVar20[2] = pbStack_b18;
  puVar20[6] = uStack_af8;
  puVar20[4] = plStack_b08;
  puVar20[5] = uStack_b00;
  plStack_b08 = (long *)0x0;
  uStack_b00 = 0;
  uStack_af8 = 0;
  puVar20[9] = uStack_ae0;
  puVar20[7] = uStack_af0;
  puVar20[8] = uStack_ae8;
  uStack_af0 = 0;
  uStack_ae8 = 0;
  uStack_ae0 = 0;
  puVar20[0xc] = uStack_ac8;
  puVar20[10] = uStack_ad8;
  puVar20[0xb] = uStack_ad0;
  uStack_ad8 = 0;
  uStack_ad0 = 0;
  uStack_ac8 = 0;
  puVar20[0xf] = uStack_ab0;
  puVar20[0xd] = uStack_ac0;
  puVar20[0xe] = uStack_ab8;
  uStack_ac0 = 0;
  uStack_ab8 = 0;
  uStack_ab0 = 0;
  puVar20[0x12] = uStack_a98;
  *(undefined4 *)(puVar20 + 0x10) = (undefined4)uStack_aa8;
  *(undefined4 *)((long)puVar20 + 0x84) = uStack_aa8._4_4_;
  *(undefined4 *)(puVar20 + 0x11) = (undefined4)uStack_aa0;
  *(undefined4 *)((long)puVar20 + 0x8c) = uStack_aa0._4_4_;
  uStack_aa8 = 0;
  uStack_aa0 = 0;
  uStack_a98 = 0;
  uStack_a60 = (uint)puVar20;
  uStack_a5c = (undefined2)((ulong)puVar20 >> 0x20);
  uStack_a5a = (undefined2)((ulong)puVar20 >> 0x30);
  ppbVar30 = (byte **)(plVar22 + 0x22);
  if (ppbVar30 == &pbStack_a68) {
    func_0x05611e70(puVar20 + 2);
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,puVar20);
  }
  else {
    pbVar23 = &UNK_0efe1390;
    if ((*ppbVar30 == (byte *)0x0) ||
       ((**(code **)(*ppbVar30 + 8))(ppbVar30), pbVar23 = pbStack_a68, pbStack_a68 != (byte *)0x0))
    {
      (**(code **)pbVar23)(&pbStack_a68,ppbVar30);
      pbVar23 = pbStack_a68;
      pbStack_a68 = (byte *)0x0;
      *ppbVar30 = pbVar23;
    }
    else {
      pbStack_a68 = (byte *)0x0;
      *ppbVar30 = (byte *)0x0;
    }
  }
  if ((uStack_aa8 & 1) != 0) {
    func_0x0412a280(uStack_a98,uStack_aa8 & 0xfffffffffffffffe);
  }
  if ((uStack_ac0 & 1) != 0) {
    func_0x0412a280(uStack_ab0,uStack_ac0 & 0xfffffffffffffffe);
  }
  if ((uStack_ad8 & 1) != 0) {
    func_0x0412a280(uStack_ac8,uStack_ad8 & 0xfffffffffffffffe);
  }
  if ((uStack_af0 & 1) != 0) {
    func_0x0412a280(uStack_ae0,uStack_af0 & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_b08 & 1) != 0) {
    func_0x0412a280(uStack_af8,(ulong)plStack_b08 & 0xfffffffffffffffe);
  }
  uStack_838 = 0;
  uStack_830 = 0;
  uStack_828 = 0;
  uStack_858 = 0;
  uStack_850 = 0;
  uStack_848 = 0;
  (**(code **)(*plVar22 + 0x18))(plVar22,&uStack_838,&uStack_858);
  if ((uStack_858 & 1) != 0) {
    func_0x0412a280(uStack_848,uStack_858 & 0xfffffffffffffffe);
  }
  if ((uStack_838 & 1) != 0) {
    func_0x0412a280(uStack_828,uStack_838 & 0xfffffffffffffffe);
  }
  if ((uStack_3c0 & 1) != 0) {
    func_0x0412a280(pbStack_3b0,CONCAT44(uStack_3bc,uStack_3c0) & 0xfffffffffffffffe);
  }
  if ((bStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
  }
  if ((bStack_3f0 & 1) != 0) {
    func_0x0412a280(uStack_3e0,CONCAT71(uStack_3ef,bStack_3f0) & 0xfffffffffffffffe);
  }
  if ((bStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,CONCAT71(uStack_407,bStack_408) & 0xfffffffffffffffe);
  }
  if ((bStack_420 & 1) != 0) {
    func_0x0412a280(uStack_410,CONCAT71(uStack_41f,bStack_420) & 0xfffffffffffffffe);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(uStack_580,
                    CONCAT62(uStack_58e,CONCAT11(uStack_58f,bStack_590)) & 0xfffffffffffffffe);
  }
  if ((bStack_668 & 1) != 0) {
    func_0x0412a280(uStack_658,
                    CONCAT53(uStack_665,CONCAT12(uStack_666,CONCAT11(uStack_667,bStack_668))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_978 & 1) != 0) {
    func_0x0412a280(puStack_968,uStack_978 & 0xfffffffffffffffe);
  }
  if ((bStack_9d8 & 1) != 0) {
    func_0x0412a280(uStack_9c8,CONCAT71(uStack_9d7,bStack_9d8) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11b9187  self::DEFAULT_ELDER_EXTRA_MAGIC_DAMAGE
 * 0x11b9197  DER_EXTRA_MAGIC_DAMAGE
 * 0x1222d3d  hard_mode_extra_magic_damage
 * 0x1222d49  tra_magic_damage
 * 0x12584e2  minecraft:behavior.guardian_attack
 * 0x12584f2  or.guardian_attack
 * 0x12726ca  self::DEFAULT_SOUND_DELAY_TIME
 * 0x12726d8  SOUND_DELAY_TIME
 * 0x128b6ca  y_max_head_rotation
 * 0x12f21be  elder_extra_magic_damage
 * 0x1340dea  self::DEFAULT_MAGIC_DAMAGE
 * 0x1340df4  ULT_MAGIC_DAMAGE
 * 0x135c6f2  sound_delay_time
 * 0x139109c  self::DEFAULT_Y_MAX_HEAD_ROTATION
 * 0x13910ac  MAX_HEAD_ROTATION
 * 0x1494d5d  <any array element>
 * 0x1495945  self::DEFAULT_X_MAX_ROTATION
 * 0x1495951  T_X_MAX_ROTATION
 * 0x14ae9ba  self::DEFAULT_HARD_MODE_EXTRA_MAGIC_DAMAGE
 * 0x14ae9ca  RD_MODE_EXTRA_MAGIC_DAMAGE
 * 0x14ae9d4  TRA_MAGIC_DAMAGE
 * 0x14c9cd7  self::DEFAULT_MIN_DISTANCE
 * 0x14c9ce1  ULT_MIN_DISTANCE
 */
