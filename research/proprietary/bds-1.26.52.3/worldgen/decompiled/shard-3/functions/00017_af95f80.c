/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb095f80 (ELF vaddr 0xaf95f80)
 * Label: string:Spawn rules for minecraft:density_limit in {} need to be put
 * Body:  [[0b095f80, 0b09632e] [0b096330, 0b0964b3] [0b0964c0, 0b096843] [0b096850, 0b09687e] [0b096880, 0b09693a] [0b096940, 0b096991] [0b0969a0, 0b096cb3] [0b096cc0, 0b096dc8] [0b096dd0, 0b0971d8] [0b0971e0, 0b0973c0] [0b0973d0, 0b0974ba] [0b0974c0, 0b0979da] [0b0979e0, 0b097d1e] [0b097d20, 0b097efd] [0b097f00, 0b097fed] [0b097ff0, 0b0981c8] [0b0981d0, 0b098443] [0b098450, 0b0986a1] [0b0986b0, 0b0987d4]]
 * Ghidra: FUN_0b095f80
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b095f80(int *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  byte *pbVar21;
  ulong uVar22;
  bool bVar23;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  byte *pbStack_5d8;
  undefined8 uStack_5c8;
  byte bStack_5c0;
  undefined1 uStack_5bf;
  undefined2 uStack_5be;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined8 uStack_5b0;
  byte bStack_5a8;
  byte bStack_5a7;
  undefined2 uStack_5a6;
  undefined4 uStack_5a4;
  undefined2 uStack_5a0;
  undefined2 uStack_59e;
  undefined2 uStack_59c;
  undefined2 uStack_59a;
  byte *pbStack_598;
  ulong uStack_590;
  byte *pbStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  byte bStack_560;
  undefined7 uStack_55f;
  undefined8 uStack_550;
  byte bStack_540;
  undefined7 uStack_53f;
  undefined8 uStack_530;
  byte *pbStack_518;
  undefined1 auStack_510 [16];
  ulong uStack_500;
  undefined8 uStack_4f8;
  undefined4 *puStack_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined4 *puStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 *puStack_4a8;
  ulong uStack_4a0;
  undefined8 uStack_498;
  undefined4 *puStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_448;
  long lStack_440;
  long alStack_438 [2];
  long lStack_428;
  long lStack_420;
  long alStack_418 [2];
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3e8;
  long lStack_3e0;
  long alStack_3d8 [2];
  long lStack_3c8;
  long lStack_3c0;
  long alStack_3b8 [2];
  long lStack_3a8;
  long lStack_3a0;
  long alStack_398 [2];
  long lStack_388;
  long lStack_380;
  long alStack_378 [2];
  long lStack_368;
  long lStack_360;
  long alStack_358 [2];
  long lStack_348;
  long lStack_340;
  long alStack_338 [2];
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  int *piStack_2c8;
  byte bStack_2c0;
  undefined7 uStack_2bf;
  undefined8 uStack_2b0;
  byte bStack_2a8;
  undefined7 uStack_2a7;
  undefined8 uStack_298;
  byte bStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_280;
  byte bStack_278;
  undefined7 uStack_277;
  undefined8 uStack_268;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined8 uStack_250;
  byte bStack_248;
  undefined7 uStack_247;
  undefined8 uStack_238;
  byte bStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_220;
  byte bStack_218;
  undefined7 uStack_217;
  undefined8 uStack_208;
  byte bStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [32];
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined8 uStack_134;
  undefined1 uStack_12c;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte bStack_e0;
  byte bStack_df;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  *param_1 = 100;
  piStack_2c8 = param_1 + 2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined **)(param_1 + 2) = &UNK_0ef516f8;
  param_1[0x20] = 0;
  uStack_170 = _DAT_014e9660;
  param_1[0x21] = 0xf;
  *(undefined8 *)(param_1 + 0x22) = _DAT_014e9660;
  *(undefined1 *)(param_1 + 0x24) = 0;
  iStack_158 = _UNK_014eb03c;
  iStack_15c = _UNK_014eb038;
  iStack_160 = _UNK_014eb034;
  iStack_164 = _DAT_014eb030;
  param_1[0x25] = _DAT_014eb030;
  param_1[0x26] = iStack_160;
  param_1[0x27] = iStack_15c;
  param_1[0x28] = iStack_158;
  param_1[0x2f] = 0x1000000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x36] = -1;
  param_1[0x37] = -1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((long)param_1 + 0x1ad) = 0;
  iStack_148 = _UNK_014e747c;
  iStack_14c = _UNK_014e7478;
  iStack_150 = _UNK_014e7474;
  iStack_154 = _DAT_014e7470;
  param_1[0x29] = _DAT_014e7470;
  param_1[0x2a] = iStack_150;
  param_1[0x2b] = iStack_14c;
  param_1[0x2c] = iStack_148;
  param_1[0x2d] = 0x80;
  param_1[0x2e] = 0x80;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uStack_178 = 0xf00000000;
  uStack_168 = 0;
  uStack_13c = 0x1000000;
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_120 = 0xffffffffffffffff;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  bStack_e0 = 0;
  bStack_df = 0;
  uStack_de = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d4 = 0;
  uStack_d2 = 0;
  pbStack_d0 = (byte *)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_144 = 0x8000000080;
  uStack_188 = 0;
  uStack_5c8 = param_5;
  pbStack_518 = param_4;
  cVar5 = func_0x04865100(param_3,&UNK_0139ee34);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_0139ee34);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_2e8 = 0;
      lStack_2e0 = 0;
      lStack_2d8 = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_200,&UNK_01454a28,0x94,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_2e8);
      if ((bStack_200 & 1) != 0) {
        func_0x0412a280(uStack_1f0,CONCAT71(uStack_1ff,bStack_200) & 0xfffffffffffffffe);
      }
      lVar1 = lStack_2e8;
      lVar19 = lStack_2e0;
      if (lStack_2e8 != 0) {
        for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
          if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                            *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_2e0 = lVar1;
        func_0x0412a280(lStack_2e8,lStack_2d8 - lStack_2e8);
      }
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_013747db);
      iVar7 = func_0x04863e00(uVar16,100);
      iVar8 = 0;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      *param_1 = iVar8;
      cVar5 = func_0x04865100(uVar15,&UNK_014bbfed);
      if (cVar5 != '\0') {
        uVar15 = func_0x048648e0(uVar15,&UNK_014bbfed);
        iStack_15c = func_0x04863e00(uVar15,5);
      }
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_01215a8f);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_01215a8f);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_308 = 0;
      lStack_300 = 0;
      lStack_2f8 = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_218,&UNK_01454abd,0x9b,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_308);
      if ((bStack_218 & 1) != 0) {
        func_0x0412a280(uStack_208,CONCAT71(uStack_217,bStack_218) & 0xfffffffffffffffe);
      }
      lVar1 = lStack_308;
      lVar19 = lStack_300;
      if (lStack_308 != 0) {
        for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
          if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                            *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_300 = lVar1;
        func_0x0412a280(lStack_308,lStack_2f8 - lStack_308);
      }
      iStack_154 = -1;
      iStack_158 = -1;
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_012302ed);
      iVar8 = func_0x04863e00(uVar16,0xffffffff);
      uVar15 = func_0x048648e0(uVar15,&UNK_01454932);
      iStack_154 = func_0x04863e00(uVar15,0xffffffff);
      iStack_158 = iVar8;
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_011e09e3);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_011e09e3);
    func_0x04863480(auStack_1b8,uVar15);
    sVar6 = func_0x0d8a1d70(param_2);
    func_0x0b6c3f10(auStack_1b8,(int)sVar6,&uStack_c8);
    func_0x04863610(auStack_1b8);
  }
  cVar5 = func_0x04865100(param_3,&UNK_014bbff4);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_014bbff4);
    func_0x04863480(auStack_1c8,uVar15);
    sVar6 = func_0x0d8a1d70(param_2);
    func_0x0b6c3f10(auStack_1c8,(int)sVar6,&uStack_98);
    func_0x04863610(auStack_1c8);
  }
  cVar5 = func_0x04865100(param_3,&UNK_01215aa7);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_01215aa7);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 != '\0') {
      uVar16 = func_0x048648e0(uVar15,&UNK_01222d0e);
      func_0x04863480(auStack_1d8,uVar16);
      sVar6 = func_0x0d8a1d70(param_2);
      func_0x0b6c3f10(auStack_1d8,(int)sVar6,&uStack_b0);
      func_0x04863610(auStack_1d8);
      uVar15 = func_0x048648e0(uVar15,&UNK_014525f3);
      uVar9 = func_0x04863e00(uVar15,1);
      uStack_84 = CONCAT44(uVar9,(undefined4)uStack_84);
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_013ecc66);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_013ecc66);
    cVar5 = func_0x04864270(uVar15);
    if (cVar5 == '\0') {
      cVar5 = func_0x04864290(uVar15);
      if (cVar5 != '\0') {
        uVar16 = func_0x048648e0(uVar15,&UNK_01383bd8);
        uVar9 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_012fdd1d);
        uVar10 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_01405daa);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&uStack_5e8,uVar16,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        uVar16 = func_0x048648e0(uVar15,&UNK_013184a4);
        uVar11 = func_0x04863e00(uVar16,0);
        uVar16 = func_0x048648e0(uVar15,&UNK_01410553);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&bStack_5c0,uVar16,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        uVar15 = func_0x048648e0(uVar15,&UNK_012fdd26);
        uVar12 = func_0x04863e00(uVar15,0);
        bStack_5a8 = (byte)uVar9;
        bStack_5a7 = (byte)((uint)uVar9 >> 8);
        uStack_5a6 = (undefined2)((uint)uVar9 >> 0x10);
        uStack_5a0 = (undefined2)uVar12;
        uStack_59e = (undefined2)((uint)uVar12 >> 0x10);
        uStack_59c = (undefined2)uVar11;
        uStack_59a = (undefined2)((uint)uVar11 >> 0x10);
        uStack_5a4 = uVar10;
        if (((ulong)uStack_5e8 & 1) == 0) {
          pbStack_588 = pbStack_5d8;
          pbStack_598 = uStack_5e8;
          uStack_590 = uStack_5e0;
        }
        else {
          func_0x0412e5e0(&pbStack_598,pbStack_5d8,uStack_5e0);
        }
        if ((bStack_5c0 & 1) == 0) {
          uStack_570 = uStack_5b0;
          uStack_580 = CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0)));
          uStack_578 = CONCAT44(uStack_5b4,uStack_5b8);
        }
        else {
          func_0x0412e5e0(&uStack_580,uStack_5b0,CONCAT44(uStack_5b4,uStack_5b8));
        }
        if (puStack_108 < puStack_100) {
          *puStack_108 = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)));
          puStack_108[1] = CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0)))
          ;
          puStack_108[4] = pbStack_588;
          puStack_108[2] = pbStack_598;
          puStack_108[3] = uStack_590;
          pbStack_598 = (byte *)0x0;
          uStack_590 = 0;
          pbStack_588 = (byte *)0x0;
          puStack_108[7] = uStack_570;
          puStack_108[5] = uStack_580;
          puStack_108[6] = uStack_578;
          uStack_580 = 0;
          uStack_578 = 0;
          uStack_570 = 0;
          puStack_108 = puStack_108 + 8;
        }
        else {
          puStack_108 = (undefined8 *)func_0x0b0c0770(&uStack_110,&bStack_5a8);
          if ((uStack_580 & 1) != 0) {
            func_0x0412a280(uStack_570,uStack_580 & 0xfffffffffffffffe);
          }
          if (((ulong)pbStack_598 & 1) != 0) {
            func_0x0412a280(pbStack_588,(ulong)pbStack_598 & 0xfffffffffffffffe);
          }
        }
        if ((bStack_5c0 & 1) != 0) {
          func_0x0412a280(uStack_5b0,
                          CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0)))
                          & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_5e8 & 1) != 0) {
          func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      func_0x04865530(auStack_510,uVar15);
      func_0x048655b0(auStack_1e8,uVar15);
      while (cVar5 = func_0x04862c80(auStack_510,auStack_1e8), cVar5 == '\0') {
        uVar15 = func_0x04862b80(auStack_510);
        uVar16 = func_0x048648e0(uVar15,&UNK_01383bd8);
        uVar9 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_012fdd1d);
        uVar10 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_01405daa);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&uStack_5e8,uVar16,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        uVar16 = func_0x048648e0(uVar15,&UNK_013184a4);
        uVar11 = func_0x04863e00(uVar16,0);
        uVar16 = func_0x048648e0(uVar15,&UNK_01410553);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&bStack_5c0,uVar16,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        uVar15 = func_0x048648e0(uVar15,&UNK_012fdd26);
        uVar12 = func_0x04863e00(uVar15,0);
        bStack_5a8 = (byte)uVar9;
        bStack_5a7 = (byte)((uint)uVar9 >> 8);
        uStack_5a6 = (undefined2)((uint)uVar9 >> 0x10);
        uStack_5a0 = (undefined2)uVar12;
        uStack_59e = (undefined2)((uint)uVar12 >> 0x10);
        uStack_59c = (undefined2)uVar11;
        uStack_59a = (undefined2)((uint)uVar11 >> 0x10);
        uStack_5a4 = uVar10;
        if (((ulong)uStack_5e8 & 1) == 0) {
          pbStack_588 = pbStack_5d8;
          pbStack_598 = uStack_5e8;
          uStack_590 = uStack_5e0;
        }
        else {
          func_0x0412e5e0(&pbStack_598,pbStack_5d8,uStack_5e0);
        }
        if ((bStack_5c0 & 1) == 0) {
          uStack_570 = uStack_5b0;
          uStack_580 = CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0)));
          uStack_578 = CONCAT44(uStack_5b4,uStack_5b8);
        }
        else {
          func_0x0412e5e0(&uStack_580,uStack_5b0,CONCAT44(uStack_5b4,uStack_5b8));
        }
        if (puStack_108 < puStack_100) {
          *puStack_108 = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)));
          puStack_108[1] = CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0)))
          ;
          puStack_108[4] = pbStack_588;
          puStack_108[2] = pbStack_598;
          puStack_108[3] = uStack_590;
          pbStack_598 = (byte *)0x0;
          uStack_590 = 0;
          pbStack_588 = (byte *)0x0;
          puStack_108[7] = uStack_570;
          *(undefined4 *)(puStack_108 + 5) = (undefined4)uStack_580;
          *(undefined4 *)((long)puStack_108 + 0x2c) = uStack_580._4_4_;
          *(undefined4 *)(puStack_108 + 6) = (undefined4)uStack_578;
          *(undefined4 *)((long)puStack_108 + 0x34) = uStack_578._4_4_;
          uStack_580 = 0;
          uStack_578 = 0;
          uStack_570 = 0;
          puStack_108 = puStack_108 + 8;
        }
        else {
          puStack_108 = (undefined8 *)func_0x0b0c0770(&uStack_110,&bStack_5a8);
          if ((uStack_580 & 1) != 0) {
            func_0x0412a280(uStack_570,uStack_580 & 0xfffffffffffffffe);
          }
          if (((ulong)pbStack_598 & 1) != 0) {
            func_0x0412a280(pbStack_588,(ulong)pbStack_598 & 0xfffffffffffffffe);
          }
        }
        if ((bStack_5c0 & 1) != 0) {
          func_0x0412a280(uStack_5b0,
                          CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0)))
                          & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_5e8 & 1) != 0) {
          func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
        }
        func_0x04862ba0(auStack_510);
      }
      func_0x04862b40(auStack_1e8);
      func_0x04862b40(auStack_510);
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_011e0a04);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_011e0a04);
    cVar5 = func_0x04864270(uVar15);
    if (cVar5 == '\0') {
      cVar5 = func_0x04864290(uVar15);
      if (cVar5 != '\0') {
        uVar16 = func_0x048648e0(uVar15,&UNK_0123ca5a);
        uVar9 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_012fdd37);
        uVar10 = func_0x04863e00(uVar16,0);
        uVar15 = func_0x048648e0(uVar15,&UNK_013264d5);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&uStack_5e8,uVar15,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        func_0x0b04cfb0(&bStack_5a8,&uStack_5e8);
        func_0x0c8be9a0(auStack_1a8,uVar9,uVar10);
        if ((bStack_540 & 1) != 0) {
          func_0x0412a280(uStack_530,CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
        }
        if ((bStack_560 & 1) != 0) {
          func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
        }
        if ((uStack_578 & 1) != 0) {
          func_0x0412a280(uStack_568,uStack_578 & 0xfffffffffffffffe);
        }
        if ((uStack_590 & 1) != 0) {
          func_0x0412a280(uStack_580,uStack_590 & 0xfffffffffffffffe);
        }
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_5e8 & 1) != 0) {
          func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      func_0x04865530(&bStack_5c0,uVar15);
      func_0x048655b0(auStack_510,uVar15);
      while (cVar5 = func_0x04862c80(&bStack_5c0,auStack_510), cVar5 == '\0') {
        uVar15 = func_0x04862b80(&bStack_5c0);
        uVar16 = func_0x048648e0(uVar15,&UNK_0123ca5a);
        uVar9 = func_0x04863e00(uVar16,1);
        uVar16 = func_0x048648e0(uVar15,&UNK_012fdd37);
        uVar10 = func_0x04863e00(uVar16,0);
        uVar15 = func_0x048648e0(uVar15,&UNK_013264d5);
        bStack_5a8 = 0;
        bStack_5a7 = 0;
        func_0x04863cb0(&uStack_5e8,uVar15,&bStack_5a8);
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        func_0x0b04cfb0(&bStack_5a8,&uStack_5e8);
        func_0x0c8be9a0(auStack_1a8,uVar9,uVar10);
        if ((bStack_540 & 1) != 0) {
          func_0x0412a280(uStack_530,CONCAT71(uStack_53f,bStack_540) & 0xfffffffffffffffe);
        }
        if ((bStack_560 & 1) != 0) {
          func_0x0412a280(uStack_550,CONCAT71(uStack_55f,bStack_560) & 0xfffffffffffffffe);
        }
        if ((uStack_578 & 1) != 0) {
          func_0x0412a280(uStack_568,uStack_578 & 0xfffffffffffffffe);
        }
        if ((uStack_590 & 1) != 0) {
          func_0x0412a280(uStack_580,uStack_590 & 0xfffffffffffffffe);
        }
        if ((bStack_5a8 & 1) != 0) {
          func_0x0412a280(pbStack_598,
                          CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)))
                          & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_5e8 & 1) != 0) {
          func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
        }
        func_0x04862ba0(&bStack_5c0);
      }
      func_0x04862b40(auStack_510);
      func_0x04862b40(&bStack_5c0);
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_012b0cff);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_012b0cff);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_328 = 0;
      lStack_320 = 0;
      lStack_318 = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_230,&UNK_01486b3c,0x9f,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_328);
      if ((bStack_230 & 1) != 0) {
        func_0x0412a280(uStack_220,CONCAT71(uStack_22f,bStack_230) & 0xfffffffffffffffe);
      }
      lVar1 = lStack_328;
      lVar19 = lStack_320;
      if (lStack_328 != 0) {
        for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
          if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                            *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_320 = lVar1;
        func_0x0412a280(lStack_328,lStack_318 - lStack_328);
      }
      iVar8 = 0;
      uStack_168 = 0;
      iVar7 = 0xf;
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      iVar8 = func_0x04863e00(uVar16,0);
      uVar16 = func_0x048648e0(uVar15,&UNK_012ba56c);
      iVar13 = func_0x04863e00(uVar16,0xf);
      uVar15 = func_0x048648e0(uVar15,&UNK_011fb610);
      uStack_168 = func_0x04863ff0(uVar15,0);
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      if (0xe < iVar8) {
        iVar8 = 0xf;
      }
      iVar7 = 0;
      if (0 < iVar13) {
        iVar7 = iVar13;
      }
      if (0xe < iVar7) {
        iVar7 = 0xf;
      }
    }
    uStack_178 = CONCAT44(iVar7,iVar8);
  }
  cVar5 = func_0x04865100(param_3,&UNK_0146caad);
  iVar8 = iStack_164;
  iVar7 = iStack_160;
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_0146caad);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_368 = 0;
      lStack_360 = 0;
      alStack_358[0] = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_248,&UNK_0134e2b7,0x9b,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_368);
      if ((bStack_248 & 1) != 0) {
        func_0x0412a280(uStack_238,CONCAT71(uStack_247,bStack_248) & 0xfffffffffffffffe);
      }
      lVar3 = lStack_368;
      lVar19 = lStack_368;
      lVar1 = lStack_360;
      if (lStack_368 == 0) {
        iVar8 = 0x18;
        iVar7 = 0x80;
      }
      else {
        for (; lStack_368 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
          if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                            *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
          }
          lVar19 = lStack_368;
        }
        plVar20 = alStack_358;
        lStack_360 = lVar3;
        iVar13 = 0x80;
        iVar14 = 0x18;
