/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48c3bb0 (ELF vaddr 0x47c3bb0)
 * Label: caller-of-callee
 * Body:  [[048c3bb0, 048c62d4] [048c62e0, 048c6bb5] [048c6bc0, 048c6d46] [048c6d50, 048c7795] [048c77a0, 048c85c9] [048c85d0, 048c8612] [048c8620, 048c8a5c] [048c8a71, 048c8a7f] [048c8b0c, 048c8b90] [048c8c00, 048c9015] [048c9020, 048c9052] [048c9060, 048c90b1] [048c90c0, 048c976c] [048c9770, 048ca11b] [048ca96e, 048caa1a] [048caacb, 048cab01]]
 * Ghidra: FUN_048c3bb0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_048c3bb0(long *param_1,byte *param_2,long param_3)

{
  code *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  uint7 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 *puVar48;
  undefined *puVar49;
  undefined1 uVar50;
  undefined2 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  char cVar55;
  byte bVar56;
  char cVar57;
  int iVar58;
  undefined4 *puVar59;
  undefined8 uVar60;
  undefined1 *puVar61;
  undefined *puVar62;
  int *piVar63;
  long lVar64;
  char *pcVar65;
  long *plVar66;
  long *plVar67;
  undefined8 *puVar68;
  undefined8 *puVar69;
  ulong uVar70;
  ulong uVar71;
  long lVar72;
  uint uVar73;
  undefined8 extraout_RDX;
  code *pcVar74;
  undefined4 uVar75;
  uint *puVar76;
  undefined1 (*pauVar77) [16];
  byte *pbVar78;
  char *pcVar79;
  long lVar80;
  char *pcVar81;
  undefined1 *puVar82;
  long *plVar83;
  ulong uVar84;
  byte *pbVar85;
  undefined1 uVar86;
  long lVar87;
  long *plVar88;
  bool bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar94;
  byte bVar96;
  byte bVar98;
  byte bVar100;
  byte bVar102;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined *puStack_1278;
  ulong uStack_1270;
  long *plStack_1268;
  long *plStack_1260;
  undefined4 uStack_1258;
  undefined4 uStack_1254;
  long *plStack_1250;
  char cStack_1248;
  undefined1 auStack_1238 [8];
  ulong uStack_1230;
  undefined1 *puStack_1228;
  long lStack_1220;
  undefined8 uStack_1218;
  long *plStack_1210;
  byte *pbStack_1208;
  code *pcStack_1200;
  undefined1 auStack_11f8 [16];
  undefined8 uStack_11e8;
  undefined *puStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined1 uStack_1170;
  byte bStack_1168;
  undefined7 uStack_1167;
  undefined1 uStack_1160;
  undefined6 uStack_115f;
  undefined1 uStack_1159;
  undefined1 uStack_1158;
  undefined6 uStack_1157;
  undefined1 uStack_1151;
  long *plStack_1150;
  ulong uStack_1148;
  undefined8 uStack_1140;
  char cStack_1138;
  undefined *puStack_1128;
  uint *puStack_1120;
  long *plStack_1118;
  code *pcStack_1110;
  undefined8 uStack_1108;
  long lStack_1100;
  undefined1 auStack_10f8 [16];
  undefined4 uStack_10e4;
  undefined8 uStack_10e0;
  undefined1 uStack_10d8;
  undefined4 uStack_10d4;
  undefined1 auStack_10d0 [16];
  long lStack_10c0;
  undefined4 uStack_10b8;
  undefined2 uStack_10b4;
  undefined1 uStack_10b2;
  undefined1 auStack_10b0 [16];
  undefined1 auStack_10a0 [16];
  undefined1 auStack_1090 [16];
  char cStack_1080;
  uint uStack_1078;
  undefined1 uStack_1074;
  undefined1 uStack_1073;
  undefined2 uStack_1072;
  char cStack_1070;
  undefined1 uStack_106f;
  uint6 uStack_106e;
  undefined1 uStack_1068;
  uint7 uStack_1067;
  undefined1 uStack_1060;
  undefined7 uStack_105f;
  undefined1 auStack_1058 [16];
  undefined1 auStack_1048 [8];
  long *plStack_1040;
  undefined1 auStack_1038 [16];
  long lStack_1028;
  undefined2 uStack_1020;
  undefined6 uStack_101e;
  long lStack_1018;
  undefined2 uStack_1010;
  undefined6 uStack_100e;
  undefined *apuStack_fe0 [6];
  undefined8 uStack_fb0;
  undefined8 uStack_ee8;
  undefined1 uStack_ee0;
  undefined7 uStack_edf;
  undefined1 uStack_ed8;
  undefined1 uStack_ed7;
  undefined6 uStack_ed6;
  code *pcStack_ed0;
  undefined4 uStack_ec8;
  undefined4 uStack_ec4;
  uint *puStack_ec0;
  undefined8 uStack_eb8;
  undefined *puStack_eb0;
  undefined *apuStack_e48 [2];
  long *plStack_e38;
  long *plStack_e30;
  ulong uStack_e28;
  undefined8 uStack_e20;
  char cStack_e18;
  byte abStack_e08 [5];
  undefined1 auStack_e03 [3];
  char cStack_e00;
  undefined1 uStack_dff;
  undefined1 uStack_dfe;
  undefined1 uStack_dfd;
  char cStack_dfc;
  undefined1 uStack_dfb;
  undefined1 uStack_dfa;
  undefined1 uStack_df9;
  undefined1 uStack_df8;
  undefined1 uStack_df7;
  undefined2 uStack_df6;
  undefined1 uStack_df4;
  undefined1 uStack_df3;
  undefined1 uStack_df2;
  undefined1 uStack_df1;
  long *plStack_df0;
  long *plStack_de8;
  undefined *puStack_de0;
  undefined1 *puStack_dd8;
  undefined1 *puStack_dd0;
  undefined1 *puStack_dc8;
  undefined *puStack_dc0;
  undefined4 uStack_db8;
  undefined1 auStack_db0 [16];
  undefined4 uStack_da0;
  undefined4 uStack_d9c;
  undefined *puStack_d98;
  uint uStack_d90;
  undefined1 auStack_d88 [12];
  undefined8 uStack_d7c;
  undefined1 uStack_d73;
  undefined1 uStack_d71;
  undefined1 uStack_d70;
  undefined1 uStack_d6f;
  undefined1 uStack_d6a;
  undefined1 uStack_d69;
  undefined4 uStack_d64;
  undefined2 uStack_d5c;
  undefined1 uStack_d4f;
  undefined8 uStack_d48;
  long lStack_ce0;
  long lStack_cd8;
  long lStack_cd0;
  long *plStack_cc8;
  long lStack_cc0;
  long lStack_cb8;
  undefined1 uStack_b58;
  undefined8 uStack_a08;
  long *plStack_9b0;
  long *plStack_9a8;
  long *plStack_9a0;
  long lStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  long *plStack_980;
  ulong uStack_978;
  undefined8 uStack_970;
  char cStack_968;
  long lStack_958;
  long lStack_950;
  undefined *puStack_940;
  ulong uStack_938;
  long *plStack_930;
  long lStack_928;
  undefined4 uStack_920;
  long *plStack_918;
  undefined1 uStack_910;
  long lStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  long *plStack_8f0;
  ulong uStack_8e8;
  undefined8 uStack_8e0;
  char cStack_8d8;
  undefined1 auStack_8c8 [9];
  undefined2 uStack_8bf;
  undefined5 uStack_8bd;
  undefined1 auStack_8b8 [9];
  undefined1 auStack_8af [3];
  int iStack_8ac;
  long *plStack_8a8;
  undefined1 auStack_8a0 [16];
  undefined1 auStack_890 [16];
  undefined1 auStack_880 [16];
  undefined1 auStack_870 [16];
  uint uStack_860;
  undefined1 auStack_858 [16];
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined1 uStack_838;
  undefined8 uStack_830;
  undefined1 uStack_810;
  undefined1 uStack_80f;
  undefined1 uStack_808;
  undefined1 uStack_807;
  byte bStack_806;
  byte bStack_805;
  char cStack_804;
  undefined1 uStack_803;
  undefined1 uStack_802;
  undefined1 uStack_801;
  undefined8 uStack_800;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [8];
  undefined4 uStack_788;
  undefined2 uStack_610;
  undefined1 uStack_60e;
  undefined8 uStack_60c;
  undefined8 uStack_600;
  undefined1 uStack_5f8;
  undefined1 uStack_478;
  undefined2 uStack_476;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_194;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  char cStack_158;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  char cStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  char cVar93;
  char cVar95;
  char cVar97;
  char cVar99;
  char cVar101;
  
  stack0xfffffffffffff740 = (uint *)0x10000;
  auStack_8c8._0_8_ = 0x2000;
  iVar58 = func_0x0eee4070(7,auStack_8c8);
  if (iVar58 == -1) {
    puVar59 = (undefined4 *)func_0x0eee2fd0();
    uVar60 = func_0x0eee3700(*puVar59);
    func_0x0eede920(0,1,0,0xf,2,&UNK_012549ae,0x1b,&UNK_013a8de0,uVar60);
  }
  pbVar85 = (byte *)(param_1 + 0x11);
  if (pbVar85 != param_2) {
    bVar56 = *param_2;
    if ((*pbVar85 & 1) == 0) {
      if ((bVar56 & 1) == 0) {
        param_1[0x13] = *(long *)(param_2 + 0x10);
        lVar64 = *(long *)(param_2 + 8);
        *(undefined8 *)pbVar85 = *(undefined8 *)param_2;
        param_1[0x12] = lVar64;
      }
      else {
        func_0x04885070(pbVar85,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      bVar89 = (bVar56 & 1) != 0;
      pbVar78 = param_2 + 1;
      if (bVar89) {
        pbVar78 = *(byte **)(param_2 + 0x10);
      }
      uVar70 = (ulong)(bVar56 >> 1);
      if (bVar89) {
        uVar70 = *(ulong *)(param_2 + 8);
      }
      func_0x04885120(pbVar85,pbVar78,uVar70);
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar66 = _DAT_0f5523a0;
  pbVar85 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    func_0x0eee02f0(0xf5522b8);
LAB_048ca0d8:
    func_0x0eee02f0(0xf5522b8);
LAB_048ca0e4:
    func_0x0eee02f0(0xf5522b8);
LAB_048ca0f0:
    func_0x0eee02f0(0xf5522b8);
    goto LAB_048ca0fc;
  }
  bVar56 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar56 = *pbVar85;
  }
  plVar67 = _DAT_0f5523a8;
  auStack_8c8[8] = 1;
  auStack_8c8._0_8_ = 0xf5522b8;
  stack0xfffffffffffff750 = plVar66;
  auStack_8b8._0_8_ = pbVar85;
  plStack_8a8 = _DAT_0f5523a8;
  if (((bVar56 & 1) == 0) &&
     (cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar55 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  *(undefined1 *)(plVar67[4] + 0x1a2) = 1;
  _auStack_8b8 = (undefined1  [16])0x0;
  if (plVar66 == (long *)0x0) {
LAB_048c3de2:
  }
  else {
    LOCK();
    plVar67 = plVar66 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 != 0) {
      plStack_8a8 = (long *)0x0;
      goto LAB_048c3de2;
    }
    (**(code **)(*plVar66 + 0x10))(plVar66);
    func_0x0412c2d0(plVar66);
    plVar66 = stack0xfffffffffffff750;
    plStack_8a8 = (long *)0x0;
    if (stack0xfffffffffffff750 == (long *)0x0) goto LAB_048c3de2;
    plStack_8a8 = (long *)0x0;
    LOCK();
    plVar67 = stack0xfffffffffffff750 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 != 0) goto LAB_048c3de2;
    (**(code **)(*stack0xfffffffffffff750 + 0x10))(stack0xfffffffffffff750);
    func_0x0412c2d0(plVar66);
  }
  lStack_1220 = param_3;
  if (auStack_8c8[8] == '\x01') {
    func_0x0eee02f0(auStack_8c8._0_8_);
  }
  uStack_10e0 = 0x100000000;
  uStack_10d8 = 0;
  uStack_10d4 = 0xffffffff;
  auStack_10d0 = (undefined1  [16])0x0;
  lStack_10c0 = 0;
  uStack_10b8 = 100;
  uStack_10b4 = 0;
  uStack_10b2 = 0;
  auStack_10b0 = (undefined1  [16])0x0;
  auStack_10a0 = (undefined1  [16])0x0;
  auStack_1090 = (undefined1  [16])0x0;
  cStack_1080 = '\0';
  uStack_800 = 0;
  auStack_8b8._0_8_ = &UNK_0ef446f0;
  puVar82 = auStack_8b8 + 8;
  uStack_830 = &UNK_0ef447f8;
  _auStack_8c8 = ZEXT816(0xef447d0);
  func_0x04144780(&uStack_830,puVar82);
  uStack_7a8 = 0;
  uStack_7a0 = (undefined1 *)CONCAT44(uStack_7a0._4_4_,0xffffffff);
  auStack_8c8._0_8_ = &UNK_0ef446c8;
  uStack_830 = &UNK_0ef44718;
  stack0xfffffffffffff750 = (long *)&UNK_0eeece20;
  auStack_8b8._0_8_ = &UNK_0ef446f0;
  func_0x041679a0(&plStack_8a8);
  auStack_880 = (undefined1  [16])0x0;
  auStack_890 = (undefined1  [16])0x0;
  auStack_8a0 = (undefined1  [16])0x0;
  auStack_870 = (undefined1  [16])0x0;
  uStack_860 = uStack_860 & 0xfffffe00 | 0x100;
  auStack_858 = (undefined1  [16])0x0;
  uStack_848 = 0;
  uStack_840 = 0x1000;
  uStack_838 = 0;
  auStack_8c8._0_8_ = &UNK_0ef445e8;
  uStack_830 = &UNK_0ef44638;
  stack0xfffffffffffff750 = (long *)&UNK_0f536678;
  auStack_8b8._0_8_ = &UNK_0ef44610;
  abStack_e08[0] = 0x20;
  uVar60 = (long)abStack_e08 + 1;
  abStack_e08[1] = 0x74;
  abStack_e08[2] = 0x65;
  abStack_e08[3] = 0x73;
  abStack_e08[4] = 0x74;
  auStack_e03._0_2_ = 0x635f;
  auStack_e03[2] = 0x6f;
  cStack_e00 = 'n';
  uStack_dff = 0x66;
  uStack_dfe = 0x69;
  uStack_dfd = 0x67;
  cStack_dfc = '.';
  uStack_dfb = 0x6a;
  uStack_dfa = 0x73;
  uStack_df9 = 0x6f;
  uStack_df8 = 0x6e;
  uStack_df7 = 0;
  uStack_df6 = 0;
  uStack_df4 = 0;
  uStack_df3 = 0;
  uStack_df2 = 0;
  uStack_df1 = 0;
  uStack_1078 = (uint)uVar60;
  uStack_1074 = (undefined1)((ulong)uVar60 >> 0x20);
  uStack_1073 = (undefined1)((ulong)uVar60 >> 0x28);
  uStack_1072 = (undefined2)((ulong)uVar60 >> 0x30);
  cStack_1070 = '\x10';
  uStack_106f = 0;
  uStack_106e = 0;
  func_0x0ee5e270(auStack_8c8,&uStack_1078,0x1a1);
  if ((abStack_e08[0] & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_df1,
                             CONCAT16(uStack_df2,
                                      CONCAT15(uStack_df3,
                                               CONCAT14(uStack_df4,
                                                        CONCAT22(uStack_df6,
                                                                 CONCAT11(uStack_df7,uStack_df8)))))
                            ),
                    CONCAT17(auStack_e03[2],
                             CONCAT25(auStack_e03._0_2_,
                                      CONCAT14(abStack_e08[4],
                                               CONCAT22(abStack_e08._2_2_,
                                                        CONCAT11(abStack_e08[1],abStack_e08[0])))))
                    & 0xfffffffffffffffe);
  }
  if (auStack_870._0_8_ == 0) {
    _auStack_1238 = (undefined1  [16])0x0;
    puStack_1228 = (undefined1 *)0x0;
  }
  else {
    func_0x04886140(abStack_e08);
    func_0x0413c2d0((long)abStack_e08 + 0x10,
                    CONCAT17(uStack_801,
                             CONCAT16(uStack_802,
                                      CONCAT15(uStack_803,
                                               CONCAT14(cStack_804,
                                                        CONCAT13(bStack_805,
                                                                 CONCAT12(bStack_806,
                                                                          CONCAT11(uStack_807,
                                                                                   uStack_808)))))))
                   );
    func_0x0ee5c810(puVar82);
    if ((uStack_d90 & 0x10) == 0) {
      if ((uStack_d90 & 8) != 0) {
        uVar70 = (long)puStack_dd0 - (long)puStack_de0;
        puVar48 = puStack_de0;
        goto joined_r0x048c410f;
      }
      auVar130[0xf] = 0;
      auVar130._0_15_ = stack0xffffffffffffedc9;
      _auStack_1238 = auVar130 << 8;
LAB_048c4130:
      puVar61 = auStack_1238 + 1;
      uVar70 = 0;
    }
    else {
      if (puStack_d98 < puStack_dc0) {
        puStack_d98 = puStack_dc0;
      }
      uVar70 = (long)puStack_d98 - (long)puStack_dc8;
      puVar48 = puStack_dc8;
joined_r0x048c410f:
      if (0xfffffffffffffff7 < uVar70) {
        func_0x04882e30();
        goto LAB_048c44e8;
      }
      if (uVar70 < 0x17) {
        auStack_1238[0] = (char)uVar70 * '\x02';
        puVar61 = auStack_1238 + 1;
        if (uVar70 == 0) goto LAB_048c4130;
      }
      else {
        uVar71 = 0x1a;
        if ((uVar70 | 7) != 0x17) {
          uVar71 = (uVar70 | 7) + 1;
        }
        puVar61 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar71);
        if (puVar61 == (undefined1 *)0x0) {
          func_0x0eec74c0(uVar71,0);
        }
        uStack_1230 = uVar70;
        auStack_1238 = (undefined1  [8])(uVar71 | 1);
        puStack_1228 = puVar61;
      }
      func_0x0eee2ee0(puVar61,puVar48,uVar70);
    }
    puVar61[uVar70] = 0;
    abStack_e08[0] = (byte)_UNK_0eeed4d8;
    abStack_e08[1] = (byte)((ulong)_UNK_0eeed4d8 >> 8);
    abStack_e08._2_2_ = (undefined2)((ulong)_UNK_0eeed4d8 >> 0x10);
    abStack_e08[4] = (byte)((ulong)_UNK_0eeed4d8 >> 0x20);
    auStack_e03._0_2_ = (undefined2)((ulong)_UNK_0eeed4d8 >> 0x28);
    auStack_e03[2] = (undefined1)((ulong)_UNK_0eeed4d8 >> 0x38);
    *(undefined8 *)(abStack_e08 + *(long *)(_UNK_0eeed4d8 + -0x18)) = _UNK_0eeed518;
    uStack_df8 = (undefined1)_UNK_0eeed520;
    uStack_df7 = (undefined1)((ulong)_UNK_0eeed520 >> 8);
    uStack_df6 = (undefined2)((ulong)_UNK_0eeed520 >> 0x10);
    uStack_df4 = (undefined1)((ulong)_UNK_0eeed520 >> 0x20);
    uStack_df3 = (undefined1)((ulong)_UNK_0eeed520 >> 0x28);
    uStack_df2 = (undefined1)((ulong)_UNK_0eeed520 >> 0x30);
    uStack_df1 = (undefined1)((ulong)_UNK_0eeed520 >> 0x38);
    plStack_df0 = (long *)&UNK_0eeed150;
    if ((auStack_db0[0] & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_d9c,uStack_da0),auStack_db0._0_8_ & 0xfffffffffffffffe);
    }
    plStack_df0 = (long *)&UNK_0eeece20;
    func_0x04167a40(&plStack_de8);
    func_0x0413c8a0(abStack_e08,&UNK_0eeed4e0);
    func_0x04138180(auStack_d88);
  }
  auStack_8c8._0_8_ = &UNK_0ef446c8;
  uStack_830 = &UNK_0ef44718;
  auStack_8b8._0_8_ = &UNK_0ef446f0;
  func_0x0ee5c730(puVar82);
  func_0x0413c8a0(auStack_8c8,&UNK_0ef44658);
  func_0x04138180(&uStack_830);
  if ((auStack_1238[0] & 1) == 0) {
    uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
    if (auStack_1238[0] >> 1 != 0) goto LAB_048c42a8;
  }
  else if (uStack_1230 != 0) {
LAB_048c42a8:
    lStack_1018 = 0;
    uStack_1010 = 0;
    uStack_100e = 0;
    lStack_1028 = 0;
    uStack_1020 = 0;
    uStack_101e = 0;
    _auStack_1048 = (undefined1  [16])0x0;
    auStack_1058 = (undefined1  [16])0x0;
    uStack_1068 = 0;
    uStack_1067 = 0;
    uStack_1060 = 0;
    uStack_105f = 0;
    uStack_1078 = 0;
    uStack_1074 = 0;
    uStack_1073 = 0;
    uStack_1072 = 0;
    cStack_1070 = 0;
    uStack_106f = 0;
    uStack_106e = 0;
    auStack_1038._0_12_ = ZEXT412(0x3f600000) << 0x40;
    auStack_1038._12_4_ = 0;
    func_0x048af640(&uStack_1060,8);
    lStack_1018 = 0;
    uStack_1010 = 0;
    lStack_1028 = 0;
    uStack_1020 = 0;
    uStack_101e = 0;
    uStack_1078 = 0xf534768;
    uStack_1074 = 0;
    uStack_1073 = 0;
    uStack_1072 = 0;
    puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar68 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *(undefined1 (*) [16])(puVar68 + 1) = (undefined1  [16])0x0;
    *puVar68 = &UNK_0ef44a60;
    puVar69 = puVar68 + 3;
    *(undefined1 *)(puVar68 + 3) = 1;
    cStack_1070 = (char)puVar69;
    uStack_106f = (undefined1)((ulong)puVar69 >> 8);
    uStack_106e = (uint6)((ulong)puVar69 >> 0x10);
    uStack_1068 = SUB81(puVar68,0);
    uStack_1067 = (uint7)((ulong)puVar68 >> 8);
    uStack_1078 = 0xef471f0;
    uStack_1074 = 0;
    uStack_1073 = 0;
    uStack_1072 = 0;
    if (DAT_0f551358 == '\0') goto LAB_048c9f23;
    goto LAB_048c439e;
  }
