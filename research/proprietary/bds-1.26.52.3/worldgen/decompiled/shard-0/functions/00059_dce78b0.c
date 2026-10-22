/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdde78b0 (ELF vaddr 0xdce78b0)
 * Label: caller-of-callee
 * Body:  [[0dde78b0, 0ddeb185] [0ddeb190, 0ddeb5d9]]
 * Ghidra: FUN_0dde78b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dde78b0(long *param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  long *plStack_dd0;
  undefined *puStack_dc8;
  long *plStack_dc0;
  long *plStack_db8;
  undefined8 uStack_db0;
  undefined *puStack_da8;
  undefined1 uStack_da0;
  undefined7 uStack_d9f;
  undefined1 uStack_d98;
  undefined7 uStack_d97;
  undefined1 uStack_d90;
  undefined7 uStack_d8f;
  undefined4 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined *puStack_cf0;
  undefined8 uStack_ce8;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  long lStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined4 uStack_c88;
  undefined4 uStack_c84;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  long *plStack_c70;
  undefined8 uStack_c68;
  ulong uStack_c60;
  undefined4 *puStack_c58;
  undefined *puStack_c48;
  undefined4 uStack_c40;
  undefined4 uStack_c3c;
  undefined4 uStack_c38;
  undefined4 uStack_c34;
  undefined1 uStack_c30;
  undefined1 auStack_c28 [8];
  undefined1 auStack_c20 [4];
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 uStack_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  undefined4 uStack_c00;
  undefined4 uStack_bfc;
  undefined4 uStack_bf8;
  undefined4 uStack_bf4;
  long lStack_bf0;
  uint uStack_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  long lStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  long *plStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined1 *puStack_b98;
  undefined *puStack_b90;
  undefined *puStack_b88;
  undefined *puStack_b80;
  undefined4 uStack_b78;
  undefined8 uStack_b70;
  long *plStack_b68;
  long *plStack_b58;
  byte bStack_b50;
  undefined6 uStack_b4f;
  undefined1 uStack_b49;
  undefined1 uStack_b48;
  undefined6 uStack_b47;
  undefined1 uStack_b41;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  int iStack_b10;
  undefined4 uStack_b0c;
  char cStack_b08;
  uint uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  undefined8 uStack_ae8;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined8 uStack_ac8;
  undefined8 uStack_ab8;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined8 uStack_a60;
  byte bStack_a58;
  undefined7 uStack_a57;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  int iStack_a10;
  undefined4 uStack_a0c;
  undefined8 uStack_a08;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  int iStack_950;
  undefined4 uStack_94c;
  undefined1 uStack_948;
  undefined7 uStack_947;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  int iStack_910;
  undefined4 uStack_90c;
  char cStack_908;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  int iStack_8d0;
  undefined4 uStack_8cc;
  undefined8 uStack_8c8;
  undefined *puStack_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined1 uStack_8a0;
  undefined1 auStack_898 [8];
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined8 uStack_860;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  int iStack_810;
  undefined4 uStack_80c;
  undefined1 uStack_808;
  undefined *puStack_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined1 uStack_7e0;
  undefined1 auStack_7d8 [8];
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined8 uStack_7a0;
  uint uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  int iStack_710;
  undefined4 uStack_70c;
  undefined8 uStack_708;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  int iStack_6d0;
  undefined4 uStack_6cc;
  char cStack_6c8;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined1 uStack_6a0;
  undefined *puStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined1 uStack_680;
  undefined1 auStack_678 [8];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined *puStack_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined1 uStack_600;
  undefined1 auStack_5f8 [8];
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  int iStack_570;
  undefined4 uStack_56c;
  undefined1 uStack_568;
  undefined *puStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined1 uStack_540;
  undefined1 auStack_538 [40];
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  long lStack_500;
  uint uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  long lStack_4e8;
  long lStack_4e0;
  undefined *puStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 uStack_4c0;
  undefined1 auStack_4b8 [40];
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  long lStack_480;
  uint uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  long lStack_468;
  long lStack_460;
  undefined *puStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined1 uStack_440;
  undefined1 auStack_438 [8];
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  long lStack_400;
  uint uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  long lStack_3e8;
  long lStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined *puStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined1 uStack_380;
  undefined1 auStack_378 [8];
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long lStack_340;
  uint uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 auStack_278 [8];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  uint uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [40];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  char cStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x0eb67df0();
  func_0x0d928ca0(&puStack_c48);
  if ((DAT_0f73e520 == '\0') && (iVar5 = func_0x04108328(&DAT_0f73e520), iVar5 != 0)) {
    func_0x0de543c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73e4a0,0xf53dab8);
    func_0x0410844d(&DAT_0f73e520);
  }
  plStack_dd0 = param_1 + 3;
  plVar7 = (long *)(param_1[3] +
                   (ulong)((int)((ulong)(param_1[4] - param_1[3]) >> 3) - 1U &
                          *(uint *)(_DAT_0f73e4a0 + 4)) * 8);
  do {
    lVar9 = *plVar7;
    if (lVar9 == -1) goto LAB_0dde7940;
    plVar7 = (long *)(param_1[6] + lVar9 * 0x18);
  } while (*(uint *)(param_1[6] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f73e4a0 + 4));
  if (plVar7 == (long *)param_1[7]) {
LAB_0dde7940:
    puVar6 = &DAT_0f73e4a0;
    if (iRam000000000f73e500 != -0x2b3da790) goto LAB_0dde7998;
LAB_0dde796b:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_0dde7998;
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    puVar6 = (undefined *)(lVar9 + 9);
    if (bVar19) {
      puVar6 = *(undefined **)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0dde796b;
LAB_0dde7998:
    puVar6 = &UNK_0131f2ad;
    uVar16 = 0x12;
  }
  func_0x0de549b0(&uStack_ab8,param_1,puVar6,uVar16);
  if ((char)uStack_a88 == '\0') {
    func_0x0de54fa0(&puStack_dc8,uStack_ab8 + 0x18);
    if (uStack_db0._4_4_ == 2) {
      piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_db0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_dc0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
LAB_0dde7a7a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_db0._4_4_ == 1) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0dde7a7a;
      }
      if (uStack_db0._4_4_ == 0) {
        *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
      }
    }
    func_0x0de55560(&puStack_dc8,&uStack_ab8,&UNK_0133d2bf);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef44b00;
    if (uStack_db0 != (long *)0x0) {
      lVar9 = *uStack_db0;
      uStack_db0 = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = uStack_db0;
    }
    uStack_db0 = plVar7;
    puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
    uStack_ce8 = 0;
    uStack_ce0 = 0;
    lStack_cd8 = 1;
    uStack_cd0 = 0;
    uStack_cc8 = &UNK_048b3f30;
    uStack_cc0 = &SUB_048b06d0;
    uStack_cb8 = &SUB_048b2190;
    uStack_cb0 = &UNK_0de55a70;
    uStack_ca8 = &UNK_0de55c30;
    uStack_ca0 = 0;
    uStack_c98 = 0;
    uStack_c90 = (long *)0x0;
    func_0x048b05a0(plStack_dc0,&puStack_cf0);
    plVar7 = uStack_c90;
    if (uStack_c90 != (long *)0x0) {
      LOCK();
      plVar8 = uStack_c90 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0de55770(&puStack_dc8);
    uStack_8c8 = CONCAT71(uStack_8c8._1_7_,(char)uStack_a88);
    uStack_8d8 = (int)uStack_a98;
    uStack_8d4 = uStack_a98._4_4_;
    iStack_8d0 = (int)uStack_a90;
    uStack_8cc = uStack_a90._4_4_;
    uStack_8e8 = (undefined4)uStack_aa8;
    uStack_8e4 = uStack_aa8._4_4_;
    uStack_8e0 = (undefined4)uStack_aa0;
    uStack_8dc = uStack_aa0._4_4_;
    uStack_8f8 = (undefined4)uStack_ab8;
    uStack_8f4 = uStack_ab8._4_4_;
    uStack_8f0 = uStack_ab0;
    uStack_8ec = uStack_aac;
    FUN_048b0bc0(&uStack_db0);
    uStack_390 = uStack_c40;
    uStack_38c = uStack_c3c;
    uStack_388 = uStack_c38;
    uStack_384 = uStack_c34;
    uStack_380 = uStack_c30;
    puStack_398 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_378,auStack_c28);
    uStack_370 = auStack_c20;
    uStack_36c = uStack_c1c;
    uStack_368 = uStack_c18;
    uStack_364 = uStack_c14;
    uStack_360 = uStack_c10;
    uStack_35c = uStack_c0c;
    uStack_358 = uStack_c08;
    uStack_354 = uStack_c04;
    uStack_350 = uStack_c00;
    uStack_34c = uStack_bfc;
    uStack_348 = uStack_bf8;
    uStack_344 = uStack_bf4;
    if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
      LOCK();
      plVar7 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
      *plVar7 = *plVar7 + 1;
      UNLOCK();
    }
    lStack_340 = lStack_bf0;
    if ((uStack_be8 & 1) == 0) {
      lStack_328 = lStack_bd8;
      uStack_338 = uStack_be8;
      uStack_334 = uStack_be4;
      uStack_330 = uStack_be0;
      uStack_32c = uStack_bdc;
    }
    else {
      FUN_0412e5e0(&uStack_338,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
    }
    lStack_320 = lStack_bd0;
    func_0x0ddeba00(&uStack_978,&uStack_8f8,&puStack_398);
    uStack_a08 = CONCAT71(uStack_947,uStack_948);
    uStack_a18 = uStack_958;
    uStack_a14 = uStack_954;
    iStack_a10 = iStack_950;
    uStack_a0c = uStack_94c;
    uStack_a28 = uStack_968;
    uStack_a24 = uStack_964;
    uStack_a20 = uStack_960;
    uStack_a1c = uStack_95c;
    uStack_a38 = uStack_978;
    uStack_a34 = uStack_974;
    uStack_a30 = uStack_970;
    uStack_a2c = uStack_96c;
    func_0x0de54fa0(&puStack_dc8,CONCAT44(uStack_974,uStack_978) + 0x18);
    if (uStack_db0._4_4_ == 2) {
      piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_db0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_dc0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
LAB_0dde7e0a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_db0._4_4_ == 1) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0dde7e0a;
      }
      if (uStack_db0._4_4_ == 0) {
        *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
      }
    }
    func_0x0de55560(&puStack_dc8,&uStack_a38,&UNK_01444400);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef44b00;
    if (uStack_db0 != (long *)0x0) {
      lVar9 = *uStack_db0;
      uStack_db0 = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = uStack_db0;
    }
    uStack_db0 = plVar7;
    puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
    uStack_ce8 = 0;
    uStack_ce0 = 0;
    lStack_cd8 = 1;
    uStack_cd0 = 0;
    uStack_cc8 = &UNK_048b3f30;
    uStack_cc0 = &SUB_048b06d0;
    uStack_cb8 = &SUB_048b2190;
    uStack_cb0 = &UNK_0de55e00;
    uStack_ca8 = &UNK_0de55fd0;
    uStack_ca0 = 0;
    uStack_c98 = 0;
    uStack_c90 = (long *)0x0;
    func_0x048b05a0(plStack_dc0,&puStack_cf0);
    plVar7 = uStack_c90;
    if (uStack_c90 != (long *)0x0) {
      LOCK();
      plVar8 = uStack_c90 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0de55770(&puStack_dc8);
    cStack_908 = (char)uStack_a08;
    uStack_918 = uStack_a18;
    uStack_914 = uStack_a14;
    iStack_910 = iStack_a10;
    uStack_90c = uStack_a0c;
    uStack_928 = uStack_a28;
    uStack_924 = uStack_a24;
    uStack_920 = uStack_a20;
    uStack_91c = uStack_a1c;
    uStack_938 = uStack_a38;
    uStack_934 = uStack_a34;
    uStack_930 = uStack_a30;
    uStack_92c = uStack_a2c;
    FUN_048b0bc0(&uStack_db0);
    uStack_550 = uStack_c40;
    uStack_54c = uStack_c3c;
    uStack_548 = uStack_c38;
    uStack_544 = uStack_c34;
    uStack_540 = uStack_c30;
    puStack_558 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_538,auStack_c28);
    uStack_510 = uStack_c00;
    uStack_50c = uStack_bfc;
    uStack_508 = uStack_bf8;
    uStack_504 = uStack_bf4;
    if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
      LOCK();
      plVar7 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
      *plVar7 = *plVar7 + 1;
      UNLOCK();
    }
    lStack_500 = lStack_bf0;
    if ((uStack_be8 & 1) == 0) {
      lStack_4e8 = lStack_bd8;
      uStack_4f8 = uStack_be8;
      uStack_4f4 = uStack_be4;
      uStack_4f0 = uStack_be0;
      uStack_4ec = uStack_bdc;
    }
    else {
      FUN_0412e5e0(&uStack_4f8,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
    }
    lStack_4e0 = lStack_bd0;
    func_0x0ddeba00(&uStack_6f8,&uStack_938,&puStack_558);
    cStack_b08 = cStack_6c8;
    uStack_b18 = uStack_6d8;
    uStack_b14 = uStack_6d4;
    iStack_b10 = iStack_6d0;
    uStack_b0c = uStack_6cc;
    uStack_b28 = uStack_6e8;
    uStack_b24 = uStack_6e4;
    uStack_b20 = uStack_6e0;
    uStack_b1c = uStack_6dc;
    uStack_b38 = CONCAT44(uStack_6f4,uStack_6f8);
    uStack_b30 = (long *)CONCAT44(uStack_6ec,uStack_6f0);
    func_0x0de54fa0(&puStack_dc8,uStack_b38 + 0x18);
    if (uStack_db0._4_4_ == 2) {
      piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_db0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar7 = *(long **)(piVar10 + 0xc);
      while (plVar7 != plStack_dc0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar7 = *(long **)(piVar10 + 0xc);
      }
LAB_0dde8192:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_db0._4_4_ == 1) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_0dde8192;
      }
      if (uStack_db0._4_4_ == 0) {
        *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
      }
    }
    func_0x0de55560(&puStack_dc8,&uStack_b38,&UNK_01491a16);
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar7 = (long)&UNK_0ef44b00;
    if (uStack_db0 != (long *)0x0) {
      lVar9 = *uStack_db0;
      uStack_db0 = plVar7;
      (**(code **)(lVar9 + 8))();
      plVar7 = uStack_db0;
    }
    uStack_db0 = plVar7;
    puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
    uStack_ce8 = 0;
    uStack_ce0 = 0;
    lStack_cd8 = 1;
    uStack_cd0 = 0;
    uStack_cc8 = &UNK_048b3f30;
    uStack_cc0 = &SUB_048b06d0;
    uStack_cb8 = &SUB_048b2190;
    uStack_cb0 = &UNK_0de561b0;
    uStack_ca8 = &UNK_0de56380;
    uStack_ca0 = 0;
    uStack_c98 = 0;
    uStack_c90 = (long *)0x0;
    func_0x048b05a0(plStack_dc0,&puStack_cf0);
    plVar7 = uStack_c90;
    if (uStack_c90 != (long *)0x0) {
      LOCK();
      plVar8 = uStack_c90 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x0de55770(&puStack_dc8);
    puStack_b98 = (undefined1 *)CONCAT71(puStack_b98._1_7_,cStack_b08);
    uStack_ba8 = CONCAT44(uStack_b14,uStack_b18);
    uStack_ba0 = (undefined *)CONCAT44(uStack_b0c,iStack_b10);
    uStack_bb8 = CONCAT44(uStack_b24,uStack_b28);
    uStack_bb0 = CONCAT44(uStack_b1c,uStack_b20);
    uStack_bc8 = uStack_b38;
    plStack_bc0 = uStack_b30;
    FUN_048b0bc0(&uStack_db0);
    uStack_210 = uStack_c40;
    uStack_20c = uStack_c3c;
    uStack_208 = uStack_c38;
    uStack_204 = uStack_c34;
    uStack_200 = uStack_c30;
    puStack_218 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_1f8,auStack_c28);
    uStack_1d0 = uStack_c00;
    uStack_1cc = uStack_bfc;
    uStack_1c8 = uStack_bf8;
    uStack_1c4 = uStack_bf4;
    if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
      LOCK();
      plVar7 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
      *plVar7 = *plVar7 + 1;
      UNLOCK();
    }
    lStack_1c0 = lStack_bf0;
    if ((uStack_be8 & 1) == 0) {
      lStack_1a8 = lStack_bd8;
      uStack_1b8 = uStack_be8;
      uStack_1b4 = uStack_be4;
      uStack_1b0 = uStack_be0;
      uStack_1ac = uStack_bdc;
    }
    else {
      FUN_0412e5e0(&uStack_1b8,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
    }
    lStack_1a0 = lStack_bd0;
    func_0x0ddeba00(&uStack_9f8,&uStack_bc8,&puStack_218);
    puStack_218 = &UNK_0f4e3c70;
    if ((uStack_1b8 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_1a8,CONCAT44(uStack_1b4,uStack_1b8) & 0xfffffffffffffffe);
    }
    plVar7 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x04167a40(auStack_1f8);
    puStack_558 = &UNK_0f4e3c70;
    if ((uStack_4f8 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_4e8,CONCAT44(uStack_4f4,uStack_4f8) & 0xfffffffffffffffe);
    }
    plVar7 = (long *)CONCAT44(uStack_504,uStack_508);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x04167a40(auStack_538);
    puStack_398 = &UNK_0f4e3c70;
    if ((uStack_338 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_328,CONCAT44(uStack_334,uStack_338) & 0xfffffffffffffffe);
    }
    plVar7 = (long *)CONCAT44(uStack_344,uStack_348);
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      lVar9 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
      }
    }
    func_0x04167a40(auStack_378);
  }
  if ((DAT_0f73e5d8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f73e5d8), iVar5 != 0)) {
    func_0x0de56620();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f73e558,0xf53dab8);
    func_0x0410844d(&DAT_0f73e5d8);
  }
  plVar7 = (long *)(param_1[3] +
                   (ulong)((int)((ulong)(param_1[4] - param_1[3]) >> 3) - 1U &
                          *(uint *)(_DAT_0f73e558 + 4)) * 8);
  do {
    lVar9 = *plVar7;
    if (lVar9 == -1) goto LAB_0dde85b0;
    plVar7 = (long *)(param_1[6] + lVar9 * 0x18);
  } while (*(uint *)(param_1[6] + 8 + lVar9 * 0x18) != *(uint *)(_DAT_0f73e558 + 4));
  if (plVar7 == (long *)param_1[7]) {
LAB_0dde85b0:
    puVar6 = &DAT_0f73e558;
    if (iRam000000000f73e5b8 != -0x2b3da790) goto LAB_0dde8958;
LAB_0dde85e2:
    lVar9 = *(long *)(puVar6 + 0x68);
    if (lVar9 == 0) goto LAB_0dde8958;
    bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
    lVar17 = lVar9 + 9;
    if (bVar19) {
      lVar17 = *(long *)(lVar9 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
    if (bVar19) {
      uVar16 = *(ulong *)(lVar9 + 0x10);
    }
    func_0x0de56ae0(&uStack_b38,param_1,lVar17,uVar16);
    if (cStack_b08 == '\0') goto LAB_0dde8627;
LAB_0dde8982:
    lVar9 = func_0x0cd0ad70(plStack_dd0);
    iVar5 = *(int *)(lVar9 + 0x60);
joined_r0x0ddea84d:
    if ((iVar5 == -0x2b3da790) && (lVar9 = *(long *)(lVar9 + 0x68), lVar9 != 0)) {
      bVar19 = (*(byte *)(lVar9 + 8) & 1) != 0;
      lVar17 = lVar9 + 9;
      if (bVar19) {
        lVar17 = *(long *)(lVar9 + 0x18);
      }
      uVar16 = (ulong)(*(byte *)(lVar9 + 8) >> 1);
      if (bVar19) {
        uVar16 = *(ulong *)(lVar9 + 0x10);
      }
      func_0x0de5c7d0(&puStack_cf0,param_1,lVar17,uVar16);
      uStack_310 = uStack_c40;
      uStack_30c = uStack_c3c;
      uStack_308 = uStack_c38;
      uStack_304 = uStack_c34;
      uStack_300 = uStack_c30;
    }
    else {
      func_0x0de5c7d0(&puStack_cf0,param_1,&UNK_014b4cc9,8);
      uStack_310 = uStack_c40;
      uStack_30c = uStack_c3c;
      uStack_308 = uStack_c38;
      uStack_304 = uStack_c34;
      uStack_300 = uStack_c30;
    }
    if ((char)uStack_cc0 != '\0') goto LAB_0ddeb23e;
    puStack_318 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_2f8,auStack_c28);
    uStack_2f0 = auStack_c20;
    uStack_2ec = uStack_c1c;
    uStack_2e8 = uStack_c18;
    uStack_2e4 = uStack_c14;
    uStack_2e0 = uStack_c10;
    uStack_2dc = uStack_c0c;
    uStack_2d8 = uStack_c08;
    uStack_2d4 = uStack_c04;
    uStack_2d0 = CONCAT44(uStack_bfc,uStack_c00);
    uStack_2c8 = CONCAT44(uStack_bf4,uStack_bf8);
    if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
      LOCK();
      plVar7 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
      *plVar7 = *plVar7 + 1;
      UNLOCK();
    }
    lStack_2c0 = lStack_bf0;
    if ((uStack_be8 & 1) == 0) {
      lStack_2a8 = lStack_bd8;
      uStack_2b8 = CONCAT44(uStack_be4,uStack_be8);
      uStack_2b0 = CONCAT44(uStack_bdc,uStack_be0);
    }
    else {
      FUN_0412e5e0(&uStack_2b8,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
    }
    lStack_2a0 = lStack_bd0;
    param_1 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (param_1 == (long *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    *(undefined1 *)(param_1 + 3) = uStack_300;
    *(undefined4 *)(param_1 + 1) = uStack_310;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_30c;
    *(undefined4 *)(param_1 + 2) = uStack_308;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_304;
    *param_1 = (long)&UNK_0f4e3c70;
    func_0x04167a20(param_1 + 4,auStack_2f8);
    param_1[5] = CONCAT44(uStack_2ec,uStack_2f0);
    param_1[6] = CONCAT44(uStack_2e4,uStack_2e8);
    param_1[7] = CONCAT44(uStack_2dc,uStack_2e0);
    param_1[8] = CONCAT44(uStack_2d4,uStack_2d8);
    param_1[9] = uStack_2d0;
    param_1[10] = uStack_2c8;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    param_1[0xb] = lStack_2c0;
    param_1[0xe] = lStack_2a8;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_2b8;
    *(undefined4 *)((long)param_1 + 100) = uStack_2b8._4_4_;
    *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_2b0;
    *(undefined4 *)((long)param_1 + 0x6c) = uStack_2b0._4_4_;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    lStack_2a8 = 0;
    param_1[0xf] = lStack_2a0;
    plStack_dd0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_dd0 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    plStack_dd0[1] = -1;
    plStack_dd0[2] = 0;
    *(undefined1 *)(plStack_dd0 + 3) = 0xff;
    *plStack_dd0 = (long)&UNK_0f49ff98;
    puStack_318 = &UNK_0f4e3c70;
    func_0x04167a40(auStack_2f8);
    bVar3 = DAT_0f55a0d0;
    uVar16 = _DAT_0f55a0d8;
    if ((DAT_0f55a0d0 & 1) == 0) {
      uVar16 = (ulong)(DAT_0f55a0d0 >> 1);
    }
    plVar7 = (long *)(uVar16 + 0xf0);
    if ((long *)0xfffffffffffffff7 < plVar7) goto LAB_0ddeb4e0;
    if (plVar7 < (long *)0x17) {
      plStack_bc0 = (long *)0x0;
      uStack_bb8 = 0;
      uStack_bc8 = (ulong)(byte)((char)plVar7 * '\x02');
    }
    else {
      uVar18 = 0x1a;
      if (((ulong)plVar7 | 7) != 0x17) {
        uVar18 = ((ulong)plVar7 | 7) + 1;
      }
      uVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
      if (uVar11 == 0) {
        func_0x0eec74c0(uVar18,0);
      }
      uStack_bc8 = uVar18 | 1;
      plStack_bc0 = plVar7;
      uStack_bb8 = uVar11;
    }
    lVar9 = (long)&uStack_ad8 + 1;
    uVar18 = (long)&uStack_bc8 + 1;
    if ((uStack_bc8 & 1) != 0) {
      lVar9 = uStack_bb8 + 0xf0;
      uVar18 = uStack_bb8;
    }
    func_0x0eee2f00(uVar18,&UNK_0128274b,0xf0);
    if (uVar16 != 0) {
      uVar13 = _DAT_0f55a0e0;
      if ((bVar3 & 1) == 0) {
        uVar13 = 0xf55a0d1;
      }
      func_0x0eee2ee0(lVar9,uVar13,uVar16);
    }
    *(undefined1 *)(lVar9 + uVar16) = 0;
    uStack_aa8 = CONCAT44(uStack_cdc,uStack_ce0);
    uStack_a98 = uStack_cd0;
    uStack_a88 = uStack_cc0;
    uStack_aa0 = lStack_cd8;
    uStack_ab8 = puStack_cf0;
    uStack_ab0 = (undefined4)uStack_ce8;
    uStack_aac = uStack_ce8._4_4_;
    uStack_a90 = 0x1e1bc4d500000004;
    if (DAT_0f703a28 == '\0') goto LAB_0ddeb4e5;
  }
  else {
    puVar6 = (undefined *)plVar7[2];
    if (*(int *)(puVar6 + 0x60) == -0x2b3da790) goto LAB_0dde85e2;
LAB_0dde8958:
    func_0x0de56ae0(&uStack_b38,param_1,&UNK_012d14bc,0x11);
    if (cStack_b08 != '\0') goto LAB_0dde8982;
LAB_0dde8627:
    plStack_db8 = (long *)0x0;
    uStack_db0 = (long *)CONCAT71(uStack_db0._1_7_,0xff);
    puStack_dc8 = &UNK_0f4e3cf0;
    puStack_da8 = (undefined *)0x0;
    uStack_da0 = 0;
    uStack_d9f = 0;
    uStack_d98 = 0;
    uStack_d97 = 0;
    uStack_d90 = 0;
    plStack_dc0 = (long *)0x40;
    uStack_3d0 = 0x40;
    uStack_3c8 = 0;
    uStack_3c0 = 0xff;
    puStack_3d8 = &UNK_0f4e3cf0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a8 = 0;
    uStack_3a7 = 0;
    uStack_3a0 = 0;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar7 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    *(undefined1 *)(plVar7 + 3) = (undefined1)uStack_db0;
    plVar7[1] = (long)plStack_dc0;
    plVar7[2] = (long)plStack_db8;
    *plVar7 = (long)&UNK_0f4e3cf0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3a8 = 0;
    uStack_3a7 = 0;
    *(undefined1 *)(plVar7 + 7) = 0;
    puStack_3d8 = &UNK_0f4e3cf0;
    func_0x0de576e0(&puStack_dc8,&uStack_b38,&UNK_013762e9,10,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0ef44b00;
    if (uStack_db0 != (long *)0x0) {
      lVar9 = *uStack_db0;
      uStack_db0 = plVar8;
      (**(code **)(lVar9 + 8))();
      plVar8 = uStack_db0;
    }
    uStack_db0 = plVar8;
    puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
    uStack_ce8 = 0;
    uStack_ce0 = 0;
    lStack_cd8 = 1;
    uStack_cd0 = 0;
    uStack_cc8 = &UNK_048b3f30;
    uStack_cc0 = &SUB_048b06d0;
    uStack_cb8 = &SUB_048b2190;
    uStack_cb0 = &UNK_0de57ca0;
    uStack_ca8 = &UNK_0de57e60;
    uStack_ca0 = 0;
    uStack_c98 = 0;
    uStack_c90 = (long *)0x0;
    func_0x048b05a0(plStack_dc0,&puStack_cf0);
    plVar8 = uStack_c90;
    if (uStack_c90 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_c90 + 1;
      lVar9 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0de579a0(&puStack_dc8);
    cStack_168 = cStack_b08;
    uStack_178 = uStack_b18;
    uStack_174 = uStack_b14;
    iStack_170 = iStack_b10;
    uStack_16c = uStack_b0c;
    uStack_188 = uStack_b28;
    uStack_184 = uStack_b24;
    uStack_180 = uStack_b20;
    uStack_17c = uStack_b1c;
    uStack_198 = (undefined4)uStack_b38;
    uStack_194 = uStack_b38._4_4_;
    uStack_190 = (undefined4)uStack_b30;
    uStack_18c = uStack_b30._4_4_;
    FUN_048b0bc0(&uStack_db0);
    uStack_450 = uStack_c40;
    uStack_44c = uStack_c3c;
    uStack_448 = uStack_c38;
    uStack_444 = uStack_c34;
    uStack_440 = uStack_c30;
    puStack_458 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_438,auStack_c28);
    uStack_430 = auStack_c20;
    uStack_42c = uStack_c1c;
    uStack_428 = uStack_c18;
    uStack_424 = uStack_c14;
    uStack_420 = uStack_c10;
    uStack_41c = uStack_c0c;
    uStack_418 = uStack_c08;
    uStack_414 = uStack_c04;
    uStack_410 = uStack_c00;
    uStack_40c = uStack_bfc;
    uStack_408 = uStack_bf8;
    uStack_404 = uStack_bf4;
    if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
      LOCK();
      plVar8 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
      *plVar8 = *plVar8 + 1;
      UNLOCK();
    }
    lStack_400 = lStack_bf0;
    plStack_c70 = plVar7;
    if ((uStack_be8 & 1) == 0) {
      lStack_3e8 = lStack_bd8;
      uStack_3f8 = uStack_be8;
      uStack_3f4 = uStack_be4;
      uStack_3f0 = uStack_be0;
      uStack_3ec = uStack_bdc;
    }
    else {
      FUN_0412e5e0(&uStack_3f8,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
    }
    lStack_3e0 = lStack_bd0;
    func_0x0ddebe20(&uStack_d8,&uStack_198,&puStack_458);
    bVar3 = DAT_0f55a0d0;
    uVar16 = _DAT_0f55a0d8;
    if ((DAT_0f55a0d0 & 1) == 0) {
      uVar16 = (ulong)(DAT_0f55a0d0 >> 1);
    }
    uVar18 = uVar16 + 0x48;
    if (uVar18 < 0xfffffffffffffff8) {
      if (uVar18 < 0x17) {
        uStack_c60 = 0;
        puStack_c58 = (undefined4 *)0x0;
        uStack_c68 = (ulong)(byte)((char)uVar18 * '\x02');
      }
      else {
        uVar11 = 0x1a;
        if ((uVar18 | 7) != 0x17) {
          uVar11 = (uVar18 | 7) + 1;
        }
        puStack_c58 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
        if (puStack_c58 == (undefined4 *)0x0) {
          func_0x0eec74c0(uVar11,0);
        }
        uStack_c68 = uVar11 | 1;
        uStack_c60 = uVar18;
      }
      puVar2 = puStack_c58 + 0x12;
      bVar19 = (uStack_c68 & 1) != 0;
      puVar15 = (undefined4 *)((long)&uStack_c68 + 1);
      if (bVar19) {
        puVar15 = puStack_c58;
      }
      *(undefined8 *)(puVar15 + 0xc) = _DAT_01352a09;
      *(undefined8 *)(puVar15 + 0xe) = _UNK_01352a11;
      *(undefined8 *)(puVar15 + 8) = _DAT_013529f9;
      *(undefined8 *)(puVar15 + 10) = _UNK_01352a01;
      *(undefined8 *)(puVar15 + 4) = _DAT_013529e9;
      *(undefined8 *)(puVar15 + 6) = _UNK_013529f1;
      *puVar15 = _DAT_013529d9;
      puVar15[1] = _UNK_013529dd;
      puVar15[2] = _UNK_013529e1;
      puVar15[3] = _UNK_013529e5;
      *(undefined8 *)(puVar15 + 0x10) = 0x202e6b636f6c6220;
      puVar15 = (undefined4 *)(auStack_c20 + 1);
      if (bVar19) {
        puVar15 = puVar2;
      }
      if (uVar16 != 0) {
        uVar13 = _DAT_0f55a0e0;
        if ((bVar3 & 1) == 0) {
          uVar13 = 0xf55a0d1;
        }
        func_0x0eee2ee0(puVar15,uVar13,uVar16);
      }
      *(undefined1 *)((long)puVar15 + uVar16) = 0;
      uStack_748 = uStack_a8;
      uStack_758 = uStack_b8;
      uStack_754 = uStack_b4;
      uStack_750 = uStack_b0;
      uStack_74c = uStack_ac;
      uStack_768 = uStack_c8;
      uStack_764 = uStack_c4;
      uStack_760 = uStack_c0;
      uStack_75c = uStack_bc;
      uStack_778 = uStack_d8;
      uStack_774 = uStack_d4;
      uStack_770 = uStack_d0;
      uStack_76c = uStack_cc;
      func_0x0de570d0(&puStack_dc8,CONCAT44(uStack_d4,uStack_d8) + 0x18);
      if (uStack_db0._4_4_ == 2) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        plVar7 = *(long **)(piVar10 + 0xc);
        while (plVar7 != plStack_dc0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          plVar7 = *(long **)(piVar10 + 0xc);
        }
LAB_0dde8c2a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_db0._4_4_ == 1) {
          piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_db0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_0dde8c2a;
        }
        if (uStack_db0._4_4_ == 0) {
          *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
        }
      }
      func_0x0de576e0(&puStack_dc8,&uStack_778,&UNK_0140a58e,7,0x10);
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar7 = (long)&UNK_0ef44b00;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar7;
        (**(code **)(lVar9 + 8))();
        plVar7 = uStack_db0;
      }
      uStack_db0 = plVar7;
      puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
      uStack_ce8 = 0;
      uStack_ce0 = 0;
      lStack_cd8 = 1;
      uStack_cd0 = 0;
      uStack_cc8 = &UNK_048b3f30;
      uStack_cc0 = &SUB_048b06d0;
      uStack_cb8 = &SUB_048b2190;
      uStack_cb0 = &UNK_0de58300;
      uStack_ca8 = &UNK_0de584d0;
      uStack_ca0 = 0;
      uStack_c98 = 0;
      uStack_c90 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&puStack_cf0);
      plVar7 = uStack_c90;
      if (uStack_c90 != (long *)0x0) {
        LOCK();
        plVar8 = uStack_c90 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      uStack_128 = (undefined1)uStack_748;
      uStack_138 = uStack_758;
      uStack_134 = uStack_754;
      uStack_130 = uStack_750;
      uStack_12c = uStack_74c;
      uStack_148 = uStack_768;
      uStack_144 = uStack_764;
      uStack_140 = uStack_760;
      uStack_13c = uStack_75c;
      uStack_158 = uStack_778;
      uStack_154 = uStack_774;
      uStack_150 = uStack_770;
      uStack_14c = uStack_76c;
      FUN_048b0bc0(&uStack_db0);
      uStack_4d0 = uStack_c40;
      uStack_4cc = uStack_c3c;
      uStack_4c8 = uStack_c38;
      uStack_4c4 = uStack_c34;
      uStack_4c0 = uStack_c30;
      puStack_4d8 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_4b8,auStack_c28);
      uStack_490 = uStack_c00;
      uStack_48c = uStack_bfc;
      uStack_488 = uStack_bf8;
      uStack_484 = uStack_bf4;
      if (CONCAT44(uStack_bf4,uStack_bf8) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_bf4,uStack_bf8) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      lStack_480 = lStack_bf0;
      if ((uStack_be8 & 1) == 0) {
        lStack_468 = lStack_bd8;
        uStack_478 = uStack_be8;
        uStack_474 = uStack_be4;
        uStack_470 = uStack_be0;
        uStack_46c = uStack_bdc;
      }
      else {
        FUN_0412e5e0(&uStack_478,lStack_bd8,CONCAT44(uStack_bdc,uStack_be0));
      }
      lStack_460 = lStack_bd0;
      func_0x0ddebe20(&uStack_a0,&uStack_158,&puStack_4d8);
      uStack_708 = uStack_70;
      uStack_718 = uStack_80;
      uStack_714 = uStack_7c;
      iStack_710 = iStack_78;
      uStack_70c = uStack_74;
      uStack_728 = uStack_90;
      uStack_724 = uStack_8c;
      uStack_720 = uStack_88;
      uStack_71c = uStack_84;
      uStack_738 = uStack_a0;
      uStack_734 = uStack_9c;
      uStack_730 = uStack_98;
      uStack_72c = uStack_94;
      func_0x0de570d0(&puStack_dc8,CONCAT44(uStack_9c,uStack_a0) + 0x18);
      if (uStack_db0._4_4_ == 2) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        plVar7 = *(long **)(piVar10 + 0xc);
        while (plVar7 != plStack_dc0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          plVar7 = *(long **)(piVar10 + 0xc);
        }
LAB_0dde8f9a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_db0._4_4_ == 1) {
          piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_db0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_0dde8f9a;
        }
        if (uStack_db0._4_4_ == 0) {
          *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
        }
      }
      func_0x0de576e0(&puStack_dc8,&uStack_738,&UNK_012e9013,0xd,0x10);
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar7 = (long)&UNK_0ef44b00;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar7;
        (**(code **)(lVar9 + 8))();
        plVar7 = uStack_db0;
      }
      uStack_db0 = plVar7;
      puStack_cf0 = (undefined *)CONCAT44(puStack_cf0._4_4_,plStack_db8._0_4_);
      uStack_ce8 = 0;
      uStack_ce0 = 0;
      lStack_cd8 = 1;
      uStack_cd0 = 0;
      uStack_cc8 = &UNK_048b3f30;
      uStack_cc0 = &SUB_048b06d0;
      uStack_cb8 = &SUB_048b2190;
      uStack_cb0 = &UNK_0de586b0;
      uStack_ca8 = &UNK_0de58880;
      uStack_ca0 = 0;
      uStack_c98 = 0;
      uStack_c90 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&puStack_cf0);
      plVar7 = uStack_c90;
      if (uStack_c90 != (long *)0x0) {
        LOCK();
        plVar8 = uStack_c90 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*uStack_c90 + 0x10))(uStack_c90);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      uStack_808 = (undefined1)uStack_708;
      uStack_818 = uStack_718;
      uStack_814 = uStack_714;
      iStack_810 = iStack_710;
      uStack_80c = uStack_70c;
      uStack_828 = uStack_728;
      uStack_824 = uStack_724;
      uStack_820 = uStack_720;
      uStack_81c = uStack_71c;
      uStack_838 = uStack_738;
      uStack_834 = uStack_734;
      uStack_830 = uStack_730;
      uStack_82c = uStack_72c;
      FUN_048b0bc0(&uStack_db0);
      func_0x0d928ca0(&puStack_cf0);
      if ((_DAT_0f55a0f0 & 1) == 0) {
        uStack_ac8 = _DAT_0f55a100;
        uStack_ad8 = _DAT_0f55a0f0;
        uStack_ad4 = uRam000000000f55a0f4;
        uStack_ad0 = _DAT_0f55a0f8;
        uStack_acc = uRam000000000f55a0fc;
      }
      else {
        FUN_0412e5e0(&uStack_ad8,_DAT_0f55a100,CONCAT44(uRam000000000f55a0fc,_DAT_0f55a0f8));
      }
      func_0x0ed60210(&puStack_cf0,&uStack_ad8,1);
      lStack_cd8 = CONCAT71(lStack_cd8._1_7_,1);
      uStack_7f0 = (undefined4)uStack_ce8;
      uStack_7ec = uStack_ce8._4_4_;
      uStack_7e8 = uStack_ce0;
      uStack_7e4 = uStack_cdc;
      uStack_7e0 = 1;
      puStack_7f8 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_7d8,&uStack_cd0);
      uStack_7d0 = (undefined4)uStack_cc8;
      uStack_7cc = uStack_cc8._4_4_;
      uStack_7c8 = (undefined4)uStack_cc0;
      uStack_7c4 = uStack_cc0._4_4_;
      uStack_7c0 = (undefined4)uStack_cb8;
      uStack_7bc = uStack_cb8._4_4_;
      uStack_7b8 = (undefined4)uStack_cb0;
      uStack_7b4 = uStack_cb0._4_4_;
      uStack_7b0 = (undefined4)uStack_ca8;
      uStack_7ac = uStack_ca8._4_4_;
      uStack_7a8 = uStack_ca0;
      uStack_7a4 = uStack_c9c;
      if (CONCAT44(uStack_c9c,uStack_ca0) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_c9c,uStack_ca0) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      uStack_7a0 = uStack_c98;
      if (((ulong)uStack_c90 & 1) == 0) {
        uStack_788 = uStack_c80;
        uStack_798 = (uint)uStack_c90;
        uStack_794 = uStack_c90._4_4_;
        uStack_790 = uStack_c88;
        uStack_78c = uStack_c84;
      }
      else {
        FUN_0412e5e0(&uStack_798,uStack_c80,CONCAT44(uStack_c84,uStack_c88));
      }
      uStack_780 = uStack_c78;
      func_0x0d928ca0(&uStack_ab8);
      bStack_b50 = 0x1c;
      uStack_b4f = 0x63656e696d5e;
      uStack_b49 = 0x72;
      uStack_b48 = 0x61;
      uStack_b47 = 0x242a2e3a7466;
      uStack_b41 = 0;
      func_0x0ed60210(&uStack_ab8,&bStack_b50,1);
      uStack_aa0 = CONCAT71(uStack_aa0._1_7_,2);
      uStack_8b0 = uStack_ab0;
      uStack_8ac = uStack_aac;
      uStack_8a8 = (undefined4)uStack_aa8;
      uStack_8a4 = uStack_aa8._4_4_;
      uStack_8a0 = 2;
      puStack_8b8 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_898,&uStack_a98);
      uStack_890 = (int)uStack_a90;
      uStack_88c = uStack_a90._4_4_;
      uStack_888 = (undefined4)uStack_a88;
      uStack_884 = uStack_a88._4_4_;
      uStack_880 = uStack_a80;
      uStack_87c = uStack_a7c;
      uStack_878 = uStack_a78;
      uStack_874 = uStack_a74;
      uStack_870 = uStack_a70;
      uStack_86c = uStack_a6c;
      uStack_868 = uStack_a68;
      uStack_864 = uStack_a64;
      if (CONCAT44(uStack_a64,uStack_a68) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_a64,uStack_a68) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      uStack_860 = uStack_a60;
      if ((bStack_a58 & 1) == 0) {
        uStack_848 = uStack_a48;
        uStack_858 = CONCAT71(uStack_a57,bStack_a58);
        uStack_850 = uStack_a50;
      }
      else {
        FUN_0412e5e0(&uStack_858,uStack_a48,uStack_a50);
      }
      uStack_840 = uStack_a40;
      uStack_6b0 = 0xffffffffffffffff;
      uStack_6a8 = 0;
      uStack_6a0 = 0xff;
      puStack_6b8 = &UNK_0f49fe98;
      uStack_690 = uStack_7f0;
      uStack_68c = uStack_7ec;
      uStack_688 = uStack_7e8;
      uStack_684 = uStack_7e4;
      uStack_680 = uStack_7e0;
      puStack_698 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_678,auStack_7d8);
      uStack_670 = CONCAT44(uStack_7cc,uStack_7d0);
      uStack_668 = CONCAT44(uStack_7c4,uStack_7c8);
      uStack_660 = CONCAT44(uStack_7bc,uStack_7c0);
      uStack_658 = CONCAT44(uStack_7b4,uStack_7b8);
      uStack_650 = CONCAT44(uStack_7ac,uStack_7b0);
      uStack_648 = CONCAT44(uStack_7a4,uStack_7a8);
      if (CONCAT44(uStack_7a4,uStack_7a8) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_7a4,uStack_7a8) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      uStack_640 = uStack_7a0;
      if ((uStack_798 & 1) == 0) {
        uStack_628 = uStack_788;
        uStack_638 = CONCAT44(uStack_794,uStack_798);
        uStack_630 = CONCAT44(uStack_78c,uStack_790);
      }
      else {
        FUN_0412e5e0(&uStack_638,uStack_788,CONCAT44(uStack_78c,uStack_790));
      }
      uStack_620 = uStack_780;
      uStack_610 = uStack_8b0;
      uStack_60c = uStack_8ac;
      uStack_608 = uStack_8a8;
      uStack_604 = uStack_8a4;
      uStack_600 = uStack_8a0;
      puStack_618 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_5f8,auStack_898);
      uStack_5f0 = CONCAT44(uStack_88c,uStack_890);
      uStack_5e8 = CONCAT44(uStack_884,uStack_888);
      uStack_5e0 = CONCAT44(uStack_87c,uStack_880);
      uStack_5d8 = CONCAT44(uStack_874,uStack_878);
      uStack_5d0 = CONCAT44(uStack_86c,uStack_870);
      uStack_5c8 = CONCAT44(uStack_864,uStack_868);
      if (CONCAT44(uStack_864,uStack_868) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_864,uStack_868) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      uStack_5c0 = uStack_860;
      if ((uStack_858 & 1) == 0) {
        uStack_5a8 = uStack_848;
        uStack_5b8 = uStack_858;
        uStack_5b0 = uStack_850;
      }
      else {
        FUN_0412e5e0(&uStack_5b8,uStack_848,uStack_850);
      }
      uStack_5a0 = uStack_840;
      uStack_6a0 = 0xff;
      if (iStack_810 == 4) {
        plStack_b58 = param_1;
        lVar9 = func_0x0de58180(&uStack_838);
        lVar9 = *(long *)(lVar9 + 0x48);
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x120,0);
        }
