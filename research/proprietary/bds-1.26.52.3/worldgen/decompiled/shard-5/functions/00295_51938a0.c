/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52938a0 (ELF vaddr 0x51938a0)
 * Label: caller-of-seed
 * Body:  [[052938a0, 05294155] [05294160, 052941c8] [052941d0, 0529426b] [05294270, 05294303]]
 * Ghidra: FUN_052938a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052938a0(undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStack_a34;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0ca70a10();
  *param_1 = &UNK_0ef9d960;
  param_1[0xe] = &UNK_0ef9db38;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = &UNK_0ef9fcf0;
  param_1[0x2c] = param_1 + 0x28;
  param_1[0x2e] = param_1 + 0x2e;
  param_1[0x2f] = param_1 + 0x2e;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  func_0x0eee1090(param_1 + 0x35);
  param_1[0x36] = 0;
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar11 = 7;
  uVar15 = param_3;
  while( true ) {
    uVar13 = ((ulong)((uVar15 >> 0x1e ^ uVar15) * 0x6c078965) + lVar11) - 6;
    uVar15 = (uint)uVar13;
    (&uStack_a34)[lVar11] = uVar15;
    if (lVar11 == 0x193) break;
    uVar15 = ((int)lVar11 + ((uint)(uVar13 >> 0x1e) & 3 ^ uVar15) * 0x6c078965) - 5;
    *(uint *)((long)&puStack_a30 + lVar11 * 4) = uVar15;
    lVar11 = lVar11 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  uStack_a20 = param_3;
  uStack_a1c = param_3;
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar8 = 0x10;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  func_0x0d341b00(puVar8,&puStack_a30,0x101,1);
  lVar11 = param_1[0x22];
  param_1[0x22] = puVar8;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 8);
    if (lVar10 != 0) {
      *(long *)(lVar11 + 0x10) = lVar10;
      FUN_0412a280(lVar10,*(long *)(lVar11 + 0x18) - lVar10);
    }
    FUN_0412a280(lVar11,0x28);
  }
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar8 = 0x10;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  func_0x0d341b00(puVar8,&puStack_a30,0x101,1);
  lVar11 = param_1[0x23];
  param_1[0x23] = puVar8;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 8);
    if (lVar10 != 0) {
      *(long *)(lVar11 + 0x10) = lVar10;
      FUN_0412a280(lVar10,*(long *)(lVar11 + 0x18) - lVar10);
    }
    FUN_0412a280(lVar11,0x28);
  }
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar8 = 8;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  func_0x0d341b00(puVar8,&puStack_a30,0x101,1);
  lVar11 = param_1[0x24];
  param_1[0x24] = puVar8;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 8);
    if (lVar10 != 0) {
      *(long *)(lVar11 + 0x10) = lVar10;
      FUN_0412a280(lVar10,*(long *)(lVar11 + 0x18) - lVar10);
    }
    FUN_0412a280(lVar11,0x28);
  }
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80c);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80c,0);
  }
  func_0x0eee2dd0(puVar9,0,0x80c);
  fVar17 = (float)(**(code **)(puStack_a30 + 0x30))(&puStack_a30);
  fVar18 = (float)(**(code **)(puStack_a30 + 0x30))(&puStack_a30);
  fVar19 = (float)(**(code **)(puStack_a30 + 0x30))(&puStack_a30);
  fVar17 = fVar17 * _DAT_01198344;
  *puVar9 = CONCAT44(fVar18 * _UNK_014e4d64,fVar19 * _DAT_014e4d60);
  *(float *)(puVar9 + 1) = fVar17;
  uVar4 = _UNK_014e31a8;
  *(undefined8 *)((long)puVar9 + 0xc) = _DAT_014e31a0;
  *(undefined8 *)((long)puVar9 + 0x14) = uVar4;
  uVar4 = _UNK_014e20a8;
  *(undefined8 *)((long)puVar9 + 0x1c) = _DAT_014e20a0;
  *(undefined8 *)((long)puVar9 + 0x24) = uVar4;
  uVar4 = _UNK_014e1d28;
  *(undefined8 *)((long)puVar9 + 0x2c) = _DAT_014e1d20;
  *(undefined8 *)((long)puVar9 + 0x34) = uVar4;
  uVar4 = _UNK_014e1d38;
  *(undefined8 *)((long)puVar9 + 0x3c) = _DAT_014e1d30;
  *(undefined8 *)((long)puVar9 + 0x44) = uVar4;
  uVar4 = _UNK_014e21a8;
  *(undefined8 *)((long)puVar9 + 0x4c) = _DAT_014e21a0;
  *(undefined8 *)((long)puVar9 + 0x54) = uVar4;
  uVar4 = _UNK_014e86f8;
  *(undefined8 *)((long)puVar9 + 0x5c) = _DAT_014e86f0;
  *(undefined8 *)((long)puVar9 + 100) = uVar4;
  uVar4 = _UNK_014e1248;
  *(undefined8 *)((long)puVar9 + 0x6c) = _DAT_014e1240;
  *(undefined8 *)((long)puVar9 + 0x74) = uVar4;
  uVar4 = _UNK_014e52c8;
  *(undefined8 *)((long)puVar9 + 0x7c) = _DAT_014e52c0;
  *(undefined8 *)((long)puVar9 + 0x84) = uVar4;
  uVar4 = _UNK_014e17d8;
  *(undefined8 *)((long)puVar9 + 0x8c) = _DAT_014e17d0;
  *(undefined8 *)((long)puVar9 + 0x94) = uVar4;
  uVar4 = _UNK_014e1258;
  *(undefined8 *)((long)puVar9 + 0x9c) = _DAT_014e1250;
  *(undefined8 *)((long)puVar9 + 0xa4) = uVar4;
  uVar4 = _UNK_014e0de8;
  *(undefined8 *)((long)puVar9 + 0xac) = _DAT_014e0de0;
  *(undefined8 *)((long)puVar9 + 0xb4) = uVar4;
  uVar4 = _UNK_014e52d8;
  *(undefined8 *)((long)puVar9 + 0xbc) = _DAT_014e52d0;
  *(undefined8 *)((long)puVar9 + 0xc4) = uVar4;
  uVar4 = _UNK_014e3c48;
  *(undefined8 *)((long)puVar9 + 0xcc) = _DAT_014e3c40;
  *(undefined8 *)((long)puVar9 + 0xd4) = uVar4;
  uVar4 = _UNK_014e9bf8;
  *(undefined8 *)((long)puVar9 + 0xdc) = _DAT_014e9bf0;
  *(undefined8 *)((long)puVar9 + 0xe4) = uVar4;
  uVar4 = _UNK_014e46f8;
  *(undefined8 *)((long)puVar9 + 0xec) = _DAT_014e46f0;
  *(undefined8 *)((long)puVar9 + 0xf4) = uVar4;
  uVar4 = _UNK_014e7c98;
  *(undefined8 *)((long)puVar9 + 0xfc) = _DAT_014e7c90;
  *(undefined8 *)((long)puVar9 + 0x104) = uVar4;
  uVar4 = _UNK_014e17e8;
  *(undefined8 *)((long)puVar9 + 0x10c) = _DAT_014e17e0;
  *(undefined8 *)((long)puVar9 + 0x114) = uVar4;
  uVar4 = _UNK_014e4708;
  *(undefined8 *)((long)puVar9 + 0x11c) = _DAT_014e4700;
  *(undefined8 *)((long)puVar9 + 0x124) = uVar4;
  uVar4 = _UNK_014e17f8;
  *(undefined8 *)((long)puVar9 + 300) = _DAT_014e17f0;
  *(undefined8 *)((long)puVar9 + 0x134) = uVar4;
  uVar4 = _UNK_014e71d8;
  *(undefined8 *)((long)puVar9 + 0x13c) = _DAT_014e71d0;
  *(undefined8 *)((long)puVar9 + 0x144) = uVar4;
  uVar4 = _UNK_014e4198;
  *(undefined8 *)((long)puVar9 + 0x14c) = _DAT_014e4190;
  *(undefined8 *)((long)puVar9 + 0x154) = uVar4;
  uVar4 = _UNK_014e5c58;
  *(undefined8 *)((long)puVar9 + 0x15c) = _DAT_014e5c50;
  *(undefined8 *)((long)puVar9 + 0x164) = uVar4;
  uVar4 = _UNK_014ea058;
  *(undefined8 *)((long)puVar9 + 0x16c) = _DAT_014ea050;
  *(undefined8 *)((long)puVar9 + 0x174) = uVar4;
  uVar4 = _UNK_014e2778;
  *(undefined8 *)((long)puVar9 + 0x17c) = _DAT_014e2770;
  *(undefined8 *)((long)puVar9 + 0x184) = uVar4;
  uVar4 = _UNK_014e5c68;
  *(undefined8 *)((long)puVar9 + 0x18c) = _DAT_014e5c60;
  *(undefined8 *)((long)puVar9 + 0x194) = uVar4;
  uVar4 = _UNK_014ea068;
  *(undefined8 *)((long)puVar9 + 0x19c) = _DAT_014ea060;
  *(undefined8 *)((long)puVar9 + 0x1a4) = uVar4;
  uVar4 = _UNK_014eae28;
  *(undefined8 *)((long)puVar9 + 0x1ac) = _DAT_014eae20;
  *(undefined8 *)((long)puVar9 + 0x1b4) = uVar4;
  uVar4 = _UNK_014e36b8;
  *(undefined8 *)((long)puVar9 + 0x1bc) = _DAT_014e36b0;
  *(undefined8 *)((long)puVar9 + 0x1c4) = uVar4;
  uVar4 = _UNK_014e41a8;
  *(undefined8 *)((long)puVar9 + 0x1cc) = _DAT_014e41a0;
  *(undefined8 *)((long)puVar9 + 0x1d4) = uVar4;
  uVar4 = _UNK_014e8708;
  *(undefined8 *)((long)puVar9 + 0x1dc) = _DAT_014e8700;
  *(undefined8 *)((long)puVar9 + 0x1e4) = uVar4;
  uVar4 = _UNK_014e9148;
  *(undefined8 *)((long)puVar9 + 0x1ec) = _DAT_014e9140;
  *(undefined8 *)((long)puVar9 + 500) = uVar4;
  uVar4 = _UNK_014e2d38;
  *(undefined8 *)((long)puVar9 + 0x1fc) = _DAT_014e2d30;
  *(undefined8 *)((long)puVar9 + 0x204) = uVar4;
  uVar4 = _UNK_014e41b8;
  *(undefined8 *)((long)puVar9 + 0x20c) = _DAT_014e41b0;
  *(undefined8 *)((long)puVar9 + 0x214) = uVar4;
  uVar4 = _UNK_014e7ca8;
  *(undefined8 *)((long)puVar9 + 0x21c) = _DAT_014e7ca0;
  *(undefined8 *)((long)puVar9 + 0x224) = uVar4;
  uVar4 = _UNK_014e5c78;
  *(undefined8 *)((long)puVar9 + 0x22c) = _DAT_014e5c70;
  *(undefined8 *)((long)puVar9 + 0x234) = uVar4;
  uVar4 = _UNK_014e1d48;
  *(undefined8 *)((long)puVar9 + 0x23c) = _DAT_014e1d40;
  *(undefined8 *)((long)puVar9 + 0x244) = uVar4;
  uVar4 = _UNK_014e2d48;
  *(undefined8 *)((long)puVar9 + 0x24c) = _DAT_014e2d40;
  *(undefined8 *)((long)puVar9 + 0x254) = uVar4;
  uVar4 = _UNK_014e3c58;
  *(undefined8 *)((long)puVar9 + 0x25c) = _DAT_014e3c50;
  *(undefined8 *)((long)puVar9 + 0x264) = uVar4;
  uVar4 = _UNK_014e21b8;
  *(undefined8 *)((long)puVar9 + 0x26c) = _DAT_014e21b0;
  *(undefined8 *)((long)puVar9 + 0x274) = uVar4;
  uVar4 = _UNK_014e52e8;
  *(undefined8 *)((long)puVar9 + 0x27c) = _DAT_014e52e0;
  *(undefined8 *)((long)puVar9 + 0x284) = uVar4;
  uVar4 = _UNK_014e1d58;
  *(undefined8 *)((long)puVar9 + 0x28c) = _DAT_014e1d50;
  *(undefined8 *)((long)puVar9 + 0x294) = uVar4;
  uVar4 = _UNK_014e6228;
  *(undefined8 *)((long)puVar9 + 0x29c) = _DAT_014e6220;
  *(undefined8 *)((long)puVar9 + 0x2a4) = uVar4;
  uVar4 = _UNK_014e2d58;
  *(undefined8 *)((long)puVar9 + 0x2ac) = _DAT_014e2d50;
  *(undefined8 *)((long)puVar9 + 0x2b4) = uVar4;
  uVar4 = _UNK_014e4718;
  *(undefined8 *)((long)puVar9 + 700) = _DAT_014e4710;
  *(undefined8 *)((long)puVar9 + 0x2c4) = uVar4;
  uVar4 = _UNK_014e6798;
  *(undefined8 *)((long)puVar9 + 0x2cc) = _DAT_014e6790;
  *(undefined8 *)((long)puVar9 + 0x2d4) = uVar4;
  uVar4 = _UNK_014e2d68;
  *(undefined8 *)((long)puVar9 + 0x2dc) = _DAT_014e2d60;
  *(undefined8 *)((long)puVar9 + 0x2e4) = uVar4;
  uVar4 = _UNK_014e67a8;
  *(undefined8 *)((long)puVar9 + 0x2ec) = _DAT_014e67a0;
  *(undefined8 *)((long)puVar9 + 0x2f4) = uVar4;
  uVar4 = _UNK_014eae38;
  *(undefined8 *)((long)puVar9 + 0x2fc) = _DAT_014eae30;
  *(undefined8 *)((long)puVar9 + 0x304) = uVar4;
  uVar4 = _UNK_014e7cb8;
  *(undefined8 *)((long)puVar9 + 0x30c) = _DAT_014e7cb0;
  *(undefined8 *)((long)puVar9 + 0x314) = uVar4;
  uVar4 = _UNK_014e1808;
  *(undefined8 *)((long)puVar9 + 0x31c) = _DAT_014e1800;
  *(undefined8 *)((long)puVar9 + 0x324) = uVar4;
  uVar4 = _UNK_014e36c8;
  *(undefined8 *)((long)puVar9 + 0x32c) = _DAT_014e36c0;
  *(undefined8 *)((long)puVar9 + 0x334) = uVar4;
  uVar4 = _UNK_014e1268;
  *(undefined8 *)((long)puVar9 + 0x33c) = _DAT_014e1260;
  *(undefined8 *)((long)puVar9 + 0x344) = uVar4;
  uVar4 = _UNK_014e67b8;
  *(undefined8 *)((long)puVar9 + 0x34c) = _DAT_014e67b0;
  *(undefined8 *)((long)puVar9 + 0x354) = uVar4;
  uVar4 = _UNK_014e7758;
  *(undefined8 *)((long)puVar9 + 0x35c) = _DAT_014e7750;
  *(undefined8 *)((long)puVar9 + 0x364) = uVar4;
  uVar4 = _UNK_014e4728;
  *(undefined8 *)((long)puVar9 + 0x36c) = _DAT_014e4720;
  *(undefined8 *)((long)puVar9 + 0x374) = uVar4;
  uVar4 = _UNK_014eae48;
  *(undefined8 *)((long)puVar9 + 0x37c) = _DAT_014eae40;
  *(undefined8 *)((long)puVar9 + 900) = uVar4;
  uVar4 = _UNK_014e5778;
  *(undefined8 *)((long)puVar9 + 0x38c) = _DAT_014e5770;
  *(undefined8 *)((long)puVar9 + 0x394) = uVar4;
  uVar4 = _UNK_014e9c08;
  *(undefined8 *)((long)puVar9 + 0x39c) = _DAT_014e9c00;
  *(undefined8 *)((long)puVar9 + 0x3a4) = uVar4;
  uVar4 = _UNK_014e2788;
  *(undefined8 *)((long)puVar9 + 0x3ac) = _DAT_014e2780;
  *(undefined8 *)((long)puVar9 + 0x3b4) = uVar4;
  uVar4 = _UNK_014e9c18;
  *(undefined8 *)((long)puVar9 + 0x3bc) = _DAT_014e9c10;
  *(undefined8 *)((long)puVar9 + 0x3c4) = uVar4;
  uVar4 = _UNK_014ea078;
  *(undefined8 *)((long)puVar9 + 0x3cc) = _DAT_014ea070;
  *(undefined8 *)((long)puVar9 + 0x3d4) = uVar4;
  uVar4 = _UNK_014e41c8;
  *(undefined8 *)((long)puVar9 + 0x3dc) = _DAT_014e41c0;
  *(undefined8 *)((long)puVar9 + 0x3e4) = uVar4;
  uVar4 = _UNK_014e21c8;
  *(undefined8 *)((long)puVar9 + 0x3ec) = _DAT_014e21c0;
  *(undefined8 *)((long)puVar9 + 0x3f4) = uVar4;
  uVar6 = _UNK_014e915c;
  uVar5 = _UNK_014e9158;
  uVar2 = _UNK_014e9154;
  *(undefined4 *)((long)puVar9 + 0x3fc) = _DAT_014e9150;
  *(undefined4 *)(puVar9 + 0x80) = uVar2;
  *(undefined4 *)((long)puVar9 + 0x404) = uVar5;
  *(undefined4 *)(puVar9 + 0x81) = uVar6;
  uVar13 = 0x100;
  lVar11 = 0;
  do {
    iVar7 = (**(code **)(puStack_a30 + 0x18))(&puStack_a30,uVar13 & 0xffffffff);
    uVar2 = *(undefined4 *)((long)puVar9 + lVar11 * 4 + 0xc);
    lVar10 = (long)(iVar7 + (int)lVar11);
    *(undefined4 *)((long)puVar9 + lVar11 * 4 + 0xc) =
         *(undefined4 *)((long)puVar9 + lVar10 * 4 + 0xc);
    *(undefined4 *)((long)puVar9 + lVar10 * 4 + 0xc) = uVar2;
    *(undefined4 *)((long)puVar9 + lVar11 * 4 + 0x40c) =
         *(undefined4 *)((long)puVar9 + lVar11 * 4 + 0xc);
    lVar11 = lVar11 + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  lVar11 = param_1[0x25];
  param_1[0x25] = puVar9;
  if (lVar11 != 0) {
    FUN_0412a280(lVar11,0x80c);
  }
  puVar8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar8 = 3;
  *(undefined8 *)(puVar8 + 2) = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0;
  FUN_0d3430a0(puVar8,&puStack_a30,0);
  lVar11 = param_1[0x26];
  param_1[0x26] = puVar8;
  if (lVar11 != 0) {
    lVar10 = *(long *)(lVar11 + 8);
    if (lVar10 != 0) {
      *(long *)(lVar11 + 0x10) = lVar10;
      FUN_0412a280(lVar10,*(long *)(lVar11 + 0x18) - lVar10);
    }
    FUN_0412a280(lVar11,0x28);
  }
  if (param_4 == 0) {
    lVar11 = **(long **)(*(long *)(param_2 + 0xa0) + 0x3b8);
    plVar12 = *(long **)(lVar11 + 0x380);
    plVar3 = *(long **)(lVar11 + 0x388);
    if ((long)plVar3 - (long)plVar12 != 0) {
      plVar14 = plVar3;
      uVar13 = (long)plVar3 - (long)plVar12 >> 3;
LAB_05294179:
      do {
        uVar16 = uVar13 >> 1;
        plVar1 = plVar12 + uVar16;
        if (*(ushort *)(plVar12[uVar16] + 0x168) < 9) goto LAB_05294160;
        if (*(ushort *)(plVar12[uVar16] + 0x168) == 9) {
          if (uVar13 != 1) {
            do {
              uVar13 = uVar16 >> 1;
              if (*(ushort *)(plVar12[uVar13] + 0x168) < 9) {
                plVar12 = plVar12 + uVar13 + 1;
                uVar13 = ~uVar13 + uVar16;
              }
              uVar16 = uVar13;
            } while (uVar13 != 0);
          }
          lVar11 = (long)plVar14 - (long)(plVar1 + 1);
          if (lVar11 != 0) {
            plVar14 = plVar1 + 1;
            uVar13 = lVar11 >> 3;
            do {
              uVar16 = uVar13 >> 1;
              if (*(ushort *)(plVar14[uVar16] + 0x168) < 10) {
                plVar14 = plVar14 + uVar16 + 1;
                uVar16 = ~uVar16 + uVar13;
              }
              uVar13 = uVar16;
            } while (uVar16 != 0);
          }
          if ((plVar12 != plVar14) && (plVar12 != plVar3)) {
            param_4 = *plVar12;
            break;
          }
          goto LAB_05294209;
        }
        plVar14 = plVar1;
        uVar13 = uVar16;
        param_4 = 0;
      } while (uVar16 != 0);
      goto LAB_0529420c;
    }
LAB_05294209:
    param_4 = 0;
  }
LAB_0529420c:
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  *puVar9 = &UNK_0f3dc940;
  puVar9[1] = param_4;
  plVar12 = (long *)param_1[0x36];
  param_1[0x36] = puVar9;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  return;
LAB_05294160:
  plVar12 = plVar1 + 1;
  uVar13 = ~uVar16 + uVar13;
  param_4 = 0;
  if (uVar13 == 0) goto LAB_0529420c;
  goto LAB_05294179;
}


