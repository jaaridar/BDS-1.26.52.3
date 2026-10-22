/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8e1330 (ELF vaddr 0xd7e1330)
 * Label: caller-of-callee
 * Body:  [[0d8e1330, 0d8e19f7] [0d8e1a00, 0d8e20f1] [0d8e2100, 0d8e7ff7]]
 * Ghidra: FUN_0d8e1330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8e1330(long param_1)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  bool bVar22;
  uint uStack_c60;
  undefined2 uStack_c5c;
  long *plStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined *puStack_c38;
  undefined1 *puStack_c30;
  undefined1 *puStack_c28;
  undefined *puStack_c20;
  undefined *puStack_c18;
  undefined4 uStack_c10;
  undefined8 uStack_c08;
  long *plStack_c00;
  undefined *puStack_bf8;
  undefined4 *puStack_bf0;
  uint uStack_be8;
  undefined4 uStack_be4;
  undefined8 uStack_be0;
  long lStack_bd8;
  undefined8 uStack_bd0;
  ulong uStack_bc8;
  long lStack_bc0;
  undefined8 uStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  long lStack_ba0;
  long lStack_b98;
  long lStack_b90;
  long lStack_b88;
  long lStack_b80;
  long lStack_b78;
  undefined4 uStack_b70;
  long lStack_b68;
  long lStack_b60;
  long lStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b40;
  undefined2 uStack_b38;
  undefined2 uStack_b36;
  uint uStack_b34;
  uint uStack_b30;
  undefined1 uStack_b2c;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined8 uStack_b00;
  undefined4 uStack_af8;
  uint uStack_af4;
  uint uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  int iStack_ac0;
  uint uStack_abc;
  undefined8 uStack_ab8;
  uint uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  int iStack_a80;
  uint uStack_a7c;
  undefined8 uStack_a78;
  uint uStack_a70;
  undefined4 uStack_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 uStack_a48;
  undefined4 uStack_a44;
  int iStack_a40;
  uint uStack_a3c;
  undefined4 uStack_a38;
  uint uStack_a34;
  uint uStack_a30;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  int iStack_a00;
  uint uStack_9fc;
  undefined8 uStack_9f8;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  int iStack_9c0;
  uint uStack_9bc;
  char cStack_9b8;
  undefined7 uStack_9b7;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  uint uStack_97c;
  undefined8 uStack_978;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  uint uStack_93c;
  undefined8 uStack_938;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  uint uStack_8fc;
  undefined8 uStack_8f8;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  uint uStack_8bc;
  undefined8 uStack_8b8;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  uint uStack_87c;
  undefined8 uStack_878;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  uint uStack_83c;
  undefined8 uStack_838;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  uint uStack_7fc;
  undefined8 uStack_7f8;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  uint uStack_7bc;
  undefined8 uStack_7b8;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  uint uStack_77c;
  undefined8 uStack_778;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  uint uStack_73c;
  undefined8 uStack_738;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  uint uStack_6fc;
  undefined8 uStack_6f8;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  uint uStack_6bc;
  undefined8 uStack_6b8;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  uint uStack_67c;
  undefined8 uStack_678;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  uint uStack_63c;
  undefined8 uStack_638;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  uint uStack_5fc;
  undefined8 uStack_5f8;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  uint uStack_5bc;
  undefined8 uStack_5b8;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  uint uStack_57c;
  undefined8 uStack_578;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  uint uStack_53c;
  undefined8 uStack_538;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  uint uStack_4fc;
  undefined8 uStack_4f8;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  char cStack_4b8;
  undefined7 uStack_4b7;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  uint uStack_47c;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  uint uStack_43c;
  undefined1 uStack_438;
  undefined7 uStack_437;
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
  undefined4 uStack_400;
  uint uStack_3fc;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined1 uStack_378;
  undefined7 uStack_377;
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
  undefined4 uStack_340;
  uint uStack_33c;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined1 uStack_278;
  undefined7 uStack_277;
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
  undefined4 uStack_240;
  uint uStack_23c;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
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
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  if ((DAT_0f72cbe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cbe0), iVar8 != 0)) {
    func_0x0d93a100();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cb60,0xf53dab8);
    func_0x0410844d(&DAT_0f72cbe0);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72cb60 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e13a0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72cb60 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e13a0:
    puVar10 = &DAT_0f72cb60;
    if (iRam000000000f72cbc0 != -0x2b3da790) goto LAB_0d8e140d;
LAB_0d8e13cb:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e140d;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar17 = lVar20 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0d93a820(&uStack_b28,param_1,lVar17,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e13cb;
LAB_0d8e140d:
    func_0x0d93a820(&uStack_b28,param_1,&UNK_01458db0,0x14);
  }
  if ((char)uStack_af8 == '\0') {
    uStack_c50._4_4_ = (uint)((ulong)uStack_c50 >> 0x20);
    func_0x0d93b3d0(&puStack_bf8,&uStack_b28,&UNK_01482f73,4,0);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f0123c0;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50._4_4_ << 0x20);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_05e08030;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_05e07cf0;
    puStack_c20 = &UNK_0d93b960;
    puStack_c18 = &UNK_0d93bb10;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d93b660(&puStack_bf8);
    uStack_a78 = CONCAT71(uStack_a78._1_7_,(char)uStack_af8);
    uStack_a88 = uStack_b08;
    uStack_a84 = uStack_b04;
    iStack_a80 = (int)uStack_b00;
    uStack_a7c = uStack_b00._4_4_;
    uStack_a98 = uStack_b18;
    uStack_a94 = uStack_b14;
    uStack_a90 = uStack_b10;
    uStack_a8c = uStack_b0c;
    uStack_aa8 = CONCAT44(uStack_b24,uStack_b28);
    uStack_aa0 = (long *)CONCAT44(uStack_b1c,uStack_b20);
    func_0x048b0bc0(&uStack_be0);
    uStack_ae8 = (long *)uStack_aa8;
    uStack_ae0 = uStack_aa0;
    uStack_ad8 = uStack_a98;
    uStack_ad4 = uStack_a94;
    uStack_ad0 = uStack_a90;
    uStack_acc = uStack_a8c;
    uStack_ac8 = uStack_a88;
    uStack_ac4 = uStack_a84;
    iStack_ac0 = iStack_a80;
    uStack_abc = uStack_a7c;
    uStack_ab8 = uStack_a78;
    func_0x0d93ae10(&puStack_bf8,uStack_aa8 + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e165f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e165f;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d93b3d0(&puStack_bf8,&uStack_ae8,&UNK_011dad3b,6,0x10);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0ef46ce8;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0490ce30;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_0490cb20;
    puStack_c20 = &UNK_0d93bcf0;
    puStack_c18 = &UNK_0d93be50;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d93b660(&puStack_bf8);
    uVar16 = uStack_abc;
    iVar8 = iStack_ac0;
    lVar20 = (long)uStack_ae8;
    func_0x048b0bc0(&uStack_be0);
    uStack_c60 = 0;
    uStack_c5c = 0;
    if (iVar8 == 4) {
      if ((DAT_0f72cbe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cbe0), iVar8 != 0)) {
        func_0x0d93a100();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cb60,0xf53dab8);
        func_0x0410844d(&DAT_0f72cbe0);
      }
      plVar11 = (long *)(*(long *)(lVar20 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f72cb60 + 4)) * 8);
      do {
        lVar17 = *plVar11;
        if (lVar17 == -1) goto LAB_0d8e18a8;
        plVar11 = (long *)(*(long *)(lVar20 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f72cb60 + 4));
      if (plVar11 == *(long **)(lVar20 + 0x38)) {
LAB_0d8e18a8:
        puVar10 = &DAT_0f72cb60;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      puVar10 = (undefined *)func_0x048b1040(lVar20 + 0x18,puVar10,uVar16,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_bf8 = (undefined *)0x0;
        puStack_bf0 = (undefined4 *)0x0;
        func_0x048b10d0(&puStack_bf8);
        puVar13 = *(undefined **)(puStack_bf8 + 0x38);
        puVar10 = puStack_bf8;
        if (puVar13 == (undefined *)0x0) goto LAB_0d8e19d5;
LAB_0d8e19f1:
        do {
          puVar10 = puVar13;
          puVar13 = *(undefined **)(puVar10 + 0x38);
          if (*(undefined **)(puVar10 + 0x38) == (undefined *)0x0) {
            puStack_bf8 = (undefined *)0x0;
            puStack_bf0 = (undefined4 *)0x0;
            func_0x048b10d0(&puStack_bf8);
            puVar13 = puStack_bf8;
          }
        } while (puVar13 != (undefined *)0x0);
      }
      else {
        puVar13 = *(undefined **)(puVar10 + 0x38);
        if (*(undefined **)(puVar10 + 0x38) != (undefined *)0x0) goto LAB_0d8e19f1;
LAB_0d8e19d5:
        puStack_bf8 = (undefined *)0x0;
        puStack_bf0 = (undefined4 *)0x0;
        func_0x048b10d0(&puStack_bf8);
        puVar13 = puStack_bf8;
        if (puStack_bf8 != (undefined *)0x0) goto LAB_0d8e19f1;
      }
      lVar20 = *(long *)(puVar10 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar8 != 1) goto LAB_0d8e1ab0;
      if ((DAT_0f72cbe0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cbe0), iVar8 != 0)) {
        func_0x0d93a100();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cb60,0xf53dab8);
        func_0x0410844d(&DAT_0f72cbe0);
      }
      plVar11 = (long *)(*(long *)(lVar20 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f72cb60 + 4)) * 8);
      do {
        lVar17 = *plVar11;
        if (lVar17 == -1) goto LAB_0d8e1838;
        plVar11 = (long *)(*(long *)(lVar20 + 0x30) + lVar17 * 0x18);
      } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar17 * 0x18) !=
               *(uint *)(_DAT_0f72cb60 + 4));
      if (plVar11 == *(long **)(lVar20 + 0x38)) {
LAB_0d8e1838:
        puVar10 = &DAT_0f72cb60;
      }
      else {
        puVar10 = (undefined *)plVar11[2];
      }
      puVar10 = (undefined *)func_0x048b0c90(lVar20 + 0x18,puVar10,uVar16,1);
      if (puVar10 == (undefined *)0x0) {
        puStack_bf8 = (undefined *)0x0;
        puStack_bf0 = (undefined4 *)0x0;
        func_0x048b0d20(&puStack_bf8);
        puVar10 = puStack_bf8;
      }
      lVar20 = *(long *)(puVar10 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar12[1] = 0xffffffffffffffff;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0xff;
    *puVar12 = &UNK_0f0edc68;
    uVar6 = _DAT_014f0238;
    puVar12[4] = 0;
    puVar12[5] = uVar6;
    puVar12[6] = 0;
    *(undefined2 *)(puVar12 + 7) = 1;
    *(uint *)((long)puVar12 + 0x3a) = uStack_c60;
    *(undefined2 *)((long)puVar12 + 0x3e) = uStack_c5c;
    plVar11 = *(long **)(lVar20 + 8);
    *(undefined8 **)(lVar20 + 8) = puVar12;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
LAB_0d8e1ab0:
  func_0x0cdadbb0(param_1);
  if ((DAT_0f72cb28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cb28), iVar8 != 0)) {
    func_0x0d938ae0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72caa8,0xf53dab8);
    func_0x0410844d(&DAT_0f72cb28);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72caa8 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e1b10;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72caa8 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e1b10:
    puVar10 = &DAT_0f72caa8;
    if (iRam000000000f72cb08 != -0x2b3da790) goto LAB_0d8e1b7d;