LAB_0dde9630:
        *(undefined1 *)(puVar12 + 3) = uStack_6a0;
        puVar12[1] = uStack_6b0;
        puVar12[2] = uStack_6a8;
        *puVar12 = &UNK_0f49fe98;
        *(undefined4 *)(puVar12 + 5) = uStack_690;
        *(undefined4 *)((long)puVar12 + 0x2c) = uStack_68c;
        *(undefined4 *)(puVar12 + 6) = uStack_688;
        *(undefined4 *)((long)puVar12 + 0x34) = uStack_684;
        *(undefined1 *)(puVar12 + 7) = uStack_680;
        puVar12[4] = &UNK_0f4e3c70;
        func_0x04167a20(puVar12 + 8,auStack_678);
        puVar12[9] = uStack_670;
        puVar12[10] = uStack_668;
        puVar12[0xb] = uStack_660;
        puVar12[0xc] = uStack_658;
        puVar12[0xd] = uStack_650;
        puVar12[0xe] = uStack_648;
        uStack_650 = 0;
        uStack_648 = 0;
        puVar12[0xf] = uStack_640;
        puVar12[0x12] = uStack_628;
        puVar12[0x10] = uStack_638;
        puVar12[0x11] = uStack_630;
        uStack_638 = 0;
        uStack_630 = 0;
        uStack_628 = 0;
        puVar12[0x13] = uStack_620;
        *(undefined4 *)(puVar12 + 0x15) = uStack_610;
        *(undefined4 *)((long)puVar12 + 0xac) = uStack_60c;
        *(undefined4 *)(puVar12 + 0x16) = uStack_608;
        *(undefined4 *)((long)puVar12 + 0xb4) = uStack_604;
        *(undefined1 *)(puVar12 + 0x17) = uStack_600;
        puVar12[0x14] = &UNK_0f4e3c70;
        func_0x04167a20(puVar12 + 0x18,auStack_5f8);
        param_1 = plStack_b58;
        puVar12[0x19] = uStack_5f0;
        puVar12[0x1a] = uStack_5e8;
        puVar12[0x1b] = uStack_5e0;
        puVar12[0x1c] = uStack_5d8;
        puVar12[0x1d] = uStack_5d0;
        puVar12[0x1e] = uStack_5c8;
        uStack_5d0 = 0;
        uStack_5c8 = 0;
        puVar12[0x1f] = uStack_5c0;
        puVar12[0x22] = uStack_5a8;
        *(undefined4 *)(puVar12 + 0x20) = (undefined4)uStack_5b8;
        *(undefined4 *)((long)puVar12 + 0x104) = uStack_5b8._4_4_;
        *(undefined4 *)(puVar12 + 0x21) = (undefined4)uStack_5b0;
        *(undefined4 *)((long)puVar12 + 0x10c) = uStack_5b0._4_4_;
        uStack_5b8 = 0;
        uStack_5b0 = 0;
        uStack_5a8 = 0;
        puVar12[0x23] = uStack_5a0;
        plVar7 = *(long **)(lVar9 + 8);
        *(undefined8 **)(lVar9 + 8) = puVar12;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x28))();
        }
      }
      else if (iStack_810 == 1) {
        plStack_b58 = param_1;
        lVar9 = func_0x0de58030(&uStack_838);
        lVar9 = *(long *)(lVar9 + 0x58);
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x120);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x120,0);
        }
        goto LAB_0dde9630;
      }
      uStack_568 = uStack_808;
      uStack_578 = uStack_818;
      uStack_574 = uStack_814;
      iStack_570 = iStack_810;
      uStack_56c = uStack_80c;
      uStack_588 = uStack_828;
      uStack_584 = uStack_824;
      uStack_580 = uStack_820;
      uStack_57c = uStack_81c;
      uStack_598 = uStack_838;
      uStack_594 = uStack_834;
      uStack_590 = uStack_830;
      uStack_58c = uStack_82c;
      func_0x0de576e0(&puStack_dc8,&uStack_598,&UNK_0124fb9b,0xd,0);
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar7 = (long)&UNK_0f0123c0;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar7;
        (**(code **)(lVar9 + 8))();
        plVar7 = uStack_db0;
      }
      uStack_db0 = plVar7;
      uStack_9f8 = (undefined *)CONCAT44(uStack_9f8._4_4_,plStack_db8._0_4_);
      uStack_9f0 = 0;
      uStack_9e8 = 0;
      uStack_9e0 = 1;
      uStack_9d8 = 0;
      uStack_9d0 = &UNK_05e08030;
      uStack_9c8 = &SUB_048b06d0;
      uStack_9c0 = &SUB_05e07cf0;
      uStack_9b8 = &UNK_0de58a60;
      uStack_9b0 = &UNK_0de58c10;
      uStack_9a8 = 0;
      uStack_9a0 = 0;
      uStack_998 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&uStack_9f8);
      plVar7 = uStack_998;
      if (uStack_998 != (long *)0x0) {
        LOCK();
        plVar8 = uStack_998 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*uStack_998 + 0x10))(uStack_998);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      uStack_e8 = uStack_568;
      uStack_f8 = uStack_578;
      uStack_f4 = uStack_574;
      iStack_f0 = iStack_570;
      uStack_ec = uStack_56c;
      uStack_108 = uStack_588;
      uStack_104 = uStack_584;
      uStack_100 = uStack_580;
      uStack_fc = uStack_57c;
      uStack_118 = uStack_598;
      uStack_114 = uStack_594;
      uStack_110 = uStack_590;
      uStack_10c = uStack_58c;
      FUN_048b0bc0(&uStack_db0);
      func_0x0d928ea0(&uStack_9f8);
      if ((_DAT_0f55a110 & 1) == 0) {
        uStack_ae8 = _DAT_0f55a120;
        uStack_af8 = _DAT_0f55a110;
        uStack_af4 = uRam000000000f55a114;
        uStack_af0 = _DAT_0f55a118;
        uStack_aec = uRam000000000f55a11c;
      }
      else {
        FUN_0412e5e0(&uStack_af8,_DAT_0f55a120,CONCAT44(uRam000000000f55a11c,_DAT_0f55a118));
      }
      func_0x0ed60210(&uStack_9f8,&uStack_af8,1);
      uStack_280 = (undefined1)uStack_9e0;
      uStack_290 = (undefined4)uStack_9f0;
      uStack_28c = uStack_9f0._4_4_;
      uStack_288 = uStack_9e8;
      uStack_284 = uStack_9e4;
      puStack_298 = &UNK_0f4e3c70;
      func_0x04167a20(auStack_278,&uStack_9d8);
      uStack_270 = (undefined4)uStack_9d0;
      uStack_26c = uStack_9d0._4_4_;
      uStack_268 = (undefined4)uStack_9c8;
      uStack_264 = uStack_9c8._4_4_;
      uStack_260 = (undefined4)uStack_9c0;
      uStack_25c = uStack_9c0._4_4_;
      uStack_258 = (undefined4)uStack_9b8;
      uStack_254 = uStack_9b8._4_4_;
      uStack_250 = (undefined4)uStack_9b0;
      uStack_24c = uStack_9b0._4_4_;
      uStack_248 = uStack_9a8;
      uStack_244 = uStack_9a4;
      if (CONCAT44(uStack_9a4,uStack_9a8) != 0) {
        LOCK();
        plVar7 = (long *)(CONCAT44(uStack_9a4,uStack_9a8) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      uStack_240 = uStack_9a0;
      if (((ulong)uStack_998 & 1) == 0) {
        uStack_228 = uStack_988;
        uStack_238 = (uint)uStack_998;
        uStack_234 = uStack_998._4_4_;
        uStack_230 = uStack_990;
        uStack_22c = uStack_98c;
      }
      else {
        FUN_0412e5e0(&uStack_238,uStack_988,CONCAT44(uStack_98c,uStack_990));
      }
      uStack_220 = uStack_980;
      func_0x0ddebe20(&uStack_68,&uStack_118,&puStack_298);
      uStack_8c8 = uStack_38;
      uStack_8d8 = uStack_48;
      uStack_8d4 = uStack_44;
      iStack_8d0 = iStack_40;
      uStack_8cc = uStack_3c;
      uStack_8e8 = uStack_58;
      uStack_8e4 = uStack_54;
      uStack_8e0 = uStack_50;
      uStack_8dc = uStack_4c;
      uStack_8f8 = uStack_68;
      uStack_8f4 = uStack_64;
      uStack_8f0 = uStack_60;
      uStack_8ec = uStack_5c;
      func_0x0de570d0(&puStack_dc8,CONCAT44(uStack_64,uStack_68) + 0x18);
      if (uStack_db0._4_4_ == 2) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        plVar7 = *(long **)(piVar10 + 0xc);
        while (plVar7 != plStack_dc0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          plVar7 = *(long **)(piVar10 + 0xc);
        }
LAB_0dde9bfa:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_db0._4_4_ == 1) {
          piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_db0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_0dde9bfa;
        }
        if (uStack_db0._4_4_ == 0) {
          *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
        }
      }
      func_0x0de576e0(&puStack_dc8,&uStack_8f8,&UNK_01423c35,0xf,0x10);
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar7 = (long)&UNK_0f403ef8;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar7;
        (**(code **)(lVar9 + 8))();
        plVar7 = uStack_db0;
      }
      uStack_db0 = plVar7;
      uStack_bc8 = CONCAT44(uStack_bc8._4_4_,plStack_db8._0_4_);
      plStack_bc0 = (long *)0x0;
      uStack_bb8 = uStack_bb8 & 0xffffffff00000000;
      uStack_bb0 = 1;
      uStack_ba8 = 0;
      uStack_ba0 = &UNK_0de58df0;
      puStack_b98 = &SUB_048b06d0;
      puStack_b90 = &UNK_0cdcdd30;
      puStack_b88 = &UNK_0de58e00;
      puStack_b80 = &UNK_0de59000;
      uStack_b78 = 0;
      uStack_b70 = 0;
      plStack_b68 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&uStack_bc8);
      plVar7 = plStack_b68;
      if (plStack_b68 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_b68 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plStack_b68 + 0x10))(plStack_b68);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      uStack_948 = (undefined1)uStack_8c8;
      uStack_958 = uStack_8d8;
      uStack_954 = uStack_8d4;
      iStack_950 = iStack_8d0;
      uStack_94c = uStack_8cc;
      uStack_968 = uStack_8e8;
      uStack_964 = uStack_8e4;
      uStack_960 = uStack_8e0;
      uStack_95c = uStack_8dc;
      uStack_978 = uStack_8f8;
      uStack_974 = uStack_8f4;
      uStack_970 = uStack_8f0;
      uStack_96c = uStack_8ec;
      FUN_048b0bc0(&uStack_db0);
      if (iStack_950 == 4) {
        lVar9 = func_0x0de58180(&uStack_978);
        lVar9 = *(long *)(lVar9 + 0x48);
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
LAB_0dde9e18:
        puVar12[1] = 0x40;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0xff;
        *puVar12 = &UNK_0f4e3d70;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        plVar7 = *(long **)(lVar9 + 8);
        *(undefined8 **)(lVar9 + 8) = puVar12;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x28))();
        }
      }
      else if (iStack_950 == 1) {
        lVar9 = func_0x0de58030(&uStack_978);
        lVar9 = *(long *)(lVar9 + 0x58);
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        goto LAB_0dde9e18;
      }
      uStack_a08 = CONCAT71(uStack_a08._1_7_,uStack_948);
      uStack_a18 = uStack_958;
      uStack_a14 = uStack_954;
      iStack_a10 = iStack_950;
      uStack_a0c = uStack_94c;
      uStack_a28 = uStack_968;
      uStack_a24 = uStack_964;
      uStack_a20 = uStack_960;
      uStack_a1c = uStack_95c;
      uStack_a38 = uStack_978;
      uStack_a34 = uStack_974;
      uStack_a30 = uStack_970;
      uStack_a2c = uStack_96c;
      func_0x0de570d0(&puStack_dc8,CONCAT44(uStack_974,uStack_978) + 0x18);
      if (uStack_db0._4_4_ == 2) {
        piVar10 = *(int **)(plStack_db8[0xf] + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_db0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        plVar7 = *(long **)(piVar10 + 0xc);
        while (plVar7 != plStack_dc0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          plVar7 = *(long **)(piVar10 + 0xc);
        }
LAB_0dde9f5a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_db0._4_4_ == 1) {
          piVar10 = *(int **)(plStack_db8[0xf] + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_db0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_0dde9f5a;
        }
        if (uStack_db0._4_4_ == 0) {
          *(uint *)(plStack_db8 + 3) = *(uint *)(plStack_db8 + 3) | 0x40000;
        }
      }
      func_0x0de576e0(&puStack_dc8,&uStack_a38,&UNK_014db55d,7,0x10);
      plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar7 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar7 = (long)&UNK_0f4a2040;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar7;
        (**(code **)(lVar9 + 8))();
        plVar7 = uStack_db0;
      }
      uStack_db0 = plVar7;
      uStack_bc8 = CONCAT44(uStack_bc8._4_4_,plStack_db8._0_4_);
      plStack_bc0 = (long *)0x0;
      uStack_bb8 = uStack_bb8 & 0xffffffff00000000;
      uStack_bb0 = 1;
      uStack_ba8 = 0;
      uStack_ba0 = &UNK_0de5a9e0;
      puStack_b98 = &SUB_048b06d0;
      puStack_b90 = &UNK_0de5a120;
      puStack_b88 = &UNK_0de5aaa0;
      puStack_b80 = &UNK_0de5acf0;
      uStack_b78 = 0;
      uStack_b70 = 0;
      plStack_b68 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&uStack_bc8);
      plVar7 = plStack_b68;
      if (plStack_b68 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_b68 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plStack_b68 + 0x10))(plStack_b68);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      cStack_908 = (char)uStack_a08;
      uStack_918 = uStack_a18;
      uStack_914 = uStack_a14;
      iStack_910 = iStack_a10;
      uStack_90c = uStack_a0c;
      uStack_928 = uStack_a28;
      uStack_924 = uStack_a24;
      uStack_920 = uStack_a20;
      uStack_91c = uStack_a1c;
      uStack_938 = uStack_a38;
      uStack_934 = uStack_a34;
      uStack_930 = uStack_a30;
      uStack_92c = uStack_a2c;
      FUN_048b0bc0(&uStack_db0);
      if (iStack_910 == 4) {
        lVar9 = func_0x0de58180(&uStack_938);
        lVar9 = *(long *)(lVar9 + 0x48);
        puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (puVar12 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
LAB_0ddea178:
        puVar12[1] = 0xffffffffffffffff;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0xff;
        *puVar12 = &UNK_0f49fe18;
        puVar12[4] = 0;
        puVar12[5] = plStack_c70;
        plVar7 = *(long **)(lVar9 + 8);
        *(undefined8 **)(lVar9 + 8) = puVar12;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x28))();
        }
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plStack_c70;
        if (iStack_910 == 1) {
          lVar9 = func_0x0de58030(&uStack_938);
          lVar9 = *(long *)(lVar9 + 0x58);
          puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
          if (puVar12 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x30,0);
          }
          goto LAB_0ddea178;
        }
      }
      cStack_6c8 = cStack_908;
      uStack_6d8 = uStack_918;
      uStack_6d4 = uStack_914;
      iStack_6d0 = iStack_910;
      uStack_6cc = uStack_90c;
      uStack_6e8 = uStack_928;
      uStack_6e4 = uStack_924;
      uStack_6e0 = uStack_920;
      uStack_6dc = uStack_91c;
      uStack_6f8 = uStack_938;
      uStack_6f4 = uStack_934;
      uStack_6f0 = uStack_930;
      uStack_6ec = uStack_92c;
      func_0x0de576e0(&puStack_dc8,&uStack_6f8,&UNK_0148b183,0x15,0);
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar8 = (long)&UNK_0f4a20f0;
      if (uStack_db0 != (long *)0x0) {
        lVar9 = *uStack_db0;
        uStack_db0 = plVar8;
        (**(code **)(lVar9 + 8))();
        plVar8 = uStack_db0;
      }
      uStack_db0 = plVar8;
      uStack_bc8 = CONCAT44(uStack_bc8._4_4_,plStack_db8._0_4_);
      plStack_bc0 = (long *)0x0;
      uStack_bb8 = uStack_bb8 & 0xffffffff00000000;
      uStack_bb0 = 1;
      uStack_ba8 = 0;
      uStack_ba0 = &UNK_0de5c060;
      puStack_b98 = &SUB_048b06d0;
      puStack_b90 = &UNK_0de5bc90;
      puStack_b88 = &UNK_0de5c120;
      puStack_b80 = &UNK_0de5c350;
      uStack_b78 = 0;
      uStack_b70 = 0;
      plStack_b68 = (long *)0x0;
      func_0x048b05a0(plStack_dc0,&uStack_bc8);
      plVar8 = plStack_b68;
      if (plStack_b68 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_b68 + 1;
        lVar9 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plStack_b68 + 0x10))(plStack_b68);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x0de579a0(&puStack_dc8);
      FUN_048b0bc0(&uStack_db0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      puStack_298 = &UNK_0f4e3c70;
      if ((uStack_238 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
      }
      plVar7 = (long *)CONCAT44(uStack_244,uStack_248);
      if (plVar7 == (long *)0x0) {
LAB_0ddea3c0:
        func_0x04167a40(auStack_278);
        if ((uStack_af8 & 1) == 0) goto LAB_0ddea3d2;
LAB_0ddea41e:
        thunk_FUN_0ee326a0(uStack_ae8,CONCAT44(uStack_af4,uStack_af8) & 0xfffffffffffffffe);
        if (((ulong)uStack_998 & 1) == 0) goto LAB_0ddea3e9;
LAB_0ddea44e:
        uStack_9f8 = &UNK_0f4e3c70;
        thunk_FUN_0ee326a0(uStack_988,(ulong)uStack_998 & 0xfffffffffffffffe);
        plVar7 = (long *)CONCAT44(uStack_9a4,uStack_9a8);
      }
      else {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 != 0) goto LAB_0ddea3c0;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
        func_0x04167a40(auStack_278);
        if ((uStack_af8 & 1) != 0) goto LAB_0ddea41e;
LAB_0ddea3d2:
        if (((ulong)uStack_998 & 1) != 0) goto LAB_0ddea44e;
LAB_0ddea3e9:
        uStack_9f8 = &UNK_0f4e3c70;
        plVar7 = (long *)CONCAT44(uStack_9a4,uStack_9a8);
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x04167a40(&uStack_9d8);
      puStack_6b8 = &UNK_0f49fe98;
      func_0x0ddef860(&puStack_698);
      puStack_8b8 = &UNK_0f4e3c70;
      if ((uStack_858 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_848,uStack_858 & 0xfffffffffffffffe);
      }
      plVar7 = (long *)CONCAT44(uStack_864,uStack_868);
      if (plVar7 == (long *)0x0) {
LAB_0ddea50d:
        func_0x04167a40(auStack_898);
        if ((bStack_b50 & 1) == 0) goto LAB_0ddea524;
LAB_0ddea570:
        thunk_FUN_0ee326a0(uStack_b40,
                           CONCAT17(uStack_b49,CONCAT61(uStack_b4f,bStack_b50)) & 0xfffffffffffffffe
                          );
        if ((bStack_a58 & 1) == 0) goto LAB_0ddea536;
LAB_0ddea59b:
        uStack_ab8 = &UNK_0f4e3c70;
        thunk_FUN_0ee326a0(uStack_a48,CONCAT71(uStack_a57,bStack_a58) & 0xfffffffffffffffe);
        plVar7 = (long *)CONCAT44(uStack_a64,uStack_a68);
      }
      else {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 != 0) goto LAB_0ddea50d;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
        func_0x04167a40(auStack_898);
        if ((bStack_b50 & 1) != 0) goto LAB_0ddea570;
LAB_0ddea524:
        if ((bStack_a58 & 1) != 0) goto LAB_0ddea59b;
LAB_0ddea536:
        uStack_ab8 = &UNK_0f4e3c70;
        plVar7 = (long *)CONCAT44(uStack_a64,uStack_a68);
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x04167a40(&uStack_a98);
      puStack_7f8 = &UNK_0f4e3c70;
      if ((uStack_798 & 1) != 0) {
        thunk_FUN_0ee326a0(uStack_788,CONCAT44(uStack_794,uStack_798) & 0xfffffffffffffffe);
      }
      plVar7 = (long *)CONCAT44(uStack_7a4,uStack_7a8);
      if (plVar7 == (long *)0x0) {
LAB_0ddea63b:
        func_0x04167a40(auStack_7d8);
        if ((uStack_ad8 & 1) == 0) goto LAB_0ddea652;
LAB_0ddea69e:
        thunk_FUN_0ee326a0(uStack_ac8,CONCAT44(uStack_ad4,uStack_ad8) & 0xfffffffffffffffe);
        if (((ulong)uStack_c90 & 1) == 0) goto LAB_0ddea664;
LAB_0ddea6c9:
        puStack_cf0 = &UNK_0f4e3c70;
        thunk_FUN_0ee326a0(uStack_c80,(ulong)uStack_c90 & 0xfffffffffffffffe);
        plVar7 = (long *)CONCAT44(uStack_c9c,uStack_ca0);
      }
      else {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 != 0) goto LAB_0ddea63b;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
        func_0x04167a40(auStack_7d8);
        if ((uStack_ad8 & 1) != 0) goto LAB_0ddea69e;
LAB_0ddea652:
        if (((ulong)uStack_c90 & 1) != 0) goto LAB_0ddea6c9;
LAB_0ddea664:
        puStack_cf0 = &UNK_0f4e3c70;
        plVar7 = (long *)CONCAT44(uStack_c9c,uStack_ca0);
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x04167a40(&uStack_cd0);
      puStack_4d8 = &UNK_0f4e3c70;
      if ((uStack_478 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_468,CONCAT44(uStack_474,uStack_478) & 0xfffffffffffffffe);
      }
      plVar7 = (long *)CONCAT44(uStack_484,uStack_488);
      if (plVar7 == (long *)0x0) {
LAB_0ddea764:
        func_0x04167a40(auStack_4b8);
        if ((uStack_c68 & 1) == 0) goto LAB_0ddea776;
LAB_0ddea7bd:
        thunk_FUN_0ee326a0(puStack_c58,uStack_c68 & 0xfffffffffffffffe);
        if ((uStack_3f8 & 1) == 0) goto LAB_0ddea788;
LAB_0ddea7e8:
        puStack_458 = &UNK_0f4e3c70;
        thunk_FUN_0ee326a0(lStack_3e8,CONCAT44(uStack_3f4,uStack_3f8) & 0xfffffffffffffffe);
        plVar7 = (long *)CONCAT44(uStack_404,uStack_408);
      }
      else {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 != 0) goto LAB_0ddea764;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        func_0x0412c2d0(plVar7);
        func_0x04167a40(auStack_4b8);
        if ((uStack_c68 & 1) != 0) goto LAB_0ddea7bd;
LAB_0ddea776:
        if ((uStack_3f8 & 1) != 0) goto LAB_0ddea7e8;
LAB_0ddea788:
        puStack_458 = &UNK_0f4e3c70;
        plVar7 = (long *)CONCAT44(uStack_404,uStack_408);
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar9 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          func_0x0412c2d0(plVar7);
        }
      }
      func_0x04167a40(auStack_438);
      lVar9 = func_0x0cd0ad70(plStack_dd0);
      iVar5 = *(int *)(lVar9 + 0x60);
      goto joined_r0x0ddea84d;
    }
    func_0x04882e30();
