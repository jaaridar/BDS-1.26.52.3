/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a49aa0 (ELF vaddr 0x4949aa0)
 * Label: string:Erosion Factor for base value: {:.2f}
 * Body:  [[04a49aa0, 04a49e4d] [04a49e50, 04a4a4a6] [04a4a4b0, 04a4ab97] [04a4aba0, 04a4b2dc] [04a4b2e0, 04a4b573] [04a4b580, 04a4bae3] [04a4baf0, 04a4c0a3] [04a4c0b0, 04a4cae4] [04a4caf0, 04a4cbfc] [04a4cc00, 04a4cd67] [04a4cd8b, 04a4cda4] [04a4d2b8, 04a4d2c9] [04a4d859, 04a4d8be]]
 * Ghidra: FUN_04a49aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a49aa0(float param_1,long param_2,char param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lStack_1388;
  ulong uStack_1380;
  ulong uStack_1378;
  float fStack_136c;
  undefined1 *apuStack_1368 [2];
  undefined1 *puStack_1358;
  undefined1 auStack_1350 [120];
  uint uStack_12d8;
  ulong uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined4 uStack_12b8;
  undefined4 uStack_12b0;
  undefined1 auStack_12a8 [120];
  uint uStack_1230;
  ulong uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined4 uStack_1210;
  long lStack_1208;
  long lStack_1200;
  long lStack_11f8;
  long lStack_11e8;
  long lStack_11e0;
  long lStack_11d8;
  long lStack_11c8;
  long lStack_11c0;
  long lStack_11b8;
  long lStack_11a8;
  long lStack_11a0;
  long lStack_1198;
  long lStack_1188;
  long lStack_1180;
  long lStack_1178;
  long lStack_1168;
  long lStack_1160;
  long lStack_1158;
  long lStack_1148;
  long lStack_1140;
  long lStack_1138;
  long lStack_1128;
  long lStack_1120;
  long lStack_1118;
  undefined1 *apuStack_1108 [16];
  byte bStack_1088;
  undefined5 uStack_1087;
  undefined2 uStack_1082;
  undefined1 uStack_1080;
  undefined5 uStack_107f;
  undefined1 uStack_107a;
  undefined8 uStack_1078;
  byte bStack_1070;
  undefined4 uStack_106f;
  undefined4 uStack_106b;
  undefined4 uStack_1067;
  undefined3 uStack_1063;
  undefined1 uStack_1060;
  undefined4 uStack_105f;
  undefined3 uStack_105b;
  byte bStack_1058;
  undefined4 uStack_1057;
  undefined4 uStack_1053;
  undefined4 uStack_104f;
  undefined3 uStack_104b;
  undefined1 uStack_1048;
  undefined4 uStack_1047;
  undefined3 uStack_1043;
  byte bStack_1040;
  undefined7 uStack_103f;
  undefined4 uStack_1038;
  undefined1 uStack_1034;
  undefined8 uStack_1030;
  byte bStack_1028;
  undefined4 uStack_1027;
  undefined4 uStack_1023;
  undefined4 uStack_101f;
  undefined4 uStack_101b;
  undefined1 uStack_1017;
  undefined6 uStack_1016;
  ulong auStack_1010 [2];
  undefined4 *puStack_1000;
  ulong auStack_ff8 [2];
  undefined4 *puStack_fe8;
  byte bStack_fe0;
  undefined7 uStack_fdf;
  undefined8 uStack_fd0;
  undefined1 *apuStack_fc8 [16];
  long lStack_f48;
  undefined1 auStack_f40 [120];
  uint uStack_ec8;
  uint uStack_ec0;
  undefined4 uStack_ebc;
  undefined4 uStack_eb8;
  undefined4 uStack_eb4;
  undefined8 uStack_eb0;
  undefined1 auStack_ea8 [120];
  uint uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e10 [120];
  uint uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined1 auStack_d78 [120];
  uint uStack_d00;
  uint uStack_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  undefined8 uStack_ce8;
  undefined1 auStack_ce0 [120];
  uint uStack_c68;
  uint uStack_c60;
  undefined4 uStack_c5c;
  undefined4 uStack_c58;
  undefined4 uStack_c54;
  undefined8 uStack_c50;
  undefined1 auStack_c48 [120];
  uint uStack_bd0;
  ulong uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_bb0 [120];
  uint uStack_b38;
  uint uStack_b30;
  undefined4 uStack_b2c;
  undefined4 uStack_b28;
  undefined4 uStack_b24;
  undefined8 uStack_b20;
  undefined1 auStack_b18 [120];
  uint uStack_aa0;
  uint uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  undefined8 uStack_a88;
  undefined1 auStack_a80 [120];
  uint uStack_a08;
  uint uStack_a00;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined8 uStack_9f0;
  undefined1 auStack_9e8 [120];
  uint uStack_970;
  ulong uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_950 [120];
  uint uStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  float afStack_8b8 [30];
  uint uStack_840;
  ulong uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  float afStack_820 [30];
  uint uStack_7a8;
  ulong uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined4 auStack_788 [30];
  uint uStack_710;
  ulong uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 auStack_6f0 [30];
  uint uStack_678;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined4 auStack_658 [30];
  uint uStack_5e0;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 auStack_5c0 [30];
  uint uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined4 auStack_528 [30];
  uint uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [120];
  uint uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 auStack_3f8 [30];
  uint uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined4 auStack_360 [30];
  uint uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 auStack_2c8 [30];
  uint uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  float afStack_230 [30];
  uint uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [120];
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  
  uVar9 = _DAT_0f5566a0;
  bStack_1040 = 0x16;
  uStack_103f = 0x70732065736142;
  uStack_1038 = 0x656e696c;
  uStack_1034 = 0;
  auStack_a80[0] = 0;
  uStack_a08 = 0xffffffff;
  fStack_136c = param_1;
  if ((ulong)_DAT_0f5566a0 != 0xffffffff) {
    puStack_1358 = auStack_a80;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f5566a0 * 8))(&puStack_1358,0xf556628);
    uStack_a08 = uVar9;
  }
  if ((_DAT_0f5566a8 & 1) == 0) {
    uStack_9f0 = _DAT_0f5566b8;
    uStack_a00 = _DAT_0f5566a8;
    uStack_9fc = uRam000000000f5566ac;
    uStack_9f8 = _DAT_0f5566b0;
    uStack_9f4 = uRam000000000f5566b4;
  }
  else {
    func_0x0412e5e0(&uStack_a00,_DAT_0f5566b8,CONCAT44(uRam000000000f5566b4,_DAT_0f5566b0));
  }
  auStack_658[0] = 0x40c9999a;
  uStack_5e0 = 0;
  apuStack_fc8[0] = (undefined1 *)CONCAT44(apuStack_fc8[0]._4_4_,0x40c9999a);
  func_0x0470d9a0(&uStack_5d8,&UNK_013251d8,8,9,apuStack_fc8);
  uVar9 = uStack_5e0;
  puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0xbe4ccccd);
  auStack_1350[0] = 0;
  uStack_12d8 = 0xffffffff;
  if ((ulong)uStack_5e0 != 0xffffffff) {
    apuStack_fc8[0] = auStack_1350;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_5e0 * 8))(apuStack_fc8,auStack_658);
    uStack_12d8 = uVar9;
  }
  uStack_12c0 = uStack_5c8;
  uStack_12d0 = uStack_5d8;
  uStack_12c8 = uStack_5d0;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_12b8 = 0;
  afStack_230[0] = fStack_136c;
  uStack_1b8 = 0;
  apuStack_fc8[0] = (undefined1 *)CONCAT44(apuStack_fc8[0]._4_4_,fStack_136c);
  lStack_f48 = param_2;
  func_0x0470d9a0(&uStack_1b0,&UNK_013251d8,8,9,apuStack_fc8);
  uVar9 = uStack_1b8;
  uStack_12b0 = 0x3e4ccccd;
  auStack_12a8[0] = 0;
  uStack_1230 = 0xffffffff;
  if ((ulong)uStack_1b8 != 0xffffffff) {
    apuStack_fc8[0] = auStack_12a8;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_1b8 * 8))(apuStack_fc8,afStack_230);
    uStack_1230 = uVar9;
  }
  uStack_1218 = uStack_1a0;
  uStack_1228 = uStack_1b0;
  uStack_1220 = uStack_1a8;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1210 = 0;
  lStack_1128 = 0;
  lStack_1120 = 0;
  lStack_1118 = 0;
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
  if (lVar5 == 0) {
    func_0x0eec74c0(0x150,0);
  }
  lStack_1118 = lVar5 + 0x150;
  lStack_1128 = lVar5;
  lStack_1120 = lVar5;
  lStack_1120 = func_0x04a6b0a0(&lStack_1128,&puStack_1358,&lStack_1208,lVar5);
  func_0x04a48d80(auStack_a8,&bStack_1040,auStack_a80,&lStack_1128);
  func_0x049cd640(auStack_f40,auStack_a8);
  uStack_ec8 = 2;
  func_0x04a770f0(&uStack_ec0,auStack_a8);
  func_0x049cd3b0(auStack_a8);
  lVar5 = lStack_1128;
  if (lStack_1128 != 0) {
    if (lStack_1128 != lStack_1120) {
      lVar8 = lStack_1120;
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                          *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
        }
        if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                    (apuStack_fc8,lVar8 + -0xa0);
        }
        *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
        lVar8 = lVar8 + -0xa8;
      } while (lVar8 != lVar5);
    }
    lStack_1120 = lVar5;
    func_0x0412a280(lStack_1128,lStack_1118 - lStack_1128);
  }
  if ((uStack_1228 & 1) != 0) {
    func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1230 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_fc8,auStack_12a8);
  }
  uStack_1230 = 0xffffffff;
  if ((uStack_12d0 & 1) != 0) {
    func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_12d8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_fc8,auStack_1350);
  }
  uStack_12d8 = 0xffffffff;
  if ((uStack_1b0 & 1) != 0) {
    func_0x0412a280(uStack_1a0,uStack_1b0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1b8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1b8 * 8))(apuStack_fc8,afStack_230);
  }
  uStack_1b8 = 0xffffffff;
  if ((uStack_5d8 & 1) != 0) {
    func_0x0412a280(uStack_5c8,uStack_5d8 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_5e0 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_5e0 * 8))(apuStack_fc8,auStack_658);
  }
  uStack_5e0 = 0xffffffff;
  if ((uStack_a00 & 1) != 0) {
    func_0x0412a280(uStack_9f0,CONCAT44(uStack_9fc,uStack_a00) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_a08 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_a08 * 8))(&puStack_1358,auStack_a80);
  }
  uStack_a08 = 0xffffffff;
  if ((bStack_1040 & 1) != 0) {
    func_0x0412a280(uStack_1030,CONCAT71(uStack_103f,bStack_1040) & 0xfffffffffffffffe);
  }
  lStack_1388 = 0;
  uStack_1380 = 0;
  uStack_1378 = 0;
  puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
  uStack_1380 = func_0x04a6c1a0(_DAT_01198694,&lStack_1388,auStack_f40,&puStack_1358);
  puStack_fe8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_fe8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_0135b6f4;
  auStack_ff8[0] = 0x21;
  auStack_ff8[1] = 0x1c;
  *(ulong *)(puStack_fe8 + 3) = CONCAT44(_UNK_0135b6f0,_DAT_0135b6ec);
  *(undefined8 *)(puStack_fe8 + 5) = uVar7;
  uVar4 = _DAT_0135b6ec;
  uVar3 = _UNK_0135b6e8;
  uVar2 = _UNK_0135b6e4;
  *puStack_fe8 = _DAT_0135b6e0;
  puStack_fe8[1] = uVar2;
  puStack_fe8[2] = uVar3;
  puStack_fe8[3] = uVar4;
  *(undefined1 *)(puStack_fe8 + 7) = 0;
  uVar9 = _DAT_0f5566a0;
  auStack_b18[0] = 0;
  uStack_aa0 = 0xffffffff;
  if ((ulong)_DAT_0f5566a0 != 0xffffffff) {
    puStack_1358 = auStack_b18;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f5566a0 * 8))(&puStack_1358,0xf556628);
    uStack_aa0 = uVar9;
  }
  if ((_DAT_0f5566a8 & 1) == 0) {
    uStack_a88 = _DAT_0f5566b8;
    uStack_a98 = _DAT_0f5566a8;
    uStack_a94 = uRam000000000f5566ac;
    uStack_a90 = _DAT_0f5566b0;
    uStack_a8c = uRam000000000f5566b4;
  }
  else {
    func_0x0412e5e0(&uStack_a98,_DAT_0f5566b8,CONCAT44(uRam000000000f5566b4,_DAT_0f5566b0));
  }
  auStack_6f0[0] = 0x40c9999a;
  uStack_678 = 0;
  apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x40c9999a);
  func_0x0470d9a0(&uStack_670,&UNK_013251d8,8,9,apuStack_1108);
  uVar9 = uStack_678;
  puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0xbd4ccccd);
  auStack_1350[0] = 0;
  uStack_12d8 = 0xffffffff;
  if ((ulong)uStack_678 != 0xffffffff) {
    apuStack_1108[0] = auStack_1350;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_678 * 8))(apuStack_1108,auStack_6f0);
    uStack_12d8 = uVar9;
  }
  uStack_12c0 = uStack_660;
  uStack_12d0 = uStack_670;
  uStack_12c8 = uStack_668;
  uStack_670 = 0;
  uStack_668 = 0;
  uStack_660 = 0;
  uStack_12b8 = 0;
  auStack_2c8[0] = 0x402ae148;
  uStack_250 = 0;
  apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x402ae148);
  func_0x0470d9a0(&uStack_248,&UNK_013251d8,8,9,apuStack_1108);
  uVar9 = uStack_250;
  uStack_12b0 = 0x3d4ccccd;
  auStack_12a8[0] = 0;
  uStack_1230 = 0xffffffff;
  if ((ulong)uStack_250 != 0xffffffff) {
    apuStack_1108[0] = auStack_12a8;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_250 * 8))(apuStack_1108,auStack_2c8);
    uStack_1230 = uVar9;
  }
  uStack_1218 = uStack_238;
  uStack_1228 = uStack_248;
  uStack_1220 = uStack_240;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_1210 = 0;
  lStack_1148 = 0;
  lStack_1140 = 0;
  lStack_1138 = 0;
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
  if (lVar5 == 0) {
    func_0x0eec74c0(0x150,0);
  }
  lStack_1138 = lVar5 + 0x150;
  lStack_1148 = lVar5;
  lStack_1140 = lVar5;
  lStack_1140 = func_0x04a6b0a0(&lStack_1148,&puStack_1358,&lStack_1208,lVar5);
  func_0x04a48d80(apuStack_fc8,auStack_ff8,auStack_b18,&lStack_1148);
  uVar10 = uStack_1380;
  apuStack_1108[0] = (undefined1 *)((ulong)apuStack_1108[0] & 0xffffffff00000000);
  if (uStack_1380 < uStack_1378) {
    func_0x04a6c670(_DAT_01198780,uStack_1380,apuStack_fc8,apuStack_1108);
    uStack_1380 = uVar10 + 0xa8;
  }
  else {
    uStack_1380 = func_0x04a6c4f0(_DAT_01198780,&lStack_1388,apuStack_fc8,apuStack_1108);
  }
  func_0x049cd3b0(apuStack_fc8);
  lVar5 = lStack_1148;
  if (lStack_1148 != 0) {
    if (lStack_1148 != lStack_1140) {
      lVar8 = lStack_1140;
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                          *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
        }
        if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                    (apuStack_1108,lVar8 + -0xa0);
        }
        *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
        lVar8 = lVar8 + -0xa8;
      } while (lVar8 != lVar5);
    }
    lStack_1140 = lVar5;
    func_0x0412a280(lStack_1148,lStack_1138 - lStack_1148);
  }
  if ((uStack_1228 & 1) != 0) {
    func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1230 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1108,auStack_12a8);
  }
  uStack_1230 = 0xffffffff;
  if ((uStack_12d0 & 1) != 0) {
    func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_12d8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1108,auStack_1350);
  }
  uStack_12d8 = 0xffffffff;
  if ((uStack_248 & 1) != 0) {
    func_0x0412a280(uStack_238,uStack_248 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_250 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_250 * 8))(apuStack_1108,auStack_2c8);
  }
  uStack_250 = 0xffffffff;
  if ((uStack_670 & 1) != 0) {
    func_0x0412a280(uStack_660,uStack_670 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_678 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_678 * 8))(apuStack_1108,auStack_6f0);
  }
  uStack_678 = 0xffffffff;
  if ((uStack_a98 & 1) != 0) {
    func_0x0412a280(uStack_a88,CONCAT44(uStack_a94,uStack_a98) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_aa0 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_aa0 * 8))(&puStack_1358,auStack_b18);
  }
  uStack_aa0 = 0xffffffff;
  if ((auStack_ff8[0] & 1) != 0) {
    func_0x0412a280(puStack_fe8,auStack_ff8[0] & 0xfffffffffffffffe);
  }
  uVar10 = uStack_1380;
  puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
  if (uStack_1380 < uStack_1378) {
    func_0x04a6c320(_DAT_01198398,uStack_1380,auStack_f40,&puStack_1358);
    uVar10 = uVar10 + 0xa8;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uVar10 < uStack_1378) goto LAB_04a4a794;