LAB_048c637a:
  if ((auStack_1238[0] & 1) != 0) {
    func_0x0412a280(puStack_1228,(ulong)auStack_1238 & 0xfffffffffffffffe);
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_012d69a5,0x195,&UNK_0145e84a);
  func_0x0eeb1460();
  func_0x0eeb1260();
  stack0xfffffffffffff740 = (uint *)&UNK_0eeb27c0;
  auStack_8c8._0_8_ = &UNK_0f53b100;
  plStack_8a8 = (long *)auStack_8c8;
  func_0x048f5eb0(param_1 + 0x14,auStack_8c8);
  if (plStack_8a8 != (long *)0x0) {
    (**(code **)(*plStack_8a8 + 0x30))();
    if (plStack_8a8 == (long *)auStack_8c8) {
      lVar64 = 0x20;
    }
    else {
      lVar64 = 0x28;
      if (plStack_8a8 == (long *)0x0) goto LAB_048c6446;
    }
    (**(code **)(*plStack_8a8 + lVar64))();
  }
LAB_048c6446:
  auVar130 = _auStack_8c8;
  auStack_8c8._1_8_ = 0x6d617473656d6974;
  auStack_8c8[0] = 0x12;
  uStack_8bd = auVar130._11_5_;
  uStack_8bf = 0x70;
  uStack_1078 = 0;
  abStack_e08[0] = (byte)&uStack_1078;
  abStack_e08[1] = (byte)((ulong)&uStack_1078 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)&uStack_1078 >> 0x10);
  abStack_e08[4] = (byte)((ulong)&uStack_1078 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)&uStack_1078 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)&uStack_1078 >> 0x38);
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1078,&UNK_01563a4f,abStack_e08,&uStack_1218);
  func_0x0eeb49b0(*(undefined8 *)(lVar64 + 0x18),auStack_8c8,1);
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auStack_8c8._0_7_ = 0x65636172740a;
  uStack_1078 = 0;
  abStack_e08[0] = (byte)&uStack_1078;
  abStack_e08[1] = (byte)((ulong)&uStack_1078 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)&uStack_1078 >> 0x10);
  abStack_e08[4] = (byte)((ulong)&uStack_1078 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)&uStack_1078 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)&uStack_1078 >> 0x38);
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1078,&UNK_01563a4f,abStack_e08,&uStack_1218);
  func_0x0eeb49b0(*(undefined8 *)(lVar64 + 0x18),auStack_8c8,0);
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auStack_8c8._0_6_ = 0x6165726108;
  uStack_1078 = 0;
  abStack_e08[0] = (byte)&uStack_1078;
  abStack_e08[1] = (byte)((ulong)&uStack_1078 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)&uStack_1078 >> 0x10);
  abStack_e08[4] = (byte)((ulong)&uStack_1078 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)&uStack_1078 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)&uStack_1078 >> 0x38);
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1078,&UNK_01563a4f,abStack_e08,&uStack_1218);
  func_0x0eeb49b0(*(undefined8 *)(lVar64 + 0x18),auStack_8c8,0);
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auVar130 = _auStack_8c8;
  auStack_8c8._1_8_ = 0x797469726f697270;
  auStack_8c8[0] = 0x10;
  stack0xfffffffffffff742 = auVar130._10_6_;
  uStack_8bf._0_1_ = 0;
  uStack_1078 = 0;
  abStack_e08[0] = (byte)&uStack_1078;
  abStack_e08[1] = (byte)((ulong)&uStack_1078 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)&uStack_1078 >> 0x10);
  abStack_e08[4] = (byte)((ulong)&uStack_1078 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)&uStack_1078 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)&uStack_1078 >> 0x38);
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1078,&UNK_01563a4f,abStack_e08,&uStack_1218);
  func_0x0eeb49b0(*(undefined8 *)(lVar64 + 0x18),auStack_8c8,1);
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auStack_8c8._0_8_ = 0x6461657268740c;
  uStack_1078 = 0;
  abStack_e08[0] = (byte)&uStack_1078;
  abStack_e08[1] = (byte)((ulong)&uStack_1078 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)&uStack_1078 >> 0x10);
  abStack_e08[4] = (byte)((ulong)&uStack_1078 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)&uStack_1078 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)&uStack_1078 >> 0x38);
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1078,&UNK_01563a4f,abStack_e08,&uStack_1218);
  func_0x0eeb49b0(*(undefined8 *)(lVar64 + 0x18),auStack_8c8,0);
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auVar130 = _auStack_8c8;
  abStack_e08[0] = 0;
  abStack_e08[1] = 0;
  abStack_e08[2] = 0;
  abStack_e08[3] = 0;
  abStack_e08[4] = 0;
  auStack_e03._0_2_ = 0;
  auStack_e03[2] = 0;
  cStack_e00 = '\0';
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = '\0';
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  uStack_df4 = 0;
  uStack_df3 = 0;
  uStack_df2 = 0;
  uStack_df1 = 0;
  auStack_8c8._1_8_ = 0x797469726f697270;
  auStack_8c8[0] = 0x10;
  stack0xfffffffffffff742 = auVar130._10_6_;
  uStack_8bf._0_1_ = 0;
  uStack_1218 = (undefined1 (*) [16])((ulong)uStack_1218 & 0xffffffff00000000);
  uStack_1078 = (uint)&uStack_1218;
  uVar73 = uStack_1078;
  uStack_1074 = (undefined1)((ulong)&uStack_1218 >> 0x20);
  uVar86 = uStack_1074;
  uStack_1073 = (undefined1)((ulong)&uStack_1218 >> 0x28);
  uVar50 = uStack_1073;
  uStack_1072 = (undefined2)((ulong)&uStack_1218 >> 0x30);
  uVar51 = uStack_1072;
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1218,&UNK_01563a4f,&uStack_1078,&uStack_ee8);
  uStack_1078 = 0;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  func_0x0eeb4b50(*(undefined8 *)(lVar64 + 0x18),&uStack_1078,auStack_8c8,0xf551030,abStack_e08,0);
  plVar66 = (long *)CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078)));
  uStack_1078 = 0;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  auStack_8c8._0_6_ = 0x6165726108;
  uStack_1218 = (undefined1 (*) [16])((ulong)uStack_1218 & 0xffffffff00000000);
  uStack_1078 = uVar73;
  uStack_1074 = uVar86;
  uStack_1073 = uVar50;
  uStack_1072 = uVar51;
  lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_1218,&UNK_01563a4f,&uStack_1078,&uStack_ee8);
  uStack_1078 = 0;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  func_0x0eeb4b50(*(undefined8 *)(lVar64 + 0x18),&uStack_1078,auStack_8c8,0xf551048,
                  (undefined1 (*) [16])abStack_e08,0);
  plVar66 = (long *)CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078)));
  uStack_1078 = 0;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  if ((auStack_8c8[0] & 1) != 0) {
    func_0x0412a280(auStack_8b8._0_8_,auStack_8c8._0_8_ & 0xfffffffffffffffe);
  }
  _DAT_0f545c50 = &UNK_09ba2620;
  if (cStack_1080 == '\x01') {
    uVar70 = auStack_10b0._8_8_;
    if ((auStack_10b0[0] & 1) == 0) {
      uVar70 = (ulong)(auStack_10b0[0] >> 1);
    }
    if (uVar70 != 0) {
      pcVar81 = auStack_10b0 + 1;
      pcVar65 = pcVar81;
      if ((auStack_10b0[0] & 1) != 0) {
        pcVar65 = (char *)auStack_10a0._0_8_;
      }
      pcVar79 = pcVar65;
      if (uVar70 < 8) {
LAB_048c6a6c:
        do {
          cVar55 = *pcVar79;
          cVar57 = cVar55 + -0x20;
          if (0x19 < (byte)(cVar55 + 0x9fU)) {
            cVar57 = cVar55;
          }
          *pcVar79 = cVar57;
          pcVar79 = pcVar79 + 1;
        } while (pcVar79 != pcVar65 + uVar70);
      }
      else if (uVar70 < 0x20) {
        uVar71 = 0;
LAB_048c6a05:
        uVar84 = uVar70 & 0xfffffffffffffff8;
        pcVar79 = pcVar65 + uVar84;
        do {
          uVar60 = *(undefined8 *)(pcVar65 + uVar71);
          bVar90 = (char)uVar60 + DAT_014e4180;
          cVar57 = (char)((ulong)uVar60 >> 8);
          bVar91 = cVar57 + UNK_014e4181;
          cVar93 = (char)((ulong)uVar60 >> 0x10);
          bVar92 = cVar93 + UNK_014e4182;
          cVar95 = (char)((ulong)uVar60 >> 0x18);
          bVar94 = cVar95 + UNK_014e4183;
          cVar97 = (char)((ulong)uVar60 >> 0x20);
          bVar96 = cVar97 + UNK_014e4184;
          cVar99 = (char)((ulong)uVar60 >> 0x28);
          bVar98 = cVar99 + UNK_014e4185;
          cVar101 = (char)((ulong)uVar60 >> 0x30);
          cVar55 = (char)((ulong)uVar60 >> 0x38);
          bVar100 = cVar101 + UNK_014e4186;
          bVar102 = cVar55 + UNK_014e4187;
          bVar56 = DAT_014e8cb0;
          bVar3 = DAT_014e8cb0._1_1_;
          bVar4 = DAT_014e8cb0._2_1_;
          bVar5 = DAT_014e8cb0._3_1_;
          bVar6 = DAT_014e8cb0._4_1_;
          bVar7 = DAT_014e8cb0._5_1_;
          bVar8 = DAT_014e8cb0._6_1_;
          bVar9 = DAT_014e8cb0._7_1_;
          bVar10 = DAT_014e8cb0._8_1_;
          bVar11 = DAT_014e8cb0._9_1_;
          bVar12 = DAT_014e8cb0._10_1_;
          bVar13 = DAT_014e8cb0._11_1_;
          bVar14 = DAT_014e8cb0._12_1_;
          bVar15 = DAT_014e8cb0._13_1_;
          bVar16 = DAT_014e8cb0._14_1_;
          bVar17 = DAT_014e8cb0._15_1_;
          auVar104[0] = -((byte)((bVar90 < bVar56) * bVar56 | (bVar90 >= bVar56) * bVar90) == bVar90
                         );
          auVar104[1] = -((byte)((bVar91 < bVar3) * bVar3 | (bVar91 >= bVar3) * bVar91) == bVar91);
          auVar104[2] = -((byte)((bVar92 < bVar4) * bVar4 | (bVar92 >= bVar4) * bVar92) == bVar92);
          auVar104[3] = -((byte)((bVar94 < bVar5) * bVar5 | (bVar94 >= bVar5) * bVar94) == bVar94);
          auVar104[4] = -((byte)((bVar96 < bVar6) * bVar6 | (bVar96 >= bVar6) * bVar96) == bVar96);
          auVar104[5] = -((byte)((bVar98 < bVar7) * bVar7 | (bVar98 >= bVar7) * bVar98) == bVar98);
          auVar104[6] = -((byte)((bVar100 < bVar8) * bVar8 | (bVar100 >= bVar8) * bVar100) ==
                         bVar100);
          auVar104[7] = -((byte)((bVar102 < bVar9) * bVar9 | (bVar102 >= bVar9) * bVar102) ==
                         bVar102);
          auVar104[8] = -((byte)((UNK_014e4188 < bVar10) * bVar10 |
                                (UNK_014e4188 >= bVar10) * UNK_014e4188) == UNK_014e4188);
          auVar104[9] = -((byte)((UNK_014e4189 < bVar11) * bVar11 |
                                (UNK_014e4189 >= bVar11) * UNK_014e4189) == UNK_014e4189);
          auVar104[10] = -((byte)((UNK_014e418a < bVar12) * bVar12 |
                                 (UNK_014e418a >= bVar12) * UNK_014e418a) == UNK_014e418a);
          auVar104[0xb] =
               -((byte)((UNK_014e418b < bVar13) * bVar13 | (UNK_014e418b >= bVar13) * UNK_014e418b)
                == UNK_014e418b);
          auVar104[0xc] =
               -((byte)((UNK_014e418c < bVar14) * bVar14 | (UNK_014e418c >= bVar14) * UNK_014e418c)
                == UNK_014e418c);
          auVar104[0xd] =
               -((byte)((UNK_014e418d < bVar15) * bVar15 | (UNK_014e418d >= bVar15) * UNK_014e418d)
                == UNK_014e418d);
          auVar104[0xe] =
               -((byte)((UNK_014e418e < bVar16) * bVar16 | (UNK_014e418e >= bVar16) * UNK_014e418e)
                == UNK_014e418e);
          auVar104[0xf] =
               -((byte)((UNK_014e418f < bVar17) * bVar17 | (UNK_014e418f >= bVar17) * UNK_014e418f)
                == UNK_014e418f);
          auVar130 = ~auVar104 & _DAT_014e2c80;
          *(ulong *)(pcVar65 + uVar71) =
               CONCAT17(auVar130[7] + cVar55,
                        CONCAT16(auVar130[6] + cVar101,
                                 CONCAT15(auVar130[5] + cVar99,
                                          CONCAT14(auVar130[4] + cVar97,
                                                   CONCAT13(auVar130[3] + cVar95,
                                                            CONCAT12(auVar130[2] + cVar93,
                                                                     CONCAT11(auVar130[1] + cVar57,
                                                                              auVar130[0] +
                                                                              (char)uVar60)))))));
          uVar71 = uVar71 + 8;
        } while (uVar84 != uVar71);
        if (uVar70 != uVar84) goto LAB_048c6a6c;
      }
      else {
        uVar71 = uVar70 & 0xffffffffffffffe0;
        uVar84 = 0;
        do {
          pcVar79 = pcVar65 + uVar84;
          cVar55 = pcVar79[1];
          cVar57 = pcVar79[2];
          cVar93 = pcVar79[3];
          cVar95 = pcVar79[4];
          cVar97 = pcVar79[5];
          cVar99 = pcVar79[6];
          cVar101 = pcVar79[7];
          cVar18 = pcVar79[8];
          cVar19 = pcVar79[9];
          cVar20 = pcVar79[10];
          cVar21 = pcVar79[0xb];
          cVar22 = pcVar79[0xc];
          cVar23 = pcVar79[0xd];
          cVar24 = pcVar79[0xe];
          cVar25 = pcVar79[0xf];
          pcVar2 = pcVar65 + uVar84 + 0x10;
          cVar26 = *pcVar2;
          cVar27 = pcVar2[1];
          cVar28 = pcVar2[2];
          cVar29 = pcVar2[3];
          cVar30 = pcVar2[4];
          cVar31 = pcVar2[5];
          cVar32 = pcVar2[6];
          cVar33 = pcVar2[7];
          cVar34 = pcVar2[8];
          cVar35 = pcVar2[9];
          cVar36 = pcVar2[10];
          cVar37 = pcVar2[0xb];
          cVar38 = pcVar2[0xc];
          cVar39 = pcVar2[0xd];
          cVar40 = pcVar2[0xe];
          cVar41 = pcVar2[0xf];
          bVar90 = *pcVar79 + DAT_014e2cf0;
          bVar91 = cVar55 + UNK_014e2cf1;
          bVar92 = cVar57 + UNK_014e2cf2;
          bVar94 = cVar93 + UNK_014e2cf3;
          bVar96 = cVar95 + UNK_014e2cf4;
          bVar98 = cVar97 + UNK_014e2cf5;
          bVar100 = cVar99 + UNK_014e2cf6;
          bVar102 = cVar101 + UNK_014e2cf7;
          bVar105 = cVar18 + UNK_014e2cf8;
          bVar106 = cVar19 + UNK_014e2cf9;
          bVar107 = cVar20 + UNK_014e2cfa;
          bVar108 = cVar21 + UNK_014e2cfb;
          bVar109 = cVar22 + UNK_014e2cfc;
          bVar110 = cVar23 + UNK_014e2cfd;
          bVar111 = cVar24 + UNK_014e2cfe;
          bVar112 = cVar25 + UNK_014e2cff;
          bVar113 = cVar26 + DAT_014e2cf0;
          bVar114 = cVar27 + UNK_014e2cf1;
          bVar115 = cVar28 + UNK_014e2cf2;
          bVar116 = cVar29 + UNK_014e2cf3;
          bVar117 = cVar30 + UNK_014e2cf4;
          bVar118 = cVar31 + UNK_014e2cf5;
          bVar119 = cVar32 + UNK_014e2cf6;
          bVar120 = cVar33 + UNK_014e2cf7;
          bVar121 = cVar34 + UNK_014e2cf8;
          bVar122 = cVar35 + UNK_014e2cf9;
          bVar123 = cVar36 + UNK_014e2cfa;
          bVar124 = cVar37 + UNK_014e2cfb;
          bVar125 = cVar38 + UNK_014e2cfc;
          bVar126 = cVar39 + UNK_014e2cfd;
          bVar127 = cVar40 + UNK_014e2cfe;
          bVar128 = cVar41 + UNK_014e2cff;
          bVar56 = DAT_014e4170;
          bVar3 = DAT_014e4170._1_1_;
          bVar4 = DAT_014e4170._2_1_;
          bVar5 = DAT_014e4170._3_1_;
          bVar6 = DAT_014e4170._4_1_;
          bVar7 = DAT_014e4170._5_1_;
          bVar8 = DAT_014e4170._6_1_;
          bVar9 = DAT_014e4170._7_1_;
          bVar10 = DAT_014e4170._8_1_;
          bVar11 = DAT_014e4170._9_1_;
          bVar12 = DAT_014e4170._10_1_;
          bVar13 = DAT_014e4170._11_1_;
          bVar14 = DAT_014e4170._12_1_;
          bVar15 = DAT_014e4170._13_1_;
          bVar16 = DAT_014e4170._14_1_;
          bVar17 = DAT_014e4170._15_1_;
          auVar129[0] = -((byte)((bVar56 < bVar90) * bVar56 | (bVar56 >= bVar90) * bVar90) == bVar90
                         );
          auVar129[1] = -((byte)((bVar3 < bVar91) * bVar3 | (bVar3 >= bVar91) * bVar91) == bVar91);
          auVar129[2] = -((byte)((bVar4 < bVar92) * bVar4 | (bVar4 >= bVar92) * bVar92) == bVar92);
          auVar129[3] = -((byte)((bVar5 < bVar94) * bVar5 | (bVar5 >= bVar94) * bVar94) == bVar94);
          auVar129[4] = -((byte)((bVar6 < bVar96) * bVar6 | (bVar6 >= bVar96) * bVar96) == bVar96);
          auVar129[5] = -((byte)((bVar7 < bVar98) * bVar7 | (bVar7 >= bVar98) * bVar98) == bVar98);
          auVar129[6] = -((byte)((bVar8 < bVar100) * bVar8 | (bVar8 >= bVar100) * bVar100) ==
                         bVar100);
          auVar129[7] = -((byte)((bVar9 < bVar102) * bVar9 | (bVar9 >= bVar102) * bVar102) ==
                         bVar102);
          auVar129[8] = -((byte)((bVar10 < bVar105) * bVar10 | (bVar10 >= bVar105) * bVar105) ==
                         bVar105);
          auVar129[9] = -((byte)((bVar11 < bVar106) * bVar11 | (bVar11 >= bVar106) * bVar106) ==
                         bVar106);
          auVar129[10] = -((byte)((bVar12 < bVar107) * bVar12 | (bVar12 >= bVar107) * bVar107) ==
                          bVar107);
          auVar129[0xb] =
               -((byte)((bVar13 < bVar108) * bVar13 | (bVar13 >= bVar108) * bVar108) == bVar108);
          auVar129[0xc] =
               -((byte)((bVar14 < bVar109) * bVar14 | (bVar14 >= bVar109) * bVar109) == bVar109);
          auVar129[0xd] =
               -((byte)((bVar15 < bVar110) * bVar15 | (bVar15 >= bVar110) * bVar110) == bVar110);
          auVar129[0xe] =
               -((byte)((bVar16 < bVar111) * bVar16 | (bVar16 >= bVar111) * bVar111) == bVar111);
          auVar129[0xf] =
               -((byte)((bVar17 < bVar112) * bVar17 | (bVar17 >= bVar112) * bVar112) == bVar112);
          auVar103[0] = -((byte)((bVar56 < bVar113) * bVar56 | (bVar56 >= bVar113) * bVar113) ==
                         bVar113);
          auVar103[1] = -((byte)((bVar3 < bVar114) * bVar3 | (bVar3 >= bVar114) * bVar114) ==
                         bVar114);
          auVar103[2] = -((byte)((bVar4 < bVar115) * bVar4 | (bVar4 >= bVar115) * bVar115) ==
                         bVar115);
          auVar103[3] = -((byte)((bVar5 < bVar116) * bVar5 | (bVar5 >= bVar116) * bVar116) ==
                         bVar116);
          auVar103[4] = -((byte)((bVar6 < bVar117) * bVar6 | (bVar6 >= bVar117) * bVar117) ==
                         bVar117);
          auVar103[5] = -((byte)((bVar7 < bVar118) * bVar7 | (bVar7 >= bVar118) * bVar118) ==
                         bVar118);
          auVar103[6] = -((byte)((bVar8 < bVar119) * bVar8 | (bVar8 >= bVar119) * bVar119) ==
                         bVar119);
          auVar103[7] = -((byte)((bVar9 < bVar120) * bVar9 | (bVar9 >= bVar120) * bVar120) ==
                         bVar120);
          auVar103[8] = -((byte)((bVar10 < bVar121) * bVar10 | (bVar10 >= bVar121) * bVar121) ==
                         bVar121);
          auVar103[9] = -((byte)((bVar11 < bVar122) * bVar11 | (bVar11 >= bVar122) * bVar122) ==
                         bVar122);
          auVar103[10] = -((byte)((bVar12 < bVar123) * bVar12 | (bVar12 >= bVar123) * bVar123) ==
                          bVar123);
          auVar103[0xb] =
               -((byte)((bVar13 < bVar124) * bVar13 | (bVar13 >= bVar124) * bVar124) == bVar124);
          auVar103[0xc] =
               -((byte)((bVar14 < bVar125) * bVar14 | (bVar14 >= bVar125) * bVar125) == bVar125);
          auVar103[0xd] =
               -((byte)((bVar15 < bVar126) * bVar15 | (bVar15 >= bVar126) * bVar126) == bVar126);
          auVar103[0xe] =
               -((byte)((bVar16 < bVar127) * bVar16 | (bVar16 >= bVar127) * bVar127) == bVar127);
          auVar103[0xf] =
               -((byte)((bVar17 < bVar128) * bVar17 | (bVar17 >= bVar128) * bVar128) == bVar128);
          auVar129 = auVar129 & _DAT_014e9b80;
          auVar103 = auVar103 & _DAT_014e9b80;
          pcVar2 = pcVar65 + uVar84;
          *pcVar2 = auVar129[0] + *pcVar79;
          pcVar2[1] = auVar129[1] + cVar55;
          pcVar2[2] = auVar129[2] + cVar57;
          pcVar2[3] = auVar129[3] + cVar93;
          pcVar2[4] = auVar129[4] + cVar95;
          pcVar2[5] = auVar129[5] + cVar97;
          pcVar2[6] = auVar129[6] + cVar99;
          pcVar2[7] = auVar129[7] + cVar101;
          pcVar2[8] = auVar129[8] + cVar18;
          pcVar2[9] = auVar129[9] + cVar19;
          pcVar2[10] = auVar129[10] + cVar20;
          pcVar2[0xb] = auVar129[0xb] + cVar21;
          pcVar2[0xc] = auVar129[0xc] + cVar22;
          pcVar2[0xd] = auVar129[0xd] + cVar23;
          pcVar2[0xe] = auVar129[0xe] + cVar24;
          pcVar2[0xf] = auVar129[0xf] + cVar25;
          pcVar79 = pcVar65 + uVar84 + 0x10;
          *pcVar79 = auVar103[0] + cVar26;
          pcVar79[1] = auVar103[1] + cVar27;
          pcVar79[2] = auVar103[2] + cVar28;
          pcVar79[3] = auVar103[3] + cVar29;
          pcVar79[4] = auVar103[4] + cVar30;
          pcVar79[5] = auVar103[5] + cVar31;
          pcVar79[6] = auVar103[6] + cVar32;
          pcVar79[7] = auVar103[7] + cVar33;
          pcVar79[8] = auVar103[8] + cVar34;
          pcVar79[9] = auVar103[9] + cVar35;
          pcVar79[10] = auVar103[10] + cVar36;
          pcVar79[0xb] = auVar103[0xb] + cVar37;
          pcVar79[0xc] = auVar103[0xc] + cVar38;
          pcVar79[0xd] = auVar103[0xd] + cVar39;
          pcVar79[0xe] = auVar103[0xe] + cVar40;
          pcVar79[0xf] = auVar103[0xf] + cVar41;
          uVar84 = uVar84 + 0x20;
        } while (uVar71 != uVar84);
        if (uVar70 != uVar71) {
          if ((uVar70 & 0x18) == 0) {
            pcVar79 = pcVar65 + uVar71;
            goto LAB_048c6a6c;
          }
          goto LAB_048c6a05;
        }
      }
      if ((auStack_10b0[0] & 1) == 0) {
        uVar70 = (ulong)(auStack_10b0[0] >> 1);
      }
      else {
        uVar70 = auStack_10b0._8_8_;
        pcVar81 = (char *)auStack_10a0._0_8_;
      }
      _auStack_8c8 = (undefined1  [16])0x0;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = stack0xfffffffffffff750;
      _auStack_8b8 = auVar43 << 0x40;
      func_0x0edfe0e0(pcVar81,uVar70,0x2c,auStack_8c8);
      uStack_1078 = 0x65726108;
      uStack_1074 = 0x61;
      uStack_1073 = 0;
      uStack_ee8._0_4_ = 0;
      uStack_1218 = (undefined1 (*) [16])&uStack_ee8;
      lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_ee8,&UNK_01563a4f,&uStack_1218,&puStack_1128);
      uStack_1218 = (undefined1 (*) [16])0x0;
      func_0x0eeb4b50(*(undefined8 *)(lVar64 + 0x18),&uStack_1218,&uStack_1078,auStack_8c8,
                      abStack_e08,0);
      plVar66 = (long *)uStack_1218;
      uStack_1218 = (undefined1 (*) [16])0x0;
      if (plVar66 != (long *)0x0) {
        (**(code **)(*plVar66 + 8))();
      }
      if ((uStack_1078 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1067,uStack_1068),
                        CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078))
                                ) & 0xfffffffffffffffe);
      }
      uVar60 = auStack_8c8._0_8_;
      if (auStack_8c8._0_8_ != 0) {
        for (lVar64 = (long)stack0xfffffffffffff740; uVar60 != lVar64; lVar64 = lVar64 + -0x18) {
          if ((*(byte *)(lVar64 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar64 + -8),
                            *(ulong *)(lVar64 + -0x18) & 0xfffffffffffffffe);
          }
        }
        stack0xfffffffffffff740 = (uint *)uVar60;
        func_0x0412a280(auStack_8c8._0_8_,auStack_8b8._0_8_ - auStack_8c8._0_8_);
      }
    }
    if ((auStack_10a0[8] & 1) == 0) {
      uVar70 = (ulong)(auStack_10a0[8] >> 1);
    }
    else {
      uVar70 = auStack_1090._0_8_;
    }
    if (uVar70 != 0) {
      _auStack_8c8 = (undefined1  [16])0x0;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = stack0xfffffffffffff750;
      _auStack_8b8 = auVar44 << 0x40;
      if ((auStack_10a0[8] & 1) == 0) {
        puVar82 = auStack_10a0 + 9;
      }
      else {
        puVar82 = (undefined1 *)auStack_1090._8_8_;
      }
      func_0x0edfe0e0(puVar82,uVar70,0x2c,auStack_8c8);
      uStack_1078 = 0x69727010;
      uStack_1074 = 0x6f;
      uStack_1073 = 0x72;
      uStack_1072 = 0x7469;
      cStack_1070 = 'y';
      uStack_106f = 0;
      uStack_ee8._0_4_ = 0;
      uStack_1218 = (undefined1 (*) [16])&uStack_ee8;
      lVar64 = func_0x0eebedb0(0xf7b98b0,&uStack_ee8,&UNK_01563a4f,&uStack_1218,&puStack_1128);
      uStack_1218 = (undefined1 (*) [16])0x0;
      func_0x0eeb4b50(*(undefined8 *)(lVar64 + 0x18),&uStack_1218,&uStack_1078,auStack_8c8,
                      abStack_e08,0);
      plVar66 = (long *)uStack_1218;
      uStack_1218 = (undefined1 (*) [16])0x0;
      if (plVar66 != (long *)0x0) {
        (**(code **)(*plVar66 + 8))();
      }
      if ((uStack_1078 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1067,uStack_1068),
                        CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078))
                                ) & 0xfffffffffffffffe);
      }
      uVar60 = auStack_8c8._0_8_;
      if (auStack_8c8._0_8_ != 0) {
        for (lVar64 = (long)stack0xfffffffffffff740; uVar60 != lVar64; lVar64 = lVar64 + -0x18) {
          if ((*(byte *)(lVar64 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar64 + -8),
                            *(ulong *)(lVar64 + -0x18) & 0xfffffffffffffffe);
          }
        }
        stack0xfffffffffffff740 = (uint *)uVar60;
        func_0x0412a280(auStack_8c8._0_8_,auStack_8b8._0_8_ - auStack_8c8._0_8_);
      }
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar66 = _DAT_0f5523a0;
  pbVar85 = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) goto LAB_048ca0d8;
  bVar56 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar56 = *pbVar85;
  }
  plVar67 = _DAT_0f5523a8;
  auStack_8c8[8] = 1;
  auStack_8c8._0_8_ = 0xf5522b8;
  stack0xfffffffffffff750 = plVar66;
  auStack_8b8._0_8_ = pbVar85;
  plStack_8a8 = _DAT_0f5523a8;
  if ((bVar56 & 1) == 0) {
    cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
    if (cVar55 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  (**(code **)(*plVar67 + 0x770))(&uStack_1218,plVar67);
  if (((ulong)uStack_1218 & 1) == 0) {
    uStack_1068 = SUB81(pbStack_1208,0);
    uStack_1067 = (uint7)((ulong)pbStack_1208 >> 8);
    uStack_1078 = (uint)uStack_1218;
    uStack_1074 = (undefined1)((ulong)uStack_1218 >> 0x20);
    uStack_1073 = (undefined1)((ulong)uStack_1218 >> 0x28);
    uStack_1072 = (undefined2)((ulong)uStack_1218 >> 0x30);
    cStack_1070 = (char)plStack_1210;
    uStack_106f = (undefined1)((ulong)plStack_1210 >> 8);
    uStack_106e = (uint6)((ulong)plStack_1210 >> 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_1078,pbStack_1208,plStack_1210);
  }
  uStack_ee8._0_4_ = CONCAT31((int3)_DAT_0133fde8,0x20);
  uStack_ee8._4_4_ = (undefined4)((ulong)_DAT_0133fde8 >> 0x18);
  uStack_ee0 = (undefined1)((ulong)_DAT_0133fde8 >> 0x38);
  uStack_edf = (undefined7)_UNK_0133fdf0;
  uStack_ed8 = (undefined1)((ulong)_UNK_0133fdf0 >> 0x38);
  uStack_ed7 = 0;
  func_0x0eeb3fe0(_DAT_014f0260,&uStack_1078,&uStack_ee8,&UNK_01e79d90,0,1,1,0);
  if (((uint)uStack_ee8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_ed6,CONCAT11(uStack_ed7,uStack_ed8)),
                    CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8) & 0xfffffffffffffffe);
  }
  if ((uStack_1078 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_1067,uStack_1068),
                    CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078))) &
                    0xfffffffffffffffe);
  }
  if (((ulong)uStack_1218 & 1) != 0) {
    func_0x0412a280(pbStack_1208,(ulong)uStack_1218 & 0xfffffffffffffffe);
  }
  _auStack_8b8 = (undefined1  [16])0x0;
  if (plVar66 == (long *)0x0) {
LAB_048c7010:
  }
  else {
    LOCK();
    plVar67 = plVar66 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 != 0) {
      plStack_8a8 = (long *)0x0;
      goto LAB_048c7010;
    }
    (**(code **)(*plVar66 + 0x10))(plVar66);
    func_0x0412c2d0(plVar66);
    plVar66 = stack0xfffffffffffff750;
    plStack_8a8 = (long *)0x0;
    if (stack0xfffffffffffff750 == (long *)0x0) goto LAB_048c7010;
    plStack_8a8 = (long *)0x0;
    LOCK();
    plVar67 = stack0xfffffffffffff750 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 != 0) goto LAB_048c7010;
    (**(code **)(*stack0xfffffffffffff750 + 0x10))(stack0xfffffffffffff750);
    func_0x0412c2d0(plVar66);
  }
  if (auStack_8c8[8] == '\x01') {
    func_0x0eee02f0(auStack_8c8._0_8_);
  }
  if ((abStack_e08[0] & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_df1,
                             CONCAT16(uStack_df2,
                                      CONCAT15(uStack_df3,
                                               CONCAT14(uStack_df4,
                                                        CONCAT22(uStack_df6,
                                                                 CONCAT11(uStack_df7,uStack_df8)))))
                            ),
                    CONCAT17(auStack_e03[2],
                             CONCAT25(auStack_e03._0_2_,
                                      CONCAT14(abStack_e08[4],
                                               CONCAT22(abStack_e08._2_2_,
                                                        CONCAT11(abStack_e08[1],abStack_e08[0])))))
                    & 0xfffffffffffffffe);
  }
  if ((DAT_0f776b18 == '\0') && (iVar58 = func_0x04108328(&DAT_0f776b18), iVar58 != 0)) {
    func_0x0edf5500(&DAT_0f776968);
    func_0x0eee2f40(&SUB_0edf6010,&DAT_0f776968,0xf53dab8);
    FUN_0410844d(&DAT_0f776b18);
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x22d,&UNK_0138fe77);
  if ((DAT_0f776b18 == '\0') && (iVar58 = func_0x04108328(&DAT_0f776b18), iVar58 != 0)) {
    func_0x0edf5500(&DAT_0f776968);
    func_0x0eee2f40(&SUB_0edf6010,&DAT_0f776968,0xf53dab8);
    FUN_0410844d(&DAT_0f776b18);
  }
  uVar60 = _DAT_0f7769d8;
  if ((DAT_0f7769c8 & 1) == 0) {
    uVar60 = 0xf7769c9;
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x22e,&UNK_012bd0d9,uVar60);
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    lVar64 = (long)param_1 + 0x89;
  }
  else {
    lVar64 = param_1[0x13];
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x22f,&UNK_013c4906,lVar64);
  if ((DAT_0f776b18 == '\0') && (iVar58 = func_0x04108328(&DAT_0f776b18), iVar58 != 0)) {
    func_0x0edf5500(&DAT_0f776968);
    func_0x0eee2f40(&SUB_0edf6010,&DAT_0f776968,0xf53dab8);
    FUN_0410844d(&DAT_0f776b18);
  }
  uVar60 = _DAT_0f776990;
  if ((DAT_0f776980 & 1) == 0) {
    uVar60 = 0xf776981;
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x230,&UNK_012bd0e5,uVar60);
  uVar60 = _DAT_0f776ae0;
  if ((DAT_0f776ad0 & 1) == 0) {
    uVar60 = 0xf776ad1;
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x231,&UNK_0125765c,uVar60);
  uVar60 = _DAT_0f776ac8;
  if ((DAT_0f776ab8 & 1) == 0) {
    uVar60 = 0xf776ab9;
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x232,&UNK_01257667,uVar60);
  uVar60 = _DAT_0f776af8;
  if ((DAT_0f776ae8 & 1) == 0) {
    uVar60 = 0xf776ae9;
  }
  func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x233,&UNK_012f0f33,uVar60);
  plVar66 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar66 == (long *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *plVar66 = 0;
  plVar66[8] = 0;
  plVar66[9] = 0x10;
  lVar64 = func_0x0eee2eb0(0x22e);
  if (lVar64 != 0) {
    uVar73 = -(int)lVar64 & 7;
    uVar70 = (ulong)uVar73;
    lVar80 = lVar64 + uVar70;
    *(undefined1 (*) [16])(lVar64 + uVar70) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(lVar64 + 0x40 + uVar70) = (undefined1  [16])0x0;
    *(ulong *)(lVar64 + 0x88 + uVar70) = (ulong)(-((int)lVar64 + uVar73 + 0xa0) & 7) + lVar80 + 0xa0
    ;
    *(undefined8 *)(lVar64 + 0x90 + uVar70) = 0xf;
    *(long *)(lVar64 + 0x98 + uVar70) = lVar64;
    *(long *)(lVar64 + 0x80 + uVar70) = lVar80;
    *plVar66 = lVar80;
    plVar66[8] = lVar80;
  }
  *(undefined1 *)(plVar66 + 10) = 1;
  plVar66[0xb] = 0;
  lVar64 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (lVar64 == 0) {
    func_0x0eec74c0(8,0);
  }
  func_0x04136fe0(lVar64);
  auStack_8c8._0_8_ = lVar64;
  plVar67 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (plVar67 == (long *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  auVar45._8_8_ = 0;
  auVar45._0_8_ = stack0xfffffffffffff740;
  _auStack_8c8 = auVar45 << 0x40;
  *plVar67 = lVar64;
  plVar67[1] = (long)plVar66;
  abStack_e08[0] = (byte)plVar67;
  abStack_e08[1] = (byte)((ulong)plVar67 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)plVar67 >> 0x10);
  abStack_e08[4] = (byte)((ulong)plVar67 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)plVar67 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)plVar67 >> 0x38);
  iVar58 = func_0x0eee35e0(&uStack_1078,0,&UNK_04915ab0,plVar67);
  if (iVar58 == 0) {
    if (plVar66[0xb] == 0) goto code_r0x048c742e;
  }
  else {
    func_0x0412e520(iVar58,&UNK_012201b3);
  }
  func_0x04109e60();
