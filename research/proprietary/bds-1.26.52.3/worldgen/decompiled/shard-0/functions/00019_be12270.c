/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf12270 (ELF vaddr 0xbe12270)
 * Label: string:Spawn rules for minecraft:density_limit in {} need to be put
 * Body:  [[0bf12270, 0bf12628] [0bf12630, 0bf127b3] [0bf127c0, 0bf12b43] [0bf12b50, 0bf12b7e] [0bf12b80, 0bf12c3a] [0bf12c40, 0bf12c91] [0bf12ca0, 0bf12fb3] [0bf12fc0, 0bf130c8] [0bf130d0, 0bf134d8] [0bf134e0, 0bf136c0] [0bf136d0, 0bf137ba] [0bf137c0, 0bf13cda] [0bf13ce0, 0bf1401e] [0bf14020, 0bf141fd] [0bf14200, 0bf142ed] [0bf142f0, 0bf144c8] [0bf144d0, 0bf14743] [0bf14750, 0bf149a1] [0bf149b0, 0bf14ad4]]
 * Ghidra: FUN_0bf12270
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bf12270(int *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
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
  uStack_144 = 0x40000000080;
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
LAB_0bf1382f:
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
          FUN_0eec74c0(0x48,0);
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
          goto LAB_0bf1382f;
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
      iVar8 = func_0x0bf2a190(&bStack_5a8,0);
      uStack_5e8 = (byte *)((ulong)uStack_5e8 & 0xffffffffffff0000);
      iStack_14c = func_0x0bf2a190(&uStack_5e8,3);
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
      iVar8 = func_0x0bf2a190(&bStack_5a8,0);
      iStack_14c = func_0x0bf2a190(&uStack_5e8,3);
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
LAB_0bf13d4f:
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
          FUN_0eec74c0(0x50,0);
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
          goto LAB_0bf13d4f;
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
        FUN_0eec74c0(0x98,0);
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
LAB_0bf1408f:
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
          FUN_0eec74c0(0x50,0);
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
          goto LAB_0bf1408f;
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
        goto LAB_0bf14519;
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
LAB_0bf1450e:
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
        if (bStack_5a8 >> 1 == 0) goto LAB_0bf14405;
      }
      else if (CONCAT26(uStack_59a,CONCAT24(uStack_59c,CONCAT22(uStack_59e,uStack_5a0))) == 0) {
LAB_0bf14405:
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
          goto LAB_0bf1450e;
        }
      }
    }