LAB_04a4a73e:
    uStack_1380 = func_0x04a6c1a0(_DAT_01198ae8,&lStack_1388,auStack_f40,&puStack_1358);
  }
  else {
    uVar10 = func_0x04a6c1a0(_DAT_01198398,&lStack_1388,auStack_f40,&puStack_1358);
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uStack_1378 <= uVar10) goto LAB_04a4a73e;
LAB_04a4a794:
    uStack_1380 = uVar10;
    func_0x04a6c320(_DAT_01198ae8,uVar10,auStack_f40,&puStack_1358);
    uStack_1380 = uVar10 + 0xa8;
  }
  puStack_1000 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_1000 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar7 = _UNK_012f1490;
  auStack_1010[0] = 0x21;
  auStack_1010[1] = 0x1c;
  *(ulong *)(puStack_1000 + 3) = CONCAT44(_UNK_012f148c,_DAT_012f1488);
  *(undefined8 *)(puStack_1000 + 5) = uVar7;
  uVar4 = _DAT_012f1488;
  uVar3 = _UNK_012f1484;
  uVar2 = _UNK_012f1480;
  *puStack_1000 = _DAT_012f147c;
  puStack_1000[1] = uVar2;
  puStack_1000[2] = uVar3;
  puStack_1000[3] = uVar4;
  *(undefined1 *)(puStack_1000 + 7) = 0;
  uVar9 = _DAT_0f5566a0;
  auStack_bb0[0] = 0;
  uStack_b38 = 0xffffffff;
  if ((ulong)_DAT_0f5566a0 != 0xffffffff) {
    puStack_1358 = auStack_bb0;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f5566a0 * 8))(&puStack_1358,0xf556628);
    uStack_b38 = uVar9;
  }
  if ((_DAT_0f5566a8 & 1) == 0) {
    uStack_b20 = _DAT_0f5566b8;
    uStack_b30 = _DAT_0f5566a8;
    uStack_b2c = uRam000000000f5566ac;
    uStack_b28 = _DAT_0f5566b0;
    uStack_b24 = uRam000000000f5566b4;
  }
  else {
    func_0x0412e5e0(&uStack_b30,_DAT_0f5566b8,CONCAT44(uRam000000000f5566b4,_DAT_0f5566b0));
  }
  auStack_788[0] = 0x402ae148;
  uStack_710 = 0;
  apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x402ae148);
  func_0x0470d9a0(&uStack_708,&UNK_013251d8,8,9,apuStack_1108);
  uVar9 = uStack_710;
  puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0xbd4ccccd);
  auStack_1350[0] = 0;
  uStack_12d8 = 0xffffffff;
  if ((ulong)uStack_710 != 0xffffffff) {
    apuStack_1108[0] = auStack_1350;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_710 * 8))(apuStack_1108,auStack_788);
    uStack_12d8 = uVar9;
  }
  uStack_12c0 = uStack_6f8;
  uStack_12d0 = uStack_708;
  uStack_12c8 = uStack_700;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_6f8 = 0;
  uStack_12b8 = 0;
  auStack_360[0] = 0x40c9999a;
  uStack_2e8 = 0;
  apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x40c9999a);
  func_0x0470d9a0(&uStack_2e0,&UNK_013251d8,8,9,apuStack_1108);
  uVar9 = uStack_2e8;
  uStack_12b0 = 0x3d4ccccd;
  auStack_12a8[0] = 0;
  uStack_1230 = 0xffffffff;
  if ((ulong)uStack_2e8 != 0xffffffff) {
    apuStack_1108[0] = auStack_12a8;
    (**(code **)(&UNK_0ef53118 + (ulong)uStack_2e8 * 8))(apuStack_1108,auStack_360);
    uStack_1230 = uVar9;
  }
  uStack_1218 = uStack_2d0;
  uStack_1228 = uStack_2e0;
  uStack_1220 = uStack_2d8;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_1210 = 0;
  lStack_1168 = 0;
  lStack_1160 = 0;
  lStack_1158 = 0;
  lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
  if (lVar5 == 0) {
    func_0x0eec74c0(0x150,0);
  }
  lStack_1158 = lVar5 + 0x150;
  lStack_1168 = lVar5;
  lStack_1160 = lVar5;
  lStack_1160 = func_0x04a6b0a0(&lStack_1168,&puStack_1358,&lStack_1208,lVar5);
  func_0x04a48d80(apuStack_fc8,auStack_1010,auStack_bb0,&lStack_1168);
  uVar10 = uStack_1380;
  apuStack_1108[0] = (undefined1 *)((ulong)apuStack_1108[0] & 0xffffffff00000000);
  if (uStack_1380 < uStack_1378) {
    func_0x04a6c670(_DAT_01198ae4,uStack_1380,apuStack_fc8,apuStack_1108);
    uStack_1380 = uVar10 + 0xa8;
  }
  else {
    uStack_1380 = func_0x04a6c4f0(_DAT_01198ae4,&lStack_1388,apuStack_fc8,apuStack_1108);
  }
  func_0x049cd3b0(apuStack_fc8);
  lVar5 = lStack_1168;
  if (lStack_1168 != 0) {
    if (lStack_1168 != lStack_1160) {
      lVar8 = lStack_1160;
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                          *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
        }
        if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                    (apuStack_1108,lVar8 + -0xa0);
        }
        *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
        lVar8 = lVar8 + -0xa8;
      } while (lVar8 != lVar5);
    }
    lStack_1160 = lVar5;
    func_0x0412a280(lStack_1168,lStack_1158 - lStack_1168);
  }
  if ((uStack_1228 & 1) != 0) {
    func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_1230 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1108,auStack_12a8);
  }
  uStack_1230 = 0xffffffff;
  if ((uStack_12d0 & 1) != 0) {
    func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_12d8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1108,auStack_1350);
  }
  uStack_12d8 = 0xffffffff;
  if ((uStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,uStack_2e0 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_2e8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_2e8 * 8))(apuStack_1108,auStack_360);
  }
  uStack_2e8 = 0xffffffff;
  if ((uStack_708 & 1) != 0) {
    func_0x0412a280(uStack_6f8,uStack_708 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_710 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_710 * 8))(apuStack_1108,auStack_788);
  }
  uStack_710 = 0xffffffff;
  if ((uStack_b30 & 1) != 0) {
    func_0x0412a280(uStack_b20,CONCAT44(uStack_b2c,uStack_b30) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_b38 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_b38 * 8))(&puStack_1358,auStack_bb0);
  }
  uStack_b38 = 0xffffffff;
  if ((auStack_1010[0] & 1) != 0) {
    func_0x0412a280(puStack_1000,auStack_1010[0] & 0xfffffffffffffffe);
  }
  uVar10 = uStack_1380;
  puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
  if (uStack_1380 < uStack_1378) {
    func_0x04a6c320(_DAT_01198b30,uStack_1380,auStack_f40,&puStack_1358);
    uStack_1380 = uVar10 + 0xa8;
    if (param_3 != '\0') goto LAB_04a4af00;
LAB_04a4ae2c:
    uVar9 = _DAT_0f556608;
    bStack_1070 = 0x26;
    uStack_106f = _DAT_013251c4;
    uStack_106b = _UNK_013251c8;
    uStack_1067 = _UNK_013251cc;
    _uStack_1063 = CONCAT13(0x6f,(int3)_UNK_013251d0);
    uStack_105f = 0x657369;
    auStack_ce0[0] = 0;
    uStack_c68 = 0xffffffff;
    if ((ulong)_DAT_0f556608 != 0xffffffff) {
      puStack_1358 = auStack_ce0;
      (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556608 * 8))(&puStack_1358,0xf556590);
      uStack_c68 = uVar9;
    }
    if ((_DAT_0f556610 & 1) == 0) {
      uStack_c50 = _DAT_0f556620;
      uStack_c60 = _DAT_0f556610;
      uStack_c5c = uRam000000000f556614;
      uStack_c58 = _DAT_0f556618;
      uStack_c54 = uRam000000000f55661c;
    }
    else {
      func_0x0412e5e0(&uStack_c60,_DAT_0f556620,CONCAT44(uRam000000000f55661c,_DAT_0f556618));
    }
    uVar9 = uStack_ec8;
    auStack_e10[0] = 0;
    uStack_d98 = 0xffffffff;
    if ((ulong)uStack_ec8 != 0xffffffff) {
      apuStack_1108[0] = auStack_e10;
      (**(code **)(&UNK_0ef53130 + (ulong)uStack_ec8 * 8))(apuStack_1108,auStack_f40);
      uStack_d98 = uVar9;
    }
    if ((uStack_ec0 & 1) == 0) {
      uStack_d80 = uStack_eb0;
      uStack_d90 = CONCAT44(uStack_ebc,uStack_ec0);
      uStack_d88 = CONCAT44(uStack_eb4,uStack_eb8);
    }
    else {
      func_0x0412e5e0(&uStack_d90,uStack_eb0,CONCAT44(uStack_eb4,uStack_eb8));
      uVar9 = uStack_d98;
    }
    puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0x3ee66666);
    auStack_1350[0] = 0;
    uStack_12d8 = 0xffffffff;
    if (uVar9 != 0xffffffff) {
      apuStack_1108[0] = auStack_1350;
      (**(code **)(&UNK_0ef53118 + (ulong)uVar9 * 8))(apuStack_1108,auStack_e10);
      uStack_12d8 = uVar9;
    }
    uStack_12c0 = uStack_d80;
    uStack_12d0 = uStack_d90;
    uStack_12c8 = uStack_d88;
    uStack_d90 = 0;
    uStack_d88 = 0;
    uStack_d80 = 0;
    uStack_12b8 = 0;
    auStack_528[0] = 0x3fc7ae14;
    uStack_4b0 = 0;
    apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x3fc7ae14);
    func_0x0470d9a0(&uStack_4a8,&UNK_013251d8,8,9,apuStack_1108);
    uVar9 = uStack_4b0;
    uStack_12b0 = 0x3f333333;
    auStack_12a8[0] = 0;
    uStack_1230 = 0xffffffff;
    if ((ulong)uStack_4b0 != 0xffffffff) {
      apuStack_1108[0] = auStack_12a8;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_4b0 * 8))(apuStack_1108,auStack_528);
      uStack_1230 = uVar9;
    }
    uStack_1218 = uStack_498;
    uStack_1228 = uStack_4a8;
    uStack_1220 = uStack_4a0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_1210 = 0;
    lStack_11c8 = 0;
    lStack_11c0 = 0;
    lStack_11b8 = 0;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
    if (lVar5 == 0) {
      func_0x0eec74c0(0x150,0);
    }
    lStack_11b8 = lVar5 + 0x150;
    lStack_11c8 = lVar5;
    lStack_11c0 = lVar5;
    lStack_11c0 = func_0x04a6b0a0(&lStack_11c8,&puStack_1358,&lStack_1208,lVar5);
    func_0x04a48d80(apuStack_fc8,&bStack_1070,auStack_ce0,&lStack_11c8);
    lVar5 = lStack_11c8;
    if (lStack_11c8 != 0) {
      if (lStack_11c8 != lStack_11c0) {
        lVar8 = lStack_11c0;
        do {
          if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                            *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          }
          if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
            (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                      (apuStack_1108,lVar8 + -0xa0);
          }
          *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
          lVar8 = lVar8 + -0xa8;
        } while (lVar8 != lVar5);
      }
      lStack_11c0 = lVar5;
      func_0x0412a280(lStack_11c8,lStack_11b8 - lStack_11c8);
    }
    if ((uStack_1228 & 1) != 0) {
      func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_1230 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1108,auStack_12a8);
    }
    uStack_1230 = 0xffffffff;
    if ((uStack_12d0 & 1) != 0) {
      func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_12d8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1108,auStack_1350);
    }
    uStack_12d8 = 0xffffffff;
    if ((uStack_4a8 & 1) != 0) {
      func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_4b0 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_4b0 * 8))(apuStack_1108,auStack_528);
    }
    uStack_4b0 = 0xffffffff;
    if ((uStack_d90 & 1) != 0) {
      func_0x0412a280(uStack_d80,uStack_d90 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_d98 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_d98 * 8))(apuStack_1108,auStack_e10);
    }
    uStack_d98 = 0xffffffff;
    if ((uStack_c60 & 1) != 0) {
      func_0x0412a280(uStack_c50,CONCAT44(uStack_c5c,uStack_c60) & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_c68 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_c68 * 8))(&puStack_1358,auStack_ce0);
    }
    uStack_c68 = 0xffffffff;
    if ((bStack_1070 & 1) != 0) {
      func_0x0412a280(CONCAT35(uStack_105b,CONCAT41(uStack_105f,uStack_1060)),
                      CONCAT35((undefined3)uStack_106b,CONCAT41(uStack_106f,bStack_1070)) &
                      0xfffffffffffffffe);
    }
    uVar9 = _DAT_0f556608;
    bStack_1088 = 0x1a;
    uStack_1087 = 0x6572747845;
    uStack_1082 = 0x656d;
    uStack_1080 = 0x20;
    uStack_107f = 0x736c6c6948;
    uStack_107a = 0;
    auStack_d78[0] = 0;
    uStack_d00 = 0xffffffff;
    if ((ulong)_DAT_0f556608 != 0xffffffff) {
      puStack_1358 = auStack_d78;
      (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556608 * 8))(&puStack_1358,0xf556590);
      uStack_d00 = uVar9;
    }
    if ((_DAT_0f556610 & 1) == 0) {
      uStack_ce8 = _DAT_0f556620;
      uStack_cf8 = _DAT_0f556610;
      uStack_cf4 = uRam000000000f556614;
      uStack_cf0 = _DAT_0f556618;
      uStack_cec = uRam000000000f55661c;
    }
    else {
      func_0x0412e5e0(&uStack_cf8,_DAT_0f556620,CONCAT44(uRam000000000f55661c,_DAT_0f556618));
    }
    uVar9 = uStack_ec8;
    auStack_ea8[0] = 0;
    uStack_e30 = 0xffffffff;
    if ((ulong)uStack_ec8 != 0xffffffff) {
      apuStack_1368[0] = auStack_ea8;
      (**(code **)(&UNK_0ef53130 + (ulong)uStack_ec8 * 8))(apuStack_1368,auStack_f40);
      uStack_e30 = uVar9;
    }
    if ((uStack_ec0 & 1) == 0) {
      uStack_e18 = uStack_eb0;
      uStack_e28 = CONCAT44(uStack_ebc,uStack_ec0);
      uStack_e20 = CONCAT44(uStack_eb4,uStack_eb8);
    }
    else {
      func_0x0412e5e0(&uStack_e28,uStack_eb0,CONCAT44(uStack_eb4,uStack_eb8));
      uVar9 = uStack_e30;
    }
    puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0xbf333333);
    auStack_1350[0] = 0;
    uStack_12d8 = 0xffffffff;
    if (uVar9 != 0xffffffff) {
      apuStack_1368[0] = auStack_1350;
      (**(code **)(&UNK_0ef53118 + (ulong)uVar9 * 8))(apuStack_1368,auStack_ea8);
      uStack_12d8 = uVar9;
    }
    uStack_12c0 = uStack_e18;
    uStack_12d0 = uStack_e28;
    uStack_12c8 = uStack_e20;
    uStack_e28 = 0;
    uStack_e20 = 0;
    uStack_e18 = 0;
    uStack_12b8 = 0;
    auStack_5c0[0] = 0x3faf5c29;
    uStack_548 = 0;
    apuStack_1368[0] = (undefined1 *)CONCAT44(apuStack_1368[0]._4_4_,0x3faf5c29);
    func_0x0470d9a0(&uStack_540,&UNK_013251d8,8,9,apuStack_1368);
    uVar9 = uStack_548;
    uStack_12b0 = 0xbe19999a;
    auStack_12a8[0] = 0;
    uStack_1230 = 0xffffffff;
    if ((ulong)uStack_548 != 0xffffffff) {
      apuStack_1368[0] = auStack_12a8;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_548 * 8))(apuStack_1368,auStack_5c0);
      uStack_1230 = uVar9;
    }
    uStack_1218 = uStack_530;
    uStack_1228 = uStack_540;
    uStack_1220 = uStack_538;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    uStack_1210 = 0;
    lStack_11e8 = 0;
    lStack_11e0 = 0;
    lStack_11d8 = 0;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
    if (lVar5 == 0) {
      func_0x0eec74c0(0x150,0);
    }
    lStack_11d8 = lVar5 + 0x150;
    lStack_11e8 = lVar5;
    lStack_11e0 = lVar5;
    lStack_11e0 = func_0x04a6b0a0(&lStack_11e8,&puStack_1358,&lStack_1208,lVar5);
    func_0x04a48d80(apuStack_1108,&bStack_1088,auStack_d78,&lStack_11e8);
    lVar5 = lStack_11e8;
    if (lStack_11e8 != 0) {
      if (lStack_11e8 != lStack_11e0) {
        lVar8 = lStack_11e0;
        do {
          if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                            *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          }
          if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
            (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                      (apuStack_1368,lVar8 + -0xa0);
          }
          *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
          lVar8 = lVar8 + -0xa8;
        } while (lVar8 != lVar5);
      }
      lStack_11e0 = lVar5;
      func_0x0412a280(lStack_11e8,lStack_11d8 - lStack_11e8);
    }
    if ((uStack_1228 & 1) != 0) {
      func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_1230 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1368,auStack_12a8);
    }
    uStack_1230 = 0xffffffff;
    if ((uStack_12d0 & 1) != 0) {
      func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_12d8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1368,auStack_1350);
    }
    uStack_12d8 = 0xffffffff;
    if ((uStack_540 & 1) != 0) {
      func_0x0412a280(uStack_530,uStack_540 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_548 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_548 * 8))(apuStack_1368,auStack_5c0);
    }
    uStack_548 = 0xffffffff;
    if ((uStack_e28 & 1) != 0) {
      func_0x0412a280(uStack_e18,uStack_e28 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_e30 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_e30 * 8))(apuStack_1368,auStack_ea8);
    }
    uStack_e30 = 0xffffffff;
    if ((uStack_cf8 & 1) != 0) {
      func_0x0412a280(uStack_ce8,CONCAT44(uStack_cf4,uStack_cf8) & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_d00 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_d00 * 8))(&puStack_1358,auStack_d78);
    }
    uStack_d00 = 0xffffffff;
    if ((bStack_1088 & 1) != 0) {
      func_0x0412a280(uStack_1078,
                      CONCAT26(uStack_1082,CONCAT51(uStack_1087,bStack_1088)) & 0xfffffffffffffffe);
    }
    uVar10 = uStack_1380;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    if (uStack_1380 < uStack_1378) {
      func_0x04a6cd20(_DAT_01198844,uStack_1380,apuStack_fc8,&puStack_1358);
      uVar10 = uVar10 + 0xa8;
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c43a;
LAB_04a4c33a:
      uVar10 = func_0x04a6cba0(_DAT_01198c0c,&lStack_1388,apuStack_fc8,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c476;
LAB_04a4c372:
      uVar10 = func_0x04a6cba0(_DAT_01198bd0,&lStack_1388,apuStack_1108,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c4b2;
LAB_04a4c3aa:
      uVar10 = func_0x04a6cba0(_DAT_01198b7c,&lStack_1388,apuStack_1108,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c4ee;
LAB_04a4c3e2:
      uStack_1380 = func_0x04a6c8b0(_DAT_01198cf0,fStack_136c,&lStack_1388,&puStack_1358);
      goto LAB_04a4c8c4;
    }
    uVar10 = func_0x04a6cba0(_DAT_01198844,&lStack_1388,apuStack_fc8,&puStack_1358);
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uStack_1378 <= uVar10) goto LAB_04a4c33a;
LAB_04a4c43a:
    uStack_1380 = uVar10;
    func_0x04a6cd20(_DAT_01198c0c,uVar10,apuStack_fc8,&puStack_1358);
    uVar10 = uVar10 + 0xa8;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uStack_1378 <= uVar10) goto LAB_04a4c372;
LAB_04a4c476:
    uStack_1380 = uVar10;
    func_0x04a6cd20(_DAT_01198bd0,uVar10,apuStack_1108,&puStack_1358);
    uVar10 = uVar10 + 0xa8;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uStack_1378 <= uVar10) goto LAB_04a4c3aa;