LAB_0d8e1b3b:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e1b7d;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar17 = lVar20 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0d939150(&uStack_b28,param_1,lVar17,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e1b3b;
LAB_0d8e1b7d:
    func_0x0d939150(&uStack_b28,param_1,&UNK_01235517,0xc);
  }
  if ((char)uStack_af8 == '\0') {
    uStack_bb8._7_1_ = (undefined1)((ulong)uStack_bb8 >> 0x38);
    if ((DAT_0f72cb48 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cb48), iVar8 != 0)) {
      func_0x0d938bf0();
      func_0x0410844d(&DAT_0f72cb48);
    }
    uStack_b00 = 0x4a9c9bdf00000001;
    lVar20 = CONCAT44(uStack_b24,uStack_b28);
    if ((DAT_0f72cb28 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cb28), iVar8 != 0)) {
      func_0x0d938ae0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72caa8,0xf53dab8);
      func_0x0410844d(&DAT_0f72cb28);
    }
    puStack_bf0 = (undefined4 *)(lVar20 + 0x18);
    plVar11 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f72caa8 + 4)) * 8);
    do {
      lVar17 = *plVar11;
      if (lVar17 == -1) goto LAB_0d8e1c40;
      plVar11 = (long *)(*(long *)(lVar20 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f72caa8 + 4)
            );
    if (plVar11 == *(long **)(lVar20 + 0x38)) {
LAB_0d8e1c40:
      puStack_bf8 = &DAT_0f72caa8;
    }
    else {
      puStack_bf8 = (undefined *)plVar11[2];
    }
    FUN_0ed621a0(&puStack_bf8,uStack_b00._4_4_);
    puStack_bf8 = (undefined *)CONCAT62(puStack_bf8._2_6_,1);
    uStack_be8 = uStack_b00._4_4_;
    uStack_be0 = (long *)0x0;
    lStack_bd8 = 0;
    uStack_bd0 = 0;
    uStack_bc8 = 0;
    lStack_bc0 = 0;
    uStack_bb8 = CONCAT17(uStack_bb8._7_1_,0x656c6261740a);
    lStack_ba0 = 0;
    lStack_b98 = 0;
    lStack_b90 = 0;
    lStack_b88 = 0;
    lStack_b80 = 0;
    lStack_b78 = 0;
    uStack_b70 = 0x3f600000;
    puStack_bf0 = &uStack_b20;
    func_0x048afb10(&lStack_ba0,8);
    uStack_b48 = 0;
    lStack_b40 = 0;
    lStack_b58 = 0;
    uStack_b50 = 0;
    lStack_b68 = 0;
    lStack_b60 = 0;
    uStack_b38 = 0xff00;
    uStack_b34 = uStack_b34 & 0xffffff00;
    uStack_b30 = uStack_b30 & 0xffffff00;
    uStack_b2c = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0f406a90;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = puVar12;
      (**(code **)(lVar20 + 8))();
      puVar12 = uStack_be0;
    }
    uStack_be0 = puVar12;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d938340;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_0cdf8ff0;
    puStack_c20 = &UNK_0d939cb0;
    puStack_c18 = &UNK_0d939e70;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    puVar5 = puStack_bf0;
    if ((DAT_0f550a20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550a20), iVar8 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_c60 = _DAT_0f550a0c;
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    lVar20 = lStack_bd8;
    puVar12 = uStack_be0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0ef439d0;
    plStack_c58 = plVar11 + 3;
    uStack_be0 = (long *)0x0;
    lStack_bd8 = 0;
    plVar11[3] = (long)puVar12;
    plVar11[4] = lVar20;
    plVar11[7] = lStack_bc0;
    plVar11[5] = uStack_bd0;
    plVar11[6] = uStack_bc8;
    uStack_bd0 = 0;
    uStack_bc8 = 0;
    lStack_bc0 = 0;
    plVar11[10] = lStack_ba8;
    plVar11[8] = uStack_bb8;
    plVar11[9] = lStack_bb0;
    uStack_bb8 = 0;
    lStack_bb0 = 0;
    lStack_ba8 = 0;
    plVar11[0xb] = lStack_ba0;
    plVar11[0xc] = lStack_b98;
    plVar11[0xd] = lStack_b90;
    lStack_ba0 = 0;
    lStack_b98 = 0;
    lStack_b90 = 0;
    plVar11[0xe] = lStack_b88;
    plVar11[0xf] = lStack_b80;
    plVar11[0x10] = lStack_b78;
    lStack_b88 = 0;
    lStack_b80 = 0;
    lStack_b78 = 0;
    *(undefined4 *)(plVar11 + 0x11) = uStack_b70;
    plVar11[0x12] = lStack_b68;
    plVar11[0x13] = lStack_b60;
    plVar11[0x14] = lStack_b58;
    lStack_b68 = 0;
    lStack_b60 = 0;
    lStack_b58 = 0;
    plVar11[0x17] = lStack_b40;
    *(undefined4 *)(plVar11 + 0x15) = (undefined4)uStack_b50;
    *(undefined4 *)((long)plVar11 + 0xac) = uStack_b50._4_4_;
    *(undefined4 *)(plVar11 + 0x16) = (undefined4)uStack_b48;
    *(undefined4 *)((long)plVar11 + 0xb4) = uStack_b48._4_4_;
    uStack_b50 = 0;
    uStack_b48 = 0;
    lStack_b40 = 0;
    *(ulong *)((long)plVar11 + 0xc5) = CONCAT17(uStack_b2c,CONCAT43(uStack_b30,uStack_b34._1_3_));
    plVar11[0x18] = CONCAT44(uStack_b34,CONCAT22(uStack_b36,uStack_b38));
    uStack_ae8 = (long *)0x0;
    uStack_ae0 = (long *)0x0;
    uStack_c50 = plVar11;
    FUN_048afd20(puVar5,&uStack_c60);
    plVar11 = uStack_c50;
    if (uStack_c50 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_c50 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_c50 + 0x10))(uStack_c50);
        FUN_0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_ae0;
    if (uStack_ae0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_ae0 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*uStack_ae0 + 0x10))(uStack_ae0);
        FUN_0412c2d0(plVar11);
      }
    }
    lVar20 = *(long *)(puVar5 + 4);
    iVar8 = puVar5[7];
    if (iVar8 == 2) {
      piVar15 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != puVar5[6]) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != *(long *)(puVar5 + 2); piVar15 = *(int **)(piVar15 + 0xe))
      {
      }
LAB_0d8e210a:
      piVar15[4] = piVar15[4] | (int)puStack_bf8 << 0x10;
    }
    else {
      if (iVar8 == 1) {
        piVar15 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != puVar5[6]) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e210a;
      }
      if (iVar8 == 0) {
        *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | (int)puStack_bf8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_be0);
  }
  func_0x0cdadbb0(param_1);
  if ((DAT_0f72ca70 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ca70), iVar8 != 0)) {
    func_0x0d936b40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72c9f0,0xf53dab8);
    func_0x0410844d(&DAT_0f72ca70);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72c9f0 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e2170;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72c9f0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e2170:
    puVar10 = &DAT_0f72c9f0;
    if (iRam000000000f72ca50 != -0x2b3da790) goto LAB_0d8e21dd;