LAB_048c9f23:
  iVar58 = func_0x04108328(&DAT_0f551358);
  if (iVar58 != 0) {
    func_0x0490a6a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5512d8,0xf53dab8);
    FUN_0410844d(&DAT_0f551358);
  }
LAB_048c439e:
  plVar66 = (long *)(CONCAT71(uStack_105f,uStack_1060) +
                    (ulong)((int)((ulong)(auStack_1058._0_8_ - CONCAT71(uStack_105f,uStack_1060)) >>
                                 3) - 1U & *(uint *)(_DAT_0f5512d8 + 4)) * 8);
  do {
    lVar64 = *plVar66;
    if (lVar64 == -1) goto LAB_048c43f4;
    plVar66 = (long *)((long)auStack_1048 + lVar64 * 0x18);
  } while (*(uint *)((long)auStack_1048 + 8 + lVar64 * 0x18) != *(uint *)(_DAT_0f5512d8 + 4));
  if (plVar66 == plStack_1040) {
LAB_048c43f4:
    puVar62 = &DAT_0f5512d8;
    if (iRam000000000f551338 != -0x2b3da790) goto LAB_048c4458;
LAB_048c4423:
    lVar64 = *(long *)(puVar62 + 0x68);
    if (lVar64 == 0) goto LAB_048c4458;
    bVar89 = (*(byte *)(lVar64 + 8) & 1) != 0;
    puVar62 = (undefined *)(lVar64 + 9);
    if (bVar89) {
      puVar62 = *(undefined **)(lVar64 + 0x18);
    }
    uVar70 = (ulong)(*(byte *)(lVar64 + 8) >> 1);
    if (bVar89) {
      uVar70 = *(ulong *)(lVar64 + 0x10);
    }
  }
  else {
    puVar62 = (undefined *)plVar66[2];
    if (*(int *)(puVar62 + 0x60) == -0x2b3da790) goto LAB_048c4423;
LAB_048c4458:
    puVar62 = &UNK_0135b557;
    uVar70 = 0xb;
  }
  func_0x0490b290(&lStack_108,&uStack_1078,puVar62,uVar70);
  func_0x0490b880(auStack_8c8,lStack_108 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c456a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
LAB_048c44e8:
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c456a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&lStack_108,&UNK_01478433,0x17);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ce8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_0490ce30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_0490cb20;
  puStack_dc8 = &UNK_0490ce40;
  puStack_dc0 = &UNK_0490cfa0;
  uStack_db8 = 0;
  auStack_db0 = (undefined1  [16])0x0;
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_158 = cStack_d8;
  uStack_168 = uStack_e8;
  uStack_160 = uStack_e0;
  uStack_178 = uStack_f8;
  plStack_170 = plStack_f0;
  lStack_188 = lStack_108;
  uStack_180 = uStack_100;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,lStack_188 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c47da:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c47da;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&lStack_188,&UNK_01324fed,0x17);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ce8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_0490ce30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_0490cb20;
  puStack_dc8 = &UNK_0490d3f0;
  puStack_dc0 = &UNK_0490d550;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_118 = cStack_158;
  uStack_128 = uStack_168;
  uStack_120 = uStack_160;
  uStack_138 = uStack_178;
  plStack_130 = plStack_170;
  lStack_148 = lStack_188;
  uStack_140 = uStack_180;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,lStack_148 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c4a2a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c4a2a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&lStack_148,&UNK_0123c60b,0x1f);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ef8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_04906f70;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_04906c50;
  puStack_dc8 = &UNK_0490d730;
  puStack_dc0 = &UNK_0490d890;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_8d8 = cStack_118;
  uStack_8e8 = uStack_128;
  uStack_8e0 = uStack_120;
  uStack_8f8 = uStack_138;
  plStack_8f0 = plStack_130;
  lStack_908 = lStack_148;
  uStack_900 = uStack_140;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,lStack_908 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c4c8a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c4c8a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&lStack_908,&UNK_013f920c,0xd);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ce8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_0490ce30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_0490cb20;
  puStack_dc8 = &UNK_0490da70;
  puStack_dc0 = &UNK_0490dbd0;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_968 = cStack_8d8;
  uStack_978 = uStack_8e8;
  uStack_970 = uStack_8e0;
  uStack_988 = uStack_8f8;
  plStack_980 = plStack_8f0;
  lStack_998 = lStack_908;
  uStack_990 = uStack_900;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,lStack_998 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c4eda:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c4eda;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&lStack_998,&UNK_01221c13,0x18);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef474e0;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_049119f0;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &UNK_0490fc00;
  puStack_dc8 = &UNK_04911a00;
  puStack_dc0 = &UNK_04911c00;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_1138 = cStack_968;
  uStack_1148 = uStack_978;
  uStack_1140 = uStack_970;
  uStack_1158 = (undefined1)uStack_988;
  uStack_1157 = (undefined6)((ulong)uStack_988 >> 8);
  uStack_1151 = (undefined1)((ulong)uStack_988 >> 0x38);
  plStack_1150 = plStack_980;
  bStack_1168 = (byte)lStack_998;
  uStack_1167 = (undefined7)((ulong)lStack_998 >> 8);
  uStack_1160 = (undefined1)uStack_990;
  uStack_115f = (undefined6)((ulong)uStack_990 >> 8);
  uStack_1159 = (undefined1)((ulong)uStack_990 >> 0x38);
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,CONCAT71(uStack_1167,bStack_1168) + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c513a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c513a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&bStack_1168,&UNK_01447411,0x13);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ce8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_0490ce30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_0490cb20;
  puStack_dc8 = &UNK_04912070;
  puStack_dc0 = &UNK_049121d0;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_e18 = cStack_1138;
  apuStack_e48[0] = (undefined *)CONCAT71(uStack_1167,bStack_1168);
  apuStack_e48[1]._1_6_ = uStack_115f;
  apuStack_e48[1]._0_1_ = uStack_1160;
  apuStack_e48[1]._7_1_ = uStack_1159;
  plStack_e38 = (long *)CONCAT17(uStack_1151,CONCAT61(uStack_1157,uStack_1158));
  uStack_e28 = uStack_1148;
  uStack_e20 = uStack_1140;
  plStack_e30 = plStack_1150;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,apuStack_e48[0] + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c538a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c538a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,apuStack_e48,&UNK_0147844b,0x16);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ef8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_04906f70;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_04906c50;
  puStack_dc8 = &UNK_049123b0;
  puStack_dc0 = &UNK_04912510;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  cStack_1248 = cStack_e18;
  uStack_1258 = (undefined4)uStack_e28;
  uStack_1254 = (undefined4)(uStack_e28 >> 0x20);
  plStack_1250 = (long *)uStack_e20;
  plStack_1268 = plStack_e38;
  plStack_1260 = plStack_e30;
  puStack_1278 = apuStack_e48[0];
  uStack_1270 = (ulong)apuStack_e48[1];
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,puStack_1278 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c55da:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c55da;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,(undefined1 (*) [16])&puStack_1278,&UNK_014c8aa3,0x15);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ef8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_04906f70;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_04906c50;
  puStack_dc8 = &UNK_049126f0;
  puStack_dc0 = &UNK_04912850;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  auStack_10f8[0] = cStack_1248;
  uStack_1108 = CONCAT44(uStack_1254,uStack_1258);
  lStack_1100 = (long)plStack_1250;
  plStack_1118 = plStack_1268;
  pcStack_1110 = (code *)plStack_1260;
  puStack_1128 = puStack_1278;
  puStack_1120 = (uint *)uStack_1270;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,puStack_1128 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c582a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c582a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&puStack_1128,&UNK_011d366b,0x12);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef46ef8;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_04906f70;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_04906c50;
  puStack_dc8 = &UNK_04912a30;
  puStack_dc0 = &UNK_04912b90;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  uStack_eb8 = CONCAT71(uStack_eb8._1_7_,auStack_10f8[0]);
  uStack_ec8 = (undefined4)uStack_1108;
  uStack_ec4 = (undefined4)((ulong)uStack_1108 >> 0x20);
  puStack_ec0 = (uint *)lStack_1100;
  uStack_ed8 = SUB81(plStack_1118,0);
  uStack_ed7 = (undefined1)((ulong)plStack_1118 >> 8);
  uStack_ed6 = (undefined6)((ulong)plStack_1118 >> 0x10);
  pcStack_ed0 = pcStack_1110;
  uStack_ee8._0_4_ = (uint)puStack_1128;
  uStack_ee8._4_4_ = (undefined4)((ulong)puStack_1128 >> 0x20);
  uStack_ee0 = SUB81(puStack_1120,0);
  uStack_edf = (undefined7)((ulong)puStack_1120 >> 8);
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8) + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c5a8a:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c5a8a;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&uStack_ee8,&UNK_011d367e,0xf);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef44b00;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = 0;
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = 0;
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_048b3f30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_048b2190;
  puStack_dc8 = &UNK_04912d70;
  puStack_dc0 = &UNK_04912f40;
  uStack_db8 = 0;
  auStack_db0 = ZEXT816(0);
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  uStack_11e8 = CONCAT71(uStack_11e8._1_7_,(undefined1)uStack_eb8);
  uStack_1218 = (undefined1 (*) [16])CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
  plStack_1210 = (long *)CONCAT71(uStack_edf,uStack_ee0);
  pbStack_1208 = (byte *)CONCAT62(uStack_ed6,CONCAT11(uStack_ed7,uStack_ed8));
  auStack_11f8._4_4_ = uStack_ec4;
  auStack_11f8._0_4_ = uStack_ec8;
  auStack_11f8._8_8_ = puStack_ec0;
  pcStack_1200 = pcStack_ed0;
  func_0x048b0bc0(auStack_8b8 + 8);
  func_0x0490b880(auStack_8c8,(long)uStack_1218 + 0x18);
  if (iStack_8ac == 2) {
    piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x60);
    iVar58 = *piVar63;
    while (iVar58 != stack0xfffffffffffff750) {
      piVar63 = piVar63 + 0x16;
      iVar58 = *piVar63;
    }
    lVar64 = *(long *)(piVar63 + 0xc);
    while ((uint *)lVar64 != stack0xfffffffffffff740) {
      piVar63 = *(int **)(piVar63 + 0xe);
      lVar64 = *(long *)(piVar63 + 0xc);
    }