LAB_04a4c4b2:
    uStack_1380 = uVar10;
    func_0x04a6cd20(_DAT_01198b7c,uVar10,apuStack_1108,&puStack_1358);
    uVar10 = uVar10 + 0xa8;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    uStack_1380 = uVar10;
    if (uStack_1378 <= uVar10) goto LAB_04a4c3e2;
LAB_04a4c4ee:
    uStack_1380 = uVar10;
    func_0x04a6ca40(_DAT_01198cf0,fStack_136c,uVar10,&puStack_1358);
LAB_04a4c8bd:
    uStack_1380 = uVar10 + 0xa8;
  }
  else {
    uStack_1380 = func_0x04a6c1a0(_DAT_01198b30,&lStack_1388,auStack_f40,&puStack_1358);
    if (param_3 == '\0') goto LAB_04a4ae2c;
LAB_04a4af00:
    uVar9 = _DAT_0f5566a0;
    bStack_1058 = 0x26;
    uStack_1057 = _DAT_014adda5;
    uStack_1053 = _UNK_014adda9;
    uStack_104f = _UNK_014addad;
    _uStack_104b = CONCAT13(0x65,(int3)_UNK_014addb1);
    uStack_1047 = 0x646572;
    auStack_c48[0] = 0;
    uStack_bd0 = 0xffffffff;
    if ((ulong)_DAT_0f5566a0 != 0xffffffff) {
      puStack_1358 = auStack_c48;
      (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f5566a0 * 8))(&puStack_1358,0xf556628);
      uStack_bd0 = uVar9;
    }
    if ((_DAT_0f5566a8 & 1) == 0) {
      uStack_bb8 = _DAT_0f5566b8;
      uStack_bc8 = CONCAT44(uRam000000000f5566ac,_DAT_0f5566a8);
      uStack_bc0 = CONCAT44(uRam000000000f5566b4,_DAT_0f5566b0);
    }
    else {
      func_0x0412e5e0(&uStack_bc8,_DAT_0f5566b8,CONCAT44(uRam000000000f5566b4,_DAT_0f5566b0));
    }
    afStack_820[0] = fStack_136c;
    uStack_7a8 = 0;
    apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,fStack_136c);
    func_0x0470d9a0(&uStack_7a0,&UNK_013251d8,8,9,apuStack_1108);
    uVar9 = uStack_7a8;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    auStack_1350[0] = 0;
    uStack_12d8 = 0xffffffff;
    if ((ulong)uStack_7a8 != 0xffffffff) {
      apuStack_1108[0] = auStack_1350;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_7a8 * 8))(apuStack_1108,afStack_820);
      uStack_12d8 = uVar9;
    }
    uStack_12c0 = uStack_790;
    uStack_12d0 = uStack_7a0;
    uStack_12c8 = uStack_798;
    uStack_7a0 = 0;
    uStack_798 = 0;
    uStack_790 = 0;
    uStack_12b8 = 0;
    auStack_3f8[0] = 0x3f200000;
    uStack_380 = 0;
    apuStack_1108[0] = (undefined1 *)CONCAT44(apuStack_1108[0]._4_4_,0x3f200000);
    func_0x0470d9a0(&uStack_378,&UNK_013251d8,8,9,apuStack_1108);
    uVar9 = uStack_380;
    uStack_12b0 = 0x3dcccccd;
    auStack_12a8[0] = 0;
    uStack_1230 = 0xffffffff;
    if ((ulong)uStack_380 != 0xffffffff) {
      apuStack_1108[0] = auStack_12a8;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_380 * 8))(apuStack_1108,auStack_3f8);
      uStack_1230 = uVar9;
    }
    uStack_1218 = uStack_368;
    uStack_1228 = uStack_378;
    uStack_1220 = uStack_370;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_1210 = 0;
    lStack_1188 = 0;
    lStack_1180 = 0;
    lStack_1178 = 0;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
    if (lVar5 == 0) {
      func_0x0eec74c0(0x150,0);
    }
    lStack_1178 = lVar5 + 0x150;
    lStack_1188 = lVar5;
    lStack_1180 = lVar5;
    lStack_1180 = func_0x04a6b0a0(&lStack_1188,&puStack_1358,&lStack_1208,lVar5);
    func_0x04a48d80(apuStack_fc8,&bStack_1058,auStack_c48,&lStack_1188);
    lVar5 = lStack_1188;
    if (lStack_1188 != 0) {
      if (lStack_1188 != lStack_1180) {
        lVar8 = lStack_1180;
        do {
          if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                            *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          }
          if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
            (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                      (apuStack_1108,lVar8 + -0xa0);
          }
          *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
          lVar8 = lVar8 + -0xa8;
        } while (lVar8 != lVar5);
      }
      lStack_1180 = lVar5;
      func_0x0412a280(lStack_1188,lStack_1178 - lStack_1188);
    }
    if ((uStack_1228 & 1) != 0) {
      func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_1230 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1108,auStack_12a8);
    }
    uStack_1230 = 0xffffffff;
    if ((uStack_12d0 & 1) != 0) {
      func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_12d8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1108,auStack_1350);
    }
    uStack_12d8 = 0xffffffff;
    if ((uStack_378 & 1) != 0) {
      func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_380 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_380 * 8))(apuStack_1108,auStack_3f8);
    }
    uStack_380 = 0xffffffff;
    if ((uStack_7a0 & 1) != 0) {
      func_0x0412a280(uStack_790,uStack_7a0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_7a8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_7a8 * 8))(apuStack_1108,afStack_820);
    }
    uStack_7a8 = 0xffffffff;
    if ((uStack_bc8 & 1) != 0) {
      func_0x0412a280(uStack_bb8,uStack_bc8 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_bd0 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_bd0 * 8))(&puStack_1358,auStack_c48);
    }
    uStack_bd0 = 0xffffffff;
    if ((bStack_1058 & 1) != 0) {
      func_0x0412a280(CONCAT35(uStack_1043,CONCAT41(uStack_1047,uStack_1048)),
                      CONCAT35((undefined3)uStack_1053,CONCAT41(uStack_1057,bStack_1058)) &
                      0xfffffffffffffffe);
    }
    uVar9 = _DAT_0f556608;
    bStack_1028 = 0x20;
    uStack_1027 = _DAT_0119c5b1;
    uStack_1023 = _UNK_0119c5b5;
    uStack_101f = _UNK_0119c5b9;
    uStack_101b = _UNK_0119c5bd;
    uStack_1017 = 0;
    auStack_950[0] = 0;
    uStack_8d8 = 0xffffffff;
    if ((ulong)_DAT_0f556608 != 0xffffffff) {
      puStack_1358 = auStack_950;
      (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556608 * 8))(&puStack_1358,0xf556590);
      uStack_8d8 = uVar9;
    }
    if ((_DAT_0f556610 & 1) == 0) {
      uStack_8c0 = _DAT_0f556620;
      uStack_8d0 = CONCAT44(uRam000000000f556614,_DAT_0f556610);
      uStack_8c8 = CONCAT44(uRam000000000f55661c,_DAT_0f556618);
    }
    else {
      func_0x0412e5e0(&uStack_8d0,_DAT_0f556620,CONCAT44(uRam000000000f55661c,_DAT_0f556618));
    }
    afStack_8b8[0] = fStack_136c;
    uStack_840 = 0;
    apuStack_1368[0] = (undefined1 *)CONCAT44(apuStack_1368[0]._4_4_,fStack_136c);
    func_0x0470d9a0(&uStack_838,&UNK_013251d8,8,9,apuStack_1368);
    uVar9 = uStack_840;
    puStack_1358 = (undefined1 *)CONCAT44(puStack_1358._4_4_,0xbf666666);
    auStack_1350[0] = 0;
    uStack_12d8 = 0xffffffff;
    if ((ulong)uStack_840 != 0xffffffff) {
      apuStack_1368[0] = auStack_1350;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_840 * 8))(apuStack_1368,afStack_8b8);
      uStack_12d8 = uVar9;
    }
    uStack_12c0 = uStack_828;
    uStack_12d0 = uStack_838;
    uStack_12c8 = uStack_830;
    uStack_838 = 0;
    uStack_830 = 0;
    uStack_828 = 0;
    uStack_12b8 = 0;
    func_0x049cd640(auStack_120,apuStack_fc8);
    func_0x049cd640(auStack_490,auStack_120);
    uStack_418 = 2;
    func_0x04a770f0(&uStack_410,auStack_120);
    uVar9 = uStack_418;
    uStack_12b0 = 0xbf30a3d7;
    auStack_12a8[0] = 0;
    uStack_1230 = 0xffffffff;
    if ((ulong)uStack_418 != 0xffffffff) {
      apuStack_1368[0] = auStack_12a8;
      (**(code **)(&UNK_0ef53118 + (ulong)uStack_418 * 8))(apuStack_1368,auStack_490);
      uStack_1230 = uVar9;
    }
    uStack_1218 = uStack_400;
    uStack_1228 = uStack_410;
    uStack_1220 = uStack_408;
    uStack_410 = 0;
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_1210 = 0;
    lStack_11a8 = 0;
    lStack_11a0 = 0;
    lStack_1198 = 0;
    lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
    if (lVar5 == 0) {
      func_0x0eec74c0(0x150,0);
    }
    lStack_1198 = lVar5 + 0x150;
    lStack_11a8 = lVar5;
    lStack_11a0 = lVar5;
    lStack_11a0 = func_0x04a6b0a0(&lStack_11a8,&puStack_1358,&lStack_1208,lVar5);
    func_0x04a48d80(apuStack_1108,&bStack_1028,auStack_950,&lStack_11a8);
    lVar5 = lStack_11a8;
    if (lStack_11a8 != 0) {
      if (lStack_11a8 != lStack_11a0) {
        lVar8 = lStack_11a0;
        do {
          if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                            *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          }
          if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
            (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                      (apuStack_1368,lVar8 + -0xa0);
          }
          *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
          lVar8 = lVar8 + -0xa8;
        } while (lVar8 != lVar5);
      }
      lStack_11a0 = lVar5;
      func_0x0412a280(lStack_11a8,lStack_1198 - lStack_11a8);
    }
    if ((uStack_1228 & 1) != 0) {
      func_0x0412a280(uStack_1218,uStack_1228 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_1230 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_1230 * 8))(apuStack_1368,auStack_12a8);
    }
    uStack_1230 = 0xffffffff;
    if ((uStack_12d0 & 1) != 0) {
      func_0x0412a280(uStack_12c0,uStack_12d0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_12d8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_12d8 * 8))(apuStack_1368,auStack_1350);
    }
    uStack_12d8 = 0xffffffff;
    if ((uStack_410 & 1) != 0) {
      func_0x0412a280(uStack_400,uStack_410 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_418 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_418 * 8))(apuStack_1368,auStack_490);
    }
    uStack_418 = 0xffffffff;
    func_0x049cd3b0(auStack_120);
    if ((uStack_838 & 1) != 0) {
      func_0x0412a280(uStack_828,uStack_838 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_840 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_840 * 8))(apuStack_1368,afStack_8b8);
    }
    uStack_840 = 0xffffffff;
    if ((uStack_8d0 & 1) != 0) {
      func_0x0412a280(uStack_8c0,uStack_8d0 & 0xfffffffffffffffe);
    }
    if ((ulong)uStack_8d8 != 0xffffffff) {
      (**(code **)(&UNK_0ef53100 + (ulong)uStack_8d8 * 8))(&puStack_1358,auStack_950);
    }
    uStack_8d8 = 0xffffffff;
    if ((bStack_1028 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_1016,CONCAT11(uStack_1017,uStack_101b._3_1_)),
                      CONCAT35((undefined3)uStack_1023,CONCAT41(uStack_1027,bStack_1028)) &
                      0xfffffffffffffffe);
    }
    uVar10 = uStack_1380;
    puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
    if (uStack_1380 < uStack_1378) {
      func_0x04a6ca40(_DAT_0119892c,fStack_136c,uStack_1380,&puStack_1358);
      uVar10 = uVar10 + 0xa8;
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c82a;
LAB_04a4c761:
      uVar10 = func_0x04a6cba0(_DAT_01198bd0,&lStack_1388,apuStack_1108,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c866;
LAB_04a4c799:
      uVar10 = func_0x04a6cba0(_DAT_01198b7c,&lStack_1388,apuStack_1108,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) goto LAB_04a4c8a2;
    }
    else {
      uVar10 = func_0x04a6c8b0(_DAT_0119892c,fStack_136c,&lStack_1388,&puStack_1358);
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uStack_1378 <= uVar10) goto LAB_04a4c761;
LAB_04a4c82a:
      uStack_1380 = uVar10;
      func_0x04a6cd20(_DAT_01198bd0,uVar10,apuStack_1108,&puStack_1358);
      uVar10 = uVar10 + 0xa8;
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uStack_1378 <= uVar10) goto LAB_04a4c799;
LAB_04a4c866:
      uStack_1380 = uVar10;
      func_0x04a6cd20(_DAT_01198b7c,uVar10,apuStack_1108,&puStack_1358);
      uVar10 = uVar10 + 0xa8;
      puStack_1358 = (undefined1 *)((ulong)puStack_1358 & 0xffffffff00000000);
      uStack_1380 = uVar10;
      if (uVar10 < uStack_1378) {
LAB_04a4c8a2:
        uStack_1380 = uVar10;
        func_0x04a6ca40(_DAT_0119898c,fStack_136c,uVar10,&puStack_1358);
        goto LAB_04a4c8bd;
      }
    }
    uStack_1380 = func_0x04a6c8b0(_DAT_0119898c,fStack_136c,&lStack_1388,&puStack_1358);
  }