LAB_0d8e219b:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e21dd;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar17 = lVar20 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0d9371f0(&uStack_b28,param_1,lVar17,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e219b;
LAB_0d8e21dd:
    func_0x0d9371f0(&uStack_b28,param_1,&UNK_0140bb9d,0xe);
  }
  if ((char)uStack_af8 == '\0') {
    func_0x0d9377e0(&puStack_bf8,CONCAT44(uStack_b24,uStack_b28) + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e227f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e227f;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d937d90(&puStack_bf8,&uStack_b28,&UNK_013c8798,5);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f406a90;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d938340;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_0cdf8ff0;
    puStack_c20 = &UNK_0d938350;
    puStack_c18 = &UNK_0d938510;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d938040(&puStack_bf8);
    uStack_ab8 = CONCAT71(uStack_ab8._1_7_,(char)uStack_af8);
    uStack_ac8 = uStack_b08;
    uStack_ac4 = uStack_b04;
    iStack_ac0 = (int)uStack_b00;
    uStack_abc = uStack_b00._4_4_;
    uStack_ad8 = uStack_b18;
    uStack_ad4 = uStack_b14;
    uStack_ad0 = uStack_b10;
    uStack_acc = uStack_b0c;
    uStack_ae8 = (long *)CONCAT44(uStack_b24,uStack_b28);
    uStack_ae0 = (long *)CONCAT44(uStack_b1c,uStack_b20);
    func_0x048b0bc0(&uStack_be0);
    func_0x0d9377e0(&puStack_bf8,(long)uStack_ae8 + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e24bf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e24bf;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d937d90(&puStack_bf8,&uStack_ae8,&UNK_0147c53e,8);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f0126a0;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_05daeda0;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_05daea90;
    puStack_c20 = &UNK_0d9386e0;
    puStack_c18 = &UNK_0d938840;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d938040(&puStack_bf8);
    func_0x048b0bc0(&uStack_be0);
  }
  if ((DAT_0f72cc98 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cc98), iVar8 != 0)) {
    func_0x0d93c0e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cc18,0xf53dab8);
    func_0x0410844d(&DAT_0f72cc98);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72cc18 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e2650;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72cc18 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e2650:
    puVar10 = &DAT_0f72cc18;
    if (iRam000000000f72cc78 != -0x2b3da790) goto LAB_0d8e26a8;
LAB_0d8e267b:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e26a8;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    puVar10 = (undefined *)(lVar20 + 9);
    if (bVar22) {
      puVar10 = *(undefined **)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e267b;
LAB_0d8e26a8:
    puVar10 = &UNK_0129d5fc;
    uVar18 = 0xf;
  }
  func_0x0d93c520(&uStack_b28,param_1,puVar10,uVar18);
  uStack_af4 = uStack_af4 & 0xffffff00;
  uStack_af0 = uStack_af0 & 0xffffff00;
  if ((char)uStack_af8 == '\0') {
    func_0x0d93fda0(&puStack_bf8,&UNK_013c28d2,4);
    uVar18 = uStack_bd0 >> 1 & 0x7f;
    lVar20 = (long)&uStack_bd0 + 1;
    lVar17 = lVar20;
    if ((uStack_bd0 & 1) != 0) {
      uVar18 = uStack_bc8;
      lVar17 = lStack_bc0;
    }
    if (uVar18 == 0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uVar16 = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar19 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                   ((int)*(char *)(lVar17 + 2 + uVar19) ^
                   ((int)*(char *)(lVar17 + 1 + uVar19) ^
                   ((int)*(char *)(lVar17 + uVar19) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uVar16) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar14 != uVar18);
      }
    }
    uStack_b00 = CONCAT44(uVar16,2);
    if ((DAT_0f72ccb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ccb8), iVar8 != 0)) {
      func_0x0d93c1f0();
      func_0x0410844d(&DAT_0f72ccb8);
    }
    uStack_c60 = uStack_b00._4_4_;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)CONCAT44(uStack_c50._4_4_,3);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d940360;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_0d93c020;
    puStack_c20 = &UNK_0d940420;
    puStack_c18 = &UNK_0d940430;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(&uStack_b20,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_ad8 = uStack_b10;
    uStack_ad4 = uStack_b0c;
    uStack_ad0 = uStack_b08;
    uStack_acc = uStack_b04;
    func_0x0d9400f0(&uStack_c60,&uStack_ae8,&puStack_bf8);
    if (uStack_c48._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_c48) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != plStack_c58) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_0d8e299f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_c48._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_c48) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e299f;
      }
      if (uStack_c48._4_4_ == 0) {
        *(uint *)((long)uStack_c50 + 0x18) = *(uint *)((long)uStack_c50 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_af0 == '\0') {
      func_0x0d940480(&uStack_c60,&uStack_b28);
    }
    uVar16 = uStack_af4;
    lVar17 = CONCAT44(uStack_b24,uStack_b28);
    if ((DAT_0f72cc98 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cc98), iVar8 != 0)) {
      func_0x0d93c0e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cc18,0xf53dab8);
      func_0x0410844d(&DAT_0f72cc98);
    }
    plVar11 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f72cc18 + 4)) * 8);
    do {
      lVar2 = *plVar11;
      if (lVar2 == -1) goto LAB_0d8e2a30;
      plVar11 = (long *)(*(long *)(lVar17 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f72cc18 + 4))
    ;
    if (plVar11 == *(long **)(lVar17 + 0x38)) {
LAB_0d8e2a30:
      puVar10 = &DAT_0f72cc18;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar21 != puVar3 && (*puVar21 != uVar16)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar3) &&
       (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b11ef),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_c60 = uStack_c60 & 0xffffff00;
    func_0x05d9c620(puVar21 + 2,(long)&uStack_b00 + 4,(long)&uStack_b00 + 4,&uStack_c60);
    uStack_a68 = uStack_b28;
    uStack_a64 = uStack_b24;
    uStack_a60 = uStack_b20;
    uStack_a5c = uStack_b1c;
    uStack_a58 = uStack_b18;
    uStack_a54 = uStack_b14;
    uStack_a50 = uStack_b10;
    uStack_a4c = uStack_b0c;
    uStack_a48 = uStack_b08;
    uStack_a44 = uStack_b04;
    iStack_a40 = (int)uStack_b00;
    uStack_a3c = uStack_b00._4_4_;
    uStack_a38 = uStack_af8;
    uStack_a34 = uStack_af4;
    uStack_a30 = uStack_af0;
    func_0x048b0bc0(&puStack_bf8);
    func_0x0d93fda0(&puStack_bf8,&UNK_0148d071,6);
    uVar18 = uStack_bd0 >> 1 & 0x7f;
    lVar17 = lVar20;
    if ((uStack_bd0 & 1) != 0) {
      uVar18 = uStack_bc8;
      lVar17 = lStack_bc0;
    }
    if (uVar18 == 0) {
      uStack_a3c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_a3c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_a3c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_a3c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_a3c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar18 = 0;
        do {
          uStack_a3c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_a3c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar14 != uVar18);
      }
    }
    iStack_a40 = 2;
    if ((DAT_0f72ccb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ccb8), iVar8 != 0)) {
      func_0x0d93c1f0();
      func_0x0410844d(&DAT_0f72ccb8);
    }
    uStack_c60 = uStack_a3c;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)CONCAT44(uStack_c50._4_4_,3);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d940360;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_0d93c020;
    puStack_c20 = &UNK_0d940640;
    puStack_c18 = &UNK_0d940650;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(&uStack_a60,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_ad8 = uStack_a50;
    uStack_ad4 = uStack_a4c;
    uStack_ad0 = uStack_a48;
    uStack_acc = uStack_a44;
    uStack_ae8 = (long *)CONCAT44(uStack_a5c,uStack_a60);
    uStack_ae0 = (long *)CONCAT44(uStack_a54,uStack_a58);
    func_0x0d9400f0(&uStack_c60,&uStack_ae8,&puStack_bf8);
    if (uStack_c48._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_c48) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != plStack_c58) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_0d8e2daf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_c48._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_c48) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e2daf;
      }
      if (uStack_c48._4_4_ == 0) {
        *(uint *)((long)uStack_c50 + 0x18) = *(uint *)((long)uStack_c50 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_a30 == '\0') {
      func_0x0d940480(&uStack_c60,&uStack_a68);
    }
    uVar16 = uStack_a34;
    lVar17 = CONCAT44(uStack_a64,uStack_a68);
    if ((DAT_0f72cc98 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cc98), iVar8 != 0)) {
      func_0x0d93c0e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cc18,0xf53dab8);
      func_0x0410844d(&DAT_0f72cc98);
    }
    plVar11 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f72cc18 + 4)) * 8);
    do {
      lVar2 = *plVar11;
      if (lVar2 == -1) goto LAB_0d8e2e40;
      plVar11 = (long *)(*(long *)(lVar17 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f72cc18 + 4))
    ;
    if (plVar11 == *(long **)(lVar17 + 0x38)) {
LAB_0d8e2e40:
      puVar10 = &DAT_0f72cc18;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    puVar3 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (puVar21 = *(uint **)(*(long *)(puVar10 + 0x68) + 0x20);
        (puVar21 != puVar3 && (*puVar21 != uVar16)); puVar21 = puVar21 + 0xe) {
    }
    if ((puVar21 == puVar3) &&
       (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b11ef),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_c60 = uStack_c60 & 0xffffff00;
    func_0x05d9c620(puVar21 + 2,&uStack_a3c,&uStack_a3c,&uStack_c60);
    uStack_aa8 = CONCAT44(uStack_a64,uStack_a68);
    uStack_aa0 = (long *)CONCAT44(uStack_a5c,uStack_a60);
    uStack_a98 = uStack_a58;
    uStack_a94 = uStack_a54;
    uStack_a90 = uStack_a50;
    uStack_a8c = uStack_a4c;
    uStack_a88 = uStack_a48;
    uStack_a84 = uStack_a44;
    iStack_a80 = iStack_a40;
    uStack_a7c = uStack_a3c;
    uStack_a78 = CONCAT44(uStack_a34,uStack_a38);
    uStack_a70 = uStack_a30;
    func_0x048b0bc0(&puStack_bf8);
    func_0x0d93fda0(&puStack_bf8,&UNK_0136fd75,7);
    uVar18 = uStack_bd0 >> 1 & 0x7f;
    lVar17 = lVar20;
    if ((uStack_bd0 & 1) != 0) {
      uVar18 = uStack_bc8;
      lVar17 = lStack_bc0;
    }
    if (uVar18 == 0) {
      uStack_a7c = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_a7c = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_a7c = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_a7c = ((int)*(char *)(lVar17 + 3 + uVar19) ^
                       ((int)*(char *)(lVar17 + 2 + uVar19) ^
                       ((int)*(char *)(lVar17 + 1 + uVar19) ^
                       ((int)*(char *)(lVar17 + uVar19) ^ uStack_a7c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar18 = 0;
        do {
          uStack_a7c = ((int)*(char *)(lVar17 + uVar19 + uVar18) ^ uStack_a7c) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar14 != uVar18);
      }
    }
    iStack_a80 = 2;
    if ((DAT_0f72ccb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ccb8), iVar8 != 0)) {
      func_0x0d93c1f0();
      func_0x0410844d(&DAT_0f72ccb8);
    }
    uStack_c60 = uStack_a7c;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)CONCAT44(uStack_c50._4_4_,3);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d940360;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_0d93c020;
    puStack_c20 = &UNK_0d9406a0;
    puStack_c18 = &UNK_0d9406b0;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(&uStack_aa0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar17 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_ad8 = uStack_a90;
    uStack_ad4 = uStack_a8c;
    uStack_ad0 = uStack_a88;
    uStack_acc = uStack_a84;
    uStack_ae8 = uStack_aa0;
    uStack_ae0 = (long *)CONCAT44(uStack_a94,uStack_a98);
    func_0x0d9400f0(&uStack_c60,&uStack_ae8,&puStack_bf8);
    if (uStack_c48._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_c48) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      lVar17 = *(long *)(piVar15 + 0xc);
      while ((long *)lVar17 != plStack_c58) {
        piVar15 = *(int **)(piVar15 + 0xe);
        lVar17 = *(long *)(piVar15 + 0xc);
      }
LAB_0d8e31bf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_c48._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)((long)uStack_c50 + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_c48) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e31bf;
      }
      if (uStack_c48._4_4_ == 0) {
        *(uint *)((long)uStack_c50 + 0x18) = *(uint *)((long)uStack_c50 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_a70 == '\0') {
      func_0x0d940480(&uStack_c60,&uStack_aa8);
    }
    lVar17 = uStack_aa8;
    iVar8 = uStack_a78._4_4_;
    if ((DAT_0f72cc98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f72cc98), iVar9 != 0)) {
      func_0x0d93c0e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cc18,0xf53dab8);
      func_0x0410844d(&DAT_0f72cc98);
    }
    plVar11 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f72cc18 + 4)) * 8);
    do {
      lVar2 = *plVar11;
      if (lVar2 == -1) goto LAB_0d8e3250;
      plVar11 = (long *)(*(long *)(lVar17 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f72cc18 + 4))
    ;
    if (plVar11 == *(long **)(lVar17 + 0x38)) {
LAB_0d8e3250:
      puVar10 = &DAT_0f72cc18;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    piVar4 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar8)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b11ef),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_c60 = uStack_c60 & 0xffffff00;
    func_0x05d9c620(piVar15 + 2,&uStack_a7c,&uStack_a7c,&uStack_c60);
    uStack_ae8 = (long *)uStack_aa8;
    uStack_ae0 = uStack_aa0;
    uStack_ad8 = uStack_a98;
    uStack_ad4 = uStack_a94;
    uStack_ad0 = uStack_a90;
    uStack_acc = uStack_a8c;
    uStack_ac8 = uStack_a88;
    uStack_ac4 = uStack_a84;
    iStack_ac0 = iStack_a80;
    uStack_abc = uStack_a7c;
    uStack_ab8 = uStack_a78;
    uStack_ab0 = uStack_a70;
    func_0x048b0bc0(&puStack_bf8);
    func_0x0d93fda0(&puStack_bf8,&UNK_0140bbac,6);
    uVar18 = uStack_bd0 >> 1 & 0x7f;
    if ((uStack_bd0 & 1) != 0) {
      uVar18 = uStack_bc8;
      lVar20 = lStack_bc0;
    }
    if (uVar18 == 0) {
      uStack_abc = 0x811c9dc5;
    }
    else {
      uVar14 = (ulong)((uint)uVar18 & 3);
      if (uVar18 < 4) {
        uStack_abc = 0x811c9dc5;
        uVar19 = 0;
      }
      else {
        uStack_abc = 0x811c9dc5;
        uVar19 = 0;
        do {
          uStack_abc = ((int)*(char *)(lVar20 + 3 + uVar19) ^
                       ((int)*(char *)(lVar20 + 2 + uVar19) ^
                       ((int)*(char *)(lVar20 + 1 + uVar19) ^
                       ((int)*(char *)(lVar20 + uVar19) ^ uStack_abc) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar19 = uVar19 + 4;
        } while ((uVar18 & 0xfffffffffffffffc) != uVar19);
      }
      if (uVar14 != 0) {
        uVar18 = 0;
        do {
          uStack_abc = ((int)*(char *)(lVar20 + uVar19 + uVar18) ^ uStack_abc) * 0x1000193;
          uVar18 = uVar18 + 1;
        } while (uVar14 != uVar18);
      }
    }
    iStack_ac0 = 2;
    if ((DAT_0f72ccb8 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ccb8), iVar8 != 0)) {
      func_0x0d93c1f0();
      func_0x0410844d(&DAT_0f72ccb8);
    }
    uStack_c60 = uStack_abc;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)CONCAT44(uStack_c50._4_4_,3);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d940360;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_0d93c020;
    puStack_c20 = &UNK_0d940700;
    puStack_c18 = &UNK_0d940710;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(&uStack_ae0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    uStack_a18 = uStack_ad0;
    uStack_a14 = uStack_acc;
    uStack_a10 = uStack_ac8;
    uStack_a0c = uStack_ac4;
    uStack_a28 = (undefined4)uStack_ae0;
    uStack_a24 = uStack_ae0._4_4_;
    uStack_a20 = uStack_ad8;
    uStack_a1c = uStack_ad4;
    func_0x0d9400f0(&uStack_c60,&uStack_a28,&puStack_bf8);
    if (uStack_c48._4_4_ == 2) {
      piVar15 = *(int **)(uStack_c50[0xf] + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_c48) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      plVar11 = *(long **)(piVar15 + 0xc);
      while (plVar11 != plStack_c58) {
        piVar15 = *(int **)(piVar15 + 0xe);
        plVar11 = *(long **)(piVar15 + 0xc);
      }
LAB_0d8e35bf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 9;
    }
    else {
      if (uStack_c48._4_4_ == 1) {
        piVar15 = *(int **)(uStack_c50[0xf] + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_c48) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e35bf;
      }
      if (uStack_c48._4_4_ == 0) {
        *(uint *)(uStack_c50 + 3) = *(uint *)(uStack_c50 + 3) | 0x90000;
      }
    }
    if ((char)uStack_ab0 == '\0') {
      func_0x0d940480(&uStack_c60,&uStack_ae8);
    }
    lVar20 = (long)uStack_ae8;
    iVar8 = uStack_ab8._4_4_;
    if ((DAT_0f72cc98 == '\0') && (iVar9 = func_0x04108328(&DAT_0f72cc98), iVar9 != 0)) {
      func_0x0d93c0e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f72cc18,0xf53dab8);
      func_0x0410844d(&DAT_0f72cc98);
    }
    plVar11 = (long *)(*(long *)(lVar20 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f72cc18 + 4)) * 8);
    do {
      lVar17 = *plVar11;
      if (lVar17 == -1) goto LAB_0d8e3650;
      plVar11 = (long *)(*(long *)(lVar20 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar20 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f72cc18 + 4)
            );
    if (plVar11 == *(long **)(lVar20 + 0x38)) {
LAB_0d8e3650:
      puVar10 = &DAT_0f72cc18;
    }
    else {
      puVar10 = (undefined *)plVar11[2];
    }
    piVar4 = *(int **)(*(long *)(puVar10 + 0x68) + 0x28);
    for (piVar15 = *(int **)(*(long *)(puVar10 + 0x68) + 0x20);
        (piVar15 != piVar4 && (*piVar15 != iVar8)); piVar15 = piVar15 + 0xe) {
    }
    if ((piVar15 == piVar4) &&
       (cVar7 = FUN_0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_011b11ef),
       cVar7 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    uStack_c60 = uStack_c60 & 0xffffff00;
    func_0x05d9c620(piVar15 + 2,&uStack_abc,&uStack_abc,&uStack_c60);
    func_0x048b0bc0(&puStack_bf8);
  }
  func_0x0ecaf190(param_1);
  if ((DAT_0f72cd50 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72cd50), iVar8 != 0)) {
    func_0x0d940820();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72ccd0,0xf53dab8);
    func_0x0410844d(&DAT_0f72cd50);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72ccd0 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e3750;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72ccd0 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e3750:
    puVar10 = &DAT_0f72ccd0;
    if (iRam000000000f72cd30 != -0x2b3da790) goto LAB_0d8e37bd;