LAB_048c5cea:
    *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
  }
  else {
    if (iStack_8ac == 1) {
      piVar63 = *(int **)(*(long *)(auStack_8b8._0_8_ + 0x78) + 0x48);
      iVar58 = *piVar63;
      while (iVar58 != stack0xfffffffffffff750) {
        piVar63 = piVar63 + 0x1a;
        iVar58 = *piVar63;
      }
      goto LAB_048c5cea;
    }
    if (iStack_8ac == 0) {
      *(uint *)(auStack_8b8._0_8_ + 0x18) = *(uint *)(auStack_8b8._0_8_ + 0x18) | 0x40000;
    }
  }
  func_0x0490be70(auStack_8c8,&uStack_1218,&UNK_013c4a0b,0x13);
  puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar68 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar68 = &UNK_0ef44b00;
  plVar66 = stack0xfffffffffffff750;
  stack0xfffffffffffff750 = puVar68;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  abStack_e08[0] = auStack_8b8[0];
  abStack_e08[1] = auStack_8b8[1];
  abStack_e08._2_2_ = auStack_8b8._2_2_;
  cStack_e00 = '\0';
  uStack_dff = 0;
  uStack_dfe = 0;
  uStack_dfd = 0;
  cStack_dfc = '\0';
  uStack_dfb = 0;
  uStack_dfa = 0;
  uStack_df9 = 0;
  uStack_df8 = 0;
  uStack_df7 = 0;
  uStack_df6 = 0;
  plStack_df0 = (long *)0x1;
  plStack_de8 = (long *)0x0;
  puStack_de0 = &UNK_048b3f30;
  puStack_dd8 = &SUB_048b06d0;
  puStack_dd0 = &SUB_048b2190;
  puStack_dc8 = &UNK_04913120;
  puStack_dc0 = &UNK_049132f0;
  uStack_db8 = 0;
  auStack_db0 = (undefined1  [16])0x0;
  func_0x048b05a0(stack0xfffffffffffff740,abStack_e08);
  uVar60 = auStack_db0._8_8_;
  if ((long *)auStack_db0._8_8_ != (long *)0x0) {
    LOCK();
    plVar66 = (long *)(auStack_db0._8_8_ + 8);
    lVar64 = *plVar66;
    *plVar66 = *plVar66 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*(long *)auStack_db0._8_8_ + 0x10))(auStack_db0._8_8_);
      func_0x0412c2d0(uVar60);
    }
  }
  func_0x0490c180(auStack_8c8);
  func_0x048b0bc0(auStack_8b8 + 8);
  unique0x0000a500 = &uStack_1078;
  auStack_8b8._0_4_ = 0xffffffff;
  stack0xfffffffffffff750 = (long *)auStack_8a0;
  plStack_8a8 = (long *)0x800000000;
  uStack_7a0 = auStack_790;
  uStack_798 = 0x800000000;
  uStack_610 = 0xfbf8;
  uStack_60e = 1;
  uStack_60c = 0xffffffff00000000;
  uStack_600 = 0;
  uStack_5f8 = 0;
  auStack_8c8._0_8_ = &UNK_0f4e3998;
  puStack_1278 = (undefined *)CONCAT62(puStack_1278._2_6_,0xd);
  uStack_1270 = 0;
  plStack_1268 = (long *)0x0;
  plStack_1260 = (long *)0x0;
  uStack_1258 = 0;
  uStack_1254 = 0;
  plStack_1250 = (long *)CONCAT62(plStack_1250._2_6_,0x100);
  func_0x0ed62aa0(abStack_e08,auStack_1238);
  apuStack_e48[0] = &UNK_0ef45b70;
  puVar76 = stack0xfffffffffffff740 + 6;
  pbStack_1208 = &UNK_04913860;
  pcStack_1200 = (code *)0x0;
  auStack_11f8._0_5_ = 0x48240cd28;
  auStack_11f8._8_8_ = puVar76;
  puStack_11e0 = &UNK_04913840;
  uStack_1218 = (undefined1 (*) [16])&puStack_1278;
  uStack_11e8 = func_0x04913c20(puVar76);
  uStack_ee8._0_4_ = (uint)uStack_11e8;
  uStack_ee8._4_4_ = (undefined4)((ulong)uStack_11e8 >> 0x20);
  uStack_ee0 = SUB81(puVar76,0);
  uStack_edf = (undefined7)((ulong)puVar76 >> 8);
  puStack_1128 = (undefined *)func_0x04913c20(puVar76);
  puStack_1120 = puVar76;
  cVar55 = func_0x04913500(&uStack_ee8,&puStack_1128);
  if ((cVar55 == '\0') &&
     (cVar55 = func_0x0eeddcf0(&UNK_014784b5,&UNK_011ec167,0xa2,&UNK_01221c2c,&UNK_011b7e6f),
     cVar55 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (_DAT_0f54fd90 == 0) {
    func_0x048b0de0(&uStack_ee8,&bStack_1168);
    plVar67 = _DAT_0f54fd98;
    _DAT_0f54fd90 = CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
    plVar66 = (long *)CONCAT71(uStack_edf,uStack_ee0);
    uStack_ee8._0_4_ = 0;
    uStack_ee8._4_4_ = 0;
    uStack_ee0 = 0;
    uStack_edf = 0;
    if (_DAT_0f54fd98 != (long *)0x0) {
      LOCK();
      plVar83 = _DAT_0f54fd98 + 1;
      lVar64 = *plVar83;
      _DAT_0f54fd98 = plVar66;
      *plVar83 = *plVar83 + -1;
      UNLOCK();
      plVar66 = _DAT_0f54fd98;
      if (lVar64 == 0) {
        (**(code **)(*plVar67 + 0x10))(plVar67);
        func_0x0412c2d0(plVar67);
        plVar66 = _DAT_0f54fd98;
      }
    }
    _DAT_0f54fd98 = plVar66;
    plVar66 = (long *)CONCAT71(uStack_edf,uStack_ee0);
    if (plVar66 != (long *)0x0) {
      LOCK();
      plVar67 = plVar66 + 1;
      lVar64 = *plVar67;
      *plVar67 = *plVar67 + -1;
      UNLOCK();
      if (lVar64 == 0) {
        (**(code **)(*plVar66 + 0x10))(plVar66);
        func_0x0412c2d0(plVar66);
      }
    }
  }
  plStack_1118 = (long *)&UNK_0490a9e0;
  pcStack_1110 = (code *)0x0;
  uStack_1108 = CONCAT35(uStack_1108._5_3_,0x3d3866527);
  lStack_1100 = _DAT_0f54fd90;
  auStack_10f8 = (undefined1  [16])0x0;
  uStack_ed8 = 0xe0;
  uStack_ed7 = 0xa9;
  uStack_ed6 = 0x490;
  pcStack_ed0 = (code *)0x0;
  uStack_ec8 = 0xd3866527;
  uStack_ec4 = CONCAT31(uStack_ec4._1_3_,3);
  puStack_1128 = (undefined *)0x0;
  uStack_ee8 = &uStack_10e0;
  uStack_eb8 = 0;
  puStack_eb0 = &UNK_0490a900;
  puStack_ec0 = puVar76;
  cVar55 = func_0x0ed6b4a0(auStack_8c8,abStack_e08,&uStack_ee8,&uStack_1218,apuStack_e48);
  if (pcStack_ed0 != (code *)0x0) {
    (*pcStack_ed0)(&uStack_ee8);
    if (pcStack_1110 != (code *)0x0) {
      (*pcStack_1110)(&puStack_1128);
    }
  }
  if (pcStack_1200 != (code *)0x0) {
    (*pcStack_1200)(&uStack_1218);
  }
  func_0x04907660(&puStack_de0);
  plVar66 = (long *)CONCAT17(uStack_df1,
                             CONCAT16(uStack_df2,
                                      CONCAT15(uStack_df3,
                                               CONCAT14(uStack_df4,
                                                        CONCAT22(uStack_df6,
                                                                 CONCAT11(uStack_df7,uStack_df8)))))
                            );
  if (plVar66 != (long *)0x0) {
    plStack_df0 = plVar66;
    func_0x0412a280(plVar66,(long)plStack_de8 - (long)plVar66);
  }
  plVar66 = plStack_1268;
  uStack_1270 = 0;
  plStack_1268 = (long *)0x0;
  if (plVar66 != (long *)0x0) {
    LOCK();
    plVar67 = plVar66 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*plVar66 + 0x10))(plVar66);
      func_0x0412c2d0(plVar66);
    }
    plVar66 = plStack_1268;
    plStack_1260 = (long *)0x0;
    if (plStack_1268 != (long *)0x0) {
      LOCK();
      plVar67 = plStack_1268 + 1;
      lVar64 = *plVar67;
      *plVar67 = *plVar67 + -1;
      UNLOCK();
      if (lVar64 == 0) {
        (**(code **)(*plStack_1268 + 0x10))(plStack_1268);
        func_0x0412c2d0(plVar66);
      }
    }
  }
  func_0x0490a470(auStack_8c8);
  uStack_1078 = 0xf534768;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  plVar66 = (long *)CONCAT71(uStack_1067,uStack_1068);
  if (plVar66 == (long *)0x0) {
    *(undefined1 *)CONCAT62(uStack_106e,CONCAT11(uStack_106f,cStack_1070)) = 0;
  }
  else {
    *(undefined1 *)CONCAT62(uStack_106e,CONCAT11(uStack_106f,cStack_1070)) = 0;
    LOCK();
    plVar67 = plVar66 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*plVar66 + 0x10))(plVar66);
      func_0x0412c2d0(plVar66);
    }
  }
  lVar64 = lStack_1028;
  if (lStack_1028 != 0) {
    for (lVar80 = CONCAT62(uStack_101e,uStack_1020); lVar64 != lVar80; lVar80 = lVar80 + -0x38) {
      if ((*(byte *)(lVar80 + -0x38) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar80 + -0x28),
                        *(ulong *)(lVar80 + -0x38) & 0xfffffffffffffffe);
      }
    }
    uStack_1020 = (undefined2)lVar64;
    uStack_101e = (undefined6)((ulong)lVar64 >> 0x10);
    func_0x0412a280(lStack_1028,lStack_1018 - lStack_1028);
  }
  auStack_8c8._0_8_ = auStack_1048;
  func_0x048b0f50(auStack_8c8);
  lVar64 = CONCAT71(uStack_105f,uStack_1060);
  if (lVar64 != 0) {
    auStack_1058._0_8_ = lVar64;
    func_0x0412a280(lVar64,auStack_1058._8_8_ - lVar64);
  }
  if (cVar55 != '\0') {
    cStack_1080 = '\x01';
  }
  goto LAB_048c637a;
