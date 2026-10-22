/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2bd280 (ELF vaddr 0xe1bd280)
 * Label: caller-of-callee
 * Body:  [[0e2bd280, 0e2be0c1] [0e2be0d0, 0e2c2249]]
 * Ghidra: FUN_0e2bd280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2bd280(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  code *pcVar15;
  int *piVar16;
  undefined1 *puVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_13b8 [16];
  undefined *puStack_13a8;
  code *pcStack_13a0;
  undefined4 uStack_1398;
  uint uStack_1394;
  undefined4 uStack_1390;
  uint uStack_138c;
  undefined4 uStack_1388;
  uint uStack_1384;
  uint uStack_1380;
  undefined4 uStack_137c;
  undefined *puStack_1378;
  undefined *puStack_1370;
  undefined4 uStack_1368;
  undefined1 auStack_1360 [24];
  undefined1 auStack_1348 [16];
  undefined1 *puStack_1338;
  undefined1 auStack_1330 [4];
  int iStack_132c;
  code *pcStack_1328;
  undefined1 auStack_1320 [16];
  undefined1 auStack_1310 [16];
  undefined1 auStack_1300 [16];
  undefined1 auStack_12f0 [16];
  undefined1 auStack_12e0 [16];
  undefined8 uStack_12d0;
  undefined *puStack_1270;
  long lStack_1268;
  undefined1 *puStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined *puStack_1248;
  undefined1 *puStack_1240;
  undefined *puStack_1238;
  undefined *puStack_1230;
  undefined *puStack_1228;
  undefined8 uStack_1220;
  undefined1 auStack_1218 [16];
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  byte bStack_11f0;
  undefined7 uStack_11ef;
  undefined1 uStack_11e8;
  undefined4 uStack_11e7;
  undefined1 uStack_11e3;
  undefined8 uStack_11e0;
  long lStack_11d8;
  undefined *puStack_11d0;
  code *pcStack_11c8;
  code *pcStack_11c0;
  undefined8 uStack_11b8;
  int iStack_11b0;
  uint uStack_11ac;
  undefined4 uStack_11a8;
  uint uStack_11a4;
  uint uStack_11a0;
  undefined2 uStack_1198;
  undefined6 uStack_1196;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  ulong uStack_1180;
  undefined8 uStack_1178;
  undefined8 *puStack_1170;
  undefined *puStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined1 uStack_1150;
  undefined *puStack_1148;
  long lStack_1140;
  undefined1 *puStack_1138;
  undefined1 uStack_1130;
  undefined1 auStack_1128 [8];
  undefined *puStack_1120;
  undefined1 *puStack_1118;
  undefined *puStack_1110;
  undefined *puStack_1108;
  undefined *puStack_1100;
  long *plStack_10f8;
  undefined8 uStack_10f0;
  ulong uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined *puStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined1 uStack_10b0;
  undefined *puStack_10a8;
  long lStack_10a0;
  undefined1 *puStack_1098;
  undefined1 uStack_1090;
  undefined1 auStack_1088 [8];
  undefined *puStack_1080;
  undefined1 *puStack_1078;
  undefined *puStack_1070;
  undefined *puStack_1068;
  undefined *puStack_1060;
  long *plStack_1058;
  undefined8 uStack_1050;
  ulong uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  long lStack_1028;
  undefined *puStack_1020;
  undefined *puStack_1018;
  code *pcStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined1 uStack_ff8;
  long lStack_fe8;
  undefined *puStack_fe0;
  undefined *puStack_fd8;
  code *pcStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined1 uStack_fb8;
  undefined *puStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined1 uStack_f90;
  undefined8 uStack_f88;
  long *plStack_f80;
  long *plStack_f78;
  undefined1 uStack_f70;
  undefined *puStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined1 uStack_f50;
  undefined8 uStack_f48;
  long *plStack_f40;
  long *plStack_f38;
  undefined1 uStack_f30;
  undefined *puStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined1 uStack_f10;
  undefined8 uStack_f08;
  long *plStack_f00;
  long *plStack_ef8;
  undefined1 uStack_ef0;
  undefined *puStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined1 uStack_ed0;
  undefined8 uStack_ec8;
  long *plStack_ec0;
  long *plStack_eb8;
  undefined1 uStack_eb0;
  undefined *puStack_ea8;
  long lStack_ea0;
  undefined1 *puStack_e98;
  undefined1 uStack_e90;
  undefined1 auStack_e88 [8];
  undefined *puStack_e80;
  undefined1 *puStack_e78;
  undefined *puStack_e70;
  undefined *puStack_e68;
  undefined *puStack_e60;
  long *plStack_e58;
  undefined8 uStack_e50;
  ulong uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined *puStack_e28;
  long lStack_e20;
  undefined1 *puStack_e18;
  undefined1 uStack_e10;
  undefined1 auStack_e08 [8];
  undefined *puStack_e00;
  undefined1 *puStack_df8;
  undefined *puStack_df0;
  undefined *puStack_de8;
  undefined *puStack_de0;
  long *plStack_dd8;
  undefined8 uStack_dd0;
  ulong uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  long lStack_da8;
  undefined *puStack_da0;
  undefined *puStack_d98;
  code *pcStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 uStack_d78;
  long lStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  code *pcStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  long lStack_d28;
  undefined *puStack_d20;
  undefined *puStack_d18;
  code *pcStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined1 uStack_cf8;
  long lStack_ce8;
  undefined *puStack_ce0;
  undefined *puStack_cd8;
  code *pcStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  long lStack_ca8;
  undefined *puStack_ca0;
  undefined *puStack_c98;
  code *pcStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  long lStack_c68;
  undefined *puStack_c60;
  undefined *puStack_c58;
  code *pcStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined *puStack_928;
  undefined *puStack_920;
  code *pcStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined *puStack_8e8;
  undefined *puStack_8e0;
  code *pcStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined *puStack_8a8;
  undefined *puStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined *puStack_868;
  undefined *puStack_860;
  code *pcStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined1 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined2 uStack_7f0;
  undefined4 uStack_7ee;
  undefined2 uStack_7ea;
  undefined *puStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined1 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined2 uStack_7b0;
  undefined4 uStack_7ae;
  undefined2 uStack_7aa;
  undefined *puStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined2 uStack_770;
  undefined4 uStack_76e;
  undefined2 uStack_76a;
  undefined *puStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined1 uStack_750;
  undefined8 uStack_748;
  long lStack_740;
  undefined8 uStack_738;
  undefined2 uStack_730;
  undefined4 uStack_72e;
  undefined2 uStack_72a;
  undefined *puStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined2 uStack_6f0;
  undefined4 uStack_6ee;
  undefined2 uStack_6ea;
  long lStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  code *pcStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  long lStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  code *pcStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 uStack_678;
  undefined7 uStack_677;
  long lStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  code *pcStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined *puStack_528;
  undefined *puStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined7 uStack_477;
  long lStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  code *pcStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0e3d3050();
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar13 = _UNK_01409bdd;
  *(ulong *)((long)puVar9 + 0x6a) = CONCAT26(_UNK_01409bdb,_DAT_01409bd5);
  *(undefined8 *)((long)puVar9 + 0x72) = uVar13;
  uVar13 = CONCAT62(_DAT_01409bd5,_UNK_01409bd3);
  puVar9[0xc] = _DAT_01409bcb;
  puVar9[0xd] = uVar13;
  uVar13 = _UNK_01409bc3;
  puVar9[10] = _DAT_01409bbb;
  puVar9[0xb] = uVar13;
  uVar13 = _UNK_01409bb3;
  puVar9[8] = _DAT_01409bab;
  puVar9[9] = uVar13;
  uVar13 = _UNK_01409ba3;
  puVar9[6] = _DAT_01409b9b;
  puVar9[7] = uVar13;
  uVar13 = _UNK_01409b93;
  puVar9[4] = _DAT_01409b8b;
  puVar9[5] = uVar13;
  uVar13 = _UNK_01409b83;
  puVar9[2] = _DAT_01409b7b;
  puVar9[3] = uVar13;
  uVar13 = _UNK_01409b73;
  *puVar9 = _DAT_01409b6b;
  puVar9[1] = uVar13;
  *(undefined1 *)((long)puVar9 + 0x7a) = 0;
  if ((DAT_0f74d4c8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d4c8), iVar7 != 0)) {
    func_0x0e31f7e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d448,0xf53dab8);
    func_0x0410844d(&DAT_0f74d4c8);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74d448 + 4)) * 8);
  do {
    lVar26 = *plVar18;
    if (lVar26 == -1) goto LAB_0e2bd380;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74d448 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e2bd380:
    puVar10 = &DAT_0f74d448;
    if (iRam000000000f74d4a8 != -0x2b3da790) goto LAB_0e2bd3d3;
LAB_0e2bd3ab:
    lVar26 = *(long *)(puVar10 + 0x68);
    if (lVar26 == 0) goto LAB_0e2bd3d3;
    bVar28 = (*(byte *)(lVar26 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar26 + 9);
    if (bVar28) {
      puVar10 = *(undefined **)(lVar26 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar28) {
      uVar22 = *(ulong *)(lVar26 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar18[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e2bd3ab;
LAB_0e2bd3d3:
    puVar10 = &UNK_0145a1b8;
    uVar22 = 0xd;
  }
  func_0x0e31fc20(auStack_13b8,param_1,puVar10,uVar22);
  uStack_1384 = uStack_1384 & 0xffffff00;
  uStack_1380 = uStack_1380 & 0xffffff00;
  if ((char)uStack_1388 == '\0') {
    func_0x0e3234a0(auStack_1348,&UNK_0137a61f);
    bVar28 = (auStack_1320[0] & 1) == 0;
    puVar11 = (undefined1 *)auStack_1310._0_8_;
    if (bVar28) {
      puVar11 = auStack_1320 + 1;
    }
    uVar22 = (ulong)(auStack_1320[0] >> 1);
    if (!bVar28) {
      uVar22 = auStack_1320._8_8_;
    }
    if (uVar22 == 0) {
      uStack_138c = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uStack_138c = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_138c = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_138c = ((int)(char)puVar11[uVar24 + 3] ^
                        ((int)(char)puVar11[uVar24 + 2] ^
                        ((int)(char)puVar11[uVar24 + 1] ^
                        ((int)(char)puVar11[uVar24] ^ uStack_138c) * 0x1000193) * 0x1000193) *
                        0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar12 != 0) {
        uVar22 = 0;
        do {
          uStack_138c = ((int)(char)puVar11[uVar22 + uVar24] ^ uStack_138c) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar12 != uVar22);
      }
    }
    uStack_1390 = 2;
    if ((DAT_0f74d4e8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d4e8), iVar7 != 0)) {
      func_0x0e31f8f0();
      func_0x0410844d(&DAT_0f74d4e8);
    }
    puStack_1270 = (undefined *)CONCAT44(puStack_1270._4_4_,uStack_138c);
    lStack_1268 = 0;
    puStack_1260 = (undefined1 *)CONCAT44(puStack_1260._4_4_,3);
    uStack_1258 = 1;
    uStack_1250 = 0;
    puStack_1248 = &UNK_0e323a60;
    puStack_1240 = &SUB_048b06d0;
    puStack_1238 = &UNK_0e31f720;
    puStack_1230 = &UNK_0e323b20;
    puStack_1228 = &UNK_0e323b30;
    uStack_1220 = (long *)((ulong)uStack_1220._4_4_ << 0x20);
    auStack_1218 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_13b8 + 8,&puStack_1270);
    uVar13 = auStack_1218._8_8_;
    if ((long *)auStack_1218._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_1218._8_8_ + 8);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*(long *)auStack_1218._8_8_ + 0x10))(auStack_1218._8_8_);
        FUN_0412c2d0(uVar13);
      }
    }
    pcStack_11c8 = pcStack_13a0;
    lStack_11d8 = auStack_13b8._8_8_;
    puStack_11d0 = puStack_13a8;
    func_0x0e3237f0(&puStack_1270,&lStack_11d8,auStack_1348);
    if (uStack_1258._4_4_ == 2) {
      piVar16 = *(int **)(*(long *)((long)puStack_1260 + 0x78) + 0x60);
      iVar7 = *piVar16;
      while (iVar7 != (int)uStack_1258) {
        piVar16 = piVar16 + 0x16;
        iVar7 = *piVar16;
      }
      lVar26 = *(long *)(piVar16 + 0xc);
      while (lVar26 != lStack_1268) {
        piVar16 = *(int **)(piVar16 + 0xe);
        lVar26 = *(long *)(piVar16 + 0xc);
      }
LAB_0e2bd67f:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 9;
    }
    else {
      if (uStack_1258._4_4_ == 1) {
        piVar16 = *(int **)(*(long *)((long)puStack_1260 + 0x78) + 0x48);
        iVar7 = *piVar16;
        while (iVar7 != (int)uStack_1258) {
          piVar16 = piVar16 + 0x1a;
          iVar7 = *piVar16;
        }
        goto LAB_0e2bd67f;
      }
      if (uStack_1258._4_4_ == 0) {
        *(uint *)((long)puStack_1260 + 0x18) = *(uint *)((long)puStack_1260 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1380 == '\0') {
      func_0x0e323b80(&puStack_1270,auStack_13b8);
    }
    uVar19 = uStack_1384;
    uVar13 = auStack_13b8._0_8_;
    if ((DAT_0f74d4c8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d4c8), iVar7 != 0)) {
      func_0x0e31f7e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d448,0xf53dab8);
      func_0x0410844d(&DAT_0f74d4c8);
    }
    plVar18 = (long *)(*(long *)(uVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar13 + 0x20) - *(long *)(uVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74d448 + 4)) * 8);
    do {
      lVar26 = *plVar18;
      if (lVar26 == -1) goto LAB_0e2bd711;
      plVar18 = (long *)(*(long *)(uVar13 + 0x30) + lVar26 * 0x18);
    } while (*(uint *)(*(long *)(uVar13 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74d448 + 4)
            );
    if (plVar18 == *(long **)(uVar13 + 0x38)) {
LAB_0e2bd711:
      puVar10 = &DAT_0f74d448;
    }
    else {
      puVar10 = (undefined *)plVar18[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar25 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar25 != puVar4 && (*puVar25 != uVar19)); puVar25 = puVar25 + 0xe) {
    }
    if ((puVar25 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01237507),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_1270 = (undefined *)((ulong)puStack_1270 & 0xffffffffffffff00);
    func_0x05d9c620(puVar25 + 2,&uStack_138c,&uStack_138c,&puStack_1270);
    uStack_11b8 = CONCAT44(uStack_1394,uStack_1398);
    lStack_11d8 = auStack_13b8._0_8_;
    puStack_11d0 = (undefined *)auStack_13b8._8_8_;
    pcStack_11c8 = (code *)puStack_13a8;
    pcStack_11c0 = pcStack_13a0;
    iStack_11b0 = uStack_1390;
    uStack_11ac = uStack_138c;
    uStack_11a8 = uStack_1388;
    uStack_11a4 = uStack_1384;
    uStack_11a0 = uStack_1380;
    func_0x048b0bc0(auStack_1348);
    func_0x0e3234a0(auStack_1348);
    bVar28 = (auStack_1320[0] & 1) != 0;
    puVar11 = auStack_1320 + 1;
    if (bVar28) {
      puVar11 = (undefined1 *)auStack_1310._0_8_;
    }
    uVar22 = (ulong)(auStack_1320[0] >> 1);
    if (bVar28) {
      uVar22 = auStack_1320._8_8_;
    }
    if (uVar22 == 0) {
      uStack_11ac = 0x811c9dc5;
    }
    else {
      uVar12 = (ulong)((uint)uVar22 & 3);
      if (uVar22 < 4) {
        uStack_11ac = 0x811c9dc5;
        uVar24 = 0;
      }
      else {
        uStack_11ac = 0x811c9dc5;
        uVar24 = 0;
        do {
          uStack_11ac = ((int)(char)puVar11[uVar24 + 3] ^
                        ((int)(char)puVar11[uVar24 + 2] ^
                        ((int)(char)puVar11[uVar24 + 1] ^
                        ((int)(char)puVar11[uVar24] ^ uStack_11ac) * 0x1000193) * 0x1000193) *
                        0x1000193) * 0x1000193;
          uVar24 = uVar24 + 4;
        } while ((uVar22 & 0xfffffffffffffffc) != uVar24);
      }
      if (uVar12 != 0) {
        uVar22 = 0;
        do {
          uStack_11ac = ((int)(char)puVar11[uVar22 + uVar24] ^ uStack_11ac) * 0x1000193;
          uVar22 = uVar22 + 1;
        } while (uVar12 != uVar22);
      }
    }
    iStack_11b0 = 2;
    if ((DAT_0f74d4e8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d4e8), iVar7 != 0)) {
      func_0x0e31f8f0();
      func_0x0410844d(&DAT_0f74d4e8);
    }
    puStack_1270 = (undefined *)CONCAT44(puStack_1270._4_4_,uStack_11ac);
    lStack_1268 = 0;
    puStack_1260 = (undefined1 *)CONCAT44(puStack_1260._4_4_,3);
    uStack_1258 = 1;
    uStack_1250 = 0;
    puStack_1248 = &UNK_0e323a60;
    puStack_1240 = &SUB_048b06d0;
    puStack_1238 = &UNK_0e31f720;
    puStack_1230 = &UNK_0e323d40;
    puStack_1228 = &UNK_0e323d50;
    uStack_1220 = (long *)((ulong)uStack_1220 & 0xffffffff00000000);
    auStack_1218 = ZEXT816(0);
    func_0x048b05a0(&puStack_11d0,&puStack_1270);
    uVar13 = auStack_1218._8_8_;
    if ((long *)auStack_1218._8_8_ != (long *)0x0) {
      LOCK();
      plVar18 = (long *)(auStack_1218._8_8_ + 8);
      lVar26 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*(long *)auStack_1218._8_8_ + 0x10))(auStack_1218._8_8_);
        FUN_0412c2d0(uVar13);
      }
    }
    pcStack_858 = pcStack_11c0;
    uStack_850 = uStack_11b8;
    puStack_868 = puStack_11d0;
    puStack_860 = pcStack_11c8;
    func_0x0e3237f0(&puStack_1270,&puStack_868,auStack_1348);
    if (uStack_1258._4_4_ == 2) {
      piVar16 = *(int **)(*(long *)(puStack_1260 + 0x78) + 0x60);
      iVar7 = *piVar16;
      while (iVar7 != (int)uStack_1258) {
        piVar16 = piVar16 + 0x16;
        iVar7 = *piVar16;
      }
      lVar26 = *(long *)(piVar16 + 0xc);
      while (lVar26 != lStack_1268) {
        piVar16 = *(int **)(piVar16 + 0xe);
        lVar26 = *(long *)(piVar16 + 0xc);
      }
LAB_0e2bdacf:
      *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 9;
    }
    else {
      if (uStack_1258._4_4_ == 1) {
        piVar16 = *(int **)(*(long *)(puStack_1260 + 0x78) + 0x48);
        iVar7 = *piVar16;
        while (iVar7 != (int)uStack_1258) {
          piVar16 = piVar16 + 0x1a;
          iVar7 = *piVar16;
        }
        goto LAB_0e2bdacf;
      }
      if (uStack_1258._4_4_ == 0) {
        *(uint *)(puStack_1260 + 0x18) = *(uint *)(puStack_1260 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_11a0 == '\0') {
      func_0x0e323b80(&puStack_1270,&lStack_11d8);
    }
    uVar19 = uStack_11a4;
    lVar26 = lStack_11d8;
    if ((DAT_0f74d4c8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d4c8), iVar7 != 0)) {
      func_0x0e31f7e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d448,0xf53dab8);
      func_0x0410844d(&DAT_0f74d4c8);
    }
    plVar18 = (long *)(*(long *)(lVar26 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar26 + 0x20) - *(long *)(lVar26 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f74d448 + 4)) * 8);
    do {
      lVar20 = *plVar18;
      if (lVar20 == -1) goto LAB_0e2bdb71;
      plVar18 = (long *)(*(long *)(lVar26 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar26 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f74d448 + 4)
            );
    if (plVar18 == *(long **)(lVar26 + 0x38)) {
LAB_0e2bdb71:
      puVar10 = &DAT_0f74d448;
    }
    else {
      puVar10 = (undefined *)plVar18[2];
    }
    puVar4 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar25 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar25 != puVar4 && (*puVar25 != uVar19)); puVar25 = puVar25 + 0xe) {
    }
    if ((puVar25 == puVar4) &&
       (cVar6 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01237507),
       cVar6 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    puStack_1270 = (undefined *)((ulong)puStack_1270 & 0xffffffffffffff00);
    func_0x05d9c620(puVar25 + 2,&uStack_11ac,&uStack_11ac,&puStack_1270);
    func_0x048b0bc0(auStack_1348);
  }
  func_0x0e215c90(param_1);
  func_0x0cb3f830(param_1);
  if ((DAT_0f74d580 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d580), iVar7 != 0)) {
    func_0x0e323e60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d500,0xf53dab8);
    func_0x0410844d(&DAT_0f74d580);
  }
  plVar18 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74d500 + 4)) * 8);
  do {
    lVar26 = *plVar18;
    if (lVar26 == -1) goto LAB_0e2bdc80;
    plVar18 = (long *)(*(long *)(param_1 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74d500 + 4))
  ;
  if (plVar18 == *(long **)(param_1 + 0x38)) {
LAB_0e2bdc80:
    puVar10 = &DAT_0f74d500;
    if (iRam000000000f74d560 != -0x2b3da790) goto LAB_0e2bdced;
LAB_0e2bdcab:
    lVar26 = *(long *)(puVar10 + 0x68);
    if (lVar26 == 0) goto LAB_0e2bdced;
    bVar28 = (*(byte *)(lVar26 + 8) & 1) != 0;
    lVar20 = lVar26 + 9;
    if (bVar28) {
      lVar20 = *(long *)(lVar26 + 0x18);
    }
    uVar22 = (ulong)(*(byte *)(lVar26 + 8) >> 1);
    if (bVar28) {
      uVar22 = *(ulong *)(lVar26 + 0x10);
    }
    func_0x0e3248f0(&lStack_11d8,param_1,lVar20,uVar22);
  }
  else {
    puVar10 = (undefined *)plVar18[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e2bdcab;
LAB_0e2bdced:
    func_0x0e3248f0(&lStack_11d8,param_1,&UNK_011ce83f,0xd);
  }
  if ((char)uStack_11a8 != '\0') goto LAB_0e2c1dd5;
  auStack_12e0 = (undefined1  [16])0x0;
  auStack_12f0 = (undefined1  [16])0x0;
  auStack_1300 = (undefined1  [16])0x0;
  auStack_1310 = (undefined1  [16])0x0;
  auStack_1320 = (undefined1  [16])0x0;
  uStack_12d0 = 0;
  puStack_1338 = (undefined1 *)0x0;
  stack0xffffffffffffecd1 = SUB1615((undefined1  [16])0x0,1);
  auStack_1330[0] = 0xff;
  auStack_1348._0_8_ = &UNK_0f4e3c70;
  auStack_1348._8_8_ = -1;
  FUN_041679a0(&pcStack_1328);
  uVar13 = func_0x041681f0(&pcStack_1328,0xf547a30);
  auStack_1320._0_8_ = uVar13;
  uVar13 = func_0x041681f0(&pcStack_1328,0xf547770);
  auStack_1320._8_8_ = uVar13;
  auStack_1310 = (undefined1  [16])0x0;
  auStack_1300 = (undefined1  [16])0x0;
  auStack_12f0 = (undefined1  [16])0x0;
  auStack_12e0 = (undefined1  [16])0x0;
  uStack_12d0 = 0;
  bStack_11f0 = 0x18;
  uStack_11ef = 0x5c3a2b775c285e;
  uStack_11e8 = 0x77;
  uStack_11e7 = 0x243f292b;
  uStack_11e3 = 0;
  func_0x0ed60210(auStack_1348,&bStack_11f0,0);
  uStack_1258 = CONCAT71(uStack_1258._1_7_,auStack_1330[0]);
  lStack_1268 = auStack_1348._8_8_;
  puStack_1260 = puStack_1338;
  puStack_1270 = &UNK_0f4e3c70;
  func_0x04167a20(&uStack_1250,&pcStack_1328);
  puStack_1248 = (undefined *)auStack_1320._0_8_;
  puStack_1240 = (undefined1 *)auStack_1320._8_8_;
  puStack_1238 = (undefined *)auStack_1310._0_8_;
  puStack_1230 = (undefined *)auStack_1310._8_8_;
  puStack_1228 = (undefined *)auStack_1300._0_8_;
  uStack_1220 = (long *)auStack_1300._8_8_;
  if ((long *)auStack_1300._8_8_ != (long *)0x0) {
    LOCK();
    *(long *)(auStack_1300._8_8_ + 8) = *(long *)(auStack_1300._8_8_ + 8) + 1;
    UNLOCK();
  }
  auStack_1218._0_8_ = auStack_12f0._0_8_;
  if ((auStack_12f0[8] & 1) == 0) {
    uStack_1200 = auStack_12e0._8_8_;
    auStack_1218 = auStack_12f0;
    uStack_1208 = auStack_12e0._0_8_;
  }
  else {
    func_0x0412e5e0(auStack_1218 + 8,auStack_12e0._8_8_,auStack_12e0._0_8_);
  }
  uStack_11f8 = uStack_12d0;
  if ((bStack_11f0 & 1) == 0) {
    auStack_1348._0_8_ = &UNK_0f4e3c70;
    if ((auStack_12f0[8] & 1) != 0) goto LAB_0e2bdf75;
LAB_0e2bdf37:
    plVar18 = (long *)auStack_1300._8_8_;
  }
  else {
    func_0x0412a280(uStack_11e0,CONCAT71(uStack_11ef,bStack_11f0) & 0xfffffffffffffffe);
    auStack_1348._0_8_ = &UNK_0f4e3c70;
    if ((auStack_12f0[8] & 1) == 0) goto LAB_0e2bdf37;
LAB_0e2bdf75:
    func_0x0412a280(auStack_12e0._8_8_,auStack_12f0._8_8_ & 0xfffffffffffffffe);
    plVar18 = (long *)auStack_1300._8_8_;
  }
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(&pcStack_1328);
  lVar26 = lStack_11d8;
  if ((DAT_0f74d580 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d580), iVar7 != 0)) {
    func_0x0e323e60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d500,0xf53dab8);
    func_0x0410844d(&DAT_0f74d580);
  }
  plVar18 = (long *)(*(long *)(lVar26 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar26 + 0x20) - *(long *)(lVar26 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74d500 + 4)) * 8);
  do {
    lVar20 = *plVar18;
    if (lVar20 == -1) goto LAB_0e2be040;
    plVar18 = (long *)(*(long *)(lVar26 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar26 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f74d500 + 4));
  if (plVar18 == *(long **)(lVar26 + 0x38)) {
LAB_0e2be040:
    puVar10 = &DAT_0f74d500;
  }
  else {
    puVar10 = (undefined *)plVar18[2];
  }
  for (pbVar14 = *(byte **)(lStack_11d8 + 0x50); pbVar14 != *(byte **)(lStack_11d8 + 0x58);
      pbVar14 = pbVar14 + 0x38) {
    bVar2 = *pbVar14;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2be0da;
    }
    else if (*(long *)(pbVar14 + 8) == 0x1a) {
LAB_0e2be0da:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar14 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar14 + 0x10);
      }
      auVar29[0] = -(*pbVar21 == DAT_014eaba0);
      auVar29[1] = -(pbVar21[1] == DAT_014eaba0._1_1_);
      auVar29[2] = -(pbVar21[2] == DAT_014eaba0._2_1_);
      auVar29[3] = -(pbVar21[3] == DAT_014eaba0._3_1_);
      auVar29[4] = -(pbVar21[4] == DAT_014eaba0._4_1_);
      auVar29[5] = -(pbVar21[5] == DAT_014eaba0._5_1_);
      auVar29[6] = -(pbVar21[6] == DAT_014eaba0._6_1_);
      auVar29[7] = -(pbVar21[7] == DAT_014eaba0._7_1_);
      auVar29[8] = -(pbVar21[8] == DAT_014eaba0._8_1_);
      auVar29[9] = -(pbVar21[9] == DAT_014eaba0._9_1_);
      auVar29[10] = -(pbVar21[10] == DAT_014eaba0._10_1_);
      auVar29[0xb] = -(pbVar21[0xb] == DAT_014eaba0._11_1_);
      auVar29[0xc] = -(pbVar21[0xc] == DAT_014eaba0._12_1_);
      auVar29[0xd] = -(pbVar21[0xd] == DAT_014eaba0._13_1_);
      auVar29[0xe] = -(pbVar21[0xe] == DAT_014eaba0._14_1_);
      auVar29[0xf] = -(pbVar21[0xf] == DAT_014eaba0._15_1_);
      auVar30[0] = -(pbVar21[10] == DAT_014e4ff0);
      auVar30[1] = -(pbVar21[0xb] == DAT_014e4ff0._1_1_);
      auVar30[2] = -(pbVar21[0xc] == DAT_014e4ff0._2_1_);
      auVar30[3] = -(pbVar21[0xd] == DAT_014e4ff0._3_1_);
      auVar30[4] = -(pbVar21[0xe] == DAT_014e4ff0._4_1_);
      auVar30[5] = -(pbVar21[0xf] == DAT_014e4ff0._5_1_);
      auVar30[6] = -(pbVar21[0x10] == DAT_014e4ff0._6_1_);
      auVar30[7] = -(pbVar21[0x11] == DAT_014e4ff0._7_1_);
      auVar30[8] = -(pbVar21[0x12] == DAT_014e4ff0._8_1_);
      auVar30[9] = -(pbVar21[0x13] == DAT_014e4ff0._9_1_);
      auVar30[10] = -(pbVar21[0x14] == DAT_014e4ff0._10_1_);
      auVar30[0xb] = -(pbVar21[0x15] == DAT_014e4ff0._11_1_);
      auVar30[0xc] = -(pbVar21[0x16] == DAT_014e4ff0._12_1_);
      auVar30[0xd] = -(pbVar21[0x17] == DAT_014e4ff0._13_1_);
      auVar30[0xe] = -(pbVar21[0x18] == DAT_014e4ff0._14_1_);
      auVar30[0xf] = -(pbVar21[0x19] == DAT_014e4ff0._15_1_);
      auVar30 = auVar30 & auVar29;
      if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar14 == *(byte **)(lStack_11d8 + 0x58)) {
LAB_0e2be108:
    uVar19 = uStack_11ac;
    if (iStack_11b0 == 0) {
      if (((puVar10 == (undefined *)0x0) || (*(int *)(puVar10 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar10 + 0x68) == 0)) goto LAB_0e2be192;
      lVar26 = *(long *)(puVar10 + 0x68) + 0x38;
    }
    else {
      if (puVar10 == (undefined *)0x0) {
        puVar10 = (undefined *)func_0x048aead0(lVar26 + 0x18,0,uStack_11ac);
      }
      auStack_1348._0_8_ = func_0x048b0c90(lVar26 + 0x18,puVar10,uVar19,1);
      if (auStack_1348._0_8_ == 0) {
        auStack_1348 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_1348);
        if (auStack_1348._0_8_ == 0) goto LAB_0e2be192;
      }
      if ((*(int *)(auStack_1348._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_1348._0_8_ + 0x58) != 0)) {
        lVar26 = *(long *)(auStack_1348._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2be192:
        lVar26 = 0;
      }
    }
    puStack_13a8 = &UNK_0488e0b0;
    uStack_1398 = 0x48b5725f;
    pcStack_13a0 = (code *)0x0;
    uStack_1394 = uStack_1394 & 0xffffff00;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auStack_13b8._8_8_;
    auStack_13b8 = auVar5 << 0x40;
    auStack_1348 = (undefined1  [16])0x0;
    _auStack_1330 = ZEXT816(0x488e0b0);
    auStack_1320._0_5_ = 0x48b5725f;
    puStack_1170 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_1170 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar13 = _UNK_013bbadf;
    uStack_1180 = 0x21;
    uStack_1178 = 0x1a;
    *(ulong *)((long)puStack_1170 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_1170 + 0x12) = uVar13;
    uVar13 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_1170 = _DAT_013bbacd;
    puStack_1170[1] = uVar13;
    *(undefined1 *)((long)puStack_1170 + 0x1a) = 0;
    lVar26 = FUN_048b5060(lVar26,&uStack_1180);
    *(undefined8 *)(lVar26 + 0x20) = 0;
    if ((undefined1 *)(lVar26 + 0x20) == auStack_1348) {
      pcVar15 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar26 + 0x40) != (code *)0x0) {
        puVar27 = (undefined8 *)(lVar26 + 0x28);
        (**(code **)(lVar26 + 0x40))(puVar27);
        if (auStack_1320[4] != '\0') {
          if (auStack_1320[4] == '\x02') {
            (*_auStack_1330)(5,auStack_1348 + 8,puVar27);
          }
          else {
            uVar13 = auStack_1348._8_8_;
            auStack_1348._8_8_ = 0;
            *puVar27 = uVar13;
          }
        }
      }
      *(code **)(lVar26 + 0x38) = _auStack_1330;
      *(code **)(lVar26 + 0x40) = pcStack_1328;
      *(undefined4 *)(lVar26 + 0x48) = auStack_1320._0_4_;
      *(char *)(lVar26 + 0x4c) = auStack_1320[4];
      pcVar15 = pcStack_1328;
    }
    if ((uStack_1180 & 1) != 0) {
      func_0x0412a280(puStack_1170,uStack_1180 & 0xfffffffffffffffe);
      pcVar15 = pcStack_1328;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)(auStack_1348 + 8);
    }
    if (pcStack_13a0 != (code *)0x0) {
      (*pcStack_13a0)(auStack_13b8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar14 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550ad8), iVar8 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar7 == _DAT_0f550ac4) goto LAB_0e2be108;
  }
  uStack_d38 = CONCAT44(uStack_11a4,uStack_11a8);
  uStack_d40 = CONCAT44(uStack_11ac,iStack_11b0);
  uStack_d48 = uStack_11b8;
  puStack_d58 = pcStack_11c8;
  pcStack_d50 = pcStack_11c0;
  lStack_d68 = lStack_11d8;
  puStack_d60 = puStack_11d0;
  func_0x0e3254a0(auStack_1348,&lStack_d68,&UNK_013762e9,10,1);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0f0830;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x7c48fd0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x7c45c20;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e325ac0;
  puStack_1370 = &UNK_0e325c80;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_ff8 = (undefined1)uStack_d38;
  uStack_1008 = uStack_d48;
  uStack_1000 = uStack_d40;
  puStack_1018 = puStack_d58;
  pcStack_1010 = pcStack_d50;
  lStack_1028 = lStack_d68;
  puStack_1020 = puStack_d60;
  func_0x048b0bc0(auStack_1330);
  lStack_e20 = lStack_1268;
  puStack_e18 = puStack_1260;
  uStack_e10 = (undefined1)uStack_1258;
  puStack_e28 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_e08,&uStack_1250);
  puStack_e00 = puStack_1248;
  puStack_df8 = puStack_1240;
  puStack_df0 = puStack_1238;
  puStack_de8 = puStack_1230;
  puStack_de0 = puStack_1228;
  plStack_dd8 = uStack_1220;
  if (uStack_1220 != (long *)0x0) {
    LOCK();
    uStack_1220[1] = uStack_1220[1] + 1;
    UNLOCK();
  }
  uStack_dd0 = auStack_1218._0_8_;
  if ((auStack_1218[8] & 1) == 0) {
    uStack_db8 = uStack_1200;
    uStack_dc8 = auStack_1218._8_8_;
    uStack_dc0 = uStack_1208;
  }
  else {
    func_0x0412e5e0(&uStack_dc8,uStack_1200,uStack_1208);
  }
  uStack_db0 = uStack_11f8;
  uStack_10c0 = 0xffffffffffffffff;
  uStack_10b8 = 0;
  uStack_10b0 = 0xff;
  puStack_10c8 = &UNK_0f4b4130;
  lStack_10a0 = lStack_e20;
  puStack_1098 = puStack_e18;
  uStack_1090 = uStack_e10;
  puStack_10a8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1088,auStack_e08);
  puStack_1080 = puStack_e00;
  puStack_1078 = puStack_df8;
  puStack_1070 = puStack_df0;
  puStack_1068 = puStack_de8;
  puStack_1060 = puStack_de0;
  plStack_1058 = plStack_dd8;
  puStack_de0 = (undefined *)0x0;
  plStack_dd8 = (long *)0x0;
  uStack_1050 = uStack_dd0;
  uStack_1038 = uStack_db8;
  uStack_1048 = uStack_dc8;
  uStack_1040 = uStack_dc0;
  uStack_dc8 = 0;
  uStack_dc0 = 0;
  uStack_db8 = 0;
  uStack_1030 = uStack_db0;
  if ((int)uStack_1000 == 4) {
    lVar26 = func_0x0e325fa0(&lStack_1028);
    lVar26 = *(long *)(lVar26 + 0x48);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
LAB_0e2be7cf:
    *(undefined1 *)(puVar27 + 3) = uStack_10b0;
    puVar27[1] = uStack_10c0;
    puVar27[2] = uStack_10b8;
    *puVar27 = &UNK_0f4b4130;
    puVar27[5] = lStack_10a0;
    puVar27[6] = puStack_1098;
    *(undefined1 *)(puVar27 + 7) = uStack_1090;
    puVar27[4] = &UNK_0f4e3c70;
    func_0x04167a20(puVar27 + 8,auStack_1088);
    puVar27[9] = puStack_1080;
    puVar27[10] = puStack_1078;
    puVar27[0xb] = puStack_1070;
    puVar27[0xc] = puStack_1068;
    puVar27[0xd] = puStack_1060;
    puVar27[0xe] = plStack_1058;
    puStack_1060 = (undefined *)0x0;
    plStack_1058 = (long *)0x0;
    puVar27[0xf] = uStack_1050;
    puVar27[0x12] = uStack_1038;
    puVar27[0x10] = uStack_1048;
    puVar27[0x11] = uStack_1040;
    uStack_1048 = 0;
    uStack_1040 = 0;
    uStack_1038 = 0;
    puVar27[0x13] = uStack_1030;
    plVar18 = *(long **)(lVar26 + 8);
    *(undefined8 **)(lVar26 + 8) = puVar27;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
  }
  else if ((int)uStack_1000 == 1) {
    lVar26 = func_0x0e325e50(&lStack_1028);
    lVar26 = *(long *)(lVar26 + 0x58);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    goto LAB_0e2be7cf;
  }
  uStack_d78 = uStack_ff8;
  uStack_d88 = uStack_1008;
  uStack_d80 = uStack_1000;
  puStack_d98 = puStack_1018;
  pcStack_d90 = pcStack_1010;
  lStack_da8 = lStack_1028;
  puStack_da0 = puStack_1020;
  func_0x0e324ee0(auStack_1348,lStack_1028 + 0x18);
  if (iStack_132c == 2) {
    piVar16 = *(int **)(*(long *)(puStack_1338 + 0x78) + 0x60);
    iVar7 = *piVar16;
    while ((undefined1  [4])iVar7 != auStack_1330) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    lVar26 = *(long *)(piVar16 + 0xc);
    while (lVar26 != auStack_1348._8_8_) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar26 = *(long *)(piVar16 + 0xc);
    }