LAB_0bf14519:
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
        goto LAB_0bf14830;
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
LAB_0bf14830:
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
          FUN_0eec74c0(0x48,0);
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
/* 0bf12270 */  PUSH RBP
/* 0bf12271 */  PUSH R15
/* 0bf12273 */  PUSH R14
/* 0bf12275 */  PUSH R13
/* 0bf12277 */  PUSH R12
/* 0bf12279 */  PUSH RBX
/* 0bf1227a */  SUB RSP,0x5c8
/* 0bf12281 */  MOV qword ptr [RSP + 0x30],R8
/* 0bf12286 */  MOV qword ptr [RSP + 0xe0],RCX
/* 0bf1228e */  MOV RBP,RSI
/* 0bf12291 */  MOV RBX,RDI
/* 0bf12294 */  MOV dword ptr [RDI],0x64
/* 0bf1229a */  LEA RAX,[RDI + 0x8]
/* 0bf1229e */  MOV qword ptr [RSP + 0x330],RAX
/* 0bf122a6 */  MOV dword ptr [RDI + 0x10],0x0
/* 0bf122ad */  XORPS XMM0,XMM0
/* 0bf122b0 */  MOVUPS xmmword ptr [RDI + 0x18],XMM0
/* 0bf122b4 */  MOVUPS xmmword ptr [RDI + 0x28],XMM0
/* 0bf122b8 */  MOVUPS xmmword ptr [RDI + 0x38],XMM0
/* 0bf122bc */  LEA RAX,[0xef516f8]
/* 0bf122c3 */  MOV qword ptr [RDI + 0x8],RAX
/* 0bf122c7 */  LEA RAX,[RDI + 0x50]
/* 0bf122cb */  MOV qword ptr [RSP],RAX
/* 0bf122cf */  MOV RAX,0xf00000000
/* 0bf122d9 */  MOV qword ptr [RDI + 0x80],RAX
/* 0bf122e0 */  MOVSD XMM1,qword ptr [0x014e9660]
/* 0bf122e8 */  MOVSD qword ptr [RDI + 0x88],XMM1
/* 0bf122f0 */  MOV byte ptr [RDI + 0x90],0x0
/* 0bf122f7 */  MOVAPS XMM2,xmmword ptr [0x014eb030]
/* 0bf122fe */  MOVUPS xmmword ptr [RDI + 0x94],XMM2
/* 0bf12305 */  MOV dword ptr [RDI + 0xbc],0x1000000
/* 0bf1230f */  MOV byte ptr [RDI + 0xc0],0x0
/* 0bf12316 */  MOV qword ptr [RDI + 0xd0],0x0
/* 0bf12321 */  MOV qword ptr [RDI + 0xc4],0x0
/* 0bf1232c */  MOV byte ptr [RDI + 0xcc],0x0
/* 0bf12333 */  MOV qword ptr [RDI + 0xd8],-0x1
/* 0bf1233e */  MOVAPS xmmword ptr [RDI + 0xe0],XMM0
/* 0bf12345 */  MOVAPS xmmword ptr [RDI + 0xf0],XMM0
/* 0bf1234c */  MOVAPS xmmword ptr [RDI + 0x100],XMM0
/* 0bf12353 */  MOVAPS xmmword ptr [RDI + 0x110],XMM0
/* 0bf1235a */  MOVAPS xmmword ptr [RDI + 0x120],XMM0
/* 0bf12361 */  MOVAPS xmmword ptr [RDI + 0x130],XMM0
/* 0bf12368 */  MOVAPS xmmword ptr [RDI + 0x140],XMM0
/* 0bf1236f */  MOVAPS xmmword ptr [RDI + 0x150],XMM0
/* 0bf12376 */  MOVAPS xmmword ptr [RDI + 0x160],XMM0
/* 0bf1237d */  MOVUPS xmmword ptr [RDI + 0x16c],XMM0
/* 0bf12384 */  MOVAPS xmmword ptr [RDI + 0x1a0],XMM0
/* 0bf1238b */  MOVAPS xmmword ptr [RDI + 0x190],XMM0
/* 0bf12392 */  MOVAPS xmmword ptr [RDI + 0x180],XMM0
/* 0bf12399 */  MOV qword ptr [RDI + 0x1ad],0x0
/* 0bf123a4 */  MOVAPS XMM3,xmmword ptr [0x014e7470]
/* 0bf123ab */  MOVUPS xmmword ptr [RDI + 0xa4],XMM3
/* 0bf123b2 */  MOV RCX,0x8000000080
/* 0bf123bc */  MOV qword ptr [RDI + 0xb4],RCX
/* 0bf123c3 */  MOV qword ptr [RDI + 0x70],0x0
/* 0bf123cb */  MOV qword ptr [RSP + 0x480],RAX
/* 0bf123d3 */  MOVSD qword ptr [RSP + 0x488],XMM1
/* 0bf123dc */  MOV byte ptr [RSP + 0x490],0x0
/* 0bf123e4 */  MOVUPS xmmword ptr [RSP + 0x494],XMM2
/* 0bf123ec */  MOV dword ptr [RSP + 0x4bc],0x1000000
/* 0bf123f7 */  MOV byte ptr [RSP + 0x4c0],0x0
/* 0bf123ff */  MOV qword ptr [RSP + 0x4d0],0x0
/* 0bf1240b */  MOV qword ptr [RSP + 0x4c4],0x0
/* 0bf12417 */  MOV byte ptr [RSP + 0x4cc],0x0
/* 0bf1241f */  MOV qword ptr [RSP + 0x4d8],-0x1
/* 0bf1242b */  MOVAPS xmmword ptr [RSP + 0x4e0],XMM0
/* 0bf12433 */  MOVAPS xmmword ptr [RSP + 0x4f0],XMM0
/* 0bf1243b */  MOVAPS xmmword ptr [RSP + 0x500],XMM0
/* 0bf12443 */  MOVAPS xmmword ptr [RSP + 0x510],XMM0
/* 0bf1244b */  MOVAPS xmmword ptr [RSP + 0x520],XMM0
/* 0bf12453 */  MOVAPS xmmword ptr [RSP + 0x530],XMM0
/* 0bf1245b */  MOVAPS xmmword ptr [RSP + 0x540],XMM0
/* 0bf12463 */  MOVAPS xmmword ptr [RSP + 0x550],XMM0
/* 0bf1246b */  MOVAPS xmmword ptr [RSP + 0x560],XMM0
/* 0bf12473 */  MOVUPS xmmword ptr [RSP + 0x56c],XMM0
/* 0bf1247b */  MOVAPS xmmword ptr [RSP + 0x5a0],XMM0
/* 0bf12483 */  MOVAPS xmmword ptr [RSP + 0x590],XMM0
/* 0bf1248b */  MOVAPS xmmword ptr [RSP + 0x580],XMM0
/* 0bf12493 */  MOV qword ptr [RSP + 0x5ad],0x0
/* 0bf1249f */  MOVUPS xmmword ptr [RSP + 0x4a4],XMM3
/* 0bf124a7 */  MOV RAX,0x40000000080
/* 0bf124b1 */  MOV qword ptr [RSP + 0x4b4],RAX
/* 0bf124b9 */  MOV qword ptr [RSP + 0x470],0x0
/* 0bf124c5 */  LEA RSI,[0x139ee34]
/* 0bf124cc */  MOV qword ptr [RSP + 0x8],RDX
/* 0bf124d1 */  MOV RDI,RDX
/* 0bf124d4 */  CALL 0x04865100
/* 0bf124d9 */  TEST AL,AL
/* 0bf124db */  JZ 0x0bf12673
/* 0bf124e1 */  LEA RSI,[0x139ee34]
/* 0bf124e8 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf124ed */  CALL 0x048648e0
/* 0bf124f2 */  MOV R14,RAX
/* 0bf124f5 */  MOV RDI,RAX
/* 0bf124f8 */  CALL 0x04864290
/* 0bf124fd */  TEST AL,AL
/* 0bf124ff */  JZ 0x0bf12565
/* 0bf12501 */  LEA RSI,[0x13747db]
/* 0bf12508 */  MOV RDI,R14
/* 0bf1250b */  CALL 0x048648e0
/* 0bf12510 */  MOV RDI,RAX
/* 0bf12513 */  MOV ESI,0x64
/* 0bf12518 */  CALL 0x04863e00
/* 0bf1251d */  XOR ECX,ECX
/* 0bf1251f */  TEST EAX,EAX
/* 0bf12521 */  CMOVG ECX,EAX
/* 0bf12524 */  MOV dword ptr [RBX],ECX
/* 0bf12526 */  LEA RSI,[0x14bbfed]
/* 0bf1252d */  MOV RDI,R14
/* 0bf12530 */  CALL 0x04865100
/* 0bf12535 */  TEST AL,AL
/* 0bf12537 */  JZ 0x0bf12673
/* 0bf1253d */  LEA RSI,[0x14bbfed]
/* 0bf12544 */  MOV RDI,R14
/* 0bf12547 */  CALL 0x048648e0
/* 0bf1254c */  MOV RDI,RAX
/* 0bf1254f */  MOV ESI,0x5
/* 0bf12554 */  CALL 0x04863e00
/* 0bf12559 */  MOV dword ptr [RSP + 0x49c],EAX
/* 0bf12560 */  JMP 0x0bf12673
/* 0bf12565 */  XORPS XMM0,XMM0
/* 0bf12568 */  MOVAPS xmmword ptr [RSP + 0x310],XMM0
/* 0bf12570 */  MOV qword ptr [RSP + 0x320],0x0
/* 0bf1257c */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf12584 */  MOVZX EAX,byte ptr [RSI]
/* 0bf12587 */  LEA RCX,[RSI + 0x1]
/* 0bf1258b */  MOV EDX,EAX
/* 0bf1258d */  SHR EDX,0x1
/* 0bf1258f */  TEST AL,0x1
/* 0bf12591 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf12596 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf1259b */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf125a0 */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf125a5 */  LEA RSI,[0x1454a28]
/* 0bf125ac */  LEA RDI,[RSP + 0x3f8]
/* 0bf125b4 */  LEA R8,[RSP + 0x50]
/* 0bf125b9 */  MOV EDX,0x94
/* 0bf125be */  MOV ECX,0xd
/* 0bf125c3 */  CALL 0x0470d9a0
/* 0bf125c8 */  LEA RDX,[RSP + 0x310]
/* 0bf125d0 */  LEA RCX,[RSP + 0x3f8]
/* 0bf125d8 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf125dd */  MOV ESI,0x2
/* 0bf125e2 */  CALL 0x0d6b13c0
/* 0bf125e7 */  TEST byte ptr [RSP + 0x3f8],0x1
/* 0bf125ef */  JZ 0x0bf1260a
/* 0bf125f1 */  MOV RSI,qword ptr [RSP + 0x3f8]
/* 0bf125f9 */  MOV RDI,qword ptr [RSP + 0x408]
/* 0bf12601 */  AND RSI,-0x2
/* 0bf12605 */  CALL 0x0412a280
/* 0bf1260a */  MOV RBX,qword ptr [RSP + 0x310]
/* 0bf12612 */  TEST RBX,RBX
/* 0bf12615 */  JZ 0x0bf12673
/* 0bf12617 */  MOV R14,qword ptr [RSP + 0x318]
/* 0bf1261f */  MOV RDI,RBX
/* 0bf12622 */  CMP RBX,R14
/* 0bf12625 */  JNZ 0x0bf12639
/* 0bf12627 */  JMP 0x0bf1265b
/* 0bf12630 */  ADD R14,-0x20
/* 0bf12634 */  CMP R14,RBX
/* 0bf12637 */  JZ 0x0bf12653
/* 0bf12639 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf1263e */  JZ 0x0bf12630
/* 0bf12640 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf12644 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf12648 */  AND RSI,-0x2
/* 0bf1264c */  CALL 0x0412a280
/* 0bf12651 */  JMP 0x0bf12630
/* 0bf12653 */  MOV RDI,qword ptr [RSP + 0x310]
/* 0bf1265b */  MOV qword ptr [RSP + 0x318],RBX
/* 0bf12663 */  MOV RSI,qword ptr [RSP + 0x320]
/* 0bf1266b */  SUB RSI,RDI
/* 0bf1266e */  CALL 0x0412a280
/* 0bf12673 */  LEA RSI,[0x1215a8f]
/* 0bf1267a */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf1267f */  CALL 0x04865100
/* 0bf12684 */  TEST AL,AL
/* 0bf12686 */  JZ 0x0bf12816
/* 0bf1268c */  LEA RSI,[0x1215a8f]
/* 0bf12693 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12698 */  CALL 0x048648e0
/* 0bf1269d */  MOV R14,RAX
/* 0bf126a0 */  MOV RDI,RAX
/* 0bf126a3 */  CALL 0x04864290
/* 0bf126a8 */  TEST AL,AL
/* 0bf126aa */  JZ 0x0bf126eb
/* 0bf126ac */  LEA RSI,[0x12302ed]
/* 0bf126b3 */  MOV RDI,R14
/* 0bf126b6 */  CALL 0x048648e0
/* 0bf126bb */  MOV RDI,RAX
/* 0bf126be */  MOV ESI,0xffffffff
/* 0bf126c3 */  CALL 0x04863e00
/* 0bf126c8 */  MOV EBX,EAX
/* 0bf126ca */  LEA RSI,[0x1454932]
/* 0bf126d1 */  MOV RDI,R14
/* 0bf126d4 */  CALL 0x048648e0
/* 0bf126d9 */  MOV RDI,RAX
/* 0bf126dc */  MOV ESI,0xffffffff
/* 0bf126e1 */  CALL 0x04863e00
/* 0bf126e6 */  JMP 0x0bf12808
/* 0bf126eb */  XORPS XMM0,XMM0
/* 0bf126ee */  MOVAPS xmmword ptr [RSP + 0x2f0],XMM0
/* 0bf126f6 */  MOV qword ptr [RSP + 0x300],0x0
/* 0bf12702 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf1270a */  MOVZX EAX,byte ptr [RSI]
/* 0bf1270d */  LEA RCX,[RSI + 0x1]
/* 0bf12711 */  MOV EDX,EAX
/* 0bf12713 */  SHR EDX,0x1
/* 0bf12715 */  TEST AL,0x1
/* 0bf12717 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf1271c */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf12721 */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf12726 */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf1272b */  LEA RSI,[0x1454abd]
/* 0bf12732 */  LEA RDI,[RSP + 0x3e0]
/* 0bf1273a */  LEA R8,[RSP + 0x50]
/* 0bf1273f */  MOV EDX,0x9b
/* 0bf12744 */  MOV ECX,0xd
/* 0bf12749 */  CALL 0x0470d9a0
/* 0bf1274e */  LEA RDX,[RSP + 0x2f0]
/* 0bf12756 */  LEA RCX,[RSP + 0x3e0]
/* 0bf1275e */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf12763 */  MOV ESI,0x2
/* 0bf12768 */  CALL 0x0d6b13c0
/* 0bf1276d */  TEST byte ptr [RSP + 0x3e0],0x1
/* 0bf12775 */  JZ 0x0bf12790
/* 0bf12777 */  MOV RSI,qword ptr [RSP + 0x3e0]
/* 0bf1277f */  MOV RDI,qword ptr [RSP + 0x3f0]
/* 0bf12787 */  AND RSI,-0x2
/* 0bf1278b */  CALL 0x0412a280
/* 0bf12790 */  MOV R14,qword ptr [RSP + 0x2f0]
/* 0bf12798 */  MOV EBX,0xffffffff
/* 0bf1279d */  TEST R14,R14
/* 0bf127a0 */  JZ 0x0bf12803
/* 0bf127a2 */  MOV R15,qword ptr [RSP + 0x2f8]
/* 0bf127aa */  MOV RDI,R14
/* 0bf127ad */  CMP R14,R15
/* 0bf127b0 */  JNZ 0x0bf127c9
/* 0bf127b2 */  JMP 0x0bf127eb
/* 0bf127c0 */  ADD R15,-0x20
/* 0bf127c4 */  CMP R15,R14
/* 0bf127c7 */  JZ 0x0bf127e3
/* 0bf127c9 */  TEST byte ptr [R15 + -0x18],0x1
/* 0bf127ce */  JZ 0x0bf127c0
/* 0bf127d0 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0bf127d4 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0bf127d8 */  AND RSI,-0x2
/* 0bf127dc */  CALL 0x0412a280
/* 0bf127e1 */  JMP 0x0bf127c0
/* 0bf127e3 */  MOV RDI,qword ptr [RSP + 0x2f0]
/* 0bf127eb */  MOV qword ptr [RSP + 0x2f8],R14
/* 0bf127f3 */  MOV RSI,qword ptr [RSP + 0x300]
/* 0bf127fb */  SUB RSI,RDI
/* 0bf127fe */  CALL 0x0412a280
/* 0bf12803 */  MOV EAX,0xffffffff
/* 0bf12808 */  MOV dword ptr [RSP + 0x4a0],EBX
/* 0bf1280f */  MOV dword ptr [RSP + 0x4a4],EAX
/* 0bf12816 */  LEA RSI,[0x11e09e3]
/* 0bf1281d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12822 */  CALL 0x04865100
/* 0bf12827 */  TEST AL,AL
/* 0bf12829 */  JZ 0x0bf12879
/* 0bf1282b */  LEA RSI,[0x11e09e3]
/* 0bf12832 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12837 */  CALL 0x048648e0
/* 0bf1283c */  LEA RDI,[RSP + 0x440]
/* 0bf12844 */  MOV RSI,RAX
/* 0bf12847 */  CALL 0x04863480
/* 0bf1284c */  MOV RDI,RBP
/* 0bf1284f */  CALL 0x0d8a1d70
/* 0bf12854 */  LEA RDX,[RSP + 0x530]
/* 0bf1285c */  MOVSX ESI,AX
/* 0bf1285f */  LEA RDI,[RSP + 0x440]
/* 0bf12867 */  CALL 0x0b6c3f10
/* 0bf1286c */  LEA RDI,[RSP + 0x440]
/* 0bf12874 */  CALL 0x04863610
/* 0bf12879 */  LEA RSI,[0x14bbff4]
/* 0bf12880 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12885 */  CALL 0x04865100
/* 0bf1288a */  TEST AL,AL
/* 0bf1288c */  JZ 0x0bf128dc
/* 0bf1288e */  LEA RSI,[0x14bbff4]
/* 0bf12895 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf1289a */  CALL 0x048648e0
/* 0bf1289f */  LEA RDI,[RSP + 0x430]
/* 0bf128a7 */  MOV RSI,RAX
/* 0bf128aa */  CALL 0x04863480
/* 0bf128af */  MOV RDI,RBP
/* 0bf128b2 */  CALL 0x0d8a1d70
/* 0bf128b7 */  LEA RDX,[RSP + 0x560]
/* 0bf128bf */  MOVSX ESI,AX
/* 0bf128c2 */  LEA RDI,[RSP + 0x430]
/* 0bf128ca */  CALL 0x0b6c3f10
/* 0bf128cf */  LEA RDI,[RSP + 0x430]
/* 0bf128d7 */  CALL 0x04863610
/* 0bf128dc */  LEA RSI,[0x1215aa7]
/* 0bf128e3 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf128e8 */  CALL 0x04865100
/* 0bf128ed */  TEST AL,AL
/* 0bf128ef */  JZ 0x0bf12984
/* 0bf128f5 */  LEA RSI,[0x1215aa7]
/* 0bf128fc */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12901 */  CALL 0x048648e0
/* 0bf12906 */  MOV RBX,RAX
/* 0bf12909 */  MOV RDI,RAX
/* 0bf1290c */  CALL 0x04864290
/* 0bf12911 */  TEST AL,AL
/* 0bf12913 */  JZ 0x0bf12984
/* 0bf12915 */  LEA RSI,[0x1222d0e]
/* 0bf1291c */  MOV RDI,RBX
/* 0bf1291f */  CALL 0x048648e0
/* 0bf12924 */  LEA RDI,[RSP + 0x420]
/* 0bf1292c */  MOV RSI,RAX
/* 0bf1292f */  CALL 0x04863480
/* 0bf12934 */  MOV RDI,RBP
/* 0bf12937 */  CALL 0x0d8a1d70
/* 0bf1293c */  LEA RDX,[RSP + 0x548]
/* 0bf12944 */  MOVSX ESI,AX
/* 0bf12947 */  LEA RDI,[RSP + 0x420]
/* 0bf1294f */  CALL 0x0b6c3f10
/* 0bf12954 */  LEA RDI,[RSP + 0x420]
/* 0bf1295c */  CALL 0x04863610
/* 0bf12961 */  LEA RSI,[0x14525f3]
/* 0bf12968 */  MOV RDI,RBX
/* 0bf1296b */  CALL 0x048648e0
/* 0bf12970 */  MOV RDI,RAX
/* 0bf12973 */  MOV ESI,0x1
/* 0bf12978 */  CALL 0x04863e00
/* 0bf1297d */  MOV dword ptr [RSP + 0x578],EAX
/* 0bf12984 */  LEA RSI,[0x13ecc66]
/* 0bf1298b */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12990 */  CALL 0x04865100
/* 0bf12995 */  TEST AL,AL
/* 0bf12997 */  JZ 0x0bf12f49
/* 0bf1299d */  LEA RSI,[0x13ecc66]
/* 0bf129a4 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf129a9 */  CALL 0x048648e0
/* 0bf129ae */  MOV RBX,RAX
/* 0bf129b1 */  MOV RDI,RAX
/* 0bf129b4 */  CALL 0x04864270
/* 0bf129b9 */  TEST AL,AL
/* 0bf129bb */  JZ 0x0bf12cc2
/* 0bf129c1 */  LEA RDI,[RSP + 0xe8]
/* 0bf129c9 */  MOV RSI,RBX
/* 0bf129cc */  CALL 0x04865530
/* 0bf129d1 */  LEA RDI,[RSP + 0x410]
/* 0bf129d9 */  MOV RSI,RBX
/* 0bf129dc */  CALL 0x048655b0
/* 0bf129e1 */  LEA RBP,[RSP + 0x78]
/* 0bf129e6 */  LEA RBX,[RSP + 0xe8]
/* 0bf129ee */  JMP 0x0bf129f8
/* 0bf129f0 */  MOV RDI,RBX
/* 0bf129f3 */  CALL 0x04862ba0
/* 0bf129f8 */  MOV RDI,RBX
/* 0bf129fb */  LEA RSI,[RSP + 0x410]
/* 0bf12a03 */  CALL 0x04862c80
/* 0bf12a08 */  TEST AL,AL
/* 0bf12a0a */  JNZ 0x0bf12df9
/* 0bf12a10 */  MOV RDI,RBX
/* 0bf12a13 */  CALL 0x04862b80
/* 0bf12a18 */  MOV R13,RAX
/* 0bf12a1b */  MOV RDI,RAX
/* 0bf12a1e */  LEA RSI,[0x1383bd8]
/* 0bf12a25 */  CALL 0x048648e0
/* 0bf12a2a */  MOV RDI,RAX
/* 0bf12a2d */  MOV ESI,0x1
/* 0bf12a32 */  CALL 0x04863e00
/* 0bf12a37 */  MOV R12D,EAX
/* 0bf12a3a */  MOV RDI,R13
/* 0bf12a3d */  LEA RSI,[0x12fdd1d]
/* 0bf12a44 */  CALL 0x048648e0
/* 0bf12a49 */  MOV RDI,RAX
/* 0bf12a4c */  MOV ESI,0x1
/* 0bf12a51 */  CALL 0x04863e00
/* 0bf12a56 */  MOV R14D,EAX
/* 0bf12a59 */  MOV RDI,R13
/* 0bf12a5c */  LEA RSI,[0x1405daa]
/* 0bf12a63 */  CALL 0x048648e0
/* 0bf12a68 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf12a6f */  LEA RDI,[RSP + 0x10]
/* 0bf12a74 */  MOV RSI,RAX
/* 0bf12a77 */  LEA RDX,[RSP + 0x50]
/* 0bf12a7c */  CALL 0x04863cb0
/* 0bf12a81 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf12a86 */  JZ 0x0bf12a9b
/* 0bf12a88 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf12a8d */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf12a92 */  AND RSI,-0x2
/* 0bf12a96 */  CALL 0x0412a280
/* 0bf12a9b */  MOV RDI,R13
/* 0bf12a9e */  LEA RSI,[0x13184a4]
/* 0bf12aa5 */  CALL 0x048648e0
/* 0bf12aaa */  MOV RDI,RAX
/* 0bf12aad */  XOR ESI,ESI
/* 0bf12aaf */  CALL 0x04863e00
/* 0bf12ab4 */  MOV R15D,EAX
/* 0bf12ab7 */  MOV RDI,R13
/* 0bf12aba */  LEA RSI,[0x1410553]
/* 0bf12ac1 */  CALL 0x048648e0
/* 0bf12ac6 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf12acd */  LEA RDI,[RSP + 0x38]
/* 0bf12ad2 */  MOV RSI,RAX
/* 0bf12ad5 */  LEA RDX,[RSP + 0x50]
/* 0bf12ada */  CALL 0x04863cb0
/* 0bf12adf */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf12ae4 */  JZ 0x0bf12af9
/* 0bf12ae6 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf12aeb */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf12af0 */  AND RSI,-0x2
/* 0bf12af4 */  CALL 0x0412a280
/* 0bf12af9 */  MOV RDI,R13
/* 0bf12afc */  LEA RSI,[0x12fdd26]
/* 0bf12b03 */  CALL 0x048648e0
/* 0bf12b08 */  MOV RDI,RAX
/* 0bf12b0b */  XOR ESI,ESI
/* 0bf12b0d */  CALL 0x04863e00
/* 0bf12b12 */  MOV dword ptr [RSP + 0x50],R12D
/* 0bf12b17 */  MOV dword ptr [RSP + 0x54],R14D
/* 0bf12b1c */  MOV dword ptr [RSP + 0x58],EAX
/* 0bf12b20 */  MOV dword ptr [RSP + 0x5c],R15D
/* 0bf12b25 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12b2a */  JNZ 0x0bf12b50
/* 0bf12b2c */  MOV RAX,qword ptr [RSP + 0x20]
/* 0bf12b31 */  LEA RCX,[RSP + 0x60]
/* 0bf12b36 */  MOV qword ptr [RCX + 0x10],RAX
/* 0bf12b3a */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0bf12b3f */  MOVUPS xmmword ptr [RCX],XMM0
/* 0bf12b42 */  JMP 0x0bf12b64
/* 0bf12b50 */  MOV RDX,qword ptr [RSP + 0x18]
/* 0bf12b55 */  MOV RSI,qword ptr [RSP + 0x20]
/* 0bf12b5a */  LEA RDI,[RSP + 0x60]
/* 0bf12b5f */  CALL 0x0412e5e0
/* 0bf12b64 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12b69 */  JNZ 0x0bf12b80
/* 0bf12b6b */  MOV RAX,qword ptr [RSP + 0x48]
/* 0bf12b70 */  MOV qword ptr [RBP + 0x10],RAX
/* 0bf12b74 */  MOVUPS XMM0,xmmword ptr [RSP + 0x38]
/* 0bf12b79 */  MOVUPS xmmword ptr [RBP],XMM0
/* 0bf12b7d */  JMP 0x0bf12b92
/* 0bf12b80 */  MOV RDX,qword ptr [RSP + 0x40]
/* 0bf12b85 */  MOV RSI,qword ptr [RSP + 0x48]
/* 0bf12b8a */  MOV RDI,RBP
/* 0bf12b8d */  CALL 0x0412e5e0
/* 0bf12b92 */  MOV RAX,qword ptr [RSP + 0x4f0]
/* 0bf12b9a */  CMP RAX,qword ptr [RSP + 0x4f8]
/* 0bf12ba2 */  JNC 0x0bf12c40
/* 0bf12ba8 */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0bf12bad */  MOVUPS xmmword ptr [RAX],XMM0
/* 0bf12bb0 */  LEA RDX,[RSP + 0x60]
/* 0bf12bb5 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0bf12bb9 */  MOV qword ptr [RAX + 0x20],RCX
/* 0bf12bbd */  MOVUPS XMM0,xmmword ptr [RDX]
/* 0bf12bc0 */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 0bf12bc4 */  XORPS XMM1,XMM1
/* 0bf12bc7 */  MOVUPS xmmword ptr [RDX],XMM1
/* 0bf12bca */  MOV qword ptr [RDX + 0x10],0x0
/* 0bf12bd2 */  MOV RCX,qword ptr [RBP + 0x10]
/* 0bf12bd6 */  MOV qword ptr [RAX + 0x38],RCX
/* 0bf12bda */  MOVUPS XMM0,xmmword ptr [RBP]
/* 0bf12bde */  MOVUPS xmmword ptr [RAX + 0x28],XMM0
/* 0bf12be2 */  MOVUPS xmmword ptr [RBP],XMM1
/* 0bf12be6 */  MOV qword ptr [RBP + 0x10],0x0
/* 0bf12bee */  ADD RAX,0x40
/* 0bf12bf2 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0bf12bfa */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf12bff */  JZ 0x0bf12c68
/* 0bf12c01 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0bf12c06 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0bf12c0b */  AND RSI,-0x2
/* 0bf12c0f */  CALL 0x0412a280
/* 0bf12c14 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12c19 */  JZ 0x0bf12c6f
/* 0bf12c1b */  MOV RSI,qword ptr [RSP + 0x38]
/* 0bf12c20 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0bf12c25 */  AND RSI,-0x2
/* 0bf12c29 */  CALL 0x0412a280
/* 0bf12c2e */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12c33 */  JZ 0x0bf129f0
/* 0bf12c39 */  JMP 0x0bf12c7a
/* 0bf12c40 */  LEA RDI,[RSP + 0x4e8]
/* 0bf12c48 */  LEA RSI,[RSP + 0x50]
/* 0bf12c4d */  CALL 0x0b0c0770
/* 0bf12c52 */  TEST byte ptr [RSP + 0x78],0x1
/* 0bf12c57 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0bf12c5f */  JNZ 0x0bf12ca0
/* 0bf12c61 */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf12c66 */  JNZ 0x0bf12c01
/* 0bf12c68 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12c6d */  JNZ 0x0bf12c1b
/* 0bf12c6f */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12c74 */  JZ 0x0bf129f0
/* 0bf12c7a */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf12c7f */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf12c84 */  AND RSI,-0x2
/* 0bf12c88 */  CALL 0x0412a280
/* 0bf12c8d */  JMP 0x0bf129f0
/* 0bf12ca0 */  MOV RSI,qword ptr [RSP + 0x78]
/* 0bf12ca5 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0bf12cad */  AND RSI,-0x2
/* 0bf12cb1 */  CALL 0x0412a280
/* 0bf12cb6 */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf12cbb */  JZ 0x0bf12c68
/* 0bf12cbd */  JMP 0x0bf12c01
/* 0bf12cc2 */  MOV RDI,RBX
/* 0bf12cc5 */  CALL 0x04864290
/* 0bf12cca */  TEST AL,AL
/* 0bf12ccc */  JZ 0x0bf12f49
/* 0bf12cd2 */  LEA RSI,[0x1383bd8]
/* 0bf12cd9 */  MOV RDI,RBX
/* 0bf12cdc */  CALL 0x048648e0
/* 0bf12ce1 */  MOV RDI,RAX
/* 0bf12ce4 */  MOV ESI,0x1
/* 0bf12ce9 */  CALL 0x04863e00
/* 0bf12cee */  MOV EBP,EAX
/* 0bf12cf0 */  LEA RSI,[0x12fdd1d]
/* 0bf12cf7 */  MOV RDI,RBX
/* 0bf12cfa */  CALL 0x048648e0
/* 0bf12cff */  MOV RDI,RAX
/* 0bf12d02 */  MOV ESI,0x1
/* 0bf12d07 */  CALL 0x04863e00
/* 0bf12d0c */  MOV R14D,EAX
/* 0bf12d0f */  LEA RSI,[0x1405daa]
/* 0bf12d16 */  MOV RDI,RBX
/* 0bf12d19 */  CALL 0x048648e0
/* 0bf12d1e */  MOV word ptr [RSP + 0x50],0x0
/* 0bf12d25 */  LEA RDI,[RSP + 0x10]
/* 0bf12d2a */  LEA RDX,[RSP + 0x50]
/* 0bf12d2f */  MOV RSI,RAX
/* 0bf12d32 */  CALL 0x04863cb0
/* 0bf12d37 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf12d3c */  JZ 0x0bf12d51
/* 0bf12d3e */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf12d43 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf12d48 */  AND RSI,-0x2
/* 0bf12d4c */  CALL 0x0412a280
/* 0bf12d51 */  LEA RSI,[0x13184a4]
/* 0bf12d58 */  MOV RDI,RBX
/* 0bf12d5b */  CALL 0x048648e0
/* 0bf12d60 */  MOV RDI,RAX
/* 0bf12d63 */  XOR ESI,ESI
/* 0bf12d65 */  CALL 0x04863e00
/* 0bf12d6a */  MOV R15D,EAX
/* 0bf12d6d */  LEA RSI,[0x1410553]
/* 0bf12d74 */  MOV RDI,RBX
/* 0bf12d77 */  CALL 0x048648e0
/* 0bf12d7c */  MOV word ptr [RSP + 0x50],0x0
/* 0bf12d83 */  LEA RDI,[RSP + 0x38]
/* 0bf12d88 */  LEA RDX,[RSP + 0x50]
/* 0bf12d8d */  MOV RSI,RAX
/* 0bf12d90 */  CALL 0x04863cb0
/* 0bf12d95 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf12d9a */  JZ 0x0bf12daf
/* 0bf12d9c */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf12da1 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf12da6 */  AND RSI,-0x2
/* 0bf12daa */  CALL 0x0412a280
/* 0bf12daf */  LEA RSI,[0x12fdd26]
/* 0bf12db6 */  MOV RDI,RBX
/* 0bf12db9 */  CALL 0x048648e0
/* 0bf12dbe */  MOV RDI,RAX
/* 0bf12dc1 */  XOR ESI,ESI
/* 0bf12dc3 */  CALL 0x04863e00
/* 0bf12dc8 */  MOV dword ptr [RSP + 0x50],EBP
/* 0bf12dcc */  MOV dword ptr [RSP + 0x54],R14D
/* 0bf12dd1 */  MOV dword ptr [RSP + 0x58],EAX
/* 0bf12dd5 */  MOV dword ptr [RSP + 0x5c],R15D
/* 0bf12dda */  LEA RBX,[RSP + 0x60]
/* 0bf12ddf */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12de4 */  JNZ 0x0bf12e18
/* 0bf12de6 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0bf12deb */  MOV qword ptr [RBX + 0x10],RAX
/* 0bf12def */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0bf12df4 */  MOVUPS xmmword ptr [RBX],XMM0
/* 0bf12df7 */  JMP 0x0bf12e2a
/* 0bf12df9 */  LEA RDI,[RSP + 0x410]
/* 0bf12e01 */  CALL 0x04862b40
/* 0bf12e06 */  LEA RDI,[RSP + 0xe8]
/* 0bf12e0e */  CALL 0x04862b40
/* 0bf12e13 */  JMP 0x0bf12f49
/* 0bf12e18 */  MOV RDX,qword ptr [RSP + 0x18]
/* 0bf12e1d */  MOV RSI,qword ptr [RSP + 0x20]
/* 0bf12e22 */  MOV RDI,RBX
/* 0bf12e25 */  CALL 0x0412e5e0
/* 0bf12e2a */  LEA R14,[RSP + 0x78]
/* 0bf12e2f */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12e34 */  JNZ 0x0bf12e4a
/* 0bf12e36 */  MOV RAX,qword ptr [RSP + 0x48]
/* 0bf12e3b */  MOV qword ptr [R14 + 0x10],RAX
/* 0bf12e3f */  MOVUPS XMM0,xmmword ptr [RSP + 0x38]
/* 0bf12e44 */  MOVUPS xmmword ptr [R14],XMM0
/* 0bf12e48 */  JMP 0x0bf12e5c
/* 0bf12e4a */  MOV RDX,qword ptr [RSP + 0x40]
/* 0bf12e4f */  MOV RSI,qword ptr [RSP + 0x48]
/* 0bf12e54 */  MOV RDI,R14
/* 0bf12e57 */  CALL 0x0412e5e0
/* 0bf12e5c */  MOV RAX,qword ptr [RSP + 0x4f0]
/* 0bf12e64 */  CMP RAX,qword ptr [RSP + 0x4f8]
/* 0bf12e6c */  JNC 0x0bf12efc
/* 0bf12e72 */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0bf12e77 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0bf12e7a */  MOV RCX,qword ptr [RBX + 0x10]
/* 0bf12e7e */  MOV qword ptr [RAX + 0x20],RCX
/* 0bf12e82 */  MOVUPS XMM0,xmmword ptr [RBX]
/* 0bf12e85 */  MOVUPS xmmword ptr [RAX + 0x10],XMM0
/* 0bf12e89 */  XORPS XMM0,XMM0
/* 0bf12e8c */  MOVUPS xmmword ptr [RBX],XMM0
/* 0bf12e8f */  MOV qword ptr [RBX + 0x10],0x0
/* 0bf12e97 */  MOV RCX,qword ptr [R14 + 0x10]
/* 0bf12e9b */  MOV qword ptr [RAX + 0x38],RCX
/* 0bf12e9f */  MOVUPS XMM1,xmmword ptr [R14]
/* 0bf12ea3 */  MOVUPS xmmword ptr [RAX + 0x28],XMM1
/* 0bf12ea7 */  MOVUPS xmmword ptr [R14],XMM0
/* 0bf12eab */  MOV qword ptr [R14 + 0x10],0x0
/* 0bf12eb3 */  ADD RAX,0x40
/* 0bf12eb7 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0bf12ebf */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf12ec4 */  JZ 0x0bf12f28
/* 0bf12ec6 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0bf12ecb */  MOV RDI,qword ptr [RSP + 0x70]
/* 0bf12ed0 */  AND RSI,-0x2
/* 0bf12ed4 */  CALL 0x0412a280
/* 0bf12ed9 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12ede */  JZ 0x0bf12f2f
/* 0bf12ee0 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0bf12ee5 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0bf12eea */  AND RSI,-0x2
/* 0bf12eee */  CALL 0x0412a280
/* 0bf12ef3 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12ef8 */  JNZ 0x0bf12f36
/* 0bf12efa */  JMP 0x0bf12f49
/* 0bf12efc */  LEA RDI,[RSP + 0x4e8]
/* 0bf12f04 */  LEA RSI,[RSP + 0x50]
/* 0bf12f09 */  CALL 0x0b0c0770
/* 0bf12f0e */  TEST byte ptr [RSP + 0x78],0x1
/* 0bf12f13 */  MOV qword ptr [RSP + 0x4f0],RAX
/* 0bf12f1b */  JNZ 0x0bf14a5a
/* 0bf12f21 */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf12f26 */  JNZ 0x0bf12ec6
/* 0bf12f28 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf12f2d */  JNZ 0x0bf12ee0
/* 0bf12f2f */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf12f34 */  JZ 0x0bf12f49
/* 0bf12f36 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf12f3b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf12f40 */  AND RSI,-0x2
/* 0bf12f44 */  CALL 0x0412a280
/* 0bf12f49 */  LEA RSI,[0x11e0a04]
/* 0bf12f50 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12f55 */  CALL 0x04865100
/* 0bf12f5a */  TEST AL,AL
/* 0bf12f5c */  JZ 0x0bf1335d
/* 0bf12f62 */  LEA RSI,[0x11e0a04]
/* 0bf12f69 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf12f6e */  CALL 0x048648e0
/* 0bf12f73 */  MOV RBX,RAX
/* 0bf12f76 */  MOV RDI,RAX
/* 0bf12f79 */  CALL 0x04864270
/* 0bf12f7e */  TEST AL,AL
/* 0bf12f80 */  JZ 0x0bf1318e
/* 0bf12f86 */  LEA RDI,[RSP + 0x38]
/* 0bf12f8b */  MOV RSI,RBX
/* 0bf12f8e */  CALL 0x04865530
/* 0bf12f93 */  LEA RDI,[RSP + 0xe8]
/* 0bf12f9b */  MOV RSI,RBX
/* 0bf12f9e */  CALL 0x048655b0
/* 0bf12fa3 */  LEA RBX,[RSP + 0x38]
/* 0bf12fa8 */  LEA RBP,[RSP + 0x10]
/* 0bf12fad */  LEA R15,[RSP + 0x50]
/* 0bf12fb2 */  JMP 0x0bf12fc8
/* 0bf12fc0 */  MOV RDI,RBX
/* 0bf12fc3 */  CALL 0x04862ba0
/* 0bf12fc8 */  MOV RDI,RBX
/* 0bf12fcb */  LEA RSI,[RSP + 0xe8]
/* 0bf12fd3 */  CALL 0x04862c80
/* 0bf12fd8 */  TEST AL,AL
/* 0bf12fda */  JNZ 0x0bf13288
/* 0bf12fe0 */  MOV RDI,RBX
/* 0bf12fe3 */  CALL 0x04862b80
/* 0bf12fe8 */  MOV R12,RAX
/* 0bf12feb */  MOV RDI,RAX
/* 0bf12fee */  LEA RSI,[0x123ca5a]
/* 0bf12ff5 */  CALL 0x048648e0
/* 0bf12ffa */  MOV RDI,RAX
/* 0bf12ffd */  MOV ESI,0x1
/* 0bf13002 */  CALL 0x04863e00
/* 0bf13007 */  MOV R13D,EAX
/* 0bf1300a */  MOV RDI,R12
/* 0bf1300d */  LEA RSI,[0x12fdd37]
/* 0bf13014 */  CALL 0x048648e0
/* 0bf13019 */  MOV RDI,RAX
/* 0bf1301c */  XOR ESI,ESI
/* 0bf1301e */  CALL 0x04863e00
/* 0bf13023 */  MOV R14D,EAX
/* 0bf13026 */  MOV RDI,R12
/* 0bf13029 */  LEA RSI,[0x13264d5]
/* 0bf13030 */  CALL 0x048648e0
/* 0bf13035 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf1303c */  MOV RDI,RBP
/* 0bf1303f */  MOV RSI,RAX
/* 0bf13042 */  MOV RDX,R15
/* 0bf13045 */  CALL 0x04863cb0
/* 0bf1304a */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf1304f */  JZ 0x0bf13064
/* 0bf13051 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf13056 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf1305b */  AND RSI,-0x2
/* 0bf1305f */  CALL 0x0412a280
/* 0bf13064 */  MOV RDI,R15
/* 0bf13067 */  MOV RSI,RBP
/* 0bf1306a */  CALL 0x0b04cfb0
/* 0bf1306f */  LEA RDI,[RSP + 0x450]
/* 0bf13077 */  MOV ESI,R13D
/* 0bf1307a */  MOV EDX,R14D
/* 0bf1307d */  MOV RCX,R15
/* 0bf13080 */  CALL 0x0c8be9a0
/* 0bf13085 */  TEST byte ptr [RSP + 0xb8],0x1
/* 0bf1308d */  JNZ 0x0bf130d0
/* 0bf1308f */  TEST byte ptr [RSP + 0x98],0x1
/* 0bf13097 */  JNZ 0x0bf130f3
/* 0bf13099 */  TEST byte ptr [RSP + 0x80],0x1
/* 0bf130a1 */  JNZ 0x0bf13116
/* 0bf130a3 */  TEST byte ptr [RSP + 0x68],0x1
/* 0bf130a8 */  JNZ 0x0bf1313a
/* 0bf130ae */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf130b3 */  JNZ 0x0bf13158
/* 0bf130b9 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf130be */  JZ 0x0bf12fc0
/* 0bf130c4 */  JMP 0x0bf13176
/* 0bf130d0 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0bf130d8 */  MOV RDI,qword ptr [RSP + 0xc8]
/* 0bf130e0 */  AND RSI,-0x2
/* 0bf130e4 */  CALL 0x0412a280
/* 0bf130e9 */  TEST byte ptr [RSP + 0x98],0x1
/* 0bf130f1 */  JZ 0x0bf13099
/* 0bf130f3 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0bf130fb */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0bf13103 */  AND RSI,-0x2
/* 0bf13107 */  CALL 0x0412a280
/* 0bf1310c */  TEST byte ptr [RSP + 0x80],0x1
/* 0bf13114 */  JZ 0x0bf130a3
/* 0bf13116 */  MOV RSI,qword ptr [RSP + 0x80]
/* 0bf1311e */  MOV RDI,qword ptr [RSP + 0x90]
/* 0bf13126 */  AND RSI,-0x2
/* 0bf1312a */  CALL 0x0412a280
/* 0bf1312f */  TEST byte ptr [RSP + 0x68],0x1
/* 0bf13134 */  JZ 0x0bf130ae
/* 0bf1313a */  MOV RSI,qword ptr [RSP + 0x68]
/* 0bf1313f */  MOV RDI,qword ptr [RSP + 0x78]
/* 0bf13144 */  AND RSI,-0x2
/* 0bf13148 */  CALL 0x0412a280
/* 0bf1314d */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf13152 */  JZ 0x0bf130b9
/* 0bf13158 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf1315d */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf13162 */  AND RSI,-0x2
/* 0bf13166 */  CALL 0x0412a280
/* 0bf1316b */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf13170 */  JZ 0x0bf12fc0
/* 0bf13176 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf1317b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf13180 */  AND RSI,-0x2
/* 0bf13184 */  CALL 0x0412a280
/* 0bf13189 */  JMP 0x0bf12fc0
/* 0bf1318e */  MOV RDI,RBX
/* 0bf13191 */  CALL 0x04864290
/* 0bf13196 */  TEST AL,AL
/* 0bf13198 */  JZ 0x0bf1335d
/* 0bf1319e */  LEA RSI,[0x123ca5a]
/* 0bf131a5 */  MOV RDI,RBX
/* 0bf131a8 */  CALL 0x048648e0
/* 0bf131ad */  MOV RDI,RAX
/* 0bf131b0 */  MOV ESI,0x1
/* 0bf131b5 */  CALL 0x04863e00
/* 0bf131ba */  MOV EBP,EAX
/* 0bf131bc */  LEA RSI,[0x12fdd37]
/* 0bf131c3 */  MOV RDI,RBX
/* 0bf131c6 */  CALL 0x048648e0
/* 0bf131cb */  MOV RDI,RAX
/* 0bf131ce */  XOR ESI,ESI
/* 0bf131d0 */  CALL 0x04863e00
/* 0bf131d5 */  MOV R14D,EAX
/* 0bf131d8 */  LEA RSI,[0x13264d5]
/* 0bf131df */  MOV RDI,RBX
/* 0bf131e2 */  CALL 0x048648e0
/* 0bf131e7 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf131ee */  LEA RDI,[RSP + 0x10]
/* 0bf131f3 */  LEA RDX,[RSP + 0x50]
/* 0bf131f8 */  MOV RSI,RAX
/* 0bf131fb */  CALL 0x04863cb0
/* 0bf13200 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf13205 */  JZ 0x0bf1321a
/* 0bf13207 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf1320c */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf13211 */  AND RSI,-0x2
/* 0bf13215 */  CALL 0x0412a280
/* 0bf1321a */  LEA RDI,[RSP + 0x50]
/* 0bf1321f */  LEA RSI,[RSP + 0x10]
/* 0bf13224 */  CALL 0x0b04cfb0
/* 0bf13229 */  LEA RDI,[RSP + 0x450]
/* 0bf13231 */  LEA RCX,[RSP + 0x50]
/* 0bf13236 */  MOV ESI,EBP
/* 0bf13238 */  MOV EDX,R14D
/* 0bf1323b */  CALL 0x0c8be9a0
/* 0bf13240 */  TEST byte ptr [RSP + 0xb8],0x1
/* 0bf13248 */  JNZ 0x0bf132a4
/* 0bf1324a */  TEST byte ptr [RSP + 0x98],0x1
/* 0bf13252 */  JNZ 0x0bf132c7
/* 0bf13254 */  TEST byte ptr [RSP + 0x80],0x1
/* 0bf1325c */  JNZ 0x0bf132ee
/* 0bf13262 */  TEST byte ptr [RSP + 0x68],0x1
/* 0bf13267 */  JNZ 0x0bf13312
/* 0bf1326d */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf13272 */  JNZ 0x0bf13330
/* 0bf13278 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf1327d */  JNZ 0x0bf1334a
/* 0bf13283 */  JMP 0x0bf1335d
/* 0bf13288 */  LEA RDI,[RSP + 0xe8]
/* 0bf13290 */  CALL 0x04862b40
/* 0bf13295 */  LEA RDI,[RSP + 0x38]
/* 0bf1329a */  CALL 0x04862b40
/* 0bf1329f */  JMP 0x0bf1335d
/* 0bf132a4 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0bf132ac */  MOV RDI,qword ptr [RSP + 0xc8]
/* 0bf132b4 */  AND RSI,-0x2
/* 0bf132b8 */  CALL 0x0412a280
/* 0bf132bd */  TEST byte ptr [RSP + 0x98],0x1
/* 0bf132c5 */  JZ 0x0bf13254
/* 0bf132c7 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0bf132cf */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0bf132d7 */  AND RSI,-0x2
/* 0bf132db */  CALL 0x0412a280
/* 0bf132e0 */  TEST byte ptr [RSP + 0x80],0x1
/* 0bf132e8 */  JZ 0x0bf13262
/* 0bf132ee */  MOV RSI,qword ptr [RSP + 0x80]
/* 0bf132f6 */  MOV RDI,qword ptr [RSP + 0x90]
/* 0bf132fe */  AND RSI,-0x2
/* 0bf13302 */  CALL 0x0412a280
/* 0bf13307 */  TEST byte ptr [RSP + 0x68],0x1
/* 0bf1330c */  JZ 0x0bf1326d
/* 0bf13312 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0bf13317 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0bf1331c */  AND RSI,-0x2
/* 0bf13320 */  CALL 0x0412a280
/* 0bf13325 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf1332a */  JZ 0x0bf13278
/* 0bf13330 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf13335 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf1333a */  AND RSI,-0x2
/* 0bf1333e */  CALL 0x0412a280
/* 0bf13343 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf13348 */  JZ 0x0bf1335d
/* 0bf1334a */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf1334f */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf13354 */  AND RSI,-0x2
/* 0bf13358 */  CALL 0x0412a280
/* 0bf1335d */  LEA RSI,[0x12b0cff]
/* 0bf13364 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13369 */  CALL 0x04865100
/* 0bf1336e */  TEST AL,AL
/* 0bf13370 */  JZ 0x0bf1353d
/* 0bf13376 */  LEA RSI,[0x12b0cff]
/* 0bf1337d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13382 */  CALL 0x048648e0
/* 0bf13387 */  MOV R14,RAX
/* 0bf1338a */  MOV RDI,RAX
/* 0bf1338d */  CALL 0x04864290
/* 0bf13392 */  TEST AL,AL
/* 0bf13394 */  JZ 0x0bf1340f
/* 0bf13396 */  LEA RSI,[0x11e9523]
/* 0bf1339d */  MOV RDI,R14
/* 0bf133a0 */  CALL 0x048648e0
/* 0bf133a5 */  MOV RDI,RAX
/* 0bf133a8 */  XOR ESI,ESI
/* 0bf133aa */  CALL 0x04863e00
/* 0bf133af */  MOV EBX,EAX
/* 0bf133b1 */  LEA RSI,[0x12ba56c]
/* 0bf133b8 */  MOV RDI,R14
/* 0bf133bb */  CALL 0x048648e0
/* 0bf133c0 */  MOV RDI,RAX
/* 0bf133c3 */  MOV ESI,0xf
/* 0bf133c8 */  CALL 0x04863e00
/* 0bf133cd */  MOV EBP,EAX
/* 0bf133cf */  LEA RSI,[0x11fb610]
/* 0bf133d6 */  MOV RDI,R14
/* 0bf133d9 */  CALL 0x048648e0
/* 0bf133de */  XOR R14D,R14D
/* 0bf133e1 */  MOV RDI,RAX
/* 0bf133e4 */  XOR ESI,ESI
/* 0bf133e6 */  CALL 0x04863ff0
/* 0bf133eb */  TEST EBX,EBX
/* 0bf133ed */  CMOVLE EBX,R14D
/* 0bf133f1 */  CMP EBX,0xf
/* 0bf133f4 */  MOV ECX,0xf
/* 0bf133f9 */  CMOVGE EBX,ECX
/* 0bf133fc */  TEST EBP,EBP
/* 0bf133fe */  CMOVG R14D,EBP
/* 0bf13402 */  CMP R14D,0xf
/* 0bf13406 */  CMOVGE R14D,ECX
/* 0bf1340a */  JMP 0x0bf13527
/* 0bf1340f */  XORPS XMM0,XMM0
/* 0bf13412 */  MOVAPS xmmword ptr [RSP + 0x2d0],XMM0
/* 0bf1341a */  MOV qword ptr [RSP + 0x2e0],0x0
/* 0bf13426 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf1342e */  MOVZX EAX,byte ptr [RSI]
/* 0bf13431 */  LEA RCX,[RSI + 0x1]
/* 0bf13435 */  MOV EDX,EAX
/* 0bf13437 */  SHR EDX,0x1
/* 0bf13439 */  TEST AL,0x1
/* 0bf1343b */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf13440 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf13445 */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf1344a */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf1344f */  LEA RSI,[0x1486b3c]
/* 0bf13456 */  LEA RDI,[RSP + 0x3c8]
/* 0bf1345e */  LEA R8,[RSP + 0x50]
/* 0bf13463 */  MOV EDX,0x9f
/* 0bf13468 */  MOV ECX,0xd
/* 0bf1346d */  CALL 0x0470d9a0
/* 0bf13472 */  LEA RDX,[RSP + 0x2d0]
/* 0bf1347a */  LEA RCX,[RSP + 0x3c8]
/* 0bf13482 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf13487 */  MOV ESI,0x2
/* 0bf1348c */  CALL 0x0d6b13c0
/* 0bf13491 */  TEST byte ptr [RSP + 0x3c8],0x1
/* 0bf13499 */  JZ 0x0bf134b4
/* 0bf1349b */  MOV RSI,qword ptr [RSP + 0x3c8]
/* 0bf134a3 */  MOV RDI,qword ptr [RSP + 0x3d8]
/* 0bf134ab */  AND RSI,-0x2
/* 0bf134af */  CALL 0x0412a280
/* 0bf134b4 */  MOV RBX,qword ptr [RSP + 0x2d0]
/* 0bf134bc */  MOV R14D,0xf
/* 0bf134c2 */  TEST RBX,RBX
/* 0bf134c5 */  JZ 0x0bf13523
/* 0bf134c7 */  MOV R15,qword ptr [RSP + 0x2d8]
/* 0bf134cf */  MOV RDI,RBX
/* 0bf134d2 */  CMP RBX,R15
/* 0bf134d5 */  JNZ 0x0bf134e9
/* 0bf134d7 */  JMP 0x0bf1350b
/* 0bf134e0 */  ADD R15,-0x20
/* 0bf134e4 */  CMP R15,RBX
/* 0bf134e7 */  JZ 0x0bf13503
/* 0bf134e9 */  TEST byte ptr [R15 + -0x18],0x1
/* 0bf134ee */  JZ 0x0bf134e0
/* 0bf134f0 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0bf134f4 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0bf134f8 */  AND RSI,-0x2
/* 0bf134fc */  CALL 0x0412a280
/* 0bf13501 */  JMP 0x0bf134e0
/* 0bf13503 */  MOV RDI,qword ptr [RSP + 0x2d0]
/* 0bf1350b */  MOV qword ptr [RSP + 0x2d8],RBX
/* 0bf13513 */  MOV RSI,qword ptr [RSP + 0x2e0]
/* 0bf1351b */  SUB RSI,RDI
/* 0bf1351e */  CALL 0x0412a280
/* 0bf13523 */  XOR EBX,EBX
/* 0bf13525 */  XOR EAX,EAX
/* 0bf13527 */  MOV dword ptr [RSP + 0x480],EBX
/* 0bf1352e */  MOV dword ptr [RSP + 0x484],R14D
/* 0bf13536 */  MOV byte ptr [RSP + 0x490],AL
/* 0bf1353d */  LEA RSI,[0x146caad]
/* 0bf13544 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13549 */  CALL 0x04865100
/* 0bf1354e */  TEST AL,AL
/* 0bf13550 */  JZ 0x0bf1384c
/* 0bf13556 */  LEA RSI,[0x146caad]
/* 0bf1355d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13562 */  CALL 0x048648e0
/* 0bf13567 */  MOV R14,RAX
/* 0bf1356a */  MOV RDI,RAX
/* 0bf1356d */  CALL 0x04864290
/* 0bf13572 */  TEST AL,AL
/* 0bf13574 */  JZ 0x0bf136f7
/* 0bf1357a */  LEA RSI,[0x11e9523]
/* 0bf13581 */  MOV RDI,R14
/* 0bf13584 */  CALL 0x048648e0
/* 0bf13589 */  MOV RDI,RAX
/* 0bf1358c */  MOV ESI,0x18
/* 0bf13591 */  CALL 0x04863e00
/* 0bf13596 */  MOV EBX,EAX
/* 0bf13598 */  LEA RSI,[0x12ba56c]
/* 0bf1359f */  MOV RDI,R14
/* 0bf135a2 */  CALL 0x048648e0
/* 0bf135a7 */  MOV RDI,RAX
/* 0bf135aa */  MOV ESI,0x80
/* 0bf135af */  CALL 0x04863e00
/* 0bf135b4 */  MOV EBP,EAX
/* 0bf135b6 */  CMP EBX,EAX
/* 0bf135b8 */  JLE 0x0bf137e3
/* 0bf135be */  XORPS XMM0,XMM0
/* 0bf135c1 */  MOVAPS xmmword ptr [RSP + 0x2b0],XMM0
/* 0bf135c9 */  MOV qword ptr [RSP + 0x2c0],0x0
/* 0bf135d5 */  LEA RDI,[0xf5463b0]
/* 0bf135dc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0bf135e3 */  MOV ESI,0x48
/* 0bf135e8 */  CALL qword ptr [RAX + 0x10]
/* 0bf135eb */  MOV R14,RAX
/* 0bf135ee */  TEST RAX,RAX
/* 0bf135f1 */  JZ 0x0bf14a91
/* 0bf135f7 */  MOV qword ptr [RSP + 0x168],R14
/* 0bf135ff */  MOV qword ptr [RSP + 0x158],0x49
/* 0bf1360b */  MOV qword ptr [RSP + 0x160],0x47
/* 0bf13617 */  MOVUPS XMM0,xmmword ptr [0x01333b1e]
/* 0bf1361e */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0bf13623 */  MOVUPS XMM0,xmmword ptr [0x01333b0e]
/* 0bf1362a */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0bf1362f */  MOVUPS XMM0,xmmword ptr [0x01333afe]
/* 0bf13636 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0bf1363b */  MOVUPS XMM0,xmmword ptr [0x01333aee]
/* 0bf13642 */  MOVUPS xmmword ptr [R14],XMM0
/* 0bf13646 */  MOV RAX,0x2e78616d203e2074
/* 0bf13650 */  MOV qword ptr [R14 + 0x3f],RAX
/* 0bf13654 */  MOV byte ptr [R14 + 0x47],0x0
/* 0bf13659 */  LEA RDX,[RSP + 0x2b0]
/* 0bf13661 */  LEA RCX,[RSP + 0x158]
/* 0bf13669 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf1366e */  MOV ESI,0x2
/* 0bf13673 */  CALL 0x0d6b13c0
/* 0bf13678 */  TEST byte ptr [RSP + 0x158],0x1
/* 0bf13680 */  JZ 0x0bf1369b
/* 0bf13682 */  MOV RSI,qword ptr [RSP + 0x158]
/* 0bf1368a */  MOV RDI,qword ptr [RSP + 0x168]
/* 0bf13692 */  AND RSI,-0x2
/* 0bf13696 */  CALL 0x0412a280
/* 0bf1369b */  MOV R14,qword ptr [RSP + 0x2b0]
/* 0bf136a3 */  TEST R14,R14
/* 0bf136a6 */  JZ 0x0bf1383a
/* 0bf136ac */  MOV R15,qword ptr [RSP + 0x2b8]
/* 0bf136b4 */  MOV RDI,R14
/* 0bf136b7 */  CMP R14,R15
/* 0bf136ba */  JNZ 0x0bf136dd
/* 0bf136bc */  JMP 0x0bf1381f
/* 0bf136d0 */  ADD R15,-0x20
/* 0bf136d4 */  CMP R15,R14
/* 0bf136d7 */  JZ 0x0bf13817
/* 0bf136dd */  TEST byte ptr [R15 + -0x18],0x1
/* 0bf136e2 */  JZ 0x0bf136d0
/* 0bf136e4 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0bf136e8 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0bf136ec */  AND RSI,-0x2
/* 0bf136f0 */  CALL 0x0412a280
/* 0bf136f5 */  JMP 0x0bf136d0
/* 0bf136f7 */  XORPS XMM0,XMM0
/* 0bf136fa */  MOVAPS xmmword ptr [RSP + 0x290],XMM0
/* 0bf13702 */  MOV qword ptr [RSP + 0x2a0],0x0
/* 0bf1370e */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf13716 */  MOVZX EAX,byte ptr [RSI]
/* 0bf13719 */  LEA RCX,[RSI + 0x1]
/* 0bf1371d */  MOV EDX,EAX
/* 0bf1371f */  SHR EDX,0x1
/* 0bf13721 */  TEST AL,0x1
/* 0bf13723 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf13728 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf1372d */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf13732 */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf13737 */  LEA RSI,[0x134e2b7]
/* 0bf1373e */  LEA RDI,[RSP + 0x3b0]
/* 0bf13746 */  LEA R8,[RSP + 0x50]
/* 0bf1374b */  MOV EDX,0x9b
/* 0bf13750 */  MOV ECX,0xd
/* 0bf13755 */  CALL 0x0470d9a0
/* 0bf1375a */  LEA RDX,[RSP + 0x290]
/* 0bf13762 */  LEA RCX,[RSP + 0x3b0]
/* 0bf1376a */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf1376f */  MOV ESI,0x2
/* 0bf13774 */  CALL 0x0d6b13c0
/* 0bf13779 */  TEST byte ptr [RSP + 0x3b0],0x1
/* 0bf13781 */  JZ 0x0bf1379c
/* 0bf13783 */  MOV RSI,qword ptr [RSP + 0x3b0]
/* 0bf1378b */  MOV RDI,qword ptr [RSP + 0x3c0]
/* 0bf13793 */  AND RSI,-0x2
/* 0bf13797 */  CALL 0x0412a280
/* 0bf1379c */  MOV RBX,qword ptr [RSP + 0x290]
/* 0bf137a4 */  TEST RBX,RBX
/* 0bf137a7 */  JZ 0x0bf1380b
/* 0bf137a9 */  MOV R14,qword ptr [RSP + 0x298]
/* 0bf137b1 */  MOV RDI,RBX
/* 0bf137b4 */  CMP RBX,R14
/* 0bf137b7 */  JNZ 0x0bf137c9
/* 0bf137b9 */  JMP 0x0bf137ef
/* 0bf137c0 */  ADD R14,-0x20
/* 0bf137c4 */  CMP R14,RBX
/* 0bf137c7 */  JZ 0x0bf137e7
/* 0bf137c9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf137ce */  JZ 0x0bf137c0
/* 0bf137d0 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf137d4 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf137d8 */  AND RSI,-0x2
/* 0bf137dc */  CALL 0x0412a280
/* 0bf137e1 */  JMP 0x0bf137c0
/* 0bf137e3 */  MOV EAX,EBX
/* 0bf137e5 */  JMP 0x0bf1383e
/* 0bf137e7 */  MOV RDI,qword ptr [RSP + 0x290]
/* 0bf137ef */  LEA RAX,[RSP + 0x2a0]
/* 0bf137f7 */  MOV qword ptr [RSP + 0x298],RBX
/* 0bf137ff */  MOV EBX,0x80
/* 0bf13804 */  MOV EBP,0x18
/* 0bf13809 */  JMP 0x0bf1382f
/* 0bf1380b */  MOV EBP,0x80
/* 0bf13810 */  MOV EAX,0x18
/* 0bf13815 */  JMP 0x0bf1383e
/* 0bf13817 */  MOV RDI,qword ptr [RSP + 0x2b0]
/* 0bf1381f */  LEA RAX,[RSP + 0x2c0]
/* 0bf13827 */  MOV qword ptr [RSP + 0x2b8],R14
/* 0bf1382f */  MOV RSI,qword ptr [RAX]
/* 0bf13832 */  SUB RSI,RDI
/* 0bf13835 */  CALL 0x0412a280
/* 0bf1383a */  MOV EAX,EBP
/* 0bf1383c */  MOV EBP,EBX
/* 0bf1383e */  MOV dword ptr [RSP + 0x494],EAX
/* 0bf13845 */  MOV dword ptr [RSP + 0x498],EBP
/* 0bf1384c */  LEA RSI,[0x1333b36]
/* 0bf13853 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13858 */  CALL 0x04865100
/* 0bf1385d */  TEST AL,AL
/* 0bf1385f */  JZ 0x0bf13869
/* 0bf13861 */  MOV byte ptr [RSP + 0x4bc],0x1
/* 0bf13869 */  LEA RSI,[0x11fb623]
/* 0bf13870 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13875 */  CALL 0x04865100
/* 0bf1387a */  TEST AL,AL
/* 0bf1387c */  JZ 0x0bf13886
/* 0bf1387e */  MOV byte ptr [RSP + 0x4bd],0x1
/* 0bf13886 */  LEA RSI,[0x13d2cd4]
/* 0bf1388d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13892 */  CALL 0x04865100
/* 0bf13897 */  TEST AL,AL
/* 0bf13899 */  JZ 0x0bf138a3
/* 0bf1389b */  MOV byte ptr [RSP + 0x4be],0x1
/* 0bf138a3 */  LEA RSI,[0x143b8ea]
/* 0bf138aa */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf138af */  CALL 0x04865100
/* 0bf138b4 */  TEST AL,AL
/* 0bf138b6 */  JZ 0x0bf138c0
/* 0bf138b8 */  MOV byte ptr [RSP + 0x4bf],0x0
/* 0bf138c0 */  LEA RSI,[0x143b90e]
/* 0bf138c7 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf138cc */  CALL 0x04865100
/* 0bf138d1 */  TEST AL,AL
/* 0bf138d3 */  JZ 0x0bf138dd
/* 0bf138d5 */  MOV byte ptr [RSP + 0x4c0],0x1
/* 0bf138dd */  LEA RSI,[0x127ef61]
/* 0bf138e4 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf138e9 */  CALL 0x04865100
/* 0bf138ee */  TEST AL,AL
/* 0bf138f0 */  JZ 0x0bf13913
/* 0bf138f2 */  LEA RSI,[0x127ef61]
/* 0bf138f9 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf138fe */  CALL 0x048648e0
/* 0bf13903 */  MOV RDI,qword ptr [RSP + 0x330]
/* 0bf1390b */  MOV RSI,RAX
/* 0bf1390e */  CALL 0x0c5c3aa0
/* 0bf13913 */  LEA RSI,[0x12fdd48]
/* 0bf1391a */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf1391f */  CALL 0x04865100
/* 0bf13924 */  TEST AL,AL
/* 0bf13926 */  JZ 0x0bf13a6e
/* 0bf1392c */  LEA RSI,[0x12fdd48]
/* 0bf13933 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13938 */  CALL 0x048648e0
/* 0bf1393d */  MOV RBX,RAX
/* 0bf13940 */  MOV RDI,RAX
/* 0bf13943 */  CALL 0x04864290
/* 0bf13948 */  TEST AL,AL
/* 0bf1394a */  JZ 0x0bf13a35
/* 0bf13950 */  LEA RSI,[0x11e9523]
/* 0bf13957 */  MOV RDI,RBX
/* 0bf1395a */  CALL 0x048648e0
/* 0bf1395f */  MOV word ptr [RSP + 0x10],0x0
/* 0bf13966 */  LEA RDI,[RSP + 0x50]
/* 0bf1396b */  LEA RDX,[RSP + 0x10]
/* 0bf13970 */  MOV RSI,RAX
/* 0bf13973 */  CALL 0x04863cb0
/* 0bf13978 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf1397d */  JZ 0x0bf13992
/* 0bf1397f */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf13984 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf13989 */  AND RSI,-0x2
/* 0bf1398d */  CALL 0x0412a280
/* 0bf13992 */  LEA RSI,[0x12ba56c]
/* 0bf13999 */  MOV RDI,RBX
/* 0bf1399c */  CALL 0x048648e0
/* 0bf139a1 */  MOV word ptr [RSP + 0x38],0x0
/* 0bf139a8 */  LEA RDI,[RSP + 0x10]
/* 0bf139ad */  LEA RDX,[RSP + 0x38]
/* 0bf139b2 */  MOV RSI,RAX
/* 0bf139b5 */  CALL 0x04863cb0
/* 0bf139ba */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf139bf */  JZ 0x0bf139d4
/* 0bf139c1 */  MOV RSI,qword ptr [RSP + 0x38]
/* 0bf139c6 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0bf139cb */  AND RSI,-0x2
/* 0bf139cf */  CALL 0x0412a280
/* 0bf139d4 */  LEA RDI,[RSP + 0x50]
/* 0bf139d9 */  XOR ESI,ESI
/* 0bf139db */  CALL 0x0bf2a190
/* 0bf139e0 */  MOV EBX,EAX
/* 0bf139e2 */  LEA RDI,[RSP + 0x10]
/* 0bf139e7 */  MOV ESI,0x3
/* 0bf139ec */  CALL 0x0bf2a190
/* 0bf139f1 */  MOV dword ptr [RSP + 0x4a8],EBX
/* 0bf139f8 */  MOV dword ptr [RSP + 0x4ac],EAX
/* 0bf139ff */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf13a04 */  JZ 0x0bf13a19
/* 0bf13a06 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf13a0b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf13a10 */  AND RSI,-0x2
/* 0bf13a14 */  CALL 0x0412a280
/* 0bf13a19 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf13a1e */  JZ 0x0bf13a6e
/* 0bf13a20 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf13a25 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf13a2a */  AND RSI,-0x2
/* 0bf13a2e */  CALL 0x0412a280
/* 0bf13a33 */  JMP 0x0bf13a6e
/* 0bf13a35 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf13a3c */  LEA RDI,[RSP + 0x50]
/* 0bf13a41 */  XOR ESI,ESI
/* 0bf13a43 */  CALL 0x0bf2a190
/* 0bf13a48 */  MOV EBX,EAX
/* 0bf13a4a */  MOV word ptr [RSP + 0x10],0x0
/* 0bf13a51 */  LEA RDI,[RSP + 0x10]
/* 0bf13a56 */  MOV ESI,0x3
/* 0bf13a5b */  CALL 0x0bf2a190
/* 0bf13a60 */  MOV dword ptr [RSP + 0x4a8],EBX
/* 0bf13a67 */  MOV dword ptr [RSP + 0x4ac],EAX
/* 0bf13a6e */  LEA RSI,[0x1333b52]
/* 0bf13a75 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13a7a */  CALL 0x04865100
/* 0bf13a7f */  TEST AL,AL
/* 0bf13a81 */  JZ 0x0bf13d7f
/* 0bf13a87 */  LEA RSI,[0x1333b52]
/* 0bf13a8e */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13a93 */  CALL 0x048648e0
/* 0bf13a98 */  MOV R14,RAX
/* 0bf13a9b */  MOV RDI,RAX
/* 0bf13a9e */  CALL 0x04864290
/* 0bf13aa3 */  TEST AL,AL
/* 0bf13aa5 */  JZ 0x0bf13c17
/* 0bf13aab */  LEA RSI,[0x11e9523]
/* 0bf13ab2 */  MOV RDI,R14
/* 0bf13ab5 */  CALL 0x048648e0
/* 0bf13aba */  MOV RDI,RAX
/* 0bf13abd */  MOV ESI,0x18
/* 0bf13ac2 */  CALL 0x04863e00
/* 0bf13ac7 */  MOV EBX,EAX
/* 0bf13ac9 */  LEA RSI,[0x12ba56c]
/* 0bf13ad0 */  MOV RDI,R14
/* 0bf13ad3 */  CALL 0x048648e0
/* 0bf13ad8 */  MOV RDI,RAX
/* 0bf13adb */  MOV ESI,0x80
/* 0bf13ae0 */  CALL 0x04863e00
/* 0bf13ae5 */  MOV EBP,EAX
/* 0bf13ae7 */  CMP EBX,EAX
/* 0bf13ae9 */  JLE 0x0bf13d03
/* 0bf13aef */  XORPS XMM0,XMM0
/* 0bf13af2 */  MOVAPS xmmword ptr [RSP + 0x270],XMM0
/* 0bf13afa */  MOV qword ptr [RSP + 0x280],0x0
/* 0bf13b06 */  LEA RDI,[0xf5463b0]
/* 0bf13b0d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0bf13b14 */  MOV ESI,0x50
/* 0bf13b19 */  CALL qword ptr [RAX + 0x10]
/* 0bf13b1c */  MOV R14,RAX
/* 0bf13b1f */  TEST RAX,RAX
/* 0bf13b22 */  JZ 0x0bf14aa2
/* 0bf13b28 */  MOV qword ptr [RSP + 0x150],R14
/* 0bf13b30 */  MOV qword ptr [RSP + 0x140],0x51
/* 0bf13b3c */  MOV qword ptr [RSP + 0x148],0x49
/* 0bf13b48 */  MOVUPS XMM0,xmmword ptr [0x01298520]
/* 0bf13b4f */  MOVUPS xmmword ptr [R14 + 0x39],XMM0
/* 0bf13b54 */  MOVUPS XMM0,xmmword ptr [0x01298517]
/* 0bf13b5b */  MOVUPS xmmword ptr [R14 + 0x30],XMM0
/* 0bf13b60 */  MOVUPS XMM0,xmmword ptr [0x01298507]
/* 0bf13b67 */  MOVUPS xmmword ptr [R14 + 0x20],XMM0
/* 0bf13b6c */  MOVUPS XMM0,xmmword ptr [0x012984f7]
/* 0bf13b73 */  MOVUPS xmmword ptr [R14 + 0x10],XMM0
/* 0bf13b78 */  MOVUPS XMM0,xmmword ptr [0x012984e7]
/* 0bf13b7f */  MOVUPS xmmword ptr [R14],XMM0
/* 0bf13b83 */  MOV byte ptr [R14 + 0x49],0x0
/* 0bf13b88 */  LEA RDX,[RSP + 0x270]
/* 0bf13b90 */  LEA RCX,[RSP + 0x140]
/* 0bf13b98 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf13b9d */  MOV ESI,0x2
/* 0bf13ba2 */  CALL 0x0d6b13c0
/* 0bf13ba7 */  TEST byte ptr [RSP + 0x140],0x1
/* 0bf13baf */  JZ 0x0bf13bca
/* 0bf13bb1 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0bf13bb9 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0bf13bc1 */  AND RSI,-0x2
/* 0bf13bc5 */  CALL 0x0412a280
/* 0bf13bca */  MOV R14,qword ptr [RSP + 0x270]
/* 0bf13bd2 */  TEST R14,R14
/* 0bf13bd5 */  JZ 0x0bf13d5a
/* 0bf13bdb */  MOV R15,qword ptr [RSP + 0x278]
/* 0bf13be3 */  MOV RDI,R14
/* 0bf13be6 */  CMP R14,R15
/* 0bf13be9 */  JNZ 0x0bf13bfd
/* 0bf13beb */  JMP 0x0bf13d3f
/* 0bf13bf0 */  ADD R15,-0x20
/* 0bf13bf4 */  CMP R15,R14
/* 0bf13bf7 */  JZ 0x0bf13d37
/* 0bf13bfd */  TEST byte ptr [R15 + -0x18],0x1
/* 0bf13c02 */  JZ 0x0bf13bf0
/* 0bf13c04 */  MOV RSI,qword ptr [R15 + -0x18]
/* 0bf13c08 */  MOV RDI,qword ptr [R15 + -0x8]
/* 0bf13c0c */  AND RSI,-0x2
/* 0bf13c10 */  CALL 0x0412a280
/* 0bf13c15 */  JMP 0x0bf13bf0
/* 0bf13c17 */  XORPS XMM0,XMM0
/* 0bf13c1a */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0bf13c22 */  MOV qword ptr [RSP + 0x260],0x0
/* 0bf13c2e */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf13c36 */  MOVZX EAX,byte ptr [RSI]
/* 0bf13c39 */  LEA RCX,[RSI + 0x1]
/* 0bf13c3d */  MOV EDX,EAX
/* 0bf13c3f */  SHR EDX,0x1
/* 0bf13c41 */  TEST AL,0x1
/* 0bf13c43 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf13c48 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf13c4d */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf13c52 */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf13c57 */  LEA RSI,[0x136addf]
/* 0bf13c5e */  LEA RDI,[RSP + 0x398]
/* 0bf13c66 */  LEA R8,[RSP + 0x50]
/* 0bf13c6b */  MOV EDX,0x9d
/* 0bf13c70 */  MOV ECX,0xd
/* 0bf13c75 */  CALL 0x0470d9a0
/* 0bf13c7a */  LEA RDX,[RSP + 0x250]
/* 0bf13c82 */  LEA RCX,[RSP + 0x398]
/* 0bf13c8a */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf13c8f */  MOV ESI,0x2
/* 0bf13c94 */  CALL 0x0d6b13c0
/* 0bf13c99 */  TEST byte ptr [RSP + 0x398],0x1
/* 0bf13ca1 */  JZ 0x0bf13cbc
/* 0bf13ca3 */  MOV RSI,qword ptr [RSP + 0x398]
/* 0bf13cab */  MOV RDI,qword ptr [RSP + 0x3a8]
/* 0bf13cb3 */  AND RSI,-0x2
/* 0bf13cb7 */  CALL 0x0412a280
/* 0bf13cbc */  MOV RBX,qword ptr [RSP + 0x250]
/* 0bf13cc4 */  TEST RBX,RBX
/* 0bf13cc7 */  JZ 0x0bf13d2b
/* 0bf13cc9 */  MOV R14,qword ptr [RSP + 0x258]
/* 0bf13cd1 */  MOV RDI,RBX
/* 0bf13cd4 */  CMP RBX,R14
/* 0bf13cd7 */  JNZ 0x0bf13ce9
/* 0bf13cd9 */  JMP 0x0bf13d0f
/* 0bf13ce0 */  ADD R14,-0x20
/* 0bf13ce4 */  CMP R14,RBX
/* 0bf13ce7 */  JZ 0x0bf13d07
/* 0bf13ce9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf13cee */  JZ 0x0bf13ce0
/* 0bf13cf0 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf13cf4 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf13cf8 */  AND RSI,-0x2
/* 0bf13cfc */  CALL 0x0412a280
/* 0bf13d01 */  JMP 0x0bf13ce0
/* 0bf13d03 */  MOV EAX,EBX
/* 0bf13d05 */  JMP 0x0bf13d5e
/* 0bf13d07 */  MOV RDI,qword ptr [RSP + 0x250]
/* 0bf13d0f */  LEA RAX,[RSP + 0x260]
/* 0bf13d17 */  MOV qword ptr [RSP + 0x258],RBX
/* 0bf13d1f */  MOV EBX,0x80
/* 0bf13d24 */  MOV EBP,0x18
/* 0bf13d29 */  JMP 0x0bf13d4f
/* 0bf13d2b */  MOV EBP,0x80
/* 0bf13d30 */  MOV EAX,0x18
/* 0bf13d35 */  JMP 0x0bf13d5e
/* 0bf13d37 */  MOV RDI,qword ptr [RSP + 0x270]
/* 0bf13d3f */  LEA RAX,[RSP + 0x280]
/* 0bf13d47 */  MOV qword ptr [RSP + 0x278],R14
/* 0bf13d4f */  MOV RSI,qword ptr [RAX]
/* 0bf13d52 */  SUB RSI,RDI
/* 0bf13d55 */  CALL 0x0412a280
/* 0bf13d5a */  MOV EAX,EBP
/* 0bf13d5c */  MOV EBP,EBX
/* 0bf13d5e */  XOR ECX,ECX
/* 0bf13d60 */  TEST EAX,EAX
/* 0bf13d62 */  CMOVG ECX,EAX
/* 0bf13d65 */  MOV dword ptr [RSP + 0x4b0],ECX
/* 0bf13d6c */  MOV EAX,dword ptr [RSP + 0x4b8]
/* 0bf13d73 */  CMP EBP,EAX
/* 0bf13d75 */  CMOVL EAX,EBP
/* 0bf13d78 */  MOV dword ptr [RSP + 0x4b4],EAX
/* 0bf13d7f */  LEA RSI,[0x11e0a1b]
/* 0bf13d86 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13d8b */  CALL 0x04865100
/* 0bf13d90 */  TEST AL,AL
/* 0bf13d92 */  JZ 0x0bf13d9c
/* 0bf13d94 */  MOV byte ptr [RSP + 0x4cc],0x1
/* 0bf13d9c */  LEA RSI,[0x14d7645]
/* 0bf13da3 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13da8 */  CALL 0x04865100
/* 0bf13dad */  TEST AL,AL
/* 0bf13daf */  JZ 0x0bf140b0
/* 0bf13db5 */  LEA RSI,[0x14d7645]
/* 0bf13dbc */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf13dc1 */  CALL 0x048648e0
/* 0bf13dc6 */  MOV R14,RAX
/* 0bf13dc9 */  MOV RDI,RAX
/* 0bf13dcc */  CALL 0x04864290
/* 0bf13dd1 */  TEST AL,AL
/* 0bf13dd3 */  JZ 0x0bf13f4a
/* 0bf13dd9 */  LEA RSI,[0x11e9523]
/* 0bf13de0 */  MOV RDI,R14
/* 0bf13de3 */  CALL 0x048648e0
/* 0bf13de8 */  MOV RDI,RAX
/* 0bf13deb */  XOR ESI,ESI
/* 0bf13ded */  CALL 0x04863e60
/* 0bf13df2 */  MOV RBX,RAX
/* 0bf13df5 */  LEA RSI,[0x12ba56c]
/* 0bf13dfc */  MOV RDI,R14
/* 0bf13dff */  CALL 0x048648e0
/* 0bf13e04 */  MOV RDI,RAX
/* 0bf13e07 */  MOV RSI,-0x1
/* 0bf13e0e */  CALL 0x04863e60
/* 0bf13e13 */  MOV R14,RAX
/* 0bf13e16 */  CMP RBX,RAX
/* 0bf13e19 */  JBE 0x0bf14043
/* 0bf13e1f */  XORPS XMM0,XMM0
/* 0bf13e22 */  MOVAPS xmmword ptr [RSP + 0x230],XMM0
/* 0bf13e2a */  MOV qword ptr [RSP + 0x240],0x0
/* 0bf13e36 */  LEA RDI,[0xf5463b0]
/* 0bf13e3d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0bf13e44 */  MOV ESI,0x50
/* 0bf13e49 */  CALL qword ptr [RAX + 0x10]
/* 0bf13e4c */  MOV R15,RAX
/* 0bf13e4f */  TEST RAX,RAX
/* 0bf13e52 */  JZ 0x0bf14ab3
/* 0bf13e58 */  MOV qword ptr [RSP + 0x138],R15
/* 0bf13e60 */  MOV qword ptr [RSP + 0x128],0x51
/* 0bf13e6c */  MOV qword ptr [RSP + 0x130],0x4b
/* 0bf13e78 */  MOVUPS XMM0,xmmword ptr [0x014bc05a]
/* 0bf13e7f */  MOVUPS xmmword ptr [R15 + 0x3b],XMM0
/* 0bf13e84 */  MOVUPS XMM0,xmmword ptr [0x014bc04f]
/* 0bf13e8b */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0bf13e90 */  MOVUPS XMM0,xmmword ptr [0x014bc03f]
/* 0bf13e97 */  MOVUPS xmmword ptr [R15 + 0x20],XMM0
/* 0bf13e9c */  MOVUPS XMM0,xmmword ptr [0x014bc02f]
/* 0bf13ea3 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0bf13ea8 */  MOVUPS XMM0,xmmword ptr [0x014bc01f]
/* 0bf13eaf */  MOVUPS xmmword ptr [R15],XMM0
/* 0bf13eb3 */  MOV byte ptr [R15 + 0x4b],0x0
/* 0bf13eb8 */  LEA RDX,[RSP + 0x230]
/* 0bf13ec0 */  LEA RCX,[RSP + 0x128]
/* 0bf13ec8 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf13ecd */  MOV ESI,0x2
/* 0bf13ed2 */  CALL 0x0d6b13c0
/* 0bf13ed7 */  TEST byte ptr [RSP + 0x128],0x1
/* 0bf13edf */  JZ 0x0bf13efa
/* 0bf13ee1 */  MOV RSI,qword ptr [RSP + 0x128]
/* 0bf13ee9 */  MOV RDI,qword ptr [RSP + 0x138]
/* 0bf13ef1 */  AND RSI,-0x2
/* 0bf13ef5 */  CALL 0x0412a280
/* 0bf13efa */  MOV R15,qword ptr [RSP + 0x230]
/* 0bf13f02 */  TEST R15,R15
/* 0bf13f05 */  JZ 0x0bf1409a
/* 0bf13f0b */  MOV R12,qword ptr [RSP + 0x238]
/* 0bf13f13 */  MOV RDI,R15
/* 0bf13f16 */  CMP R15,R12
/* 0bf13f19 */  JNZ 0x0bf13f2d
/* 0bf13f1b */  JMP 0x0bf1407f
/* 0bf13f20 */  ADD R12,-0x20
/* 0bf13f24 */  CMP R12,R15
/* 0bf13f27 */  JZ 0x0bf14077
/* 0bf13f2d */  TEST byte ptr [R12 + -0x18],0x1
/* 0bf13f33 */  JZ 0x0bf13f20
/* 0bf13f35 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0bf13f3a */  MOV RDI,qword ptr [R12 + -0x8]
/* 0bf13f3f */  AND RSI,-0x2
/* 0bf13f43 */  CALL 0x0412a280
/* 0bf13f48 */  JMP 0x0bf13f20
/* 0bf13f4a */  XORPS XMM0,XMM0
/* 0bf13f4d */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0bf13f55 */  MOV qword ptr [RSP + 0x220],0x0
/* 0bf13f61 */  LEA RDI,[0xf5463b0]
/* 0bf13f68 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0bf13f6f */  MOV ESI,0x98
/* 0bf13f74 */  CALL qword ptr [RAX + 0x10]
/* 0bf13f77 */  MOV RBX,RAX
/* 0bf13f7a */  TEST RAX,RAX
/* 0bf13f7d */  JZ 0x0bf14a80
/* 0bf13f83 */  MOV qword ptr [RSP + 0x120],RBX
/* 0bf13f8b */  MOV qword ptr [RSP + 0x110],0x99
/* 0bf13f97 */  MOV qword ptr [RSP + 0x118],0x96
/* 0bf13fa3 */  LEA RSI,[0x11aba4f]
/* 0bf13faa */  MOV EDX,0x96
/* 0bf13faf */  MOV RDI,RBX
/* 0bf13fb2 */  CALL 0x0eee2f00
/* 0bf13fb7 */  MOV byte ptr [RBX + 0x96],0x0
/* 0bf13fbe */  LEA RDX,[RSP + 0x210]
/* 0bf13fc6 */  LEA RCX,[RSP + 0x110]
/* 0bf13fce */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf13fd3 */  MOV ESI,0x2
/* 0bf13fd8 */  CALL 0x0d6b13c0
/* 0bf13fdd */  TEST byte ptr [RSP + 0x110],0x1
/* 0bf13fe5 */  JZ 0x0bf14000
/* 0bf13fe7 */  MOV RSI,qword ptr [RSP + 0x110]
/* 0bf13fef */  MOV RDI,qword ptr [RSP + 0x120]
/* 0bf13ff7 */  AND RSI,-0x2
/* 0bf13ffb */  CALL 0x0412a280
/* 0bf14000 */  MOV RBX,qword ptr [RSP + 0x210]
/* 0bf14008 */  TEST RBX,RBX
/* 0bf1400b */  JZ 0x0bf1406c
/* 0bf1400d */  MOV R14,qword ptr [RSP + 0x218]
/* 0bf14015 */  MOV RDI,RBX
/* 0bf14018 */  CMP RBX,R14
/* 0bf1401b */  JNZ 0x0bf14029
/* 0bf1401d */  JMP 0x0bf14050
/* 0bf14020 */  ADD R14,-0x20
/* 0bf14024 */  CMP R14,RBX
/* 0bf14027 */  JZ 0x0bf14048
/* 0bf14029 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf1402e */  JZ 0x0bf14020
/* 0bf14030 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf14034 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf14038 */  AND RSI,-0x2
/* 0bf1403c */  CALL 0x0412a280
/* 0bf14041 */  JMP 0x0bf14020
/* 0bf14043 */  MOV RAX,RBX
/* 0bf14046 */  JMP 0x0bf140a0
/* 0bf14048 */  MOV RDI,qword ptr [RSP + 0x210]
/* 0bf14050 */  LEA RAX,[RSP + 0x220]
/* 0bf14058 */  MOV qword ptr [RSP + 0x218],RBX
/* 0bf14060 */  MOV RBX,-0x1
/* 0bf14067 */  XOR R14D,R14D
/* 0bf1406a */  JMP 0x0bf1408f
/* 0bf1406c */  MOV R14,-0x1
/* 0bf14073 */  XOR EAX,EAX
/* 0bf14075 */  JMP 0x0bf140a0
/* 0bf14077 */  MOV RDI,qword ptr [RSP + 0x230]
/* 0bf1407f */  LEA RAX,[RSP + 0x240]
/* 0bf14087 */  MOV qword ptr [RSP + 0x238],R15
/* 0bf1408f */  MOV RSI,qword ptr [RAX]
/* 0bf14092 */  SUB RSI,RDI
/* 0bf14095 */  CALL 0x0412a280
/* 0bf1409a */  MOV RAX,R14
/* 0bf1409d */  MOV R14,RBX
/* 0bf140a0 */  MOV qword ptr [RSP + 0x4d0],RAX
/* 0bf140a8 */  MOV qword ptr [RSP + 0x4d8],R14
/* 0bf140b0 */  LEA RSI,[0x12b0d1b]
/* 0bf140b7 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf140bc */  CALL 0x04865100
/* 0bf140c1 */  TEST AL,AL
/* 0bf140c3 */  JZ 0x0bf145c8
/* 0bf140c9 */  LEA RSI,[0x12b0d1b]
/* 0bf140d0 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf140d5 */  CALL 0x048648e0
/* 0bf140da */  MOV RBP,RAX
/* 0bf140dd */  MOV word ptr [RSP + 0x50],0x0
/* 0bf140e4 */  MOV RDI,RAX
/* 0bf140e7 */  CALL 0x04864290
/* 0bf140ec */  TEST AL,AL
/* 0bf140ee */  JZ 0x0bf1422a
/* 0bf140f4 */  LEA RSI,[0x11e9523]
/* 0bf140fb */  MOV RDI,RBP
/* 0bf140fe */  CALL 0x048648e0
/* 0bf14103 */  MOV RDI,RAX
/* 0bf14106 */  XOR ESI,ESI
/* 0bf14108 */  CALL 0x04863e00
/* 0bf1410d */  MOV EBX,EAX
/* 0bf1410f */  LEA RSI,[0x12ba56c]
/* 0bf14116 */  MOV RDI,RBP
/* 0bf14119 */  CALL 0x048648e0
/* 0bf1411e */  MOV RDI,RAX
/* 0bf14121 */  XOR ESI,ESI
/* 0bf14123 */  CALL 0x04863e00
/* 0bf14128 */  MOV R14D,EAX
/* 0bf1412b */  CMP EBX,EAX
/* 0bf1412d */  JLE 0x0bf14313
/* 0bf14133 */  XORPS XMM0,XMM0
/* 0bf14136 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
/* 0bf1413e */  MOV qword ptr [RSP + 0x200],0x0
/* 0bf1414a */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf14152 */  MOVZX EAX,byte ptr [RSI]
/* 0bf14155 */  LEA RCX,[RSI + 0x1]
/* 0bf14159 */  MOV EDX,EAX
/* 0bf1415b */  SHR EDX,0x1
/* 0bf1415d */  TEST AL,0x1
/* 0bf1415f */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf14164 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf14169 */  MOV qword ptr [RSP + 0x10],RCX
/* 0bf1416e */  MOV qword ptr [RSP + 0x18],RDX
/* 0bf14173 */  LEA RSI,[0x12fdd64]
/* 0bf1417a */  LEA RDI,[RSP + 0x380]
/* 0bf14182 */  LEA R8,[RSP + 0x10]
/* 0bf14187 */  MOV EDX,0x2f
/* 0bf1418c */  MOV ECX,0xd
/* 0bf14191 */  CALL 0x0470d9a0
/* 0bf14196 */  LEA RDX,[RSP + 0x1f0]
/* 0bf1419e */  LEA RCX,[RSP + 0x380]
/* 0bf141a6 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf141ab */  MOV ESI,0x2
/* 0bf141b0 */  CALL 0x0d6b13c0
/* 0bf141b5 */  TEST byte ptr [RSP + 0x380],0x1
/* 0bf141bd */  JZ 0x0bf141d8
/* 0bf141bf */  MOV RSI,qword ptr [RSP + 0x380]
/* 0bf141c7 */  MOV RDI,qword ptr [RSP + 0x390]
/* 0bf141cf */  AND RSI,-0x2
/* 0bf141d3 */  CALL 0x0412a280
/* 0bf141d8 */  MOV R15,qword ptr [RSP + 0x1f0]
/* 0bf141e0 */  TEST R15,R15
/* 0bf141e3 */  JZ 0x0bf14367
/* 0bf141e9 */  MOV R12,qword ptr [RSP + 0x1f8]
/* 0bf141f1 */  MOV RDI,R15
/* 0bf141f4 */  CMP R15,R12
/* 0bf141f7 */  JNZ 0x0bf1420d
/* 0bf141f9 */  JMP 0x0bf1434f
/* 0bf14200 */  ADD R12,-0x20
/* 0bf14204 */  CMP R12,R15
/* 0bf14207 */  JZ 0x0bf14347
/* 0bf1420d */  TEST byte ptr [R12 + -0x18],0x1
/* 0bf14213 */  JZ 0x0bf14200
/* 0bf14215 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0bf1421a */  MOV RDI,qword ptr [R12 + -0x8]
/* 0bf1421f */  AND RSI,-0x2
/* 0bf14223 */  CALL 0x0412a280
/* 0bf14228 */  JMP 0x0bf14200
/* 0bf1422a */  XORPS XMM0,XMM0
/* 0bf1422d */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
/* 0bf14235 */  MOV qword ptr [RSP + 0x1c0],0x0
/* 0bf14241 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf14249 */  MOVZX EAX,byte ptr [RSI]
/* 0bf1424c */  LEA RCX,[RSI + 0x1]
/* 0bf14250 */  MOV EDX,EAX
/* 0bf14252 */  SHR EDX,0x1
/* 0bf14254 */  TEST AL,0x1
/* 0bf14256 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf1425b */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf14260 */  MOV qword ptr [RSP + 0x10],RCX
/* 0bf14265 */  MOV qword ptr [RSP + 0x18],RDX
/* 0bf1426a */  LEA RSI,[0x1486bdc]
/* 0bf14271 */  LEA RDI,[RSP + 0x350]
/* 0bf14279 */  LEA R8,[RSP + 0x10]
/* 0bf1427e */  MOV EDX,0x9a
/* 0bf14283 */  MOV ECX,0xd
/* 0bf14288 */  CALL 0x0470d9a0
/* 0bf1428d */  LEA RDX,[RSP + 0x1b0]
/* 0bf14295 */  LEA RCX,[RSP + 0x350]
/* 0bf1429d */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf142a2 */  MOV ESI,0x2
/* 0bf142a7 */  CALL 0x0d6b13c0
/* 0bf142ac */  TEST byte ptr [RSP + 0x350],0x1
/* 0bf142b4 */  JZ 0x0bf142cf
/* 0bf142b6 */  MOV RSI,qword ptr [RSP + 0x350]
/* 0bf142be */  MOV RDI,qword ptr [RSP + 0x360]
/* 0bf142c6 */  AND RSI,-0x2
/* 0bf142ca */  CALL 0x0412a280
/* 0bf142cf */  MOV RBX,qword ptr [RSP + 0x1b0]
/* 0bf142d7 */  TEST RBX,RBX
/* 0bf142da */  JZ 0x0bf1433d
/* 0bf142dc */  MOV R14,qword ptr [RSP + 0x1b8]
/* 0bf142e4 */  MOV RDI,RBX
/* 0bf142e7 */  CMP RBX,R14
/* 0bf142ea */  JNZ 0x0bf142f9
/* 0bf142ec */  JMP 0x0bf14323
/* 0bf142f0 */  ADD R14,-0x20
/* 0bf142f4 */  CMP R14,RBX
/* 0bf142f7 */  JZ 0x0bf1431b
/* 0bf142f9 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf142fe */  JZ 0x0bf142f0
/* 0bf14300 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf14304 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf14308 */  AND RSI,-0x2
/* 0bf1430c */  CALL 0x0412a280
/* 0bf14311 */  JMP 0x0bf142f0
/* 0bf14313 */  MOV R15D,EBX
/* 0bf14316 */  MOV EBX,R14D
/* 0bf14319 */  JMP 0x0bf1436a
/* 0bf1431b */  MOV RDI,qword ptr [RSP + 0x1b0]
/* 0bf14323 */  LEA RAX,[RSP + 0x1c0]
/* 0bf1432b */  MOV qword ptr [RSP + 0x1b8],RBX
/* 0bf14333 */  XOR R15D,R15D
/* 0bf14336 */  XOR EBX,EBX
/* 0bf14338 */  JMP 0x0bf1450e
/* 0bf1433d */  XOR R15D,R15D
/* 0bf14340 */  XOR EBX,EBX
/* 0bf14342 */  JMP 0x0bf14519
/* 0bf14347 */  MOV RDI,qword ptr [RSP + 0x1f0]
/* 0bf1434f */  MOV qword ptr [RSP + 0x1f8],R15
/* 0bf14357 */  MOV RSI,qword ptr [RSP + 0x200]
/* 0bf1435f */  SUB RSI,RDI
/* 0bf14362 */  CALL 0x0412a280
/* 0bf14367 */  MOV R15D,R14D
/* 0bf1436a */  LEA RSI,[0x13762e9]
/* 0bf14371 */  MOV RDI,RBP
/* 0bf14374 */  CALL 0x048648e0
/* 0bf14379 */  MOV word ptr [RSP + 0x38],0x0
/* 0bf14380 */  LEA RDI,[RSP + 0x10]
/* 0bf14385 */  LEA RDX,[RSP + 0x38]
/* 0bf1438a */  MOV RSI,RAX
/* 0bf1438d */  CALL 0x04863cb0
/* 0bf14392 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf14397 */  JZ 0x0bf143ac
/* 0bf14399 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf1439e */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf143a3 */  AND RSI,-0x2
/* 0bf143a7 */  CALL 0x0412a280
/* 0bf143ac */  MOV RAX,qword ptr [RSP + 0x20]
/* 0bf143b1 */  MOV qword ptr [RSP + 0x60],RAX
/* 0bf143b6 */  MOVUPS XMM0,xmmword ptr [RSP + 0x10]
/* 0bf143bb */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0bf143c0 */  MOV word ptr [RSP + 0x10],0x0
/* 0bf143c7 */  TEST byte ptr [RSP + 0x38],0x1
/* 0bf143cc */  JZ 0x0bf143e1
/* 0bf143ce */  MOV RSI,qword ptr [RSP + 0x38]
/* 0bf143d3 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0bf143d8 */  AND RSI,-0x2
/* 0bf143dc */  CALL 0x0412a280
/* 0bf143e1 */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0bf143e6 */  TEST AL,0x1
/* 0bf143e8 */  JZ 0x0bf143fa
/* 0bf143ea */  MOV RAX,qword ptr [RSP + 0x58]
/* 0bf143ef */  TEST RAX,RAX
/* 0bf143f2 */  JNZ 0x0bf14519
/* 0bf143f8 */  JMP 0x0bf14405
/* 0bf143fa */  SHR EAX,0x1
/* 0bf143fc */  TEST RAX,RAX
/* 0bf143ff */  JNZ 0x0bf14519
/* 0bf14405 */  XORPS XMM0,XMM0
/* 0bf14408 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM0
/* 0bf14410 */  MOV qword ptr [RSP + 0x1e0],0x0
/* 0bf1441c */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf14424 */  MOVZX EAX,byte ptr [RSI]
/* 0bf14427 */  LEA RCX,[RSI + 0x1]
/* 0bf1442b */  MOV EDX,EAX
/* 0bf1442d */  SHR EDX,0x1
/* 0bf1442f */  TEST AL,0x1
/* 0bf14431 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf14436 */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf1443b */  MOV qword ptr [RSP + 0x10],RCX
/* 0bf14440 */  MOV qword ptr [RSP + 0x18],RDX
/* 0bf14445 */  LEA RSI,[0x124b99c]
/* 0bf1444c */  LEA RDI,[RSP + 0x368]
/* 0bf14454 */  LEA R8,[RSP + 0x10]
/* 0bf14459 */  MOV EDX,0x41
/* 0bf1445e */  MOV ECX,0xd
/* 0bf14463 */  CALL 0x0470d9a0
/* 0bf14468 */  LEA RDX,[RSP + 0x1d0]
/* 0bf14470 */  LEA RCX,[RSP + 0x368]
/* 0bf14478 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf1447d */  MOV ESI,0x2
/* 0bf14482 */  CALL 0x0d6b13c0
/* 0bf14487 */  TEST byte ptr [RSP + 0x368],0x1
/* 0bf1448f */  JZ 0x0bf144aa
/* 0bf14491 */  MOV RSI,qword ptr [RSP + 0x368]
/* 0bf14499 */  MOV RDI,qword ptr [RSP + 0x378]
/* 0bf144a1 */  AND RSI,-0x2
/* 0bf144a5 */  CALL 0x0412a280
/* 0bf144aa */  MOV R14,qword ptr [RSP + 0x1d0]
/* 0bf144b2 */  TEST R14,R14
/* 0bf144b5 */  JZ 0x0bf14519
/* 0bf144b7 */  MOV R12,qword ptr [RSP + 0x1d8]
/* 0bf144bf */  MOV RDI,R14
/* 0bf144c2 */  CMP R14,R12
/* 0bf144c5 */  JNZ 0x0bf144d9
/* 0bf144c7 */  JMP 0x0bf144fe
/* 0bf144d0 */  ADD R12,-0x20
/* 0bf144d4 */  CMP R12,R14
/* 0bf144d7 */  JZ 0x0bf144f6
/* 0bf144d9 */  TEST byte ptr [R12 + -0x18],0x1
/* 0bf144df */  JZ 0x0bf144d0
/* 0bf144e1 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0bf144e6 */  MOV RDI,qword ptr [R12 + -0x8]
/* 0bf144eb */  AND RSI,-0x2
/* 0bf144ef */  CALL 0x0412a280
/* 0bf144f4 */  JMP 0x0bf144d0
/* 0bf144f6 */  MOV RDI,qword ptr [RSP + 0x1d0]
/* 0bf144fe */  LEA RAX,[RSP + 0x1e0]
/* 0bf14506 */  MOV qword ptr [RSP + 0x1d8],R14
/* 0bf1450e */  MOV RSI,qword ptr [RAX]
/* 0bf14511 */  SUB RSI,RDI
/* 0bf14514 */  CALL 0x0412a280
/* 0bf14519 */  XOR EAX,EAX
/* 0bf1451b */  TEST R15D,R15D
/* 0bf1451e */  CMOVG EAX,R15D
/* 0bf14522 */  MOV dword ptr [RSP + 0x4e0],EAX
/* 0bf14529 */  MOV dword ptr [RSP + 0x4e4],EBX
/* 0bf14530 */  LEA RDI,[RSP + 0x598]
/* 0bf14538 */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0bf1453d */  TEST byte ptr [RSP + 0x598],0x1
/* 0bf14545 */  JNZ 0x0bf1455e
/* 0bf14547 */  TEST AL,0x1
/* 0bf14549 */  JNZ 0x0bf1457c
/* 0bf1454b */  MOV RAX,qword ptr [RSP + 0x60]
/* 0bf14550 */  MOV qword ptr [RDI + 0x10],RAX
/* 0bf14554 */  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
/* 0bf14559 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0bf1455c */  JMP 0x0bf1458b
/* 0bf1455e */  LEA RSI,[RSP + 0x51]
/* 0bf14563 */  MOV EDX,EAX
/* 0bf14565 */  SHR EDX,0x1
/* 0bf14567 */  TEST AL,0x1
/* 0bf14569 */  CMOVNZ RSI,qword ptr [RSP + 0x60]
/* 0bf1456f */  CMOVNZ RDX,qword ptr [RSP + 0x58]
/* 0bf14575 */  CALL 0x04885120
/* 0bf1457a */  JMP 0x0bf1458b
/* 0bf1457c */  MOV RDX,qword ptr [RSP + 0x58]
/* 0bf14581 */  MOV RSI,qword ptr [RSP + 0x60]
/* 0bf14586 */  CALL 0x04885070
/* 0bf1458b */  LEA RSI,[0x11a108e]
/* 0bf14592 */  MOV RDI,RBP
/* 0bf14595 */  CALL 0x048648e0
/* 0bf1459a */  MOV RDI,RAX
/* 0bf1459d */  MOV ESI,0x64
/* 0bf145a2 */  CALL 0x04863e00
/* 0bf145a7 */  MOV dword ptr [RSP + 0x5b0],EAX
/* 0bf145ae */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf145b3 */  JZ 0x0bf145c8
/* 0bf145b5 */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf145ba */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf145bf */  AND RSI,-0x2
/* 0bf145c3 */  CALL 0x0412a280
/* 0bf145c8 */  LEA RSI,[0x14bc06b]
/* 0bf145cf */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf145d4 */  CALL 0x04865100
/* 0bf145d9 */  TEST AL,AL
/* 0bf145db */  JZ 0x0bf14830
/* 0bf145e1 */  LEA RSI,[0x14bc06b]
/* 0bf145e8 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf145ed */  CALL 0x048648e0
/* 0bf145f2 */  MOV RBX,RAX
/* 0bf145f5 */  MOV RDI,RAX
/* 0bf145f8 */  CALL 0x04864290
/* 0bf145fd */  TEST AL,AL
/* 0bf145ff */  JZ 0x0bf1467c
/* 0bf14601 */  LEA RSI,[0x1410553]
/* 0bf14608 */  MOV RDI,RBX
/* 0bf1460b */  CALL 0x048648e0
/* 0bf14610 */  MOV word ptr [RSP + 0x10],0x0
/* 0bf14617 */  LEA RDI,[RSP + 0x50]
/* 0bf1461c */  LEA RDX,[RSP + 0x10]
/* 0bf14621 */  MOV RSI,RAX
/* 0bf14624 */  CALL 0x04863cb0
/* 0bf14629 */  TEST byte ptr [RSP + 0x10],0x1
/* 0bf1462e */  JZ 0x0bf14643
/* 0bf14630 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0bf14635 */  MOV RDI,qword ptr [RSP + 0x20]
/* 0bf1463a */  AND RSI,-0x2
/* 0bf1463e */  CALL 0x0412a280
/* 0bf14643 */  LEA RDI,[RSP + 0x518]
/* 0bf1464b */  MOVZX EAX,byte ptr [RSP + 0x50]
/* 0bf14650 */  TEST byte ptr [RSP + 0x518],0x1
/* 0bf14658 */  JNZ 0x0bf14773
/* 0bf1465e */  TEST AL,0x1
/* 0bf14660 */  JNZ 0x0bf14807
/* 0bf14666 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0bf1466b */  MOV qword ptr [RDI + 0x10],RAX
/* 0bf1466f */  MOVUPS XMM0,xmmword ptr [RSP + 0x50]
/* 0bf14674 */  MOVUPS xmmword ptr [RDI],XMM0
/* 0bf14677 */  JMP 0x0bf14816
/* 0bf1467c */  XORPS XMM0,XMM0
/* 0bf1467f */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0bf14687 */  MOV qword ptr [RSP + 0x1a0],0x0
/* 0bf14693 */  MOV RSI,qword ptr [RSP + 0xe0]
/* 0bf1469b */  MOVZX EAX,byte ptr [RSI]
/* 0bf1469e */  LEA RCX,[RSI + 0x1]
/* 0bf146a2 */  MOV EDX,EAX
/* 0bf146a4 */  SHR EDX,0x1
/* 0bf146a6 */  TEST AL,0x1
/* 0bf146a8 */  CMOVNZ RCX,qword ptr [RSI + 0x10]
/* 0bf146ad */  CMOVNZ RDX,qword ptr [RSI + 0x8]
/* 0bf146b2 */  MOV qword ptr [RSP + 0x50],RCX
/* 0bf146b7 */  MOV qword ptr [RSP + 0x58],RDX
/* 0bf146bc */  LEA RSI,[0x14a2188]
/* 0bf146c3 */  LEA RDI,[RSP + 0x338]
/* 0bf146cb */  LEA R8,[RSP + 0x50]
/* 0bf146d0 */  MOV EDX,0x9e
/* 0bf146d5 */  MOV ECX,0xd
/* 0bf146da */  CALL 0x0470d9a0
/* 0bf146df */  LEA RDX,[RSP + 0x190]
/* 0bf146e7 */  LEA RCX,[RSP + 0x338]
/* 0bf146ef */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf146f4 */  MOV ESI,0x2
/* 0bf146f9 */  CALL 0x0d6b13c0
/* 0bf146fe */  TEST byte ptr [RSP + 0x338],0x1
/* 0bf14706 */  JZ 0x0bf14721
/* 0bf14708 */  MOV RSI,qword ptr [RSP + 0x338]
/* 0bf14710 */  MOV RDI,qword ptr [RSP + 0x348]
/* 0bf14718 */  AND RSI,-0x2
/* 0bf1471c */  CALL 0x0412a280
/* 0bf14721 */  MOV RBX,qword ptr [RSP + 0x190]
/* 0bf14729 */  TEST RBX,RBX
/* 0bf1472c */  JZ 0x0bf147b4
/* 0bf14732 */  MOV R14,qword ptr [RSP + 0x198]
/* 0bf1473a */  MOV RDI,RBX
/* 0bf1473d */  CMP RBX,R14
/* 0bf14740 */  JNZ 0x0bf14759
/* 0bf14742 */  JMP 0x0bf1479c
/* 0bf14750 */  ADD R14,-0x20
/* 0bf14754 */  CMP R14,RBX
/* 0bf14757 */  JZ 0x0bf14794
/* 0bf14759 */  TEST byte ptr [R14 + -0x18],0x1
/* 0bf1475e */  JZ 0x0bf14750
/* 0bf14760 */  MOV RSI,qword ptr [R14 + -0x18]
/* 0bf14764 */  MOV RDI,qword ptr [R14 + -0x8]
/* 0bf14768 */  AND RSI,-0x2
/* 0bf1476c */  CALL 0x0412a280
/* 0bf14771 */  JMP 0x0bf14750
/* 0bf14773 */  MOV EDX,EAX
/* 0bf14775 */  SHR EDX,0x1
/* 0bf14777 */  TEST AL,0x1
/* 0bf14779 */  LEA RSI,[RSP + 0x51]
/* 0bf1477e */  CMOVNZ RSI,qword ptr [RSP + 0x60]
/* 0bf14784 */  CMOVNZ RDX,qword ptr [RSP + 0x58]
/* 0bf1478a */  CALL 0x04885120
/* 0bf1478f */  JMP 0x0bf14816
/* 0bf14794 */  MOV RDI,qword ptr [RSP + 0x190]
/* 0bf1479c */  MOV qword ptr [RSP + 0x198],RBX
/* 0bf147a4 */  MOV RSI,qword ptr [RSP + 0x1a0]
/* 0bf147ac */  SUB RSI,RDI
/* 0bf147af */  CALL 0x0412a280
/* 0bf147b4 */  MOV word ptr [RSP + 0x50],0x0
/* 0bf147bb */  LEA RDI,[RSP + 0x518]
/* 0bf147c3 */  TEST byte ptr [RSP + 0x518],0x1
/* 0bf147cb */  JNZ 0x0bf147f9
/* 0bf147cd */  MOV RAX,qword ptr [RSP + 0x60]
/* 0bf147d2 */  MOV qword ptr [RDI + 0x10],RAX
/* 0bf147d6 */  MOVZX EAX,word ptr [RSP + 0x50]
/* 0bf147db */  MOV word ptr [RDI],AX
/* 0bf147de */  MOV RAX,qword ptr [RSP + 0x52]
/* 0bf147e3 */  MOV qword ptr [RDI + 0x2],RAX
/* 0bf147e7 */  MOV EAX,dword ptr [RSP + 0x5a]
/* 0bf147eb */  MOV dword ptr [RDI + 0xa],EAX
/* 0bf147ee */  MOVZX EAX,word ptr [RSP + 0x5e]
/* 0bf147f3 */  MOV word ptr [RDI + 0xe],AX
/* 0bf147f7 */  JMP 0x0bf14830
/* 0bf147f9 */  LEA RSI,[RSP + 0x51]
/* 0bf147fe */  XOR EDX,EDX
/* 0bf14800 */  CALL 0x04885120
/* 0bf14805 */  JMP 0x0bf14816
/* 0bf14807 */  MOV RDX,qword ptr [RSP + 0x58]
/* 0bf1480c */  MOV RSI,qword ptr [RSP + 0x60]
/* 0bf14811 */  CALL 0x04885070
/* 0bf14816 */  TEST byte ptr [RSP + 0x50],0x1
/* 0bf1481b */  JZ 0x0bf14830
/* 0bf1481d */  MOV RSI,qword ptr [RSP + 0x50]
/* 0bf14822 */  MOV RDI,qword ptr [RSP + 0x60]
/* 0bf14827 */  AND RSI,-0x2
/* 0bf1482b */  CALL 0x0412a280
/* 0bf14830 */  LEA RSI,[0x1298531]
/* 0bf14837 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf1483c */  CALL 0x04865100
/* 0bf14841 */  TEST AL,AL
/* 0bf14843 */  JZ 0x0bf1484d
/* 0bf14845 */  MOV byte ptr [RSP + 0x5b4],0x1
/* 0bf1484d */  LEA RSI,[0x1454b59]
/* 0bf14854 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf14859 */  CALL 0x04865100
/* 0bf1485e */  TEST AL,AL
/* 0bf14860 */  JZ 0x0bf14a2c
/* 0bf14866 */  LEA RSI,[0x1454b59]
/* 0bf1486d */  MOV RDI,qword ptr [RSP + 0x8]
/* 0bf14872 */  CALL 0x048648e0
/* 0bf14877 */  MOV RBX,RAX
/* 0bf1487a */  MOV RDI,RAX
/* 0bf1487d */  CALL 0x04864290
/* 0bf14882 */  TEST AL,AL
/* 0bf14884 */  JZ 0x0bf14a2c
/* 0bf1488a */  LEA RSI,[0x14525f3]
/* 0bf14891 */  MOV RDI,RBX
/* 0bf14894 */  CALL 0x048648e0
/* 0bf14899 */  MOV R14,RAX
/* 0bf1489c */  MOV RDI,RAX
/* 0bf1489f */  CALL 0x04864260
/* 0bf148a4 */  TEST AL,AL
/* 0bf148a6 */  JZ 0x0bf149f6
/* 0bf148ac */  XORPS XMM0,XMM0
/* 0bf148af */  MOVAPS xmmword ptr [RSP + 0x170],XMM0
/* 0bf148b7 */  MOV qword ptr [RSP + 0x180],0x0
/* 0bf148c3 */  LEA RDI,[0xf5463b0]
/* 0bf148ca */  MOV RAX,qword ptr [0x0f5463b0]
/* 0bf148d1 */  MOV ESI,0x48
/* 0bf148d6 */  CALL qword ptr [RAX + 0x10]
/* 0bf148d9 */  MOV R15,RAX
/* 0bf148dc */  TEST RAX,RAX
/* 0bf148df */  JZ 0x0bf14ac4
/* 0bf148e5 */  MOV qword ptr [RSP + 0x108],R15
/* 0bf148ed */  MOV qword ptr [RSP + 0xf8],0x49
/* 0bf148f9 */  MOV qword ptr [RSP + 0x100],0x43
/* 0bf14905 */  MOVUPS XMM0,xmmword ptr [0x01265391]
/* 0bf1490c */  MOVUPS xmmword ptr [R15 + 0x30],XMM0
/* 0bf14911 */  MOVUPS XMM0,xmmword ptr [0x01265381]
/* 0bf14918 */  MOVUPS xmmword ptr [R15 + 0x20],XMM0
/* 0bf1491d */  MOVUPS XMM0,xmmword ptr [0x01265371]
/* 0bf14924 */  MOVUPS xmmword ptr [R15 + 0x10],XMM0
/* 0bf14929 */  MOVUPS XMM0,xmmword ptr [0x01265361]
/* 0bf14930 */  MOVUPS xmmword ptr [R15],XMM0
/* 0bf14934 */  MOV dword ptr [R15 + 0x3f],0x7265746c
/* 0bf1493c */  MOV byte ptr [R15 + 0x43],0x0
/* 0bf14941 */  LEA RDX,[RSP + 0x170]
/* 0bf14949 */  LEA RCX,[RSP + 0xf8]
/* 0bf14951 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0bf14956 */  MOV ESI,0x2
/* 0bf1495b */  CALL 0x0d6b13c0
/* 0bf14960 */  TEST byte ptr [RSP + 0xf8],0x1
/* 0bf14968 */  JZ 0x0bf14983
/* 0bf1496a */  MOV RSI,qword ptr [RSP + 0xf8]
/* 0bf14972 */  MOV RDI,qword ptr [RSP + 0x108]
/* 0bf1497a */  AND RSI,-0x2
/* 0bf1497e */  CALL 0x0412a280
/* 0bf14983 */  MOV R15,qword ptr [RSP + 0x170]
/* 0bf1498b */  TEST R15,R15
/* 0bf1498e */  JZ 0x0bf149f6
/* 0bf14990 */  MOV R12,qword ptr [RSP + 0x178]
/* 0bf14998 */  MOV RDI,R15
/* 0bf1499b */  CMP R15,R12
/* 0bf1499e */  JNZ 0x0bf149b9
/* 0bf149a0 */  JMP 0x0bf149de
/* 0bf149b0 */  ADD R12,-0x20
/* 0bf149b4 */  CMP R12,R15
/* 0bf149b7 */  JZ 0x0bf149d6
/* 0bf149b9 */  TEST byte ptr [R12 + -0x18],0x1
/* 0bf149bf */  JZ 0x0bf149b0
/* 0bf149c1 */  MOV RSI,qword ptr [R12 + -0x18]
/* 0bf149c6 */  MOV RDI,qword ptr [R12 + -0x8]
/* 0bf149cb */  AND RSI,-0x2
/* 0bf149cf */  CALL 0x0412a280
/* 0bf149d4 */  JMP 0x0bf149b0
/* 0bf149d6 */  MOV RDI,qword ptr [RSP + 0x170]
/* 0bf149de */  MOV qword ptr [RSP + 0x178],R15
/* 0bf149e6 */  MOV RSI,qword ptr [RSP + 0x180]
/* 0bf149ee */  SUB RSI,RDI
/* 0bf149f1 */  CALL 0x0412a280
/* 0bf149f6 */  MOV RDI,R14
/* 0bf149f9 */  XOR ESI,ESI
/* 0bf149fb */  CALL 0x04863e30
/* 0bf14a00 */  MOV EBP,EAX
/* 0bf14a02 */  LEA RSI,[0x143b924]
/* 0bf14a09 */  MOV RDI,RBX
/* 0bf14a0c */  CALL 0x048648e0
/* 0bf14a11 */  MOV RDI,RAX
/* 0bf14a14 */  MOV ESI,0xa
/* 0bf14a19 */  CALL 0x04863e30
/* 0bf14a1e */  MOV dword ptr [RSP + 0x4c4],EBP
/* 0bf14a25 */  MOV dword ptr [RSP + 0x4c8],EAX
/* 0bf14a2c */  LEA RBX,[RSP + 0x450]
/* 0bf14a34 */  MOV RDI,qword ptr [RSP]
/* 0bf14a38 */  MOV RSI,RBX
/* 0bf14a3b */  CALL 0x0b0bffd0
/* 0bf14a40 */  MOV RDI,RBX
/* 0bf14a43 */  CALL 0x0b0c04b0
/* 0bf14a48 */  ADD RSP,0x5c8
/* 0bf14a4f */  POP RBX
/* 0bf14a50 */  POP R12
/* 0bf14a52 */  POP R13
/* 0bf14a54 */  POP R14
/* 0bf14a56 */  POP R15
/* 0bf14a58 */  POP RBP
/* 0bf14a59 */  RET
/* 0bf14a5a */  MOV RSI,qword ptr [RSP + 0x78]
/* 0bf14a5f */  MOV RDI,qword ptr [RSP + 0x88]
/* 0bf14a67 */  AND RSI,-0x2
/* 0bf14a6b */  CALL 0x0412a280
/* 0bf14a70 */  TEST byte ptr [RSP + 0x60],0x1
/* 0bf14a75 */  JZ 0x0bf12f28
/* 0bf14a7b */  JMP 0x0bf12ec6
/* 0bf14a80 */  MOV EDI,0x98
/* 0bf14a85 */  XOR ESI,ESI
/* 0bf14a87 */  CALL 0x0eec74c0
/* 0bf14a8c */  JMP 0x0bf13f83
/* 0bf14a91 */  MOV EDI,0x48
/* 0bf14a96 */  XOR ESI,ESI
/* 0bf14a98 */  CALL 0x0eec74c0
/* 0bf14a9d */  JMP 0x0bf135f7
/* 0bf14aa2 */  MOV EDI,0x50
/* 0bf14aa7 */  XOR ESI,ESI
/* 0bf14aa9 */  CALL 0x0eec74c0
/* 0bf14aae */  JMP 0x0bf13b28
/* 0bf14ab3 */  MOV EDI,0x50
/* 0bf14ab8 */  XOR ESI,ESI
/* 0bf14aba */  CALL 0x0eec74c0
/* 0bf14abf */  JMP 0x0bf13e58
/* 0bf14ac4 */  MOV EDI,0x48
/* 0bf14ac9 */  XOR ESI,ESI
/* 0bf14acb */  CALL 0x0eec74c0
/* 0bf14ad0 */  JMP 0x0bf148e5
