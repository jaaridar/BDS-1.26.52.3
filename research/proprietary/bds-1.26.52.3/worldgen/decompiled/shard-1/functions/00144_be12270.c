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