LAB_0b09752f:
        func_0x0412a280(lVar19,*plVar20 - lVar19);
        iVar8 = iVar14;
        iVar7 = iVar13;
      }
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      iVar13 = func_0x04863e00(uVar16,0x18);
      uVar15 = func_0x048648e0(uVar15,&UNK_012ba56c);
      iVar14 = func_0x04863e00(uVar15,0x80);
      iVar8 = iVar13;
      iVar7 = iVar14;
      if (iVar14 < iVar13) {
        lStack_348 = 0;
        lStack_340 = 0;
        alStack_338[0] = 0;
        puStack_490 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puStack_490 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        uVar15 = _UNK_01333b26;
        uStack_4a0 = 0x49;
        uStack_498 = 0x47;
        *(undefined8 *)(puStack_490 + 0xc) = _DAT_01333b1e;
        *(undefined8 *)(puStack_490 + 0xe) = uVar15;
        uVar15 = _UNK_01333b16;
        *(undefined8 *)(puStack_490 + 8) = _DAT_01333b0e;
        *(undefined8 *)(puStack_490 + 10) = uVar15;
        uVar15 = _UNK_01333b06;
        *(undefined8 *)(puStack_490 + 4) = _DAT_01333afe;
        *(undefined8 *)(puStack_490 + 6) = uVar15;
        uVar11 = _UNK_01333afa;
        uVar10 = _UNK_01333af6;
        uVar9 = _UNK_01333af2;
        *puStack_490 = _DAT_01333aee;
        puStack_490[1] = uVar9;
        puStack_490[2] = uVar10;
        puStack_490[3] = uVar11;
        *(undefined8 *)((long)puStack_490 + 0x3f) = 0x2e78616d203e2074;
        *(undefined1 *)((long)puStack_490 + 0x47) = 0;
        func_0x0d6b13c0(uStack_5c8,2,&lStack_348);
        if ((uStack_4a0 & 1) != 0) {
          func_0x0412a280(puStack_490,uStack_4a0 & 0xfffffffffffffffe);
        }
        lVar3 = lStack_348;
        iVar8 = iVar14;
        iVar7 = iVar13;
        lVar19 = lStack_348;
        lVar1 = lStack_340;
        if (lStack_348 != 0) {
          for (; lStack_348 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
            if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                              *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
            }
            lVar19 = lStack_348;
          }
          plVar20 = alStack_338;
          lStack_340 = lVar3;
          goto LAB_0b09752f;
        }
      }
    }
  }
  iStack_160 = iVar7;
  iStack_164 = iVar8;
  cVar5 = func_0x04865100(param_3,&UNK_01333b36);
  if (cVar5 != '\0') {
    uStack_13c = CONCAT31(uStack_13c._1_3_,1);
  }
  cVar5 = func_0x04865100(param_3,&UNK_011fb623);
  if (cVar5 != '\0') {
    uStack_13c._0_2_ = CONCAT11(1,(undefined1)uStack_13c);
  }
  cVar5 = func_0x04865100(param_3,&UNK_013d2cd4);
  if (cVar5 != '\0') {
    uStack_13c._0_3_ = CONCAT12(1,(undefined2)uStack_13c);
  }
  cVar5 = func_0x04865100(param_3,&UNK_0143b8ea);
  if (cVar5 != '\0') {
    uStack_13c = uStack_13c & 0xffffff;
  }
  cVar5 = func_0x04865100(param_3,&UNK_0143b90e);
  if (cVar5 != '\0') {
    uStack_138 = 1;
  }
  cVar5 = func_0x04865100(param_3,&UNK_0127ef61);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_0127ef61);
    func_0x0c5c3aa0(piStack_2c8,uVar15);
  }
  cVar5 = func_0x04865100(param_3,&UNK_012fdd48);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_012fdd48);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      bStack_5a8 = 0;
      bStack_5a7 = 0;
      iVar8 = func_0x0b0bfcf0(&bStack_5a8,0);
      uStack_5e8 = (byte *)((ulong)uStack_5e8 & 0xffffffffffff0000);
      iStack_14c = func_0x0b0bfcf0(&uStack_5e8,3);
      iStack_150 = iVar8;
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      uStack_5e8 = (byte *)((ulong)uStack_5e8 & 0xffffffffffff0000);
      func_0x04863cb0(&bStack_5a8,uVar16,&uStack_5e8);
      if (((ulong)uStack_5e8 & 1) != 0) {
        func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
      }
      uVar15 = func_0x048648e0(uVar15,&UNK_012ba56c);
      bStack_5c0 = 0;
      uStack_5bf = 0;
      func_0x04863cb0(&uStack_5e8,uVar15,&bStack_5c0);
      if ((bStack_5c0 & 1) != 0) {
        func_0x0412a280(uStack_5b0,
                        CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0))) &
                        0xfffffffffffffffe);
      }
      iVar8 = func_0x0b0bfcf0(&bStack_5a8,0);
      iStack_14c = func_0x0b0bfcf0(&uStack_5e8,3);
      iStack_150 = iVar8;
      if (((ulong)uStack_5e8 & 1) != 0) {
        func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
      }
      if ((bStack_5a8 & 1) != 0) {
        func_0x0412a280(pbStack_598,
                        CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8))) &
                        0xfffffffffffffffe);
      }
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_01333b52);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_01333b52);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_3a8 = 0;
      lStack_3a0 = 0;
      alStack_398[0] = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_260,&UNK_0136addf,0x9d,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_3a8);
      if ((bStack_260 & 1) != 0) {
        func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
      }
      lVar3 = lStack_3a8;
      lVar19 = lStack_3a8;
      lVar1 = lStack_3a0;
      if (lStack_3a8 == 0) {
        iVar8 = 0x18;
        iVar7 = 0x80;
      }
      else {
        for (; lStack_3a8 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
          if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                            *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
          }
          lVar19 = lStack_3a8;
        }
        plVar20 = alStack_398;
        lStack_3a0 = lVar3;
        iVar7 = 0x80;
        iVar8 = 0x18;
LAB_0b097a4f:
        func_0x0412a280(lVar19,*plVar20 - lVar19);
      }
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      iVar13 = func_0x04863e00(uVar16,0x18);
      uVar15 = func_0x048648e0(uVar15,&UNK_012ba56c);
      iVar7 = func_0x04863e00(uVar15,0x80);
      iVar8 = iVar13;
      if (iVar7 < iVar13) {
        lStack_388 = 0;
        lStack_380 = 0;
        alStack_378[0] = 0;
        puStack_4a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (puStack_4a8 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        uVar15 = _UNK_01298528;
        uStack_4b8 = 0x51;
        uStack_4b0 = 0x49;
        *(ulong *)((long)puStack_4a8 + 0x39) = CONCAT17(UNK_01298527,_DAT_01298520);
        *(undefined8 *)((long)puStack_4a8 + 0x41) = uVar15;
        uVar15 = CONCAT71(_DAT_01298520,UNK_0129851f);
        *(undefined8 *)(puStack_4a8 + 0xc) = _DAT_01298517;
        *(undefined8 *)(puStack_4a8 + 0xe) = uVar15;
        uVar15 = _UNK_0129850f;
        *(undefined8 *)(puStack_4a8 + 8) = _DAT_01298507;
        *(undefined8 *)(puStack_4a8 + 10) = uVar15;
        uVar15 = _UNK_012984ff;
        *(undefined8 *)(puStack_4a8 + 4) = _DAT_012984f7;
        *(undefined8 *)(puStack_4a8 + 6) = uVar15;
        uVar11 = _UNK_012984f3;
        uVar10 = _UNK_012984ef;
        uVar9 = _UNK_012984eb;
        *puStack_4a8 = _DAT_012984e7;
        puStack_4a8[1] = uVar9;
        puStack_4a8[2] = uVar10;
        puStack_4a8[3] = uVar11;
        *(undefined1 *)((long)puStack_4a8 + 0x49) = 0;
        func_0x0d6b13c0(uStack_5c8,2,&lStack_388);
        if ((uStack_4b8 & 1) != 0) {
          func_0x0412a280(puStack_4a8,uStack_4b8 & 0xfffffffffffffffe);
        }
        lVar3 = lStack_388;
        iVar8 = iVar7;
        iVar7 = iVar13;
        lVar19 = lStack_388;
        lVar1 = lStack_380;
        if (lStack_388 != 0) {
          for (; lStack_388 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
            if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                              *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
            }
            lVar19 = lStack_388;
          }
          plVar20 = alStack_378;
          lStack_380 = lVar3;
          goto LAB_0b097a4f;
        }
      }
    }
    iStack_148 = 0;
    if (0 < iVar8) {
      iStack_148 = iVar8;
    }
    iVar8 = uStack_144._4_4_;
    if (iVar7 < uStack_144._4_4_) {
      iVar8 = iVar7;
    }
    uStack_144 = CONCAT44(uStack_144._4_4_,iVar8);
  }
  cVar5 = func_0x04865100(param_3,&UNK_011e0a1b);
  if (cVar5 != '\0') {
    uStack_12c = 1;
  }
  cVar5 = func_0x04865100(param_3,&UNK_014d7645);
  uVar22 = uStack_128;
  uVar4 = uStack_120;
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_014d7645);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_3e8 = 0;
      lStack_3e0 = 0;
      alStack_3d8[0] = 0;
      lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
      if (lVar19 == 0) {
        func_0x0eec74c0(0x98,0);
      }
      uStack_4e8 = 0x99;
      uStack_4e0 = 0x96;
      lStack_4d8 = lVar19;
      func_0x0eee2f00(lVar19,&UNK_011aba4f,0x96);
      *(undefined1 *)(lVar19 + 0x96) = 0;
      func_0x0d6b13c0(uStack_5c8,2,&lStack_3e8,&uStack_4e8);
      if ((uStack_4e8 & 1) != 0) {
        func_0x0412a280(lStack_4d8,uStack_4e8 & 0xfffffffffffffffe);
      }
      lVar3 = lStack_3e8;
      lVar19 = lStack_3e8;
      lVar1 = lStack_3e0;
      if (lStack_3e8 == 0) {
        uVar22 = 0;
        uVar4 = 0xffffffffffffffff;
      }
      else {
        for (; lStack_3e8 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
          if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                            *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
          }
          lVar19 = lStack_3e8;
        }
        plVar20 = alStack_3d8;
        lStack_3e0 = lVar3;
        uVar17 = 0xffffffffffffffff;
        uVar18 = 0;
LAB_0b097d8f:
        func_0x0412a280(lVar19,*plVar20 - lVar19);
        uVar22 = uVar18;
        uVar4 = uVar17;
      }
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      uVar17 = func_0x04863e60(uVar16,0);
      uVar15 = func_0x048648e0(uVar15,&UNK_012ba56c);
      uVar18 = func_0x04863e60(uVar15,0xffffffffffffffff);
      uVar22 = uVar17;
      uVar4 = uVar18;
      if (uVar18 < uVar17) {
        lStack_3c8 = 0;
        lStack_3c0 = 0;
        alStack_3b8[0] = 0;
        puStack_4c0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
        if (puStack_4c0 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x50,0);
        }
        uVar15 = _UNK_014bc062;
        uStack_4d0 = 0x51;
        uStack_4c8 = 0x4b;
        *(ulong *)((long)puStack_4c0 + 0x3b) = CONCAT35(_UNK_014bc05f,_DAT_014bc05a);
        *(undefined8 *)((long)puStack_4c0 + 0x43) = uVar15;
        uVar15 = CONCAT53(_DAT_014bc05a,_UNK_014bc057);
        *(undefined8 *)(puStack_4c0 + 0xc) = _DAT_014bc04f;
        *(undefined8 *)(puStack_4c0 + 0xe) = uVar15;
        uVar15 = _UNK_014bc047;
        *(undefined8 *)(puStack_4c0 + 8) = _DAT_014bc03f;
        *(undefined8 *)(puStack_4c0 + 10) = uVar15;
        uVar15 = _UNK_014bc037;
        *(undefined8 *)(puStack_4c0 + 4) = _DAT_014bc02f;
        *(undefined8 *)(puStack_4c0 + 6) = uVar15;
        uVar11 = _UNK_014bc02b;
        uVar10 = _UNK_014bc027;
        uVar9 = _UNK_014bc023;
        *puStack_4c0 = _DAT_014bc01f;
        puStack_4c0[1] = uVar9;
        puStack_4c0[2] = uVar10;
        puStack_4c0[3] = uVar11;
        *(undefined1 *)((long)puStack_4c0 + 0x4b) = 0;
        func_0x0d6b13c0(uStack_5c8,2,&lStack_3c8,&uStack_4d0);
        if ((uStack_4d0 & 1) != 0) {
          func_0x0412a280(puStack_4c0,uStack_4d0 & 0xfffffffffffffffe);
        }
        lVar3 = lStack_3c8;
        uVar22 = uVar18;
        uVar4 = uVar17;
        lVar19 = lStack_3c8;
        lVar1 = lStack_3c0;
        if (lStack_3c8 != 0) {
          for (; lStack_3c8 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
            if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                              *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
            }
            lVar19 = lStack_3c8;
          }
          plVar20 = alStack_3b8;
          lStack_3c0 = lVar3;
          goto LAB_0b097d8f;
        }
      }
    }
  }
  uStack_120 = uVar4;
  uStack_128 = uVar22;
  cVar5 = func_0x04865100(param_3,&UNK_012b0d1b);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_012b0d1b);
    bStack_5a8 = 0;
    bStack_5a7 = 0;
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_448 = 0;
      lStack_440 = 0;
      alStack_438[0] = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      uStack_5e8 = pbStack_518 + 1;
      if (bVar23) {
        uStack_5e8 = *(byte **)(pbStack_518 + 0x10);
      }
      uStack_5e0 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uStack_5e0 = *(ulong *)(pbStack_518 + 8);
      }
      func_0x0470d9a0(&bStack_2a8,&UNK_01486bdc,0x9a,0xd,&uStack_5e8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_448,&bStack_2a8);
      if ((bStack_2a8 & 1) != 0) {
        func_0x0412a280(uStack_298,CONCAT71(uStack_2a7,bStack_2a8) & 0xfffffffffffffffe);
      }
      lVar3 = lStack_448;
      lVar19 = lStack_448;
      lVar1 = lStack_440;
      if (lStack_448 == 0) {
        iVar8 = 0;
        iVar7 = 0;
        goto LAB_0b098219;
      }
      for (; lStack_448 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
        if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar1 + -8),*(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe
                         );
        }
        lVar19 = lStack_448;
      }
      plVar20 = alStack_438;
      lStack_440 = lVar3;
      iVar8 = 0;
      iVar7 = 0;
LAB_0b09820e:
      func_0x0412a280(lVar19,*plVar20 - lVar19);
    }
    else {
      uVar16 = func_0x048648e0(uVar15,&UNK_011e9523);
      iVar13 = func_0x04863e00(uVar16,0);
      uVar16 = func_0x048648e0(uVar15,&UNK_012ba56c);
      iVar7 = func_0x04863e00(uVar16,0);
      iVar8 = iVar13;
      if (iVar7 < iVar13) {
        lStack_408 = 0;
        lStack_400 = 0;
        lStack_3f8 = 0;
        bVar23 = (*pbStack_518 & 1) != 0;
        uStack_5e8 = pbStack_518 + 1;
        if (bVar23) {
          uStack_5e8 = *(byte **)(pbStack_518 + 0x10);
        }
        uStack_5e0 = (ulong)(*pbStack_518 >> 1);
        if (bVar23) {
          uStack_5e0 = *(ulong *)(pbStack_518 + 8);
        }
        func_0x0470d9a0(&bStack_278,&UNK_012fdd64,0x2f,0xd,&uStack_5e8);
        func_0x0d6b13c0(uStack_5c8,2,&lStack_408,&bStack_278);
        if ((bStack_278 & 1) != 0) {
          func_0x0412a280(uStack_268,CONCAT71(uStack_277,bStack_278) & 0xfffffffffffffffe);
        }
        lVar1 = lStack_408;
        iVar8 = iVar7;
        iVar7 = iVar13;
        lVar19 = lStack_400;
        if (lStack_408 != 0) {
          for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
            if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                              *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
            }
          }
          lStack_400 = lVar1;
          func_0x0412a280(lStack_408,lStack_3f8 - lStack_408);
        }
      }
      uVar16 = func_0x048648e0(uVar15,&UNK_013762e9);
      bStack_5c0 = 0;
      uStack_5bf = 0;
      func_0x04863cb0(&uStack_5e8,uVar16,&bStack_5c0);
      if ((bStack_5a8 & 1) != 0) {
        func_0x0412a280(pbStack_598,
                        CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8))) &
                        0xfffffffffffffffe);
      }
      pbStack_598 = pbStack_5d8;
      bStack_5a8 = (byte)uStack_5e8;
      bStack_5a7 = (byte)((ulong)uStack_5e8 >> 8);
      uStack_5a6 = (undefined2)((ulong)uStack_5e8 >> 0x10);
      uStack_5a4 = uStack_5e8._4_4_;
      uStack_5a0 = (undefined2)uStack_5e0;
      uStack_59e = (undefined2)(uStack_5e0 >> 0x10);
      uStack_59c = (undefined2)(uStack_5e0 >> 0x20);
      uStack_59a = (undefined2)(uStack_5e0 >> 0x30);
      uStack_5e8 = (byte *)((ulong)uStack_5e8 & 0xffffffffffff0000);
      if ((bStack_5c0 & 1) != 0) {
        func_0x0412a280(uStack_5b0,
                        CONCAT44(uStack_5bc,CONCAT22(uStack_5be,CONCAT11(uStack_5bf,bStack_5c0))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_5a8 & 1) == 0) {
        if (bStack_5a8 >> 1 == 0) goto LAB_0b098105;
      }
      else if (CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0))) == 0) {
LAB_0b098105:
        lStack_428 = 0;
        lStack_420 = 0;
        alStack_418[0] = 0;
        bVar23 = (*pbStack_518 & 1) != 0;
        uStack_5e8 = pbStack_518 + 1;
        if (bVar23) {
          uStack_5e8 = *(byte **)(pbStack_518 + 0x10);
        }
        uStack_5e0 = (ulong)(*pbStack_518 >> 1);
        if (bVar23) {
          uStack_5e0 = *(ulong *)(pbStack_518 + 8);
        }
        func_0x0470d9a0(&bStack_290,&UNK_0124b99c,0x41,0xd,&uStack_5e8);
        func_0x0d6b13c0(uStack_5c8,2,&lStack_428,&bStack_290);
        if ((bStack_290 & 1) != 0) {
          func_0x0412a280(uStack_280,CONCAT71(uStack_28f,bStack_290) & 0xfffffffffffffffe);
        }
        lVar3 = lStack_428;
        lVar19 = lStack_428;
        lVar1 = lStack_420;
        if (lStack_428 != 0) {
          for (; lStack_428 = lVar19, lVar3 != lVar1; lVar1 = lVar1 + -0x20) {
            if ((*(byte *)(lVar1 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar1 + -8),
                              *(ulong *)(lVar1 + -0x18) & 0xfffffffffffffffe);
            }
            lVar19 = lStack_428;
          }
          plVar20 = alStack_418;
          lStack_420 = lVar3;
          goto LAB_0b09820e;
        }
      }
    }