code_r0x048c742e:
  plVar66[0xb] = CONCAT26(uStack_1072,CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078)));
  uStack_1078 = 0;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  func_0x04136b90(&uStack_1078);
  lVar64 = param_1[10];
  param_1[10] = (long)plVar66;
  if (lVar64 != 0) {
    func_0x048c0e90(lVar64);
    func_0x0412a280(lVar64,0x60);
  }
  func_0x048e7120(auStack_8c8);
  func_0x0eee2dd0(&uStack_df6,0,0x3ee);
  abStack_e08[0] = (byte)_DAT_0156a589;
  abStack_e08[1] = (byte)((ulong)_DAT_0156a589 >> 8);
  abStack_e08._2_2_ = (undefined2)((ulong)_DAT_0156a589 >> 0x10);
  abStack_e08[4] = (byte)((ulong)_DAT_0156a589 >> 0x20);
  auStack_e03._0_2_ = (undefined2)((ulong)_DAT_0156a589 >> 0x28);
  auStack_e03[2] = (undefined1)((ulong)_DAT_0156a589 >> 0x38);
  cStack_e00 = (char)_UNK_0156a591;
  uStack_dff = (undefined1)((ulong)_UNK_0156a591 >> 8);
  uStack_dfe = (undefined1)((ulong)_UNK_0156a591 >> 0x10);
  uStack_dfd = (undefined1)((ulong)_UNK_0156a591 >> 0x18);
  cStack_dfc = (char)((ulong)_UNK_0156a591 >> 0x20);
  uStack_dfb = (undefined1)((ulong)_UNK_0156a591 >> 0x28);
  uStack_dfa = (undefined1)((ulong)_UNK_0156a591 >> 0x30);
  uStack_df9 = (undefined1)((ulong)_UNK_0156a591 >> 0x38);
  uStack_df8 = 0x73;
  uStack_df7 = 0;
  uStack_a08 = 0x11;
  uStack_fb0 = 0;
  apuStack_fe0[0] = &UNK_0eeed250;
  plStack_1210 = (long *)0x11;
  uStack_1218 = (undefined1 (*) [16])abStack_e08;
  func_0x0ee5df20(&uStack_1078,&UNK_0ef44650,&uStack_1218,8);
  uStack_1078 = 0xef445e8;
  uStack_1074 = 0;
  uStack_1073 = 0;
  uStack_1072 = 0;
  apuStack_fe0[0] = &UNK_0ef44638;
  uStack_1068 = 0x10;
  uStack_1067 = 0xef446;
  if (CONCAT62(uStack_101e,uStack_1020) == 0) {
    func_0x0eede920(0,1,0,0xc,8,&UNK_0138fece,0x83,&UNK_012d69e9,&DAT_0156a589);
    uStack_1078 = 0xef446c8;
    uStack_1074 = 0;
    uStack_1073 = 0;
    uStack_1072 = 0;
    apuStack_fe0[0] = &UNK_0ef44718;
    uStack_1068 = 0xf0;
    uStack_1067 = 0xef446;
    func_0x0ee5c730(&uStack_1060);
    func_0x0413c8a0(&uStack_1078,&UNK_0ef44658);
    func_0x04138180(apuStack_fe0);
  }
  else {
    cVar55 = func_0x048e8d90(&uStack_1078,auStack_8c8);
    uStack_1078 = 0xef446c8;
    uStack_1074 = 0;
    uStack_1073 = 0;
    uStack_1072 = 0;
    apuStack_fe0[0] = &UNK_0ef44718;
    uStack_1068 = 0xf0;
    uStack_1067 = 0xef446;
    func_0x0ee5c730(&uStack_1060);
    func_0x0413c8a0(&uStack_1078,&UNK_0ef44658);
    func_0x04138180(apuStack_fe0);
    lVar64 = lStack_1220;
    if (cVar55 != '\0') {
      abStack_e08[0] = 0x10;
      abStack_e08[1] = 0x73;
      abStack_e08[2] = 0x65;
      abStack_e08[3] = 0x72;
      abStack_e08[4] = 0x76;
      auStack_e03._0_2_ = 0x7265;
      auStack_e03[2] = 0x49;
      cStack_e00 = 100;
      uStack_dff = 0;
      lVar80 = func_0x0492ea00(lStack_1220,abStack_e08);
      if (lVar80 != 0) {
        bVar56 = *(byte *)(lVar80 + 0x28);
        uVar70 = (ulong)(bVar56 >> 1);
        if ((bVar56 & 1) != 0) {
          uVar70 = *(ulong *)(lVar80 + 0x30);
        }
        if ((&uStack_378 != (ulong *)(lVar80 + 0x28)) && (uVar70 != 0)) {
          if ((uStack_378 & 1) == 0) {
            if ((bVar56 & 1) == 0) {
              uStack_368 = *(undefined8 *)(lVar80 + 0x38);
              uStack_378 = *(ulong *)(lVar80 + 0x28);
              uStack_370 = *(undefined8 *)(lVar80 + 0x30);
            }
            else {
              func_0x04885070(&uStack_378,*(undefined8 *)(lVar80 + 0x38),*(ulong *)(lVar80 + 0x30));
            }
          }
          else {
            if ((bVar56 & 1) == 0) {
              lVar80 = lVar80 + 0x29;
            }
            else {
              lVar80 = *(long *)(lVar80 + 0x38);
            }
            func_0x04885120(&uStack_378,lVar80);
          }
        }
      }
      if ((abStack_e08[0] & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_df1,
                                 CONCAT16(uStack_df2,
                                          CONCAT15(uStack_df3,
                                                   CONCAT14(uStack_df4,
                                                            CONCAT22(uStack_df6,
                                                                     CONCAT11(uStack_df7,uStack_df8)
                                                                    ))))),
                        CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))) & 0xfffffffffffffffe);
      }
      abStack_e08[0] = 0x14;
      abStack_e08[1] = 0x73;
      abStack_e08[2] = 99;
      abStack_e08[3] = 0x65;
      abStack_e08[4] = 0x6e;
      auStack_e03._0_2_ = 0x7261;
      auStack_e03[2] = 0x69;
      cStack_e00 = 0x6f;
      uStack_dff = 0x49;
      uStack_dfe = 100;
      uStack_dfd = 0;
      lVar80 = func_0x0492ea00(lVar64,abStack_e08);
      if (lVar80 != 0) {
        bVar56 = *(byte *)(lVar80 + 0x28);
        uVar70 = (ulong)(bVar56 >> 1);
        if ((bVar56 & 1) != 0) {
          uVar70 = *(ulong *)(lVar80 + 0x30);
        }
        if (&uStack_360 != (ulong *)(lVar80 + 0x28) && uVar70 != 0) {
          if ((uStack_360 & 1) == 0) {
            if ((bVar56 & 1) == 0) {
              uStack_350 = *(undefined8 *)(lVar80 + 0x38);
              uStack_360 = *(ulong *)(lVar80 + 0x28);
              uStack_358 = *(undefined8 *)(lVar80 + 0x30);
            }
            else {
              func_0x04885070(&uStack_360,*(undefined8 *)(lVar80 + 0x38),*(ulong *)(lVar80 + 0x30));
            }
          }
          else {
            if ((bVar56 & 1) == 0) {
              lVar80 = lVar80 + 0x29;
            }
            else {
              lVar80 = *(long *)(lVar80 + 0x38);
            }
            func_0x04885120(&uStack_360,lVar80);
          }
        }
      }
      if ((abStack_e08[0] & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_df1,
                                 CONCAT16(uStack_df2,
                                          CONCAT15(uStack_df3,
                                                   CONCAT14(uStack_df4,
                                                            CONCAT22(uStack_df6,
                                                                     CONCAT11(uStack_df7,uStack_df8)
                                                                    ))))),
                        CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))) & 0xfffffffffffffffe);
      }
      abStack_e08[0] = 0xe;
      abStack_e08[1] = 0x77;
      abStack_e08[2] = 0x6f;
      abStack_e08[3] = 0x72;
      abStack_e08[4] = 0x6c;
      auStack_e03._0_2_ = 0x4964;
      auStack_e03[2] = 100;
      cStack_e00 = 0;
      lVar80 = func_0x0492ea00(lVar64,abStack_e08);
      if (lVar80 != 0) {
        bVar56 = *(byte *)(lVar80 + 0x28);
        uVar70 = (ulong)(bVar56 >> 1);
        if ((bVar56 & 1) != 0) {
          uVar70 = *(ulong *)(lVar80 + 0x30);
        }
        if (&uStack_348 != (ulong *)(lVar80 + 0x28) && uVar70 != 0) {
          if ((uStack_348 & 1) == 0) {
            if ((bVar56 & 1) == 0) {
              uStack_338 = *(undefined8 *)(lVar80 + 0x38);
              uStack_348 = *(ulong *)(lVar80 + 0x28);
              uStack_340 = *(undefined8 *)(lVar80 + 0x30);
            }
            else {
              func_0x04885070(&uStack_348,*(undefined8 *)(lVar80 + 0x38),*(ulong *)(lVar80 + 0x30));
            }
          }
          else {
            if ((bVar56 & 1) == 0) {
              lVar80 = lVar80 + 0x29;
            }
            else {
              lVar80 = *(long *)(lVar80 + 0x38);
            }
            func_0x04885120(&uStack_348,lVar80);
          }
        }
      }
      if ((abStack_e08[0] & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_df1,
                                 CONCAT16(uStack_df2,
                                          CONCAT15(uStack_df3,
                                                   CONCAT14(uStack_df4,
                                                            CONCAT22(uStack_df6,
                                                                     CONCAT11(uStack_df7,uStack_df8)
                                                                    ))))),
                        CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))) & 0xfffffffffffffffe);
      }
      abStack_e08[0] = 0xe;
      abStack_e08[1] = 0x6f;
      abStack_e08[2] = 0x77;
      abStack_e08[3] = 0x6e;
      abStack_e08[4] = 0x65;
      auStack_e03._0_2_ = 0x4972;
      auStack_e03[2] = 100;
      cStack_e00 = 0;
      lVar80 = func_0x0492ea00(lVar64,abStack_e08);
      if (lVar80 != 0) {
        bVar56 = *(byte *)(lVar80 + 0x28);
        uVar70 = (ulong)(bVar56 >> 1);
        if ((bVar56 & 1) != 0) {
          uVar70 = *(ulong *)(lVar80 + 0x30);
        }
        if (&uStack_330 != (ulong *)(lVar80 + 0x28) && uVar70 != 0) {
          if ((uStack_330 & 1) == 0) {
            if ((bVar56 & 1) == 0) {
              uStack_320 = *(undefined8 *)(lVar80 + 0x38);
              uStack_330 = *(ulong *)(lVar80 + 0x28);
              uStack_328 = *(undefined8 *)(lVar80 + 0x30);
            }
            else {
              func_0x04885070(&uStack_330,*(undefined8 *)(lVar80 + 0x38),*(ulong *)(lVar80 + 0x30));
            }
          }
          else {
            if ((bVar56 & 1) == 0) {
              lVar80 = lVar80 + 0x29;
            }
            else {
              lVar80 = *(long *)(lVar80 + 0x38);
            }
            func_0x04885120(&uStack_330,lVar80);
          }
        }
      }
      if ((abStack_e08[0] & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_df1,
                                 CONCAT16(uStack_df2,
                                          CONCAT15(uStack_df3,
                                                   CONCAT14(uStack_df4,
                                                            CONCAT22(uStack_df6,
                                                                     CONCAT11(uStack_df7,uStack_df8)
                                                                    ))))),
                        CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))) & 0xfffffffffffffffe);
      }
      abStack_e08[0] = 0x18;
      abStack_e08[1] = 0x73;
      abStack_e08[2] = 99;
      abStack_e08[3] = 0x65;
      abStack_e08[4] = 0x6e;
      auStack_e03._0_2_ = 0x7261;
      auStack_e03[2] = 0x69;
      cStack_e00 = 'o';
      uStack_dff = 0x4e;
      uStack_dfe = 0x61;
      uStack_dfd = 0x6d;
      cStack_dfc = 'e';
      uStack_dfb = 0;
      lVar64 = func_0x0492ea00(lVar64,abStack_e08);
      if (lVar64 != 0) {
        bVar56 = *(byte *)(lVar64 + 0x28);
        uVar70 = (ulong)(bVar56 >> 1);
        if ((bVar56 & 1) != 0) {
          uVar70 = *(ulong *)(lVar64 + 0x30);
        }
        if (&uStack_318 != (ulong *)(lVar64 + 0x28) && uVar70 != 0) {
          if ((uStack_318 & 1) == 0) {
            if ((bVar56 & 1) == 0) {
              uStack_308 = *(undefined8 *)(lVar64 + 0x38);
              uStack_318 = *(ulong *)(lVar64 + 0x28);
              uStack_310 = *(undefined8 *)(lVar64 + 0x30);
            }
            else {
              func_0x04885070(&uStack_318,*(undefined8 *)(lVar64 + 0x38),*(ulong *)(lVar64 + 0x30));
            }
          }
          else {
            if ((bVar56 & 1) == 0) {
              lVar64 = lVar64 + 0x29;
            }
            else {
              lVar64 = *(long *)(lVar64 + 0x38);
            }
            func_0x04885120(&uStack_318,lVar64);
          }
        }
      }
      if ((abStack_e08[0] & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_df1,
                                 CONCAT16(uStack_df2,
                                          CONCAT15(uStack_df3,
                                                   CONCAT14(uStack_df4,
                                                            CONCAT22(uStack_df6,
                                                                     CONCAT11(uStack_df7,uStack_df8)
                                                                    ))))),
                        CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))) & 0xfffffffffffffffe);
      }
      if ((auStack_8b8[8] & 1) == 0) {
        puVar82 = auStack_8b8 + 9;
      }
      else {
        puVar82 = (undefined1 *)auStack_8a0._0_8_;
      }
      func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x24a,&UNK_0128a93b,puVar82);
      (**(code **)(_DAT_0f545ca0 + 0x10))(&DAT_0f545ca0);
      if ((DAT_0f726cc0 == '\0') && (iVar58 = func_0x04108328(&DAT_0f726cc0), iVar58 != 0)) {
        func_0x0eee2dd0(0xf725a58,0,0x121c);
        DAT_0f726c74 = 1;
        _DAT_0f726c75 = 0;
        uRam000000000f726c7d = 0;
        _DAT_0f726c85 = 0;
        uRam000000000f726c8d = 0;
        _DAT_0f726c95 = 0;
        uRam000000000f726c9d = 0;
        DAT_0f726ca4 = 0;
        uRam000000000f726ca5 = 0;
        _DAT_0f726cb0 = 0;
        DAT_0f726cb8 = 0;
        func_0x0eee2f40(&UNK_0d77dce0,0xf725a58,0xf53dab8);
        FUN_0410844d(&DAT_0f726cc0);
      }
      bVar56 = func_0x0d77dbc0(0xf725a58,&UNK_013c4915);
      func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x25c,&UNK_011ebf10,bVar56 & 1,extraout_RDX);
      if ((bVar56 & 1) == 0) {
        func_0x0eede920(0,1,0,0xc,8,&UNK_01198f52,0x271,&UNK_01324eca);
      }
      else {
        puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
        if (puVar68 == (undefined8 *)0x0) {
          func_0x0eec74c0(8,0);
        }
        puVar69 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
        if (puVar69 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x68,0);
        }
        puVar69[4] = 0;
        puVar69[5] = 0;
        puVar69[2] = 0;
        puVar69[3] = 0;
        *puVar69 = 0;
        puVar69[1] = 0;
        *(undefined4 *)(puVar69 + 5) = 0x3f800000;
        puVar69[6] = 0;
        puVar69[7] = 0;
        puVar69[8] = 0;
        puVar69[9] = 0;
        puVar69[10] = 0;
        puVar69[0xb] = 0;
        puVar69[0xc] = 0;
        *puVar68 = puVar69;
        plVar66 = (long *)param_1[0x1f];
        param_1[0x1f] = (long)puVar68;
        if (plVar66 != (long *)0x0) {
          lVar64 = *plVar66;
          *plVar66 = 0;
          if (lVar64 != 0) {
            func_0x09b456f0(lVar64);
            func_0x0412a280(lVar64,0x68);
          }
          func_0x0412a280(plVar66,8);
        }
        if ((DAT_0f726cc0 == '\0') && (iVar58 = func_0x04108328(&DAT_0f726cc0), iVar58 != 0)) {
          func_0x0eee2dd0(0xf725a58,0,0x121c);
          DAT_0f726c74 = 1;
          _DAT_0f726c75 = 0;
          uRam000000000f726c7d = 0;
          _DAT_0f726c85 = 0;
          uRam000000000f726c8d = 0;
          _DAT_0f726c95 = 0;
          uRam000000000f726c9d = 0;
          DAT_0f726ca4 = 0;
          uRam000000000f726ca5 = 0;
          _DAT_0f726cb0 = 0;
          DAT_0f726cb8 = 0;
          func_0x0eee2f40(&UNK_0d77dce0,0xf725a58,0xf53dab8);
          FUN_0410844d(&DAT_0f726cc0);
        }
        lVar64 = _DAT_0f726cb0;
        if (_DAT_0f726cb0 != 0) {
          auVar130 = func_0x0ee1a4e0(_DAT_0f726cb0,&UNK_014829f5,7);
          if ((auVar130._0_8_ != lVar64 + 8) && ((*auVar130._8_8_ & 7) == 5)) {
            if ((DAT_0f7b9fb8 == '\0') && (iVar58 = func_0x04108328(&DAT_0f7b9fb8), iVar58 != 0)) {
              func_0x0eecb9c0(&DAT_0f7b9fb0);
              func_0x0eee2f40(&UNK_0eecbab0,&DAT_0f7b9fb0,0xf53dab8);
              FUN_0410844d(&DAT_0f7b9fb8);
            }
            func_0x09b44820(*(undefined8 *)param_1[0x1f],&DAT_0f7b9fb0,auVar130._8_8_);
          }
        }
      }
      func_0x0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      func_0x0412d610(0xf5522b8);
      plVar66 = _DAT_0f5523a0;
      pbVar85 = _DAT_0f552398;
      uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
      if ((_DAT_0f552398 == (byte *)0x0) ||
         (uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8),
         *_DAT_0f552398 != 1)) goto LAB_048ca0e4;
      bVar56 = 1;
      if (_DAT_0f5523a0 != (long *)0x0) {
        LOCK();
        _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
        UNLOCK();
        bVar56 = *pbVar85;
      }
      plVar67 = _DAT_0f5523a8;
      abStack_e08[0] = 0xb8;
      abStack_e08[1] = 0x22;
      abStack_e08[2] = 0x55;
      abStack_e08[3] = 0xf;
      abStack_e08[4] = 0;
      auStack_e03._0_2_ = 0;
      auStack_e03[2] = 0;
      cStack_e00 = '\x01';
      uStack_df8 = SUB81(pbVar85,0);
      uStack_df7 = (undefined1)((ulong)pbVar85 >> 8);
      uStack_df6 = (undefined2)((ulong)pbVar85 >> 0x10);
      uStack_df4 = (undefined1)((ulong)pbVar85 >> 0x20);
      uStack_df3 = (undefined1)((ulong)pbVar85 >> 0x28);
      uStack_df2 = (undefined1)((ulong)pbVar85 >> 0x30);
      uStack_df1 = (undefined1)((ulong)pbVar85 >> 0x38);
      plStack_df0 = plVar66;
      plStack_de8 = _DAT_0f5523a8;
      if (((bVar56 & 1) == 0) &&
         (cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
         cVar55 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      uVar70 = (**(code **)(*plVar67 + 0xe0))(plVar67);
      pauVar77 = (undefined1 (*) [16])((long)abStack_e08 + 0x10);
      uStack_df8 = 0;
      uStack_df7 = 0;
      uStack_df6 = 0;
      uStack_df4 = 0;
      uStack_df3 = 0;
      uStack_df2 = 0;
      uStack_df1 = 0;
      plStack_df0 = (long *)0x0;
      if (plVar66 != (long *)0x0) {
        LOCK();
        plVar67 = plVar66 + 1;
        lVar64 = *plVar67;
        *plVar67 = *plVar67 + -1;
        UNLOCK();
        if (lVar64 == 0) {
          (**(code **)(*plVar66 + 0x10))(plVar66);
          func_0x0412c2d0(plVar66);
        }
        plVar66 = plStack_df0;
        plStack_de8 = (long *)0x0;
        if (plStack_df0 != (long *)0x0) {
          LOCK();
          plVar67 = plStack_df0 + 1;
          lVar64 = *plVar67;
          *plVar67 = *plVar67 + -1;
          UNLOCK();
          if (lVar64 == 0) {
            (**(code **)(*plStack_df0 + 0x10))(plStack_df0);
            func_0x0412c2d0(plVar66);
          }
        }
      }
      if (cStack_e00 == '\x01') {
        func_0x0eee02f0(CONCAT17(auStack_e03[2],
                                 CONCAT25(auStack_e03._0_2_,
                                          CONCAT14(abStack_e08[4],
                                                   CONCAT22(abStack_e08._2_2_,
                                                            CONCAT11(abStack_e08[1],abStack_e08[0]))
                                                  ))));
      }
      uVar84 = (ulong)uStack_830 & 0xffffffff;
      uVar71 = uVar84;
      if (uVar70 < uVar84) {
        uVar71 = uVar70;
      }
      if (uVar84 == 0) {
        uVar71 = uVar70;
      }
      func_0x0412d550(0xf5522b8);
      LOCK();
      _DAT_0f552388 = _DAT_0f552388 + 1;
      UNLOCK();
      func_0x0412d610(0xf5522b8);
      plVar66 = _DAT_0f5523a0;
      pbVar85 = _DAT_0f552398;
      uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
      if ((_DAT_0f552398 != (byte *)0x0) &&
         (uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8),
         *_DAT_0f552398 == 1)) {
        bVar56 = 1;
        if (_DAT_0f5523a0 != (long *)0x0) {
          LOCK();
          _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
          UNLOCK();
          bVar56 = *pbVar85;
        }
        plVar67 = _DAT_0f5523a8;
        abStack_e08[0] = 0xb8;
        abStack_e08[1] = 0x22;
        abStack_e08[2] = 0x55;
        abStack_e08[3] = 0xf;
        abStack_e08[4] = 0;
        auStack_e03._0_2_ = 0;
        auStack_e03[2] = 0;
        cStack_e00 = '\x01';
        uStack_df8 = SUB81(pbVar85,0);
        uStack_df7 = (undefined1)((ulong)pbVar85 >> 8);
        uStack_df6 = (undefined2)((ulong)pbVar85 >> 0x10);
        uStack_df4 = (undefined1)((ulong)pbVar85 >> 0x20);
        uStack_df3 = (undefined1)((ulong)pbVar85 >> 0x28);
        uStack_df2 = (undefined1)((ulong)pbVar85 >> 0x30);
        uStack_df1 = (undefined1)((ulong)pbVar85 >> 0x38);
        plStack_df0 = plVar66;
        plStack_de8 = _DAT_0f5523a8;
        if (((bVar56 & 1) == 0) &&
           (cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
           cVar55 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar70 = (**(code **)(*plVar67 + 0xd8))(plVar67);
        if (uVar71 < uVar70) {
          uVar70 = uVar71;
        }
        uStack_df8 = 0;
        uStack_df7 = 0;
        uStack_df6 = 0;
        uStack_df4 = 0;
        uStack_df3 = 0;
        uStack_df2 = 0;
        uStack_df1 = 0;
        plStack_df0 = (long *)0x0;
        if (plVar66 != (long *)0x0) {
          LOCK();
          plVar67 = plVar66 + 1;
          lVar64 = *plVar67;
          *plVar67 = *plVar67 + -1;
          UNLOCK();
          if (lVar64 == 0) {
            (**(code **)(*plVar66 + 0x10))(plVar66);
            func_0x0412c2d0(plVar66);
          }
          plVar66 = plStack_df0;
          plStack_de8 = (long *)0x0;
          if (plStack_df0 != (long *)0x0) {
            LOCK();
            plVar67 = plStack_df0 + 1;
            lVar64 = *plVar67;
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (lVar64 == 0) {
              (**(code **)(*plStack_df0 + 0x10))(plStack_df0);
              func_0x0412c2d0(plVar66);
            }
          }
        }
        if (cStack_e00 == '\x01') {
          func_0x0eee02f0(CONCAT17(auStack_e03[2],
                                   CONCAT25(auStack_e03._0_2_,
                                            CONCAT14(abStack_e08[4],
                                                     CONCAT22(abStack_e08._2_2_,
                                                              CONCAT11(abStack_e08[1],abStack_e08[0]
                                                                      ))))));
        }
        uVar73 = func_0x04136c20();
        plVar66 = (long *)((long)abStack_e08 + 1);
        if (1 < uVar73) {
          uVar60 = func_0x0eee2fc0();
          func_0x0eee3b40(uVar60,&uStack_1078,abStack_e08);
          abStack_e08[0] = 6;
          abStack_e08[1] = 0;
          abStack_e08[2] = 0;
          abStack_e08[3] = 0;
          func_0x0eee3e10(uVar60,uStack_1078,abStack_e08);
        }
        func_0x0d7a6ee0(uVar70 & 0xffffffff,uVar71 & 0xffffffff);
        if (DAT_0f7284c8 == '\x01') {
          uVar73 = func_0x04136c20();
          if (1 < uVar73) {
            uVar60 = func_0x0eee2fc0();
            func_0x0eee3b40(uVar60,&uStack_1078,abStack_e08);
            abStack_e08[0] = (byte)_DAT_0f728308;
            abStack_e08[1] = (byte)((uint)_DAT_0f728308 >> 8);
            abStack_e08._2_2_ = (undefined2)((uint)_DAT_0f728308 >> 0x10);
            func_0x0eee3e10(uVar60,uStack_1078,abStack_e08);
          }
          if (DAT_0f728318 == '\x01') {
            func_0x04136c20();
          }
        }
        func_0x0d7a71c0();
        lVar64 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (lVar64 == 0) goto LAB_048c9d87;
        do {
          func_0x08b621d0(lVar64,1000);
          lVar80 = param_1[0x1a];
          param_1[0x1a] = lVar64;
          if (lVar80 != 0) {
            func_0x08b623e0(lVar80);
            func_0x0412a280(lVar80,0x30);
          }
          abStack_e08[0] = 0x1c;
          abStack_e08[1] = (byte)_DAT_0121264e;
          abStack_e08._2_2_ = (undefined2)((uint6)_DAT_0121264e >> 8);
          abStack_e08[4] = (byte)((uint6)_DAT_0121264e >> 0x18);
          auStack_e03._0_2_ = (undefined2)((uint6)_DAT_0121264e >> 0x20);
          auStack_e03[2] = (undefined1)_DAT_01212654;
          cStack_e00 = (char)((ushort)_DAT_01212654 >> 8);
          uStack_dff = (undefined1)_UNK_01212656;
          uStack_dfe = (undefined1)((uint6)_UNK_01212656 >> 8);
          uStack_dfd = (undefined1)((uint6)_UNK_01212656 >> 0x10);
          cStack_dfc = (char)((uint6)_UNK_01212656 >> 0x18);
          uStack_dfb = (undefined1)((uint6)_UNK_01212656 >> 0x20);
          uStack_dfa = (undefined1)((uint6)_UNK_01212656 >> 0x28);
          uStack_df9 = 0;
          func_0x09fb6530(apuStack_e48,abStack_e08);
          uStack_e28 = CONCAT71(uStack_e28._1_7_,uStack_80f) ^ 1;
          *(undefined1 *)(plStack_e30 + 10) = uStack_810;
          abStack_e08[0] = 0x2a;
          abStack_e08[1] = (byte)_DAT_0145192c;
          abStack_e08._2_2_ = (undefined2)((ulong)_DAT_0145192c >> 8);
          abStack_e08[4] = (byte)((ulong)_DAT_0145192c >> 0x18);
          auStack_e03._0_2_ = (undefined2)((ulong)_DAT_0145192c >> 0x20);
          auStack_e03[2] = (undefined1)((ulong)_DAT_0145192c >> 0x30);
          cStack_e00 = (char)((ulong)_DAT_0145192c >> 0x38);
          uStack_dff = (undefined1)_UNK_01451934;
          uStack_dfe = (undefined1)((uint5)_UNK_01451934 >> 8);
          uStack_dfd = (undefined1)((uint5)_UNK_01451934 >> 0x10);
          cStack_dfc = (char)((uint5)_UNK_01451934 >> 0x18);
          uStack_dfb = (undefined1)((uint5)_UNK_01451934 >> 0x20);
          uStack_dfa = (undefined1)_DAT_01451939;
          uStack_df9 = (undefined1)((uint3)_DAT_01451939 >> 8);
          uStack_df8 = (undefined1)((uint3)_DAT_01451939 >> 0x10);
          uStack_df7 = (undefined1)_UNK_0145193c;
          uStack_df6 = (undefined2)((uint5)_UNK_0145193c >> 8);
          uStack_df4 = (undefined1)((uint5)_UNK_0145193c >> 0x18);
          uStack_df3 = (undefined1)((uint5)_UNK_0145193c >> 0x20);
          uStack_df2 = 0;
          func_0x09f46aa0(&puStack_1128,abStack_e08);
          lVar64 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
          if (lVar64 == 0) {
            func_0x0eec74c0(0x40,0);
          }
          abStack_e08[0] = 0x20;
          abStack_e08[1] = (byte)_DAT_012713f5;
          abStack_e08._2_2_ = (undefined2)((ulong)_DAT_012713f5 >> 8);
          abStack_e08[4] = (byte)((ulong)_DAT_012713f5 >> 0x18);
          auStack_e03._0_2_ = (undefined2)((ulong)_DAT_012713f5 >> 0x20);
          auStack_e03[2] = (undefined1)((ulong)_DAT_012713f5 >> 0x30);
          cStack_e00 = (char)((ulong)_DAT_012713f5 >> 0x38);
          uStack_dff = (undefined1)_UNK_012713fd;
          uStack_dfe = (undefined1)((ulong)_UNK_012713fd >> 8);
          uStack_dfd = (undefined1)((ulong)_UNK_012713fd >> 0x10);
          cStack_dfc = (char)((ulong)_UNK_012713fd >> 0x18);
          uStack_dfb = (undefined1)((ulong)_UNK_012713fd >> 0x20);
          uStack_dfa = (undefined1)((ulong)_UNK_012713fd >> 0x28);
          uStack_df9 = (undefined1)((ulong)_UNK_012713fd >> 0x30);
          uStack_df8 = (undefined1)((ulong)_UNK_012713fd >> 0x38);
          uStack_df7 = 0;
          func_0x09f4c970(lVar64,abStack_e08);
          lStack_998 = lVar64;
          lVar64 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
          if (lVar64 == 0) {
            func_0x0eec74c0(0x48,0);
          }
          abStack_e08[0] = 0x1e;
          abStack_e08[1] = 99;
          abStack_e08[2] = 100;
          abStack_e08[3] = 0x6e;
          abStack_e08[4] = 0x5f;
          auStack_e03._0_2_ = 0x6f63;
          auStack_e03[2] = 0x6e;
          cStack_e00 = 'f';
          uStack_dff = 0x69;
          uStack_dfe = 0x67;
          uStack_dfd = 0x2e;
          cStack_dfc = 'j';
          uStack_dfb = 0x73;
          uStack_dfa = 0x6f;
          uStack_df9 = 0x6e;
          uStack_df8 = 0;
          func_0x09f454a0(lVar64,abStack_e08);
          plVar67 = (long *)param_1[0x22];
          param_1[0x22] = lVar64;
          if (plVar67 != (long *)0x0) {
            (**(code **)(*plVar67 + 8))();
          }
          puStack_1278 = (undefined *)((ulong)puStack_1278 & 0xffffffffffffff00);
          cStack_1248 = '\0';
          if (uStack_800._4_1_ == '\x01') {
            bStack_1168 = 0x2c;
            uStack_1167 = (undefined7)_DAT_01451942;
            uStack_1160 = (undefined1)((ulong)_DAT_01451942 >> 0x38);
            uStack_115f = _UNK_0145194a;
            uStack_1159 = (undefined1)_DAT_01451950;
            uStack_1158 = (undefined1)((ushort)_DAT_01451950 >> 8);
            uStack_1157 = _UNK_01451952;
            uStack_1151 = 0;
            func_0x09f49570(abStack_e08,&bStack_1168);
            uStack_1218 = (undefined1 (*) [16])0xbb49a8b0d9bb3dbd;
            plStack_1210 = (long *)&UNK_0140f690;
            pbStack_1208 = (undefined *)0x1;
            pcStack_1200 = (code *)CONCAT44(pcStack_1200._4_4_,0x296);
            if ((byte)puStack_dc8 == 0) {
              uStack_ee8._0_4_ = 0;
              uStack_ee8._4_4_ = 0;
              uStack_ee0 = 0;
              uStack_edf = 0;
              uStack_ed8 = 0;
              uStack_ed7 = 0;
              uStack_ed6 = 0;
              func_0x0eedeb80(2,0x2d,abStack_e08,&uStack_ee8,&uStack_1218);
              if (((uint)uStack_ee8 & 1) != 0) {
                func_0x0412a280(CONCAT62(uStack_ed6,CONCAT11(uStack_ed7,uStack_ed8)),
                                CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8) & 0xfffffffffffffffe);
              }
            }
            uVar86 = uStack_dff;
            cVar55 = cStack_e00;
            uVar51 = auStack_e03._0_2_;
            bVar56 = abStack_e08[4];
            if (((byte)puStack_dc8 & 1) == 0) {
              func_0x0eede540(&uStack_1218,abStack_e08);
              pbVar85 = pbStack_1208;
              if (((ulong)uStack_1218 & 1) == 0) {
                pbVar85 = (undefined *)((long)&uStack_1218 + 1);
              }
              func_0x0eede920(0,1,0,6,8,&UNK_013c1f41,0x29c,&UNK_0119c2b2,pbVar85);
              if (((ulong)uStack_1218 & 1) != 0) {
                func_0x0412a280(pbStack_1208,(ulong)uStack_1218 & 0xfffffffffffffffe);
              }
              uStack_1078 = uStack_1078 & 0xffffff00;
              auVar46[0xf] = 0;
              auVar46._0_15_ = stack0xffffffffffffefb9;
              _auStack_1048 = auVar46 << 8;
              if (cStack_1248 == '\0') goto LAB_048c8741;
LAB_048c8574:
              plVar67 = plStack_1250;
              if (cStack_1248 == '\0') {
                puStack_1278 = (undefined *)
                               CONCAT26(uStack_1072,
                                        CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078)));
                uStack_1270 = CONCAT62(uStack_106e,CONCAT11(uStack_106f,cStack_1070));
                uStack_1078 = 0;
                uStack_1074 = 0;
                uStack_1073 = 0;
                uStack_1072 = 0;
                cStack_1070 = '\0';
                uStack_106f = 0;
                uStack_106e = 0;
                plStack_1268 = (long *)CONCAT71(uStack_1067,uStack_1068);
                plStack_1260 = (long *)CONCAT71(uStack_105f,uStack_1060);
                uStack_1258 = auStack_1058._0_4_;
                if (plStack_1260 != (long *)0x0) {
                  uVar70 = plStack_1268[1];
                  if ((uStack_1270 & uStack_1270 - 1) == 0) {
                    uVar70 = uVar70 & uStack_1270 - 1;
                  }
                  else if (uStack_1270 <= uVar70) {
                    if ((uVar70 | uStack_1270) >> 0x20 == 0) {
                      uVar70 = (uVar70 & 0xffffffff) % (uStack_1270 & 0xffffffff);
                    }
                    else {
                      uVar70 = uVar70 % uStack_1270;
                    }
                  }
                  *(long ***)(puStack_1278 + uVar70 * 8) = &plStack_1268;
                  uStack_1068 = 0;
                  uStack_1067 = 0;
                  uStack_1060 = 0;
                  uStack_105f = 0;
                }
                plStack_1250 = (long *)auStack_1058._8_8_;
                auStack_1058._8_8_ = 0;
                cStack_1248 = '\x01';
              }
              else {
                plStack_1250 = (long *)0x0;
                puVar62 = puStack_1278;
                plVar83 = plStack_1268;
                if (plVar67 != (long *)0x0) {
                  (**(code **)(*plVar67 + 8))();
                  puVar62 = puStack_1278;
                  plVar83 = plStack_1268;
                }
                while (plVar83 != (long *)0x0) {
                  plVar67 = (long *)*plVar83;
                  lVar64 = plVar83[3];
                  puStack_1278 = puVar62;
                  if (lVar64 != 0) {
                    lVar80 = plVar83[4];
                    lVar87 = lVar64;
                    if (lVar64 != lVar80) {
                      do {
                        plVar88 = *(long **)(lVar80 + -8);
                        *(undefined8 *)(lVar80 + -8) = 0;
                        if (plVar88 != (long *)0x0) {
                          (**(code **)(*plVar88 + 8))();
                        }
                        lVar80 = lVar80 + -8;
                      } while (lVar80 != lVar64);
                      lVar87 = plVar83[3];
                    }
                    plVar83[4] = lVar64;
                    func_0x0412a280(lVar87,plVar83[5] - lVar87);
                  }
                  func_0x0412a280(plVar83,0x30);
                  puVar62 = puStack_1278;
                  plVar83 = plVar67;
                }
                puStack_1278 = (undefined *)0x0;
                if (puVar62 != (undefined *)0x0) {
                  func_0x0412a280(puVar62,uStack_1270 << 3);
                }
                cStack_1248 = '\0';
              }
            }
            else {
              uStack_1078 = CONCAT22(abStack_e08._2_2_,CONCAT11(abStack_e08[1],abStack_e08[0]));
              lVar64 = CONCAT17(auStack_e03[2],
                                CONCAT25(auStack_e03._0_2_,CONCAT14(abStack_e08[4],uStack_1078)));
              uVar42 = CONCAT16(uStack_dfa,
                                CONCAT15(uStack_dfb,
                                         CONCAT14(cStack_dfc,
                                                  CONCAT13(uStack_dfd,
                                                           CONCAT12(uStack_dfe,
                                                                    CONCAT11(uStack_dff,cStack_e00))
                                                          ))));
              uVar70 = CONCAT17(uStack_df9,uVar42);
              abStack_e08[0] = 0;
              abStack_e08[1] = 0;
              abStack_e08[2] = 0;
              abStack_e08[3] = 0;
              abStack_e08[4] = 0;
              auStack_e03._0_2_ = 0;
              auStack_e03[2] = 0;
              cStack_e00 = '\0';
              uStack_dff = 0;
              uStack_dfe = 0;
              uStack_dfd = 0;
              cStack_dfc = '\0';
              uStack_dfb = 0;
              uStack_dfa = 0;
              uStack_df9 = 0;
              uStack_1074 = bVar56;
              uStack_1073 = (undefined1)uVar51;
              uStack_1072 = (undefined2)((ulong)lVar64 >> 0x30);
              cStack_1070 = cVar55;
              uStack_106f = uVar86;
              uStack_106e = (uint6)(uVar70 >> 0x10);
              lVar80 = CONCAT17(uStack_df1,
                                CONCAT16(uStack_df2,
                                         CONCAT15(uStack_df3,
                                                  CONCAT14(uStack_df4,
                                                           CONCAT22(uStack_df6,
                                                                    CONCAT11(uStack_df7,uStack_df8))
                                                          ))));
              uStack_1068 = uStack_df8;
              uStack_1067 = (uint7)((ulong)lVar80 >> 8);
              uStack_1060 = SUB81(plStack_df0,0);
              uStack_105f = (undefined7)((ulong)plStack_df0 >> 8);
              auStack_1058._0_4_ = plStack_de8._0_4_;
              if (plStack_df0 != (long *)0x0) {
                uVar71 = *(ulong *)(lVar80 + 8);
                if ((uVar70 & uVar70 - 1) == 0) {
                  uVar71 = uVar71 & uVar70 - 1;
                }
                else if (uVar70 <= uVar71) {
                  if ((uVar71 | uVar70) >> 0x20 == 0) {
                    uVar71 = (uVar71 & 0xffffffff) % ((ulong)uVar42 & 0xffffffff);
                  }
                  else {
                    uVar71 = uVar71 % uVar70;
                  }
                }
                *(undefined1 **)(lVar64 + uVar71 * 8) = &uStack_1068;
                *pauVar77 = ZEXT416(0);
              }
              puVar62 = puStack_de0;
              puStack_de0 = (undefined1 *)0x0;
              auStack_1058._8_8_ = puVar62;
              auStack_1048[0] = 1;
              if (cStack_1248 != '\x01') goto LAB_048c8574;
LAB_048c8741:
              if (cStack_1248 != '\0') {
                plVar67 = plStack_1268;
                if (plStack_1260 != (long *)0x0) {
                  while (plVar67 != (long *)0x0) {
                    plVar83 = (long *)*plVar67;
                    lVar64 = plVar67[3];
                    if (lVar64 != 0) {
                      lVar80 = plVar67[4];
                      lVar87 = lVar64;
                      if (lVar64 != lVar80) {
                        do {
                          plVar88 = *(long **)(lVar80 + -8);
                          *(undefined8 *)(lVar80 + -8) = 0;
                          if (plVar88 != (long *)0x0) {
                            (**(code **)(*plVar88 + 8))();
                          }
                          lVar80 = lVar80 + -8;
                        } while (lVar80 != lVar64);
                        lVar87 = plVar67[3];
                      }
                      plVar67[4] = lVar64;
                      func_0x0412a280(lVar87,plVar67[5] - lVar87);
                    }
                    func_0x0412a280(plVar67,0x30);
                    plVar67 = plVar83;
                  }
                  plStack_1268 = (long *)0x0;
                  if (uStack_1270 != 0) {
                    func_0x0eee2dd0(puStack_1278,0,uStack_1270 << 3);
                  }
                  plStack_1260 = (long *)0x0;
                }
                puVar49 = puStack_1278;
                puVar62 = (undefined *)
                          CONCAT26(uStack_1072,
                                   CONCAT15(uStack_1073,CONCAT14(uStack_1074,uStack_1078)));
                uStack_1078 = 0;
                uStack_1074 = 0;
                uStack_1073 = 0;
                uStack_1072 = 0;
                bVar89 = puStack_1278 != (undefined *)0x0;
                puStack_1278 = puVar62;
                if (bVar89) {
                  func_0x0412a280(puVar49,uStack_1270 << 3);
                }
                plVar67 = plStack_1250;
                uStack_1270 = CONCAT62(uStack_106e,CONCAT11(uStack_106f,cStack_1070));
                plStack_1268 = (long *)CONCAT71(uStack_1067,uStack_1068);
                cStack_1070 = '\0';
                uStack_106f = 0;
                uStack_106e = 0;
                plStack_1260 = (long *)CONCAT71(uStack_105f,uStack_1060);
                uStack_1258 = auStack_1058._0_4_;
                if (plStack_1260 != (long *)0x0) {
                  uVar70 = plStack_1268[1];
                  if ((uStack_1270 & uStack_1270 - 1) == 0) {
                    uVar70 = uVar70 & uStack_1270 - 1;
                  }
                  else if (uStack_1270 <= uVar70) {
                    if ((uVar70 | uStack_1270) >> 0x20 == 0) {
                      uVar70 = (uVar70 & 0xffffffff) % (uStack_1270 & 0xffffffff);
                    }
                    else {
                      uVar70 = uVar70 % uStack_1270;
                    }
                  }
                  *(long ***)(puStack_1278 + uVar70 * 8) = &plStack_1268;
                  uStack_1068 = 0;
                  uStack_1067 = 0;
                  uStack_1060 = 0;
                  uStack_105f = 0;
                }
                plStack_1250 = (long *)auStack_1058._8_8_;
                auStack_1058._8_8_ = 0;
                if (plVar67 != (long *)0x0) {
                  (**(code **)(*plVar67 + 8))();
                }
              }
            }
            func_0x048cab10(&uStack_1078);
            puVar62 = puStack_de0;
            if ((byte)puStack_dc8 == '\x01') {
              func_0x048f5fa0(abStack_e08);
            }
            else {
              puVar82 = puStack_dd8;
              if (puStack_de0 != (undefined1 *)0x0) {
                while (puVar62 != puVar82) {
                  func_0x048b3e80(puVar82 + -0x40);
                  puVar82 = puVar82 + -0x40;
                }
                puStack_dd8 = puVar62;
                func_0x0412a280(puStack_de0,(long)puStack_dd0 - (long)puStack_de0);
              }
              plVar67 = (long *)CONCAT17(uStack_df1,
                                         CONCAT16(uStack_df2,
                                                  CONCAT15(uStack_df3,
                                                           CONCAT14(uStack_df4,
                                                                    CONCAT22(uStack_df6,
                                                                             CONCAT11(uStack_df7,
                                                                                      uStack_df8))))
                                                 ));
              if (plVar67 != (long *)0x0) {
                plVar83 = plVar67;
                plVar88 = plStack_df0;
                if (plVar67 != plStack_df0) {
                  do {
                    if (((char)plVar88[-1] == '\x01') && ((*(byte *)(plVar88 + -6) & 1) != 0)) {
                      func_0x0412a280(plVar88[-4],plVar88[-6] & 0xfffffffffffffffe);
                    }
                    plVar88 = plVar88 + -10;
                  } while (plVar88 != plVar67);
                  plVar83 = (long *)CONCAT17(uStack_df1,
                                             CONCAT16(uStack_df2,
                                                      CONCAT15(uStack_df3,
                                                               CONCAT14(uStack_df4,
                                                                        CONCAT22(uStack_df6,
                                                                                 CONCAT11(uStack_df7
                                                                                          ,
                                                  uStack_df8))))));
                }
                plStack_df0 = plVar67;
                func_0x0412a280(plVar83,(long)plStack_de8 - (long)plVar83);
              }
            }
            cVar55 = cStack_1248;
            if ((bStack_1168 & 1) != 0) {
              func_0x0412a280(CONCAT17(uStack_1151,CONCAT61(uStack_1157,uStack_1158)),
                              CONCAT71(uStack_1167,bStack_1168) & 0xfffffffffffffffe);
            }
            uVar70 = 2;
            if (cVar55 == '\0') goto LAB_048c9bd8;
          }
          uVar75 = auStack_858._8_4_;
          switch(auStack_858._8_4_) {
          case 0:
            uVar60 = 0x6c61766976727553;
            goto code_r0x048c8aae;
          case 1:
            uVar60 = 0x6576697461657243;
code_r0x048c8aae:
            abStack_e08[0] = 0x10;
            abStack_e08[1] = (byte)uVar60;
            abStack_e08._2_2_ = (undefined2)((ulong)uVar60 >> 8);
            abStack_e08[4] = (byte)((ulong)uVar60 >> 0x18);
            auStack_e03._0_2_ = (undefined2)((ulong)uVar60 >> 0x20);
            auStack_e03[2] = (undefined1)((ulong)uVar60 >> 0x30);
            cStack_e00 = (char)((ulong)uVar60 >> 0x38);
            uStack_dff = 0;
            break;
          case 2:
            *(undefined1 *)(plVar66 + 1) = UNK_01417692;
            lVar64 = _UNK_0141768a;
            goto code_r0x048c8b00;
          default:
            abStack_e08[0] = 0;
            abStack_e08[1] = 0;
            break;
          case 5:
            abStack_e08[0] = 0xe;
            *(uint *)((long)plVar66 + 3) = CONCAT31(_UNK_014af801,UNK_014af800);
            *(undefined4 *)plVar66 = _UNK_014af7fd;
            cStack_e00 = '\0';
            break;
          case 6:
            *(undefined1 *)(plVar66 + 1) = UNK_01396211;
            lVar64 = _UNK_01396209;
code_r0x048c8b00:
            abStack_e08[0] = 0x12;
            *plVar66 = lVar64;
            uStack_dfe = 0;
          }
          func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x2ad,&UNK_0133fdf9,uVar75,plVar66);
          if ((abStack_e08[0] & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_df1,
                                     CONCAT16(uStack_df2,
                                              CONCAT15(uStack_df3,
                                                       CONCAT14(uStack_df4,
                                                                CONCAT22(uStack_df6,
                                                                         CONCAT11(uStack_df7,
                                                                                  uStack_df8)))))),
                            CONCAT17(auStack_e03[2],
                                     CONCAT25(auStack_e03._0_2_,
                                              CONCAT14(abStack_e08[4],
                                                       CONCAT22(abStack_e08._2_2_,
                                                                CONCAT11(abStack_e08[1],
                                                                         abStack_e08[0]))))) &
                            0xfffffffffffffffe);
          }
          uVar73 = auStack_870._4_4_;
          if ((uint)auStack_870._4_4_ < 4) {
            puVar68 = (undefined8 *)(abStack_e08 + 5);
            switch(auStack_870._4_4_) {
            case 0:
              puVar68 = (undefined8 *)((long)abStack_e08 + 9);
              abStack_e08[0] = 0x10;
              abStack_e08[1] = 0x50;
              abStack_e08[2] = 0x45;
              abStack_e08[3] = 0x41;
              abStack_e08[4] = 0x43;
              auStack_e03._0_2_ = 0x4645;
              auStack_e03[2] = 0x55;
              cStack_e00 = 'L';
              break;
            case 1:
              abStack_e08[0] = 8;
              abStack_e08[1] = 0x45;
              abStack_e08[2] = 0x41;
              abStack_e08[3] = 0x53;
              abStack_e08[4] = 0x59;
              break;
            case 2:
              puVar68 = (undefined8 *)(abStack_e08 + 7);
              abStack_e08[0] = 0xc;
              *(undefined2 *)((long)plVar66 + 4) = 0x4c41;
              *(undefined4 *)plVar66 = 0x4d524f4e;
              break;
            case 3:
              abStack_e08[0] = 8;
              abStack_e08[1] = 0x48;
              abStack_e08[2] = 0x41;
              abStack_e08[3] = 0x52;
              abStack_e08[4] = 0x44;
            }
          }
          else {
            puVar68 = (undefined8 *)(abStack_e08 + 8);
            abStack_e08[0] = 0xe;
            *(undefined4 *)((long)plVar66 + 3) = 0x4e574f4e;
            *(undefined4 *)plVar66 = 0x4e4b4e55;
          }
          *(undefined1 *)puVar68 = 0;
          func_0x0eede920(0,1,0,0xc,2,&UNK_01198f52,0x2af,&UNK_011d35a5,uVar73,plVar66);
          if ((abStack_e08[0] & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_df1,
                                     CONCAT16(uStack_df2,
                                              CONCAT15(uStack_df3,
                                                       CONCAT14(uStack_df4,
                                                                CONCAT22(uStack_df6,
                                                                         CONCAT11(uStack_df7,
                                                                                  uStack_df8)))))),
                            CONCAT17(auStack_e03[2],
                                     CONCAT25(auStack_e03._0_2_,
                                              CONCAT14(abStack_e08[4],
                                                       CONCAT22(abStack_e08._2_2_,
                                                                CONCAT11(abStack_e08[1],
                                                                         abStack_e08[0]))))) &
                            0xfffffffffffffffe);
          }
          uVar54 = uStack_478;
          uVar52 = uStack_801;
          uVar50 = uStack_802;
          cVar55 = cStack_804;
          uVar86 = uStack_807;
          lStack_958 = CONCAT71(lStack_958._1_7_,uStack_803);
          uVar53 = (undefined1)uStack_800;
          uStack_10e4 = auStack_8a0._8_4_;
          auVar130 = func_0x0c945240(auStack_8c8);
          uVar60 = auVar130._0_8_;
          if ((auVar130._8_8_ & 1) == 0) {
            abStack_e08[0] = 0;
            abStack_e08[1] = 0;
            abStack_e08[2] = 0;
            abStack_e08[3] = 0;
            abStack_e08[4] = 0;
            auStack_e03._0_2_ = 0;
            auStack_e03[2] = 0;
            cStack_e00 = -1;
            uStack_dff = 0xff;
            uStack_dfe = 0xff;
            uStack_dfd = 0xff;
            cStack_dfc = -1;
            uStack_dfb = 0xff;
            uStack_dfa = 0xff;
            uStack_df9 = 0xff;
            uStack_1078 = 0xf53bdc8;
            uStack_1074 = 0;
            uStack_1073 = 0;
            uStack_1072 = 0;
            func_0x0eecd080();
            cStack_1070 = '0';
            uStack_106f = 0xc0;
            uStack_106e = 0xf53;
            uVar60 = func_0x0c9b7b80(abStack_e08,&uStack_1078,abStack_e08);
          }
          func_0x0d1fedb0(&uStack_ee8);
          if (cVar55 == '\0') {
            pcVar74 = (code *)0x0;
            if (0x19 < (int)((ulong)(CONCAT44(uStack_ec4,uStack_ec8) - (long)pcStack_ed0) >> 4) *
                       -0x11111111) {
              pcVar74 = pcStack_ed0 + 6000;
            }
            func_0x0d201b00(&plStack_9a8,&uStack_ee8,pcVar74,(ulong)bStack_805 | 0x100000000,1,1,0,0
                            ,0);
            plVar66 = plStack_9a8;
            plStack_9a8 = (long *)0x0;
          }
          else {
            pcVar74 = pcStack_ed0 + 6000;
            if ((int)((ulong)(CONCAT44(uStack_ec4,uStack_ec8) - (long)pcStack_ed0) >> 4) *
                -0x11111111 < 0x1a) {
              pcVar74 = (code *)0x0;
            }
            func_0x0d201b00(&plStack_9a0,&uStack_ee8,pcVar74,0x100000000,1,1,0,0,0);
            plVar66 = plStack_9a0;
            plStack_9a0 = (long *)0x0;
            uVar73 = 3;
            uVar86 = 0;
            uVar75 = 0;
          }
          if (plVar66 != (long *)0x0) {
            (**(code **)(*plVar66 + 8))();
          }
          cVar57 = (**(code **)(*param_1 + 0x20))();
          if (cVar57 != '\0') {
            pcVar74 = (code *)0x0;
            if (0x2a < (int)((ulong)(CONCAT44(uStack_ec4,uStack_ec8) - (long)pcStack_ed0) >> 4) *
                       -0x11111111) {
              pcVar74 = pcStack_ed0 + 0x2760;
            }
            func_0x0d201b00(&plStack_9b0,&uStack_ee8,pcVar74,(ulong)bStack_806 | 0x100000000,1,1,0,0
                            ,0);
            plVar66 = plStack_9b0;
            plStack_9b0 = (long *)0x0;
            if (plVar66 != (long *)0x0) {
              (**(code **)(*plVar66 + 8))();
            }
          }
          func_0x0c942f50(abStack_e08);
          abStack_e08[0] = (byte)uVar60;
          abStack_e08[1] = (byte)((ulong)uVar60 >> 8);
          abStack_e08._2_2_ = (undefined2)((ulong)uVar60 >> 0x10);
          abStack_e08[4] = (byte)((ulong)uVar60 >> 0x20);
          auStack_e03._0_2_ = (undefined2)((ulong)uVar60 >> 0x28);
          auStack_e03[2] = (undefined1)((ulong)uVar60 >> 0x38);
          cStack_e00 = (char)uVar75;
          uStack_dff = (undefined1)((uint)uVar75 >> 8);
          uStack_dfe = (undefined1)((uint)uVar75 >> 0x10);
          uStack_dfd = (undefined1)((uint)uVar75 >> 0x18);
          uStack_df8 = (undefined1)uVar73;
          uStack_df7 = (undefined1)(uVar73 >> 8);
          uStack_df6 = (undefined2)(uVar73 >> 0x10);
          plStack_df0 = (long *)CONCAT44(plStack_df0._4_4_,uStack_10e4);
          uStack_d7c = 0;
          cStack_dfc = cVar55;
          uStack_d71 = (undefined1)lStack_958;
          uStack_d73 = uVar50;
          uStack_d6f = uVar52;
          uStack_d6a = uVar53;
          uStack_d70 = uVar86;
          func_0x0d2009a0(auStack_d0,&uStack_ee8);
          lVar80 = lStack_ce0;
          lVar64 = lStack_1220;
          if (lStack_ce0 != 0) {
            if (lStack_ce0 != lStack_cd8) {
              lVar87 = lStack_cd8 + -0x60;
              do {
                plVar66 = *(long **)(lVar87 + 0x40);
                if ((long *)(lVar87 + 0x20) == plVar66) {
                  lVar72 = 0x20;
LAB_048c9065:
                  (**(code **)(*plVar66 + lVar72))();
                }
                else {
                  lVar72 = 0x28;
                  if (plVar66 != (long *)0x0) goto LAB_048c9065;
                }
                func_0x06cf3820(lVar87,*(undefined8 *)(lVar87 + 8));
                plVar66 = *(long **)(lVar87 + -0x10);
                if ((long *)(lVar87 + -0x30) == plVar66) {
                  lVar72 = 0x20;
LAB_048c90c5:
                  (**(code **)(*plVar66 + lVar72))();
                  plVar66 = *(long **)(lVar87 + -0x40);
                  if ((long *)(lVar87 + -0x60) != plVar66) goto LAB_048c909b;
LAB_048c90d8:
                  lVar72 = 0x20;
LAB_048c90dd:
                  (**(code **)(*plVar66 + lVar72))();
                  bVar56 = *(byte *)(lVar87 + -0x80);
                }
                else {
                  lVar72 = 0x28;
                  if (plVar66 != (long *)0x0) goto LAB_048c90c5;
                  plVar66 = *(long **)(lVar87 + -0x40);
                  if ((long *)(lVar87 + -0x60) == plVar66) goto LAB_048c90d8;
LAB_048c909b:
                  lVar72 = 0x28;
                  if (plVar66 != (long *)0x0) goto LAB_048c90dd;
                  bVar56 = *(byte *)(lVar87 + -0x80);
                }
                if ((bVar56 & 1) != 0) {
                  func_0x0412a280(*(undefined8 *)(lVar87 + -0x70),
                                  *(ulong *)(lVar87 + -0x80) & 0xfffffffffffffffe);
                }
                lVar72 = lVar87 + -0x90;
                lVar87 = lVar87 + -0xf0;
              } while (lVar72 != lVar80);
            }
            lStack_cd8 = lVar80;
            func_0x0412a280(lStack_ce0,lStack_cd0 - lStack_ce0);
          }
          lStack_ce0 = lStack_b8;
          lStack_cd8 = lStack_b0;
          lStack_cd0 = lStack_a8;
          lStack_b8 = 0;
          lStack_b0 = 0;
          lStack_a8 = 0;
          func_0x0d225f00(&plStack_cc8,lStack_cc0);
          plStack_cc8 = plStack_a0;
          lStack_cc0 = lStack_98;
          lStack_cb8 = lStack_90;
          plVar66 = &lStack_cc0;
          if (lStack_90 != 0) {
            plStack_a0 = &lStack_98;
            *(long **)(lStack_98 + 0x10) = &lStack_cc0;
            lStack_98 = 0;
            lStack_90 = 0;
            plVar66 = plStack_cc8;
          }
          plStack_cc8 = plVar66;
          uStack_d4f = (undefined1)uStack_7a8;
          func_0x0495d5f0(uStack_d48);
          uStack_d64 = uStack_830._4_4_;
          uStack_1068 = 0;
          uStack_1067 = 0;
          uStack_1060 = 0;
          uStack_1078 = 0;
          uStack_1074 = 0;
          uStack_1073 = 0;
          uStack_1072 = 0;
          cStack_1070 = '\0';
          uStack_106f = 0;
          uStack_106e = 0;
          func_0x0c9445e0(abStack_e08,&uStack_1078);
          uStack_df4 = uStack_808;
          uStack_d69 = 1;
          uStack_b58 = uVar54;
          uStack_d5c = uStack_476;
          uStack_d9c = uStack_194;
          if ((uStack_1067 & 0x800000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(CONCAT71(uStack_1067,uStack_1068) & 0xff00ffffffffffff) - 8);
          }
          uStack_1068 = 0;
          uStack_1067 = 0;
          if ((uStack_106e & 0x8000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,
                       (CONCAT62(uStack_106e,CONCAT11(uStack_106f,cStack_1070)) & 0xff00ffffffffffff
                       ) - 8);
          }
          func_0x0d200c80(auStack_d0);
          uStack_1188 = 0;
          uStack_1180 = 0;
          uStack_1198 = 0;
          uStack_1190 = 0;
          uStack_11a8 = 0;
          uStack_11a0 = 0;
          uStack_11b8 = 0;
          uStack_11b0 = 0;
          uStack_11c8 = 0;
          uStack_11c0 = 0;
          uStack_11d8 = 0;
          uStack_11d0 = 0;
          uStack_11e8 = 0;
          puStack_11e0 = (undefined *)0x0;
          auStack_11f8 = ZEXT816(0);
          pbStack_1208 = (undefined *)0x0;
          pcStack_1200 = (code *)0x0;
          uStack_1218 = (undefined1 (*) [16])0x0;
          plStack_1210 = (long *)0x0;
          uStack_1178 = 0;
          uStack_1170 = 1;
          func_0x0ee16a50(&uStack_1078,&uStack_1218);
          func_0x048cacb0(&uStack_1218);
          puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar68 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          *puVar68 = 0;
          puVar68[1] = 0;
          puVar68[2] = 0;
          puVar68[3] = 0;
          *puVar68 = &UNK_0f534768;
          puVar69 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar69 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          puVar69[1] = 0;
          puVar69[2] = 0;
          *puVar69 = &UNK_0ef44a60;
          *(undefined1 *)(puVar69 + 3) = 1;
          puVar68[1] = puVar69 + 3;
          puVar68[2] = puVar69;
          *puVar68 = &UNK_0f088f88;
          *(undefined2 *)(puVar68 + 3) = 0;
          plVar66 = (long *)param_1[0x21];
          param_1[0x21] = (long)puVar68;
          if (plVar66 != (long *)0x0) {
            (**(code **)(*plVar66 + 8))();
            puVar68 = (undefined8 *)param_1[0x21];
          }
          func_0x06d03520(puVar68,lVar64);
          func_0x0d7a5540(&bStack_1168,&lStack_908);
          uStack_1218 = (undefined1 (*) [16])CONCAT71(uStack_1167,bStack_1168);
          plStack_1210 = (long *)CONCAT17(uStack_1159,CONCAT61(uStack_115f,uStack_1160));
          func_0x0d7a5690(&bStack_1168,&lStack_908,&uStack_1218);
          plVar66 = plStack_1210;
          lVar64 = CONCAT71(uStack_1167,bStack_1168);
          lVar80 = CONCAT17(uStack_1159,CONCAT61(uStack_115f,uStack_1160));
          if (plStack_1210 != (long *)0x0) {
            LOCK();
            plVar67 = plStack_1210 + 1;
            lVar87 = *plVar67;
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (lVar87 == 0) {
              lStack_958 = lVar64;
              lStack_950 = lVar80;
              (**(code **)(*plStack_1210 + 0x10))(plStack_1210);
              func_0x0412c2d0(plVar66);
              lVar64 = lStack_958;
              lVar80 = lStack_950;
            }
          }
          plVar66 = (long *)param_1[0xf];
          param_1[0xe] = lVar64;
          param_1[0xf] = lVar80;
          if (plVar66 != (long *)0x0) {
            LOCK();
            plVar67 = plVar66 + 1;
            lVar64 = *plVar67;
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (lVar64 == 0) {
              (**(code **)(*plVar66 + 0x10))(plVar66);
              func_0x0412c2d0(plVar66);
            }
          }
          plVar67 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
          if (plVar67 == (long *)0x0) {
            func_0x0eec74c0(0x50,0);
          }
          plVar67[1] = 0;
          plVar67[2] = 0;
          *plVar67 = (long)&UNK_0ef45c48;
          pauVar77 = (undefined1 (*) [16])param_1[0xe];
          plVar83 = (long *)param_1[0xf];
          if (plVar83 != (long *)0x0) {
            LOCK();
            plVar83[1] = plVar83[1] + 1;
            UNLOCK();
          }
          bStack_1168 = 0;
          uStack_1167 = 0;
          uStack_1160 = 0;
          uStack_115f = 0;
          uStack_1159 = 0;
          plVar67[3] = (long)&UNK_0f534768;
          uStack_1218 = pauVar77;
          plStack_1210 = plVar83;
          puVar68 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar68 == (undefined8 *)0x0) {
            func_0x0eec74c0(0x20,0);
          }
          plVar66 = plVar67 + 3;
          puVar68[1] = 0;
          puVar68[2] = 0;
          *puVar68 = &UNK_0ef44a60;
          *(undefined1 *)(puVar68 + 3) = 1;
          plVar67[4] = (long)(puVar68 + 3);
          plVar67[5] = (long)puVar68;
          plVar67[6] = 0;
          plVar67[7] = 0;
          plVar67[3] = (long)&UNK_0f484308;
          plVar67[8] = (long)pauVar77;
          plVar67[9] = (long)plVar83;
          if (plVar83 != (long *)0x0) {
            LOCK();
            plVar83[1] = plVar83[1] + 1;
            UNLOCK();
            LOCK();
            plVar88 = plVar83 + 1;
            lVar64 = *plVar88;
            *plVar88 = *plVar88 + -1;
            UNLOCK();
            if (lVar64 == 0) {
              (**(code **)(*plVar83 + 0x10))(plVar83);
              func_0x0412c2d0(plVar83);
            }
          }
          *plVar66 = (long)&UNK_0f146ca8;
          plVar83 = (long *)CONCAT17(uStack_1159,CONCAT61(uStack_115f,uStack_1160));
          if (plVar83 == (long *)0x0) {
LAB_048c95e7:
            lVar80 = plVar67[7];
            if (lVar80 != 0) goto LAB_048c95f5;
LAB_048c9637:
            LOCK();
            plVar67[1] = plVar67[1] + 1;
            UNLOCK();
            LOCK();
            plVar67[2] = plVar67[2] + 1;
            UNLOCK();
            plVar67[6] = (long)plVar66;
            plVar67[7] = (long)plVar67;
            lVar64 = lStack_1220;
LAB_048c9649:
            plVar83 = plVar67 + 1;
            LOCK();
            lVar80 = *plVar83;
            *plVar83 = *plVar83 + -1;
            UNLOCK();
            if (lVar80 == 0) {
              (**(code **)(*plVar67 + 0x10))(plVar67);
              func_0x0412c2d0(plVar67);
            }
          }
          else {
            LOCK();
            plVar88 = plVar83 + 1;
            lVar64 = *plVar88;
            *plVar88 = *plVar88 + -1;
            UNLOCK();
            if (lVar64 != 0) goto LAB_048c95e7;
            (**(code **)(*plVar83 + 0x10))(plVar83);
            func_0x0412c2d0(plVar83);
            lVar80 = plVar67[7];
            if (lVar80 == 0) goto LAB_048c9637;
LAB_048c95f5:
            lVar64 = lStack_1220;
            if (*(long *)(lVar80 + 8) == -1) {
              LOCK();
              plVar67[1] = plVar67[1] + 1;
              UNLOCK();
              LOCK();
              plVar67[2] = plVar67[2] + 1;
              UNLOCK();
              plVar67[6] = (long)plVar66;
              plVar67[7] = (long)plVar67;
              func_0x0412c2d0();
              goto LAB_048c9649;
            }
          }
          param_1[0xe] = (long)plVar66;
          plVar83 = (long *)param_1[0xf];
          param_1[0xf] = (long)plVar67;
          if (plVar83 != (long *)0x0) {
            LOCK();
            plVar67 = plVar83 + 1;
            lVar80 = *plVar67;
            *plVar67 = *plVar67 + -1;
            UNLOCK();
            if (lVar80 == 0) {
              (**(code **)(*plVar83 + 0x10))(plVar83);
              func_0x0412c2d0(plVar83);
            }
          }
          (**(code **)(*(long *)param_1[0xe] + 0x18))();
          func_0x0d79ebb0(&uStack_1218);
          func_0x04601fd8(uStack_788);
          plVar67 = plStack_1210;
          if (plStack_1210 != (long *)0x0) {
            LOCK();
            plVar83 = plStack_1210 + 1;
            lVar80 = *plVar83;
            *plVar83 = *plVar83 + -1;
            UNLOCK();
            if (lVar80 == 0) {
              (**(code **)(*plStack_1210 + 0x10))(plStack_1210);
              func_0x0412c2d0(plVar67);
            }
          }
          lVar80 = param_1[0xe];
          if (lVar80 != 0) goto code_r0x048c970c;
          func_0x04890760();
