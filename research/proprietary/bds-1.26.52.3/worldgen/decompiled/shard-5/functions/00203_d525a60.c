/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd625a60 (ELF vaddr 0xd525a60)
 * Label: string:TerrainAtlas
 * Body:  [[0d625a60, 0d627edd]]
 * Ghidra: FUN_0d625a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d625a60(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined4 *puStack_3a0;
  undefined4 *puStack_398;
  undefined4 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined4 *puStack_358;
  undefined4 *puStack_350;
  undefined4 *puStack_348;
  undefined4 *puStack_340;
  undefined4 *puStack_338;
  undefined4 *puStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  undefined4 *puStack_318;
  undefined4 *puStack_310;
  undefined4 *puStack_308;
  undefined4 *puStack_300;
  undefined4 *puStack_2f8;
  undefined4 *puStack_2f0;
  undefined4 *puStack_2e8;
  undefined4 *puStack_2e0;
  undefined4 *puStack_2d8;
  undefined4 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined4 *puStack_2b0;
  undefined4 *puStack_2a8;
  undefined4 *puStack_2a0;
  undefined4 *puStack_298;
  undefined4 *puStack_290;
  undefined4 *puStack_288;
  undefined4 *puStack_280;
  undefined4 *puStack_278;
  undefined4 *puStack_270;
  undefined4 *puStack_268;
  undefined4 *puStack_260;
  undefined4 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  
  lStack_3d8 = 0;
  puStack_250 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_250 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_248 = puStack_250 + 1;
  *puStack_250 = 0x500000013;
  puStack_240 = puStack_248;
  func_0x0d6284c0(param_1,&UNK_0148c672,0x18,&lStack_3d8,0x14,&puStack_250);
  if (puStack_250 != (undefined8 *)0x0) {
    puStack_248 = puStack_250;
    FUN_0412a280(puStack_250,(long)puStack_240 - (long)puStack_250);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  func_0x0d6284c0(param_1,&UNK_012c23d9,0xe,&lStack_3d8,0x13,&lStack_98);
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    FUN_0412a280(lStack_98,lStack_88 - lStack_98);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_268 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x14);
  if (puStack_268 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x14,0);
  }
  uVar4 = _UNK_01dd2f34;
  uVar3 = _UNK_01dd2f30;
  uVar2 = _UNK_01dd2f2c;
  puStack_260 = puStack_268 + 5;
  *puStack_268 = _DAT_01dd2f28;
  puStack_268[1] = uVar2;
  puStack_268[2] = uVar3;
  puStack_268[3] = uVar4;
  puStack_268[4] = 0xc;
  puStack_258 = puStack_260;
  func_0x0d6284c0(param_1,&UNK_013d806d,0x10,&lStack_3d8,0x16,&puStack_268);
  if (puStack_268 != (undefined4 *)0x0) {
    puStack_260 = puStack_268;
    FUN_0412a280(puStack_268,(long)puStack_258 - (long)puStack_268);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  func_0x0d6284c0(param_1,&UNK_011b0776,0x13,&lStack_3d8,0x15,&lStack_b8);
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    FUN_0412a280(lStack_b8,lStack_a8 - lStack_b8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  func_0x0d6284c0(param_1,&UNK_014cdf9c,8,&lStack_3d8,0x20,&lStack_d8);
  if (lStack_d8 != 0) {
    lStack_d0 = lStack_d8;
    FUN_0412a280(lStack_d8,lStack_c8 - lStack_d8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  func_0x0d6284c0(param_1,&UNK_01302913,0xe,&lStack_3d8,0x1f,&lStack_f8);
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    FUN_0412a280(lStack_f8,lStack_e8 - lStack_f8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_118 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  func_0x0d6284c0(param_1,&UNK_014b4cc9,8,&lStack_3d8,5,&lStack_118);
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    FUN_0412a280(lStack_118,lStack_108 - lStack_118);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  func_0x0d6284c0(param_1,&UNK_0145889f,0xc,&lStack_3d8,0x23,&lStack_138);
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    FUN_0412a280(lStack_138,lStack_128 - lStack_138);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_280 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c);
  if (puStack_280 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x1c,0);
  }
  uVar6 = _UNK_01dd2f50;
  puStack_278 = puStack_280 + 7;
  *(ulong *)(puStack_280 + 3) = CONCAT44(_UNK_01dd2f4c,_DAT_01dd2f48);
  *(undefined8 *)(puStack_280 + 5) = uVar6;
  uVar4 = _DAT_01dd2f48;
  uVar3 = _UNK_01dd2f44;
  uVar2 = _UNK_01dd2f40;
  *puStack_280 = _DAT_01dd2f3c;
  puStack_280[1] = uVar2;
  puStack_280[2] = uVar3;
  puStack_280[3] = uVar4;
  puStack_270 = puStack_278;
  func_0x0d6284c0(param_1,&UNK_013f1c84,0x17,&lStack_3d8,0xe,&puStack_280);
  if (puStack_280 != (undefined4 *)0x0) {
    puStack_278 = puStack_280;
    FUN_0412a280(puStack_280,(long)puStack_270 - (long)puStack_280);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  func_0x0d6284c0(param_1,&UNK_012cfe0e,0xd,&lStack_3d8,0xf,&lStack_158);
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    FUN_0412a280(lStack_158,lStack_148 - lStack_158);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_298 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_298 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_290 = puStack_298 + 1;
  *puStack_298 = 0xf;
  puStack_288 = puStack_290;
  func_0x0d6284c0(param_1,&UNK_014a6b65,0x16,&lStack_3d8,0x10,&puStack_298);
  if (puStack_298 != (undefined4 *)0x0) {
    puStack_290 = puStack_298;
    FUN_0412a280(puStack_298,(long)puStack_288 - (long)puStack_298);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_178 = 0;
  lStack_170 = 0;
  lStack_168 = 0;
  func_0x0d6284c0(param_1,&UNK_01353cdf,0x13,&lStack_3d8,0x11,&lStack_178);
  if (lStack_178 != 0) {
    lStack_170 = lStack_178;
    FUN_0412a280(lStack_178,lStack_168 - lStack_178);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_2b0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_2b0 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_2a8 = puStack_2b0 + 1;
  *puStack_2b0 = 0x11;
  puStack_2a0 = puStack_2a8;
  func_0x0d6284c0(param_1,&UNK_01302922,0x13,&lStack_3d8,0x12,&puStack_2b0);
  if (puStack_2b0 != (undefined4 *)0x0) {
    puStack_2a8 = puStack_2b0;
    FUN_0412a280(puStack_2b0,(long)puStack_2a0 - (long)puStack_2b0);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_198 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  func_0x0d6284c0(param_1,&UNK_0136190c,5,&lStack_3d8,2,&lStack_198);
  if (lStack_198 != 0) {
    lStack_190 = lStack_198;
    FUN_0412a280(lStack_198,lStack_188 - lStack_198);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_1b8 = 0;
  lStack_1b0 = 0;
  lStack_1a8 = 0;
  func_0x0d6284c0(param_1,&UNK_0126995a,0xf,&lStack_3d8,3,&lStack_1b8);
  if (lStack_1b8 != 0) {
    lStack_1b0 = lStack_1b8;
    FUN_0412a280(lStack_1b8,lStack_1a8 - lStack_1b8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  lStack_1c8 = 0;
  func_0x0d6284c0(param_1,&UNK_011a42c9,8,&lStack_3d8,0xc,&lStack_1d8);
  if (lStack_1d8 != 0) {
    lStack_1d0 = lStack_1d8;
    FUN_0412a280(lStack_1d8,lStack_1c8 - lStack_1d8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  lStack_1e8 = 0;
  func_0x0d6284c0(param_1,&UNK_0146648d,7,&lStack_3d8,1,&lStack_1f8);
  if (lStack_1f8 != 0) {
    lStack_1f0 = lStack_1f8;
    FUN_0412a280(lStack_1f8,lStack_1e8 - lStack_1f8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  lStack_208 = 0;
  func_0x0d6284c0(param_1,&UNK_013892be,9,&lStack_3d8,9,&lStack_218);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    FUN_0412a280(lStack_218,lStack_208 - lStack_218);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  lStack_238 = 0;
  lStack_230 = 0;
  lStack_228 = 0;
  func_0x0d6284c0(param_1,&UNK_0121a076,0xc,&lStack_3d8,4,&lStack_238);
  if (lStack_238 != 0) {
    lStack_230 = lStack_238;
    FUN_0412a280(lStack_238,lStack_228 - lStack_238);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_2c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_2c8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_2c0 = puStack_2c8 + 1;
  *puStack_2c8 = 0x60000000a;
  puStack_2b8 = puStack_2c0;
  func_0x0d6284c0(param_1,&UNK_0140b37f,0xb,&lStack_3d8,0xb,&puStack_2c8);
  if (puStack_2c8 != (undefined8 *)0x0) {
    puStack_2c0 = puStack_2c8;
    FUN_0412a280(puStack_2c8,(long)puStack_2b8 - (long)puStack_2c8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_2e0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puStack_2e0 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uVar4 = _UNK_014e513c;
  uVar3 = _UNK_014e5138;
  uVar2 = _UNK_014e5134;
  puStack_2d8 = puStack_2e0 + 4;
  *puStack_2e0 = _DAT_014e5130;
  puStack_2e0[1] = uVar2;
  puStack_2e0[2] = uVar3;
  puStack_2e0[3] = uVar4;
  puStack_2d0 = puStack_2d8;
  func_0x0d6284c0(param_1,&UNK_013d807e,0x1b,&lStack_3d8,0x17,&puStack_2e0);
  if (puStack_2e0 != (undefined4 *)0x0) {
    puStack_2d8 = puStack_2e0;
    FUN_0412a280(puStack_2e0,(long)puStack_2d0 - (long)puStack_2e0);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_2f8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_2f8 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_2f0 = puStack_2f8 + 1;
  *puStack_2f8 = 1;
  puStack_2e8 = puStack_2f0;
  func_0x0d6284c0(param_1,&UNK_0121a083,0xc,&lStack_3d8,6,&puStack_2f8);
  if (puStack_2f8 != (undefined4 *)0x0) {
    puStack_2f0 = puStack_2f8;
    FUN_0412a280(puStack_2f8,(long)puStack_2e8 - (long)puStack_2f8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_310 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_310 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_308 = puStack_310 + 1;
  *puStack_310 = 1;
  puStack_300 = puStack_308;
  func_0x0d6284c0(param_1,&UNK_0128399b,9,&lStack_3d8,7,&puStack_310);
  if (puStack_310 != (undefined4 *)0x0) {
    puStack_308 = puStack_310;
    FUN_0412a280(puStack_310,(long)puStack_300 - (long)puStack_310);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_328 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_328 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_320 = puStack_328 + 1;
  *puStack_328 = 1;
  puStack_318 = puStack_320;
  func_0x0d6284c0(param_1,&UNK_0121a090,0xd,&lStack_3d8,8,&puStack_328);
  if (puStack_328 != (undefined4 *)0x0) {
    puStack_320 = puStack_328;
    FUN_0412a280(puStack_328,(long)puStack_318 - (long)puStack_328);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_340 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
  if (puStack_340 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x10,0);
  }
  uVar4 = _UNK_014e40ec;
  uVar3 = _UNK_014e40e8;
  uVar2 = _UNK_014e40e4;
  puStack_338 = puStack_340 + 4;
  *puStack_340 = _DAT_014e40e0;
  puStack_340[1] = uVar2;
  puStack_340[2] = uVar3;
  puStack_340[3] = uVar4;
  puStack_330 = puStack_338;
  func_0x0d6284c0(param_1,&UNK_011b078a,0x13,&lStack_3d8,0x26,&puStack_340);
  if (puStack_340 != (undefined4 *)0x0) {
    puStack_338 = puStack_340;
    FUN_0412a280(puStack_340,(long)puStack_330 - (long)puStack_340);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_358 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_358 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_350 = puStack_358 + 1;
  *puStack_358 = 6;
  puStack_348 = puStack_350;
  func_0x0d6284c0(param_1,&UNK_011e4e0d,0xd,&lStack_3d8,10,&puStack_358);
  if (puStack_358 != (undefined4 *)0x0) {
    puStack_350 = puStack_358;
    FUN_0412a280(puStack_358,(long)puStack_348 - (long)puStack_358);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_370 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_370 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_368 = puStack_370 + 1;
  *puStack_370 = 0x600000007;
  puStack_360 = puStack_368;
  func_0x0d6284c0(param_1,&UNK_0140b38b,0xc,&lStack_3d8,0x18,&puStack_370);
  if (puStack_370 != (undefined8 *)0x0) {
    puStack_368 = puStack_370;
    FUN_0412a280(puStack_370,(long)puStack_360 - (long)puStack_370);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_388 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_388 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_380 = puStack_388 + 1;
  *puStack_388 = 0x700000006;
  puStack_378 = puStack_380;
  func_0x0d6284c0(param_1,&UNK_012b5fa0,0xf,&lStack_3d8,0x19,&puStack_388);
  if (puStack_388 != (undefined8 *)0x0) {
    puStack_380 = puStack_388;
    FUN_0412a280(puStack_388,(long)puStack_378 - (long)puStack_388);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_3a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_3a0 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_398 = puStack_3a0 + 1;
  *puStack_3a0 = 6;
  puStack_390 = puStack_398;
  func_0x0d6284c0(param_1,&UNK_01353cf3,0xc,&lStack_3d8,0x27,&puStack_3a0);
  if (puStack_3a0 != (undefined4 *)0x0) {
    puStack_398 = puStack_3a0;
    FUN_0412a280(puStack_3a0,(long)puStack_390 - (long)puStack_3a0);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_3b8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_3b8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_3b0 = puStack_3b8 + 1;
  *puStack_3b8 = 0x600000005;
  puStack_3a8 = puStack_3b0;
  func_0x0d6284c0(param_1,&UNK_01338ddf,0xd,&lStack_3d8,0x1a,&puStack_3b8);
  if (puStack_3b8 != (undefined8 *)0x0) {
    puStack_3b0 = puStack_3b8;
    FUN_0412a280(puStack_3b8,(long)puStack_3a8 - (long)puStack_3b8);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_3d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_3d0 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_3c8 = puStack_3d0 + 1;
  *puStack_3d0 = 0x700000006;
  puStack_3c0 = puStack_3c8;
  func_0x0d6284c0(param_1,&UNK_013892c8,0x17,&lStack_3d8,0x1b,&puStack_3d0);
  if (puStack_3d0 != (undefined8 *)0x0) {
    puStack_3c8 = puStack_3d0;
    FUN_0412a280(puStack_3d0,(long)puStack_3c0 - (long)puStack_3d0);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_30 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_30 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_28 = puStack_30 + 1;
  *puStack_30 = 1;
  puStack_20 = puStack_28;
  func_0x0d6284c0(param_1,&UNK_013f1c9c,0xd,&lStack_3d8,0x1c,&puStack_30);
  if (puStack_30 != (undefined4 *)0x0) {
    FUN_0412a280(puStack_30,(long)puStack_20 - (long)puStack_30);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_48 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_48 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_40 = puStack_48 + 1;
  *puStack_48 = 0x1900000001;
  puStack_38 = puStack_40;
  func_0x0d6284c0(param_1,&UNK_0129d070,7,&lStack_3d8,0xd,&puStack_48);
  if (puStack_48 != (undefined8 *)0x0) {
    FUN_0412a280(puStack_48,(long)puStack_38 - (long)puStack_48);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_60 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puStack_60 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  puStack_58 = puStack_60 + 1;
  *puStack_60 = 0x900000001;
  puStack_50 = puStack_58;
  func_0x0d6284c0(param_1,&UNK_013a4054,0x15,&lStack_3d8,0x1d,&puStack_60);
  if (puStack_60 != (undefined8 *)0x0) {
    FUN_0412a280(puStack_60,(long)puStack_50 - (long)puStack_60);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),*(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    FUN_0412a280(lVar5,0x130);
  }
  lStack_3d8 = 0;
  puStack_78 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_78 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_70 = puStack_78 + 1;
  *puStack_78 = 0x29;
  puStack_68 = puStack_70;
  uVar6 = func_0x0d6284c0(param_1,&UNK_012ea0bf,0xc,&lStack_3d8,0x1e,&puStack_78);
  if (puStack_78 != (undefined4 *)0x0) {
    uVar6 = FUN_0412a280(puStack_78,(long)puStack_68 - (long)puStack_78);
  }
  lVar5 = lStack_3d8;
  if (lStack_3d8 != 0) {
    lVar1 = *(long *)(lStack_3d8 + 0xf0);
    if (lVar1 != 0) {
      *(long *)(lStack_3d8 + 0xf8) = lVar1;
      uVar6 = FUN_0412a280(lVar1,*(long *)(lStack_3d8 + 0x100) - lVar1);
    }
    if ((*(byte *)(lVar5 + 0xb0) & 1) != 0) {
      uVar6 = FUN_0412a280(*(undefined8 *)(lVar5 + 0xc0),
                           *(ulong *)(lVar5 + 0xb0) & 0xfffffffffffffffe);
    }
    lVar1 = *(long *)(lVar5 + 0x98);
    if (lVar1 != 0) {
      *(long *)(lVar5 + 0xa0) = lVar1;
      uVar6 = FUN_0412a280(lVar1,*(long *)(lVar5 + 0xa8) - lVar1);
    }
    if (lVar5 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar5);
    }
    return uVar6;
  }
  return uVar6;
}