LAB_04a4c8c4:
  func_0x049cd3b0(apuStack_1108);
  func_0x049cd3b0(apuStack_fc8);
  puStack_1358 = (undefined1 *)(double)fStack_136c;
  func_0x0470d9a0(&bStack_fe0,&UNK_012f1499,0x25,10,&puStack_1358);
  uVar9 = _DAT_0f556570;
  auStack_9e8[0] = 0;
  uStack_970 = 0xffffffff;
  if ((ulong)_DAT_0f556570 != 0xffffffff) {
    puStack_1358 = auStack_9e8;
    (**(code **)(&UNK_0ef53130 + (ulong)_DAT_0f556570 * 8))(&puStack_1358,0xf5564f8);
    uStack_970 = uVar9;
  }
  if ((DAT_0f556578 & 1) == 0) {
    uStack_958 = _DAT_0f556588;
    uStack_968 = CONCAT71(uRam000000000f556579,DAT_0f556578);
    uStack_960 = _DAT_0f556580;
  }
  else {
    func_0x0412e5e0(&uStack_968,_DAT_0f556588,_DAT_0f556580);
  }
  uVar10 = uStack_1380;
  lVar5 = lStack_1388;
  lStack_1208 = 0;
  lStack_1200 = 0;
  lStack_11f8 = 0;
  lVar8 = uStack_1380 - lStack_1388;
  if (lVar8 != 0) {
    if (0x186186186186186 < (ulong)((lVar8 >> 3) * -0x30c30c30c30c30c3)) {
      uVar7 = func_0x04a6b090();
      uStack_1380 = uVar10;
      func_0x049cd3b0(apuStack_1108);
      func_0x049cd3b0(apuStack_fc8);
      func_0x04a49970(&lStack_1388);
      func_0x049cd2e0(auStack_f40);
      uVar7 = _Unwind_Resume(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      uVar7 = func_0x04882e20(uVar7);
      func_0x04882e20(uVar7);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
    if (lVar6 == 0) {
      func_0x0eec74c0(lVar8,0);
    }
    lStack_11f8 = lVar8 + lVar6;
    lStack_1208 = lVar6;
    lStack_1200 = lVar6;
    lStack_1200 = func_0x04a6c050(&lStack_1208,lVar5,uVar10,lVar6);
  }
  func_0x04a48d80(auStack_198,&bStack_fe0,auStack_9e8,&lStack_1208);
  lVar5 = lStack_f48;
  func_0x049cd640(lStack_f48,auStack_198);
  *(undefined4 *)(lVar5 + 0x78) = 2;
  func_0x04a770f0(lVar5 + 0x80,auStack_198);
  func_0x049cd3b0(auStack_198);
  lVar5 = lStack_1208;
  if (lStack_1208 != 0) {
    if (lStack_1208 != lStack_1200) {
      lVar8 = lStack_1200;
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                          *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
        }
        if ((ulong)*(uint *)(lVar8 + -0x28) != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(lVar8 + -0x28) * 8))
                    (&puStack_1358,lVar8 + -0xa0);
        }
        *(undefined4 *)(lVar8 + -0x28) = 0xffffffff;
        lVar8 = lVar8 + -0xa8;
      } while (lVar8 != lVar5);
    }
    lStack_1200 = lVar5;
    func_0x0412a280(lStack_1208,lStack_11f8 - lStack_1208);
  }
  if ((uStack_968 & 1) != 0) {
    func_0x0412a280(uStack_958,uStack_968 & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_970 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_970 * 8))(&puStack_1358,auStack_9e8);
  }
  uStack_970 = 0xffffffff;
  if ((bStack_fe0 & 1) != 0) {
    func_0x0412a280(uStack_fd0,CONCAT71(uStack_fdf,bStack_fe0) & 0xfffffffffffffffe);
  }
  lVar5 = lStack_1388;
  if (lStack_1388 != 0) {
    if (lStack_1388 != uStack_1380) {
      uVar10 = uStack_1380;
      do {
        if ((*(byte *)(uVar10 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(uVar10 + -0x10),
                          *(ulong *)(uVar10 + -0x20) & 0xfffffffffffffffe);
        }
        if ((ulong)*(uint *)(uVar10 + -0x28) != 0xffffffff) {
          (**(code **)(&UNK_0ef53100 + (ulong)*(uint *)(uVar10 + -0x28) * 8))
                    (&puStack_1358,uVar10 + -0xa0);
        }
        *(undefined4 *)(uVar10 + -0x28) = 0xffffffff;
        uVar10 = uVar10 + -0xa8;
      } while (uVar10 != lVar5);
    }
    uStack_1380 = lVar5;
    func_0x0412a280(lStack_1388,uStack_1378 - lStack_1388);
  }
  if ((uStack_ec0 & 1) != 0) {
    func_0x0412a280(uStack_eb0,CONCAT44(uStack_ebc,uStack_ec0) & 0xfffffffffffffffe);
  }
  if ((ulong)uStack_ec8 != 0xffffffff) {
    (**(code **)(&UNK_0ef53100 + (ulong)uStack_ec8 * 8))(&puStack_1358,auStack_f40);
  }
  return;
}



/* ---- referenced strings ----
 * 0x119c5b1  Ridges Shattered
 * 0x12f147c  Natural variation 3D noise 2
 * 0x12f1488  ation 3D noise 2
 * 0x13251c4  Extra 3D Peak Noise
 * 0x135b6e0  Natural variation 3D noise 1
 * 0x135b6ec  ation 3D noise 1
 * 0x14adda5  Weirdness Shattered
 */