LAB_048c9d87:
          func_0x0eec74c0(0x30,0);
        } while( true );
      }
      goto LAB_048ca0f0;
    }
  }
  uVar70 = 2;
  func_0x048c3860(param_1);
  goto LAB_048c7708;
code_r0x048c970c:
  cVar55 = func_0x0412d4f0(0xf5523f0);
  if (cVar55 == '\0') {
LAB_048c9737:
    uStack_1218 = (undefined1 (*) [16])0xf5523f0;
    plStack_1210 = (long *)CONCAT71(plStack_1210._1_7_,1);
    func_0x0412d450(0xf5523f0);
    lVar64 = lStack_1220;
    if (_DAT_0f5524c0 != 0) {
      uVar70 = _DAT_0f5524c0;
      do {
        LOCK();
        bVar89 = uVar70 == _DAT_0f5524c0;
        uVar71 = uVar70 | 0x8000000000000000;
        if (!bVar89) {
          uVar70 = _DAT_0f5524c0;
          uVar71 = _DAT_0f5524c0;
        }
        _DAT_0f5524c0 = uVar71;
        UNLOCK();
        if (bVar89) {
          func_0x0eee0430(0xf552480,&uStack_1218);
          uVar70 = _DAT_0f5524c0;
        }
        lVar64 = lStack_1220;
      } while (uVar70 != 0);
    }
  }
  else if (_DAT_0f5524c0 != 0) {
    func_0x0412d520(0xf5523f0);
    goto LAB_048c9737;
  }
  plVar66 = _DAT_0f5524d8;
  _DAT_0f5524d0 = (char *)0x0;
  _DAT_0f5524d8 = (long *)0x0;
  if (plVar66 != (long *)0x0) {
    LOCK();
    plVar67 = plVar66 + 1;
    lVar87 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar87 == 0) {
      (**(code **)(*plVar66 + 0x10))(plVar66);
      func_0x0412c2d0(plVar66);
    }
  }
  _DAT_0f5524e0 = 0;
  _DAT_0f5524d0 = *(char **)(lVar80 + 8);
  plVar66 = *(long **)(lVar80 + 0x10);
  if (plVar66 != (long *)0x0) {
    LOCK();
    plVar66[1] = plVar66[1] + 1;
    UNLOCK();
  }
  plVar67 = _DAT_0f5524d8;
  if (_DAT_0f5524d8 != (long *)0x0) {
    LOCK();
    plVar83 = _DAT_0f5524d8 + 1;
    lVar87 = *plVar83;
    _DAT_0f5524d8 = plVar66;
    *plVar83 = *plVar83 + -1;
    UNLOCK();
    plVar66 = _DAT_0f5524d8;
    if (lVar87 == 0) {
      (**(code **)(*plVar67 + 0x10))(plVar67);
      func_0x0412c2d0(plVar67);
      plVar66 = _DAT_0f5524d8;
    }
  }
  _DAT_0f5524d8 = plVar66;
  if (((_DAT_0f5524d0 != (char *)0x0) && (_DAT_0f5524e0 = lVar80, *_DAT_0f5524d0 == '\0')) &&
     (cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0128a9dc),
     cVar55 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar80 = _DAT_0f5524e0;
  bStack_1168 = (byte)_DAT_0f5524e0;
  uStack_1167 = (undefined7)((ulong)_DAT_0f5524e0 >> 8);
  func_0x0412d520(0xf5523f0);
  if (param_1[0x10] != 0) {
    func_0x049177e0();
    param_1[0x10] = 0;
  }
  plVar66 = plStack_1250;
  uVar70 = uStack_1270;
  puVar62 = puStack_1278;
  param_1[0x10] = lVar80;
  puStack_940 = (undefined *)((ulong)puStack_940 & 0xffffffffffffff00);
  uStack_910 = 0;
  if (cStack_1248 == '\x01') {
    puStack_1278 = (undefined *)0x0;
    uStack_1270 = 0;
    puStack_940 = puVar62;
    uStack_938 = uVar70;
    plStack_930 = plStack_1268;
    lStack_928 = (long)plStack_1260;
    uStack_920 = uStack_1258;
    if (plStack_1260 != (long *)0x0) {
      uVar71 = plStack_1268[1];
      if ((uVar70 & uVar70 - 1) == 0) {
        uVar71 = uVar71 & uVar70 - 1;
      }
      else if (uVar70 <= uVar71) {
        if ((uVar71 | uVar70) >> 0x20 == 0) {
          uVar71 = (uVar71 & 0xffffffff) % (uVar70 & 0xffffffff);
        }
        else {
          uVar71 = uVar71 % uVar70;
        }
      }
      *(long ***)(puVar62 + uVar71 * 8) = &plStack_930;
      plStack_1268 = (long *)0x0;
      plStack_1260 = (long *)0x0;
    }
    plStack_1250 = (long *)0x0;
    plStack_918 = plVar66;
    uStack_910 = 1;
  }
  uVar73 = func_0x048cada0(param_1,&uStack_1078,auStack_8c8,abStack_e08,apuStack_e48,&puStack_1128,
                           &lStack_998,&puStack_940,lVar64,&uStack_10e0);
  uVar70 = (ulong)uVar73;
  func_0x048cab10(&puStack_940);
  plVar66 = (long *)param_1[0xe];
  if (plVar66 != (long *)0x0) {
    if (param_1[0x10] != 0) {
      func_0x049177e0(param_1[0x10]);
      param_1[0x10] = 0;
      plVar66 = (long *)param_1[0xe];
    }
    (**(code **)(*plVar66 + 0x20))();
    plVar66 = (long *)param_1[0xf];
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if (plVar66 != (long *)0x0) {
      LOCK();
      plVar67 = plVar66 + 1;
      lVar64 = *plVar67;
      *plVar67 = *plVar67 + -1;
      UNLOCK();
      if (lVar64 == 0) {
        (**(code **)(*plVar66 + 0x10))(plVar66);
        func_0x0412c2d0(plVar66);
      }
    }
  }
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  plVar66 = _DAT_0f5523a0;
  pbVar85 = _DAT_0f552398;
  uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8);
  if ((_DAT_0f552398 == (byte *)0x0) ||
     (uStack_ee8 = (undefined8 *)CONCAT44(uStack_ee8._4_4_,(uint)uStack_ee8), *_DAT_0f552398 != 1))
  {
LAB_048ca0fc:
    uVar60 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b9fb8);
    func_0x048dc270(auStack_8c8);
    func_0x048dc5a0(&uStack_10e0);
    uVar60 = func_0x0eee2d70(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    uVar60 = func_0x04882e20(uVar60);
    func_0x048c3ac0(auStack_8c8);
    if ((abStack_e08[0] & 1) != 0) {
      func_0x0412a280(CONCAT17(uStack_df1,
                               CONCAT16(uStack_df2,
                                        CONCAT15(uStack_df3,
                                                 CONCAT14(uStack_df4,
                                                          CONCAT22(uStack_df6,
                                                                   CONCAT11(uStack_df7,uStack_df8)))
                                                ))),
                      CONCAT17(auStack_e03[2],
                               CONCAT25(auStack_e03._0_2_,
                                        CONCAT14(abStack_e08[4],
                                                 CONCAT22(abStack_e08._2_2_,
                                                          CONCAT11(abStack_e08[1],abStack_e08[0]))))
                              ) & 0xfffffffffffffffe);
    }
    func_0x048dc5a0(&uStack_10e0);
    uVar60 = func_0x0eee2d70(uVar60);
    func_0x048dc5a0(&uStack_10e0);
    func_0x0eee2d70(uVar60);
    pcVar74 = (code *)swi(3);
    uVar70 = (*pcVar74)();
    return uVar70;
  }
  bVar56 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar56 = *pbVar85;
  }
  plVar67 = _DAT_0f5523a8;
  uStack_1218 = (undefined1 (*) [16])0xf5522b8;
  plStack_1210 = (long *)CONCAT71(plStack_1210._1_7_,1);
  pbStack_1208 = pbVar85;
  pcStack_1200 = (code *)plVar66;
  auStack_11f8._0_8_ = _DAT_0f5523a8;
  if (((bVar56 & 1) == 0) &&
     (cVar55 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871),
     cVar55 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  func_0x0d777150(plVar67);
  pbStack_1208 = (undefined *)0x0;
  pcStack_1200 = (code *)0x0;
  if (plVar66 != (long *)0x0) {
    LOCK();
    plVar67 = plVar66 + 1;
    lVar64 = *plVar67;
    *plVar67 = *plVar67 + -1;
    UNLOCK();
    if (lVar64 == 0) {
      (**(code **)(*plVar66 + 0x10))(plVar66);
      func_0x0412c2d0(plVar66);
    }
    pcVar74 = pcStack_1200;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = auStack_11f8._8_8_;
    auStack_11f8 = auVar47 << 0x40;
    if (pcStack_1200 != (code *)0x0) {
      LOCK();
      pcVar1 = pcStack_1200 + 8;
      lVar64 = *(long *)pcVar1;
      *(long *)pcVar1 = *(long *)pcVar1 + -1;
      UNLOCK();
      if (lVar64 == 0) {
        (**(code **)(*(long *)pcStack_1200 + 0x10))(pcStack_1200);
        func_0x0412c2d0(pcVar74);
      }
    }
  }
  if ((char)plStack_1210 == '\x01') {
    func_0x0eee02f0(uStack_1218);
  }
  func_0x0ee17510(&uStack_1078);
  func_0x048dbd40(abStack_e08);
  func_0x0d200c80(&uStack_ee8);
LAB_048c9bd8:
  func_0x048cab10(&puStack_1278);
  lVar64 = lStack_998;
  lStack_998 = 0;
  if (lVar64 != 0) {
    func_0x04917960();
  }
  func_0x048f62d0(&uStack_1108,lStack_1100);
  if (((ulong)puStack_1128 & 1) != 0) {
    func_0x0412a280(plStack_1118,(ulong)puStack_1128 & 0xfffffffffffffffe);
  }
  plVar66 = plStack_e30;
  plStack_e30 = (long *)0x0;
  if (plVar66 != (long *)0x0) {
    (**(code **)(*plVar66 + 8))();
  }
  if (((ulong)apuStack_e48[0] & 1) != 0) {
    func_0x0412a280(plStack_e38,(ulong)apuStack_e48[0] & 0xfffffffffffffffe);
  }
LAB_048c7708:
  func_0x048dc270(auStack_8c8);
  if ((auStack_10a0[8] & 1) == 0) {
  }
  else {
    func_0x0412a280(auStack_1090._8_8_,auStack_10a0._8_8_ & 0xfffffffffffffffe);
  }
  if ((auStack_10b0[0] & 1) == 0) {
    lVar64 = auStack_10d0._0_8_;
  }
  else {
    func_0x0412a280(auStack_10a0._0_8_,auStack_10b0._0_8_ & 0xfffffffffffffffe);
    lVar64 = auStack_10d0._0_8_;
  }
  if (lVar64 != 0) {
    lVar80 = lVar64;
    for (lVar87 = auStack_10d0._8_8_; lVar64 != lVar87; lVar87 = lVar87 + -0x18) {
      if ((*(byte *)(lVar87 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar87 + -8),*(ulong *)(lVar87 + -0x18) & 0xfffffffffffffffe
                       );
      }
      lVar80 = auStack_10d0._0_8_;
    }
    auStack_10d0._8_8_ = lVar64;
    func_0x0412a280(lVar80,lStack_10c0 - lVar80);
  }
  return uVar70;
}



/* ---- referenced strings ----
 * 0x121264e  allowlist.json
 * 0x1212654  ist.json
 * 0x12713f5  permissions.json
 * 0x133fde8  Dedicated_Server
 * 0x145192c  editor_allowlist.json
 * 0x1451939  ist.json
 * 0x1451942  packetlimitconfig.json
 * 0x1451950  fig.json
 * 0x156a589  server.properties
 */