LAB_0ddeb4e0:
    func_0x04882e30();
LAB_0ddeb4e5:
    iVar5 = func_0x04108328(&DAT_0f703a28);
    if (iVar5 != 0) {
      func_0x0cd08f10(0xf703a10);
      func_0x0410844d(&DAT_0f703a28);
    }
  }
  puStack_dc8 = (undefined *)CONCAT44(puStack_dc8._4_4_,uStack_a90._4_4_);
  plStack_dc0 = (long *)0x0;
  plStack_db8 = (long *)((ulong)plStack_db8 & 0xffffffff00000000);
  uStack_db0 = (long *)0x1;
  puStack_da8 = &SUB_048aead0;
  uStack_da0 = 0xe0;
  uStack_d9f = 0xde5d0;
  uStack_d98 = 0xa0;
  uStack_d97 = 0xde5d1;
  uStack_d90 = 0;
  uStack_d8f = 0;
  uStack_d88 = 0;
  uStack_d80 = 0;
  uStack_d78 = 0;
  func_0x049057f0(&uStack_ab0,&puStack_dc8);
  func_0x048aea50(&puStack_dc8);
  uStack_9e8 = (undefined4)uStack_aa0;
  uStack_9e4 = uStack_aa0._4_4_;
  uStack_9e0 = uStack_a98;
  uStack_9f8 = (undefined *)CONCAT44(uStack_aac,uStack_ab0);
  uStack_9f0 = uStack_aa8;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4a2260;
  if ((DAT_0f551bc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551bc8), iVar5 != 0)) {
    func_0x04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  puStack_dc8 = (undefined *)CONCAT44(puStack_dc8._4_4_,_DAT_0f551bb4);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c48;
  plStack_dc0 = plVar7 + 3;
  plVar7[3] = (long)puVar12;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0xff;
  uStack_b38 = 0;
  uStack_b30 = (long *)0x0;
  plStack_db8 = plVar7;
  func_0x048afd20(&uStack_9f8,&puStack_dc8);
  plVar7 = plStack_db8;
  if (plStack_db8 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_db8 + 1;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_db8 + 0x10))(plStack_db8);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = uStack_b30;
  if (uStack_b30 != (long *)0x0) {
    LOCK();
    plVar8 = uStack_b30 + 1;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_b30 + 0x10))(uStack_b30);
      func_0x0412c2d0(plVar7);
    }
  }
  if ((DAT_0f703a28 == '\0') && (iVar5 = func_0x04108328(&DAT_0f703a28), iVar5 != 0)) {
    func_0x0cd08f10(0xf703a10);
    func_0x0410844d(&DAT_0f703a28);
  }
  if (uStack_a98._4_4_ == 2) {
    piVar10 = *(int **)(*(long *)(uStack_aa0 + 0x78) + 0x60);
    iVar5 = *piVar10;
    while (iVar5 != (int)uStack_a98) {
      piVar10 = piVar10 + 0x16;
      iVar5 = *piVar10;
    }
    lVar9 = *(long *)(piVar10 + 0xc);
    while (lVar9 != uStack_aa8) {
      piVar10 = *(int **)(piVar10 + 0xe);
      lVar9 = *(long *)(piVar10 + 0xc);
    }
LAB_0ddeae8a:
    *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 2;
  }
  else {
    if (uStack_a98._4_4_ == 1) {
      piVar10 = *(int **)(*(long *)(uStack_aa0 + 0x78) + 0x48);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_a98) {
        piVar10 = piVar10 + 0x1a;
        iVar5 = *piVar10;
      }
      goto LAB_0ddeae8a;
    }
    if (uStack_a98._4_4_ == 0) {
      *(uint *)(uStack_aa0 + 0x18) = *(uint *)(uStack_aa0 + 0x18) | 0x20000;
    }
  }
  if ((DAT_0f703a28 == '\0') && (iVar5 = func_0x04108328(&DAT_0f703a28), iVar5 != 0)) {
    func_0x0cd08f10(0xf703a10);
    func_0x0410844d(&DAT_0f703a28);
  }
  puStack_dc8 = (undefined *)CONCAT44(puStack_dc8._4_4_,0xbf75c8f8);
  plStack_dc0 = (long *)0x0;
  plStack_db8 = (long *)((ulong)plStack_db8 & 0xffffffff00000000);
  uStack_db0 = (long *)0x0;
  puStack_da8 = &UNK_0de5d3f0;
  uStack_da0 = 0xd0;
  uStack_d9f = 0x48b06;
  uStack_d98 = 0xa0;
  uStack_d97 = 0xde5da;
  uStack_d90 = 0;
  uStack_d8f = 0;
  uStack_d88 = 0;
  uStack_d80 = 0;
  uStack_d78 = 0;
  func_0x049057f0(&uStack_ab0,&puStack_dc8);
  func_0x048aea50(&puStack_dc8);
  uStack_9e8 = (undefined4)uStack_aa0;
  uStack_9e4 = uStack_aa0._4_4_;
  uStack_9e0 = uStack_a98;
  uStack_9f8 = (undefined *)CONCAT44(uStack_aac,uStack_ab0);
  uStack_9f0 = uStack_aa8;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f4a2260;
  if ((DAT_0f551cb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f551cb0), iVar5 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  puStack_dc8 = (undefined *)CONCAT44(puStack_dc8._4_4_,_DAT_0f551c9c);
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef46c98;
  plStack_dc0 = plVar7 + 3;
  plVar7[3] = (long)puVar12;
  *(undefined1 *)(plVar7 + 4) = 0xff;
  uStack_b38 = 0;
  uStack_b30 = (long *)0x0;
  plStack_db8 = plVar7;
  func_0x048afd20(&uStack_9f8,&puStack_dc8);
  plVar7 = plStack_db8;
  if (plStack_db8 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_db8 + 1;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plStack_db8 + 0x10))(plStack_db8);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = uStack_b30;
  if (uStack_b30 != (long *)0x0) {
    LOCK();
    plVar8 = uStack_b30 + 1;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*uStack_b30 + 0x10))(uStack_b30);
      func_0x0412c2d0(plVar7);
    }
  }
  uVar4 = uStack_a90._4_4_;
  if ((int)uStack_a90 == 4) {
    puVar6 = uStack_ab8 + 0x18;
    uVar13 = func_0x0cd0ad70(puVar6);
    puVar6 = (undefined *)func_0x048b1040(puVar6,uVar13,uVar4,1);
    if (puVar6 == (undefined *)0x0) {
      puStack_dc8 = (undefined *)0x0;
      plStack_dc0 = (long *)0x0;
      func_0x048b10d0(&puStack_dc8);
      puVar14 = *(undefined **)(puStack_dc8 + 0x38);
      puVar6 = puStack_dc8;
      if (puVar14 == (undefined *)0x0) goto LAB_0ddeb163;
LAB_0ddeb17f:
      do {
        puVar6 = puVar14;
        puVar14 = *(undefined **)(puVar6 + 0x38);
        if (*(undefined **)(puVar6 + 0x38) == (undefined *)0x0) {
          puStack_dc8 = (undefined *)0x0;
          plStack_dc0 = (long *)0x0;
          func_0x048b10d0(&puStack_dc8);
          puVar14 = puStack_dc8;
        }
      } while (puVar14 != (undefined *)0x0);
    }
    else {
      puVar14 = *(undefined **)(puVar6 + 0x38);
      if (*(undefined **)(puVar6 + 0x38) != (undefined *)0x0) goto LAB_0ddeb17f;
LAB_0ddeb163:
      puStack_dc8 = (undefined *)0x0;
      plStack_dc0 = (long *)0x0;
      func_0x048b10d0(&puStack_dc8);
      puVar14 = puStack_dc8;
      if (puStack_dc8 != (undefined *)0x0) goto LAB_0ddeb17f;
    }
    lVar9 = *(long *)(puVar6 + 0x48);
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f49ff18;
    puVar12[4] = param_1;
    puVar12[5] = plStack_dd0;
    param_1 = *(long **)(lVar9 + 8);
    *(undefined8 **)(lVar9 + 8) = puVar12;
    if (param_1 != (long *)0x0) goto LAB_0ddeb212;
  }
  else {
    if ((int)uStack_a90 == 1) {
      puVar6 = uStack_ab8 + 0x18;
      uVar13 = func_0x0cd0ad70(puVar6);
      puVar6 = (undefined *)func_0x048b0c90(puVar6,uVar13,uVar4,1);
      if (puVar6 == (undefined *)0x0) {
        puStack_dc8 = (undefined *)0x0;
        plStack_dc0 = (long *)0x0;
        func_0x048b0d20(&puStack_dc8);
        puVar6 = puStack_dc8;
      }
      lVar9 = *(long *)(puVar6 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puVar12[1] = 0xffffffffffffffff;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 0xff;
      *puVar12 = &UNK_0f49ff18;
      puVar12[4] = param_1;
      puVar12[5] = plStack_dd0;
      param_1 = *(long **)(lVar9 + 8);
      *(undefined8 **)(lVar9 + 8) = puVar12;
      if (param_1 == (long *)0x0) goto LAB_0ddeb21b;
    }
    else {
      (**(code **)(*plStack_dd0 + 0x28))();
    }
LAB_0ddeb212:
    (**(code **)(*param_1 + 0x28))(param_1);
  }
LAB_0ddeb21b:
  if ((uStack_bc8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_bb8,uStack_bc8 & 0xfffffffffffffffe);
  }
LAB_0ddeb23e:
  puStack_c48 = &UNK_0f4e3c70;
  if ((uStack_be8 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_bd8,CONCAT44(uStack_be4,uStack_be8) & 0xfffffffffffffffe);
  }
  plVar7 = (long *)CONCAT44(uStack_bf4,uStack_bf8);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar9 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  func_0x04167a40(auStack_c28);
  return;
}



/* ---- referenced strings ----
 * 0x13529d9  The description identifier of the geometry to use to render this block. 
 * 0x13529e9  identifier of the geometry to use to render this block. 
 * 0x13529f9  e geometry to use to render this block. 
 * 0x1352a09  e to render this block. 
 */