LAB_0d8e377b:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e37bd;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar17 = lVar20 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0d940c50(&uStack_b28,param_1,lVar17,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e377b;
LAB_0d8e37bd:
    func_0x0d940c50(&uStack_b28,param_1,&UNK_01235524,0x14);
  }
  if ((char)uStack_af8 == '\0') {
    func_0x0d941240(&puStack_bf8,CONCAT44(uStack_b24,uStack_b28) + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e385f:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e385f;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d9417a0(&puStack_bf8,&uStack_b28,&UNK_011a1060,0xd);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f48fcb8;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d9452a0;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_0d944cb0;
    puStack_c20 = &UNK_0d9452b0;
    puStack_c18 = &UNK_0d945410;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d941ab0(&puStack_bf8);
    cStack_9b8 = (char)uStack_af8;
    uStack_9c8 = uStack_b08;
    uStack_9c4 = uStack_b04;
    iStack_9c0 = (int)uStack_b00;
    uStack_9bc = uStack_b00._4_4_;
    uStack_9d8 = uStack_b18;
    uStack_9d4 = uStack_b14;
    uStack_9d0 = uStack_b10;
    uStack_9cc = uStack_b0c;
    uStack_9e8 = uStack_b28;
    uStack_9e4 = uStack_b24;
    uStack_9e0 = uStack_b20;
    uStack_9dc = uStack_b1c;
    func_0x048b0bc0(&uStack_be0);
    uStack_a28 = uStack_9e8;
    uStack_a24 = uStack_9e4;
    uStack_a20 = uStack_9e0;
    uStack_a1c = uStack_9dc;
    uStack_a18 = uStack_9d8;
    uStack_a14 = uStack_9d4;
    uStack_a10 = uStack_9d0;
    uStack_a0c = uStack_9cc;
    uStack_a08 = uStack_9c8;
    uStack_a04 = uStack_9c4;
    iStack_a00 = iStack_9c0;
    uStack_9fc = uStack_9bc;
    uStack_9f8 = CONCAT71(uStack_9b7,cStack_9b8);
    func_0x0d941240(&puStack_bf8,CONCAT44(uStack_9e4,uStack_9e8) + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e3adf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e3adf;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d9417a0(&puStack_bf8,&uStack_a28,&UNK_014a2083,0x22);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0ef46ef8;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_04906f70;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_04906c50;
    puStack_c20 = &UNK_0d945860;
    puStack_c18 = &UNK_0d9459c0;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d941ab0(&puStack_bf8);
    uStack_a38 = CONCAT31(uStack_a38._1_3_,(undefined1)uStack_9f8);
    uStack_a48 = uStack_a08;
    uStack_a44 = uStack_a04;
    iStack_a40 = iStack_a00;
    uStack_a3c = uStack_9fc;
    uStack_a58 = uStack_a18;
    uStack_a54 = uStack_a14;
    uStack_a50 = uStack_a10;
    uStack_a4c = uStack_a0c;
    uStack_a68 = uStack_a28;
    uStack_a64 = uStack_a24;
    uStack_a60 = uStack_a20;
    uStack_a5c = uStack_a1c;
    func_0x048b0bc0(&uStack_be0);
    uStack_aa8 = CONCAT44(uStack_a64,uStack_a68);
    uStack_aa0 = (long *)CONCAT44(uStack_a5c,uStack_a60);
    uStack_a98 = uStack_a58;
    uStack_a94 = uStack_a54;
    uStack_a90 = uStack_a50;
    uStack_a8c = uStack_a4c;
    uStack_a88 = uStack_a48;
    uStack_a84 = uStack_a44;
    iStack_a80 = iStack_a40;
    uStack_a7c = uStack_a3c;
    uStack_a78 = CONCAT44(uStack_a34,uStack_a38);
    func_0x0d941240(&puStack_bf8,uStack_aa8 + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e3daf:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e3daf;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d9417a0(&puStack_bf8,&uStack_aa8,&DAT_01405d39,0x11);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f0126a0;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_05daeda0;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &SUB_05daea90;
    puStack_c20 = &UNK_0d945ba0;
    puStack_c18 = &UNK_0d945d00;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d941ab0(&puStack_bf8);
    uStack_ab8 = CONCAT71(uStack_ab8._1_7_,(undefined1)uStack_a78);
    uStack_ac8 = uStack_a88;
    uStack_ac4 = uStack_a84;
    iStack_ac0 = iStack_a80;
    uStack_abc = uStack_a7c;
    uStack_ad8 = uStack_a98;
    uStack_ad4 = uStack_a94;
    uStack_ad0 = uStack_a90;
    uStack_acc = uStack_a8c;
    uStack_ae8 = (long *)uStack_aa8;
    uStack_ae0 = uStack_aa0;
    func_0x048b0bc0(&uStack_be0);
    func_0x0d941240(&puStack_bf8,(long)uStack_ae8 + 0x18);
    if (uStack_be0._4_4_ == 2) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x16;
        iVar8 = *piVar15;
      }
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
      while (puVar5 != puStack_bf0) {
        piVar15 = *(int **)(piVar15 + 0xe);
        puVar5 = *(undefined4 **)(piVar15 + 0xc);
      }
LAB_0d8e3fef:
      *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
    }
    else {
      if (uStack_be0._4_4_ == 1) {
        piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
        iVar8 = *piVar15;
        while (iVar8 != (int)uStack_be0) {
          piVar15 = piVar15 + 0x1a;
          iVar8 = *piVar15;
        }
        goto LAB_0d8e3fef;
      }
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
    }
    func_0x0d9417a0(&puStack_bf8,&uStack_ae8,&UNK_014a2673,0xc);
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar11 = (long)&UNK_0f48ade8;
    if (uStack_be0 != (long *)0x0) {
      lVar20 = *uStack_be0;
      uStack_be0 = plVar11;
      (**(code **)(lVar20 + 8))();
      plVar11 = uStack_be0;
    }
    uStack_be0 = plVar11;
    uStack_c60 = uStack_be8;
    plStack_c58 = (long *)0x0;
    uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
    uStack_c48 = 1;
    uStack_c40 = 0;
    puStack_c38 = &UNK_0d940360;
    puStack_c30 = &SUB_048b06d0;
    puStack_c28 = &UNK_0d93c020;
    puStack_c20 = &UNK_0d945ee0;
    puStack_c18 = &UNK_0d946040;
    uStack_c10 = 0;
    uStack_c08 = 0;
    plStack_c00 = (long *)0x0;
    func_0x048b05a0(puStack_bf0,&uStack_c60);
    plVar11 = plStack_c00;
    if (plStack_c00 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c00 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
        FUN_0412c2d0(plVar11);
      }
    }
    func_0x0d941ab0(&puStack_bf8);
    func_0x048b0bc0(&uStack_be0);
  }
  func_0x0d8e82b0(param_1);
  func_0x0d8e8540(param_1);
  func_0x0e72a950(param_1);
  func_0x0d8deae0(param_1);
  if ((DAT_0f72ce90 == '\0') && (iVar8 = func_0x04108328(&DAT_0f72ce90), iVar8 != 0)) {
    func_0x0d950bf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f72ce10,0xf53dab8);
    func_0x0410844d(&DAT_0f72ce90);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f72ce10 + 4)) * 8);
  do {
    lVar20 = *plVar11;
    if (lVar20 == -1) goto LAB_0d8e41a0;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f72ce10 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0d8e41a0:
    puVar10 = &DAT_0f72ce10;
    if (iRam000000000f72ce70 != -0x2b3da790) goto LAB_0d8e420d;
LAB_0d8e41cb:
    lVar20 = *(long *)(puVar10 + 0x68);
    if (lVar20 == 0) goto LAB_0d8e420d;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar17 = lVar20 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar20 + 0x18);
    }
    uVar18 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar18 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0d951e20(&uStack_b28,param_1,lVar17,uVar18);
  }
  else {
    puVar10 = (undefined *)plVar11[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0d8e41cb;
LAB_0d8e420d:
    func_0x0d951e20(&uStack_b28,param_1,&UNK_0148d078,0xf);
  }
  if ((char)uStack_af8 != '\0') {
    return;
  }
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_b24,uStack_b28) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e42af:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e42af;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_b28,&UNK_01226e4e,8,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f0126a0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_05daeda0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_05daea90;
  puStack_c20 = &UNK_0d9530a0;
  puStack_c18 = &UNK_0d953200;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  cStack_4b8 = (char)uStack_af8;
  uStack_4c8 = uStack_b08;
  uStack_4c4 = uStack_b04;
  uStack_4c0 = (int)uStack_b00;
  uStack_4bc = uStack_b00._4_4_;
  uStack_4d8 = uStack_b18;
  uStack_4d4 = uStack_b14;
  uStack_4d0 = uStack_b10;
  uStack_4cc = uStack_b0c;
  uStack_4e8 = uStack_b28;
  uStack_4e4 = uStack_b24;
  uStack_4e0 = uStack_b20;
  uStack_4dc = uStack_b1c;
  func_0x048b0bc0(&uStack_be0);
  uStack_9a8 = uStack_4e8;
  uStack_9a4 = uStack_4e4;
  uStack_9a0 = uStack_4e0;
  uStack_99c = uStack_4dc;
  uStack_998 = uStack_4d8;
  uStack_994 = uStack_4d4;
  uStack_990 = uStack_4d0;
  uStack_98c = uStack_4cc;
  uStack_988 = uStack_4c8;
  uStack_984 = uStack_4c4;
  uStack_980 = uStack_4c0;
  uStack_97c = uStack_4bc;
  uStack_978 = CONCAT71(uStack_4b7,cStack_4b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_4e4,uStack_4e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e452f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e452f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_9a8,&UNK_0119dc14,0x1d,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f0126a0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_05daeda0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_05daea90;
  puStack_c20 = &UNK_0d9533d0;
  puStack_c18 = &UNK_0d953530;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_478 = (undefined1)uStack_978;
  uStack_488 = uStack_988;
  uStack_484 = uStack_984;
  uStack_480 = uStack_980;
  uStack_47c = uStack_97c;
  uStack_498 = uStack_998;
  uStack_494 = uStack_994;
  uStack_490 = uStack_990;
  uStack_48c = uStack_98c;
  uStack_4a8 = uStack_9a8;
  uStack_4a4 = uStack_9a4;
  uStack_4a0 = uStack_9a0;
  uStack_49c = uStack_99c;
  func_0x048b0bc0(&uStack_be0);
  uStack_968 = uStack_4a8;
  uStack_964 = uStack_4a4;
  uStack_960 = uStack_4a0;
  uStack_95c = uStack_49c;
  uStack_958 = uStack_498;
  uStack_954 = uStack_494;
  uStack_950 = uStack_490;
  uStack_94c = uStack_48c;
  uStack_948 = uStack_488;
  uStack_944 = uStack_484;
  uStack_940 = uStack_480;
  uStack_93c = uStack_47c;
  uStack_938 = CONCAT71(uStack_477,uStack_478);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_4a4,uStack_4a8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e47ff:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e47ff;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_968,&UNK_011ed3ce,5,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d953710;
  puStack_c18 = &UNK_0d953870;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_438 = (undefined1)uStack_938;
  uStack_448 = uStack_948;
  uStack_444 = uStack_944;
  uStack_440 = uStack_940;
  uStack_43c = uStack_93c;
  uStack_458 = uStack_958;
  uStack_454 = uStack_954;
  uStack_450 = uStack_950;
  uStack_44c = uStack_94c;
  uStack_468 = uStack_968;
  uStack_464 = uStack_964;
  uStack_460 = uStack_960;
  uStack_45c = uStack_95c;
  func_0x048b0bc0(&uStack_be0);
  uStack_928 = uStack_468;
  uStack_924 = uStack_464;
  uStack_920 = uStack_460;
  uStack_91c = uStack_45c;
  uStack_918 = uStack_458;
  uStack_914 = uStack_454;
  uStack_910 = uStack_450;
  uStack_90c = uStack_44c;
  uStack_908 = uStack_448;
  uStack_904 = uStack_444;
  uStack_900 = uStack_440;
  uStack_8fc = uStack_43c;
  uStack_8f8 = CONCAT71(uStack_437,uStack_438);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_464,uStack_468) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e4a7f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e4a7f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_928,&UNK_01298bc1,8,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d953a50;
  puStack_c18 = &UNK_0d953bb0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_3f8 = (undefined1)uStack_8f8;
  uStack_408 = uStack_908;
  uStack_404 = uStack_904;
  uStack_400 = uStack_900;
  uStack_3fc = uStack_8fc;
  uStack_418 = uStack_918;
  uStack_414 = uStack_914;
  uStack_410 = uStack_910;
  uStack_40c = uStack_90c;
  uStack_428 = uStack_928;
  uStack_424 = uStack_924;
  uStack_420 = uStack_920;
  uStack_41c = uStack_91c;
  func_0x048b0bc0(&uStack_be0);
  uStack_8e8 = uStack_428;
  uStack_8e4 = uStack_424;
  uStack_8e0 = uStack_420;
  uStack_8dc = uStack_41c;
  uStack_8d8 = uStack_418;
  uStack_8d4 = uStack_414;
  uStack_8d0 = uStack_410;
  uStack_8cc = uStack_40c;
  uStack_8c8 = uStack_408;
  uStack_8c4 = uStack_404;
  uStack_8c0 = uStack_400;
  uStack_8bc = uStack_3fc;
  uStack_8b8 = CONCAT71(uStack_3f7,uStack_3f8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_424,uStack_428) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e4cef:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e4cef;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_8e8,&UNK_01430510,6,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d953d90;
  puStack_c18 = &UNK_0d953ef0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_3b8 = (undefined1)uStack_8b8;
  uStack_3c8 = uStack_8c8;
  uStack_3c4 = uStack_8c4;
  uStack_3c0 = uStack_8c0;
  uStack_3bc = uStack_8bc;
  uStack_3d8 = uStack_8d8;
  uStack_3d4 = uStack_8d4;
  uStack_3d0 = uStack_8d0;
  uStack_3cc = uStack_8cc;
  uStack_3e8 = uStack_8e8;
  uStack_3e4 = uStack_8e4;
  uStack_3e0 = uStack_8e0;
  uStack_3dc = uStack_8dc;
  func_0x048b0bc0(&uStack_be0);
  uStack_8a8 = uStack_3e8;
  uStack_8a4 = uStack_3e4;
  uStack_8a0 = uStack_3e0;
  uStack_89c = uStack_3dc;
  uStack_898 = uStack_3d8;
  uStack_894 = uStack_3d4;
  uStack_890 = uStack_3d0;
  uStack_88c = uStack_3cc;
  uStack_888 = uStack_3c8;
  uStack_884 = uStack_3c4;
  uStack_880 = uStack_3c0;
  uStack_87c = uStack_3bc;
  uStack_878 = CONCAT71(uStack_3b7,uStack_3b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_3e4,uStack_3e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e4f5f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e4f5f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_8a8,&UNK_0128e8db,6,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d9540d0;
  puStack_c18 = &UNK_0d954230;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_378 = (undefined1)uStack_878;
  uStack_388 = uStack_888;
  uStack_384 = uStack_884;
  uStack_380 = uStack_880;
  uStack_37c = uStack_87c;
  uStack_398 = uStack_898;
  uStack_394 = uStack_894;
  uStack_390 = uStack_890;
  uStack_38c = uStack_88c;
  uStack_3a8 = uStack_8a8;
  uStack_3a4 = uStack_8a4;
  uStack_3a0 = uStack_8a0;
  uStack_39c = uStack_89c;
  func_0x048b0bc0(&uStack_be0);
  uStack_868 = uStack_3a8;
  uStack_864 = uStack_3a4;
  uStack_860 = uStack_3a0;
  uStack_85c = uStack_39c;
  uStack_858 = uStack_398;
  uStack_854 = uStack_394;
  uStack_850 = uStack_390;
  uStack_84c = uStack_38c;
  uStack_848 = uStack_388;
  uStack_844 = uStack_384;
  uStack_840 = uStack_380;
  uStack_83c = uStack_37c;
  uStack_838 = CONCAT71(uStack_377,uStack_378);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_3a4,uStack_3a8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e51cf:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e51cf;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_868,&UNK_0134eaac,9,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d954410;
  puStack_c18 = &UNK_0d954570;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_338 = (undefined1)uStack_838;
  uStack_348 = uStack_848;
  uStack_344 = uStack_844;
  uStack_340 = uStack_840;
  uStack_33c = uStack_83c;
  uStack_358 = uStack_858;
  uStack_354 = uStack_854;
  uStack_350 = uStack_850;
  uStack_34c = uStack_84c;
  uStack_368 = uStack_868;
  uStack_364 = uStack_864;
  uStack_360 = uStack_860;
  uStack_35c = uStack_85c;
  func_0x048b0bc0(&uStack_be0);
  uStack_828 = uStack_368;
  uStack_824 = uStack_364;
  uStack_820 = uStack_360;
  uStack_81c = uStack_35c;
  uStack_818 = uStack_358;
  uStack_814 = uStack_354;
  uStack_810 = uStack_350;
  uStack_80c = uStack_34c;
  uStack_808 = uStack_348;
  uStack_804 = uStack_344;
  uStack_800 = uStack_340;
  uStack_7fc = uStack_33c;
  uStack_7f8 = CONCAT71(uStack_337,uStack_338);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_364,uStack_368) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e543f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e543f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_828,&UNK_0124beb9,9,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ef8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_04906f70;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_04906c50;
  puStack_c20 = &UNK_0d954750;
  puStack_c18 = &UNK_0d9548b0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_2f8 = (undefined1)uStack_7f8;
  uStack_308 = uStack_808;
  uStack_304 = uStack_804;
  uStack_300 = uStack_800;
  uStack_2fc = uStack_7fc;
  uStack_318 = uStack_818;
  uStack_314 = uStack_814;
  uStack_310 = uStack_810;
  uStack_30c = uStack_80c;
  uStack_328 = uStack_828;
  uStack_324 = uStack_824;
  uStack_320 = uStack_820;
  uStack_31c = uStack_81c;
  func_0x048b0bc0(&uStack_be0);
  uStack_7e8 = uStack_328;
  uStack_7e4 = uStack_324;
  uStack_7e0 = uStack_320;
  uStack_7dc = uStack_31c;
  uStack_7d8 = uStack_318;
  uStack_7d4 = uStack_314;
  uStack_7d0 = uStack_310;
  uStack_7cc = uStack_30c;
  uStack_7c8 = uStack_308;
  uStack_7c4 = uStack_304;
  uStack_7c0 = uStack_300;
  uStack_7bc = uStack_2fc;
  uStack_7b8 = CONCAT71(uStack_2f7,uStack_2f8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_324,uStack_328) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e56af:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e56af;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_7e8,&UNK_011c6e32,9,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ce8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0490ce30;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_0490cb20;
  puStack_c20 = &UNK_0d954a90;
  puStack_c18 = &UNK_0d954bf0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_2b8 = (undefined1)uStack_7b8;
  uStack_2c8 = uStack_7c8;
  uStack_2c4 = uStack_7c4;
  uStack_2c0 = uStack_7c0;
  uStack_2bc = uStack_7bc;
  uStack_2d8 = uStack_7d8;
  uStack_2d4 = uStack_7d4;
  uStack_2d0 = uStack_7d0;
  uStack_2cc = uStack_7cc;
  uStack_2e8 = uStack_7e8;
  uStack_2e4 = uStack_7e4;
  uStack_2e0 = uStack_7e0;
  uStack_2dc = uStack_7dc;
  func_0x048b0bc0(&uStack_be0);
  uStack_7a8 = uStack_2e8;
  uStack_7a4 = uStack_2e4;
  uStack_7a0 = uStack_2e0;
  uStack_79c = uStack_2dc;
  uStack_798 = uStack_2d8;
  uStack_794 = uStack_2d4;
  uStack_790 = uStack_2d0;
  uStack_78c = uStack_2cc;
  uStack_788 = uStack_2c8;
  uStack_784 = uStack_2c4;
  uStack_780 = uStack_2c0;
  uStack_77c = uStack_2bc;
  uStack_778 = CONCAT71(uStack_2b7,uStack_2b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_2e4,uStack_2e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e592f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e592f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_7a8,&UNK_0142095c,0xd,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef46ce8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0490ce30;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_0490cb20;
  puStack_c20 = &UNK_0d954dd0;
  puStack_c18 = &UNK_0d954f30;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_278 = (undefined1)uStack_778;
  uStack_288 = uStack_788;
  uStack_284 = uStack_784;
  uStack_280 = uStack_780;
  uStack_27c = uStack_77c;
  uStack_298 = uStack_798;
  uStack_294 = uStack_794;
  uStack_290 = uStack_790;
  uStack_28c = uStack_78c;
  uStack_2a8 = uStack_7a8;
  uStack_2a4 = uStack_7a4;
  uStack_2a0 = uStack_7a0;
  uStack_29c = uStack_79c;
  func_0x048b0bc0(&uStack_be0);
  uStack_568 = uStack_2a8;
  uStack_564 = uStack_2a4;
  uStack_560 = uStack_2a0;
  uStack_55c = uStack_29c;
  uStack_558 = uStack_298;
  uStack_554 = uStack_294;
  uStack_550 = uStack_290;
  uStack_54c = uStack_28c;
  uStack_548 = uStack_288;
  uStack_544 = uStack_284;
  uStack_540 = uStack_280;
  uStack_53c = uStack_27c;
  uStack_538 = CONCAT71(uStack_277,uStack_278);
  func_0x0d952a80(&puStack_bf8,&uStack_568,&UNK_011ab9d0,0xf,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f0123c0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_05e08030;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_05e07cf0;
  puStack_c20 = &UNK_0d955110;
  puStack_c18 = &UNK_0d9552c0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_238 = (undefined1)uStack_538;
  uStack_248 = uStack_548;
  uStack_244 = uStack_544;
  uStack_240 = uStack_540;
  uStack_23c = uStack_53c;
  uStack_258 = uStack_558;
  uStack_254 = uStack_554;
  uStack_250 = uStack_550;
  uStack_24c = uStack_54c;
  uStack_268 = uStack_568;
  uStack_264 = uStack_564;
  uStack_260 = uStack_560;
  uStack_25c = uStack_55c;
  func_0x048b0bc0(&uStack_be0);
  uStack_528 = uStack_268;
  uStack_524 = uStack_264;
  uStack_520 = uStack_260;
  uStack_51c = uStack_25c;
  uStack_518 = uStack_258;
  uStack_514 = uStack_254;
  uStack_510 = uStack_250;
  uStack_50c = uStack_24c;
  uStack_508 = uStack_248;
  uStack_504 = uStack_244;
  uStack_500 = uStack_240;
  uStack_4fc = uStack_23c;
  uStack_4f8 = CONCAT71(uStack_237,uStack_238);
  func_0x0d952a80(&puStack_bf8,&uStack_528,&UNK_0143b861,0xe,0);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f0123c0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_05e08030;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_05e07cf0;
  puStack_c20 = &UNK_0d9554a0;
  puStack_c18 = &UNK_0d955650;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_1f8 = (undefined1)uStack_4f8;
  uStack_208 = uStack_508;
  uStack_204 = uStack_504;
  uStack_200 = uStack_500;
  uStack_1fc = uStack_4fc;
  uStack_218 = uStack_518;
  uStack_214 = uStack_514;
  uStack_210 = uStack_510;
  uStack_20c = uStack_50c;
  uStack_228 = uStack_528;
  uStack_224 = uStack_524;
  uStack_220 = uStack_520;
  uStack_21c = uStack_51c;
  func_0x048b0bc0(&uStack_be0);
  uStack_768 = uStack_228;
  uStack_764 = uStack_224;
  uStack_760 = uStack_220;
  uStack_75c = uStack_21c;
  uStack_758 = uStack_218;
  uStack_754 = uStack_214;
  uStack_750 = uStack_210;
  uStack_74c = uStack_20c;
  uStack_748 = uStack_208;
  uStack_744 = uStack_204;
  uStack_740 = uStack_200;
  uStack_73c = uStack_1fc;
  uStack_738 = CONCAT71(uStack_1f7,uStack_1f8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_224,uStack_228) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e5edf:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e5edf;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_768,&UNK_01298bca,0x12,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f0126a0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_05daeda0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_05daea90;
  puStack_c20 = &UNK_0d955830;
  puStack_c18 = &UNK_0d9559a0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_1b8 = (undefined1)uStack_738;
  uStack_1c8 = uStack_748;
  uStack_1c4 = uStack_744;
  uStack_1c0 = uStack_740;
  uStack_1bc = uStack_73c;
  uStack_1d8 = uStack_758;
  uStack_1d4 = uStack_754;
  uStack_1d0 = uStack_750;
  uStack_1cc = uStack_74c;
  uStack_1e8 = uStack_768;
  uStack_1e4 = uStack_764;
  uStack_1e0 = uStack_760;
  uStack_1dc = uStack_75c;
  func_0x048b0bc0(&uStack_be0);
  uStack_728 = uStack_1e8;
  uStack_724 = uStack_1e4;
  uStack_720 = uStack_1e0;
  uStack_71c = uStack_1dc;
  uStack_718 = uStack_1d8;
  uStack_714 = uStack_1d4;
  uStack_710 = uStack_1d0;
  uStack_70c = uStack_1cc;
  uStack_708 = uStack_1c8;
  uStack_704 = uStack_1c4;
  uStack_700 = uStack_1c0;
  uStack_6fc = uStack_1bc;
  uStack_6f8 = CONCAT71(uStack_1b7,uStack_1b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_1e4,uStack_1e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e615f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e615f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_728,&DAT_011fbabf,0x12,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48b048;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d955dc0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d93a040;
  puStack_c20 = &UNK_0d955e80;
  puStack_c18 = &UNK_0d956140;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_178 = (undefined1)uStack_6f8;
  uStack_188 = uStack_708;
  uStack_184 = uStack_704;
  uStack_180 = uStack_700;
  uStack_17c = uStack_6fc;
  uStack_198 = uStack_718;
  uStack_194 = uStack_714;
  uStack_190 = uStack_710;
  uStack_18c = uStack_70c;
  uStack_1a8 = uStack_728;
  uStack_1a4 = uStack_724;
  uStack_1a0 = uStack_720;
  uStack_19c = uStack_71c;
  func_0x048b0bc0(&uStack_be0);
  uStack_6e8 = uStack_1a8;
  uStack_6e4 = uStack_1a4;
  uStack_6e0 = uStack_1a0;
  uStack_6dc = uStack_19c;
  uStack_6d8 = uStack_198;
  uStack_6d4 = uStack_194;
  uStack_6d0 = uStack_190;
  uStack_6cc = uStack_18c;
  uStack_6c8 = uStack_188;
  uStack_6c4 = uStack_184;
  uStack_6c0 = uStack_180;
  uStack_6bc = uStack_17c;
  uStack_6b8 = CONCAT71(uStack_177,uStack_178);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_1a4,uStack_1a8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e63df:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e63df;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_6e8,&DAT_0134e268,0x11,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f490000;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d9567f0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_0d94b4c0;
  puStack_c20 = &UNK_0d956800;
  puStack_c18 = &UNK_0d9569d0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_138 = (undefined1)uStack_6b8;
  uStack_148 = uStack_6c8;
  uStack_144 = uStack_6c4;
  uStack_140 = uStack_6c0;
  uStack_13c = uStack_6bc;
  uStack_158 = uStack_6d8;
  uStack_154 = uStack_6d4;
  uStack_150 = uStack_6d0;
  uStack_14c = uStack_6cc;
  uStack_168 = uStack_6e8;
  uStack_164 = uStack_6e4;
  uStack_160 = uStack_6e0;
  uStack_15c = uStack_6dc;
  func_0x048b0bc0(&uStack_be0);
  uStack_6a8 = uStack_168;
  uStack_6a4 = uStack_164;
  uStack_6a0 = uStack_160;
  uStack_69c = uStack_15c;
  uStack_698 = uStack_158;
  uStack_694 = uStack_154;
  uStack_690 = uStack_150;
  uStack_68c = uStack_14c;
  uStack_688 = uStack_148;
  uStack_684 = uStack_144;
  uStack_680 = uStack_140;
  uStack_67c = uStack_13c;
  uStack_678 = CONCAT71(uStack_137,uStack_138);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_164,uStack_168) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e665f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e665f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_6a8,&UNK_01416af7,0xd,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef44b00;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_048b3f30;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_048b2190;
  puStack_c20 = &UNK_0d956e40;
  puStack_c18 = &UNK_0d957010;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_f8 = (undefined1)uStack_678;
  uStack_108 = uStack_688;
  uStack_104 = uStack_684;
  uStack_100 = uStack_680;
  uStack_fc = uStack_67c;
  uStack_118 = uStack_698;
  uStack_114 = uStack_694;
  uStack_110 = uStack_690;
  uStack_10c = uStack_68c;
  uStack_128 = uStack_6a8;
  uStack_124 = uStack_6a4;
  uStack_120 = uStack_6a0;
  uStack_11c = uStack_69c;
  func_0x048b0bc0(&uStack_be0);
  uStack_668 = uStack_128;
  uStack_664 = uStack_124;
  uStack_660 = uStack_120;
  uStack_65c = uStack_11c;
  uStack_658 = uStack_118;
  uStack_654 = uStack_114;
  uStack_650 = uStack_110;
  uStack_64c = uStack_10c;
  uStack_648 = uStack_108;
  uStack_644 = uStack_104;
  uStack_640 = uStack_100;
  uStack_63c = uStack_fc;
  uStack_638 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_124,uStack_128) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e68df:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e68df;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_668,&UNK_0136b453,9,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48b0c0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d957420;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d938a20;
  puStack_c20 = &UNK_0d9574e0;
  puStack_c18 = &UNK_0d9576c0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_b8 = (undefined1)uStack_638;
  uStack_c8 = uStack_648;
  uStack_c4 = uStack_644;
  uStack_c0 = uStack_640;
  uStack_bc = uStack_63c;
  uStack_d8 = uStack_658;
  uStack_d4 = uStack_654;
  uStack_d0 = uStack_650;
  uStack_cc = uStack_64c;
  uStack_e8 = uStack_668;
  uStack_e4 = uStack_664;
  uStack_e0 = uStack_660;
  uStack_dc = uStack_65c;
  func_0x048b0bc0(&uStack_be0);
  uStack_628 = uStack_e8;
  uStack_624 = uStack_e4;
  uStack_620 = uStack_e0;
  uStack_61c = uStack_dc;
  uStack_618 = uStack_d8;
  uStack_614 = uStack_d4;
  uStack_610 = uStack_d0;
  uStack_60c = uStack_cc;
  uStack_608 = uStack_c8;
  uStack_604 = uStack_c4;
  uStack_600 = uStack_c0;
  uStack_5fc = uStack_bc;
  uStack_5f8 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_e4,uStack_e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e6b5f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e6b5f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_628,&UNK_01333bc3,0xb,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48b138;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d957d80;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d936a80;
  puStack_c20 = &UNK_0d957e40;
  puStack_c18 = &UNK_0d958030;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_78 = (undefined1)uStack_5f8;
  uStack_88 = uStack_608;
  uStack_84 = uStack_604;
  uStack_80 = uStack_600;
  uStack_7c = uStack_5fc;
  uStack_98 = uStack_618;
  uStack_94 = uStack_614;
  uStack_90 = uStack_610;
  uStack_8c = uStack_60c;
  uStack_a8 = uStack_628;
  uStack_a4 = uStack_624;
  uStack_a0 = uStack_620;
  uStack_9c = uStack_61c;
  func_0x048b0bc0(&uStack_be0);
  uStack_5e8 = uStack_a8;
  uStack_5e4 = uStack_a4;
  uStack_5e0 = uStack_a0;
  uStack_5dc = uStack_9c;
  uStack_5d8 = uStack_98;
  uStack_5d4 = uStack_94;
  uStack_5d0 = uStack_90;
  uStack_5cc = uStack_8c;
  uStack_5c8 = uStack_88;
  uStack_5c4 = uStack_84;
  uStack_5c0 = uStack_80;
  uStack_5bc = uStack_7c;
  uStack_5b8 = CONCAT71(uStack_77,uStack_78);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_a4,uStack_a8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e6ddf:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e6ddf;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_5e8,&DAT_0123036a,0x11,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48b1b0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d9586a0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d940760;
  puStack_c20 = &UNK_0d958760;
  puStack_c18 = &UNK_0d9588c0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_38 = (undefined1)uStack_5b8;
  uStack_48 = uStack_5c8;
  uStack_44 = uStack_5c4;
  uStack_40 = uStack_5c0;
  uStack_3c = uStack_5bc;
  uStack_58 = uStack_5d8;
  uStack_54 = uStack_5d4;
  uStack_50 = uStack_5d0;
  uStack_4c = uStack_5cc;
  uStack_68 = uStack_5e8;
  uStack_64 = uStack_5e4;
  uStack_60 = uStack_5e0;
  uStack_5c = uStack_5dc;
  func_0x048b0bc0(&uStack_be0);
  uStack_5a8 = uStack_68;
  uStack_5a4 = uStack_64;
  uStack_5a0 = uStack_60;
  uStack_59c = uStack_5c;
  uStack_598 = uStack_58;
  uStack_594 = uStack_54;
  uStack_590 = uStack_50;
  uStack_58c = uStack_4c;
  uStack_588 = uStack_48;
  uStack_584 = uStack_44;
  uStack_580 = uStack_40;
  uStack_57c = uStack_3c;
  uStack_578 = CONCAT71(uStack_37,uStack_38);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e705f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e705f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_5a8,&UNK_011c6e3c,9,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48af38;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d94a7c0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d9464b0;
  puStack_c20 = &UNK_0d958d40;
  puStack_c18 = &UNK_0d958ea0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  cStack_9b8 = (undefined1)uStack_578;
  uStack_9c8 = uStack_588;
  uStack_9c4 = uStack_584;
  iStack_9c0 = uStack_580;
  uStack_9bc = uStack_57c;
  uStack_9d8 = uStack_598;
  uStack_9d4 = uStack_594;
  uStack_9d0 = uStack_590;
  uStack_9cc = uStack_58c;
  uStack_9e8 = uStack_5a8;
  uStack_9e4 = uStack_5a4;
  uStack_9e0 = uStack_5a0;
  uStack_9dc = uStack_59c;
  func_0x048b0bc0(&uStack_be0);
  uStack_a28 = uStack_9e8;
  uStack_a24 = uStack_9e4;
  uStack_a20 = uStack_9e0;
  uStack_a1c = uStack_9dc;
  uStack_a18 = uStack_9d8;
  uStack_a14 = uStack_9d4;
  uStack_a10 = uStack_9d0;
  uStack_a0c = uStack_9cc;
  uStack_a08 = uStack_9c8;
  uStack_a04 = uStack_9c4;
  iStack_a00 = iStack_9c0;
  uStack_9fc = uStack_9bc;
  uStack_9f8 = CONCAT71(uStack_9b7,cStack_9b8);
  func_0x0d952410(&puStack_bf8,CONCAT44(uStack_9e4,uStack_9e8) + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e72df:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e72df;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_a28,&UNK_012fe292,0xb,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0ef474e0;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_049119f0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0490fc00;
  puStack_c20 = &UNK_0d959310;
  puStack_c18 = &UNK_0d959520;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_a38 = CONCAT31(uStack_a38._1_3_,(undefined1)uStack_9f8);
  uStack_a48 = uStack_a08;
  uStack_a44 = uStack_a04;
  iStack_a40 = iStack_a00;
  uStack_a3c = uStack_9fc;
  uStack_a58 = uStack_a18;
  uStack_a54 = uStack_a14;
  uStack_a50 = uStack_a10;
  uStack_a4c = uStack_a0c;
  uStack_a68 = uStack_a28;
  uStack_a64 = uStack_a24;
  uStack_a60 = uStack_a20;
  uStack_a5c = uStack_a1c;
  func_0x048b0bc0(&uStack_be0);
  uStack_aa8 = CONCAT44(uStack_a64,uStack_a68);
  uStack_aa0 = (long *)CONCAT44(uStack_a5c,uStack_a60);
  uStack_a98 = uStack_a58;
  uStack_a94 = uStack_a54;
  uStack_a90 = uStack_a50;
  uStack_a8c = uStack_a4c;
  uStack_a88 = uStack_a48;
  uStack_a84 = uStack_a44;
  iStack_a80 = iStack_a40;
  uStack_a7c = uStack_a3c;
  uStack_a78 = CONCAT44(uStack_a34,uStack_a38);
  func_0x0d952410(&puStack_bf8,uStack_aa8 + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
LAB_0d8e755f:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_be0._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
      iVar8 = *piVar15;
      while (iVar8 != (int)uStack_be0) {
        piVar15 = piVar15 + 0x1a;
        iVar8 = *piVar15;
      }
      goto LAB_0d8e755f;
    }
    if (uStack_be0._4_4_ == 0) {
      puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
      *puVar21 = *puVar21 | 0x40000;
    }
  }
  func_0x0d952a80(&puStack_bf8,&uStack_aa8,&UNK_013ba34b,0xe,0x10);
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar11 = (long)&UNK_0f48fe98;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = plVar11;
    (**(code **)(lVar20 + 8))();
    plVar11 = uStack_be0;
  }
  uStack_be0 = plVar11;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d95cb40;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &UNK_0d95b470;
  puStack_c20 = &UNK_0d95cb50;
  puStack_c18 = &UNK_0d95cd60;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  uStack_ab8 = CONCAT71(uStack_ab8._1_7_,(undefined1)uStack_a78);
  uStack_ac8 = uStack_a88;
  uStack_ac4 = uStack_a84;
  iStack_ac0 = iStack_a80;
  uStack_abc = uStack_a7c;
  uStack_ad8 = uStack_a98;
  uStack_ad4 = uStack_a94;
  uStack_ad0 = uStack_a90;
  uStack_acc = uStack_a8c;
  uStack_ae8 = (long *)uStack_aa8;
  uStack_ae0 = uStack_aa0;
  func_0x048b0bc0(&uStack_be0);
  func_0x0d952410(&puStack_bf8,(long)uStack_ae8 + 0x18);
  if (uStack_be0._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x60);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x16;
      iVar8 = *piVar15;
    }
    puVar5 = *(undefined4 **)(piVar15 + 0xc);
    while (puVar5 != puStack_bf0) {
      piVar15 = *(int **)(piVar15 + 0xe);
      puVar5 = *(undefined4 **)(piVar15 + 0xc);
    }
  }
  else {
    if (uStack_be0._4_4_ != 1) {
      if (uStack_be0._4_4_ == 0) {
        puVar21 = (uint *)(CONCAT44(uStack_be4,uStack_be8) + 0x18);
        *puVar21 = *puVar21 | 0x40000;
      }
      goto LAB_0d8e77a3;
    }
    piVar15 = *(int **)(*(long *)(CONCAT44(uStack_be4,uStack_be8) + 0x78) + 0x48);
    iVar8 = *piVar15;
    while (iVar8 != (int)uStack_be0) {
      piVar15 = piVar15 + 0x1a;
      iVar8 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
LAB_0d8e77a3:
  func_0x0d952a80(&puStack_bf8,&uStack_ae8,&UNK_0136ad24,0xb,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0f48a6e8;
  if (uStack_be0 != (long *)0x0) {
    lVar20 = *uStack_be0;
    uStack_be0 = puVar12;
    (**(code **)(lVar20 + 8))();
    puVar12 = uStack_be0;
  }
  uStack_be0 = puVar12;
  uStack_c60 = uStack_be8;
  plStack_c58 = (long *)0x0;
  uStack_c50 = (long *)((ulong)uStack_c50 & 0xffffffff00000000);
  uStack_c48 = 1;
  uStack_c40 = 0;
  puStack_c38 = &UNK_0d8d78d0;
  puStack_c30 = &SUB_048b06d0;
  puStack_c28 = &SUB_0d8d7560;
  puStack_c20 = &UNK_0d95d1d0;
  puStack_c18 = &UNK_0d95d3f0;
  uStack_c10 = 0;
  uStack_c08 = 0;
  plStack_c00 = (long *)0x0;
  func_0x048b05a0(puStack_bf0,&uStack_c60);
  plVar11 = plStack_c00;
  if (plStack_c00 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c00 + 1;
    lVar20 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_c00 + 0x10))(plStack_c00);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0d952da0(&puStack_bf8);
  func_0x048b0bc0(&uStack_be0);
  return;
}