LAB_0b098219:
    iVar13 = 0;
    if (0 < iVar8) {
      iVar13 = iVar8;
    }
    uStack_118 = CONCAT44(iVar7,iVar13);
    if ((uStack_60 & 1) == 0) {
      if ((bStack_5a8 & 1) == 0) {
        uStack_50 = SUB85(pbStack_598,0);
        uStack_4b = (undefined3)((ulong)pbStack_598 >> 0x28);
        uStack_60 = CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8)));
        uStack_58 = CONCAT44(CONCAT22(uStack_59a,uStack_59c),CONCAT22(uStack_59e,uStack_5a0));
      }
      else {
        func_0x04885070(&uStack_60,pbStack_598,
                        CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0))));
      }
    }
    else {
      bVar23 = (bStack_5a8 & 1) != 0;
      pbVar21 = &bStack_5a7;
      if (bVar23) {
        pbVar21 = pbStack_598;
      }
      uVar22 = (ulong)(bStack_5a8 >> 1);
      if (bVar23) {
        uVar22 = CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0)));
      }
      func_0x04885120(&uStack_60,pbVar21,uVar22);
    }
    uVar15 = func_0x048648e0(uVar15,&UNK_011a108e);
    uStack_48 = func_0x04863e00(uVar15,100);
    if ((bStack_5a8 & 1) != 0) {
      func_0x0412a280(pbStack_598,
                      CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8))) &
                      0xfffffffffffffffe);
    }
  }
  cVar5 = func_0x04865100(param_3,&UNK_014bc06b);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_014bc06b);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 == '\0') {
      lStack_468 = 0;
      lStack_460 = 0;
      lStack_458 = 0;
      bVar23 = (*pbStack_518 & 1) != 0;
      pbVar21 = pbStack_518 + 1;
      if (bVar23) {
        pbVar21 = *(byte **)(pbStack_518 + 0x10);
      }
      uVar22 = (ulong)(*pbStack_518 >> 1);
      if (bVar23) {
        uVar22 = *(ulong *)(pbStack_518 + 8);
      }
      bStack_5a8 = (byte)pbVar21;
      bStack_5a7 = (byte)((ulong)pbVar21 >> 8);
      uStack_5a6 = (undefined2)((ulong)pbVar21 >> 0x10);
      uStack_5a4 = (undefined4)((ulong)pbVar21 >> 0x20);
      uStack_5a0 = (undefined2)uVar22;
      uStack_59e = (undefined2)(uVar22 >> 0x10);
      uStack_59c = (undefined2)(uVar22 >> 0x20);
      uStack_59a = (undefined2)(uVar22 >> 0x30);
      func_0x0470d9a0(&bStack_2c0,&UNK_014a2188,0x9e,0xd,&bStack_5a8);
      func_0x0d6b13c0(uStack_5c8,2,&lStack_468,&bStack_2c0);
      if ((bStack_2c0 & 1) != 0) {
        func_0x0412a280(uStack_2b0,CONCAT71(uStack_2bf,bStack_2c0) & 0xfffffffffffffffe);
      }
      lVar1 = lStack_468;
      lVar19 = lStack_460;
      if (lStack_468 != 0) {
        for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
          if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                            *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
          }
        }
        lStack_460 = lVar1;
        func_0x0412a280(lStack_468,lStack_458 - lStack_468);
      }
      bStack_5a8 = 0;
      bStack_5a7 = 0;
      if ((bStack_e0 & 1) == 0) {
        pbStack_d0 = pbStack_598;
        bStack_e0 = 0;
        bStack_df = 0;
        uStack_de = uStack_5a6;
        uStack_dc = uStack_5a4;
        uStack_d8 = uStack_5a0;
        uStack_d6 = uStack_59e;
        uStack_d4 = uStack_59c;
        uStack_d2 = uStack_59a;
        goto LAB_0b098530;
      }
      func_0x04885120(&bStack_e0,&bStack_5a7,0);
    }
    else {
      uVar15 = func_0x048648e0(uVar15,&UNK_01410553);
      uStack_5e8 = (byte *)((ulong)uStack_5e8 & 0xffffffffffff0000);
      func_0x04863cb0(&bStack_5a8,uVar15,&uStack_5e8);
      if (((ulong)uStack_5e8 & 1) != 0) {
        func_0x0412a280(pbStack_5d8,(ulong)uStack_5e8 & 0xfffffffffffffffe);
      }
      if ((bStack_e0 & 1) == 0) {
        if ((bStack_5a8 & 1) == 0) {
          pbStack_d0 = pbStack_598;
          bStack_e0 = bStack_5a8;
          bStack_df = bStack_5a7;
          uStack_de = uStack_5a6;
          uStack_dc = uStack_5a4;
          uStack_d8 = uStack_5a0;
          uStack_d6 = uStack_59e;
          uStack_d4 = uStack_59c;
          uStack_d2 = uStack_59a;
        }
        else {
          func_0x04885070(&bStack_e0,pbStack_598,
                          CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0))))
          ;
        }
      }
      else {
        bVar23 = (bStack_5a8 & 1) != 0;
        pbVar21 = &bStack_5a7;
        if (bVar23) {
          pbVar21 = pbStack_598;
        }
        uVar22 = (ulong)(bStack_5a8 >> 1);
        if (bVar23) {
          uVar22 = CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0)));
        }
        func_0x04885120(&bStack_e0,pbVar21,uVar22);
      }
    }
    if ((bStack_5a8 & 1) != 0) {
      func_0x0412a280(pbStack_598,
                      CONCAT44(uStack_5a4,CONCAT22(uStack_5a6,CONCAT11(bStack_5a7,bStack_5a8))) &
                      0xfffffffffffffffe);
    }
  }
LAB_0b098530:
  cVar5 = func_0x04865100(param_3,&UNK_01298531);
  if (cVar5 != '\0') {
    uStack_44 = 1;
  }
  cVar5 = func_0x04865100(param_3,&UNK_01454b59);
  if (cVar5 != '\0') {
    uVar15 = func_0x048648e0(param_3,&UNK_01454b59);
    cVar5 = func_0x04864290(uVar15);
    if (cVar5 != '\0') {
      uVar16 = func_0x048648e0(uVar15,&UNK_014525f3);
      cVar5 = func_0x04864260(uVar16);
      if (cVar5 != '\0') {
        lStack_488 = 0;
        lStack_480 = 0;
        lStack_478 = 0;
        puStack_4f0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puStack_4f0 == (undefined4 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        uVar2 = _UNK_01265399;
        uStack_500 = 0x49;
        uStack_4f8 = 0x43;
        *(undefined8 *)(puStack_4f0 + 0xc) = _DAT_01265391;
        *(undefined8 *)(puStack_4f0 + 0xe) = uVar2;
        uVar2 = _UNK_01265389;
        *(undefined8 *)(puStack_4f0 + 8) = _DAT_01265381;
        *(undefined8 *)(puStack_4f0 + 10) = uVar2;
        uVar2 = _UNK_01265379;
        *(undefined8 *)(puStack_4f0 + 4) = _DAT_01265371;
        *(undefined8 *)(puStack_4f0 + 6) = uVar2;
        uVar11 = _UNK_0126536d;
        uVar10 = _UNK_01265369;
        uVar9 = _UNK_01265365;
        *puStack_4f0 = _DAT_01265361;
        puStack_4f0[1] = uVar9;
        puStack_4f0[2] = uVar10;
        puStack_4f0[3] = uVar11;
        *(undefined4 *)((long)puStack_4f0 + 0x3f) = 0x7265746c;
        *(undefined1 *)((long)puStack_4f0 + 0x43) = 0;
        func_0x0d6b13c0(uStack_5c8,2,&lStack_488,&uStack_500);
        if ((uStack_500 & 1) != 0) {
          func_0x0412a280(puStack_4f0,uStack_500 & 0xfffffffffffffffe);
        }
        lVar1 = lStack_488;
        lVar19 = lStack_480;
        if (lStack_488 != 0) {
          for (; lVar1 != lVar19; lVar19 = lVar19 + -0x20) {
            if ((*(byte *)(lVar19 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar19 + -8),
                              *(ulong *)(lVar19 + -0x18) & 0xfffffffffffffffe);
            }
          }
          lStack_480 = lVar1;
          func_0x0412a280(lStack_488,lStack_478 - lStack_488);
        }
      }
      uVar9 = func_0x04863e30(uVar16,0);
      uVar15 = func_0x048648e0(uVar15,&UNK_0143b924);
      uVar10 = func_0x04863e30(uVar15,10);
      uStack_134 = CONCAT44(uVar10,uVar9);
    }
  }
  func_0x0b0bffd0(param_1 + 0x14,auStack_1a8);
  func_0x0b0c04b0(auStack_1a8);
  return;
}



/* ---- referenced strings ----
 * 0x1265361  Missing "distance" parameter for minecraft:player_in_village_filter
 * 0x1265371  e" parameter for minecraft:player_in_village_filter
 * 0x1265381   minecraft:player_in_village_filter
 * 0x1265391  r_in_village_filter
 * 0x12984e7  Spawn rules for minecraft:distance_filter specified a min distance > max.
 * 0x12984f7  minecraft:distance_filter specified a min distance > max.
 * 0x1298507  ce_filter specified a min distance > max.
 * 0x1298517  ied a min distance > max.
 * 0x1298520   distance > max.
 * 0x1333aee  Spawn rules for minecraft:distance_filter specified a min height > max.
 * 0x1333afe  minecraft:distance_filter specified a min height > max.
 * 0x1333b0e  ce_filter specified a min height > max.
 * 0x1333b1e  ied a min height > max.
 * 0x14bc01f  Spawn rules for minecraft:world_age_filter specified a min world age > max.
 * 0x14bc02f  minecraft:world_age_filter specified a min world age > max.
 * 0x14bc03f  age_filter specified a min world age > max.
 * 0x14bc04f  fied a min world age > max.
 * 0x14bc05a  world age > max.
 */

