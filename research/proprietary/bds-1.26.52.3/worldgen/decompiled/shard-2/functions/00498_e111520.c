/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe211520 (ELF vaddr 0xe111520)
 * Label: caller-of-callee
 * Body:  [[0e211520, 0e2119fa] [0e211a00, 0e211a42] [0e211a50, 0e2159b0]]
 * Ghidra: FUN_0e211520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e211520(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined *puStack_11f0;
  code *pcStack_11e8;
  undefined8 uStack_11e0;
  undefined *puStack_11d8;
  undefined1 *puStack_11d0;
  undefined *puStack_11c8;
  undefined *puStack_11c0;
  undefined *puStack_11b8;
  undefined4 uStack_11b0;
  undefined1 auStack_11a8 [16];
  undefined1 auStack_1198 [16];
  long lStack_1188;
  undefined1 auStack_1180 [4];
  int iStack_117c;
  code *pcStack_1178;
  undefined1 auStack_1170 [16];
  undefined1 auStack_1160 [8];
  undefined8 uStack_1158;
  undefined1 auStack_1150 [16];
  undefined1 auStack_1140 [16];
  undefined1 auStack_1130 [16];
  undefined8 uStack_1120;
  byte bStack_10c0;
  undefined7 uStack_10bf;
  undefined1 uStack_10b8;
  undefined4 uStack_10b7;
  undefined1 uStack_10b3;
  undefined8 uStack_10b0;
  undefined *puStack_10a8;
  undefined8 uStack_10a0;
  long lStack_1098;
  undefined1 uStack_1090;
  undefined1 auStack_1088 [8];
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  long *plStack_1058;
  undefined8 uStack_1050;
  ulong uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined2 uStack_1028;
  undefined6 uStack_1026;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  ulong uStack_1010;
  undefined8 uStack_1008;
  undefined8 *puStack_1000;
  long lStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  char cStack_fc8;
  long lStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  char cStack_f88;
  long lStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined1 uStack_f48;
  long lStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined1 uStack_f08;
  long lStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined1 uStack_ec8;
  long lStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined1 uStack_e88;
  undefined *puStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined1 uStack_e68;
  undefined *puStack_e60;
  undefined8 uStack_e58;
  long lStack_e50;
  undefined1 uStack_e48;
  undefined1 auStack_e40 [8];
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  long *plStack_e10;
  undefined8 uStack_e08;
  ulong uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 uStack_dc8;
  undefined *puStack_dc0;
  undefined8 uStack_db8;
  long lStack_db0;
  undefined1 uStack_da8;
  undefined1 auStack_da0 [8];
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  long *plStack_d70;
  undefined8 uStack_d68;
  ulong uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  long lStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  int iStack_d18;
  undefined4 uStack_d14;
  char cStack_d10;
  undefined *puStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined1 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_ce0 [16];
  undefined1 uStack_cd0;
  undefined *puStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  undefined1 uStack_cb0;
  undefined1 auStack_ca8 [8];
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  long *plStack_c78;
  undefined8 uStack_c70;
  ulong uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined *puStack_c48;
  undefined8 uStack_c40;
  long lStack_c38;
  undefined1 uStack_c30;
  undefined1 auStack_c28 [8];
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  long *plStack_bf8;
  undefined8 uStack_bf0;
  ulong uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  char cStack_b98;
  long lStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  char cStack_b58;
  long lStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  char cStack_b18;
  long lStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  long lStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined1 uStack_918;
  long lStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined1 uStack_8d8;
  long lStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long lStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 uStack_818;
  long lStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  long lStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined2 uStack_650;
  undefined4 uStack_64e;
  undefined2 uStack_64a;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined2 uStack_610;
  undefined4 uStack_60e;
  undefined2 uStack_60a;
  undefined *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined2 uStack_5d0;
  undefined4 uStack_5ce;
  undefined2 uStack_5ca;
  undefined *puStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined2 uStack_590;
  undefined4 uStack_58e;
  undefined2 uStack_58a;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined2 uStack_550;
  undefined4 uStack_54e;
  undefined2 uStack_54a;
  long lStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  char cStack_518;
  undefined7 uStack_517;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined7 uStack_457;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined7 uStack_397;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0e3d3050();
  func_0x0d8842d0(param_1);
  func_0x0d8a4080(param_1);
  func_0x0d8a4910(param_1);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar11 = _UNK_01409bdd;
  *(ulong *)((long)puVar9 + 0x6a) = CONCAT26(_UNK_01409bdb,_DAT_01409bd5);
  *(undefined8 *)((long)puVar9 + 0x72) = uVar11;
  uVar11 = CONCAT62(_DAT_01409bd5,_UNK_01409bd3);
  puVar9[0xc] = _DAT_01409bcb;
  puVar9[0xd] = uVar11;
  uVar11 = _UNK_01409bc3;
  puVar9[10] = _DAT_01409bbb;
  puVar9[0xb] = uVar11;
  uVar11 = _UNK_01409bb3;
  puVar9[8] = _DAT_01409bab;
  puVar9[9] = uVar11;
  uVar11 = _UNK_01409ba3;
  puVar9[6] = _DAT_01409b9b;
  puVar9[7] = uVar11;
  uVar11 = _UNK_01409b93;
  puVar9[4] = _DAT_01409b8b;
  puVar9[5] = uVar11;
  uVar11 = _UNK_01409b83;
  puVar9[2] = _DAT_01409b7b;
  puVar9[3] = uVar11;
  uVar11 = _UNK_01409b73;
  *puVar9 = _DAT_01409b6b;
  puVar9[1] = uVar11;
  *(undefined1 *)((long)puVar9 + 0x7a) = 0;
  lVar10 = func_0x07c37f20(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar21 = (*(byte *)(lVar10 + 8) & 1) != 0;
    puVar17 = (undefined *)(lVar10 + 9);
    if (bVar21) {
      puVar17 = *(undefined **)(lVar10 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar10 + 0x10);
    }
  }
  else {
    puVar17 = &UNK_0130400a;
    uVar15 = 0xe;
  }
  func_0x07c38380(auStack_1198,param_1,puVar17,uVar15,0);
  auVar22 = auStack_1170;
  auStack_1170[0xc] = 0;
  auVar23 = auStack_1170;
  auVar6[0xf] = 0;
  auVar6._0_15_ = stack0xffffffffffffeea1;
  _auStack_1160 = auVar6 << 8;
  auStack_1170[8] = auVar22[8];
  bVar21 = auStack_1170[8] == '\0';
  auStack_1170 = auVar23;
  if (bVar21) {
    func_0x07c376e0(&puStack_10a8,auStack_1198,&UNK_0137a61f,6);
    func_0x07c37ac0(&uStack_1200,&puStack_10a8,&UNK_0130acb1,6);
  }
  func_0x0e215c90(param_1);
  func_0x0cb3f830(param_1);
  lVar10 = func_0x0d9d8870(param_1 + 0x18);
  if ((*(int *)(lVar10 + 0x60) == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0))
  {
    bVar21 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar19 = lVar10 + 9;
    if (bVar21) {
      lVar19 = *(long *)(lVar10 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar21) {
      uVar15 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0e2447c0(&lStack_d40,param_1,lVar19,uVar15);
  }
  else {
    func_0x0e2447c0(&lStack_d40,param_1,&UNK_011ce83f,0xd);
  }
  if (cStack_d10 != '\0') goto LAB_0e215711;
  auStack_1130 = (undefined1  [16])0x0;
  auStack_1140 = (undefined1  [16])0x0;
  auStack_1150 = (undefined1  [16])0x0;
  _auStack_1160 = (undefined1  [16])0x0;
  auStack_1170 = (undefined1  [16])0x0;
  uStack_1120 = 0;
  lStack_1188 = 0;
  stack0xffffffffffffee81 = SUB1615((undefined1  [16])0x0,1);
  auStack_1180[0] = 0xff;
  auStack_1198._0_8_ = &UNK_0f4e3c70;
  auStack_1198._8_8_ = 0xffffffffffffffff;
  FUN_041679a0(&pcStack_1178);
  uVar11 = func_0x041681f0(&pcStack_1178,0xf547a30);
  auStack_1170._0_8_ = uVar11;
  uVar11 = func_0x041681f0(&pcStack_1178,0xf547770);
  auStack_1170._8_8_ = uVar11;
  _auStack_1160 = (undefined1  [16])0x0;
  auStack_1150 = (undefined1  [16])0x0;
  auStack_1140 = (undefined1  [16])0x0;
  auStack_1130 = (undefined1  [16])0x0;
  uStack_1120 = 0;
  bStack_10c0 = 0x18;
  uStack_10bf = 0x5c3a2b775c285e;
  uStack_10b8 = 0x77;
  uStack_10b7 = 0x243f292b;
  uStack_10b3 = 0;
  func_0x0ed60210(auStack_1198,&bStack_10c0,0);
  uStack_1090 = auStack_1180[0];
  uStack_10a0 = auStack_1198._8_8_;
  lStack_1098 = lStack_1188;
  puStack_10a8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1088,&pcStack_1178);
  uStack_1080 = auStack_1170._0_8_;
  uStack_1078 = auStack_1170._8_8_;
  uStack_1070 = auStack_1160;
  uStack_1068 = uStack_1158;
  uStack_1060 = auStack_1150._0_8_;
  plStack_1058 = (long *)auStack_1150._8_8_;
  if ((long *)auStack_1150._8_8_ != (long *)0x0) {
    LOCK();
    *(long *)(auStack_1150._8_8_ + 8) = *(long *)(auStack_1150._8_8_ + 8) + 1;
    UNLOCK();
  }
  uStack_1050 = auStack_1140._0_8_;
  if ((auStack_1140[8] & 1) == 0) {
    uStack_1038 = auStack_1130._8_8_;
    uStack_1048 = auStack_1140._8_8_;
    uStack_1040 = auStack_1130._0_8_;
  }
  else {
    func_0x0412e5e0(&uStack_1048,auStack_1130._8_8_,auStack_1130._0_8_);
  }
  uStack_1030 = uStack_1120;
  if ((bStack_10c0 & 1) == 0) {
    auStack_1198._0_8_ = &UNK_0f4e3c70;
    if ((auStack_1140[8] & 1) != 0) goto LAB_0e21196a;
LAB_0e21192c:
    plVar5 = (long *)auStack_1150._8_8_;
  }
  else {
    func_0x0412a280(uStack_10b0,CONCAT71(uStack_10bf,bStack_10c0) & 0xfffffffffffffffe);
    auStack_1198._0_8_ = &UNK_0f4e3c70;
    if ((auStack_1140[8] & 1) == 0) goto LAB_0e21192c;
LAB_0e21196a:
    func_0x0412a280(auStack_1130._8_8_,auStack_1140._8_8_ & 0xfffffffffffffffe);
    plVar5 = (long *)auStack_1150._8_8_;
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(&pcStack_1178);
  lVar19 = lStack_d40 + 0x18;
  lVar10 = func_0x0d9d8870(lVar19);
  for (pbVar16 = *(byte **)(lStack_d40 + 0x50); pbVar16 != *(byte **)(lStack_d40 + 0x58);
      pbVar16 = pbVar16 + 0x38) {
    bVar3 = *pbVar16;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e211a5a;
    }
    else if (*(long *)(pbVar16 + 8) == 0x1a) {
LAB_0e211a5a:
      if ((bVar3 & 1) == 0) {
        pbVar18 = pbVar16 + 1;
      }
      else {
        pbVar18 = *(byte **)(pbVar16 + 0x10);
      }
      auVar22[0] = -(*pbVar18 == DAT_014eaba0);
      auVar22[1] = -(pbVar18[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar18[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar18[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar18[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar18[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar18[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar18[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar18[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar18[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar18[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar18[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar18[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar18[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar18[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar18[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar18[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar18[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar18[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar18[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar18[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar18[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar18[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar18[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar18[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar18[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar18[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar18[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar18[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar18[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar18[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar18[0x19] == DAT_014e4ff0._15_1_);
      auVar23 = auVar23 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar16 == *(byte **)(lStack_d40 + 0x58)) {
LAB_0e211a89:
    if (iStack_d18 == 0) {
      if ((*(int *)(lVar10 + 0x60) != -0x2b3da790) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0e211afd;
      lVar10 = *(long *)(lVar10 + 0x68) + 0x38;
    }
    else {
      auStack_1198._0_8_ = func_0x048b0c90(lVar19,lVar10,uStack_d14,1);
      if (auStack_1198._0_8_ == 0) {
        auStack_1198 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1198);
        if (auStack_1198._0_8_ == 0) goto LAB_0e211afd;
      }
      if ((*(int *)(auStack_1198._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1198._0_8_ + 0x58) != 0)) {
        lVar10 = *(long *)(auStack_1198._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e211afd:
        lVar10 = 0;
      }
    }
    puStack_11f0 = &UNK_0488e0b0;
    pcStack_11e8 = (code *)0x0;
    uStack_11e0 = CONCAT35(uStack_11e0._5_3_,0x48b5725f);
    uStack_1200 = 0;
    auStack_1198 = (undefined1  [16])0x0;
    _auStack_1180 = ZEXT816(0x488e0b0);
    auStack_1170._0_5_ = 0x48b5725f;
    puStack_1000 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1000 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar11 = _UNK_013bbadf;
    uStack_1010 = 0x21;
    uStack_1008 = 0x1a;
    *(ulong *)((long)puStack_1000 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1000 + 0x12) = uVar11;
    uVar11 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1000 = _DAT_013bbacd;
    puStack_1000[1] = uVar11;
    *(undefined1 *)((long)puStack_1000 + 0x1a) = 0;
    lVar10 = FUN_048b5060(lVar10,&uStack_1010);
    *(undefined8 *)(lVar10 + 0x20) = 0;
    if ((undefined1 *)(lVar10 + 0x20) == auStack_1198) {
      pcVar12 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar10 + 0x40) != (code *)0x0) {
        puVar20 = (undefined8 *)(lVar10 + 0x28);
        (**(code **)(lVar10 + 0x40))(puVar20);
        if (auStack_1170[4] != '\0') {
          if (auStack_1170[4] == '\x02') {
            (*_auStack_1180)(5,auStack_1198 + 8,puVar20);
          }
          else {
            uVar11 = auStack_1198._8_8_;
            auStack_1198._8_8_ = 0;
            *puVar20 = uVar11;
          }
        }
      }
      *(code **)(lVar10 + 0x38) = _auStack_1180;
      *(code **)(lVar10 + 0x40) = pcStack_1178;
      *(undefined4 *)(lVar10 + 0x48) = auStack_1170._0_4_;
      *(char *)(lVar10 + 0x4c) = auStack_1170[4];
      pcVar12 = pcStack_1178;
    }
    if ((uStack_1010 & 1) != 0) {
      func_0x0412a280(puStack_1000,uStack_1010 & 0xfffffffffffffffe);
      pcVar12 = pcStack_1178;
    }
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(auStack_1198 + 8);
    }
    if (pcStack_11e8 != (code *)0x0) {
      (*pcStack_11e8)(&uStack_1200);
    }
  }
  else {
    iVar4 = *(int *)(pbVar16 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e211a89;
  }
  cStack_b58 = cStack_d10;
  uStack_b60 = CONCAT44(uStack_d14,iStack_d18);
  uStack_b68 = uStack_d20;
  uStack_b78 = uStack_d30;
  uStack_b70 = uStack_d28;
  lStack_b88 = lStack_d40;
  uStack_b80 = uStack_d38;
  func_0x0e2450c0(auStack_1198,&lStack_b88,&UNK_013762e9,10,1);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0f0830;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_07c48fd0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &SUB_07c45c20;
  puStack_11c0 = &UNK_0e245620;
  puStack_11b8 = &UNK_0e2457e0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  cStack_fc8 = cStack_b58;
  uStack_fd8 = uStack_b68;
  uStack_fd0 = uStack_b60;
  uStack_fe8 = uStack_b78;
  uStack_fe0 = uStack_b70;
  lStack_ff8 = lStack_b88;
  uStack_ff0 = uStack_b80;
  func_0x048b0bc0(auStack_1180);
  uStack_c40 = uStack_10a0;
  lStack_c38 = lStack_1098;
  uStack_c30 = uStack_1090;
  puStack_c48 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_c28,auStack_1088);
  uStack_c20 = uStack_1080;
  uStack_c18 = uStack_1078;
  uStack_c10 = uStack_1070;
  uStack_c08 = uStack_1068;
  uStack_c00 = uStack_1060;
  plStack_bf8 = plStack_1058;
  if (plStack_1058 != (long *)0x0) {
    LOCK();
    plStack_1058[1] = plStack_1058[1] + 1;
    UNLOCK();
  }
  uStack_bf0 = uStack_1050;
  if ((uStack_1048 & 1) == 0) {
    uStack_bd8 = uStack_1038;
    uStack_be8 = uStack_1048;
    uStack_be0 = uStack_1040;
  }
  else {
    func_0x0412e5e0(&uStack_be8,uStack_1038,uStack_1040);
  }
  uStack_bd0 = uStack_1030;
  uStack_dd8 = 0xffffffffffffffff;
  uStack_dd0 = 0;
  uStack_dc8 = 0xff;
  puStack_de0 = &UNK_0f4b4130;
  uStack_db8 = uStack_c40;
  lStack_db0 = lStack_c38;
  uStack_da8 = uStack_c30;
  puStack_dc0 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_da0,auStack_c28);
  uStack_d98 = uStack_c20;
  uStack_d90 = uStack_c18;
  uStack_d88 = uStack_c10;
  uStack_d80 = uStack_c08;
  uStack_d78 = uStack_c00;
  plStack_d70 = plStack_bf8;
  uStack_c00 = 0;
  plStack_bf8 = (long *)0x0;
  uStack_d68 = uStack_bf0;
  uStack_d50 = uStack_bd8;
  uStack_d60 = uStack_be8;
  uStack_d58 = uStack_be0;
  uStack_be8 = 0;
  uStack_be0 = 0;
  uStack_bd8 = 0;
  uStack_d48 = uStack_bd0;
  if ((int)uStack_fd0 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_ff8);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
LAB_0e21210b:
    *(undefined1 *)(puVar20 + 3) = uStack_dc8;
    puVar20[1] = uStack_dd8;
    puVar20[2] = uStack_dd0;
    *puVar20 = &UNK_0f4b4130;
    puVar20[5] = uStack_db8;
    puVar20[6] = lStack_db0;
    *(undefined1 *)(puVar20 + 7) = uStack_da8;
    puVar20[4] = &UNK_0f4e3c70;
    func_0x04167a20(puVar20 + 8,auStack_da0);
    puVar20[9] = uStack_d98;
    puVar20[10] = uStack_d90;
    puVar20[0xb] = uStack_d88;
    puVar20[0xc] = uStack_d80;
    puVar20[0xd] = uStack_d78;
    puVar20[0xe] = plStack_d70;
    uStack_d78 = 0;
    plStack_d70 = (long *)0x0;
    puVar20[0xf] = uStack_d68;
    puVar20[0x12] = uStack_d50;
    puVar20[0x10] = uStack_d60;
    puVar20[0x11] = uStack_d58;
    uStack_d60 = 0;
    uStack_d58 = 0;
    uStack_d50 = 0;
    puVar20[0x13] = uStack_d48;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_fd0 == 1) {
    lVar10 = lStack_ff8 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_fd0._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = ZEXT816(0);
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    goto LAB_0e21210b;
  }
  cStack_b98 = cStack_fc8;
  uStack_ba8 = uStack_fd8;
  uStack_ba0 = uStack_fd0;
  uStack_bb8 = uStack_fe8;
  uStack_bb0 = uStack_fe0;
  lStack_bc8 = lStack_ff8;
  uStack_bc0 = uStack_ff0;
  func_0x0e244d00(auStack_1198,lStack_ff8 + 0x18);
  if (iStack_117c == 2) {
    piVar13 = *(int **)(*(long *)(lStack_1188 + 0x78) + 0x60);
    iVar4 = *piVar13;
    while ((undefined1  [4])iVar4 != auStack_1180) {
      piVar13 = piVar13 + 0x16;
      iVar4 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != auStack_1198._8_8_) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
LAB_0e21229f:
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else {
    if (iStack_117c == 1) {
      piVar13 = *(int **)(*(long *)(lStack_1188 + 0x78) + 0x48);
      iVar4 = *piVar13;
      while ((undefined1  [4])iVar4 != auStack_1180) {
        piVar13 = piVar13 + 0x1a;
        iVar4 = *piVar13;
      }
      goto LAB_0e21229f;
    }
    if (iStack_117c == 0) {
      *(uint *)(lStack_1188 + 0x18) = *(uint *)(lStack_1188 + 0x18) | 0x40000;
    }
  }
  func_0x0e2450c0(auStack_1198,&lStack_bc8,&UNK_0140d6fe,0xc,0x10);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0f08a8;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_07c49aa0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &SUB_07c47340;
  puStack_11c0 = &UNK_0e245a70;
  puStack_11b8 = &UNK_0e245c40;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  cStack_f88 = cStack_b98;
  uStack_f98 = uStack_ba8;
  uStack_f90 = uStack_ba0;
  uStack_fa8 = uStack_bb8;
  uStack_fa0 = uStack_bb0;
  lStack_fb8 = lStack_bc8;
  uStack_fb0 = uStack_bc0;
  func_0x048b0bc0(auStack_1180);
  uStack_cc0 = uStack_10a0;
  lStack_cb8 = lStack_1098;
  uStack_cb0 = uStack_1090;
  puStack_cc8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_ca8,auStack_1088);
  uStack_ca0 = uStack_1080;
  uStack_c98 = uStack_1078;
  uStack_c90 = uStack_1070;
  uStack_c88 = uStack_1068;
  uStack_c80 = uStack_1060;
  plStack_c78 = plStack_1058;
  if (plStack_1058 != (long *)0x0) {
    LOCK();
    plStack_1058[1] = plStack_1058[1] + 1;
    UNLOCK();
  }
  uStack_c70 = uStack_1050;
  if ((uStack_1048 & 1) == 0) {
    uStack_c58 = uStack_1038;
    uStack_c68 = uStack_1048;
    uStack_c60 = uStack_1040;
  }
  else {
    func_0x0412e5e0(&uStack_c68,uStack_1038,uStack_1040);
  }
  uStack_c50 = uStack_1030;
  uStack_e78 = 0xffffffffffffffff;
  uStack_e70 = 0;
  uStack_e68 = 0xff;
  puStack_e80 = &UNK_0f4b40b0;
  uStack_e58 = uStack_cc0;
  lStack_e50 = lStack_cb8;
  uStack_e48 = uStack_cb0;
  puStack_e60 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_e40,auStack_ca8);
  uStack_e38 = uStack_ca0;
  uStack_e30 = uStack_c98;
  uStack_e28 = uStack_c90;
  uStack_e20 = uStack_c88;
  uStack_e18 = uStack_c80;
  plStack_e10 = plStack_c78;
  uStack_c80 = 0;
  plStack_c78 = (long *)0x0;
  uStack_e08 = uStack_c70;
  uStack_df0 = uStack_c58;
  uStack_e00 = uStack_c68;
  uStack_df8 = uStack_c60;
  uStack_c68 = 0;
  uStack_c60 = 0;
  uStack_c58 = 0;
  uStack_de8 = uStack_c50;
  if ((int)uStack_f90 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_fb8);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
LAB_0e2126ac:
    *(undefined1 *)(puVar20 + 3) = uStack_e68;
    puVar20[1] = uStack_e78;
    puVar20[2] = uStack_e70;
    *puVar20 = &UNK_0f4b40b0;
    puVar20[5] = uStack_e58;
    puVar20[6] = lStack_e50;
    *(undefined1 *)(puVar20 + 7) = uStack_e48;
    puVar20[4] = &UNK_0f4e3c70;
    func_0x04167a20(puVar20 + 8,auStack_e40);
    puVar20[9] = uStack_e38;
    puVar20[10] = uStack_e30;
    puVar20[0xb] = uStack_e28;
    puVar20[0xc] = uStack_e20;
    puVar20[0xd] = uStack_e18;
    puVar20[0xe] = plStack_e10;
    uStack_e18 = 0;
    plStack_e10 = (long *)0x0;
    puVar20[0xf] = uStack_e08;
    puVar20[0x12] = uStack_df0;
    puVar20[0x10] = uStack_e00;
    puVar20[0x11] = uStack_df8;
    uStack_e00 = 0;
    uStack_df8 = 0;
    uStack_df0 = 0;
    puVar20[0x13] = uStack_de8;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_f90 == 1) {
    lVar10 = lStack_fb8 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_f90._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = ZEXT816(0);
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    goto LAB_0e2126ac;
  }
  cStack_b18 = cStack_f88;
  uStack_b28 = uStack_f98;
  uStack_b20 = uStack_f90;
  uStack_b38 = uStack_fa8;
  uStack_b30 = uStack_fa0;
  lStack_b48 = lStack_fb8;
  uStack_b40 = uStack_fb0;
  func_0x0e2450c0(auStack_1198,&lStack_b48,&UNK_013204e0,5,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e245e20;
  puStack_11b8 = &UNK_0e245f90;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  cStack_518 = cStack_b18;
  uStack_528 = uStack_b28;
  uStack_520 = uStack_b20;
  uStack_538 = uStack_b38;
  uStack_530 = uStack_b30;
  lStack_548 = lStack_b48;
  uStack_540 = uStack_b40;
  func_0x048b0bc0(auStack_1180);
  lStack_b08 = lStack_548;
  uStack_b00 = uStack_540;
  uStack_af8 = uStack_538;
  uStack_af0 = uStack_530;
  uStack_ae8 = uStack_528;
  uStack_ae0 = uStack_520;
  uStack_ad8 = CONCAT71(uStack_517,cStack_518);
  func_0x0e2450c0(auStack_1198,&lStack_b08,&UNK_0125278f,5,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e246170;
  puStack_11b8 = &UNK_0e2462e0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_4d8 = (undefined1)uStack_ad8;
  uStack_4e8 = uStack_ae8;
  uStack_4e0 = uStack_ae0;
  uStack_4f8 = uStack_af8;
  uStack_4f0 = uStack_af0;
  lStack_508 = lStack_b08;
  uStack_500 = uStack_b00;
  func_0x048b0bc0(auStack_1180);
  lStack_ac8 = lStack_508;
  uStack_ac0 = uStack_500;
  uStack_ab8 = uStack_4f8;
  uStack_ab0 = uStack_4f0;
  uStack_aa8 = uStack_4e8;
  uStack_aa0 = uStack_4e0;
  uStack_a98 = CONCAT71(uStack_4d7,uStack_4d8);
  func_0x0e2450c0(auStack_1198,&lStack_ac8,&UNK_01304019,5,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e2464c0;
  puStack_11b8 = &UNK_0e246630;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_498 = (undefined1)uStack_a98;
  uStack_4a8 = uStack_aa8;
  uStack_4a0 = uStack_aa0;
  uStack_4b8 = uStack_ab8;
  uStack_4b0 = uStack_ab0;
  lStack_4c8 = lStack_ac8;
  uStack_4c0 = uStack_ac0;
  func_0x048b0bc0(auStack_1180);
  lStack_a88 = lStack_4c8;
  uStack_a80 = uStack_4c0;
  uStack_a78 = uStack_4b8;
  uStack_a70 = uStack_4b0;
  uStack_a68 = uStack_4a8;
  uStack_a60 = uStack_4a0;
  uStack_a58 = CONCAT71(uStack_497,uStack_498);
  func_0x0e2450c0(auStack_1198,&lStack_a88,&UNK_012371ca,5,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e246810;
  puStack_11b8 = &UNK_0e246980;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_258 = (undefined1)uStack_a58;
  uStack_268 = uStack_a68;
  uStack_260 = uStack_a60;
  uStack_278 = uStack_a78;
  uStack_270 = uStack_a70;
  lStack_288 = lStack_a88;
  uStack_280 = uStack_a80;
  func_0x048b0bc0(auStack_1180);
  uStack_54e = 0;
  uStack_54a = 0;
  uStack_580 = 0xffffffffffffffff;
  uStack_578 = 0;
  uStack_570 = 0xff;
  puStack_588 = &UNK_0f0edc68;
  uStack_568 = _DAT_014e5b40;
  uStack_560 = _UNK_014e5b48;
  uStack_558 = 0;
  uStack_550 = 0;
  func_0x0e215f10(&uStack_148,&lStack_288,&puStack_588);
  uStack_a18 = uStack_118;
  uStack_a28 = uStack_128;
  uStack_a20 = uStack_120;
  uStack_a38 = uStack_138;
  uStack_a30 = uStack_130;
  uStack_a48 = uStack_148;
  uStack_a40 = uStack_140;
  func_0x0e2450c0(auStack_1198,&uStack_a48,&UNK_012371d0,5,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e246b60;
  puStack_11b8 = &UNK_0e246cd0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_458 = (undefined1)uStack_a18;
  uStack_468 = uStack_a28;
  uStack_460 = uStack_a20;
  uStack_478 = uStack_a38;
  uStack_470 = uStack_a30;
  uStack_488 = uStack_a48;
  uStack_480 = uStack_a40;
  func_0x048b0bc0(auStack_1180);
  uStack_a08 = uStack_488;
  uStack_a00 = uStack_480;
  uStack_9f8 = uStack_478;
  uStack_9f0 = uStack_470;
  uStack_9e8 = uStack_468;
  uStack_9e0 = uStack_460;
  uStack_9d8 = CONCAT71(uStack_457,uStack_458);
  func_0x0e2450c0(auStack_1198,&uStack_a08,&UNK_0147339c,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e246eb0;
  puStack_11b8 = &UNK_0e247020;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_218 = (undefined1)uStack_9d8;
  uStack_228 = uStack_9e8;
  uStack_220 = uStack_9e0;
  uStack_238 = uStack_9f8;
  uStack_230 = uStack_9f0;
  uStack_248 = uStack_a08;
  uStack_240 = uStack_a00;
  func_0x048b0bc0(auStack_1180);
  uStack_58e = 0;
  uStack_58a = 0;
  uStack_5c0 = 0xffffffffffffffff;
  uStack_5b8 = 0;
  uStack_5b0 = 0xff;
  puStack_5c8 = &UNK_0f0edc68;
  uStack_5a8 = 0;
  uStack_5a0 = _DAT_014f09b8;
  uStack_598 = 0;
  uStack_590 = 0;
  func_0x0e215f10(&lStack_110,&uStack_248,&puStack_5c8);
  uStack_998 = uStack_e0;
  uStack_9a8 = uStack_f0;
  uStack_9a0 = uStack_e8;
  uStack_9b8 = uStack_100;
  uStack_9b0 = uStack_f8;
  lStack_9c8 = lStack_110;
  uStack_9c0 = uStack_108;
  func_0x0e2450c0(auStack_1198,&lStack_9c8,&UNK_01426e49,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0120f0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de4ce0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de49c0;
  puStack_11c0 = &UNK_0e247200;
  puStack_11b8 = &UNK_0e247360;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_418 = (undefined1)uStack_998;
  uStack_428 = uStack_9a8;
  uStack_420 = uStack_9a0;
  uStack_438 = uStack_9b8;
  uStack_430 = uStack_9b0;
  lStack_448 = lStack_9c8;
  uStack_440 = uStack_9c0;
  func_0x048b0bc0(auStack_1180);
  lStack_988 = lStack_448;
  uStack_980 = uStack_440;
  uStack_978 = uStack_438;
  uStack_970 = uStack_430;
  uStack_968 = uStack_428;
  uStack_960 = uStack_420;
  uStack_958 = CONCAT71(uStack_417,uStack_418);
  func_0x0e2450c0(auStack_1198,&lStack_988,&UNK_011e6702,0x19,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0121e0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05e2f8d0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05e2f5b0;
  puStack_11c0 = &UNK_0e247540;
  puStack_11b8 = &UNK_0e2476e0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_f48 = (undefined1)uStack_958;
  uStack_f58 = uStack_968;
  uStack_f50 = uStack_960;
  uStack_f68 = uStack_978;
  uStack_f60 = uStack_970;
  lStack_f78 = lStack_988;
  uStack_f70 = uStack_980;
  func_0x048b0bc0(auStack_1180);
  if ((int)uStack_f50 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_f78);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xf8,0);
    }
LAB_0e2136cc:
    puVar20[1] = 0xffffffffffffffff;
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 0xff;
    *puVar20 = &UNK_0f4b2038;
    puVar20[5] = 0xffffffffffffffff;
    puVar20[6] = 0;
    *(undefined1 *)(puVar20 + 7) = 0xff;
    puVar20[4] = &UNK_0f1320a0;
    puVar20[9] = 0xffffffffffffffff;
    puVar20[10] = 0;
    *(undefined1 *)(puVar20 + 0xb) = 0xff;
    puVar20[8] = &UNK_0f0edc68;
    uVar11 = _DAT_014f09b8;
    puVar20[0xc] = 0;
    puVar20[0xd] = uVar11;
    puVar20[0xe] = 0;
    puVar20[0xf] = 0;
    *(undefined1 *)(puVar20 + 0x10) = 1;
    puVar20[0x12] = 0xffffffffffffffff;
    puVar20[0x13] = 0;
    *(undefined1 *)(puVar20 + 0x14) = 0xff;
    puVar20[0x11] = &UNK_0f0edc68;
    puVar20[0x15] = 0;
    puVar20[0x16] = uVar11;
    puVar20[0x17] = 0;
    puVar20[0x18] = 0;
    *(undefined1 *)(puVar20 + 0x19) = 1;
    *(undefined1 *)(puVar20 + 0x1a) = 0;
    puVar20[0x1c] = 0xffffffffffffffff;
    puVar20[0x1d] = 0;
    *(undefined1 *)(puVar20 + 0x1e) = 0xff;
    puVar20[0x1b] = &UNK_0f4893c0;
    *(undefined4 *)((long)puVar20 + 0xf4) = 0x43b40000;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_f50 == 1) {
    lVar10 = lStack_f78 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_f50._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = ZEXT816(0);
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xf8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xf8,0);
    }
    goto LAB_0e2136cc;
  }
  uStack_918 = uStack_f48;
  uStack_928 = uStack_f58;
  uStack_920 = uStack_f50;
  uStack_938 = uStack_f68;
  uStack_930 = uStack_f60;
  lStack_948 = lStack_f78;
  uStack_940 = uStack_f70;
  func_0x0e2450c0(auStack_1198,&lStack_948,&UNK_011ce84d,0x17,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0121e0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05e2f8d0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05e2f5b0;
  puStack_11c0 = &UNK_0e2478c0;
  puStack_11b8 = &UNK_0e247a60;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_f08 = uStack_918;
  uStack_f18 = uStack_928;
  uStack_f10 = uStack_920;
  uStack_f28 = uStack_938;
  uStack_f20 = uStack_930;
  lStack_f38 = lStack_948;
  uStack_f30 = uStack_940;
  func_0x048b0bc0(auStack_1180);
  if ((int)uStack_f10 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_f38);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x128,0);
    }
LAB_0e213a5d:
    puVar20[1] = 0xffffffffffffffff;
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 0xff;
    *puVar20 = &UNK_0f4b1fb8;
    puVar20[5] = 0xffffffffffffffff;
    puVar20[6] = 0;
    *(undefined1 *)(puVar20 + 7) = 0xff;
    puVar20[4] = &UNK_0f489410;
    *(undefined8 *)((long)puVar20 + 0x3c) = 0x100000000;
    puVar20[10] = 0xffffffffffffffff;
    puVar20[0xb] = 0;
    *(undefined1 *)(puVar20 + 0xc) = 0xff;
    puVar20[9] = &UNK_0f489410;
    *(undefined8 *)((long)puVar20 + 100) = 0x100000001;
    puVar20[0xf] = 0xffffffffffffffff;
    puVar20[0x10] = 0;
    *(undefined1 *)(puVar20 + 0x11) = 0xff;
    puVar20[0xe] = &UNK_0f1320a0;
    puVar20[0x13] = 0xffffffffffffffff;
    puVar20[0x14] = 0;
    *(undefined1 *)(puVar20 + 0x15) = 0xff;
    puVar20[0x12] = &UNK_0f0edc68;
    uVar11 = _DAT_014f07f8;
    puVar20[0x16] = 0;
    puVar20[0x17] = uVar11;
    puVar20[0x18] = 0;
    puVar20[0x19] = 0;
    *(undefined1 *)(puVar20 + 0x1a) = 1;
    puVar20[0x1c] = 0xffffffffffffffff;
    puVar20[0x1d] = 0;
    *(undefined1 *)(puVar20 + 0x1e) = 0xff;
    puVar20[0x1b] = &UNK_0f0edc68;
    puVar20[0x1f] = 0;
    puVar20[0x20] = uVar11;
    puVar20[0x21] = 0;
    puVar20[0x22] = 0;
    *(undefined1 *)(puVar20 + 0x23) = 1;
    *(undefined1 *)(puVar20 + 0x24) = 0;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_f10 == 1) {
    lVar10 = lStack_f38 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_f10._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = ZEXT816(0);
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x128);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x128,0);
    }
    goto LAB_0e213a5d;
  }
  uStack_8d8 = uStack_f08;
  uStack_8e8 = uStack_f18;
  uStack_8e0 = uStack_f10;
  uStack_8f8 = uStack_f28;
  uStack_8f0 = uStack_f20;
  lStack_908 = lStack_f38;
  uStack_900 = uStack_f30;
  func_0x0e2450c0(auStack_1198,&lStack_908,&UNK_01252795,0x12,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0120f0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de4ce0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de49c0;
  puStack_11c0 = &UNK_0e247c40;
  puStack_11b8 = &UNK_0e247da0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_3d8 = uStack_8d8;
  uStack_3e8 = uStack_8e8;
  uStack_3e0 = uStack_8e0;
  uStack_3f8 = uStack_8f8;
  uStack_3f0 = uStack_8f0;
  lStack_408 = lStack_908;
  uStack_400 = uStack_900;
  func_0x048b0bc0(auStack_1180);
  lStack_8c8 = lStack_408;
  uStack_8c0 = uStack_400;
  uStack_8b8 = uStack_3f8;
  uStack_8b0 = uStack_3f0;
  uStack_8a8 = uStack_3e8;
  uStack_8a0 = uStack_3e0;
  uStack_898 = CONCAT71(uStack_3d7,uStack_3d8);
  func_0x0e2450c0(auStack_1198,&lStack_8c8,&UNK_012eb753,0xf,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e247f80;
  puStack_11b8 = &UNK_0e2480f0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_398 = (undefined1)uStack_898;
  uStack_3a8 = uStack_8a8;
  uStack_3a0 = uStack_8a0;
  uStack_3b8 = uStack_8b8;
  uStack_3b0 = uStack_8b0;
  lStack_3c8 = lStack_8c8;
  uStack_3c0 = uStack_8c0;
  func_0x048b0bc0(auStack_1180);
  lStack_888 = lStack_3c8;
  uStack_880 = uStack_3c0;
  uStack_878 = uStack_3b8;
  uStack_870 = uStack_3b0;
  uStack_868 = uStack_3a8;
  uStack_860 = uStack_3a0;
  uStack_858 = CONCAT71(uStack_397,uStack_398);
  func_0x0e2450c0(auStack_1198,&lStack_888,&UNK_0149a4a5,0xb,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0121e0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05e2f8d0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05e2f5b0;
  puStack_11c0 = &UNK_0e2482d0;
  puStack_11b8 = &UNK_0e248490;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_ec8 = (undefined1)uStack_858;
  uStack_ed8 = uStack_868;
  uStack_ed0 = uStack_860;
  uStack_ee8 = uStack_878;
  uStack_ee0 = uStack_870;
  lStack_ef8 = lStack_888;
  uStack_ef0 = uStack_880;
  func_0x048b0bc0(auStack_1180);
  if ((int)uStack_ed0 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_ef8);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xb8,0);
    }
LAB_0e21417c:
    puVar20[1] = 0xffffffffffffffff;
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 0xff;
    *puVar20 = &UNK_0f1320a0;
    puVar20[5] = 0xffffffffffffffff;
    puVar20[6] = 0;
    *(undefined1 *)(puVar20 + 7) = 0xff;
    puVar20[4] = &UNK_0f0edc68;
    uVar7 = _UNK_014e3178;
    uVar11 = _DAT_014e3170;
    puVar20[8] = _DAT_014e3170;
    puVar20[9] = uVar7;
    puVar20[10] = 0;
    puVar20[0xb] = 0;
    *(undefined1 *)(puVar20 + 0xc) = 1;
    puVar20[0xe] = 0xffffffffffffffff;
    puVar20[0xf] = 0;
    *(undefined1 *)(puVar20 + 0x10) = 0xff;
    puVar20[0xd] = &UNK_0f0edc68;
    puVar20[0x11] = uVar11;
    puVar20[0x12] = uVar7;
    puVar20[0x13] = 0;
    puVar20[0x14] = 0;
    *(undefined1 *)(puVar20 + 0x15) = 1;
    *(undefined1 *)(puVar20 + 0x16) = 0;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar20;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_ed0 == 1) {
    lVar10 = lStack_ef8 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_ed0._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = ZEXT816(0);
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb8);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xb8,0);
    }
    goto LAB_0e21417c;
  }
  uStack_818 = uStack_ec8;
  uStack_828 = uStack_ed8;
  uStack_820 = uStack_ed0;
  uStack_838 = uStack_ee8;
  uStack_830 = uStack_ee0;
  lStack_848 = lStack_ef8;
  uStack_840 = uStack_ef0;
  func_0x0e2450c0(auStack_1198,&lStack_848,&UNK_011a256e,0xd,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f4b41b0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_0e249210;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_0e248ef0;
  puStack_11c0 = &UNK_0e249220;
  puStack_11b8 = &UNK_0e2493c0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  iVar4 = *(int *)(auStack_1198._8_8_ + 0x1c);
  if (iVar4 == 2) {
    piVar13 = *(int **)(*(long *)(*(long *)(auStack_1198._8_8_ + 0x10) + 0x78) + 0x60);
    iVar4 = *piVar13;
    while (iVar4 != *(int *)(auStack_1198._8_8_ + 0x18)) {
      piVar13 = piVar13 + 0x16;
      iVar4 = *piVar13;
    }
    lVar10 = *(long *)(piVar13 + 0xc);
    while (lVar10 != *(long *)(auStack_1198._8_8_ + 8)) {
      piVar13 = *(int **)(piVar13 + 0xe);
      lVar10 = *(long *)(piVar13 + 0xc);
    }
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else if (iVar4 == 1) {
    piVar13 = *(int **)(*(long *)(*(long *)(auStack_1198._8_8_ + 0x10) + 0x78) + 0x48);
    iVar4 = *piVar13;
    while (iVar4 != *(int *)(auStack_1198._8_8_ + 0x18)) {
      piVar13 = piVar13 + 0x1a;
      iVar4 = *piVar13;
    }
    *(byte *)((long)piVar13 + 0x12) = *(byte *)((long)piVar13 + 0x12) | 4;
  }
  else if (iVar4 == 0) {
    puVar2 = (uint *)(*(long *)(auStack_1198._8_8_ + 0x10) + 0x18);
    *puVar2 = *puVar2 | 0x40000;
  }
  func_0x0e245320(auStack_1198);
  uStack_e88 = uStack_818;
  uStack_e98 = uStack_828;
  uStack_e90 = uStack_820;
  uStack_ea8 = uStack_838;
  uStack_ea0 = uStack_830;
  lStack_eb8 = lStack_848;
  uStack_eb0 = uStack_840;
  func_0x048b0bc0(auStack_1180);
  uStack_d00 = 0xffffffffffffffff;
  uStack_cf8 = 0;
  uStack_cf0 = 0xff;
  puStack_d08 = &UNK_0f4e3cf0;
  uStack_ce8 = 0;
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(puVar20 + 1) = (undefined1  [16])0x0;
  *puVar20 = &UNK_0f403128;
  puVar20[4] = 0xffffffffffffffff;
  puVar20[5] = 0;
  *(undefined1 *)(puVar20 + 6) = 0xff;
  puVar20[3] = &UNK_0f0edc68;
  uVar11 = _UNK_014e3178;
  puVar20[7] = _DAT_014e3170;
  puVar20[8] = uVar11;
  *(undefined1 (*) [16])(puVar20 + 9) = (undefined1  [16])0x0;
  auStack_ce0._8_8_ = puVar20;
  auStack_ce0._0_8_ = puVar20 + 3;
  uStack_cd0 = 0;
  if ((int)uStack_e90 == 4) {
    lVar10 = func_0x0e2459b0(&lStack_eb8);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
LAB_0e21468d:
    *(undefined1 *)(puVar14 + 3) = uStack_cf0;
    puVar14[1] = uStack_d00;
    puVar14[2] = uStack_cf8;
    *puVar14 = &UNK_0f4e3cf0;
    puVar14[4] = 0;
    puVar14[5] = puVar20 + 3;
    puVar14[6] = puVar20;
    auStack_ce0 = (undefined1  [16])0x0;
    *(undefined1 *)(puVar14 + 7) = 0;
    plVar5 = *(long **)(lVar10 + 8);
    *(undefined8 **)(lVar10 + 8) = puVar14;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))();
    }
  }
  else if ((int)uStack_e90 == 1) {
    lVar10 = lStack_eb8 + 0x18;
    uVar11 = func_0x0d9d8870(lVar10);
    lVar10 = func_0x048b0c90(lVar10,uVar11,uStack_e90._4_4_,1);
    if (lVar10 == 0) {
      auStack_1198 = (undefined1  [16])0x0;
      func_0x048b0d20(auStack_1198);
      lVar10 = auStack_1198._0_8_;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    goto LAB_0e21468d;
  }
  uStack_7d8 = uStack_e88;
  uStack_7e8 = uStack_e98;
  uStack_7e0 = uStack_e90;
  uStack_7f8 = uStack_ea8;
  uStack_7f0 = uStack_ea0;
  lStack_808 = lStack_eb8;
  uStack_800 = uStack_eb0;
  func_0x0e2450c0(auStack_1198,&lStack_808,&UNK_0123ca53,6,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e249790;
  puStack_11b8 = &UNK_0e249900;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_1d8 = uStack_7d8;
  uStack_1e8 = uStack_7e8;
  uStack_1e0 = uStack_7e0;
  uStack_1f8 = uStack_7f8;
  uStack_1f0 = uStack_7f0;
  lStack_208 = lStack_808;
  uStack_200 = uStack_800;
  func_0x048b0bc0(auStack_1180);
  uStack_5ce = 0;
  uStack_5ca = 0;
  uStack_600 = 0xffffffffffffffff;
  uStack_5f8 = 0;
  uStack_5f0 = 0xff;
  puStack_608 = &UNK_0f0edc68;
  uStack_5e8 = _DAT_014e4600;
  uStack_5e0 = _UNK_014e4608;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  func_0x0e215f10(&uStack_d8,&lStack_208,&puStack_608);
  uStack_798 = uStack_a8;
  uStack_7a8 = uStack_b8;
  uStack_7a0 = uStack_b0;
  uStack_7b8 = uStack_c8;
  uStack_7b0 = uStack_c0;
  uStack_7c8 = uStack_d8;
  uStack_7c0 = uStack_d0;
  func_0x0e2450c0(auStack_1198,&uStack_7c8,&UNK_013da114,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e249ae0;
  puStack_11b8 = &UNK_0e249c50;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_198 = (undefined1)uStack_798;
  uStack_1a8 = uStack_7a8;
  uStack_1a0 = uStack_7a0;
  uStack_1b8 = uStack_7b8;
  uStack_1b0 = uStack_7b0;
  uStack_1c8 = uStack_7c8;
  uStack_1c0 = uStack_7c0;
  func_0x048b0bc0(auStack_1180);
  uStack_60e = 0;
  uStack_60a = 0;
  uStack_640 = 0xffffffffffffffff;
  uStack_638 = 0;
  uStack_630 = 0xff;
  puStack_648 = &UNK_0f0edc68;
  uStack_628 = _DAT_014e9aa0;
  uStack_620 = _UNK_014e9aa8;
  uStack_618 = 0;
  uStack_610 = 0;
  func_0x0e215f10(&uStack_a0,&uStack_1c8,&puStack_648);
  uStack_758 = uStack_70;
  uStack_768 = uStack_80;
  uStack_760 = uStack_78;
  uStack_778 = uStack_90;
  uStack_770 = uStack_88;
  uStack_788 = uStack_a0;
  uStack_780 = uStack_98;
  func_0x0e2450c0(auStack_1198,&uStack_788,&UNK_0140d70b,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0122d0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de9430;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de9110;
  puStack_11c0 = &UNK_0e249e30;
  puStack_11b8 = &UNK_0e249fa0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_158 = (undefined1)uStack_758;
  uStack_168 = uStack_768;
  uStack_160 = uStack_760;
  uStack_178 = uStack_778;
  uStack_170 = uStack_770;
  uStack_188 = uStack_788;
  uStack_180 = uStack_780;
  func_0x048b0bc0(auStack_1180);
  uStack_64e = 0;
  uStack_64a = 0;
  uStack_680 = 0xffffffffffffffff;
  uStack_678 = 0;
  uStack_670 = 0xff;
  puStack_688 = &UNK_0f0edc68;
  uStack_668 = _DAT_014e2670;
  uStack_660 = _UNK_014e2678;
  uStack_658 = 0;
  uStack_650 = 0;
  func_0x0e215f10(&lStack_68,&uStack_188,&puStack_688);
  uStack_718 = uStack_38;
  uStack_728 = uStack_48;
  uStack_720 = uStack_40;
  uStack_738 = uStack_58;
  uStack_730 = uStack_50;
  lStack_748 = lStack_68;
  uStack_740 = uStack_60;
  func_0x0e2450c0(auStack_1198,&lStack_748,&UNK_012527a8,8,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0f0920;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_07c4e1e0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_07c4dec0;
  puStack_11c0 = &UNK_0e24a180;
  puStack_11b8 = &UNK_0e24a2e0;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_358 = (undefined1)uStack_718;
  uStack_368 = uStack_728;
  uStack_360 = uStack_720;
  uStack_378 = uStack_738;
  uStack_370 = uStack_730;
  lStack_388 = lStack_748;
  uStack_380 = uStack_740;
  func_0x048b0bc0(auStack_1180);
  lStack_708 = lStack_388;
  uStack_700 = uStack_380;
  uStack_6f8 = uStack_378;
  uStack_6f0 = uStack_370;
  uStack_6e8 = uStack_368;
  uStack_6e0 = uStack_360;
  uStack_6d8 = CONCAT71(uStack_357,uStack_358);
  func_0x0e2450c0(auStack_1198,&lStack_708,&UNK_014a9167,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0120f0;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_05de4ce0;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_05de49c0;
  puStack_11c0 = &UNK_0e24a4c0;
  puStack_11b8 = &UNK_0e24a620;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_318 = (undefined1)uStack_6d8;
  uStack_328 = uStack_6e8;
  uStack_320 = uStack_6e0;
  uStack_338 = uStack_6f8;
  uStack_330 = uStack_6f0;
  lStack_348 = lStack_708;
  uStack_340 = uStack_700;
  func_0x048b0bc0(auStack_1180);
  lStack_6c8 = lStack_348;
  uStack_6c0 = uStack_340;
  uStack_6b8 = uStack_338;
  uStack_6b0 = uStack_330;
  uStack_6a8 = uStack_328;
  uStack_6a0 = uStack_320;
  uStack_698 = CONCAT71(uStack_317,uStack_318);
  func_0x0e2450c0(auStack_1198,&lStack_6c8,&UNK_0126bacc,10,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0f0998;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_07c4fc30;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_07c4f8f0;
  puStack_11c0 = &UNK_0e24a800;
  puStack_11b8 = &UNK_0e24a970;
  uStack_11b0 = 0;
  auStack_11a8 = ZEXT816(0);
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  uStack_2d8 = (undefined1)uStack_698;
  uStack_2e8 = uStack_6a8;
  uStack_2e0 = uStack_6a0;
  uStack_2f8 = uStack_6b8;
  uStack_2f0 = uStack_6b0;
  lStack_308 = lStack_6c8;
  uStack_300 = uStack_6c0;
  func_0x048b0bc0(auStack_1180);
  lStack_2c8 = lStack_308;
  uStack_2c0 = uStack_300;
  uStack_2b8 = uStack_2f8;
  uStack_2b0 = uStack_2f0;
  uStack_2a8 = uStack_2e8;
  uStack_2a0 = uStack_2e0;
  uStack_298 = CONCAT71(uStack_2d7,uStack_2d8);
  func_0x0e2450c0(auStack_1198,&lStack_2c8,&UNK_012527b1,0xe,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0f0a88;
  plVar5 = (long *)_auStack_1180;
  _auStack_1180 = (code *)puVar20;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uStack_1200 = CONCAT44(uStack_1200._4_4_,(undefined4)lStack_1188);
  uStack_11f8 = 0;
  puStack_11f0 = (undefined *)((ulong)puStack_11f0 & 0xffffffff00000000);
  pcStack_11e8 = (code *)0x1;
  uStack_11e0 = 0;
  puStack_11d8 = &UNK_07c54380;
  puStack_11d0 = &SUB_048b06d0;
  puStack_11c8 = &UNK_07c54060;
  puStack_11c0 = &UNK_0e24ab50;
  puStack_11b8 = &UNK_0e24acb0;
  uStack_11b0 = 0;
  auStack_11a8 = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1198._8_8_,&uStack_1200);
  uVar11 = auStack_11a8._8_8_;
  if ((long *)auStack_11a8._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_11a8._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_11a8._8_8_ + 0x10))(auStack_11a8._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  func_0x0e245320(auStack_1198);
  lVar10 = lStack_2c8;
  func_0x048b0bc0(auStack_1180);
  func_0x0412e5e0(&uStack_1028,puVar9,0x7a);
  uVar11 = func_0x0d9d8870(lVar10 + 0x18);
  lVar10 = func_0x048b0c90(lVar10 + 0x18,uVar11,0x28a5a83e,1);
  if (lVar10 == 0) {
    auStack_1198 = (undefined1  [16])0x0;
    func_0x048b0d20(auStack_1198);
    lVar10 = *(long *)(auStack_1198._0_8_ + 0x58);
    bVar3 = *(byte *)(lVar10 + 0x90);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x58);
    bVar3 = *(byte *)(lVar10 + 0x90);
  }
  puVar20 = (undefined8 *)(lVar10 + 0x90);
  if ((bVar3 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar10 + 0xa0),*(ulong *)(lVar10 + 0x90) & 0xfffffffffffffffe);
  }
  puVar20[2] = uStack_1018;
  *puVar20 = CONCAT62(uStack_1026,uStack_1028);
  puVar20[1] = uStack_1020;
  uStack_1028 = 0;
  puStack_d08 = &UNK_0f4e3cf0;
  uVar11 = auStack_ce0._8_8_;
  if ((long *)auStack_ce0._8_8_ != (long *)0x0) {
    LOCK();
    plVar5 = (long *)(auStack_ce0._8_8_ + 8);
    lVar10 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*(long *)auStack_ce0._8_8_ + 0x10))(auStack_ce0._8_8_);
      FUN_0412c2d0(uVar11);
    }
  }
  puStack_e80 = &UNK_0f4b40b0;
  puStack_e60 = &UNK_0f4e3c70;
  if ((uStack_e00 & 1) != 0) {
    func_0x0412a280(uStack_df0,uStack_e00 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_e10;
  if (plStack_e10 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_e10 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_e10 + 0x10))(plStack_e10);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_e40);
  puStack_cc8 = &UNK_0f4e3c70;
  if ((uStack_c68 & 1) != 0) {
    func_0x0412a280(uStack_c58,uStack_c68 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_c78;
  if (plStack_c78 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c78 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_c78 + 0x10))(plStack_c78);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_ca8);
  puStack_de0 = &UNK_0f4b4130;
  puStack_dc0 = &UNK_0f4e3c70;
  if ((uStack_d60 & 1) != 0) {
    func_0x0412a280(uStack_d50,uStack_d60 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_d70;
  if (plStack_d70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_d70 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_d70 + 0x10))(plStack_d70);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_da0);
  puStack_c48 = &UNK_0f4e3c70;
  if ((uStack_be8 & 1) != 0) {
    func_0x0412a280(uStack_bd8,uStack_be8 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_bf8;
  if (plStack_bf8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_bf8 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_bf8 + 0x10))(plStack_bf8);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_c28);
  puStack_10a8 = &UNK_0f4e3c70;
  if ((uStack_1048 & 1) != 0) {
    func_0x0412a280(uStack_1038,uStack_1048 & 0xfffffffffffffffe);
  }
  plVar5 = plStack_1058;
  if (plStack_1058 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1058 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_1058 + 0x10))(plStack_1058);
      FUN_0412c2d0(plVar5);
    }
  }
  FUN_04167a40(auStack_1088);
LAB_0e215711:
  func_0x0412a280(puVar9,0x80);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x1409b6b  Identifier requires a namespace and name separated by a ':' and each must have only alphanumeric
 * 0x1409b7b  res a namespace and name separated by a ':' and each must have only alphanumeric or underscore c
 * 0x1409b8b  and name separated by a ':' and each must have only alphanumeric or underscore characters.
 * 0x1409b9b  ed by a ':' and each must have only alphanumeric or underscore characters.
 * 0x1409bab  each must have only alphanumeric or underscore characters.
 * 0x1409bbb  nly alphanumeric or underscore characters.
 * 0x1409bcb   or underscore characters.
 * 0x1409bd5  core characters.
 * 0x14eaba0  [cereal:document
 */