LAB_0e2be95f:
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else {
    if (iStack_132c == 1) {
      piVar16 = *(int **)(*(long *)(puStack_1338 + 0x78) + 0x48);
      iVar7 = *piVar16;
      while ((undefined1  [4])iVar7 != auStack_1330) {
        piVar16 = piVar16 + 0x1a;
        iVar7 = *piVar16;
      }
      goto LAB_0e2be95f;
    }
    if (iStack_132c == 0) {
      *(uint *)(puStack_1338 + 0x18) = *(uint *)(puStack_1338 + 0x18) | 0x40000;
    }
  }
  func_0x0e3254a0(auStack_1348,&lStack_da8,&UNK_0140d6fe,0xc,0x10);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0f08a8;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x7c49aa0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x7c47340;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e326120;
  puStack_1370 = &UNK_0e3262f0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_fb8 = uStack_d78;
  uStack_fc8 = uStack_d88;
  uStack_fc0 = uStack_d80;
  puStack_fd8 = puStack_d98;
  pcStack_fd0 = pcStack_d90;
  lStack_fe8 = lStack_da8;
  puStack_fe0 = puStack_da0;
  func_0x048b0bc0(auStack_1330);
  lStack_ea0 = lStack_1268;
  puStack_e98 = puStack_1260;
  uStack_e90 = (undefined1)uStack_1258;
  puStack_ea8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_e88,&uStack_1250);
  puStack_e80 = puStack_1248;
  puStack_e78 = puStack_1240;
  puStack_e70 = puStack_1238;
  puStack_e68 = puStack_1230;
  puStack_e60 = puStack_1228;
  plStack_e58 = uStack_1220;
  if (uStack_1220 != (long *)0x0) {
    LOCK();
    uStack_1220[1] = uStack_1220[1] + 1;
    UNLOCK();
  }
  uStack_e50 = auStack_1218._0_8_;
  if ((auStack_1218[8] & 1) == 0) {
    uStack_e38 = uStack_1200;
    uStack_e48 = auStack_1218._8_8_;
    uStack_e40 = uStack_1208;
  }
  else {
    func_0x0412e5e0(&uStack_e48,uStack_1200,uStack_1208);
  }
  uStack_e30 = uStack_11f8;
  uStack_1160 = 0xffffffffffffffff;
  uStack_1158 = 0;
  uStack_1150 = 0xff;
  puStack_1168 = &UNK_0f4b40b0;
  lStack_1140 = lStack_ea0;
  puStack_1138 = puStack_e98;
  uStack_1130 = uStack_e90;
  puStack_1148 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_1128,auStack_e88);
  puStack_1120 = puStack_e80;
  puStack_1118 = puStack_e78;
  puStack_1110 = puStack_e70;
  puStack_1108 = puStack_e68;
  puStack_1100 = puStack_e60;
  plStack_10f8 = plStack_e58;
  puStack_e60 = (undefined *)0x0;
  plStack_e58 = (long *)0x0;
  uStack_10f0 = uStack_e50;
  uStack_10d8 = uStack_e38;
  uStack_10e8 = uStack_e48;
  uStack_10e0 = uStack_e40;
  uStack_e48 = 0;
  uStack_e40 = 0;
  uStack_e38 = 0;
  uStack_10d0 = uStack_e30;
  if ((int)uStack_fc0 == 4) {
    lVar26 = func_0x0e325fa0(&lStack_fe8);
    lVar26 = *(long *)(lVar26 + 0x48);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
LAB_0e2bed30:
    *(undefined1 *)(puVar27 + 3) = uStack_1150;
    puVar27[1] = uStack_1160;
    puVar27[2] = uStack_1158;
    *puVar27 = &UNK_0f4b40b0;
    puVar27[5] = lStack_1140;
    puVar27[6] = puStack_1138;
    *(undefined1 *)(puVar27 + 7) = uStack_1130;
    puVar27[4] = &UNK_0f4e3c70;
    func_0x04167a20(puVar27 + 8,auStack_1128);
    puVar27[9] = puStack_1120;
    puVar27[10] = puStack_1118;
    puVar27[0xb] = puStack_1110;
    puVar27[0xc] = puStack_1108;
    puVar27[0xd] = puStack_1100;
    puVar27[0xe] = plStack_10f8;
    puStack_1100 = (undefined *)0x0;
    plStack_10f8 = (long *)0x0;
    puVar27[0xf] = uStack_10f0;
    puVar27[0x12] = uStack_10d8;
    puVar27[0x10] = uStack_10e8;
    puVar27[0x11] = uStack_10e0;
    uStack_10e8 = 0;
    uStack_10e0 = 0;
    uStack_10d8 = 0;
    puVar27[0x13] = uStack_10d0;
    plVar18 = *(long **)(lVar26 + 8);
    *(undefined8 **)(lVar26 + 8) = puVar27;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x28))();
    }
  }
  else if ((int)uStack_fc0 == 1) {
    lVar26 = func_0x0e325e50(&lStack_fe8);
    lVar26 = *(long *)(lVar26 + 0x58);
    puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar27 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    goto LAB_0e2bed30;
  }
  uStack_cf8 = uStack_fb8;
  uStack_d08 = uStack_fc8;
  uStack_d00 = uStack_fc0;
  puStack_d18 = puStack_fd8;
  pcStack_d10 = pcStack_fd0;
  lStack_d28 = lStack_fe8;
  puStack_d20 = puStack_fe0;
  func_0x0e3254a0(auStack_1348,&lStack_d28,&UNK_013204e0,5,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e3264d0;
  puStack_1370 = &UNK_0e326640;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_6b8 = uStack_cf8;
  uStack_6c8 = uStack_d08;
  uStack_6c0 = uStack_d00;
  puStack_6d8 = puStack_d18;
  pcStack_6d0 = pcStack_d10;
  lStack_6e8 = lStack_d28;
  puStack_6e0 = puStack_d20;
  func_0x048b0bc0(auStack_1330);
  lStack_ce8 = lStack_6e8;
  puStack_ce0 = puStack_6e0;
  puStack_cd8 = puStack_6d8;
  pcStack_cd0 = pcStack_6d0;
  uStack_cc8 = uStack_6c8;
  uStack_cc0 = uStack_6c0;
  uStack_cb8 = CONCAT71(uStack_6b7,uStack_6b8);
  func_0x0e3254a0(auStack_1348,&lStack_ce8,&UNK_0125278f,5,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e326820;
  puStack_1370 = &UNK_0e326990;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_678 = (undefined1)uStack_cb8;
  uStack_688 = uStack_cc8;
  uStack_680 = uStack_cc0;
  puStack_698 = puStack_cd8;
  pcStack_690 = pcStack_cd0;
  lStack_6a8 = lStack_ce8;
  puStack_6a0 = puStack_ce0;
  func_0x048b0bc0(auStack_1330);
  lStack_ca8 = lStack_6a8;
  puStack_ca0 = puStack_6a0;
  puStack_c98 = puStack_698;
  pcStack_c90 = pcStack_690;
  uStack_c88 = uStack_688;
  uStack_c80 = uStack_680;
  uStack_c78 = CONCAT71(uStack_677,uStack_678);
  func_0x0e3254a0(auStack_1348,&lStack_ca8,&UNK_01304019,5,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e326b70;
  puStack_1370 = &UNK_0e326ce0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_638 = (undefined1)uStack_c78;
  uStack_648 = uStack_c88;
  uStack_640 = uStack_c80;
  puStack_658 = puStack_c98;
  pcStack_650 = pcStack_c90;
  lStack_668 = lStack_ca8;
  puStack_660 = puStack_ca0;
  func_0x048b0bc0(auStack_1330);
  lStack_c68 = lStack_668;
  puStack_c60 = puStack_660;
  puStack_c58 = puStack_658;
  pcStack_c50 = pcStack_650;
  uStack_c48 = uStack_648;
  uStack_c40 = uStack_640;
  uStack_c38 = CONCAT71(uStack_637,uStack_638);
  func_0x0e3254a0(auStack_1348,&lStack_c68,&UNK_012371ca,5,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e326ec0;
  puStack_1370 = &UNK_0e327030;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_438 = (undefined1)uStack_c38;
  uStack_448 = uStack_c48;
  uStack_440 = uStack_c40;
  puStack_458 = puStack_c58;
  pcStack_450 = pcStack_c50;
  lStack_468 = lStack_c68;
  puStack_460 = puStack_c60;
  func_0x048b0bc0(auStack_1330);
  uStack_6ee = 0;
  uStack_6ea = 0;
  uStack_720 = 0xffffffffffffffff;
  uStack_718 = 0;
  uStack_710 = 0xff;
  puStack_728 = &UNK_0f0edc68;
  uStack_708 = _DAT_014e5b40;
  uStack_700 = _UNK_014e5b48;
  uStack_6f8 = 0;
  uStack_6f0 = 0;
  func_0x0e2c2570(&uStack_228,&lStack_468,&puStack_728);
  uStack_bf8 = uStack_1f8;
  uStack_c08 = uStack_208;
  uStack_c00 = uStack_200;
  uStack_c18 = uStack_218;
  uStack_c10 = uStack_210;
  uStack_c28 = uStack_228;
  uStack_c20 = uStack_220;
  func_0x0e3254a0(auStack_1348,&uStack_c28,&UNK_012371d0,5,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e327210;
  puStack_1370 = &UNK_0e327380;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_5f8 = (undefined1)uStack_bf8;
  uStack_608 = uStack_c08;
  uStack_600 = uStack_c00;
  uStack_618 = uStack_c18;
  uStack_610 = uStack_c10;
  uStack_628 = uStack_c28;
  uStack_620 = uStack_c20;
  func_0x048b0bc0(auStack_1330);
  uStack_be8 = uStack_628;
  uStack_be0 = uStack_620;
  uStack_bd8 = uStack_618;
  uStack_bd0 = uStack_610;
  uStack_bc8 = uStack_608;
  uStack_bc0 = uStack_600;
  uStack_bb8 = CONCAT71(uStack_5f7,uStack_5f8);
  func_0x0e3254a0(auStack_1348,&uStack_be8,&UNK_0147339c,0xe,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e327560;
  puStack_1370 = &UNK_0e3276d0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_3f8 = (undefined1)uStack_bb8;
  uStack_408 = uStack_bc8;
  uStack_400 = uStack_bc0;
  uStack_418 = uStack_bd8;
  uStack_410 = uStack_bd0;
  uStack_428 = uStack_be8;
  uStack_420 = uStack_be0;
  func_0x048b0bc0(auStack_1330);
  uStack_72e = 0;
  uStack_72a = 0;
  uStack_760 = 0xffffffffffffffff;
  uStack_758 = 0;
  uStack_750 = 0xff;
  puStack_768 = &UNK_0f0edc68;
  uStack_748 = 0;
  lStack_740 = _DAT_014f09b8;
  uStack_738 = 0;
  uStack_730 = 0;
  func_0x0e2c2570(&uStack_1f0,&uStack_428,&puStack_768);
  uStack_b78 = uStack_1c0;
  uStack_b88 = uStack_1d0;
  uStack_b80 = uStack_1c8;
  uStack_b98 = uStack_1e0;
  uStack_b90 = uStack_1d8;
  uStack_ba8 = uStack_1f0;
  uStack_ba0 = uStack_1e8;
  func_0x0e3254a0(auStack_1348,&uStack_ba8,&UNK_01426e49,0xe,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0120f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de4ce0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de49c0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e3278b0;
  puStack_1370 = &UNK_0e327a10;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_5b8 = (undefined1)uStack_b78;
  uStack_5c8 = uStack_b88;
  uStack_5c0 = uStack_b80;
  uStack_5d8 = uStack_b98;
  uStack_5d0 = uStack_b90;
  uStack_5e8 = uStack_ba8;
  uStack_5e0 = uStack_ba0;
  func_0x048b0bc0(auStack_1330);
  uStack_b68 = uStack_5e8;
  uStack_b60 = uStack_5e0;
  uStack_b58 = uStack_5d8;
  uStack_b50 = uStack_5d0;
  uStack_b48 = uStack_5c8;
  uStack_b40 = uStack_5c0;
  uStack_b38 = CONCAT71(uStack_5b7,uStack_5b8);
  func_0x0e3254a0(auStack_1348,&uStack_b68,&UNK_011e6702,0x19,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4b81f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0xe328770;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0xe328450;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e328780;
  puStack_1370 = &UNK_0e3287d0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  iVar7 = *(int *)(auStack_1348._8_8_ + 0x1c);
  if (iVar7 == 2) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    lVar26 = *(long *)(piVar16 + 0xc);
    while (lVar26 != *(long *)(auStack_1348._8_8_ + 8)) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar26 = *(long *)(piVar16 + 0xc);
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar7 = *piVar16;
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar25 = (uint *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x18);
    *puVar25 = *puVar25 | 0x40000;
  }
  func_0x0e3257c0(auStack_1348);
  uStack_3b8 = (undefined1)uStack_b38;
  uStack_3c8 = uStack_b48;
  uStack_3c0 = uStack_b40;
  uStack_3d8 = uStack_b58;
  uStack_3d0 = uStack_b50;
  uStack_3e8 = uStack_b68;
  uStack_3e0 = uStack_b60;
  func_0x048b0bc0(auStack_1330);
  uStack_ee0 = 0xffffffffffffffff;
  uStack_ed8 = 0;
  uStack_ed0 = 0xff;
  puStack_ee8 = &UNK_0f4e3cf0;
  uStack_ec8 = 0;
  plStack_eb8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plStack_eb8 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(plStack_eb8 + 1) = (undefined1  [16])0x0;
  *plStack_eb8 = (long)&UNK_0f403128;
  plStack_ec0 = plStack_eb8 + 3;
  plStack_eb8[4] = -1;
  plStack_eb8[5] = 0;
  *(undefined1 *)(plStack_eb8 + 6) = 0xff;
  plStack_eb8[3] = (long)&UNK_0f0edc68;
  lVar26 = _DAT_014f09b8;
  plStack_eb8[7] = 0;
  plStack_eb8[8] = lVar26;
  *(undefined1 (*) [16])(plStack_eb8 + 9) = (undefined1  [16])0x0;
  uStack_eb0 = 0;
  func_0x0e2c2690(&uStack_1b8,&uStack_3e8,&puStack_ee8);
  uStack_af8 = uStack_188;
  uStack_b08 = uStack_198;
  uStack_b00 = uStack_190;
  uStack_b18 = uStack_1a8;
  uStack_b10 = uStack_1a0;
  uStack_b28 = uStack_1b8;
  uStack_b20 = uStack_1b0;
  func_0x0e3254a0(auStack_1348,&uStack_b28,&UNK_011ce84d,0x17,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4b81f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0xe328770;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0xe328450;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e328e30;
  puStack_1370 = &UNK_0e328e80;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  iVar7 = *(int *)(auStack_1348._8_8_ + 0x1c);
  if (iVar7 == 2) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    lVar26 = *(long *)(piVar16 + 0xc);
    while (lVar26 != *(long *)(auStack_1348._8_8_ + 8)) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar26 = *(long *)(piVar16 + 0xc);
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar7 = *piVar16;
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar25 = (uint *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x18);
    *puVar25 = *puVar25 | 0x40000;
  }
  func_0x0e3257c0(auStack_1348);
  uStack_378 = (undefined1)uStack_af8;
  uStack_388 = uStack_b08;
  uStack_380 = uStack_b00;
  uStack_398 = uStack_b18;
  uStack_390 = uStack_b10;
  uStack_3a8 = uStack_b28;
  uStack_3a0 = uStack_b20;
  func_0x048b0bc0(auStack_1330);
  uStack_f20 = 0xffffffffffffffff;
  uStack_f18 = 0;
  uStack_f10 = 0xff;
  puStack_f28 = &UNK_0f4e3cf0;
  uStack_f08 = 0;
  plStack_ef8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plStack_ef8 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(plStack_ef8 + 1) = (undefined1  [16])0x0;
  *plStack_ef8 = (long)&UNK_0f403128;
  plStack_f00 = plStack_ef8 + 3;
  plStack_ef8[4] = -1;
  plStack_ef8[5] = 0;
  *(undefined1 *)(plStack_ef8 + 6) = 0xff;
  plStack_ef8[3] = (long)&UNK_0f0edc68;
  lVar26 = _DAT_014f07f8;
  plStack_ef8[7] = 0;
  plStack_ef8[8] = lVar26;
  *(undefined1 (*) [16])(plStack_ef8 + 9) = (undefined1  [16])0x0;
  uStack_ef0 = 0;
  func_0x0e2c2690(&uStack_180,&uStack_3a8,&puStack_f28);
  uStack_ab8 = uStack_150;
  uStack_ac8 = uStack_160;
  uStack_ac0 = uStack_158;
  uStack_ad8 = uStack_170;
  uStack_ad0 = uStack_168;
  uStack_ae8 = uStack_180;
  uStack_ae0 = uStack_178;
  func_0x0e3254a0(auStack_1348,&uStack_ae8,&UNK_01252795,0x12,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0120f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de4ce0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de49c0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e328f40;
  puStack_1370 = &UNK_0e3290a0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_578 = (undefined1)uStack_ab8;
  uStack_588 = uStack_ac8;
  uStack_580 = uStack_ac0;
  uStack_598 = uStack_ad8;
  uStack_590 = uStack_ad0;
  uStack_5a8 = uStack_ae8;
  uStack_5a0 = uStack_ae0;
  func_0x048b0bc0(auStack_1330);
  uStack_aa8 = uStack_5a8;
  uStack_aa0 = uStack_5a0;
  uStack_a98 = uStack_598;
  uStack_a90 = uStack_590;
  uStack_a88 = uStack_588;
  uStack_a80 = uStack_580;
  uStack_a78 = CONCAT71(uStack_577,uStack_578);
  func_0x0e3254a0(auStack_1348,&uStack_aa8,&UNK_012eb753,0xf,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e329280;
  puStack_1370 = &UNK_0e3293f0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_538 = (undefined1)uStack_a78;
  uStack_548 = uStack_a88;
  uStack_540 = uStack_a80;
  uStack_558 = uStack_a98;
  uStack_550 = uStack_a90;
  uStack_568 = uStack_aa8;
  uStack_560 = uStack_aa0;
  func_0x048b0bc0(auStack_1330);
  uStack_a68 = uStack_568;
  uStack_a60 = uStack_560;
  uStack_a58 = uStack_558;
  uStack_a50 = uStack_550;
  uStack_a48 = uStack_548;
  uStack_a40 = uStack_540;
  uStack_a38 = CONCAT71(uStack_537,uStack_538);
  func_0x0e3254a0(auStack_1348,&uStack_a68,&UNK_0149a4a5,0xb,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4b81f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0xe328770;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0xe328450;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e3295d0;
  puStack_1370 = &UNK_0e329620;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  iVar7 = *(int *)(auStack_1348._8_8_ + 0x1c);
  if (iVar7 == 2) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    lVar26 = *(long *)(piVar16 + 0xc);
    while (lVar26 != *(long *)(auStack_1348._8_8_ + 8)) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar26 = *(long *)(piVar16 + 0xc);
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar7 = *piVar16;
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar25 = (uint *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x18);
    *puVar25 = *puVar25 | 0x40000;
  }
  func_0x0e3257c0(auStack_1348);
  uStack_338 = (undefined1)uStack_a38;
  uStack_348 = uStack_a48;
  uStack_340 = uStack_a40;
  uStack_358 = uStack_a58;
  uStack_350 = uStack_a50;
  uStack_368 = uStack_a68;
  uStack_360 = uStack_a60;
  func_0x048b0bc0(auStack_1330);
  uStack_f60 = 0xffffffffffffffff;
  uStack_f58 = 0;
  uStack_f50 = 0xff;
  puStack_f68 = &UNK_0f4e3cf0;
  uStack_f48 = 0;
  plStack_f38 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plStack_f38 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(plStack_f38 + 1) = (undefined1  [16])0x0;
  *plStack_f38 = (long)&UNK_0f403128;
  plStack_f40 = plStack_f38 + 3;
  plStack_f38[4] = -1;
  plStack_f38[5] = 0;
  *(undefined1 *)(plStack_f38 + 6) = 0xff;
  plStack_f38[3] = (long)&UNK_0f0edc68;
  lVar26 = _UNK_014e3178;
  plStack_f38[7] = _DAT_014e3170;
  plStack_f38[8] = lVar26;
  *(undefined1 (*) [16])(plStack_f38 + 9) = (undefined1  [16])0x0;
  uStack_f30 = 0;
  func_0x0e2c2690(&uStack_148,&uStack_368,&puStack_f68);
  uStack_9f8 = uStack_118;
  uStack_a08 = uStack_128;
  uStack_a00 = uStack_120;
  uStack_a18 = uStack_138;
  uStack_a10 = uStack_130;
  uStack_a28 = uStack_148;
  uStack_a20 = uStack_140;
  func_0x0e3254a0(auStack_1348,&uStack_a28,&UNK_011a256e,0xd,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4b41b0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0xe249210;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0xe248ef0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e329670;
  puStack_1370 = &UNK_0e329810;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  iVar7 = *(int *)(auStack_1348._8_8_ + 0x1c);
  if (iVar7 == 2) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x60);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x16;
      iVar7 = *piVar16;
    }
    lVar26 = *(long *)(piVar16 + 0xc);
    while (lVar26 != *(long *)(auStack_1348._8_8_ + 8)) {
      piVar16 = *(int **)(piVar16 + 0xe);
      lVar26 = *(long *)(piVar16 + 0xc);
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 1) {
    piVar16 = *(int **)(*(long *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x78) + 0x48);
    iVar7 = *piVar16;
    while (iVar7 != *(int *)(auStack_1348._8_8_ + 0x18)) {
      piVar16 = piVar16 + 0x1a;
      iVar7 = *piVar16;
    }
    *(byte *)((long)piVar16 + 0x12) = *(byte *)((long)piVar16 + 0x12) | 4;
  }
  else if (iVar7 == 0) {
    puVar25 = (uint *)(*(long *)(auStack_1348._8_8_ + 0x10) + 0x18);
    *puVar25 = *puVar25 | 0x40000;
  }
  func_0x0e3257c0(auStack_1348);
  uStack_2f8 = (undefined1)uStack_9f8;
  uStack_308 = uStack_a08;
  uStack_300 = uStack_a00;
  uStack_318 = uStack_a18;
  uStack_310 = uStack_a10;
  uStack_328 = uStack_a28;
  uStack_320 = uStack_a20;
  func_0x048b0bc0(auStack_1330);
  uStack_fa0 = 0xffffffffffffffff;
  uStack_f98 = 0;
  uStack_f90 = 0xff;
  puStack_fa8 = &UNK_0f4e3cf0;
  uStack_f88 = 0;
  plStack_f78 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plStack_f78 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(plStack_f78 + 1) = (undefined1  [16])0x0;
  *plStack_f78 = (long)&UNK_0f403128;
  plStack_f80 = plStack_f78 + 3;
  plStack_f78[4] = -1;
  plStack_f78[5] = 0;
  *(undefined1 *)(plStack_f78 + 6) = 0xff;
  plStack_f78[3] = (long)&UNK_0f0edc68;
  lVar26 = _UNK_014e3178;
  plStack_f78[7] = _DAT_014e3170;
  plStack_f78[8] = lVar26;
  *(undefined1 (*) [16])(plStack_f78 + 9) = (undefined1  [16])0x0;
  uStack_f70 = 0;
  func_0x0e2c2690(&uStack_110,&uStack_328,&puStack_fa8);
  uStack_9b8 = uStack_e0;
  uStack_9c8 = uStack_f0;
  uStack_9c0 = uStack_e8;
  uStack_9d8 = uStack_100;
  uStack_9d0 = uStack_f8;
  uStack_9e8 = uStack_110;
  uStack_9e0 = uStack_108;
  func_0x0e3254a0(auStack_1348,&uStack_9e8,&UNK_0123ca53,6,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e329950;
  puStack_1370 = &UNK_0e329ac0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_2b8 = (undefined1)uStack_9b8;
  uStack_2c8 = uStack_9c8;
  uStack_2c0 = uStack_9c0;
  uStack_2d8 = uStack_9d8;
  uStack_2d0 = uStack_9d0;
  uStack_2e8 = uStack_9e8;
  uStack_2e0 = uStack_9e0;
  func_0x048b0bc0(auStack_1330);
  uStack_76e = 0;
  uStack_76a = 0;
  uStack_7a0 = 0xffffffffffffffff;
  uStack_798 = 0;
  uStack_790 = 0xff;
  puStack_7a8 = &UNK_0f0edc68;
  uStack_788 = _DAT_014e4600;
  uStack_780 = _UNK_014e4608;
  uStack_778 = 0;
  uStack_770 = 0;
  func_0x0e2c2570(&uStack_d8,&uStack_2e8,&puStack_7a8);
  uStack_978 = uStack_a8;
  uStack_988 = uStack_b8;
  uStack_980 = uStack_b0;
  uStack_998 = uStack_c8;
  uStack_990 = uStack_c0;
  uStack_9a8 = uStack_d8;
  uStack_9a0 = uStack_d0;
  func_0x0e3254a0(auStack_1348,&uStack_9a8,&UNK_013da114,0xe,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e329ca0;
  puStack_1370 = &UNK_0e329e10;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_278 = (undefined1)uStack_978;
  uStack_288 = uStack_988;
  uStack_280 = uStack_980;
  uStack_298 = uStack_998;
  uStack_290 = uStack_990;
  uStack_2a8 = uStack_9a8;
  uStack_2a0 = uStack_9a0;
  func_0x048b0bc0(auStack_1330);
  uStack_7ae = 0;
  uStack_7aa = 0;
  uStack_7e0 = 0xffffffffffffffff;
  uStack_7d8 = 0;
  uStack_7d0 = 0xff;
  puStack_7e8 = &UNK_0f0edc68;
  uStack_7c8 = _DAT_014e9aa0;
  uStack_7c0 = _UNK_014e9aa8;
  uStack_7b8 = 0;
  uStack_7b0 = 0;
  func_0x0e2c2570(&uStack_a0,&uStack_2a8,&puStack_7e8);
  uStack_938 = uStack_70;
  uStack_948 = uStack_80;
  uStack_940 = uStack_78;
  uStack_958 = uStack_90;
  uStack_950 = uStack_88;
  uStack_968 = uStack_a0;
  uStack_960 = uStack_98;
  func_0x0e3254a0(auStack_1348,&uStack_968,&UNK_0140d70b,0xe,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0122d0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de9430;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de9110;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e329ff0;
  puStack_1370 = &UNK_0e32a160;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_238 = (undefined1)uStack_938;
  uStack_248 = uStack_948;
  uStack_240 = uStack_940;
  uStack_258 = uStack_958;
  uStack_250 = uStack_950;
  uStack_268 = uStack_968;
  uStack_260 = uStack_960;
  func_0x048b0bc0(auStack_1330);
  uStack_7ee = 0;
  uStack_7ea = 0;
  uStack_820 = 0xffffffffffffffff;
  uStack_818 = 0;
  uStack_810 = 0xff;
  puStack_828 = &UNK_0f0edc68;
  uStack_808 = _DAT_014e2670;
  uStack_800 = _UNK_014e2678;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  func_0x0e2c2570(&puStack_68,&uStack_268,&puStack_828);
  uStack_8f8 = uStack_38;
  uStack_908 = uStack_48;
  uStack_900 = uStack_40;
  pcStack_918 = pcStack_58;
  uStack_910 = uStack_50;
  puStack_928 = puStack_68;
  puStack_920 = puStack_60;
  func_0x0e3254a0(auStack_1348,&puStack_928,&UNK_012527a8,8,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f4b5ab0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0xe32afd0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0xe32ac20;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e32b090;
  puStack_1370 = &UNK_0e32b1f0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_4f8 = (undefined1)uStack_8f8;
  uStack_508 = uStack_908;
  uStack_500 = uStack_900;
  pcStack_518 = pcStack_918;
  uStack_510 = uStack_910;
  puStack_528 = puStack_928;
  puStack_520 = puStack_920;
  func_0x048b0bc0(auStack_1330);
  puStack_8e8 = puStack_528;
  puStack_8e0 = puStack_520;
  pcStack_8d8 = pcStack_518;
  uStack_8d0 = uStack_510;
  uStack_8c8 = uStack_508;
  uStack_8c0 = uStack_500;
  uStack_8b8 = CONCAT71(uStack_4f7,uStack_4f8);
  func_0x0e3254a0(auStack_1348,&puStack_8e8,&UNK_014a9167,0xe,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0120f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de4ce0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de49c0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e32b670;
  puStack_1370 = &UNK_0e32b7d0;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_4b8 = (undefined1)uStack_8b8;
  uStack_4c8 = uStack_8c8;
  uStack_4c0 = uStack_8c0;
  pcStack_4d8 = pcStack_8d8;
  uStack_4d0 = uStack_8d0;
  puStack_4e8 = puStack_8e8;
  puStack_4e0 = puStack_8e0;
  func_0x048b0bc0(auStack_1330);
  puStack_8a8 = puStack_4e8;
  puStack_8a0 = puStack_4e0;
  pcStack_898 = pcStack_4d8;
  uStack_890 = uStack_4d0;
  uStack_888 = uStack_4c8;
  uStack_880 = uStack_4c0;
  uStack_878 = CONCAT71(uStack_4b7,uStack_4b8);
  func_0x0e3254a0(auStack_1348,&puStack_8a8,&UNK_01304186,0x1f,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0120f0;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x5de4ce0;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x5de49c0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e32b9b0;
  puStack_1370 = &UNK_0e32bb10;
  uStack_1368 = 0;
  auStack_1360._0_16_ = ZEXT816(0);
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  uStack_478 = (undefined1)uStack_878;
  uStack_488 = uStack_888;
  uStack_480 = uStack_880;
  pcStack_498 = pcStack_898;
  uStack_490 = uStack_890;
  puStack_4a8 = puStack_8a8;
  puStack_4a0 = puStack_8a0;
  func_0x048b0bc0(auStack_1330);
  puStack_868 = puStack_4a8;
  puStack_860 = puStack_4a0;
  pcStack_858 = pcStack_498;
  uStack_850 = uStack_490;
  uStack_848 = uStack_488;
  uStack_840 = uStack_480;
  uStack_838 = CONCAT71(uStack_477,uStack_478);
  func_0x0e3254a0(auStack_1348,&puStack_868,&UNK_0126bacc,10,0);
  puVar27 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar27 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar27 = &UNK_0f0f0998;
  plVar18 = (long *)_auStack_1330;
  _auStack_1330 = (code *)puVar27;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 8))();
  }
  auStack_13b8._0_4_ = puStack_1338._0_4_;
  auStack_13b8._8_8_ = 0;
  puStack_13a8 = (undefined *)((ulong)puStack_13a8 & 0xffffffff00000000);
  pcStack_13a0 = (code *)0x1;
  uStack_1398 = 0;
  uStack_1394 = 0;
  uStack_1390 = 0x7c4fc30;
  uStack_138c = 0;
  uStack_1388 = 0x48b06d0;
  uStack_1384 = 0;
  uStack_1380 = 0x7c4f8f0;
  uStack_137c = 0;
  puStack_1378 = &UNK_0e32bcf0;
  puStack_1370 = &UNK_0e32be60;
  uStack_1368 = 0;
  auStack_1360._0_16_ = (undefined1  [16])0x0;
  func_0x048b05a0(auStack_1348._8_8_,auStack_13b8);
  uVar13 = auStack_1360._8_8_;
  if ((long *)auStack_1360._8_8_ != (long *)0x0) {
    LOCK();
    plVar18 = (long *)(auStack_1360._8_8_ + 8);
    lVar26 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)auStack_1360._8_8_ + 0x10))(auStack_1360._8_8_);
      FUN_0412c2d0(uVar13);
    }
  }
  func_0x0e3257c0(auStack_1348);
  puVar10 = puStack_868;
  func_0x048b0bc0(auStack_1330);
  auVar29 = auStack_1348;
  auStack_1348._1_8_ = 0x696669746e656469;
  auStack_1348[0] = 0x14;
  auStack_1348._9_2_ = 0x7265;
  auStack_1348._12_4_ = auVar29._12_4_;
  auStack_1348[0xb] = 0;
  func_0x0412e5e0(&uStack_1198,puVar9,0x7a);
  if ((DAT_0f74d580 == '\0') && (iVar7 = func_0x04108328(&DAT_0f74d580), iVar7 != 0)) {
    func_0x0e323e60();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74d500,0xf53dab8);
    func_0x0410844d(&DAT_0f74d580);
  }
  puVar11 = puStack_1338;
  plVar18 = (long *)(*(long *)(puVar10 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(puVar10 + 0x20) - *(long *)(puVar10 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74d500 + 4)) * 8);
  do {
    lVar26 = *plVar18;
    if (lVar26 == -1) goto LAB_0e2c1921;
    plVar18 = (long *)(*(long *)(puVar10 + 0x30) + lVar26 * 0x18);
  } while (*(uint *)(*(long *)(puVar10 + 0x30) + 8 + lVar26 * 0x18) != *(uint *)(_DAT_0f74d500 + 4))
  ;
  if (plVar18 == *(long **)(puVar10 + 0x38)) {
LAB_0e2c1921:
    puVar23 = &DAT_0f74d500;
  }
  else {
    puVar23 = (undefined *)plVar18[2];
  }
  bVar2 = auStack_1348[0];
  bVar28 = (auStack_1348[0] & 1) != 0;
  puVar17 = auStack_1348 + 1;
  if (bVar28) {
    puVar17 = puStack_1338;
  }
  uVar22 = (ulong)(auStack_1348[0] >> 1);
  if (bVar28) {
    uVar22 = auStack_1348._8_8_;
  }
  if (uVar22 == 0) {
    uVar19 = 0x811c9dc5;
  }
  else {
    uVar12 = (ulong)((uint)uVar22 & 3);
    if (uVar22 < 4) {
      uVar19 = 0x811c9dc5;
      uVar24 = 0;
    }
    else {
      uVar19 = 0x811c9dc5;
      uVar24 = 0;
      do {
        uVar19 = ((int)(char)puVar17[uVar24 + 3] ^
                 ((int)(char)puVar17[uVar24 + 2] ^
                 ((int)(char)puVar17[uVar24 + 1] ^ ((int)(char)puVar17[uVar24] ^ uVar19) * 0x1000193
                 ) * 0x1000193) * 0x1000193) * 0x1000193;
        uVar24 = uVar24 + 4;
      } while ((uVar22 & 0xfffffffffffffffc) != uVar24);
    }
    if (uVar12 != 0) {
      uVar22 = 0;
      do {
        uVar19 = ((int)(char)puVar17[uVar22 + uVar24] ^ uVar19) * 0x1000193;
        uVar22 = uVar22 + 1;
      } while (uVar12 != uVar22);
    }
  }
  lVar26 = func_0x048b0c90(puVar10 + 0x18,puVar23,uVar19,1);
  if (lVar26 == 0) {
    auStack_13b8 = (undefined1  [16])0x0;
    func_0x048b0d20(auStack_13b8);
    lVar26 = *(long *)(auStack_13b8._0_8_ + 0x58);
    bVar3 = *(byte *)(lVar26 + 0x90);
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x58);
    bVar3 = *(byte *)(lVar26 + 0x90);
  }
  puVar27 = (undefined8 *)(lVar26 + 0x90);
  if ((bVar3 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar26 + 0xa0),*(ulong *)(lVar26 + 0x90) & 0xfffffffffffffffe);
  }
  puVar27[2] = uStack_1188;
  *puVar27 = CONCAT62(uStack_1196,uStack_1198);
  puVar27[1] = uStack_1190;
  uStack_1198 = 0;
  if ((bVar2 & 1) != 0) {
    func_0x0412a280(puVar11,auStack_1348._0_8_ & 0xfffffffffffffffe);
  }
  plVar18 = plStack_f78;
  puStack_fa8 = &UNK_0f4e3cf0;
  if (plStack_f78 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f78 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_f78 + 0x10))(plStack_f78);
      FUN_0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_f38;
  puStack_f68 = &UNK_0f4e3cf0;
  if (plStack_f38 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_f38 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_f38 + 0x10))(plStack_f38);
      FUN_0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_ef8;
  puStack_f28 = &UNK_0f4e3cf0;
  if (plStack_ef8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_ef8 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_ef8 + 0x10))(plStack_ef8);
      FUN_0412c2d0(plVar18);
    }
  }
  plVar18 = plStack_eb8;
  puStack_ee8 = &UNK_0f4e3cf0;
  if (plStack_eb8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_eb8 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_eb8 + 0x10))(plStack_eb8);
      FUN_0412c2d0(plVar18);
    }
  }
  puStack_1168 = &UNK_0f4b40b0;
  puStack_1148 = &UNK_0f4e3c70;
  if ((uStack_10e8 & 1) != 0) {
    func_0x0412a280(uStack_10d8,uStack_10e8 & 0xfffffffffffffffe);
  }
  plVar18 = plStack_10f8;
  if (plStack_10f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_10f8 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_10f8 + 0x10))(plStack_10f8);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(auStack_1128);
  puStack_ea8 = &UNK_0f4e3c70;
  if ((uStack_e48 & 1) != 0) {
    func_0x0412a280(uStack_e38,uStack_e48 & 0xfffffffffffffffe);
  }
  plVar18 = plStack_e58;
  if (plStack_e58 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_e58 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_e58 + 0x10))(plStack_e58);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(auStack_e88);
  puStack_10c8 = &UNK_0f4b4130;
  puStack_10a8 = &UNK_0f4e3c70;
  if ((uStack_1048 & 1) != 0) {
    func_0x0412a280(uStack_1038,uStack_1048 & 0xfffffffffffffffe);
  }
  plVar18 = plStack_1058;
  if (plStack_1058 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1058 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_1058 + 0x10))(plStack_1058);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(auStack_1088);
  puStack_e28 = &UNK_0f4e3c70;
  if ((uStack_dc8 & 1) != 0) {
    func_0x0412a280(uStack_db8,uStack_dc8 & 0xfffffffffffffffe);
  }
  plVar18 = plStack_dd8;
  if (plStack_dd8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_dd8 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plStack_dd8 + 0x10))(plStack_dd8);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(auStack_e08);
  puStack_1270 = &UNK_0f4e3c70;
  if ((auStack_1218[8] & 1) != 0) {
    func_0x0412a280(uStack_1200,auStack_1218._8_8_ & 0xfffffffffffffffe);
  }
  plVar18 = uStack_1220;
  if (uStack_1220 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1220 + 1;
    lVar26 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*uStack_1220 + 0x10))(uStack_1220);
      FUN_0412c2d0(plVar18);
    }
  }
  FUN_04167a40(&uStack_1250);
LAB_0e2c1dd5:
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