/* ---- assembly ---- */
/* 0b095f80 */  PUSH RBP
/* 0b095f81 */  PUSH R15
/* 0b095f83 */  PUSH R14
/* 0b095f85 */  PUSH R13
/* 0b095f87 */  PUSH R12
/* 0b095f89 */  PUSH RBX
/* 0b095f8a */  SUB RSP,0x5c8
/* 0b095f91 */  MOV qword ptr [RSP + 0x30],R8
/* 0b095f96 */  MOV qword ptr [RSP + 0xe0],RCX
/* 0b095f9e */  MOV RBP,RSI
/* 0b095fa1 */  MOV RBX,RDI
/* 0b095fa4 */  MOV dword ptr [RDI],0x64
/* 0b095faa */  LEA RAX,[RDI + 0x8]
/* 0b095fae */  MOV qword ptr [RSP + 0x330],RAX
/* 0b095fb6 */  MOV dword ptr [RDI + 0x10],0x0
/* 0b095fbd */  XORPS XMM0,XMM0
/* 0b095fc0 */  MOVUPS xmmword ptr [RDI + 0x18],XMM0
/* 0b095fc4 */  MOVUPS xmmword ptr [RDI + 0x28],XMM0
/* 0b095fc8 */  MOVUPS xmmword ptr [RDI + 0x38],XMM0
/* 0b095fcc */  LEA RAX,[0xef516f8]
/* 0b095fd3 */  MOV qword ptr [RDI + 0x8],RAX
/* 0b095fd7 */  LEA RAX,[RDI + 0x50]
/* 0b095fdb */  MOV qword ptr [RSP],RAX
/* 0b095fdf */  MOV RAX,0xf00000000
/* 0b095fe9 */  MOV qword ptr [RDI + 0x80],RAX
/* 0b095ff0 */  MOVSD XMM1,qword ptr [0x014e9660]
/* 0b095ff8 */  MOVSD qword ptr [RDI + 0x88],XMM1
/* 0b096000 */  MOV byte ptr [RDI + 0x90],0x0
/* 0b096007 */  MOVAPS XMM2,xmmword ptr [0x014eb030]
/* 0b09600e */  MOVUPS xmmword ptr [RDI + 0x94],XMM2
/* 0b096015 */  MOV dword ptr [RDI + 0xbc],0x1000000
/* 0b09601f */  MOV byte ptr [RDI + 0xc0],0x0
/* 0b096026 */  MOV qword ptr [RDI + 0xd0],0x0
/* 0b096031 */  MOV qword ptr [RDI + 0xc4],0x0
/* 0b09603c */  MOV byte ptr [RDI + 0xcc],0x0
/* 0b096043 */  MOV qword ptr [RDI + 0xd8],-0x1
/* 0b09604e */  MOVAPS xmmword ptr [RDI + 0xe0],XMM0
/* 0b096055 */  MOVAPS xmmword ptr [RDI + 0xf0],XMM0
/* 0b09605c */  MOVAPS xmmword ptr [RDI + 0x100],XMM0
/* 0b096063 */  MOVAPS xmmword ptr [RDI + 0x110],XMM0
/* 0b09606a */  MOVAPS xmmword ptr [RDI + 0x120],XMM0
/* 0b096071 */  MOVAPS xmmword ptr [RDI + 0x130],XMM0
/* 0b096078 */  MOVAPS xmmword ptr [RDI + 0x140],XMM0
/* 0b09607f */  MOVAPS xmmword ptr [RDI + 0x150],XMM0
/* 0b096086 */  MOVAPS xmmword ptr [RDI + 0x160],XMM0
/* 0b09608d */  MOVUPS xmmword ptr [RDI + 0x16c],XMM0
/* 0b096094 */  MOVAPS xmmword ptr [RDI + 0x1a0],XMM0
/* 0b09609b */  MOVAPS xmmword ptr [RDI + 0x190],XMM0
/* 0b0960a2 */  MOVAPS xmmword ptr [RDI + 0x180],XMM0
/* 0b0960a9 */  MOV qword ptr [RDI + 0x1ad],0x0
/* 0b0960b4 */  MOVAPS XMM3,xmmword ptr [0x014e7470]
/* 0b0960bb */  MOVUPS xmmword ptr [RDI + 0xa4],XMM3
/* 0b0960c2 */  MOV RCX,0x8000000080
/* 0b0960cc */  MOV qword ptr [RDI + 0xb4],RCX
/* 0b0960d3 */  MOV qword ptr [RDI + 0x70],0x0
/* 0b0960db */  MOV qword ptr [RSP + 0x480],RAX
/* 0b0960e3 */  MOVSD qword ptr [RSP + 0x488],XMM1
/* 0b0960ec */  MOV byte ptr [RSP + 0x490],0x0
/* 0b0960f4 */  MOVUPS xmmword ptr [RSP + 0x494],XMM2
/* 0b0960fc */  MOV dword ptr [RSP + 0x4bc],0x1000000
/* 0b096107 */  MOV byte ptr [RSP + 0x4c0],0x0
/* 0b09610f */  MOV qword ptr [RSP + 0x4d0],0x0
/* 0b09611b */  MOV qword ptr [RSP + 0x4c4],0x0
/* 0b096127 */  MOV byte ptr [RSP + 0x4cc],0x0
/* 0b09612f */  MOV qword ptr [RSP + 0x4d8],-0x1
/* 0b09613b */  MOVAPS xmmword ptr [RSP + 0x4e0],XMM0
/* 0b096143 */  MOVAPS xmmword ptr [RSP + 0x4f0],XMM0
/* 0b09614b */  MOVAPS xmmword ptr [RSP + 0x500],XMM0
/* 0b096153 */  MOVAPS xmmword ptr [RSP + 0x510],XMM0
/* 0b09615b */  MOVAPS xmmword ptr [RSP + 0x520],XMM0
/* 0b096163 */  MOVAPS xmmword ptr [RSP + 0x530],XMM0
/* 0b09616b */  MOVAPS xmmword ptr [RSP + 0x540],XMM0
/* 0b096173 */  MOVAPS xmmword ptr [RSP + 0x550],XMM0
/* 0b09617b */  MOVAPS xmmword ptr [RSP + 0x560],XMM0
/* 0b096183 */  MOVUPS xmmword ptr [RSP + 0x56c],XMM0
/* 0b09618b */  MOVAPS xmmword ptr [RSP + 0x5a0],XMM0
/* 0b096193 */  MOVAPS xmmword ptr [RSP + 0x590],XMM0
/* 0b09619b */  MOVAPS xmmword ptr [RSP + 0x580],XMM0
/* 0b0961a3 */  MOV qword ptr [RSP + 0x5ad],0x0
/* 0b0961af */  MOVUPS xmmword ptr [RSP + 0x4a4],XMM3
/* 0b0961b7 */  MOV qword ptr [RSP + 0x4b4],RCX
/* 0b0961bf */  MOV qword ptr [RSP + 0x470],0x0
/* 0b0961cb */  LEA RSI,[0x139ee34]
/* 0b0961d2 */  MOV qword ptr [RSP + 0x8],RDX
/* 0b0961d7 */  MOV RDI,RDX
/* 0b0961da */  CALL 0x04865100
/* 0b0961df */  TEST AL,AL
/* 0b0961e1 */  JZ 0x0b096373
/* 0b0961e7 */  LEA RSI,[0x139ee34]
/* 0b0961ee */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0961f3 */  CALL 0x048648e0
/* 0b0961f8 */  MOV R14,RAX
/* 0b0961fb */  MOV RDI,RAX
/* 0b0961fe */  CALL 0x04864290
/* 0b096203 */  TEST AL,AL
/* 0b096205 */  JZ 0x0b09626b
/* 0b096207 */  LEA RSI,[0x13747db]
/* 0b09620e */  MOV RDI,R14
/* 0b096211 */  CALL 0x048648e0
/* 0b096216 */  MOV RDI,RAX
/* 0b096219 */  MOV ESI,0x64
/* 0b09621e */  CALL 0x04863e00
/* 0b096223 */  XOR ECX,ECX
/* 0b096225 */  TEST EAX,EAX
/* 0b096227 */  CMOVG ECX,EAX
/* 0b09622a */  MOV dword ptr [RBX],ECX
/* 0b09622c */  LEA RSI,[0x14bbfed]
/* 0b096233 */  MOV RDI,R14
/* 0b096236 */  CALL 0x04865100
/* 0b09623b */  TEST AL,AL
/* 0b09623d */  JZ 0x0b096373
/* 0b096243 */  LEA RSI,[0x14bbfed]
/* 0b09624a */  MOV RDI,R14
/* 0b09624d */  CALL 0x048648e0
/* 0b096252 */  MOV RDI,RAX
/* 0b096255 */  MOV ESI,0x5
/* 0b09625a */  CALL 0x04863e00
/* 0b09625f */  MOV dword ptr [RSP + 0x49c],EAX
/* 0b096266 */  JMP 0x0b096373
/* 0b09626b */  XORPS XMM0,XMM0
/* 0b09626e */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0b096276 */  MOV qword ptr [RSP + 0x320],0x0
/* 0b096282 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b09628a */  MOVZX EAX,byte ptr [RSI]
/* 0b09628d */  LEA RCX,[RSI + 0x1]
/* 0b096291 */  MOV EDX,EAX
/* 0b096293 */  SHR EDX,0x1
/* 0b096295 */  TEST AL,0x1
/* 0b096297 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b09629c */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b0962a1 */  MOV qword ptr [RSP + 0x50],RCX
/* 0b0962a6 */  MOV qword ptr [RSP + 0x58],RDX
/* 0b0962ab */  LEA RSI,[0x1454a28]
/* 0b0962b2 */  LEA RDI,[RSP + 0x3f8]
/* 0b0962ba */  LEA R8,[RSP + 0x50]
/* 0b0962bf */  MOV EDX,0x94
/* 0b0962c4 */  MOV ECX,0xd
/* 0b0962c9 */  CALL 0x0470d9a0
/* 0b0962ce */  LEA RDX,[RSP + 0x310]
/* 0b0962d6 */  LEA RCX,[RSP + 0x3f8]
/* 0b0962de */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b0962e3 */  MOV ESI,0x2
/* 0b0962e8 */  CALL 0x0d6b13c0
/* 0b0962ed */  TEST byte ptr [RSP + 0x3f8],0x1
/* 0b0962f5 */  JZ 0x0b096310
/* 0b0962f7 */  MOV RSI,qword ptr [RSP + 0x3f8]
/* 0b0962ff */  MOV RDI,qword ptr [RSP + 0x408]
/* 0b096307 */  AND RSI,-0x2
/* 0b09630b */  CALL 0x0412a280
/* 0b096310 */  MOV RBX,qword ptr [RSP + 0x310]
/* 0b096318 */  TEST RBX,RBX
/* 0b09631b */  JZ 0x0b096373
/* 0b09631d */  MOV R14,qword ptr [RSP + 0x318]
/* 0b096325 */  MOV RDI,RBX
/* 0b096328 */  CMP RBX,R14
/* 0b09632b */  JNZ 0x0b096339
/* 0b09632d */  JMP 0x0b09635b
/* 0b096330 */  ADD R14,-0x20
/* 0b096334 */  CMP R14,RBX
/* 0b096337 */  JZ 0x0b096353
/* 0b096339 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b09633e */  JZ 0x0b096330
/* 0b096340 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b096344 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b096348 */  AND RSI,-0x2
/* 0b09634c */  CALL 0x0412a280
/* 0b096351 */  JMP 0x0b096330
/* 0b096353 */  MOV RDI,qword ptr [RSP + 0x310]
/* 0b09635b */  MOV qword ptr [RSP + 0x318],RBX
/* 0b096363 */  MOV RSI,qword ptr [RSP + 0x320]
/* 0b09636b */  SUB RSI,RDI
/* 0b09636e */  CALL 0x0412a280
/* 0b096373 */  LEA RSI,[0x1215a8f]
/* 0b09637a */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b09637f */  CALL 0x04865100
/* 0b096384 */  TEST AL,AL
/* 0b096386 */  JZ 0x0b096516
/* 0b09638c */  LEA RSI,[0x1215a8f]
/* 0b096393 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096398 */  CALL 0x048648e0
/* 0b09639d */  MOV R14,RAX
/* 0b0963a0 */  MOV RDI,RAX
/* 0b0963a3 */  CALL 0x04864290
/* 0b0963a8 */  TEST AL,AL
/* 0b0963aa */  JZ 0x0b0963eb
/* 0b0963ac */  LEA RSI,[0x12302ed]
/* 0b0963b3 */  MOV RDI,R14
/* 0b0963b6 */  CALL 0x048648e0
/* 0b0963bb */  MOV RDI,RAX
/* 0b0963be */  MOV ESI,0xffffffff
/* 0b0963c3 */  CALL 0x04863e00
/* 0b0963c8 */  MOV EBX,EAX
/* 0b0963ca */  LEA RSI,[0x1454932]
/* 0b0963d1 */  MOV RDI,R14
/* 0b0963d4 */  CALL 0x048648e0
/* 0b0963d9 */  MOV RDI,RAX
/* 0b0963dc */  MOV ESI,0xffffffff
/* 0b0963e1 */  CALL 0x04863e00
/* 0b0963e6 */  JMP 0x0b096508
/* 0b0963eb */  XORPS XMM0,XMM0
/* 0b0963ee */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM0
/* 0b0963f6 */  MOV qword ptr [RSP + 0x300],0x0
/* 0b096402 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b09640a */  MOVZX EAX,byte ptr [RSI]
/* 0b09640d */  LEA RCX,[RSI + 0x1]
/* 0b096411 */  MOV EDX,EAX
/* 0b096413 */  SHR EDX,0x1
/* 0b096415 */  TEST AL,0x1
/* 0b096417 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b09641c */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b096421 */  MOV qword ptr [RSP + 0x50],RCX
/* 0b096426 */  MOV qword ptr [RSP + 0x58],RDX
/* 0b09642b */  LEA RSI,[0x1454abd]
/* 0b096432 */  LEA RDI,[RSP + 0x3e0]
/* 0b09643a */  LEA R8,[RSP + 0x50]
/* 0b09643f */  MOV EDX,0x9b
/* 0b096444 */  MOV ECX,0xd
/* 0b096449 */  CALL 0x0470d9a0
/* 0b09644e */  LEA RDX,[RSP + 0x2f0]
/* 0b096456 */  LEA RCX,[RSP + 0x3e0]
/* 0b09645e */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b096463 */  MOV ESI,0x2
/* 0b096468 */  CALL 0x0d6b13c0
/* 0b09646d */  TEST byte ptr [RSP + 0x3e0],0x1
/* 0b096475 */  JZ 0x0b096490
/* 0b096477 */  MOV RSI,qword ptr [RSP + 0x3e0]
/* 0b09647f */  MOV RDI,qword ptr [RSP + 0x3f0]
/* 0b096487 */  AND RSI,-0x2
/* 0b09648b */  CALL 0x0412a280
/* 0b096490 */  MOV R14,qword ptr [RSP + 0x2f0]
/* 0b096498 */  MOV EBX,0xffffffff
/* 0b09649d */  TEST R14,R14
/* 0b0964a0 */  JZ 0x0b096503
/* 0b0964a2 */  MOV R15,qword ptr [RSP + 0x2f8]
/* 0b0964aa */  MOV RDI,R14
/* 0b0964ad */  CMP R14,R15
/* 0b0964b0 */  JNZ 0x0b0964c9
/* 0b0964b2 */  JMP 0x0b0964eb
/* 0b0964c0 */  ADD R15,-0x20
/* 0b0964c4 */  CMP R15,R14
/* 0b0964c7 */  JZ 0x0b0964e3
/* 0b0964c9 */  TEST byte ptr [R15 + -0x18],0x1
/* 0b0964ce */  JZ 0x0b0964c0
/* 0b0964d0 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0b0964d4 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0b0964d8 */  AND RSI,-0x2
/* 0b0964dc */  CALL 0x0412a280
/* 0b0964e1 */  JMP 0x0b0964c0
/* 0b0964e3 */  MOV RDI,qword ptr [RSP + 0x2f0]
/* 0b0964eb */  MOV qword ptr [RSP + 0x2f8],R14
/* 0b0964f3 */  MOV RSI,qword ptr [RSP + 0x300]
/* 0b0964fb */  SUB RSI,RDI
/* 0b0964fe */  CALL 0x0412a280
/* 0b096503 */  MOV EAX,0xffffffff
/* 0b096508 */  MOV dword ptr [RSP + 0x4a0],EBX
/* 0b09650f */  MOV dword ptr [RSP + 0x4a4],EAX
/* 0b096516 */  LEA RSI,[0x11e09e3]
/* 0b09651d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096522 */  CALL 0x04865100
/* 0b096527 */  TEST AL,AL
/* 0b096529 */  JZ 0x0b096579
/* 0b09652b */  LEA RSI,[0x11e09e3]
/* 0b096532 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096537 */  CALL 0x048648e0
/* 0b09653c */  LEA RDI,[RSP + 0x440]
/* 0b096544 */  MOV RSI,RAX
/* 0b096547 */  CALL 0x04863480
/* 0b09654c */  MOV RDI,RBP
/* 0b09654f */  CALL 0x0d8a1d70
/* 0b096554 */  LEA RDX,[RSP + 0x530]
/* 0b09655c */  MOVSX ESI,AX
/* 0b09655f */  LEA RDI,[RSP + 0x440]
/* 0b096567 */  CALL 0x0b6c3f10
/* 0b09656c */  LEA RDI,[RSP + 0x440]
/* 0b096574 */  CALL 0x04863610
/* 0b096579 */  LEA RSI,[0x14bbff4]
/* 0b096580 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096585 */  CALL 0x04865100
/* 0b09658a */  TEST AL,AL
/* 0b09658c */  JZ 0x0b0965dc
/* 0b09658e */  LEA RSI,[0x14bbff4]
/* 0b096595 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b09659a */  CALL 0x048648e0
/* 0b09659f */  LEA RDI,[RSP + 0x430]
/* 0b0965a7 */  MOV RSI,RAX
/* 0b0965aa */  CALL 0x04863480
/* 0b0965af */  MOV RDI,RBP
/* 0b0965b2 */  CALL 0x0d8a1d70
/* 0b0965b7 */  LEA RDX,[RSP + 0x560]
/* 0b0965bf */  MOVSX ESI,AX
/* 0b0965c2 */  LEA RDI,[RSP + 0x430]
/* 0b0965ca */  CALL 0x0b6c3f10
/* 0b0965cf */  LEA RDI,[RSP + 0x430]
/* 0b0965d7 */  CALL 0x04863610
/* 0b0965dc */  LEA RSI,[0x1215aa7]
/* 0b0965e3 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0965e8 */  CALL 0x04865100
/* 0b0965ed */  TEST AL,AL
/* 0b0965ef */  JZ 0x0b096684
/* 0b0965f5 */  LEA RSI,[0x1215aa7]
/* 0b0965fc */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096601 */  CALL 0x048648e0
/* 0b096606 */  MOV RBX,RAX
/* 0b096609 */  MOV RDI,RAX
/* 0b09660c */  CALL 0x04864290
/* 0b096611 */  TEST AL,AL
/* 0b096613 */  JZ 0x0b096684
/* 0b096615 */  LEA RSI,[0x1222d0e]
/* 0b09661c */  MOV RDI,RBX
/* 0b09661f */  CALL 0x048648e0
/* 0b096624 */  LEA RDI,[RSP + 0x420]
/* 0b09662c */  MOV RSI,RAX
/* 0b09662f */  CALL 0x04863480
/* 0b096634 */  MOV RDI,RBP
/* 0b096637 */  CALL 0x0d8a1d70
/* 0b09663c */  LEA RDX,[RSP + 0x548]
/* 0b096644 */  MOVSX ESI,AX
/* 0b096647 */  LEA RDI,[RSP + 0x420]
/* 0b09664f */  CALL 0x0b6c3f10
/* 0b096654 */  LEA RDI,[RSP + 0x420]
/* 0b09665c */  CALL 0x04863610
/* 0b096661 */  LEA RSI,[0x14525f3]
/* 0b096668 */  MOV RDI,RBX
/* 0b09666b */  CALL 0x048648e0
/* 0b096670 */  MOV RDI,RAX
/* 0b096673 */  MOV ESI,0x1
/* 0b096678 */  CALL 0x04863e00
/* 0b09667d */  MOV dword ptr [RSP + 0x578],EAX
/* 0b096684 */  LEA RSI,[0x13ecc66]
/* 0b09668b */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096690 */  CALL 0x04865100
/* 0b096695 */  TEST AL,AL
/* 0b096697 */  JZ 0x0b096c49
/* 0b09669d */  LEA RSI,[0x13ecc66]
/* 0b0966a4 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0966a9 */  CALL 0x048648e0
/* 0b0966ae */  MOV RBX,RAX
/* 0b0966b1 */  MOV RDI,RAX
/* 0b0966b4 */  CALL 0x04864270
/* 0b0966b9 */  TEST AL,AL
/* 0b0966bb */  JZ 0x0b0969c2
/* 0b0966c1 */  LEA RDI,[RSP + 0xe8]
/* 0b0966c9 */  MOV RSI,RBX
/* 0b0966cc */  CALL 0x04865530
/* 0b0966d1 */  LEA RDI,[RSP + 0x410]
/* 0b0966d9 */  MOV RSI,RBX
/* 0b0966dc */  CALL 0x048655b0
/* 0b0966e1 */  LEA RBP,[RSP + 0x78]
/* 0b0966e6 */  LEA RBX,[RSP + 0xe8]
/* 0b0966ee */  JMP 0x0b0966f8
/* 0b0966f0 */  MOV RDI,RBX
/* 0b0966f3 */  CALL 0x04862ba0
/* 0b0966f8 */  MOV RDI,RBX
/* 0b0966fb */  LEA RSI,[RSP + 0x410]
/* 0b096703 */  CALL 0x04862c80
/* 0b096708 */  TEST AL,AL
/* 0b09670a */  JNZ 0x0b096af9
/* 0b096710 */  MOV RDI,RBX
/* 0b096713 */  CALL 0x04862b80
/* 0b096718 */  MOV R13,RAX
/* 0b09671b */  MOV RDI,RAX
/* 0b09671e */  LEA RSI,[0x1383bd8]
/* 0b096725 */  CALL 0x048648e0
/* 0b09672a */  MOV RDI,RAX
/* 0b09672d */  MOV ESI,0x1
/* 0b096732 */  CALL 0x04863e00
/* 0b096737 */  MOV R12D,EAX
/* 0b09673a */  MOV RDI,R13
/* 0b09673d */  LEA RSI,[0x12fdd1d]
/* 0b096744 */  CALL 0x048648e0
/* 0b096749 */  MOV RDI,RAX
/* 0b09674c */  MOV ESI,0x1
/* 0b096751 */  CALL 0x04863e00
/* 0b096756 */  MOV R14D,EAX
/* 0b096759 */  MOV RDI,R13
/* 0b09675c */  LEA RSI,[0x1405daa]
/* 0b096763 */  CALL 0x048648e0
/* 0b096768 */  MOV word ptr [RSP + 0x50],0x0
/* 0b09676f */  LEA RDI,[RSP + 0x10]
/* 0b096774 */  MOV RSI,RAX
/* 0b096777 */  LEA RDX,[RSP + 0x50]
/* 0b09677c */  CALL 0x04863cb0
/* 0b096781 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096786 */  JZ 0x0b09679b
/* 0b096788 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b09678d */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096792 */  AND RSI,-0x2
/* 0b096796 */  CALL 0x0412a280
/* 0b09679b */  MOV RDI,R13
/* 0b09679e */  LEA RSI,[0x13184a4]
/* 0b0967a5 */  CALL 0x048648e0
/* 0b0967aa */  MOV RDI,RAX
/* 0b0967ad */  XOR ESI,ESI
/* 0b0967af */  CALL 0x04863e00
/* 0b0967b4 */  MOV R15D,EAX
/* 0b0967b7 */  MOV RDI,R13
/* 0b0967ba */  LEA RSI,[0x1410553]
/* 0b0967c1 */  CALL 0x048648e0
/* 0b0967c6 */  MOV word ptr [RSP + 0x50],0x0
/* 0b0967cd */  LEA RDI,[RSP + 0x38]
/* 0b0967d2 */  MOV RSI,RAX
/* 0b0967d5 */  LEA RDX,[RSP + 0x50]
/* 0b0967da */  CALL 0x04863cb0
/* 0b0967df */  TEST byte ptr [RSP + 0x50],0x1
/* 0b0967e4 */  JZ 0x0b0967f9
/* 0b0967e6 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b0967eb */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b0967f0 */  AND RSI,-0x2
/* 0b0967f4 */  CALL 0x0412a280
/* 0b0967f9 */  MOV RDI,R13
/* 0b0967fc */  LEA RSI,[0x12fdd26]
/* 0b096803 */  CALL 0x048648e0
/* 0b096808 */  MOV RDI,RAX
/* 0b09680b */  XOR ESI,ESI
/* 0b09680d */  CALL 0x04863e00
/* 0b096812 */  MOV dword ptr [RSP + 0x50],R12D
/* 0b096817 */  MOV dword ptr [RSP + 0x54],R14D
/* 0b09681c */  MOV dword ptr [RSP + 0x58],EAX
/* 0b096820 */  MOV dword ptr [RSP + 0x5c],R15D
/* 0b096825 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b09682a */  JNZ 0x0b096850
/* 0b09682c */  MOV RAX,qword ptr [RSP + 0x20]
/* 0b096831 */  LEA RCX,[RSP + 0x60]
/* 0b096836 */  MOV qword ptr [RCX + 0x10],RAX
/* 0b09683a */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0b09683f */  MOVUPS xmmword ptr [RCX],XMM0
/* 0b096842 */  JMP 0x0b096864
/* 0b096850 */  MOV RDX,qword ptr [RSP + 0x18]
/* 0b096855 */  MOV RSI,qword ptr [RSP + 0x20]
/* 0b09685a */  LEA RDI,[RSP + 0x60]
/* 0b09685f */  CALL 0x0412e5e0
/* 0b096864 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b096869 */  JNZ 0x0b096880
/* 0b09686b */  MOV RAX,qword ptr [RSP + 0x48]
/* 0b096870 */  MOV qword ptr [RBP + 0x10],RAX
/* 0b096874 */  MOVUPS XMM0,xmmword ptr [RSP + 0x38]
/* 0b096879 */  MOVUPS xmmword ptr [RBP],XMM0
/* 0b09687d */  JMP 0x0b096892
/* 0b096880 */  MOV RDX,qword ptr [RSP + 0x40]
/* 0b096885 */  MOV RSI,qword ptr [RSP + 0x48]
/* 0b09688a */  MOV RDI,RBP
/* 0b09688d */  CALL 0x0412e5e0
/* 0b096892 */  MOV RAX,qword ptr [RSP + 0x4f0]
/* 0b09689a */  CMP RAX,qword ptr [RSP + 0x4f8]
/* 0b0968a2 */  JNC 0x0b096940
/* 0b0968a8 */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0b0968ad */  MOVUPS xmmword ptr [RAX],XMM0
/* 0b0968b0 */  LEA RDX,[RSP + 0x60]
/* 0b0968b5 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0b0968b9 */  MOV qword ptr [RAX + 0x20],RCX
/* 0b0968bd */  MOVUPS XMM0,xmmword ptr [RDX]
/* 0b0968c0 */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 0b0968c4 */  XORPS XMM1,XMM1
/* 0b0968c7 */  MOVUPS xmmword ptr [RDX],XMM1
/* 0b0968ca */  MOV qword ptr [RDX + 0x10],0x0
/* 0b0968d2 */  MOV RCX,qword ptr [RBP + 0x10]
/* 0b0968d6 */  MOV qword ptr [RAX + 0x38],RCX
/* 0b0968da */  MOVUPS XMM0,xmmword ptr [RBP]
/* 0b0968de */  MOVUPS xmmword ptr [RAX + 0x28],XMM0
/* 0b0968e2 */  MOVUPS xmmword ptr [RBP],XMM1
/* 0b0968e6 */  MOV qword ptr [RBP + 0x10],0x0
/* 0b0968ee */  ADD RAX,0x40
/* 0b0968f2 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0b0968fa */  TEST byte ptr [RSP + 0x60],0x1
/* 0b0968ff */  JZ 0x0b096968
/* 0b096901 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0b096906 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0b09690b */  AND RSI,-0x2
/* 0b09690f */  CALL 0x0412a280
/* 0b096914 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b096919 */  JZ 0x0b09696f
/* 0b09691b */  MOV RSI,qword ptr [RSP + 0x38]
/* 0b096920 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0b096925 */  AND RSI,-0x2
/* 0b096929 */  CALL 0x0412a280
/* 0b09692e */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096933 */  JZ 0x0b0966f0
/* 0b096939 */  JMP 0x0b09697a
/* 0b096940 */  LEA RDI,[RSP + 0x4e8]
/* 0b096948 */  LEA RSI,[RSP + 0x50]
/* 0b09694d */  CALL 0x0b0c0770
/* 0b096952 */  TEST byte ptr [RSP + 0x78],0x1
/* 0b096957 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0b09695f */  JNZ 0x0b0969a0
/* 0b096961 */  TEST byte ptr [RSP + 0x60],0x1
/* 0b096966 */  JNZ 0x0b096901
/* 0b096968 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b09696d */  JNZ 0x0b09691b
/* 0b09696f */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096974 */  JZ 0x0b0966f0
/* 0b09697a */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b09697f */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b096984 */  AND RSI,-0x2
/* 0b096988 */  CALL 0x0412a280
/* 0b09698d */  JMP 0x0b0966f0
/* 0b0969a0 */  MOV RSI,qword ptr [RSP + 0x78]
/* 0b0969a5 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0b0969ad */  AND RSI,-0x2
/* 0b0969b1 */  CALL 0x0412a280
/* 0b0969b6 */  TEST byte ptr [RSP + 0x60],0x1
/* 0b0969bb */  JZ 0x0b096968
/* 0b0969bd */  JMP 0x0b096901
/* 0b0969c2 */  MOV RDI,RBX
/* 0b0969c5 */  CALL 0x04864290
/* 0b0969ca */  TEST AL,AL
/* 0b0969cc */  JZ 0x0b096c49
/* 0b0969d2 */  LEA RSI,[0x1383bd8]
/* 0b0969d9 */  MOV RDI,RBX
/* 0b0969dc */  CALL 0x048648e0
/* 0b0969e1 */  MOV RDI,RAX
/* 0b0969e4 */  MOV ESI,0x1
/* 0b0969e9 */  CALL 0x04863e00
/* 0b0969ee */  MOV EBP,EAX
/* 0b0969f0 */  LEA RSI,[0x12fdd1d]
/* 0b0969f7 */  MOV RDI,RBX
/* 0b0969fa */  CALL 0x048648e0
/* 0b0969ff */  MOV RDI,RAX
/* 0b096a02 */  MOV ESI,0x1
/* 0b096a07 */  CALL 0x04863e00
/* 0b096a0c */  MOV R14D,EAX
/* 0b096a0f */  LEA RSI,[0x1405daa]
/* 0b096a16 */  MOV RDI,RBX
/* 0b096a19 */  CALL 0x048648e0
/* 0b096a1e */  MOV word ptr [RSP + 0x50],0x0
/* 0b096a25 */  LEA RDI,[RSP + 0x10]
/* 0b096a2a */  LEA RDX,[RSP + 0x50]
/* 0b096a2f */  MOV RSI,RAX
/* 0b096a32 */  CALL 0x04863cb0
/* 0b096a37 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096a3c */  JZ 0x0b096a51
/* 0b096a3e */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b096a43 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096a48 */  AND RSI,-0x2
/* 0b096a4c */  CALL 0x0412a280
/* 0b096a51 */  LEA RSI,[0x13184a4]
/* 0b096a58 */  MOV RDI,RBX
/* 0b096a5b */  CALL 0x048648e0
/* 0b096a60 */  MOV RDI,RAX
/* 0b096a63 */  XOR ESI,ESI
/* 0b096a65 */  CALL 0x04863e00
/* 0b096a6a */  MOV R15D,EAX
/* 0b096a6d */  LEA RSI,[0x1410553]
/* 0b096a74 */  MOV RDI,RBX
/* 0b096a77 */  CALL 0x048648e0
/* 0b096a7c */  MOV word ptr [RSP + 0x50],0x0
/* 0b096a83 */  LEA RDI,[RSP + 0x38]
/* 0b096a88 */  LEA RDX,[RSP + 0x50]
/* 0b096a8d */  MOV RSI,RAX
/* 0b096a90 */  CALL 0x04863cb0
/* 0b096a95 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096a9a */  JZ 0x0b096aaf
/* 0b096a9c */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b096aa1 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096aa6 */  AND RSI,-0x2
/* 0b096aaa */  CALL 0x0412a280
/* 0b096aaf */  LEA RSI,[0x12fdd26]
/* 0b096ab6 */  MOV RDI,RBX
/* 0b096ab9 */  CALL 0x048648e0
/* 0b096abe */  MOV RDI,RAX
/* 0b096ac1 */  XOR ESI,ESI
/* 0b096ac3 */  CALL 0x04863e00
/* 0b096ac8 */  MOV dword ptr [RSP + 0x50],EBP
/* 0b096acc */  MOV dword ptr [RSP + 0x54],R14D
/* 0b096ad1 */  MOV dword ptr [RSP + 0x58],EAX
/* 0b096ad5 */  MOV dword ptr [RSP + 0x5c],R15D
/* 0b096ada */  LEA RBX,[RSP + 0x60]
/* 0b096adf */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096ae4 */  JNZ 0x0b096b18
/* 0b096ae6 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0b096aeb */  MOV qword ptr [RBX + 0x10],RAX
/* 0b096aef */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0b096af4 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0b096af7 */  JMP 0x0b096b2a
/* 0b096af9 */  LEA RDI,[RSP + 0x410]
/* 0b096b01 */  CALL 0x04862b40
/* 0b096b06 */  LEA RDI,[RSP + 0xe8]
/* 0b096b0e */  CALL 0x04862b40
/* 0b096b13 */  JMP 0x0b096c49
/* 0b096b18 */  MOV RDX,qword ptr [RSP + 0x18]
/* 0b096b1d */  MOV RSI,qword ptr [RSP + 0x20]
/* 0b096b22 */  MOV RDI,RBX
/* 0b096b25 */  CALL 0x0412e5e0
/* 0b096b2a */  LEA R14,[RSP + 0x78]
/* 0b096b2f */  TEST byte ptr [RSP + 0x38],0x1
/* 0b096b34 */  JNZ 0x0b096b4a
/* 0b096b36 */  MOV RAX,qword ptr [RSP + 0x48]
/* 0b096b3b */  MOV qword ptr [R14 + 0x10],RAX
/* 0b096b3f */  MOVUPS XMM0,xmmword ptr [RSP + 0x38]
/* 0b096b44 */  MOVUPS xmmword ptr [R14],XMM0
/* 0b096b48 */  JMP 0x0b096b5c
/* 0b096b4a */  MOV RDX,qword ptr [RSP + 0x40]
/* 0b096b4f */  MOV RSI,qword ptr [RSP + 0x48]
/* 0b096b54 */  MOV RDI,R14
/* 0b096b57 */  CALL 0x0412e5e0
/* 0b096b5c */  MOV RAX,qword ptr [RSP + 0x4f0]
/* 0b096b64 */  CMP RAX,qword ptr [RSP + 0x4f8]
/* 0b096b6c */  JNC 0x0b096bfc
/* 0b096b72 */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0b096b77 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0b096b7a */  MOV RCX,qword ptr [RBX + 0x10]
/* 0b096b7e */  MOV qword ptr [RAX + 0x20],RCX
/* 0b096b82 */  MOVUPS XMM0,xmmword ptr [RBX]
/* 0b096b85 */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 0b096b89 */  XORPS XMM0,XMM0
/* 0b096b8c */  MOVUPS xmmword ptr [RBX],XMM0
/* 0b096b8f */  MOV qword ptr [RBX + 0x10],0x0
/* 0b096b97 */  MOV RCX,qword ptr [R14 + 0x10]
/* 0b096b9b */  MOV qword ptr [RAX + 0x38],RCX
/* 0b096b9f */  MOVUPS XMM1,xmmword ptr [R14]
/* 0b096ba3 */  MOVUPS xmmword ptr [RAX + 0x28],XMM1
/* 0b096ba7 */  MOVUPS xmmword ptr [R14],XMM0
/* 0b096bab */  MOV qword ptr [R14 + 0x10],0x0
/* 0b096bb3 */  ADD RAX,0x40
/* 0b096bb7 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0b096bbf */  TEST byte ptr [RSP + 0x60],0x1
/* 0b096bc4 */  JZ 0x0b096c28
/* 0b096bc6 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0b096bcb */  MOV RDI,qword ptr [RSP + 0x70]
/* 0b096bd0 */  AND RSI,-0x2
/* 0b096bd4 */  CALL 0x0412a280
/* 0b096bd9 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b096bde */  JZ 0x0b096c2f
/* 0b096be0 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0b096be5 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0b096bea */  AND RSI,-0x2
/* 0b096bee */  CALL 0x0412a280
/* 0b096bf3 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096bf8 */  JNZ 0x0b096c36
/* 0b096bfa */  JMP 0x0b096c49
/* 0b096bfc */  LEA RDI,[RSP + 0x4e8]
/* 0b096c04 */  LEA RSI,[RSP + 0x50]
/* 0b096c09 */  CALL 0x0b0c0770
/* 0b096c0e */  TEST byte ptr [RSP + 0x78],0x1
/* 0b096c13 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0b096c1b */  JNZ 0x0b09875a
/* 0b096c21 */  TEST byte ptr [RSP + 0x60],0x1
/* 0b096c26 */  JNZ 0x0b096bc6
/* 0b096c28 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b096c2d */  JNZ 0x0b096be0
/* 0b096c2f */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096c34 */  JZ 0x0b096c49
/* 0b096c36 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b096c3b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b096c40 */  AND RSI,-0x2
/* 0b096c44 */  CALL 0x0412a280
/* 0b096c49 */  LEA RSI,[0x11e0a04]
/* 0b096c50 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096c55 */  CALL 0x04865100
/* 0b096c5a */  TEST AL,AL
/* 0b096c5c */  JZ 0x0b09705d
/* 0b096c62 */  LEA RSI,[0x11e0a04]
/* 0b096c69 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b096c6e */  CALL 0x048648e0
/* 0b096c73 */  MOV RBX,RAX
/* 0b096c76 */  MOV RDI,RAX
/* 0b096c79 */  CALL 0x04864270
/* 0b096c7e */  TEST AL,AL
/* 0b096c80 */  JZ 0x0b096e8e
/* 0b096c86 */  LEA RDI,[RSP + 0x38]
/* 0b096c8b */  MOV RSI,RBX
/* 0b096c8e */  CALL 0x04865530
/* 0b096c93 */  LEA RDI,[RSP + 0xe8]
/* 0b096c9b */  MOV RSI,RBX
/* 0b096c9e */  CALL 0x048655b0
/* 0b096ca3 */  LEA RBX,[RSP + 0x38]
/* 0b096ca8 */  LEA RBP,[RSP + 0x10]
/* 0b096cad */  LEA R15,[RSP + 0x50]
/* 0b096cb2 */  JMP 0x0b096cc8
/* 0b096cc0 */  MOV RDI,RBX
/* 0b096cc3 */  CALL 0x04862ba0
/* 0b096cc8 */  MOV RDI,RBX
/* 0b096ccb */  LEA RSI,[RSP + 0xe8]
/* 0b096cd3 */  CALL 0x04862c80
/* 0b096cd8 */  TEST AL,AL
/* 0b096cda */  JNZ 0x0b096f88
/* 0b096ce0 */  MOV RDI,RBX
/* 0b096ce3 */  CALL 0x04862b80
/* 0b096ce8 */  MOV R12,RAX
/* 0b096ceb */  MOV RDI,RAX
/* 0b096cee */  LEA RSI,[0x123ca5a]
/* 0b096cf5 */  CALL 0x048648e0
/* 0b096cfa */  MOV RDI,RAX
/* 0b096cfd */  MOV ESI,0x1
/* 0b096d02 */  CALL 0x04863e00
/* 0b096d07 */  MOV R13D,EAX
/* 0b096d0a */  MOV RDI,R12
/* 0b096d0d */  LEA RSI,[0x12fdd37]
/* 0b096d14 */  CALL 0x048648e0
/* 0b096d19 */  MOV RDI,RAX
/* 0b096d1c */  XOR ESI,ESI
/* 0b096d1e */  CALL 0x04863e00
/* 0b096d23 */  MOV R14D,EAX
/* 0b096d26 */  MOV RDI,R12
/* 0b096d29 */  LEA RSI,[0x13264d5]
/* 0b096d30 */  CALL 0x048648e0
/* 0b096d35 */  MOV word ptr [RSP + 0x50],0x0
/* 0b096d3c */  MOV RDI,RBP
/* 0b096d3f */  MOV RSI,RAX
/* 0b096d42 */  MOV RDX,R15
/* 0b096d45 */  CALL 0x04863cb0
/* 0b096d4a */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096d4f */  JZ 0x0b096d64
/* 0b096d51 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b096d56 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096d5b */  AND RSI,-0x2
/* 0b096d5f */  CALL 0x0412a280
/* 0b096d64 */  MOV RDI,R15
/* 0b096d67 */  MOV RSI,RBP
/* 0b096d6a */  CALL 0x0b04cfb0
/* 0b096d6f */  LEA RDI,[RSP + 0x450]
/* 0b096d77 */  MOV ESI,R13D
/* 0b096d7a */  MOV EDX,R14D
/* 0b096d7d */  MOV RCX,R15
/* 0b096d80 */  CALL 0x0c8be9a0
/* 0b096d85 */  TEST byte ptr [RSP + 0xb8],0x1
/* 0b096d8d */  JNZ 0x0b096dd0
/* 0b096d8f */  TEST byte ptr [RSP + 0x98],0x1
/* 0b096d97 */  JNZ 0x0b096df3
/* 0b096d99 */  TEST byte ptr [RSP + 0x80],0x1
/* 0b096da1 */  JNZ 0x0b096e16
/* 0b096da3 */  TEST byte ptr [RSP + 0x68],0x1
/* 0b096da8 */  JNZ 0x0b096e3a
/* 0b096dae */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096db3 */  JNZ 0x0b096e58
/* 0b096db9 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096dbe */  JZ 0x0b096cc0
/* 0b096dc4 */  JMP 0x0b096e76
/* 0b096dd0 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0b096dd8 */  MOV RDI,qword ptr [RSP + 0xc8]
/* 0b096de0 */  AND RSI,-0x2
/* 0b096de4 */  CALL 0x0412a280
/* 0b096de9 */  TEST byte ptr [RSP + 0x98],0x1
/* 0b096df1 */  JZ 0x0b096d99
/* 0b096df3 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0b096dfb */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0b096e03 */  AND RSI,-0x2
/* 0b096e07 */  CALL 0x0412a280
/* 0b096e0c */  TEST byte ptr [RSP + 0x80],0x1
/* 0b096e14 */  JZ 0x0b096da3
/* 0b096e16 */  MOV RSI,qword ptr [RSP + 0x80]
/* 0b096e1e */  MOV RDI,qword ptr [RSP + 0x90]
/* 0b096e26 */  AND RSI,-0x2
/* 0b096e2a */  CALL 0x0412a280
/* 0b096e2f */  TEST byte ptr [RSP + 0x68],0x1
/* 0b096e34 */  JZ 0x0b096dae
/* 0b096e3a */  MOV RSI,qword ptr [RSP + 0x68]
/* 0b096e3f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0b096e44 */  AND RSI,-0x2
/* 0b096e48 */  CALL 0x0412a280
/* 0b096e4d */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096e52 */  JZ 0x0b096db9
/* 0b096e58 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b096e5d */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096e62 */  AND RSI,-0x2
/* 0b096e66 */  CALL 0x0412a280
/* 0b096e6b */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096e70 */  JZ 0x0b096cc0
/* 0b096e76 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b096e7b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b096e80 */  AND RSI,-0x2
/* 0b096e84 */  CALL 0x0412a280
/* 0b096e89 */  JMP 0x0b096cc0
/* 0b096e8e */  MOV RDI,RBX
/* 0b096e91 */  CALL 0x04864290
/* 0b096e96 */  TEST AL,AL
/* 0b096e98 */  JZ 0x0b09705d
/* 0b096e9e */  LEA RSI,[0x123ca5a]
/* 0b096ea5 */  MOV RDI,RBX
/* 0b096ea8 */  CALL 0x048648e0
/* 0b096ead */  MOV RDI,RAX
/* 0b096eb0 */  MOV ESI,0x1
/* 0b096eb5 */  CALL 0x04863e00
/* 0b096eba */  MOV EBP,EAX
/* 0b096ebc */  LEA RSI,[0x12fdd37]
/* 0b096ec3 */  MOV RDI,RBX
/* 0b096ec6 */  CALL 0x048648e0
/* 0b096ecb */  MOV RDI,RAX
/* 0b096ece */  XOR ESI,ESI
/* 0b096ed0 */  CALL 0x04863e00
/* 0b096ed5 */  MOV R14D,EAX
/* 0b096ed8 */  LEA RSI,[0x13264d5]
/* 0b096edf */  MOV RDI,RBX
/* 0b096ee2 */  CALL 0x048648e0
/* 0b096ee7 */  MOV word ptr [RSP + 0x50],0x0
/* 0b096eee */  LEA RDI,[RSP + 0x10]
/* 0b096ef3 */  LEA RDX,[RSP + 0x50]
/* 0b096ef8 */  MOV RSI,RAX
/* 0b096efb */  CALL 0x04863cb0
/* 0b096f00 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096f05 */  JZ 0x0b096f1a
/* 0b096f07 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b096f0c */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b096f11 */  AND RSI,-0x2
/* 0b096f15 */  CALL 0x0412a280
/* 0b096f1a */  LEA RDI,[RSP + 0x50]
/* 0b096f1f */  LEA RSI,[RSP + 0x10]
/* 0b096f24 */  CALL 0x0b04cfb0
/* 0b096f29 */  LEA RDI,[RSP + 0x450]
/* 0b096f31 */  LEA RCX,[RSP + 0x50]
/* 0b096f36 */  MOV ESI,EBP
/* 0b096f38 */  MOV EDX,R14D
/* 0b096f3b */  CALL 0x0c8be9a0
/* 0b096f40 */  TEST byte ptr [RSP + 0xb8],0x1
/* 0b096f48 */  JNZ 0x0b096fa4
/* 0b096f4a */  TEST byte ptr [RSP + 0x98],0x1
/* 0b096f52 */  JNZ 0x0b096fc7
/* 0b096f54 */  TEST byte ptr [RSP + 0x80],0x1
/* 0b096f5c */  JNZ 0x0b096fee
/* 0b096f62 */  TEST byte ptr [RSP + 0x68],0x1
/* 0b096f67 */  JNZ 0x0b097012
/* 0b096f6d */  TEST byte ptr [RSP + 0x50],0x1
/* 0b096f72 */  JNZ 0x0b097030
/* 0b096f78 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b096f7d */  JNZ 0x0b09704a
/* 0b096f83 */  JMP 0x0b09705d
/* 0b096f88 */  LEA RDI,[RSP + 0xe8]
/* 0b096f90 */  CALL 0x04862b40
/* 0b096f95 */  LEA RDI,[RSP + 0x38]
/* 0b096f9a */  CALL 0x04862b40
/* 0b096f9f */  JMP 0x0b09705d
/* 0b096fa4 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0b096fac */  MOV RDI,qword ptr [RSP + 0xc8]
/* 0b096fb4 */  AND RSI,-0x2
/* 0b096fb8 */  CALL 0x0412a280
/* 0b096fbd */  TEST byte ptr [RSP + 0x98],0x1
/* 0b096fc5 */  JZ 0x0b096f54
/* 0b096fc7 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0b096fcf */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0b096fd7 */  AND RSI,-0x2
/* 0b096fdb */  CALL 0x0412a280
/* 0b096fe0 */  TEST byte ptr [RSP + 0x80],0x1
/* 0b096fe8 */  JZ 0x0b096f62
/* 0b096fee */  MOV RSI,qword ptr [RSP + 0x80]
/* 0b096ff6 */  MOV RDI,qword ptr [RSP + 0x90]
/* 0b096ffe */  AND RSI,-0x2
/* 0b097002 */  CALL 0x0412a280
/* 0b097007 */  TEST byte ptr [RSP + 0x68],0x1
/* 0b09700c */  JZ 0x0b096f6d
/* 0b097012 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0b097017 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0b09701c */  AND RSI,-0x2
/* 0b097020 */  CALL 0x0412a280
/* 0b097025 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b09702a */  JZ 0x0b096f78
/* 0b097030 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b097035 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b09703a */  AND RSI,-0x2
/* 0b09703e */  CALL 0x0412a280
/* 0b097043 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b097048 */  JZ 0x0b09705d
/* 0b09704a */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b09704f */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b097054 */  AND RSI,-0x2
/* 0b097058 */  CALL 0x0412a280
/* 0b09705d */  LEA RSI,[0x12b0cff]
/* 0b097064 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097069 */  CALL 0x04865100
/* 0b09706e */  TEST AL,AL
/* 0b097070 */  JZ 0x0b09723d
/* 0b097076 */  LEA RSI,[0x12b0cff]
/* 0b09707d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097082 */  CALL 0x048648e0
/* 0b097087 */  MOV R14,RAX
/* 0b09708a */  MOV RDI,RAX
/* 0b09708d */  CALL 0x04864290
/* 0b097092 */  TEST AL,AL
/* 0b097094 */  JZ 0x0b09710f
/* 0b097096 */  LEA RSI,[0x11e9523]
/* 0b09709d */  MOV RDI,R14
/* 0b0970a0 */  CALL 0x048648e0
/* 0b0970a5 */  MOV RDI,RAX
/* 0b0970a8 */  XOR ESI,ESI
/* 0b0970aa */  CALL 0x04863e00
/* 0b0970af */  MOV EBX,EAX
/* 0b0970b1 */  LEA RSI,[0x12ba56c]
/* 0b0970b8 */  MOV RDI,R14
/* 0b0970bb */  CALL 0x048648e0
/* 0b0970c0 */  MOV RDI,RAX
/* 0b0970c3 */  MOV ESI,0xf
/* 0b0970c8 */  CALL 0x04863e00
/* 0b0970cd */  MOV EBP,EAX
/* 0b0970cf */  LEA RSI,[0x11fb610]
/* 0b0970d6 */  MOV RDI,R14
/* 0b0970d9 */  CALL 0x048648e0
/* 0b0970de */  XOR R14D,R14D
/* 0b0970e1 */  MOV RDI,RAX
/* 0b0970e4 */  XOR ESI,ESI
/* 0b0970e6 */  CALL 0x04863ff0
/* 0b0970eb */  TEST EBX,EBX
/* 0b0970ed */  CMOVLE EBX,R14D
/* 0b0970f1 */  CMP EBX,0xf
/* 0b0970f4 */  MOV ECX,0xf
/* 0b0970f9 */  CMOVGE EBX,ECX
/* 0b0970fc */  TEST EBP,EBP
/* 0b0970fe */  CMOVG R14D,EBP
/* 0b097102 */  CMP R14D,0xf
/* 0b097106 */  CMOVGE R14D,ECX
/* 0b09710a */  JMP 0x0b097227
/* 0b09710f */  XORPS XMM0,XMM0
/* 0b097112 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0b09711a */  MOV qword ptr [RSP + 0x2e0],0x0
/* 0b097126 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b09712e */  MOVZX EAX,byte ptr [RSI]
/* 0b097131 */  LEA RCX,[RSI + 0x1]
/* 0b097135 */  MOV EDX,EAX
/* 0b097137 */  SHR EDX,0x1
/* 0b097139 */  TEST AL,0x1
/* 0b09713b */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b097140 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b097145 */  MOV qword ptr [RSP + 0x50],RCX
/* 0b09714a */  MOV qword ptr [RSP + 0x58],RDX
/* 0b09714f */  LEA RSI,[0x1486b3c]
/* 0b097156 */  LEA RDI,[RSP + 0x3c8]
/* 0b09715e */  LEA R8,[RSP + 0x50]
/* 0b097163 */  MOV EDX,0x9f
/* 0b097168 */  MOV ECX,0xd
/* 0b09716d */  CALL 0x0470d9a0
/* 0b097172 */  LEA RDX,[RSP + 0x2d0]
/* 0b09717a */  LEA RCX,[RSP + 0x3c8]
/* 0b097182 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b097187 */  MOV ESI,0x2
/* 0b09718c */  CALL 0x0d6b13c0
/* 0b097191 */  TEST byte ptr [RSP + 0x3c8],0x1
/* 0b097199 */  JZ 0x0b0971b4
/* 0b09719b */  MOV RSI,qword ptr [RSP + 0x3c8]
/* 0b0971a3 */  MOV RDI,qword ptr [RSP + 0x3d8]
/* 0b0971ab */  AND RSI,-0x2
/* 0b0971af */  CALL 0x0412a280
/* 0b0971b4 */  MOV RBX,qword ptr [RSP + 0x2d0]
/* 0b0971bc */  MOV R14D,0xf
/* 0b0971c2 */  TEST RBX,RBX
/* 0b0971c5 */  JZ 0x0b097223
/* 0b0971c7 */  MOV R15,qword ptr [RSP + 0x2d8]
/* 0b0971cf */  MOV RDI,RBX
/* 0b0971d2 */  CMP RBX,R15
/* 0b0971d5 */  JNZ 0x0b0971e9
/* 0b0971d7 */  JMP 0x0b09720b
/* 0b0971e0 */  ADD R15,-0x20
/* 0b0971e4 */  CMP R15,RBX
/* 0b0971e7 */  JZ 0x0b097203
/* 0b0971e9 */  TEST byte ptr [R15 + -0x18],0x1
/* 0b0971ee */  JZ 0x0b0971e0
/* 0b0971f0 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0b0971f4 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0b0971f8 */  AND RSI,-0x2
/* 0b0971fc */  CALL 0x0412a280
/* 0b097201 */  JMP 0x0b0971e0
/* 0b097203 */  MOV RDI,qword ptr [RSP + 0x2d0]
/* 0b09720b */  MOV qword ptr [RSP + 0x2d8],RBX
/* 0b097213 */  MOV RSI,qword ptr [RSP + 0x2e0]
/* 0b09721b */  SUB RSI,RDI
/* 0b09721e */  CALL 0x0412a280
/* 0b097223 */  XOR EBX,EBX
/* 0b097225 */  XOR EAX,EAX
/* 0b097227 */  MOV dword ptr [RSP + 0x480],EBX
/* 0b09722e */  MOV dword ptr [RSP + 0x484],R14D
/* 0b097236 */  MOV byte ptr [RSP + 0x490],AL
/* 0b09723d */  LEA RSI,[0x146caad]
/* 0b097244 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097249 */  CALL 0x04865100
/* 0b09724e */  TEST AL,AL
/* 0b097250 */  JZ 0x0b09754c
/* 0b097256 */  LEA RSI,[0x146caad]
/* 0b09725d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097262 */  CALL 0x048648e0
/* 0b097267 */  MOV R14,RAX
/* 0b09726a */  MOV RDI,RAX
/* 0b09726d */  CALL 0x04864290
/* 0b097272 */  TEST AL,AL
/* 0b097274 */  JZ 0x0b0973f7
/* 0b09727a */  LEA RSI,[0x11e9523]
/* 0b097281 */  MOV RDI,R14
/* 0b097284 */  CALL 0x048648e0
/* 0b097289 */  MOV RDI,RAX
/* 0b09728c */  MOV ESI,0x18
/* 0b097291 */  CALL 0x04863e00
/* 0b097296 */  MOV EBX,EAX
/* 0b097298 */  LEA RSI,[0x12ba56c]
/* 0b09729f */  MOV RDI,R14
/* 0b0972a2 */  CALL 0x048648e0
/* 0b0972a7 */  MOV RDI,RAX
/* 0b0972aa */  MOV ESI,0x80
/* 0b0972af */  CALL 0x04863e00
/* 0b0972b4 */  MOV EBP,EAX
/* 0b0972b6 */  CMP EBX,EAX
/* 0b0972b8 */  JLE 0x0b0974e3
/* 0b0972be */  XORPS XMM0,XMM0
/* 0b0972c1 */  MOVAPS xmmword ptr [RSP + 0x2b0],XMM0
/* 0b0972c9 */  MOV qword ptr [RSP + 0x2c0],0x0
/* 0b0972d5 */  LEA RDI,[0xf5463b0]
/* 0b0972dc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0b0972e3 */  MOV ESI,0x48
/* 0b0972e8 */  CALL qword ptr [RAX + 0x10]
/* 0b0972eb */  MOV R14,RAX
/* 0b0972ee */  TEST RAX,RAX
/* 0b0972f1 */  JZ 0x0b098791
/* 0b0972f7 */  MOV qword ptr [RSP + 0x168],R14
/* 0b0972ff */  MOV qword ptr [RSP + 0x158],0x49
/* 0b09730b */  MOV qword ptr [RSP + 0x160],0x47
/* 0b097317 */  MOVUPS XMM0,xmmword ptr [0x01333b1e]
/* 0b09731e */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0b097323 */  MOVUPS XMM0,xmmword ptr [0x01333b0e]
/* 0b09732a */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0b09732f */  MOVUPS XMM0,xmmword ptr [0x01333afe]
/* 0b097336 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0b09733b */  MOVUPS XMM0,xmmword ptr [0x01333aee]
/* 0b097342 */  MOVUPS xmmword ptr [R14],XMM0
/* 0b097346 */  MOV RAX,0x2e78616d203e2074
/* 0b097350 */  MOV qword ptr [R14 + 0x3f],RAX
/* 0b097354 */  MOV byte ptr [R14 + 0x47],0x0
/* 0b097359 */  LEA RDX,[RSP + 0x2b0]
/* 0b097361 */  LEA RCX,[RSP + 0x158]
/* 0b097369 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b09736e */  MOV ESI,0x2
/* 0b097373 */  CALL 0x0d6b13c0
/* 0b097378 */  TEST byte ptr [RSP + 0x158],0x1
/* 0b097380 */  JZ 0x0b09739b
/* 0b097382 */  MOV RSI,qword ptr [RSP + 0x158]
/* 0b09738a */  MOV RDI,qword ptr [RSP + 0x168]
/* 0b097392 */  AND RSI,-0x2
/* 0b097396 */  CALL 0x0412a280
/* 0b09739b */  MOV R14,qword ptr [RSP + 0x2b0]
/* 0b0973a3 */  TEST R14,R14
/* 0b0973a6 */  JZ 0x0b09753a
/* 0b0973ac */  MOV R15,qword ptr [RSP + 0x2b8]
/* 0b0973b4 */  MOV RDI,R14
/* 0b0973b7 */  CMP R14,R15
/* 0b0973ba */  JNZ 0x0b0973dd
/* 0b0973bc */  JMP 0x0b09751f
/* 0b0973d0 */  ADD R15,-0x20
/* 0b0973d4 */  CMP R15,R14
/* 0b0973d7 */  JZ 0x0b097517
/* 0b0973dd */  TEST byte ptr [R15 + -0x18],0x1
/* 0b0973e2 */  JZ 0x0b0973d0
/* 0b0973e4 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0b0973e8 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0b0973ec */  AND RSI,-0x2
/* 0b0973f0 */  CALL 0x0412a280
/* 0b0973f5 */  JMP 0x0b0973d0
/* 0b0973f7 */  XORPS XMM0,XMM0
/* 0b0973fa */  MOVAPS xmmword ptr [RSP + 0x290],XMM0
/* 0b097402 */  MOV qword ptr [RSP + 0x2a0],0x0
/* 0b09740e */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b097416 */  MOVZX EAX,byte ptr [RSI]
/* 0b097419 */  LEA RCX,[RSI + 0x1]
/* 0b09741d */  MOV EDX,EAX
/* 0b09741f */  SHR EDX,0x1
/* 0b097421 */  TEST AL,0x1
/* 0b097423 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b097428 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b09742d */  MOV qword ptr [RSP + 0x50],RCX
/* 0b097432 */  MOV qword ptr [RSP + 0x58],RDX
/* 0b097437 */  LEA RSI,[0x134e2b7]
/* 0b09743e */  LEA RDI,[RSP + 0x3b0]
/* 0b097446 */  LEA R8,[RSP + 0x50]
/* 0b09744b */  MOV EDX,0x9b
/* 0b097450 */  MOV ECX,0xd
/* 0b097455 */  CALL 0x0470d9a0
/* 0b09745a */  LEA RDX,[RSP + 0x290]
/* 0b097462 */  LEA RCX,[RSP + 0x3b0]
/* 0b09746a */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b09746f */  MOV ESI,0x2
/* 0b097474 */  CALL 0x0d6b13c0
/* 0b097479 */  TEST byte ptr [RSP + 0x3b0],0x1
/* 0b097481 */  JZ 0x0b09749c
/* 0b097483 */  MOV RSI,qword ptr [RSP + 0x3b0]
/* 0b09748b */  MOV RDI,qword ptr [RSP + 0x3c0]
/* 0b097493 */  AND RSI,-0x2
/* 0b097497 */  CALL 0x0412a280
/* 0b09749c */  MOV RBX,qword ptr [RSP + 0x290]
/* 0b0974a4 */  TEST RBX,RBX
/* 0b0974a7 */  JZ 0x0b09750b
/* 0b0974a9 */  MOV R14,qword ptr [RSP + 0x298]
/* 0b0974b1 */  MOV RDI,RBX
/* 0b0974b4 */  CMP RBX,R14
/* 0b0974b7 */  JNZ 0x0b0974c9
/* 0b0974b9 */  JMP 0x0b0974ef
/* 0b0974c0 */  ADD R14,-0x20
/* 0b0974c4 */  CMP R14,RBX
/* 0b0974c7 */  JZ 0x0b0974e7
/* 0b0974c9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b0974ce */  JZ 0x0b0974c0
/* 0b0974d0 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b0974d4 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b0974d8 */  AND RSI,-0x2
/* 0b0974dc */  CALL 0x0412a280
/* 0b0974e1 */  JMP 0x0b0974c0
/* 0b0974e3 */  MOV EAX,EBX
/* 0b0974e5 */  JMP 0x0b09753e
/* 0b0974e7 */  MOV RDI,qword ptr [RSP + 0x290]
/* 0b0974ef */  LEA RAX,[RSP + 0x2a0]
/* 0b0974f7 */  MOV qword ptr [RSP + 0x298],RBX
/* 0b0974ff */  MOV EBX,0x80
/* 0b097504 */  MOV EBP,0x18
/* 0b097509 */  JMP 0x0b09752f
/* 0b09750b */  MOV EBP,0x80
/* 0b097510 */  MOV EAX,0x18
/* 0b097515 */  JMP 0x0b09753e
/* 0b097517 */  MOV RDI,qword ptr [RSP + 0x2b0]
/* 0b09751f */  LEA RAX,[RSP + 0x2c0]
/* 0b097527 */  MOV qword ptr [RSP + 0x2b8],R14
/* 0b09752f */  MOV RSI,qword ptr [RAX]
/* 0b097532 */  SUB RSI,RDI
/* 0b097535 */  CALL 0x0412a280
/* 0b09753a */  MOV EAX,EBP
/* 0b09753c */  MOV EBP,EBX
/* 0b09753e */  MOV dword ptr [RSP + 0x494],EAX
/* 0b097545 */  MOV dword ptr [RSP + 0x498],EBP
/* 0b09754c */  LEA RSI,[0x1333b36]
/* 0b097553 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097558 */  CALL 0x04865100
/* 0b09755d */  TEST AL,AL
/* 0b09755f */  JZ 0x0b097569
/* 0b097561 */  MOV byte ptr [RSP + 0x4bc],0x1
/* 0b097569 */  LEA RSI,[0x11fb623]
/* 0b097570 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097575 */  CALL 0x04865100
/* 0b09757a */  TEST AL,AL
/* 0b09757c */  JZ 0x0b097586
/* 0b09757e */  MOV byte ptr [RSP + 0x4bd],0x1
/* 0b097586 */  LEA RSI,[0x13d2cd4]
/* 0b09758d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097592 */  CALL 0x04865100
/* 0b097597 */  TEST AL,AL
/* 0b097599 */  JZ 0x0b0975a3
/* 0b09759b */  MOV byte ptr [RSP + 0x4be],0x1
/* 0b0975a3 */  LEA RSI,[0x143b8ea]
/* 0b0975aa */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0975af */  CALL 0x04865100
/* 0b0975b4 */  TEST AL,AL
/* 0b0975b6 */  JZ 0x0b0975c0
/* 0b0975b8 */  MOV byte ptr [RSP + 0x4bf],0x0
/* 0b0975c0 */  LEA RSI,[0x143b90e]
/* 0b0975c7 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0975cc */  CALL 0x04865100
/* 0b0975d1 */  TEST AL,AL
/* 0b0975d3 */  JZ 0x0b0975dd
/* 0b0975d5 */  MOV byte ptr [RSP + 0x4c0],0x1
/* 0b0975dd */  LEA RSI,[0x127ef61]
/* 0b0975e4 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0975e9 */  CALL 0x04865100
/* 0b0975ee */  TEST AL,AL
/* 0b0975f0 */  JZ 0x0b097613
/* 0b0975f2 */  LEA RSI,[0x127ef61]
/* 0b0975f9 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0975fe */  CALL 0x048648e0
/* 0b097603 */  MOV RDI,qword ptr [RSP + 0x330]
/* 0b09760b */  MOV RSI,RAX
/* 0b09760e */  CALL 0x0c5c3aa0
/* 0b097613 */  LEA RSI,[0x12fdd48]
/* 0b09761a */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b09761f */  CALL 0x04865100
/* 0b097624 */  TEST AL,AL
/* 0b097626 */  JZ 0x0b09776e
/* 0b09762c */  LEA RSI,[0x12fdd48]
/* 0b097633 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097638 */  CALL 0x048648e0
/* 0b09763d */  MOV RBX,RAX
/* 0b097640 */  MOV RDI,RAX
/* 0b097643 */  CALL 0x04864290
/* 0b097648 */  TEST AL,AL
/* 0b09764a */  JZ 0x0b097735
/* 0b097650 */  LEA RSI,[0x11e9523]
/* 0b097657 */  MOV RDI,RBX
/* 0b09765a */  CALL 0x048648e0
/* 0b09765f */  MOV word ptr [RSP + 0x10],0x0
/* 0b097666 */  LEA RDI,[RSP + 0x50]
/* 0b09766b */  LEA RDX,[RSP + 0x10]
/* 0b097670 */  MOV RSI,RAX
/* 0b097673 */  CALL 0x04863cb0
/* 0b097678 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b09767d */  JZ 0x0b097692
/* 0b09767f */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b097684 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b097689 */  AND RSI,-0x2
/* 0b09768d */  CALL 0x0412a280
/* 0b097692 */  LEA RSI,[0x12ba56c]
/* 0b097699 */  MOV RDI,RBX
/* 0b09769c */  CALL 0x048648e0
/* 0b0976a1 */  MOV word ptr [RSP + 0x38],0x0
/* 0b0976a8 */  LEA RDI,[RSP + 0x10]
/* 0b0976ad */  LEA RDX,[RSP + 0x38]
/* 0b0976b2 */  MOV RSI,RAX
/* 0b0976b5 */  CALL 0x04863cb0
/* 0b0976ba */  TEST byte ptr [RSP + 0x38],0x1
/* 0b0976bf */  JZ 0x0b0976d4
/* 0b0976c1 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0b0976c6 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0b0976cb */  AND RSI,-0x2
/* 0b0976cf */  CALL 0x0412a280
/* 0b0976d4 */  LEA RDI,[RSP + 0x50]
/* 0b0976d9 */  XOR ESI,ESI
/* 0b0976db */  CALL 0x0b0bfcf0
/* 0b0976e0 */  MOV EBX,EAX
/* 0b0976e2 */  LEA RDI,[RSP + 0x10]
/* 0b0976e7 */  MOV ESI,0x3
/* 0b0976ec */  CALL 0x0b0bfcf0
/* 0b0976f1 */  MOV dword ptr [RSP + 0x4a8],EBX
/* 0b0976f8 */  MOV dword ptr [RSP + 0x4ac],EAX
/* 0b0976ff */  TEST byte ptr [RSP + 0x10],0x1
/* 0b097704 */  JZ 0x0b097719
/* 0b097706 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b09770b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b097710 */  AND RSI,-0x2
/* 0b097714 */  CALL 0x0412a280
/* 0b097719 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b09771e */  JZ 0x0b09776e
/* 0b097720 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b097725 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b09772a */  AND RSI,-0x2
/* 0b09772e */  CALL 0x0412a280
/* 0b097733 */  JMP 0x0b09776e
/* 0b097735 */  MOV word ptr [RSP + 0x50],0x0
/* 0b09773c */  LEA RDI,[RSP + 0x50]
/* 0b097741 */  XOR ESI,ESI
/* 0b097743 */  CALL 0x0b0bfcf0
/* 0b097748 */  MOV EBX,EAX
/* 0b09774a */  MOV word ptr [RSP + 0x10],0x0
/* 0b097751 */  LEA RDI,[RSP + 0x10]
/* 0b097756 */  MOV ESI,0x3
/* 0b09775b */  CALL 0x0b0bfcf0
/* 0b097760 */  MOV dword ptr [RSP + 0x4a8],EBX
/* 0b097767 */  MOV dword ptr [RSP + 0x4ac],EAX
/* 0b09776e */  LEA RSI,[0x1333b52]
/* 0b097775 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b09777a */  CALL 0x04865100
/* 0b09777f */  TEST AL,AL
/* 0b097781 */  JZ 0x0b097a7f
/* 0b097787 */  LEA RSI,[0x1333b52]
/* 0b09778e */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097793 */  CALL 0x048648e0
/* 0b097798 */  MOV R14,RAX
/* 0b09779b */  MOV RDI,RAX
/* 0b09779e */  CALL 0x04864290
/* 0b0977a3 */  TEST AL,AL
/* 0b0977a5 */  JZ 0x0b097917
/* 0b0977ab */  LEA RSI,[0x11e9523]
/* 0b0977b2 */  MOV RDI,R14
/* 0b0977b5 */  CALL 0x048648e0
/* 0b0977ba */  MOV RDI,RAX
/* 0b0977bd */  MOV ESI,0x18
/* 0b0977c2 */  CALL 0x04863e00
/* 0b0977c7 */  MOV EBX,EAX
/* 0b0977c9 */  LEA RSI,[0x12ba56c]
/* 0b0977d0 */  MOV RDI,R14
/* 0b0977d3 */  CALL 0x048648e0
/* 0b0977d8 */  MOV RDI,RAX
/* 0b0977db */  MOV ESI,0x80
/* 0b0977e0 */  CALL 0x04863e00
/* 0b0977e5 */  MOV EBP,EAX
/* 0b0977e7 */  CMP EBX,EAX
/* 0b0977e9 */  JLE 0x0b097a03
/* 0b0977ef */  XORPS XMM0,XMM0
/* 0b0977f2 */  MOVAPS xmmword ptr [RSP + 0x270],XMM0
/* 0b0977fa */  MOV qword ptr [RSP + 0x280],0x0
/* 0b097806 */  LEA RDI,[0xf5463b0]
/* 0b09780d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0b097814 */  MOV ESI,0x50
/* 0b097819 */  CALL qword ptr [RAX + 0x10]
/* 0b09781c */  MOV R14,RAX
/* 0b09781f */  TEST RAX,RAX
/* 0b097822 */  JZ 0x0b0987a2
/* 0b097828 */  MOV qword ptr [RSP + 0x150],R14
/* 0b097830 */  MOV qword ptr [RSP + 0x140],0x51
/* 0b09783c */  MOV qword ptr [RSP + 0x148],0x49
/* 0b097848 */  MOVUPS XMM0,xmmword ptr [0x01298520]
/* 0b09784f */  MOVUPS xmmword ptr [R14 + 0x39],XMM0
/* 0b097854 */  MOVUPS XMM0,xmmword ptr [0x01298517]
/* 0b09785b */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0b097860 */  MOVUPS XMM0,xmmword ptr [0x01298507]
/* 0b097867 */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0b09786c */  MOVUPS XMM0,xmmword ptr [0x012984f7]
/* 0b097873 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0b097878 */  MOVUPS XMM0,xmmword ptr [0x012984e7]
/* 0b09787f */  MOVUPS xmmword ptr [R14],XMM0
/* 0b097883 */  MOV byte ptr [R14 + 0x49],0x0
/* 0b097888 */  LEA RDX,[RSP + 0x270]
/* 0b097890 */  LEA RCX,[RSP + 0x140]
/* 0b097898 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b09789d */  MOV ESI,0x2
/* 0b0978a2 */  CALL 0x0d6b13c0
/* 0b0978a7 */  TEST byte ptr [RSP + 0x140],0x1
/* 0b0978af */  JZ 0x0b0978ca
/* 0b0978b1 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0b0978b9 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0b0978c1 */  AND RSI,-0x2
/* 0b0978c5 */  CALL 0x0412a280
/* 0b0978ca */  MOV R14,qword ptr [RSP + 0x270]
/* 0b0978d2 */  TEST R14,R14
/* 0b0978d5 */  JZ 0x0b097a5a
/* 0b0978db */  MOV R15,qword ptr [RSP + 0x278]
/* 0b0978e3 */  MOV RDI,R14
/* 0b0978e6 */  CMP R14,R15
/* 0b0978e9 */  JNZ 0x0b0978fd
/* 0b0978eb */  JMP 0x0b097a3f
/* 0b0978f0 */  ADD R15,-0x20
/* 0b0978f4 */  CMP R15,R14
/* 0b0978f7 */  JZ 0x0b097a37
/* 0b0978fd */  TEST byte ptr [R15 + -0x18],0x1
/* 0b097902 */  JZ 0x0b0978f0
/* 0b097904 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0b097908 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0b09790c */  AND RSI,-0x2
/* 0b097910 */  CALL 0x0412a280
/* 0b097915 */  JMP 0x0b0978f0
/* 0b097917 */  XORPS XMM0,XMM0
/* 0b09791a */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0b097922 */  MOV qword ptr [RSP + 0x260],0x0
/* 0b09792e */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b097936 */  MOVZX EAX,byte ptr [RSI]
/* 0b097939 */  LEA RCX,[RSI + 0x1]
/* 0b09793d */  MOV EDX,EAX
/* 0b09793f */  SHR EDX,0x1
/* 0b097941 */  TEST AL,0x1
/* 0b097943 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b097948 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b09794d */  MOV qword ptr [RSP + 0x50],RCX
/* 0b097952 */  MOV qword ptr [RSP + 0x58],RDX
/* 0b097957 */  LEA RSI,[0x136addf]
/* 0b09795e */  LEA RDI,[RSP + 0x398]
/* 0b097966 */  LEA R8,[RSP + 0x50]
/* 0b09796b */  MOV EDX,0x9d
/* 0b097970 */  MOV ECX,0xd
/* 0b097975 */  CALL 0x0470d9a0
/* 0b09797a */  LEA RDX,[RSP + 0x250]
/* 0b097982 */  LEA RCX,[RSP + 0x398]
/* 0b09798a */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b09798f */  MOV ESI,0x2
/* 0b097994 */  CALL 0x0d6b13c0
/* 0b097999 */  TEST byte ptr [RSP + 0x398],0x1
/* 0b0979a1 */  JZ 0x0b0979bc
/* 0b0979a3 */  MOV RSI,qword ptr [RSP + 0x398]
/* 0b0979ab */  MOV RDI,qword ptr [RSP + 0x3a8]
/* 0b0979b3 */  AND RSI,-0x2
/* 0b0979b7 */  CALL 0x0412a280
/* 0b0979bc */  MOV RBX,qword ptr [RSP + 0x250]
/* 0b0979c4 */  TEST RBX,RBX
/* 0b0979c7 */  JZ 0x0b097a2b
/* 0b0979c9 */  MOV R14,qword ptr [RSP + 0x258]
/* 0b0979d1 */  MOV RDI,RBX
/* 0b0979d4 */  CMP RBX,R14
/* 0b0979d7 */  JNZ 0x0b0979e9
/* 0b0979d9 */  JMP 0x0b097a0f
/* 0b0979e0 */  ADD R14,-0x20
/* 0b0979e4 */  CMP R14,RBX
/* 0b0979e7 */  JZ 0x0b097a07
/* 0b0979e9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b0979ee */  JZ 0x0b0979e0
/* 0b0979f0 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b0979f4 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b0979f8 */  AND RSI,-0x2
/* 0b0979fc */  CALL 0x0412a280
/* 0b097a01 */  JMP 0x0b0979e0
/* 0b097a03 */  MOV EAX,EBX
/* 0b097a05 */  JMP 0x0b097a5e
/* 0b097a07 */  MOV RDI,qword ptr [RSP + 0x250]
/* 0b097a0f */  LEA RAX,[RSP + 0x260]
/* 0b097a17 */  MOV qword ptr [RSP + 0x258],RBX
/* 0b097a1f */  MOV EBX,0x80
/* 0b097a24 */  MOV EBP,0x18
/* 0b097a29 */  JMP 0x0b097a4f
/* 0b097a2b */  MOV EBP,0x80
/* 0b097a30 */  MOV EAX,0x18
/* 0b097a35 */  JMP 0x0b097a5e
/* 0b097a37 */  MOV RDI,qword ptr [RSP + 0x270]
/* 0b097a3f */  LEA RAX,[RSP + 0x280]
/* 0b097a47 */  MOV qword ptr [RSP + 0x278],R14
/* 0b097a4f */  MOV RSI,qword ptr [RAX]
/* 0b097a52 */  SUB RSI,RDI
/* 0b097a55 */  CALL 0x0412a280
/* 0b097a5a */  MOV EAX,EBP
/* 0b097a5c */  MOV EBP,EBX
/* 0b097a5e */  XOR ECX,ECX
/* 0b097a60 */  TEST EAX,EAX
/* 0b097a62 */  CMOVG ECX,EAX
/* 0b097a65 */  MOV dword ptr [RSP + 0x4b0],ECX
/* 0b097a6c */  MOV EAX,dword ptr [RSP + 0x4b8]
/* 0b097a73 */  CMP EBP,EAX
/* 0b097a75 */  CMOVL EAX,EBP
/* 0b097a78 */  MOV dword ptr [RSP + 0x4b4],EAX
/* 0b097a7f */  LEA RSI,[0x11e0a1b]
/* 0b097a86 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097a8b */  CALL 0x04865100
/* 0b097a90 */  TEST AL,AL
/* 0b097a92 */  JZ 0x0b097a9c
/* 0b097a94 */  MOV byte ptr [RSP + 0x4cc],0x1
/* 0b097a9c */  LEA RSI,[0x14d7645]
/* 0b097aa3 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097aa8 */  CALL 0x04865100
/* 0b097aad */  TEST AL,AL
/* 0b097aaf */  JZ 0x0b097db0
/* 0b097ab5 */  LEA RSI,[0x14d7645]
/* 0b097abc */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097ac1 */  CALL 0x048648e0
/* 0b097ac6 */  MOV R14,RAX
/* 0b097ac9 */  MOV RDI,RAX
/* 0b097acc */  CALL 0x04864290
/* 0b097ad1 */  TEST AL,AL
/* 0b097ad3 */  JZ 0x0b097c4a
/* 0b097ad9 */  LEA RSI,[0x11e9523]
/* 0b097ae0 */  MOV RDI,R14
/* 0b097ae3 */  CALL 0x048648e0
/* 0b097ae8 */  MOV RDI,RAX
/* 0b097aeb */  XOR ESI,ESI
/* 0b097aed */  CALL 0x04863e60
/* 0b097af2 */  MOV RBX,RAX
/* 0b097af5 */  LEA RSI,[0x12ba56c]
/* 0b097afc */  MOV RDI,R14
/* 0b097aff */  CALL 0x048648e0
/* 0b097b04 */  MOV RDI,RAX
/* 0b097b07 */  MOV RSI,-0x1
/* 0b097b0e */  CALL 0x04863e60
/* 0b097b13 */  MOV R14,RAX
/* 0b097b16 */  CMP RBX,RAX
/* 0b097b19 */  JBE 0x0b097d43
/* 0b097b1f */  XORPS XMM0,XMM0
/* 0b097b22 */  MOVAPS xmmword ptr [RSP + 0x230],XMM0
/* 0b097b2a */  MOV qword ptr [RSP + 0x240],0x0
/* 0b097b36 */  LEA RDI,[0xf5463b0]
/* 0b097b3d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0b097b44 */  MOV ESI,0x50
/* 0b097b49 */  CALL qword ptr [RAX + 0x10]
/* 0b097b4c */  MOV R15,RAX
/* 0b097b4f */  TEST RAX,RAX
/* 0b097b52 */  JZ 0x0b0987b3
/* 0b097b58 */  MOV qword ptr [RSP + 0x138],R15
/* 0b097b60 */  MOV qword ptr [RSP + 0x128],0x51
/* 0b097b6c */  MOV qword ptr [RSP + 0x130],0x4b
/* 0b097b78 */  MOVUPS XMM0,xmmword ptr [0x014bc05a]
/* 0b097b7f */  MOVUPS xmmword ptr [R15 + 0x3b],XMM0
/* 0b097b84 */  MOVUPS XMM0,xmmword ptr [0x014bc04f]
/* 0b097b8b */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0b097b90 */  MOVUPS XMM0,xmmword ptr [0x014bc03f]
/* 0b097b97 */  MOVUPS xmmword ptr [R15 + 0x20],XMM0
/* 0b097b9c */  MOVUPS XMM0,xmmword ptr [0x014bc02f]
/* 0b097ba3 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0b097ba8 */  MOVUPS XMM0,xmmword ptr [0x014bc01f]
/* 0b097baf */  MOVUPS xmmword ptr [R15],XMM0
/* 0b097bb3 */  MOV byte ptr [R15 + 0x4b],0x0
/* 0b097bb8 */  LEA RDX,[RSP + 0x230]
/* 0b097bc0 */  LEA RCX,[RSP + 0x128]
/* 0b097bc8 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b097bcd */  MOV ESI,0x2
/* 0b097bd2 */  CALL 0x0d6b13c0
/* 0b097bd7 */  TEST byte ptr [RSP + 0x128],0x1
/* 0b097bdf */  JZ 0x0b097bfa
/* 0b097be1 */  MOV RSI,qword ptr [RSP + 0x128]
/* 0b097be9 */  MOV RDI,qword ptr [RSP + 0x138]
/* 0b097bf1 */  AND RSI,-0x2
/* 0b097bf5 */  CALL 0x0412a280
/* 0b097bfa */  MOV R15,qword ptr [RSP + 0x230]
/* 0b097c02 */  TEST R15,R15
/* 0b097c05 */  JZ 0x0b097d9a
/* 0b097c0b */  MOV R12,qword ptr [RSP + 0x238]
/* 0b097c13 */  MOV RDI,R15
/* 0b097c16 */  CMP R15,R12
/* 0b097c19 */  JNZ 0x0b097c2d
/* 0b097c1b */  JMP 0x0b097d7f
/* 0b097c20 */  ADD R12,-0x20
/* 0b097c24 */  CMP R12,R15
/* 0b097c27 */  JZ 0x0b097d77
/* 0b097c2d */  TEST byte ptr [R12 + -0x18],0x1
/* 0b097c33 */  JZ 0x0b097c20
/* 0b097c35 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0b097c3a */  MOV RDI,qword ptr [R12 + -0x8]
/* 0b097c3f */  AND RSI,-0x2
/* 0b097c43 */  CALL 0x0412a280
/* 0b097c48 */  JMP 0x0b097c20
/* 0b097c4a */  XORPS XMM0,XMM0
/* 0b097c4d */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0b097c55 */  MOV qword ptr [RSP + 0x220],0x0
/* 0b097c61 */  LEA RDI,[0xf5463b0]
/* 0b097c68 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0b097c6f */  MOV ESI,0x98
/* 0b097c74 */  CALL qword ptr [RAX + 0x10]
/* 0b097c77 */  MOV RBX,RAX
/* 0b097c7a */  TEST RAX,RAX
/* 0b097c7d */  JZ 0x0b098780
/* 0b097c83 */  MOV qword ptr [RSP + 0x120],RBX
/* 0b097c8b */  MOV qword ptr [RSP + 0x110],0x99
/* 0b097c97 */  MOV qword ptr [RSP + 0x118],0x96
/* 0b097ca3 */  LEA RSI,[0x11aba4f]
/* 0b097caa */  MOV EDX,0x96
/* 0b097caf */  MOV RDI,RBX
/* 0b097cb2 */  CALL 0x0eee2f00
/* 0b097cb7 */  MOV byte ptr [RBX + 0x96],0x0
/* 0b097cbe */  LEA RDX,[RSP + 0x210]
/* 0b097cc6 */  LEA RCX,[RSP + 0x110]
/* 0b097cce */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b097cd3 */  MOV ESI,0x2
/* 0b097cd8 */  CALL 0x0d6b13c0
/* 0b097cdd */  TEST byte ptr [RSP + 0x110],0x1
/* 0b097ce5 */  JZ 0x0b097d00
/* 0b097ce7 */  MOV RSI,qword ptr [RSP + 0x110]
/* 0b097cef */  MOV RDI,qword ptr [RSP + 0x120]
/* 0b097cf7 */  AND RSI,-0x2
/* 0b097cfb */  CALL 0x0412a280
/* 0b097d00 */  MOV RBX,qword ptr [RSP + 0x210]
/* 0b097d08 */  TEST RBX,RBX
/* 0b097d0b */  JZ 0x0b097d6c
/* 0b097d0d */  MOV R14,qword ptr [RSP + 0x218]
/* 0b097d15 */  MOV RDI,RBX
/* 0b097d18 */  CMP RBX,R14
/* 0b097d1b */  JNZ 0x0b097d29
/* 0b097d1d */  JMP 0x0b097d50
/* 0b097d20 */  ADD R14,-0x20
/* 0b097d24 */  CMP R14,RBX
/* 0b097d27 */  JZ 0x0b097d48
/* 0b097d29 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b097d2e */  JZ 0x0b097d20
/* 0b097d30 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b097d34 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b097d38 */  AND RSI,-0x2
/* 0b097d3c */  CALL 0x0412a280
/* 0b097d41 */  JMP 0x0b097d20
/* 0b097d43 */  MOV RAX,RBX
/* 0b097d46 */  JMP 0x0b097da0
/* 0b097d48 */  MOV RDI,qword ptr [RSP + 0x210]
/* 0b097d50 */  LEA RAX,[RSP + 0x220]
/* 0b097d58 */  MOV qword ptr [RSP + 0x218],RBX
/* 0b097d60 */  MOV RBX,-0x1
/* 0b097d67 */  XOR R14D,R14D
/* 0b097d6a */  JMP 0x0b097d8f
/* 0b097d6c */  MOV R14,-0x1
/* 0b097d73 */  XOR EAX,EAX
/* 0b097d75 */  JMP 0x0b097da0
/* 0b097d77 */  MOV RDI,qword ptr [RSP + 0x230]
/* 0b097d7f */  LEA RAX,[RSP + 0x240]
/* 0b097d87 */  MOV qword ptr [RSP + 0x238],R15
/* 0b097d8f */  MOV RSI,qword ptr [RAX]
/* 0b097d92 */  SUB RSI,RDI
/* 0b097d95 */  CALL 0x0412a280
/* 0b097d9a */  MOV RAX,R14
/* 0b097d9d */  MOV R14,RBX
/* 0b097da0 */  MOV qword ptr [RSP + 0x4d0],RAX
/* 0b097da8 */  MOV qword ptr [RSP + 0x4d8],R14
/* 0b097db0 */  LEA RSI,[0x12b0d1b]
/* 0b097db7 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097dbc */  CALL 0x04865100
/* 0b097dc1 */  TEST AL,AL
/* 0b097dc3 */  JZ 0x0b0982c8
/* 0b097dc9 */  LEA RSI,[0x12b0d1b]
/* 0b097dd0 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b097dd5 */  CALL 0x048648e0
/* 0b097dda */  MOV RBP,RAX
/* 0b097ddd */  MOV word ptr [RSP + 0x50],0x0
/* 0b097de4 */  MOV RDI,RAX
/* 0b097de7 */  CALL 0x04864290
/* 0b097dec */  TEST AL,AL
/* 0b097dee */  JZ 0x0b097f2a
/* 0b097df4 */  LEA RSI,[0x11e9523]
/* 0b097dfb */  MOV RDI,RBP
/* 0b097dfe */  CALL 0x048648e0
/* 0b097e03 */  MOV RDI,RAX
/* 0b097e06 */  XOR ESI,ESI
/* 0b097e08 */  CALL 0x04863e00
/* 0b097e0d */  MOV EBX,EAX
/* 0b097e0f */  LEA RSI,[0x12ba56c]
/* 0b097e16 */  MOV RDI,RBP
/* 0b097e19 */  CALL 0x048648e0
/* 0b097e1e */  MOV RDI,RAX
/* 0b097e21 */  XOR ESI,ESI
/* 0b097e23 */  CALL 0x04863e00
/* 0b097e28 */  MOV R14D,EAX
/* 0b097e2b */  CMP EBX,EAX
/* 0b097e2d */  JLE 0x0b098013
/* 0b097e33 */  XORPS XMM0,XMM0
/* 0b097e36 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
/* 0b097e3e */  MOV qword ptr [RSP + 0x200],0x0
/* 0b097e4a */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b097e52 */  MOVZX EAX,byte ptr [RSI]
/* 0b097e55 */  LEA RCX,[RSI + 0x1]
/* 0b097e59 */  MOV EDX,EAX
/* 0b097e5b */  SHR EDX,0x1
/* 0b097e5d */  TEST AL,0x1
/* 0b097e5f */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b097e64 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b097e69 */  MOV qword ptr [RSP + 0x10],RCX
/* 0b097e6e */  MOV qword ptr [RSP + 0x18],RDX
/* 0b097e73 */  LEA RSI,[0x12fdd64]
/* 0b097e7a */  LEA RDI,[RSP + 0x380]
/* 0b097e82 */  LEA R8,[RSP + 0x10]
/* 0b097e87 */  MOV EDX,0x2f
/* 0b097e8c */  MOV ECX,0xd
/* 0b097e91 */  CALL 0x0470d9a0
/* 0b097e96 */  LEA RDX,[RSP + 0x1f0]
/* 0b097e9e */  LEA RCX,[RSP + 0x380]
/* 0b097ea6 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b097eab */  MOV ESI,0x2
/* 0b097eb0 */  CALL 0x0d6b13c0
/* 0b097eb5 */  TEST byte ptr [RSP + 0x380],0x1
/* 0b097ebd */  JZ 0x0b097ed8
/* 0b097ebf */  MOV RSI,qword ptr [RSP + 0x380]
/* 0b097ec7 */  MOV RDI,qword ptr [RSP + 0x390]
/* 0b097ecf */  AND RSI,-0x2
/* 0b097ed3 */  CALL 0x0412a280
/* 0b097ed8 */  MOV R15,qword ptr [RSP + 0x1f0]
/* 0b097ee0 */  TEST R15,R15
/* 0b097ee3 */  JZ 0x0b098067
/* 0b097ee9 */  MOV R12,qword ptr [RSP + 0x1f8]
/* 0b097ef1 */  MOV RDI,R15
/* 0b097ef4 */  CMP R15,R12
/* 0b097ef7 */  JNZ 0x0b097f0d
/* 0b097ef9 */  JMP 0x0b09804f
/* 0b097f00 */  ADD R12,-0x20
/* 0b097f04 */  CMP R12,R15
/* 0b097f07 */  JZ 0x0b098047
/* 0b097f0d */  TEST byte ptr [R12 + -0x18],0x1
/* 0b097f13 */  JZ 0x0b097f00
/* 0b097f15 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0b097f1a */  MOV RDI,qword ptr [R12 + -0x8]
/* 0b097f1f */  AND RSI,-0x2
/* 0b097f23 */  CALL 0x0412a280
/* 0b097f28 */  JMP 0x0b097f00
/* 0b097f2a */  XORPS XMM0,XMM0
/* 0b097f2d */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
/* 0b097f35 */  MOV qword ptr [RSP + 0x1c0],0x0
/* 0b097f41 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b097f49 */  MOVZX EAX,byte ptr [RSI]
/* 0b097f4c */  LEA RCX,[RSI + 0x1]
/* 0b097f50 */  MOV EDX,EAX
/* 0b097f52 */  SHR EDX,0x1
/* 0b097f54 */  TEST AL,0x1
/* 0b097f56 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b097f5b */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b097f60 */  MOV qword ptr [RSP + 0x10],RCX
/* 0b097f65 */  MOV qword ptr [RSP + 0x18],RDX
/* 0b097f6a */  LEA RSI,[0x1486bdc]
/* 0b097f71 */  LEA RDI,[RSP + 0x350]
/* 0b097f79 */  LEA R8,[RSP + 0x10]
/* 0b097f7e */  MOV EDX,0x9a
/* 0b097f83 */  MOV ECX,0xd
/* 0b097f88 */  CALL 0x0470d9a0
/* 0b097f8d */  LEA RDX,[RSP + 0x1b0]
/* 0b097f95 */  LEA RCX,[RSP + 0x350]
/* 0b097f9d */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b097fa2 */  MOV ESI,0x2
/* 0b097fa7 */  CALL 0x0d6b13c0
/* 0b097fac */  TEST byte ptr [RSP + 0x350],0x1
/* 0b097fb4 */  JZ 0x0b097fcf
/* 0b097fb6 */  MOV RSI,qword ptr [RSP + 0x350]
/* 0b097fbe */  MOV RDI,qword ptr [RSP + 0x360]
/* 0b097fc6 */  AND RSI,-0x2
/* 0b097fca */  CALL 0x0412a280
/* 0b097fcf */  MOV RBX,qword ptr [RSP + 0x1b0]
/* 0b097fd7 */  TEST RBX,RBX
/* 0b097fda */  JZ 0x0b09803d
/* 0b097fdc */  MOV R14,qword ptr [RSP + 0x1b8]
/* 0b097fe4 */  MOV RDI,RBX
/* 0b097fe7 */  CMP RBX,R14
/* 0b097fea */  JNZ 0x0b097ff9
/* 0b097fec */  JMP 0x0b098023
/* 0b097ff0 */  ADD R14,-0x20
/* 0b097ff4 */  CMP R14,RBX
/* 0b097ff7 */  JZ 0x0b09801b
/* 0b097ff9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b097ffe */  JZ 0x0b097ff0
/* 0b098000 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b098004 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b098008 */  AND RSI,-0x2
/* 0b09800c */  CALL 0x0412a280
/* 0b098011 */  JMP 0x0b097ff0
/* 0b098013 */  MOV R15D,EBX
/* 0b098016 */  MOV EBX,R14D
/* 0b098019 */  JMP 0x0b09806a
/* 0b09801b */  MOV RDI,qword ptr [RSP + 0x1b0]
/* 0b098023 */  LEA RAX,[RSP + 0x1c0]
/* 0b09802b */  MOV qword ptr [RSP + 0x1b8],RBX
/* 0b098033 */  XOR R15D,R15D
/* 0b098036 */  XOR EBX,EBX
/* 0b098038 */  JMP 0x0b09820e
/* 0b09803d */  XOR R15D,R15D
/* 0b098040 */  XOR EBX,EBX
/* 0b098042 */  JMP 0x0b098219
/* 0b098047 */  MOV RDI,qword ptr [RSP + 0x1f0]
/* 0b09804f */  MOV qword ptr [RSP + 0x1f8],R15
/* 0b098057 */  MOV RSI,qword ptr [RSP + 0x200]
/* 0b09805f */  SUB RSI,RDI
/* 0b098062 */  CALL 0x0412a280
/* 0b098067 */  MOV R15D,R14D
/* 0b09806a */  LEA RSI,[0x13762e9]
/* 0b098071 */  MOV RDI,RBP
/* 0b098074 */  CALL 0x048648e0
/* 0b098079 */  MOV word ptr [RSP + 0x38],0x0
/* 0b098080 */  LEA RDI,[RSP + 0x10]
/* 0b098085 */  LEA RDX,[RSP + 0x38]
/* 0b09808a */  MOV RSI,RAX
/* 0b09808d */  CALL 0x04863cb0
/* 0b098092 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b098097 */  JZ 0x0b0980ac
/* 0b098099 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b09809e */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b0980a3 */  AND RSI,-0x2
/* 0b0980a7 */  CALL 0x0412a280
/* 0b0980ac */  MOV RAX,qword ptr [RSP + 0x20]
/* 0b0980b1 */  MOV qword ptr [RSP + 0x60],RAX
/* 0b0980b6 */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0b0980bb */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0b0980c0 */  MOV word ptr [RSP + 0x10],0x0
/* 0b0980c7 */  TEST byte ptr [RSP + 0x38],0x1
/* 0b0980cc */  JZ 0x0b0980e1
/* 0b0980ce */  MOV RSI,qword ptr [RSP + 0x38]
/* 0b0980d3 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0b0980d8 */  AND RSI,-0x2
/* 0b0980dc */  CALL 0x0412a280
/* 0b0980e1 */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0b0980e6 */  TEST AL,0x1
/* 0b0980e8 */  JZ 0x0b0980fa
/* 0b0980ea */  MOV RAX,qword ptr [RSP + 0x58]
/* 0b0980ef */  TEST RAX,RAX
/* 0b0980f2 */  JNZ 0x0b098219
/* 0b0980f8 */  JMP 0x0b098105
/* 0b0980fa */  SHR EAX,0x1
/* 0b0980fc */  TEST RAX,RAX
/* 0b0980ff */  JNZ 0x0b098219
/* 0b098105 */  XORPS XMM0,XMM0
/* 0b098108 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0b098110 */  MOV qword ptr [RSP + 0x1e0],0x0
/* 0b09811c */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b098124 */  MOVZX EAX,byte ptr [RSI]
/* 0b098127 */  LEA RCX,[RSI + 0x1]
/* 0b09812b */  MOV EDX,EAX
/* 0b09812d */  SHR EDX,0x1
/* 0b09812f */  TEST AL,0x1
/* 0b098131 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b098136 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b09813b */  MOV qword ptr [RSP + 0x10],RCX
/* 0b098140 */  MOV qword ptr [RSP + 0x18],RDX
/* 0b098145 */  LEA RSI,[0x124b99c]
/* 0b09814c */  LEA RDI,[RSP + 0x368]
/* 0b098154 */  LEA R8,[RSP + 0x10]
/* 0b098159 */  MOV EDX,0x41
/* 0b09815e */  MOV ECX,0xd
/* 0b098163 */  CALL 0x0470d9a0
/* 0b098168 */  LEA RDX,[RSP + 0x1d0]
/* 0b098170 */  LEA RCX,[RSP + 0x368]
/* 0b098178 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b09817d */  MOV ESI,0x2
/* 0b098182 */  CALL 0x0d6b13c0
/* 0b098187 */  TEST byte ptr [RSP + 0x368],0x1
/* 0b09818f */  JZ 0x0b0981aa
/* 0b098191 */  MOV RSI,qword ptr [RSP + 0x368]
/* 0b098199 */  MOV RDI,qword ptr [RSP + 0x378]
/* 0b0981a1 */  AND RSI,-0x2
/* 0b0981a5 */  CALL 0x0412a280
/* 0b0981aa */  MOV R14,qword ptr [RSP + 0x1d0]
/* 0b0981b2 */  TEST R14,R14
/* 0b0981b5 */  JZ 0x0b098219
/* 0b0981b7 */  MOV R12,qword ptr [RSP + 0x1d8]
/* 0b0981bf */  MOV RDI,R14
/* 0b0981c2 */  CMP R14,R12
/* 0b0981c5 */  JNZ 0x0b0981d9
/* 0b0981c7 */  JMP 0x0b0981fe
/* 0b0981d0 */  ADD R12,-0x20
/* 0b0981d4 */  CMP R12,R14
/* 0b0981d7 */  JZ 0x0b0981f6
/* 0b0981d9 */  TEST byte ptr [R12 + -0x18],0x1
/* 0b0981df */  JZ 0x0b0981d0
/* 0b0981e1 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0b0981e6 */  MOV RDI,qword ptr [R12 + -0x8]
/* 0b0981eb */  AND RSI,-0x2
/* 0b0981ef */  CALL 0x0412a280
/* 0b0981f4 */  JMP 0x0b0981d0
/* 0b0981f6 */  MOV RDI,qword ptr [RSP + 0x1d0]
/* 0b0981fe */  LEA RAX,[RSP + 0x1e0]
/* 0b098206 */  MOV qword ptr [RSP + 0x1d8],R14
/* 0b09820e */  MOV RSI,qword ptr [RAX]
/* 0b098211 */  SUB RSI,RDI
/* 0b098214 */  CALL 0x0412a280
/* 0b098219 */  XOR EAX,EAX
/* 0b09821b */  TEST R15D,R15D
/* 0b09821e */  CMOVG EAX,R15D
/* 0b098222 */  MOV dword ptr [RSP + 0x4e0],EAX
/* 0b098229 */  MOV dword ptr [RSP + 0x4e4],EBX
/* 0b098230 */  LEA RDI,[RSP + 0x598]
/* 0b098238 */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0b09823d */  TEST byte ptr [RSP + 0x598],0x1
/* 0b098245 */  JNZ 0x0b09825e
/* 0b098247 */  TEST AL,0x1
/* 0b098249 */  JNZ 0x0b09827c
/* 0b09824b */  MOV RAX,qword ptr [RSP + 0x60]
/* 0b098250 */  MOV qword ptr [RDI + 0x10],RAX
/* 0b098254 */  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
/* 0b098259 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0b09825c */  JMP 0x0b09828b
/* 0b09825e */  LEA RSI,[RSP + 0x51]
/* 0b098263 */  MOV EDX,EAX
/* 0b098265 */  SHR EDX,0x1
/* 0b098267 */  TEST AL,0x1
/* 0b098269 */  CMOVNZ RSI,qword ptr [RSP + 0x60]
/* 0b09826f */  CMOVNZ RDX,qword ptr [RSP + 0x58]
/* 0b098275 */  CALL 0x04885120
/* 0b09827a */  JMP 0x0b09828b
/* 0b09827c */  MOV RDX,qword ptr [RSP + 0x58]
/* 0b098281 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0b098286 */  CALL 0x04885070
/* 0b09828b */  LEA RSI,[0x11a108e]
/* 0b098292 */  MOV RDI,RBP
/* 0b098295 */  CALL 0x048648e0
/* 0b09829a */  MOV RDI,RAX
/* 0b09829d */  MOV ESI,0x64
/* 0b0982a2 */  CALL 0x04863e00
/* 0b0982a7 */  MOV dword ptr [RSP + 0x5b0],EAX
/* 0b0982ae */  TEST byte ptr [RSP + 0x50],0x1
/* 0b0982b3 */  JZ 0x0b0982c8
/* 0b0982b5 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b0982ba */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b0982bf */  AND RSI,-0x2
/* 0b0982c3 */  CALL 0x0412a280
/* 0b0982c8 */  LEA RSI,[0x14bc06b]
/* 0b0982cf */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0982d4 */  CALL 0x04865100
/* 0b0982d9 */  TEST AL,AL
/* 0b0982db */  JZ 0x0b098530
/* 0b0982e1 */  LEA RSI,[0x14bc06b]
/* 0b0982e8 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b0982ed */  CALL 0x048648e0
/* 0b0982f2 */  MOV RBX,RAX
/* 0b0982f5 */  MOV RDI,RAX
/* 0b0982f8 */  CALL 0x04864290
/* 0b0982fd */  TEST AL,AL
/* 0b0982ff */  JZ 0x0b09837c
/* 0b098301 */  LEA RSI,[0x1410553]
/* 0b098308 */  MOV RDI,RBX
/* 0b09830b */  CALL 0x048648e0
/* 0b098310 */  MOV word ptr [RSP + 0x10],0x0
/* 0b098317 */  LEA RDI,[RSP + 0x50]
/* 0b09831c */  LEA RDX,[RSP + 0x10]
/* 0b098321 */  MOV RSI,RAX
/* 0b098324 */  CALL 0x04863cb0
/* 0b098329 */  TEST byte ptr [RSP + 0x10],0x1
/* 0b09832e */  JZ 0x0b098343
/* 0b098330 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0b098335 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0b09833a */  AND RSI,-0x2
/* 0b09833e */  CALL 0x0412a280
/* 0b098343 */  LEA RDI,[RSP + 0x518]
/* 0b09834b */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0b098350 */  TEST byte ptr [RSP + 0x518],0x1
/* 0b098358 */  JNZ 0x0b098473
/* 0b09835e */  TEST AL,0x1
/* 0b098360 */  JNZ 0x0b098507
/* 0b098366 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0b09836b */  MOV qword ptr [RDI + 0x10],RAX
/* 0b09836f */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0b098374 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0b098377 */  JMP 0x0b098516
/* 0b09837c */  XORPS XMM0,XMM0
/* 0b09837f */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0b098387 */  MOV qword ptr [RSP + 0x1a0],0x0
/* 0b098393 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0b09839b */  MOVZX EAX,byte ptr [RSI]
/* 0b09839e */  LEA RCX,[RSI + 0x1]
/* 0b0983a2 */  MOV EDX,EAX
/* 0b0983a4 */  SHR EDX,0x1
/* 0b0983a6 */  TEST AL,0x1
/* 0b0983a8 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0b0983ad */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0b0983b2 */  MOV qword ptr [RSP + 0x50],RCX
/* 0b0983b7 */  MOV qword ptr [RSP + 0x58],RDX
/* 0b0983bc */  LEA RSI,[0x14a2188]
/* 0b0983c3 */  LEA RDI,[RSP + 0x338]
/* 0b0983cb */  LEA R8,[RSP + 0x50]
/* 0b0983d0 */  MOV EDX,0x9e
/* 0b0983d5 */  MOV ECX,0xd
/* 0b0983da */  CALL 0x0470d9a0
/* 0b0983df */  LEA RDX,[RSP + 0x190]
/* 0b0983e7 */  LEA RCX,[RSP + 0x338]
/* 0b0983ef */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b0983f4 */  MOV ESI,0x2
/* 0b0983f9 */  CALL 0x0d6b13c0
/* 0b0983fe */  TEST byte ptr [RSP + 0x338],0x1
/* 0b098406 */  JZ 0x0b098421
/* 0b098408 */  MOV RSI,qword ptr [RSP + 0x338]
/* 0b098410 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0b098418 */  AND RSI,-0x2
/* 0b09841c */  CALL 0x0412a280
/* 0b098421 */  MOV RBX,qword ptr [RSP + 0x190]
/* 0b098429 */  TEST RBX,RBX
/* 0b09842c */  JZ 0x0b0984b4
/* 0b098432 */  MOV R14,qword ptr [RSP + 0x198]
/* 0b09843a */  MOV RDI,RBX
/* 0b09843d */  CMP RBX,R14
/* 0b098440 */  JNZ 0x0b098459
/* 0b098442 */  JMP 0x0b09849c
/* 0b098450 */  ADD R14,-0x20
/* 0b098454 */  CMP R14,RBX
/* 0b098457 */  JZ 0x0b098494
/* 0b098459 */  TEST byte ptr [R14 + -0x18],0x1
/* 0b09845e */  JZ 0x0b098450
/* 0b098460 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0b098464 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0b098468 */  AND RSI,-0x2
/* 0b09846c */  CALL 0x0412a280
/* 0b098471 */  JMP 0x0b098450
/* 0b098473 */  MOV EDX,EAX
/* 0b098475 */  SHR EDX,0x1
/* 0b098477 */  TEST AL,0x1
/* 0b098479 */  LEA RSI,[RSP + 0x51]
/* 0b09847e */  CMOVNZ RSI,qword ptr [RSP + 0x60]
/* 0b098484 */  CMOVNZ RDX,qword ptr [RSP + 0x58]
/* 0b09848a */  CALL 0x04885120
/* 0b09848f */  JMP 0x0b098516
/* 0b098494 */  MOV RDI,qword ptr [RSP + 0x190]
/* 0b09849c */  MOV qword ptr [RSP + 0x198],RBX
/* 0b0984a4 */  MOV RSI,qword ptr [RSP + 0x1a0]
/* 0b0984ac */  SUB RSI,RDI
/* 0b0984af */  CALL 0x0412a280
/* 0b0984b4 */  MOV word ptr [RSP + 0x50],0x0
/* 0b0984bb */  LEA RDI,[RSP + 0x518]
/* 0b0984c3 */  TEST byte ptr [RSP + 0x518],0x1
/* 0b0984cb */  JNZ 0x0b0984f9
/* 0b0984cd */  MOV RAX,qword ptr [RSP + 0x60]
/* 0b0984d2 */  MOV qword ptr [RDI + 0x10],RAX
/* 0b0984d6 */  MOVZX EAX,word ptr [RSP + 0x50]
/* 0b0984db */  MOV word ptr [RDI],AX
/* 0b0984de */  MOV RAX,qword ptr [RSP + 0x52]
/* 0b0984e3 */  MOV qword ptr [RDI + 0x2],RAX
/* 0b0984e7 */  MOV EAX,dword ptr [RSP + 0x5a]
/* 0b0984eb */  MOV dword ptr [RDI + 0xa],EAX
/* 0b0984ee */  MOVZX EAX,word ptr [RSP + 0x5e]
/* 0b0984f3 */  MOV word ptr [RDI + 0xe],AX
/* 0b0984f7 */  JMP 0x0b098530
/* 0b0984f9 */  LEA RSI,[RSP + 0x51]
/* 0b0984fe */  XOR EDX,EDX
/* 0b098500 */  CALL 0x04885120
/* 0b098505 */  JMP 0x0b098516
/* 0b098507 */  MOV RDX,qword ptr [RSP + 0x58]
/* 0b09850c */  MOV RSI,qword ptr [RSP + 0x60]
/* 0b098511 */  CALL 0x04885070
/* 0b098516 */  TEST byte ptr [RSP + 0x50],0x1
/* 0b09851b */  JZ 0x0b098530
/* 0b09851d */  MOV RSI,qword ptr [RSP + 0x50]
/* 0b098522 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0b098527 */  AND RSI,-0x2
/* 0b09852b */  CALL 0x0412a280
/* 0b098530 */  LEA RSI,[0x1298531]
/* 0b098537 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b09853c */  CALL 0x04865100
/* 0b098541 */  TEST AL,AL
/* 0b098543 */  JZ 0x0b09854d
/* 0b098545 */  MOV byte ptr [RSP + 0x5b4],0x1
/* 0b09854d */  LEA RSI,[0x1454b59]
/* 0b098554 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b098559 */  CALL 0x04865100
/* 0b09855e */  TEST AL,AL
/* 0b098560 */  JZ 0x0b09872c
/* 0b098566 */  LEA RSI,[0x1454b59]
/* 0b09856d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0b098572 */  CALL 0x048648e0
/* 0b098577 */  MOV RBX,RAX
/* 0b09857a */  MOV RDI,RAX
/* 0b09857d */  CALL 0x04864290
/* 0b098582 */  TEST AL,AL
/* 0b098584 */  JZ 0x0b09872c
/* 0b09858a */  LEA RSI,[0x14525f3]
/* 0b098591 */  MOV RDI,RBX
/* 0b098594 */  CALL 0x048648e0
/* 0b098599 */  MOV R14,RAX
/* 0b09859c */  MOV RDI,RAX
/* 0b09859f */  CALL 0x04864260
/* 0b0985a4 */  TEST AL,AL
/* 0b0985a6 */  JZ 0x0b0986f6
/* 0b0985ac */  XORPS XMM0,XMM0
/* 0b0985af */  MOVAPS xmmword ptr [RSP + 0x170],XMM0
/* 0b0985b7 */  MOV qword ptr [RSP + 0x180],0x0
/* 0b0985c3 */  LEA RDI,[0xf5463b0]
/* 0b0985ca */  MOV RAX,qword ptr [0x0f5463b0]
/* 0b0985d1 */  MOV ESI,0x48
/* 0b0985d6 */  CALL qword ptr [RAX + 0x10]
/* 0b0985d9 */  MOV R15,RAX
/* 0b0985dc */  TEST RAX,RAX
/* 0b0985df */  JZ 0x0b0987c4
/* 0b0985e5 */  MOV qword ptr [RSP + 0x108],R15
/* 0b0985ed */  MOV qword ptr [RSP + 0xf8],0x49
/* 0b0985f9 */  MOV qword ptr [RSP + 0x100],0x43
/* 0b098605 */  MOVUPS XMM0,xmmword ptr [0x01265391]
/* 0b09860c */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0b098611 */  MOVUPS XMM0,xmmword ptr [0x01265381]
/* 0b098618 */  MOVUPS xmmword ptr [R15 + 0x20],XMM0
/* 0b09861d */  MOVUPS XMM0,xmmword ptr [0x01265371]
/* 0b098624 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0b098629 */  MOVUPS XMM0,xmmword ptr [0x01265361]
/* 0b098630 */  MOVUPS xmmword ptr [R15],XMM0
/* 0b098634 */  MOV dword ptr [R15 + 0x3f],0x7265746c
/* 0b09863c */  MOV byte ptr [R15 + 0x43],0x0
/* 0b098641 */  LEA RDX,[RSP + 0x170]
/* 0b098649 */  LEA RCX,[RSP + 0xf8]
/* 0b098651 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0b098656 */  MOV ESI,0x2
/* 0b09865b */  CALL 0x0d6b13c0
/* 0b098660 */  TEST byte ptr [RSP + 0xf8],0x1
/* 0b098668 */  JZ 0x0b098683
/* 0b09866a */  MOV RSI,qword ptr [RSP + 0xf8]
/* 0b098672 */  MOV RDI,qword ptr [RSP + 0x108]
/* 0b09867a */  AND RSI,-0x2
/* 0b09867e */  CALL 0x0412a280
/* 0b098683 */  MOV R15,qword ptr [RSP + 0x170]
/* 0b09868b */  TEST R15,R15
/* 0b09868e */  JZ 0x0b0986f6
/* 0b098690 */  MOV R12,qword ptr [RSP + 0x178]
/* 0b098698 */  MOV RDI,R15
/* 0b09869b */  CMP R15,R12
/* 0b09869e */  JNZ 0x0b0986b9
/* 0b0986a0 */  JMP 0x0b0986de
/* 0b0986b0 */  ADD R12,-0x20
/* 0b0986b4 */  CMP R12,R15
/* 0b0986b7 */  JZ 0x0b0986d6
/* 0b0986b9 */  TEST byte ptr [R12 + -0x18],0x1
/* 0b0986bf */  JZ 0x0b0986b0
/* 0b0986c1 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0b0986c6 */  MOV RDI,qword ptr [R12 + -0x8]
/* 0b0986cb */  AND RSI,-0x2
/* 0b0986cf */  CALL 0x0412a280
/* 0b0986d4 */  JMP 0x0b0986b0
/* 0b0986d6 */  MOV RDI,qword ptr [RSP + 0x170]
/* 0b0986de */  MOV qword ptr [RSP + 0x178],R15
/* 0b0986e6 */  MOV RSI,qword ptr [RSP + 0x180]
/* 0b0986ee */  SUB RSI,RDI
/* 0b0986f1 */  CALL 0x0412a280
/* 0b0986f6 */  MOV RDI,R14
/* 0b0986f9 */  XOR ESI,ESI
/* 0b0986fb */  CALL 0x04863e30
/* 0b098700 */  MOV EBP,EAX
/* 0b098702 */  LEA RSI,[0x143b924]
/* 0b098709 */  MOV RDI,RBX
/* 0b09870c */  CALL 0x048648e0
/* 0b098711 */  MOV RDI,RAX
/* 0b098714 */  MOV ESI,0xa
/* 0b098719 */  CALL 0x04863e30
/* 0b09871e */  MOV dword ptr [RSP + 0x4c4],EBP
/* 0b098725 */  MOV dword ptr [RSP + 0x4c8],EAX
/* 0b09872c */  LEA RBX,[RSP + 0x450]
/* 0b098734 */  MOV RDI,qword ptr [RSP]
/* 0b098738 */  MOV RSI,RBX
/* 0b09873b */  CALL 0x0b0bffd0
/* 0b098740 */  MOV RDI,RBX
/* 0b098743 */  CALL 0x0b0c04b0
/* 0b098748 */  ADD RSP,0x5c8
/* 0b09874f */  POP RBX
/* 0b098750 */  POP R12
/* 0b098752 */  POP R13
/* 0b098754 */  POP R14
/* 0b098756 */  POP R15
/* 0b098758 */  POP RBP
/* 0b098759 */  RET
/* 0b09875a */  MOV RSI,qword ptr [RSP + 0x78]
/* 0b09875f */  MOV RDI,qword ptr [RSP + 0x88]
/* 0b098767 */  AND RSI,-0x2
/* 0b09876b */  CALL 0x0412a280
/* 0b098770 */  TEST byte ptr [RSP + 0x60],0x1
/* 0b098775 */  JZ 0x0b096c28
/* 0b09877b */  JMP 0x0b096bc6
/* 0b098780 */  MOV EDI,0x98
/* 0b098785 */  XOR ESI,ESI
/* 0b098787 */  CALL 0x0eec74c0
/* 0b09878c */  JMP 0x0b097c83
/* 0b098791 */  MOV EDI,0x48
/* 0b098796 */  XOR ESI,ESI
/* 0b098798 */  CALL 0x0eec74c0
/* 0b09879d */  JMP 0x0b0972f7
/* 0b0987a2 */  MOV EDI,0x50
/* 0b0987a7 */  XOR ESI,ESI
/* 0b0987a9 */  CALL 0x0eec74c0
/* 0b0987ae */  JMP 0x0b097828
/* 0b0987b3 */  MOV EDI,0x50
/* 0b0987b8 */  XOR ESI,ESI
/* 0b0987ba */  CALL 0x0eec74c0
/* 0b0987bf */  JMP 0x0b097b58
/* 0b0987c4 */  MOV EDI,0x48
/* 0b0987c9 */  XOR ESI,ESI
/* 0b0987cb */  CALL 0x0eec74c0
/* 0b0987d0 */  JMP 0x0b0985e5
