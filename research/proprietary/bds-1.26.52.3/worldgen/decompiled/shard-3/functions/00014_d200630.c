/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd300630 (ELF vaddr 0xd200630)
 * Label: string:auto Puv::SlicedLoader<SharedTypes::v1_21_20::JigsawStructur
 * Body:  [[0d300630, 0d306ba8]]
 * Ghidra: FUN_0d300630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d300630(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  short *psVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  short *psVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  long *plVar26;
  undefined8 uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  short *psStack_360;
  char *pcStack_358;
  long lStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *puStack_2e0;
  long *plStack_2d8;
  short *psStack_2d0;
  char *pcStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_258;
  undefined1 uStack_248;
  undefined2 uStack_246;
  undefined1 uStack_244;
  long *plStack_230;
  long *plStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_208;
  ulong uStack_200;
  undefined2 uStack_1f8;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined2 auStack_1c0 [4];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined2 auStack_190 [4];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  undefined2 auStack_160 [4];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined2 auStack_130 [4];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  *param_1 = &UNK_0f534768;
  plStack_320 = (long *)param_2;
  plStack_1d0 = param_3;
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  puStack_370 = param_1;
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar6 = puStack_370;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &UNK_0ef44a60;
  *(undefined1 *)(puVar14 + 3) = 1;
  puStack_370[1] = puVar14 + 3;
  puStack_370[2] = puVar14;
  *puStack_370 = &UNK_0f45f878;
  puStack_370[3] = 0;
  func_0x05d54750(&plStack_2d8,&UNK_0f0863e8);
  plStack_e0 = puVar6 + 4;
  *plStack_e0 = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[7] = puVar6 + 8;
  puVar6[0xe] = 0;
  puVar6[0x14] = 0;
  puVar6[0x16] = plStack_2d8;
  puVar6[0x17] = 0;
  psVar22 = psStack_2d0;
  if (((ulong)psStack_2d0 >> 0x37 & 1) != 0) {
    uVar23 = (ulong)psStack_2d0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    psVar22 = (short *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar6[0x17] = psVar22;
  puVar6[0x18] = 0;
  if (((ulong)pcStack_2c8 & 0x80000000000000) == 0) {
    puVar6[0x18] = pcStack_2c8;
    plStack_300 = puVar6 + 0x19;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
  }
  else {
    uVar23 = (ulong)pcStack_2c8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    plStack_300 = puVar6 + 0x19;
    puVar6[0x18] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x21] = 0;
    if (((ulong)pcStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_2c8 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_2c8 = (char *)0x0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_2d0 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x05d54750(&plStack_2d8,&UNK_0f0863e8);
  plStack_e8 = puVar6 + 0x22;
  *plStack_e8 = 0;
  puVar6[0x23] = 0;
  puVar6[0x24] = 0;
  puVar6[0x26] = 0;
  puVar6[0x27] = 0;
  puVar6[0x25] = puVar6 + 0x26;
  puVar6[0x2c] = 0;
  puVar6[0x32] = 0;
  puVar6[0x34] = plStack_2d8;
  puVar6[0x35] = 0;
  psVar22 = psStack_2d0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    uVar23 = (ulong)psStack_2d0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    psVar22 = (short *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar6[0x35] = psVar22;
  puVar6[0x36] = 0;
  if (((ulong)pcStack_2c8 & 0x80000000000000) == 0) {
    puVar6[0x36] = pcStack_2c8;
    plStack_328 = puVar6 + 0x37;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
  }
  else {
    uVar23 = (ulong)pcStack_2c8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    plStack_328 = puVar6 + 0x37;
    puVar6[0x36] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x3f] = 0;
    if (((ulong)pcStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_2c8 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_2c8 = (char *)0x0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_2d0 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x05d54750(&plStack_2d8,&UNK_0f0863e8);
  plStack_f0 = puVar6 + 0x40;
  *plStack_f0 = 0;
  puVar6[0x41] = 0;
  puVar6[0x42] = 0;
  puVar6[0x44] = 0;
  puVar6[0x45] = 0;
  puVar6[0x43] = puVar6 + 0x44;
  puVar6[0x4a] = 0;
  puVar6[0x50] = 0;
  puVar6[0x52] = plStack_2d8;
  puVar6[0x53] = 0;
  psVar22 = psStack_2d0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    uVar23 = (ulong)psStack_2d0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    psVar22 = (short *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar6[0x53] = psVar22;
  puVar6[0x54] = 0;
  if (((ulong)pcStack_2c8 & 0x80000000000000) == 0) {
    puVar6[0x54] = pcStack_2c8;
    plStack_1c8 = puVar6 + 0x55;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x57] = 0;
    puVar6[0x58] = 0;
    puVar6[0x59] = 0;
    puVar6[0x5a] = 0;
    puVar6[0x5b] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x5d] = 0;
  }
  else {
    uVar23 = (ulong)pcStack_2c8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    plStack_1c8 = puVar6 + 0x55;
    puVar6[0x54] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puVar6[0x5b] = 0;
    puVar6[0x5c] = 0;
    puVar6[0x59] = 0;
    puVar6[0x5a] = 0;
    puVar6[0x57] = 0;
    puVar6[0x58] = 0;
    puVar6[0x55] = 0;
    puVar6[0x56] = 0;
    puVar6[0x5d] = 0;
    if (((ulong)pcStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_2c8 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_2c8 = (char *)0x0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_2d0 & 0xff00ffffffffffff) - 8)
    ;
  }
  func_0x05d54750(&plStack_2d8,&UNK_0f0863e8);
  plStack_f8 = puVar6 + 0x5e;
  *plStack_f8 = 0;
  puVar6[0x5f] = 0;
  puVar6[0x60] = 0;
  puVar6[0x62] = 0;
  puVar6[99] = 0;
  puVar6[0x61] = puVar6 + 0x62;
  puVar6[0x68] = 0;
  puVar6[0x6e] = 0;
  puVar6[0x70] = plStack_2d8;
  puVar6[0x71] = 0;
  psVar22 = psStack_2d0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    uVar23 = (ulong)psStack_2d0 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    psVar22 = (short *)((ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000);
  }
  puVar6[0x71] = psVar22;
  puVar6[0x72] = 0;
  if (((ulong)pcStack_2c8 & 0x80000000000000) == 0) {
    puVar6[0x72] = pcStack_2c8;
    plStack_d8 = puVar6 + 0x73;
    puVar6[0x73] = 0;
    puVar6[0x74] = 0;
    puVar6[0x75] = 0;
    puVar6[0x76] = 0;
    puVar6[0x77] = 0;
    puVar6[0x78] = 0;
    puVar6[0x79] = 0;
    puVar6[0x7a] = 0;
    puVar6[0x7b] = 0;
  }
  else {
    uVar23 = (ulong)pcStack_2c8 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    plStack_d8 = puVar6 + 0x73;
    puVar6[0x72] = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    puVar6[0x79] = 0;
    puVar6[0x7a] = 0;
    puVar6[0x77] = 0;
    puVar6[0x78] = 0;
    puVar6[0x75] = 0;
    puVar6[0x76] = 0;
    puVar6[0x73] = 0;
    puVar6[0x74] = 0;
    puVar6[0x7b] = 0;
    if (((ulong)pcStack_2c8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)pcStack_2c8 & 0xff00ffffffffffff) - 8);
    }
  }
  pcStack_2c8 = (char *)0x0;
  if (((ulong)psStack_2d0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_2d0 & 0xff00ffffffffffff) - 8)
    ;
  }
  plVar15 = (long *)puVar6[0x1a];
  puVar6[0x19] = 0;
  puVar6[0x1a] = 0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  puVar6[0x1b] = 0;
  lVar17 = *(long *)((long)plStack_320 + 8);
  lVar24 = *(long *)((long)plStack_320 + 0x10);
  if (lVar24 != 0) {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  puVar6[0x19] = lVar17;
  plVar15 = (long *)puVar6[0x1a];
  puVar6[0x1a] = lVar24;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    lVar17 = *plStack_300;
  }
  if (lVar17 != 0) {
    puVar6[0x1b] = plStack_320;
  }
  uStack_188 = *plStack_1d0;
  uStack_180 = (long *)plStack_1d0[1];
  if (uStack_180 == (long *)0x0) {
    uStack_178 = plStack_1d0[2];
  }
  else {
    LOCK();
    uStack_180[1] = uStack_180[1] + 1;
    UNLOCK();
    uStack_178 = plStack_1d0[2];
    LOCK();
    uStack_180[1] = uStack_180[1] + 1;
    UNLOCK();
  }
  puStack_2e0 = plStack_1d0 + 2;
  auStack_190[0] = 0xc;
  uStack_170 = 0;
  uStack_168 = 0x100;
  puVar18 = (undefined2 *)puStack_370[0x1c];
  uStack_50 = uStack_188;
  plStack_48 = uStack_180;
  uStack_40 = uStack_178;
  if (puVar18 == (undefined2 *)0x0) {
    puVar18 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar18 == (undefined2 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar14 = puStack_370;
    *puVar18 = auStack_190[0];
    *(undefined8 *)(puVar18 + 4) = uStack_188;
    *(long **)(puVar18 + 8) = uStack_180;
    uStack_188 = 0;
    uStack_180 = (long *)0x0;
    *(undefined8 *)(puVar18 + 0xc) = uStack_178;
    uStack_178 = 0;
    puVar18[0x14] = uStack_168;
    *(undefined8 *)(puVar18 + 0x10) = uStack_170;
    lVar17 = puStack_370[0x1c];
    puStack_370[0x1c] = puVar18;
    if (lVar17 != 0) {
      plVar15 = *(long **)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 8) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
        plVar15 = *(long **)(lVar17 + 0x10);
        *(undefined8 *)(lVar17 + 0x18) = 0;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar16 = plVar15 + 1;
          lVar24 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar24 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN_0412c2d0(plVar15);
          }
        }
      }
      func_0x0412a280(lVar17,0x30);
    }
  }
  else {
    *puVar18 = 0xc;
    if (puVar18 != auStack_190) {
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 8) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = 0;
      uVar9 = (undefined4)uStack_188;
      uVar10 = uStack_188._4_4_;
      uVar11 = (undefined4)uStack_180;
      uVar12 = uStack_180._4_4_;
      uStack_188 = 0;
      uStack_180 = (long *)0x0;
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined4 *)(puVar18 + 4) = uVar9;
      *(undefined4 *)(puVar18 + 6) = uVar10;
      *(undefined4 *)(puVar18 + 8) = uVar11;
      *(undefined4 *)(puVar18 + 10) = uVar12;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = uStack_178;
      uStack_178 = 0;
    }
    puVar18[0x14] = uStack_168;
    *(undefined8 *)(puVar18 + 0x10) = uStack_170;
    puVar14 = puStack_370;
  }
  plVar15 = uStack_180;
  uStack_188 = 0;
  uStack_180 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_178 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = uStack_180;
    uStack_178 = 0;
    if (uStack_180 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_180 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_180 + 0x10))(uStack_180);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  plVar15 = plStack_48;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_40 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = plStack_48;
    uStack_40 = 0;
    if (plStack_48 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_48 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  func_0x05d54750(&uStack_318,&UNK_0f45f928);
  if ((((char *)*plStack_300 == (char *)0x0) || (*(char *)*plStack_300 == '\0')) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_012cf3e8),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar14[0x1f] = uStack_318;
  if ((puVar14[0x20] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x20] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x20] = 0;
  uVar23 = uStack_310;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar14[0x20] = uVar23;
  if ((puVar14[0x21] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x21] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x21] = 0;
  uVar23 = uStack_308;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psStack_360 = (short *)(puVar14 + 0x16);
  puVar14[0x21] = uVar23;
  plStack_368 = plStack_e0;
  pcVar1 = (char *)puVar14[0x19];
  lVar17 = puVar14[0x1a];
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  lVar24 = puStack_370[0x1b];
  pcStack_358 = pcVar1;
  lStack_350 = lVar17;
  uStack_348 = lVar24;
  if ((puStack_370[0x1c] == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_014c0e49),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_340 = puStack_370[0x1c];
  puVar14 = (undefined8 *)puStack_370[0x1d];
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = 0;
    puStack_370[0x1d] = puVar14;
  }
  puStack_330 = puStack_370 + 0x1f;
  plStack_2d8 = plStack_368;
  psStack_2d0 = psStack_360;
  pcStack_358 = (char *)0x0;
  lStack_350 = 0;
  uStack_348 = 0;
  uStack_338._0_4_ = SUB84(puVar14,0);
  uStack_338._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
  uStack_2b0 = (undefined4)uStack_340;
  uStack_2ac = uStack_340._4_4_;
  uStack_2a8 = (undefined4)uStack_338;
  uStack_2a4 = uStack_338._4_4_;
  uStack_298 = uStack_318;
  uStack_290 = 0;
  uVar23 = uStack_310;
  uStack_338 = puVar14;
  pcStack_2c8 = pcVar1;
  lStack_2c0 = lVar17;
  lStack_2b8 = lVar24;
  puStack_2a0 = puStack_330;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_288 = 0;
  uVar21 = uStack_308;
  uStack_290 = uVar23;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar22 = psStack_2d0;
  uStack_258 = 0;
  uStack_248 = 1;
  uStack_246 = 0xfbf8;
  uStack_244 = 1;
  plStack_300 = plStack_2d8;
  uStack_388 = *(undefined8 *)psStack_2d0;
  uStack_380 = *(ulong *)(psStack_2d0 + 4);
  uStack_288 = uVar21;
  if ((uStack_380 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uStack_380 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uStack_380 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uStack_380 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_378 = 0;
  uVar23 = *(ulong *)(psVar22 + 8);
  if ((uVar23 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar7 = psStack_2d0;
  uVar21 = uStack_290 & 0x80000000000000;
  uVar5 = (ushort)(uStack_290 >> 0x30);
  uStack_378 = uVar23;
  if (uVar21 == 0) {
    if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0d301b3a;
    uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d301ae8:
    if (((uVar19 != 4) || (*(int *)(uStack_290 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_298 != 9999 || ((uStack_298._2_2_ != 9999 || (uStack_298._4_2_ != 9999))))))
    goto LAB_0d301b3a;
LAB_0d301d20:
    if (uVar21 == 0) {
      if ((uStack_290 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d301d61:
        if (((uVar19 == 4) &&
            (piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff), *piVar25 == 0x61746562)) &&
           (((short)uStack_298 == 9999 && ((uStack_298._2_2_ == 9999 && (uStack_298._4_2_ == 9999)))
            ))) {
          uStack_388 = uStack_298;
          if ((uStack_380 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8)
            ;
            piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff);
            uVar21 = uStack_290 & 0x80000000000000;
          }
          uStack_380 = 0;
          uVar23 = uStack_290;
          if (uVar21 != 0) {
            lVar24 = *(long *)(piVar25 + -2);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar15 = lVar24;
            func_0x0eee2f00(plVar15 + 1,piVar25,lVar24);
            *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
            uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_380 = uVar23;
          if ((uStack_378 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_378 = 0;
          uVar23 = uStack_288;
          if ((uStack_288 & 0x80000000000000) != 0) {
            uVar23 = uStack_288 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar23 - 8);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            goto LAB_0d301efd;
          }
        }
      }
    }
    else {
      uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0d301d61;
    }
  }
  else {
    uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0d301ae8;
LAB_0d301b3a:
    uVar19 = *(ulong *)(psVar22 + 4);
    if ((uVar19 & 0x80000000000000) != 0) {
      uVar20 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
      if (uVar20 != 0) goto LAB_0d301b75;
      goto LAB_0d301d20;
    }
    if ((uVar19 & 0x7f000000000000) == 0) goto LAB_0d301d20;
    uVar20 = (ulong)((ushort)(uVar19 >> 0x30) & 0x7f);
LAB_0d301b75:
    if ((((uVar20 != 4) || (*(int *)(uVar19 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*psVar22 != 9999)) || ((psVar22[1] != 9999 || (psVar22[2] != 9999)))) goto LAB_0d301d20;
    uStack_388 = *(undefined8 *)psStack_2d0;
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uStack_380 = 0;
    uVar23 = *(ulong *)(psVar7 + 4);
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar24 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar15 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar15 = lVar24;
      func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
      uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar23;
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    uVar23 = *(ulong *)(psVar7 + 8);
    if ((uVar23 & 0x80000000000000) == 0) goto LAB_0d301f34;
    uVar23 = uVar23 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
LAB_0d301efd:
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
LAB_0d301f34:
  uStack_378 = uVar23;
  func_0x0d6b3300(&plStack_228,&uStack_298,&uStack_388,1);
  if ((CONCAT44(uStack_2ac,uStack_2b0) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_013388ad),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_2c8 == (char *)0x0) || (*pcStack_2c8 != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_013388ad);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
    if ((pcStack_2c8 == (char *)0x0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
  }
  if ((*pcStack_2c8 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar24 = lStack_2b8;
  plStack_230 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_230 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = uStack_298;
  uStack_1e8 = uStack_298;
  lStack_100 = lVar24;
  uVar23 = uStack_290;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar23 = uStack_290 & 0xff00ffffffffffff;
    lVar2 = *(long *)(uVar23 - 8);
    lVar24 = lVar2 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar15 = lVar2;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar2);
    *(undefined1 *)((long)plVar15 + lVar2 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1d8 = 0;
  uStack_2e8 = uStack_288;
  if ((uStack_288 & 0x80000000000000) != 0) {
    uVar21 = uStack_288 & 0xff00ffffffffffff;
    lVar2 = *(long *)(uVar21 - 8);
    lVar24 = lVar2 + 9;
    uStack_1e0 = uVar23;
    lStack_38 = lVar17;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar15 = lVar2;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar2);
    *(undefined1 *)((long)plVar15 + lVar2 + 8) = 0;
    uStack_2e8 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    lVar17 = lStack_38;
  }
  uStack_340 = uStack_200;
  uStack_348 = uStack_208;
  pcStack_358 = (char *)uStack_218;
  psStack_360 = (short *)uStack_220;
  plVar15 = plStack_230;
  uVar8 = uStack_246;
  uStack_a0 = uStack_1f8;
  uStack_2f8 = uVar4;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  plStack_d0 = plStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_368 = plStack_228;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_a8 = 0;
  uStack_338 = (undefined8 *)CONCAT62(uStack_338._2_6_,uStack_1f8);
  uStack_2f0 = uVar23;
  func_0x0d6a8a30(plStack_230,lStack_100,&uStack_2f8,&plStack_368);
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  uStack_340 = 0;
  if ((uStack_348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_348 & 0xff00ffffffffffff) - 8);
  }
  uStack_348 = 0;
  if (((ulong)pcStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_358 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_358 = (char *)0x0;
  if (((ulong)psStack_360 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_360 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_360 = (short *)0x0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e8 = 0;
  if ((uStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  *plVar15 = (long)&UNK_0f4602e0;
  plVar15[0xe] = lVar17;
  *(undefined2 *)(plVar15 + 0xf) = uVar8;
  *(undefined1 *)((long)plVar15 + 0x7a) = 1;
  plStack_368 = plVar15;
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  uStack_200 = 0;
  if ((uStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
  }
  uStack_208 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  plVar16 = (long *)*plStack_300;
  plVar3 = (long *)plStack_300[1];
  if (plVar16 != plVar3) {
    do {
      cVar13 = func_0x04fa7a10(*plVar16 + 0x20,plVar15 + 7);
      if (cVar13 == '\0') break;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar3);
  }
  func_0x0d6af860(plStack_300,plVar16,&plStack_368);
  plVar15 = plStack_368;
  puVar14 = puStack_370;
  plStack_368 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  uStack_248 = 0;
  func_0x0d307480(&plStack_2d8);
  if ((uStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
  }
  uStack_308 = 0;
  if ((uStack_310 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_310 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = (long *)puVar14[0x38];
  puVar14[0x37] = 0;
  puVar14[0x38] = 0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  puVar14[0x39] = 0;
  lVar17 = *(long *)((long)plStack_320 + 8);
  lVar24 = *(long *)((long)plStack_320 + 0x10);
  if (lVar24 != 0) {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  puVar14[0x37] = lVar17;
  plVar15 = (long *)puVar14[0x38];
  puVar14[0x38] = lVar24;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    lVar17 = *plStack_328;
  }
  if (lVar17 != 0) {
    puVar14[0x39] = plStack_320;
  }
  uStack_128 = *plStack_1d0;
  uStack_120 = (long *)plStack_1d0[1];
  if (uStack_120 == (long *)0x0) {
    uStack_118 = *puStack_2e0;
  }
  else {
    LOCK();
    uStack_120[1] = uStack_120[1] + 1;
    UNLOCK();
    uStack_118 = *puStack_2e0;
    LOCK();
    uStack_120[1] = uStack_120[1] + 1;
    UNLOCK();
  }
  auStack_130[0] = 0xc;
  uStack_110 = 0;
  uStack_108 = 0x100;
  puVar18 = (undefined2 *)puStack_370[0x3a];
  uStack_68 = uStack_128;
  plStack_60 = uStack_120;
  uStack_58 = uStack_118;
  if (puVar18 == (undefined2 *)0x0) {
    puVar18 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar18 == (undefined2 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar14 = puStack_370;
    *puVar18 = auStack_130[0];
    *(undefined8 *)(puVar18 + 4) = uStack_128;
    *(long **)(puVar18 + 8) = uStack_120;
    uStack_128 = 0;
    uStack_120 = (long *)0x0;
    *(undefined8 *)(puVar18 + 0xc) = uStack_118;
    uStack_118 = 0;
    puVar18[0x14] = uStack_108;
    *(undefined8 *)(puVar18 + 0x10) = uStack_110;
    lVar17 = puStack_370[0x3a];
    puStack_370[0x3a] = puVar18;
    if (lVar17 != 0) {
      plVar15 = *(long **)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 8) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
        plVar15 = *(long **)(lVar17 + 0x10);
        *(undefined8 *)(lVar17 + 0x18) = 0;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar16 = plVar15 + 1;
          lVar24 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar24 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN_0412c2d0(plVar15);
          }
        }
      }
      func_0x0412a280(lVar17,0x30);
    }
  }
  else {
    *puVar18 = 0xc;
    if (puVar18 != auStack_130) {
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 8) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = 0;
      uVar9 = (undefined4)uStack_128;
      uVar10 = uStack_128._4_4_;
      uVar11 = (undefined4)uStack_120;
      uVar12 = uStack_120._4_4_;
      uStack_128 = 0;
      uStack_120 = (long *)0x0;
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined4 *)(puVar18 + 4) = uVar9;
      *(undefined4 *)(puVar18 + 6) = uVar10;
      *(undefined4 *)(puVar18 + 8) = uVar11;
      *(undefined4 *)(puVar18 + 10) = uVar12;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = uStack_118;
      uStack_118 = 0;
    }
    puVar18[0x14] = uStack_108;
    *(undefined8 *)(puVar18 + 0x10) = uStack_110;
    puVar14 = puStack_370;
  }
  plVar15 = uStack_120;
  uStack_128 = 0;
  uStack_120 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_118 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = uStack_120;
    uStack_118 = 0;
    if (uStack_120 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_120 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_120 + 0x10))(uStack_120);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  plVar15 = plStack_60;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_58 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = plStack_60;
    uStack_58 = 0;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_60 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  func_0x05d54750(&uStack_318,&UNK_0f45f950);
  if ((((char *)*plStack_328 == (char *)0x0) || (*(char *)*plStack_328 == '\0')) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_0128345c),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar14[0x3d] = uStack_318;
  if ((puVar14[0x3e] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x3e] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x3e] = 0;
  uVar23 = uStack_310;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar14[0x3e] = uVar23;
  if ((puVar14[0x3f] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x3f] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x3f] = 0;
  uVar23 = uStack_308;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psStack_360 = (short *)(puVar14 + 0x34);
  puVar14[0x3f] = uVar23;
  plStack_368 = plStack_e8;
  pcVar1 = (char *)puVar14[0x37];
  lVar17 = puVar14[0x38];
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  lVar24 = puStack_370[0x39];
  pcStack_358 = pcVar1;
  lStack_350 = lVar17;
  uStack_348 = lVar24;
  if ((puStack_370[0x3a] == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_013a396e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_340 = puStack_370[0x3a];
  puVar14 = (undefined8 *)puStack_370[0x3b];
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = 0;
    puStack_370[0x3b] = puVar14;
  }
  puStack_330 = puStack_370 + 0x3d;
  plStack_2d8 = plStack_368;
  psStack_2d0 = psStack_360;
  pcStack_358 = (char *)0x0;
  lStack_350 = 0;
  uStack_348 = 0;
  uStack_338._0_4_ = SUB84(puVar14,0);
  uStack_338._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
  uStack_2b0 = (undefined4)uStack_340;
  uStack_2ac = uStack_340._4_4_;
  uStack_2a8 = (undefined4)uStack_338;
  uStack_2a4 = uStack_338._4_4_;
  uStack_298 = uStack_318;
  uStack_290 = 0;
  uVar23 = uStack_310;
  uStack_338 = puVar14;
  pcStack_2c8 = pcVar1;
  lStack_2c0 = lVar17;
  lStack_2b8 = lVar24;
  puStack_2a0 = puStack_330;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_288 = 0;
  uVar21 = uStack_308;
  uStack_290 = uVar23;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar22 = psStack_2d0;
  uStack_258 = 0;
  uStack_248 = 1;
  uStack_246 = 0xfbf8;
  uStack_244 = 1;
  plStack_300 = plStack_2d8;
  uStack_388 = *(undefined8 *)psStack_2d0;
  uVar23 = *(ulong *)(psStack_2d0 + 4);
  uStack_288 = uVar21;
  if ((uVar23 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_378 = 0;
  uVar21 = *(ulong *)(psVar22 + 8);
  uStack_380 = uVar23;
  if ((uVar21 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar7 = psStack_2d0;
  uVar23 = uStack_290 & 0x80000000000000;
  uVar5 = (ushort)(uStack_290 >> 0x30);
  uStack_378 = uVar21;
  if (uVar23 == 0) {
    if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0d3030e5;
    uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d303093:
    if (((uVar19 != 4) || (*(int *)(uStack_290 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_298 != 9999 || ((uStack_298._2_2_ != 9999 || (uStack_298._4_2_ != 9999))))))
    goto LAB_0d3030e5;
LAB_0d3032cb:
    if (uVar23 == 0) {
      if ((uStack_290 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d30330c:
        if (((uVar19 == 4) &&
            (piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff), *piVar25 == 0x61746562)) &&
           (((short)uStack_298 == 9999 && ((uStack_298._2_2_ == 9999 && (uStack_298._4_2_ == 9999)))
            ))) {
          uStack_388 = uStack_298;
          if ((uStack_380 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8)
            ;
            piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff);
            uVar23 = uStack_290 & 0x80000000000000;
          }
          uStack_380 = 0;
          uVar21 = uStack_290;
          if (uVar23 != 0) {
            lVar24 = *(long *)(piVar25 + -2);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar15 = lVar24;
            func_0x0eee2f00(plVar15 + 1,piVar25,lVar24);
            *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
            uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_380 = uVar21;
          if ((uStack_378 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_378 = 0;
          uVar21 = uStack_288;
          if ((uStack_288 & 0x80000000000000) != 0) {
            uVar21 = uStack_288 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar21 - 8);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            goto LAB_0d3034a8;
          }
        }
      }
    }
    else {
      uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0d30330c;
    }
  }
  else {
    uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0d303093;
LAB_0d3030e5:
    uVar19 = *(ulong *)(psVar22 + 4);
    if ((uVar19 & 0x80000000000000) != 0) {
      uVar20 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
      if (uVar20 != 0) goto LAB_0d303120;
      goto LAB_0d3032cb;
    }
    if ((uVar19 & 0x7f000000000000) == 0) goto LAB_0d3032cb;
    uVar20 = (ulong)((ushort)(uVar19 >> 0x30) & 0x7f);
LAB_0d303120:
    if ((((uVar20 != 4) || (*(int *)(uVar19 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*psVar22 != 9999)) || ((psVar22[1] != 9999 || (psVar22[2] != 9999)))) goto LAB_0d3032cb;
    uStack_388 = *(undefined8 *)psStack_2d0;
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uStack_380 = 0;
    uVar23 = *(ulong *)(psVar7 + 4);
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar24 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar15 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar15 = lVar24;
      func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
      uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar23;
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    uVar21 = *(ulong *)(psVar7 + 8);
    if ((uVar21 & 0x80000000000000) == 0) goto LAB_0d3034df;
    uVar21 = uVar21 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
LAB_0d3034a8:
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
LAB_0d3034df:
  uStack_378 = uVar21;
  func_0x0d6b3300(&plStack_228,&uStack_298,&uStack_388,1);
  if ((CONCAT44(uStack_2ac,uStack_2b0) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0120064d),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_2c8 == (char *)0x0) || (*pcStack_2c8 != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0120064d);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
    if ((pcStack_2c8 == (char *)0x0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
  }
  if ((*pcStack_2c8 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar24 = lStack_2b8;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = uStack_298;
  uStack_1e8 = uStack_298;
  plStack_230 = (long *)lVar24;
  uVar23 = uStack_290;
  plStack_328 = plVar15;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar23 = uStack_290 & 0xff00ffffffffffff;
    lVar2 = *(long *)(uVar23 - 8);
    lVar24 = lVar2 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar15 = lVar2;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar2);
    *(undefined1 *)((long)plVar15 + lVar2 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1d8 = 0;
  uVar21 = uStack_288;
  if ((uStack_288 & 0x80000000000000) != 0) {
    uVar21 = uStack_288 & 0xff00ffffffffffff;
    lVar2 = *(long *)(uVar21 - 8);
    lVar24 = lVar2 + 9;
    uStack_1e0 = uVar23;
    lStack_100 = lVar17;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar24,8);
    if (lVar24 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar24,8);
    }
    *plVar15 = lVar2;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar2);
    *(undefined1 *)((long)plVar15 + lVar2 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    lVar17 = lStack_100;
  }
  uStack_340 = uStack_200;
  uStack_348 = uStack_208;
  pcStack_358 = (char *)uStack_218;
  psStack_360 = (short *)uStack_220;
  uVar8 = uStack_246;
  plVar15 = plStack_328;
  uStack_a0 = uStack_1f8;
  uStack_2f8 = uVar4;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  plStack_d0 = plStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_368 = plStack_228;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_a8 = 0;
  uStack_338 = (undefined8 *)CONCAT62(uStack_338._2_6_,uStack_1f8);
  uStack_2f0 = uVar23;
  uStack_2e8 = uVar21;
  func_0x0d6a8a30(plStack_328,plStack_230,&uStack_2f8,&plStack_368);
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  uStack_340 = 0;
  if ((uStack_348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_348 & 0xff00ffffffffffff) - 8);
  }
  uStack_348 = 0;
  if (((ulong)pcStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_358 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_358 = (char *)0x0;
  if (((ulong)psStack_360 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_360 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_360 = (short *)0x0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e8 = 0;
  if ((uStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  *plVar15 = (long)&UNK_0f460320;
  plVar15[0xe] = lVar17;
  *(undefined2 *)(plVar15 + 0xf) = uVar8;
  *(undefined1 *)((long)plVar15 + 0x7a) = 1;
  plStack_368 = plVar15;
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  uStack_200 = 0;
  if ((uStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
  }
  uStack_208 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  plVar16 = (long *)*plStack_300;
  plVar3 = (long *)plStack_300[1];
  if (plVar16 != plVar3) {
    do {
      cVar13 = func_0x04fa7a10(*plVar16 + 0x20,plVar15 + 7);
      if (cVar13 == '\0') break;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar3);
  }
  func_0x0d6af860(plStack_300,plVar16,&plStack_368);
  plVar15 = plStack_368;
  puVar14 = puStack_370;
  plStack_368 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  uStack_248 = 0;
  func_0x0d3075e0(&plStack_2d8);
  if ((uStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
  }
  uStack_308 = 0;
  if ((uStack_310 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_310 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = (long *)puVar14[0x56];
  puVar14[0x55] = 0;
  puVar14[0x56] = 0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  puVar14[0x57] = 0;
  lVar17 = *(long *)((long)plStack_320 + 8);
  lVar24 = *(long *)((long)plStack_320 + 0x10);
  if (lVar24 != 0) {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  puVar14[0x55] = lVar17;
  plVar15 = (long *)puVar14[0x56];
  puVar14[0x56] = lVar24;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    lVar17 = *plStack_1c8;
  }
  if (lVar17 != 0) {
    puVar14[0x57] = plStack_320;
  }
  uStack_158 = *plStack_1d0;
  uStack_150 = (long *)plStack_1d0[1];
  if (uStack_150 == (long *)0x0) {
    uStack_148 = *puStack_2e0;
  }
  else {
    LOCK();
    uStack_150[1] = uStack_150[1] + 1;
    UNLOCK();
    uStack_148 = *puStack_2e0;
    LOCK();
    uStack_150[1] = uStack_150[1] + 1;
    UNLOCK();
  }
  auStack_160[0] = 0xc;
  uStack_140 = 0;
  uStack_138 = 0x100;
  puVar18 = (undefined2 *)puStack_370[0x58];
  uStack_80 = uStack_158;
  plStack_78 = uStack_150;
  uStack_70 = uStack_148;
  if (puVar18 == (undefined2 *)0x0) {
    puVar18 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar18 == (undefined2 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar14 = puStack_370;
    *puVar18 = auStack_160[0];
    *(undefined8 *)(puVar18 + 4) = uStack_158;
    *(long **)(puVar18 + 8) = uStack_150;
    uStack_158 = 0;
    uStack_150 = (long *)0x0;
    *(undefined8 *)(puVar18 + 0xc) = uStack_148;
    uStack_148 = 0;
    puVar18[0x14] = uStack_138;
    *(undefined8 *)(puVar18 + 0x10) = uStack_140;
    lVar17 = puStack_370[0x58];
    puStack_370[0x58] = puVar18;
    if (lVar17 != 0) {
      plVar15 = *(long **)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 8) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
        plVar15 = *(long **)(lVar17 + 0x10);
        *(undefined8 *)(lVar17 + 0x18) = 0;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar16 = plVar15 + 1;
          lVar24 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar24 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN_0412c2d0(plVar15);
          }
        }
      }
      func_0x0412a280(lVar17,0x30);
    }
  }
  else {
    *puVar18 = 0xc;
    if (puVar18 != auStack_160) {
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 8) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = 0;
      uVar9 = (undefined4)uStack_158;
      uVar10 = uStack_158._4_4_;
      uVar11 = (undefined4)uStack_150;
      uVar12 = uStack_150._4_4_;
      uStack_158 = 0;
      uStack_150 = (long *)0x0;
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined4 *)(puVar18 + 4) = uVar9;
      *(undefined4 *)(puVar18 + 6) = uVar10;
      *(undefined4 *)(puVar18 + 8) = uVar11;
      *(undefined4 *)(puVar18 + 10) = uVar12;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = uStack_148;
      uStack_148 = 0;
    }
    puVar18[0x14] = uStack_138;
    *(undefined8 *)(puVar18 + 0x10) = uStack_140;
    puVar14 = puStack_370;
  }
  plVar15 = uStack_150;
  uStack_158 = 0;
  uStack_150 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_148 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = uStack_150;
    uStack_148 = 0;
    if (uStack_150 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_150 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_150 + 0x10))(uStack_150);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  plVar15 = plStack_78;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_70 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = plStack_78;
    uStack_70 = 0;
    if (plStack_78 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_78 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  func_0x05d54750(&uStack_318,&UNK_0f45f978);
  if ((((char *)*plStack_1c8 == (char *)0x0) || (*(char *)*plStack_1c8 == '\0')) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_013533dc),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar14[0x5b] = uStack_318;
  if ((puVar14[0x5c] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x5c] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x5c] = 0;
  uVar23 = uStack_310;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar14[0x5c] = uVar23;
  if ((puVar14[0x5d] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x5d] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x5d] = 0;
  uVar23 = uStack_308;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psStack_360 = (short *)(puVar14 + 0x52);
  puVar14[0x5d] = uVar23;
  plStack_368 = plStack_f0;
  pcVar1 = (char *)puVar14[0x55];
  lVar17 = puVar14[0x56];
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar4 = puStack_370[0x57];
  pcStack_358 = pcVar1;
  lStack_350 = lVar17;
  uStack_348 = uVar4;
  if ((puStack_370[0x58] == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_013d79d8),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_340 = puStack_370[0x58];
  puVar14 = (undefined8 *)puStack_370[0x59];
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = 0;
    puStack_370[0x59] = puVar14;
  }
  puStack_330 = puStack_370 + 0x5b;
  plStack_2d8 = plStack_368;
  psStack_2d0 = psStack_360;
  pcStack_358 = (char *)0x0;
  lStack_350 = 0;
  uStack_348 = 0;
  uStack_338._0_4_ = SUB84(puVar14,0);
  uStack_338._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
  uStack_2b0 = (undefined4)uStack_340;
  uStack_2ac = uStack_340._4_4_;
  uStack_2a8 = (undefined4)uStack_338;
  uStack_2a4 = uStack_338._4_4_;
  uStack_298 = uStack_318;
  uStack_290 = 0;
  uVar23 = uStack_310;
  uStack_338 = puVar14;
  pcStack_2c8 = pcVar1;
  lStack_2c0 = lVar17;
  lStack_2b8 = uVar4;
  puStack_2a0 = puStack_330;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_288 = 0;
  uVar21 = uStack_308;
  uStack_290 = uVar23;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar22 = psStack_2d0;
  uStack_258 = 0;
  uStack_248 = 1;
  uStack_246 = 0xfbf8;
  uStack_244 = 1;
  plStack_300 = plStack_2d8;
  uStack_388 = *(undefined8 *)psStack_2d0;
  uVar23 = *(ulong *)(psStack_2d0 + 4);
  uStack_288 = uVar21;
  if ((uVar23 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_378 = 0;
  uVar21 = *(ulong *)(psVar22 + 8);
  uStack_380 = uVar23;
  if ((uVar21 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar7 = psStack_2d0;
  uVar23 = uStack_290 & 0x80000000000000;
  uVar5 = (ushort)(uStack_290 >> 0x30);
  uStack_378 = uVar21;
  if (uVar23 == 0) {
    if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0d30468b;
    uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d304639:
    if (((uVar19 != 4) || (*(int *)(uStack_290 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_298 != 9999 || ((uStack_298._2_2_ != 9999 || (uStack_298._4_2_ != 9999))))))
    goto LAB_0d30468b;
LAB_0d304871:
    if (uVar23 == 0) {
      if ((uStack_290 & 0x7f000000000000) != 0) {
        uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d3048b2:
        if (((uVar19 == 4) &&
            (piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff), *piVar25 == 0x61746562)) &&
           (((short)uStack_298 == 9999 && ((uStack_298._2_2_ == 9999 && (uStack_298._4_2_ == 9999)))
            ))) {
          uStack_388 = uStack_298;
          if ((uStack_380 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8)
            ;
            piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff);
            uVar23 = uStack_290 & 0x80000000000000;
          }
          uStack_380 = 0;
          uVar21 = uStack_290;
          if (uVar23 != 0) {
            lVar24 = *(long *)(piVar25 + -2);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            *plVar15 = lVar24;
            func_0x0eee2f00(plVar15 + 1,piVar25,lVar24);
            *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
            uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
          }
          uStack_380 = uVar21;
          if ((uStack_378 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8)
            ;
          }
          uStack_378 = 0;
          uVar21 = uStack_288;
          if ((uStack_288 & 0x80000000000000) != 0) {
            uVar21 = uStack_288 & 0xff00ffffffffffff;
            lVar24 = *(long *)(uVar21 - 8);
            lVar17 = lVar24 + 9;
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
            if (lVar17 != 0 && plVar15 == (long *)0x0) {
              func_0x0eec74c0(lVar17,8);
            }
            goto LAB_0d304a4e;
          }
        }
      }
    }
    else {
      uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
      if (uVar19 != 0) goto LAB_0d3048b2;
    }
  }
  else {
    uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0d304639;
LAB_0d30468b:
    uVar19 = *(ulong *)(psVar22 + 4);
    if ((uVar19 & 0x80000000000000) != 0) {
      uVar20 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
      if (uVar20 != 0) goto LAB_0d3046c6;
      goto LAB_0d304871;
    }
    if ((uVar19 & 0x7f000000000000) == 0) goto LAB_0d304871;
    uVar20 = (ulong)((ushort)(uVar19 >> 0x30) & 0x7f);
LAB_0d3046c6:
    if ((((uVar20 != 4) || (*(int *)(uVar19 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*psVar22 != 9999)) || ((psVar22[1] != 9999 || (psVar22[2] != 9999)))) goto LAB_0d304871;
    uStack_388 = *(undefined8 *)psStack_2d0;
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uStack_380 = 0;
    uVar23 = *(ulong *)(psVar7 + 4);
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar24 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar15 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar15 = lVar24;
      func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
      uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar23;
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    uVar21 = *(ulong *)(psVar7 + 8);
    if ((uVar21 & 0x80000000000000) == 0) goto LAB_0d304a85;
    uVar21 = uVar21 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
LAB_0d304a4e:
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
LAB_0d304a85:
  uStack_378 = uVar21;
  func_0x0d6b3300(&plStack_228,&uStack_298,&uStack_388,1);
  if ((CONCAT44(uStack_2ac,uStack_2b0) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_0148c0a9),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_2c8 == (char *)0x0) || (*pcStack_2c8 != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_0148c0a9);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    plVar15 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
    if ((pcStack_2c8 == (char *)0x0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    plVar15 = (long *)CONCAT44(uStack_2ac,uStack_2b0);
  }
  if ((*pcStack_2c8 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar17 = lStack_2b8;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = uStack_298;
  uStack_1e8 = uStack_298;
  plStack_1c8 = (long *)lVar17;
  uVar23 = uStack_290;
  plStack_328 = plVar16;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar23 = uStack_290 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar16 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar16 = lVar24;
    func_0x0eee2f00(plVar16 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar16 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1d8 = 0;
  uVar21 = uStack_288;
  if ((uStack_288 & 0x80000000000000) != 0) {
    uVar21 = uStack_288 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    plStack_230 = plVar15;
    uStack_1e0 = uVar23;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar15 = plStack_230;
  }
  uStack_340 = uStack_200;
  uStack_348 = uStack_208;
  pcStack_358 = (char *)uStack_218;
  psStack_360 = (short *)uStack_220;
  uVar8 = uStack_246;
  plVar16 = plStack_328;
  uStack_a0 = uStack_1f8;
  uStack_2f8 = uVar4;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  plStack_d0 = plStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_368 = plStack_228;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_a8 = 0;
  uStack_338 = (undefined8 *)CONCAT62(uStack_338._2_6_,uStack_1f8);
  uStack_2f0 = uVar23;
  uStack_2e8 = uVar21;
  func_0x0d6a8a30(plStack_328,plStack_1c8,&uStack_2f8,&plStack_368);
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  uStack_340 = 0;
  if ((uStack_348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_348 & 0xff00ffffffffffff) - 8);
  }
  uStack_348 = 0;
  if (((ulong)pcStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_358 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_358 = (char *)0x0;
  if (((ulong)psStack_360 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_360 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_360 = (short *)0x0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e8 = 0;
  if ((uStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  *plVar16 = (long)&UNK_0f460360;
  plVar16[0xe] = (long)plVar15;
  *(undefined2 *)(plVar16 + 0xf) = uVar8;
  *(undefined1 *)((long)plVar16 + 0x7a) = 1;
  plStack_368 = plVar16;
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  uStack_200 = 0;
  if ((uStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
  }
  uStack_208 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = (long *)*plStack_300;
  plVar3 = (long *)plStack_300[1];
  if (plVar15 != plVar3) {
    do {
      cVar13 = func_0x04fa7a10(*plVar15 + 0x20,plVar16 + 7);
      if (cVar13 == '\0') break;
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar3);
  }
  func_0x0d6af860(plStack_300,plVar15,&plStack_368);
  plVar15 = plStack_368;
  puVar14 = puStack_370;
  plStack_368 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  uStack_248 = 0;
  func_0x0d307740(&plStack_2d8);
  if ((uStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
  }
  uStack_308 = 0;
  if ((uStack_310 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_310 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = (long *)puVar14[0x74];
  puVar14[0x73] = 0;
  puVar14[0x74] = 0;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
  }
  puVar14[0x75] = 0;
  lVar17 = *(long *)((long)plStack_320 + 8);
  lVar24 = *(long *)((long)plStack_320 + 0x10);
  if (lVar24 != 0) {
    LOCK();
    *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  puVar14[0x73] = lVar17;
  plVar15 = (long *)puVar14[0x74];
  puVar14[0x74] = lVar24;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    lVar17 = *plStack_d8;
  }
  if (lVar17 != 0) {
    puVar14[0x75] = plStack_320;
  }
  uStack_1b8 = *plStack_1d0;
  uStack_1b0 = (long *)plStack_1d0[1];
  if (uStack_1b0 == (long *)0x0) {
    uStack_1a8 = *puStack_2e0;
  }
  else {
    LOCK();
    uStack_1b0[1] = uStack_1b0[1] + 1;
    UNLOCK();
    uStack_1a8 = *puStack_2e0;
    LOCK();
    uStack_1b0[1] = uStack_1b0[1] + 1;
    UNLOCK();
  }
  auStack_1c0[0] = 0xc;
  uStack_1a0 = 0;
  uStack_198 = 0x100;
  puVar18 = (undefined2 *)puStack_370[0x76];
  uStack_98 = uStack_1b8;
  plStack_90 = uStack_1b0;
  uStack_88 = uStack_1a8;
  if (puVar18 == (undefined2 *)0x0) {
    puVar18 = (undefined2 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar18 == (undefined2 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    puVar14 = puStack_370;
    *puVar18 = auStack_1c0[0];
    *(undefined8 *)(puVar18 + 4) = uStack_1b8;
    *(long **)(puVar18 + 8) = uStack_1b0;
    uStack_1b8 = 0;
    uStack_1b0 = (long *)0x0;
    *(undefined8 *)(puVar18 + 0xc) = uStack_1a8;
    uStack_1a8 = 0;
    puVar18[0x14] = uStack_198;
    *(undefined8 *)(puVar18 + 0x10) = uStack_1a0;
    lVar17 = puStack_370[0x76];
    puStack_370[0x76] = puVar18;
    if (lVar17 != 0) {
      plVar15 = *(long **)(lVar17 + 0x10);
      *(undefined8 *)(lVar17 + 8) = 0;
      *(undefined8 *)(lVar17 + 0x10) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar24 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
        plVar15 = *(long **)(lVar17 + 0x10);
        *(undefined8 *)(lVar17 + 0x18) = 0;
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar16 = plVar15 + 1;
          lVar24 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (lVar24 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN_0412c2d0(plVar15);
          }
        }
      }
      func_0x0412a280(lVar17,0x30);
    }
  }
  else {
    *puVar18 = 0xc;
    if (puVar18 != auStack_1c0) {
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined8 *)(puVar18 + 4) = 0;
      *(undefined8 *)(puVar18 + 8) = 0;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = 0;
      uVar9 = (undefined4)uStack_1b8;
      uVar10 = uStack_1b8._4_4_;
      uVar11 = (undefined4)uStack_1b0;
      uVar12 = uStack_1b0._4_4_;
      uStack_1b8 = 0;
      uStack_1b0 = (long *)0x0;
      plVar15 = *(long **)(puVar18 + 8);
      *(undefined4 *)(puVar18 + 4) = uVar9;
      *(undefined4 *)(puVar18 + 6) = uVar10;
      *(undefined4 *)(puVar18 + 8) = uVar11;
      *(undefined4 *)(puVar18 + 10) = uVar12;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          FUN_0412c2d0(plVar15);
        }
      }
      *(undefined8 *)(puVar18 + 0xc) = uStack_1a8;
      uStack_1a8 = 0;
    }
    puVar18[0x14] = uStack_198;
    *(undefined8 *)(puVar18 + 0x10) = uStack_1a0;
    puVar14 = puStack_370;
  }
  plVar15 = uStack_1b0;
  uStack_1b8 = 0;
  uStack_1b0 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_1a8 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = uStack_1b0;
    uStack_1a8 = 0;
    if (uStack_1b0 != (long *)0x0) {
      LOCK();
      plVar16 = uStack_1b0 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1b0 + 0x10))(uStack_1b0);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  plVar15 = plStack_90;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_88 = 0;
  }
  else {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar17 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0412c2d0(plVar15);
    }
    plVar15 = plStack_90;
    uStack_88 = 0;
    if (plStack_90 != (long *)0x0) {
      LOCK();
      plVar16 = plStack_90 + 1;
      lVar17 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        FUN_0412c2d0(plVar15);
      }
    }
  }
  func_0x05d54750(&uStack_318,&UNK_0f45f9a0);
  if ((((char *)*plStack_d8 == (char *)0x0) || (*(char *)*plStack_d8 == '\0')) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013c6966,&UNK_01259d39,0xf5,&UNK_01259d48,&UNK_013535c1),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  puVar14[0x79] = uStack_318;
  if ((puVar14[0x7a] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x7a] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x7a] = 0;
  uVar23 = uStack_310;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puVar14[0x7a] = uVar23;
  if ((puVar14[0x7b] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(puVar14[0x7b] & 0xff00ffffffffffff) - 8);
  }
  puVar14[0x7b] = 0;
  uVar23 = uStack_308;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psStack_360 = (short *)(puVar14 + 0x70);
  puVar14[0x7b] = uVar23;
  plStack_368 = plStack_f8;
  pcVar1 = (char *)puVar14[0x73];
  lVar17 = puVar14[0x74];
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  uVar4 = puStack_370[0x75];
  pcStack_358 = pcVar1;
  lStack_350 = lVar17;
  uStack_348 = uVar4;
  if ((puStack_370[0x76] == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_011aff1e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_340 = puStack_370[0x76];
  puVar14 = (undefined8 *)puStack_370[0x77];
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar14 = 0;
    puStack_370[0x77] = puVar14;
  }
  puStack_330 = puStack_370 + 0x79;
  plStack_2d8 = plStack_368;
  psStack_2d0 = psStack_360;
  pcStack_358 = (char *)0x0;
  lStack_350 = 0;
  uStack_348 = 0;
  uStack_338._0_4_ = SUB84(puVar14,0);
  uStack_338._4_4_ = (undefined4)((ulong)puVar14 >> 0x20);
  uStack_2b0 = (undefined4)uStack_340;
  uStack_2ac = uStack_340._4_4_;
  uStack_2a8 = (undefined4)uStack_338;
  uStack_2a4 = uStack_338._4_4_;
  uStack_298 = uStack_318;
  uStack_290 = 0;
  uVar23 = uStack_310;
  uStack_338 = puVar14;
  pcStack_2c8 = pcVar1;
  lStack_2c0 = lVar17;
  lStack_2b8 = uVar4;
  puStack_2a0 = puStack_330;
  if ((uStack_310 & 0x80000000000000) != 0) {
    uVar23 = uStack_310 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_288 = 0;
  uVar21 = uStack_308;
  uStack_290 = uVar23;
  if ((uStack_308 & 0x80000000000000) != 0) {
    uVar23 = uStack_308 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar22 = psStack_2d0;
  uStack_258 = 0;
  uStack_248 = 1;
  uStack_246 = 0xfbf8;
  uStack_244 = 1;
  uStack_388 = *(undefined8 *)psStack_2d0;
  uVar23 = *(ulong *)(psStack_2d0 + 4);
  plStack_1d0 = plStack_2d8;
  uStack_288 = uVar21;
  if ((uVar23 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_378 = 0;
  uVar21 = *(ulong *)(psVar22 + 8);
  uStack_380 = uVar23;
  if ((uVar21 & 0x80000000000000) != 0) {
    lVar24 = *(long *)((uVar21 & 0xff00ffffffffffff) - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21 & 0xff00ffffffffffff,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  psVar7 = psStack_2d0;
  uVar23 = uStack_290 & 0x80000000000000;
  uVar5 = (ushort)(uStack_290 >> 0x30);
  uStack_378 = uVar21;
  if (uVar23 == 0) {
    if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0d305c33;
    uVar19 = (ulong)(uVar5 & 0x7f);
LAB_0d305be1:
    if (((uVar19 != 4) || (*(int *)(uStack_290 & 0xff00ffffffffffff) != 0x61746562)) ||
       (((short)uStack_298 != 9999 || ((uStack_298._2_2_ != 9999 || (uStack_298._4_2_ != 9999))))))
    goto LAB_0d305c33;
LAB_0d305e19:
    if (uVar23 == 0) {
      if ((uStack_290 & 0x7f000000000000) == 0) goto LAB_0d306041;
      uVar19 = (ulong)(uVar5 & 0x7f);
    }
    else {
      uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
      if (uVar19 == 0) goto LAB_0d306041;
    }
    if (((uVar19 != 4) ||
        (piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff), *piVar25 != 0x61746562)) ||
       (((short)uStack_298 != 9999 || ((uStack_298._2_2_ != 9999 || (uStack_298._4_2_ != 9999))))))
    goto LAB_0d306041;
    uStack_388 = uStack_298;
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
      piVar25 = (int *)(uStack_290 & 0xff00ffffffffffff);
      uVar23 = uStack_290 & 0x80000000000000;
    }
    uStack_380 = 0;
    uVar21 = uStack_290;
    if (uVar23 != 0) {
      lVar24 = *(long *)(piVar25 + -2);
      lVar17 = lVar24 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar15 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar15 = lVar24;
      func_0x0eee2f00(plVar15 + 1,piVar25,lVar24);
      *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
      uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar21;
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    uVar21 = uStack_288;
    if ((uStack_288 & 0x80000000000000) == 0) goto LAB_0d306041;
    uVar21 = uStack_288 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
  }
  else {
    uVar19 = *(ulong *)((uStack_290 & 0xff00ffffffffffff) - 8);
    if (uVar19 != 0) goto LAB_0d305be1;
LAB_0d305c33:
    uVar19 = *(ulong *)(psVar22 + 4);
    if ((uVar19 & 0x80000000000000) != 0) {
      uVar20 = *(ulong *)((uVar19 & 0xff00ffffffffffff) - 8);
      if (uVar20 != 0) goto LAB_0d305c6e;
      goto LAB_0d305e19;
    }
    if ((uVar19 & 0x7f000000000000) == 0) goto LAB_0d305e19;
    uVar20 = (ulong)((ushort)(uVar19 >> 0x30) & 0x7f);
LAB_0d305c6e:
    if ((((uVar20 != 4) || (*(int *)(uVar19 & 0xff00ffffffffffff) != 0x61746562)) ||
        (*psVar22 != 9999)) || ((psVar22[1] != 9999 || (psVar22[2] != 9999)))) goto LAB_0d305e19;
    uStack_388 = *(undefined8 *)psStack_2d0;
    if ((uStack_380 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
    }
    uStack_380 = 0;
    uVar23 = *(ulong *)(psVar7 + 4);
    if ((uVar23 & 0x80000000000000) != 0) {
      lVar24 = *(long *)((uVar23 & 0xff00ffffffffffff) - 8);
      lVar17 = lVar24 + 9;
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
      if (lVar17 != 0 && plVar15 == (long *)0x0) {
        func_0x0eec74c0(lVar17,8);
      }
      *plVar15 = lVar24;
      func_0x0eee2f00(plVar15 + 1,uVar23 & 0xff00ffffffffffff,lVar24);
      *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
      uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_380 = uVar23;
    if ((uStack_378 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
    }
    uStack_378 = 0;
    uVar21 = *(ulong *)(psVar7 + 8);
    if ((uVar21 & 0x80000000000000) == 0) goto LAB_0d306041;
    uVar21 = uVar21 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
  }
  *plVar15 = lVar24;
  func_0x0eee2f00(plVar15 + 1,uVar21,lVar24);
  *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
  uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
LAB_0d306041:
  uStack_378 = uVar21;
  func_0x0d6b3300(&plStack_228,&uStack_298,&uStack_388,1);
  if ((CONCAT44(uStack_2ac,uStack_2b0) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_012a4e2b,&UNK_01495f35,0x16d,&UNK_013fa33d,&UNK_011cb89f),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((pcStack_2c8 == (char *)0x0) || (*pcStack_2c8 != '\x01')) {
    cVar13 = func_0x0eeddcf0(&UNK_011b95c6,&UNK_0119d79e,0x16e,&UNK_013fa33d,&UNK_011cb89f);
    if (cVar13 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
    if ((pcStack_2c8 == (char *)0x0) &&
       (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013f915e),
       cVar13 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  else {
    lVar17 = CONCAT44(uStack_2ac,uStack_2b0);
  }
  if ((*pcStack_2c8 == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013f915e),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar24 = lStack_2b8;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar4 = uStack_298;
  uStack_1e8 = uStack_298;
  puStack_2e0 = (undefined8 *)lVar24;
  uVar23 = uStack_290;
  plStack_320 = plVar15;
  plStack_300 = (long *)lVar17;
  if ((uStack_290 & 0x80000000000000) != 0) {
    uVar23 = uStack_290 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar23 - 8);
    lVar17 = lVar24 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar23,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar23 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1d8 = 0;
  uVar21 = uStack_288;
  if ((uStack_288 & 0x80000000000000) != 0) {
    uVar21 = uStack_288 & 0xff00ffffffffffff;
    lVar24 = *(long *)(uVar21 - 8);
    lVar17 = lVar24 + 9;
    uStack_1e0 = uVar23;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar17,8);
    if (lVar17 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar17,8);
    }
    *plVar15 = lVar24;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar24);
    *(undefined1 *)((long)plVar15 + lVar24 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_340 = uStack_200;
  uStack_348 = uStack_208;
  pcStack_358 = (char *)uStack_218;
  psStack_360 = (short *)uStack_220;
  uVar8 = uStack_246;
  plVar15 = plStack_320;
  uStack_a0 = uStack_1f8;
  uStack_2f8 = uVar4;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  plStack_d0 = plStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  plStack_368 = plStack_228;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_a8 = 0;
  uStack_338 = (undefined8 *)CONCAT62(uStack_338._2_6_,uStack_1f8);
  uStack_2f0 = uVar23;
  uStack_2e8 = uVar21;
  func_0x0d6a8a30(plStack_320,puStack_2e0,&uStack_2f8,&plStack_368);
  if ((uStack_340 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_340 & 0xff00ffffffffffff) - 8);
  }
  uStack_340 = 0;
  if ((uStack_348 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_348 & 0xff00ffffffffffff) - 8);
  }
  uStack_348 = 0;
  if (((ulong)pcStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)pcStack_358 & 0xff00ffffffffffff) - 8)
    ;
  }
  pcStack_358 = (char *)0x0;
  if (((ulong)psStack_360 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)psStack_360 & 0xff00ffffffffffff) - 8)
    ;
  }
  psStack_360 = (short *)0x0;
  if ((uStack_2e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
  }
  uStack_2e8 = 0;
  if ((uStack_2f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2f0 & 0xff00ffffffffffff) - 8);
  }
  *plVar15 = (long)&UNK_0f4603a0;
  plVar15[0xe] = (long)plStack_300;
  *(undefined2 *)(plVar15 + 0xf) = uVar8;
  *(undefined1 *)((long)plVar15 + 0x7a) = 1;
  plStack_368 = plVar15;
  if ((uStack_200 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_1d0;
  uStack_200 = 0;
  if ((uStack_208 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
  }
  uStack_208 = 0;
  if ((uStack_218 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_218 & 0xff00ffffffffffff) - 8);
  }
  uStack_218 = 0;
  if ((uStack_220 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_378 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
  }
  uStack_378 = 0;
  if ((uStack_380 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
  }
  plVar16 = (long *)*plVar15;
  plVar3 = (long *)plVar15[1];
  if (plVar16 != plVar3) {
    plVar26 = plStack_320 + 7;
    do {
      cVar13 = func_0x04fa7a10(*plVar16 + 0x20,plVar26);
      if (cVar13 == '\0') break;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar3);
  }
  func_0x0d6af860(plVar15,plVar16,&plStack_368);
  plVar15 = plStack_368;
  plStack_368 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 8))();
  }
  uStack_248 = 0;
  func_0x0d3078a0(&plStack_2d8);
  if ((uStack_308 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_308 & 0xff00ffffffffffff) - 8);
  }
  uStack_308 = 0;
  if ((uStack_310 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_310 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- assembly ---- */
/* 0d300630 */  PUSH RBP
/* 0d300631 */  PUSH R15
/* 0d300633 */  PUSH R14
/* 0d300635 */  PUSH R13
/* 0d300637 */  PUSH R12
/* 0d300639 */  PUSH RBX
/* 0d30063a */  SUB RSP,0x358
/* 0d300641 */  MOV qword ptr [RSP + 0x1b8],RDX
/* 0d300649 */  MOV qword ptr [RSP + 0x68],RSI
/* 0d30064e */  MOV RBX,RDI
/* 0d300651 */  LEA RAX,[0xf534768]
/* 0d300658 */  MOV qword ptr [RDI],RAX
/* 0d30065b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300662 */  LEA RDI,[0xf5463b0]
/* 0d300669 */  MOV ESI,0x20
/* 0d30066e */  CALL qword ptr [RAX + 0x10]
/* 0d300671 */  TEST RAX,RAX
/* 0d300674 */  MOV qword ptr [RSP + 0x18],RBX
/* 0d300679 */  JZ 0x0d306719
/* 0d30067f */  XORPS XMM0,XMM0
/* 0d300682 */  MOVUPS xmmword ptr [RAX + 0x8],XMM0
/* 0d300686 */  LEA RCX,[0xef44a60]
/* 0d30068d */  MOV qword ptr [RAX],RCX
/* 0d300690 */  MOV RCX,RAX
/* 0d300693 */  ADD RCX,0x18
/* 0d300697 */  MOV byte ptr [RAX + 0x18],0x1
/* 0d30069b */  MOV qword ptr [RBX + 0x8],RCX
/* 0d30069f */  MOV qword ptr [RBX + 0x10],RAX
/* 0d3006a3 */  LEA RAX,[0xf45f878]
/* 0d3006aa */  MOV qword ptr [RBX],RAX
/* 0d3006ad */  MOV qword ptr [RBX + 0x18],0x0
/* 0d3006b5 */  LEA RSI,[0xf0863e8]
/* 0d3006bc */  LEA RDI,[RSP + 0xb0]
/* 0d3006c4 */  CALL 0x05d54750
/* 0d3006c9 */  LEA RAX,[RBX + 0x20]
/* 0d3006cd */  MOV RBP,-0xff000000000001
/* 0d3006d7 */  MOV R15,0x80000000000000
/* 0d3006e1 */  XORPS XMM0,XMM0
/* 0d3006e4 */  MOVAPS xmmword ptr [RAX],XMM0
/* 0d3006e7 */  MOV qword ptr [RSP + 0x2a8],RAX
/* 0d3006ef */  MOV qword ptr [RAX + 0x10],0x0
/* 0d3006f7 */  LEA RAX,[RBX + 0x40]
/* 0d3006fb */  MOVAPS xmmword ptr [RBX + 0x40],XMM0
/* 0d3006ff */  MOV qword ptr [RBX + 0x38],RAX
/* 0d300703 */  MOV qword ptr [RBX + 0x70],0x0
/* 0d30070b */  MOV qword ptr [RBX + 0xa0],0x0
/* 0d300716 */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d30071e */  MOV qword ptr [RBX + 0xb0],RAX
/* 0d300725 */  MOV qword ptr [RBX + 0xb8],0x0
/* 0d300730 */  MOV R14,qword ptr [RSP + 0xb8]
/* 0d300738 */  BT R14,0x37
/* 0d30073d */  JNC 0x0d3007ac
/* 0d30073f */  AND R14,RBP
/* 0d300742 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300746 */  LEA R13,[R15 + 0x9]
/* 0d30074a */  LEA RDI,[0xf5463b0]
/* 0d300751 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300758 */  MOV EDX,0x8
/* 0d30075d */  MOV RSI,R13
/* 0d300760 */  CALL qword ptr [RAX + 0x20]
/* 0d300763 */  MOV R12,RAX
/* 0d300766 */  TEST RAX,RAX
/* 0d300769 */  SETNZ AL
/* 0d30076c */  TEST R13,R13
/* 0d30076f */  SETZ CL
/* 0d300772 */  OR CL,AL
/* 0d300774 */  JZ 0x0d306779
/* 0d30077a */  MOV qword ptr [R12],R15
/* 0d30077e */  MOV R13,R12
/* 0d300781 */  ADD R13,0x8
/* 0d300785 */  MOV RDI,R13
/* 0d300788 */  MOV RSI,R14
/* 0d30078b */  MOV RDX,R15
/* 0d30078e */  CALL 0x0eee2f00
/* 0d300793 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d300799 */  AND R13,RBP
/* 0d30079c */  MOV R15,0x80000000000000
/* 0d3007a6 */  OR R13,R15
/* 0d3007a9 */  MOV R14,R13
/* 0d3007ac */  MOV qword ptr [RBX + 0xb8],R14
/* 0d3007b3 */  MOV qword ptr [RBX + 0xc0],0x0
/* 0d3007be */  MOV R14,qword ptr [RSP + 0xc0]
/* 0d3007c6 */  TEST R14,R15
/* 0d3007c9 */  JNZ 0x0d300810
/* 0d3007cb */  MOV qword ptr [RBX + 0xc0],R14
/* 0d3007d2 */  LEA RAX,[RBX + 0xc8]
/* 0d3007d9 */  MOV qword ptr [RSP + 0x88],RAX
/* 0d3007e1 */  XORPS XMM0,XMM0
/* 0d3007e4 */  MOVUPS xmmword ptr [RBX + 0xc8],XMM0
/* 0d3007eb */  MOVUPS xmmword ptr [RBX + 0xd8],XMM0
/* 0d3007f2 */  MOVUPS xmmword ptr [RBX + 0xe8],XMM0
/* 0d3007f9 */  MOVUPS xmmword ptr [RBX + 0xf8],XMM0
/* 0d300800 */  MOV qword ptr [RBX + 0x108],0x0
/* 0d30080b */  JMP 0x0d3008f0
/* 0d300810 */  LEA R12,[RBX + 0xb8]
/* 0d300817 */  AND R14,RBP
/* 0d30081a */  MOV R15,qword ptr [R14 + -0x8]
/* 0d30081e */  LEA RBP,[R15 + 0x9]
/* 0d300822 */  LEA RDI,[0xf5463b0]
/* 0d300829 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300830 */  MOV EDX,0x8
/* 0d300835 */  MOV RSI,RBP
/* 0d300838 */  CALL qword ptr [RAX + 0x20]
/* 0d30083b */  MOV R13,RAX
/* 0d30083e */  TEST RAX,RAX
/* 0d300841 */  SETNZ AL
/* 0d300844 */  TEST RBP,RBP
/* 0d300847 */  SETZ CL
/* 0d30084a */  OR CL,AL
/* 0d30084c */  JZ 0x0d30678b
/* 0d300852 */  MOV qword ptr [R13],R15
/* 0d300856 */  MOV R12,R13
/* 0d300859 */  ADD R12,0x8
/* 0d30085d */  MOV RDI,R12
/* 0d300860 */  MOV RSI,R14
/* 0d300863 */  MOV RDX,R15
/* 0d300866 */  CALL 0x0eee2f00
/* 0d30086b */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d300871 */  MOV RBP,-0xff000000000001
/* 0d30087b */  AND R12,RBP
/* 0d30087e */  MOV R15,0x80000000000000
/* 0d300888 */  OR R12,R15
/* 0d30088b */  MOV RSI,qword ptr [RSP + 0xc0]
/* 0d300893 */  LEA RAX,[RBX + 0xc8]
/* 0d30089a */  MOV qword ptr [RSP + 0x88],RAX
/* 0d3008a2 */  MOV qword ptr [RBX + 0xc0],R12
/* 0d3008a9 */  XORPS XMM0,XMM0
/* 0d3008ac */  MOVUPS xmmword ptr [RBX + 0xf8],XMM0
/* 0d3008b3 */  MOVUPS xmmword ptr [RBX + 0xe8],XMM0
/* 0d3008ba */  MOVUPS xmmword ptr [RBX + 0xd8],XMM0
/* 0d3008c1 */  MOVUPS xmmword ptr [RBX + 0xc8],XMM0
/* 0d3008c8 */  MOV qword ptr [RBX + 0x108],0x0
/* 0d3008d3 */  TEST RSI,R15
/* 0d3008d6 */  JZ 0x0d3008f0
/* 0d3008d8 */  AND RSI,RBP
/* 0d3008db */  ADD RSI,-0x8
/* 0d3008df */  LEA RDI,[0xf5463b0]
/* 0d3008e6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3008ed */  CALL qword ptr [RAX + 0x28]
/* 0d3008f0 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0d3008fc */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0d300904 */  TEST RSI,R15
/* 0d300907 */  JZ 0x0d300921
/* 0d300909 */  AND RSI,RBP
/* 0d30090c */  ADD RSI,-0x8
/* 0d300910 */  LEA RDI,[0xf5463b0]
/* 0d300917 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30091e */  CALL qword ptr [RAX + 0x28]
/* 0d300921 */  LEA RSI,[0xf0863e8]
/* 0d300928 */  LEA RDI,[RSP + 0xb0]
/* 0d300930 */  CALL 0x05d54750
/* 0d300935 */  LEA RAX,[RBX + 0x110]
/* 0d30093c */  XORPS XMM0,XMM0
/* 0d30093f */  MOVAPS xmmword ptr [RAX],XMM0
/* 0d300942 */  MOV qword ptr [RSP + 0x2a0],RAX
/* 0d30094a */  MOV qword ptr [RAX + 0x10],0x0
/* 0d300952 */  LEA RAX,[RBX + 0x130]
/* 0d300959 */  MOVAPS xmmword ptr [RBX + 0x130],XMM0
/* 0d300960 */  MOV qword ptr [RBX + 0x128],RAX
/* 0d300967 */  MOV qword ptr [RBX + 0x160],0x0
/* 0d300972 */  MOV qword ptr [RBX + 0x190],0x0
/* 0d30097d */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d300985 */  MOV qword ptr [RBX + 0x1a0],RAX
/* 0d30098c */  MOV qword ptr [RBX + 0x1a8],0x0
/* 0d300997 */  MOV R14,qword ptr [RSP + 0xb8]
/* 0d30099f */  TEST R14,R15
/* 0d3009a2 */  JZ 0x0d300a11
/* 0d3009a4 */  AND R14,RBP
/* 0d3009a7 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3009ab */  LEA R13,[R15 + 0x9]
/* 0d3009af */  LEA RDI,[0xf5463b0]
/* 0d3009b6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3009bd */  MOV EDX,0x8
/* 0d3009c2 */  MOV RSI,R13
/* 0d3009c5 */  CALL qword ptr [RAX + 0x20]
/* 0d3009c8 */  MOV R12,RAX
/* 0d3009cb */  TEST RAX,RAX
/* 0d3009ce */  SETNZ AL
/* 0d3009d1 */  TEST R13,R13
/* 0d3009d4 */  SETZ CL
/* 0d3009d7 */  OR CL,AL
/* 0d3009d9 */  JZ 0x0d30679d
/* 0d3009df */  MOV qword ptr [R12],R15
/* 0d3009e3 */  MOV R13,R12
/* 0d3009e6 */  ADD R13,0x8
/* 0d3009ea */  MOV RDI,R13
/* 0d3009ed */  MOV RSI,R14
/* 0d3009f0 */  MOV RDX,R15
/* 0d3009f3 */  CALL 0x0eee2f00
/* 0d3009f8 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3009fe */  AND R13,RBP
/* 0d300a01 */  MOV R15,0x80000000000000
/* 0d300a0b */  OR R13,R15
/* 0d300a0e */  MOV R14,R13
/* 0d300a11 */  MOV qword ptr [RBX + 0x1a8],R14
/* 0d300a18 */  MOV qword ptr [RBX + 0x1b0],0x0
/* 0d300a23 */  MOV R14,qword ptr [RSP + 0xc0]
/* 0d300a2b */  TEST R14,R15
/* 0d300a2e */  JNZ 0x0d300a72
/* 0d300a30 */  MOV qword ptr [RBX + 0x1b0],R14
/* 0d300a37 */  LEA RAX,[RBX + 0x1b8]
/* 0d300a3e */  MOV qword ptr [RSP + 0x60],RAX
/* 0d300a43 */  XORPS XMM0,XMM0
/* 0d300a46 */  MOVUPS xmmword ptr [RBX + 0x1b8],XMM0
/* 0d300a4d */  MOVUPS xmmword ptr [RBX + 0x1c8],XMM0
/* 0d300a54 */  MOVUPS xmmword ptr [RBX + 0x1d8],XMM0
/* 0d300a5b */  MOVUPS xmmword ptr [RBX + 0x1e8],XMM0
/* 0d300a62 */  MOV qword ptr [RBX + 0x1f8],0x0
/* 0d300a6d */  JMP 0x0d300b4f
/* 0d300a72 */  LEA R12,[RBX + 0x1a8]
/* 0d300a79 */  AND R14,RBP
/* 0d300a7c */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300a80 */  LEA RBP,[R15 + 0x9]
/* 0d300a84 */  LEA RDI,[0xf5463b0]
/* 0d300a8b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300a92 */  MOV EDX,0x8
/* 0d300a97 */  MOV RSI,RBP
/* 0d300a9a */  CALL qword ptr [RAX + 0x20]
/* 0d300a9d */  MOV R13,RAX
/* 0d300aa0 */  TEST RAX,RAX
/* 0d300aa3 */  SETNZ AL
/* 0d300aa6 */  TEST RBP,RBP
/* 0d300aa9 */  SETZ CL
/* 0d300aac */  OR CL,AL
/* 0d300aae */  JZ 0x0d3067af
/* 0d300ab4 */  MOV qword ptr [R13],R15
/* 0d300ab8 */  MOV R12,R13
/* 0d300abb */  ADD R12,0x8
/* 0d300abf */  MOV RDI,R12
/* 0d300ac2 */  MOV RSI,R14
/* 0d300ac5 */  MOV RDX,R15
/* 0d300ac8 */  CALL 0x0eee2f00
/* 0d300acd */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d300ad3 */  MOV RBP,-0xff000000000001
/* 0d300add */  AND R12,RBP
/* 0d300ae0 */  MOV R15,0x80000000000000
/* 0d300aea */  OR R12,R15
/* 0d300aed */  MOV RSI,qword ptr [RSP + 0xc0]
/* 0d300af5 */  LEA RAX,[RBX + 0x1b8]
/* 0d300afc */  MOV qword ptr [RSP + 0x60],RAX
/* 0d300b01 */  MOV qword ptr [RBX + 0x1b0],R12
/* 0d300b08 */  XORPS XMM0,XMM0
/* 0d300b0b */  MOVUPS xmmword ptr [RBX + 0x1e8],XMM0
/* 0d300b12 */  MOVUPS xmmword ptr [RBX + 0x1d8],XMM0
/* 0d300b19 */  MOVUPS xmmword ptr [RBX + 0x1c8],XMM0
/* 0d300b20 */  MOVUPS xmmword ptr [RBX + 0x1b8],XMM0
/* 0d300b27 */  MOV qword ptr [RBX + 0x1f8],0x0
/* 0d300b32 */  TEST RSI,R15
/* 0d300b35 */  JZ 0x0d300b4f
/* 0d300b37 */  AND RSI,RBP
/* 0d300b3a */  ADD RSI,-0x8
/* 0d300b3e */  LEA RDI,[0xf5463b0]
/* 0d300b45 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300b4c */  CALL qword ptr [RAX + 0x28]
/* 0d300b4f */  MOV qword ptr [RSP + 0xc0],0x0
/* 0d300b5b */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0d300b63 */  TEST RSI,R15
/* 0d300b66 */  JZ 0x0d300b80
/* 0d300b68 */  AND RSI,RBP
/* 0d300b6b */  ADD RSI,-0x8
/* 0d300b6f */  LEA RDI,[0xf5463b0]
/* 0d300b76 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300b7d */  CALL qword ptr [RAX + 0x28]
/* 0d300b80 */  LEA RSI,[0xf0863e8]
/* 0d300b87 */  LEA RDI,[RSP + 0xb0]
/* 0d300b8f */  CALL 0x05d54750
/* 0d300b94 */  LEA RAX,[RBX + 0x200]
/* 0d300b9b */  XORPS XMM0,XMM0
/* 0d300b9e */  MOVAPS xmmword ptr [RAX],XMM0
/* 0d300ba1 */  MOV qword ptr [RSP + 0x298],RAX
/* 0d300ba9 */  MOV qword ptr [RAX + 0x10],0x0
/* 0d300bb1 */  LEA RAX,[RBX + 0x220]
/* 0d300bb8 */  MOVAPS xmmword ptr [RBX + 0x220],XMM0
/* 0d300bbf */  MOV qword ptr [RBX + 0x218],RAX
/* 0d300bc6 */  MOV qword ptr [RBX + 0x250],0x0
/* 0d300bd1 */  MOV qword ptr [RBX + 0x280],0x0
/* 0d300bdc */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d300be4 */  MOV qword ptr [RBX + 0x290],RAX
/* 0d300beb */  MOV qword ptr [RBX + 0x298],0x0
/* 0d300bf6 */  MOV R14,qword ptr [RSP + 0xb8]
/* 0d300bfe */  TEST R14,R15
/* 0d300c01 */  JZ 0x0d300c70
/* 0d300c03 */  AND R14,RBP
/* 0d300c06 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300c0a */  LEA R13,[R15 + 0x9]
/* 0d300c0e */  LEA RDI,[0xf5463b0]
/* 0d300c15 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300c1c */  MOV EDX,0x8
/* 0d300c21 */  MOV RSI,R13
/* 0d300c24 */  CALL qword ptr [RAX + 0x20]
/* 0d300c27 */  MOV R12,RAX
/* 0d300c2a */  TEST RAX,RAX
/* 0d300c2d */  SETNZ AL
/* 0d300c30 */  TEST R13,R13
/* 0d300c33 */  SETZ CL
/* 0d300c36 */  OR CL,AL
/* 0d300c38 */  JZ 0x0d3067c1
/* 0d300c3e */  MOV qword ptr [R12],R15
/* 0d300c42 */  MOV R13,R12
/* 0d300c45 */  ADD R13,0x8
/* 0d300c49 */  MOV RDI,R13
/* 0d300c4c */  MOV RSI,R14
/* 0d300c4f */  MOV RDX,R15
/* 0d300c52 */  CALL 0x0eee2f00
/* 0d300c57 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d300c5d */  AND R13,RBP
/* 0d300c60 */  MOV R15,0x80000000000000
/* 0d300c6a */  OR R13,R15
/* 0d300c6d */  MOV R14,R13
/* 0d300c70 */  MOV qword ptr [RBX + 0x298],R14
/* 0d300c77 */  MOV qword ptr [RBX + 0x2a0],0x0
/* 0d300c82 */  MOV R14,qword ptr [RSP + 0xc0]
/* 0d300c8a */  TEST R14,R15
/* 0d300c8d */  JNZ 0x0d300cd4
/* 0d300c8f */  MOV qword ptr [RBX + 0x2a0],R14
/* 0d300c96 */  LEA RAX,[RBX + 0x2a8]
/* 0d300c9d */  MOV qword ptr [RSP + 0x1c0],RAX
/* 0d300ca5 */  XORPS XMM0,XMM0
/* 0d300ca8 */  MOVUPS xmmword ptr [RBX + 0x2a8],XMM0
/* 0d300caf */  MOVUPS xmmword ptr [RBX + 0x2b8],XMM0
/* 0d300cb6 */  MOVUPS xmmword ptr [RBX + 0x2c8],XMM0
/* 0d300cbd */  MOVUPS xmmword ptr [RBX + 0x2d8],XMM0
/* 0d300cc4 */  MOV qword ptr [RBX + 0x2e8],0x0
/* 0d300ccf */  JMP 0x0d300db4
/* 0d300cd4 */  LEA R12,[RBX + 0x298]
/* 0d300cdb */  AND R14,RBP
/* 0d300cde */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300ce2 */  LEA RBP,[R15 + 0x9]
/* 0d300ce6 */  LEA RDI,[0xf5463b0]
/* 0d300ced */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300cf4 */  MOV EDX,0x8
/* 0d300cf9 */  MOV RSI,RBP
/* 0d300cfc */  CALL qword ptr [RAX + 0x20]
/* 0d300cff */  MOV R13,RAX
/* 0d300d02 */  TEST RAX,RAX
/* 0d300d05 */  SETNZ AL
/* 0d300d08 */  TEST RBP,RBP
/* 0d300d0b */  SETZ CL
/* 0d300d0e */  OR CL,AL
/* 0d300d10 */  JZ 0x0d3067d3
/* 0d300d16 */  MOV qword ptr [R13],R15
/* 0d300d1a */  MOV R12,R13
/* 0d300d1d */  ADD R12,0x8
/* 0d300d21 */  MOV RDI,R12
/* 0d300d24 */  MOV RSI,R14
/* 0d300d27 */  MOV RDX,R15
/* 0d300d2a */  CALL 0x0eee2f00
/* 0d300d2f */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d300d35 */  MOV RBP,-0xff000000000001
/* 0d300d3f */  AND R12,RBP
/* 0d300d42 */  MOV R15,0x80000000000000
/* 0d300d4c */  OR R12,R15
/* 0d300d4f */  MOV RSI,qword ptr [RSP + 0xc0]
/* 0d300d57 */  LEA RAX,[RBX + 0x2a8]
/* 0d300d5e */  MOV qword ptr [RSP + 0x1c0],RAX
/* 0d300d66 */  MOV qword ptr [RBX + 0x2a0],R12
/* 0d300d6d */  XORPS XMM0,XMM0
/* 0d300d70 */  MOVUPS xmmword ptr [RBX + 0x2d8],XMM0
/* 0d300d77 */  MOVUPS xmmword ptr [RBX + 0x2c8],XMM0
/* 0d300d7e */  MOVUPS xmmword ptr [RBX + 0x2b8],XMM0
/* 0d300d85 */  MOVUPS xmmword ptr [RBX + 0x2a8],XMM0
/* 0d300d8c */  MOV qword ptr [RBX + 0x2e8],0x0
/* 0d300d97 */  TEST RSI,R15
/* 0d300d9a */  JZ 0x0d300db4
/* 0d300d9c */  AND RSI,RBP
/* 0d300d9f */  ADD RSI,-0x8
/* 0d300da3 */  LEA RDI,[0xf5463b0]
/* 0d300daa */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300db1 */  CALL qword ptr [RAX + 0x28]
/* 0d300db4 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0d300dc0 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0d300dc8 */  TEST RSI,R15
/* 0d300dcb */  JZ 0x0d300de5
/* 0d300dcd */  AND RSI,RBP
/* 0d300dd0 */  ADD RSI,-0x8
/* 0d300dd4 */  LEA RDI,[0xf5463b0]
/* 0d300ddb */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300de2 */  CALL qword ptr [RAX + 0x28]
/* 0d300de5 */  LEA RSI,[0xf0863e8]
/* 0d300dec */  LEA RDI,[RSP + 0xb0]
/* 0d300df4 */  CALL 0x05d54750
/* 0d300df9 */  LEA RAX,[RBX + 0x2f0]
/* 0d300e00 */  XORPS XMM0,XMM0
/* 0d300e03 */  MOVAPS xmmword ptr [RAX],XMM0
/* 0d300e06 */  MOV qword ptr [RSP + 0x290],RAX
/* 0d300e0e */  MOV qword ptr [RAX + 0x10],0x0
/* 0d300e16 */  LEA RAX,[RBX + 0x310]
/* 0d300e1d */  MOVAPS xmmword ptr [RBX + 0x310],XMM0
/* 0d300e24 */  MOV qword ptr [RBX + 0x308],RAX
/* 0d300e2b */  MOV qword ptr [RBX + 0x340],0x0
/* 0d300e36 */  MOV qword ptr [RBX + 0x370],0x0
/* 0d300e41 */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d300e49 */  MOV qword ptr [RBX + 0x380],RAX
/* 0d300e50 */  MOV qword ptr [RBX + 0x388],0x0
/* 0d300e5b */  MOV R14,qword ptr [RSP + 0xb8]
/* 0d300e63 */  TEST R14,R15
/* 0d300e66 */  JZ 0x0d300ed5
/* 0d300e68 */  AND R14,RBP
/* 0d300e6b */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300e6f */  LEA R13,[R15 + 0x9]
/* 0d300e73 */  LEA RDI,[0xf5463b0]
/* 0d300e7a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300e81 */  MOV EDX,0x8
/* 0d300e86 */  MOV RSI,R13
/* 0d300e89 */  CALL qword ptr [RAX + 0x20]
/* 0d300e8c */  MOV R12,RAX
/* 0d300e8f */  TEST RAX,RAX
/* 0d300e92 */  SETNZ AL
/* 0d300e95 */  TEST R13,R13
/* 0d300e98 */  SETZ CL
/* 0d300e9b */  OR CL,AL
/* 0d300e9d */  JZ 0x0d3067e5
/* 0d300ea3 */  MOV qword ptr [R12],R15
/* 0d300ea7 */  MOV R13,R12
/* 0d300eaa */  ADD R13,0x8
/* 0d300eae */  MOV RDI,R13
/* 0d300eb1 */  MOV RSI,R14
/* 0d300eb4 */  MOV RDX,R15
/* 0d300eb7 */  CALL 0x0eee2f00
/* 0d300ebc */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d300ec2 */  AND R13,RBP
/* 0d300ec5 */  MOV R15,0x80000000000000
/* 0d300ecf */  OR R13,R15
/* 0d300ed2 */  MOV R14,R13
/* 0d300ed5 */  MOV qword ptr [RBX + 0x388],R14
/* 0d300edc */  MOV qword ptr [RBX + 0x390],0x0
/* 0d300ee7 */  MOV R14,qword ptr [RSP + 0xc0]
/* 0d300eef */  TEST R14,R15
/* 0d300ef2 */  JNZ 0x0d300f39
/* 0d300ef4 */  MOV qword ptr [RBX + 0x390],R14
/* 0d300efb */  LEA RAX,[RBX + 0x398]
/* 0d300f02 */  MOV qword ptr [RSP + 0x2b0],RAX
/* 0d300f0a */  XORPS XMM0,XMM0
/* 0d300f0d */  MOVUPS xmmword ptr [RBX + 0x398],XMM0
/* 0d300f14 */  MOVUPS xmmword ptr [RBX + 0x3a8],XMM0
/* 0d300f1b */  MOVUPS xmmword ptr [RBX + 0x3b8],XMM0
/* 0d300f22 */  MOVUPS xmmword ptr [RBX + 0x3c8],XMM0
/* 0d300f29 */  MOV qword ptr [RBX + 0x3d8],0x0
/* 0d300f34 */  JMP 0x0d301019
/* 0d300f39 */  LEA R12,[RBX + 0x388]
/* 0d300f40 */  AND R14,RBP
/* 0d300f43 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d300f47 */  LEA RBP,[R15 + 0x9]
/* 0d300f4b */  LEA RDI,[0xf5463b0]
/* 0d300f52 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d300f59 */  MOV EDX,0x8
/* 0d300f5e */  MOV RSI,RBP
/* 0d300f61 */  CALL qword ptr [RAX + 0x20]
/* 0d300f64 */  MOV R13,RAX
/* 0d300f67 */  TEST RAX,RAX
/* 0d300f6a */  SETNZ AL
/* 0d300f6d */  TEST RBP,RBP
/* 0d300f70 */  SETZ CL
/* 0d300f73 */  OR CL,AL
/* 0d300f75 */  JZ 0x0d3067f7
/* 0d300f7b */  MOV qword ptr [R13],R15
/* 0d300f7f */  MOV R12,R13
/* 0d300f82 */  ADD R12,0x8
/* 0d300f86 */  MOV RDI,R12
/* 0d300f89 */  MOV RSI,R14
/* 0d300f8c */  MOV RDX,R15
/* 0d300f8f */  CALL 0x0eee2f00
/* 0d300f94 */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d300f9a */  MOV RBP,-0xff000000000001
/* 0d300fa4 */  AND R12,RBP
/* 0d300fa7 */  MOV R15,0x80000000000000
/* 0d300fb1 */  OR R12,R15
/* 0d300fb4 */  MOV RSI,qword ptr [RSP + 0xc0]
/* 0d300fbc */  LEA RAX,[RBX + 0x398]
/* 0d300fc3 */  MOV qword ptr [RSP + 0x2b0],RAX
/* 0d300fcb */  MOV qword ptr [RBX + 0x390],R12
/* 0d300fd2 */  XORPS XMM0,XMM0
/* 0d300fd5 */  MOVUPS xmmword ptr [RBX + 0x3c8],XMM0
/* 0d300fdc */  MOVUPS xmmword ptr [RBX + 0x3b8],XMM0
/* 0d300fe3 */  MOVUPS xmmword ptr [RBX + 0x3a8],XMM0
/* 0d300fea */  MOVUPS xmmword ptr [RBX + 0x398],XMM0
/* 0d300ff1 */  MOV qword ptr [RBX + 0x3d8],0x0
/* 0d300ffc */  TEST RSI,R15
/* 0d300fff */  JZ 0x0d301019
/* 0d301001 */  AND RSI,RBP
/* 0d301004 */  ADD RSI,-0x8
/* 0d301008 */  LEA RDI,[0xf5463b0]
/* 0d30100f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301016 */  CALL qword ptr [RAX + 0x28]
/* 0d301019 */  MOV qword ptr [RSP + 0xc0],0x0
/* 0d301025 */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0d30102d */  TEST RSI,R15
/* 0d301030 */  JZ 0x0d30104a
/* 0d301032 */  AND RSI,RBP
/* 0d301035 */  ADD RSI,-0x8
/* 0d301039 */  LEA RDI,[0xf5463b0]
/* 0d301040 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301047 */  CALL qword ptr [RAX + 0x28]
/* 0d30104a */  XORPS XMM0,XMM0
/* 0d30104d */  MOV R14,qword ptr [RBX + 0xd0]
/* 0d301054 */  MOVUPS xmmword ptr [RBX + 0xc8],XMM0
/* 0d30105b */  TEST R14,R14
/* 0d30105e */  JZ 0x0d301083
/* 0d301060 */  MOV RAX,-0x1
/* 0d301067 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d30106d */  TEST RAX,RAX
/* 0d301070 */  JNZ 0x0d301083
/* 0d301072 */  MOV RAX,qword ptr [R14]
/* 0d301075 */  MOV RDI,R14
/* 0d301078 */  CALL qword ptr [RAX + 0x10]
/* 0d30107b */  MOV RDI,R14
/* 0d30107e */  CALL 0x0412c2d0
/* 0d301083 */  MOV qword ptr [RBX + 0xd8],0x0
/* 0d30108e */  MOV RCX,qword ptr [RSP + 0x68]
/* 0d301093 */  MOV RAX,qword ptr [RCX + 0x8]
/* 0d301097 */  MOV RCX,qword ptr [RCX + 0x10]
/* 0d30109b */  TEST RCX,RCX
/* 0d30109e */  JZ 0x0d3010a5
/* 0d3010a0 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d3010a5 */  MOV qword ptr [RBX + 0xc8],RAX
/* 0d3010ac */  MOV R14,qword ptr [RBX + 0xd0]
/* 0d3010b3 */  MOV qword ptr [RBX + 0xd0],RCX
/* 0d3010ba */  TEST R14,R14
/* 0d3010bd */  JZ 0x0d3010ed
/* 0d3010bf */  MOV RAX,-0x1
/* 0d3010c6 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3010cc */  TEST RAX,RAX
/* 0d3010cf */  JNZ 0x0d3010e2
/* 0d3010d1 */  MOV RAX,qword ptr [R14]
/* 0d3010d4 */  MOV RDI,R14
/* 0d3010d7 */  CALL qword ptr [RAX + 0x10]
/* 0d3010da */  MOV RDI,R14
/* 0d3010dd */  CALL 0x0412c2d0
/* 0d3010e2 */  MOV RAX,qword ptr [RSP + 0x88]
/* 0d3010ea */  MOV RAX,qword ptr [RAX]
/* 0d3010ed */  TEST RAX,RAX
/* 0d3010f0 */  JZ 0x0d3010fe
/* 0d3010f2 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0d3010f7 */  MOV qword ptr [RBX + 0xd8],RAX
/* 0d3010fe */  MOV RAX,qword ptr [RSP + 0x1b8]
/* 0d301106 */  MOV RDX,qword ptr [RAX]
/* 0d301109 */  MOV qword ptr [RSP + 0x338],RDX
/* 0d301111 */  MOV RCX,qword ptr [RAX + 0x8]
/* 0d301115 */  MOV qword ptr [RSP + 0x340],RCX
/* 0d30111d */  TEST RCX,RCX
/* 0d301120 */  JZ 0x0d301168
/* 0d301122 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d301127 */  LEA RSI,[RAX + 0x10]
/* 0d30112b */  MOV qword ptr [RSP + 0xa8],RSI
/* 0d301133 */  MOV RAX,qword ptr [RAX + 0x10]
/* 0d301137 */  MOV qword ptr [RSP + 0x348],RAX
/* 0d30113f */  MOV word ptr [RSP + 0x1f8],0xc
/* 0d301149 */  LEA R12,[RSP + 0x200]
/* 0d301151 */  MOV qword ptr [RSP + 0x200],RDX
/* 0d301159 */  MOV qword ptr [RSP + 0x208],RCX
/* 0d301161 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d301166 */  JMP 0x0d3011a2
/* 0d301168 */  LEA RSI,[RAX + 0x10]
/* 0d30116c */  MOV qword ptr [RSP + 0xa8],RSI
/* 0d301174 */  MOV RAX,qword ptr [RAX + 0x10]
/* 0d301178 */  MOV qword ptr [RSP + 0x348],RAX
/* 0d301180 */  MOV word ptr [RSP + 0x1f8],0xc
/* 0d30118a */  LEA R12,[RSP + 0x200]
/* 0d301192 */  MOV qword ptr [RSP + 0x200],RDX
/* 0d30119a */  MOV qword ptr [RSP + 0x208],RCX
/* 0d3011a2 */  MOV qword ptr [RSP + 0x210],RAX
/* 0d3011aa */  LEA RBX,[RSP + 0x218]
/* 0d3011b2 */  MOV qword ptr [RSP + 0x218],0x0
/* 0d3011be */  MOV word ptr [RSP + 0x220],0x100
/* 0d3011c8 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d3011cd */  MOV R15,qword ptr [RAX + 0xe0]
/* 0d3011d4 */  TEST R15,R15
/* 0d3011d7 */  JZ 0x0d3012a3
/* 0d3011dd */  MOV word ptr [R15],0xc
/* 0d3011e3 */  LEA RAX,[RSP + 0x1f8]
/* 0d3011eb */  CMP R15,RAX
/* 0d3011ee */  JZ 0x0d301289
/* 0d3011f4 */  XORPS XMM1,XMM1
/* 0d3011f7 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d3011fb */  MOVUPS xmmword ptr [R15 + 0x8],XMM1
/* 0d301200 */  TEST R14,R14
/* 0d301203 */  JZ 0x0d30122b
/* 0d301205 */  MOV RAX,-0x1
/* 0d30120c */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d301212 */  TEST RAX,RAX
/* 0d301215 */  JNZ 0x0d30122b
/* 0d301217 */  MOV RAX,qword ptr [R14]
/* 0d30121a */  MOV RDI,R14
/* 0d30121d */  CALL qword ptr [RAX + 0x10]
/* 0d301220 */  MOV RDI,R14
/* 0d301223 */  CALL 0x0412c2d0
/* 0d301228 */  XORPS XMM1,XMM1
/* 0d30122b */  MOV qword ptr [R15 + 0x18],0x0
/* 0d301233 */  MOVUPS XMM0,xmmword ptr [RSP + 0x200]
/* 0d30123b */  MOVUPS xmmword ptr [R12],XMM1
/* 0d301240 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d301244 */  MOVUPS xmmword ptr [R15 + 0x8],XMM0
/* 0d301249 */  TEST R14,R14
/* 0d30124c */  JZ 0x0d301271
/* 0d30124e */  MOV RAX,-0x1
/* 0d301255 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d30125b */  TEST RAX,RAX
/* 0d30125e */  JNZ 0x0d301271
/* 0d301260 */  MOV RAX,qword ptr [R14]
/* 0d301263 */  MOV RDI,R14
/* 0d301266 */  CALL qword ptr [RAX + 0x10]
/* 0d301269 */  MOV RDI,R14
/* 0d30126c */  CALL 0x0412c2d0
/* 0d301271 */  MOV RAX,qword ptr [RSP + 0x210]
/* 0d301279 */  MOV qword ptr [R15 + 0x18],RAX
/* 0d30127d */  MOV qword ptr [RSP + 0x210],0x0
/* 0d301289 */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d30128d */  MOV word ptr [R15 + 0x28],AX
/* 0d301292 */  MOV RAX,qword ptr [RBX]
/* 0d301295 */  MOV qword ptr [R15 + 0x20],RAX
/* 0d301299 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d30129e */  JMP 0x0d3013a3
/* 0d3012a3 */  LEA RDI,[0xf5463b0]
/* 0d3012aa */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3012b1 */  MOV ESI,0x30
/* 0d3012b6 */  CALL qword ptr [RAX + 0x10]
/* 0d3012b9 */  MOV R15,RAX
/* 0d3012bc */  TEST RAX,RAX
/* 0d3012bf */  JZ 0x0d306a49
/* 0d3012c5 */  MOVZX EAX,word ptr [RSP + 0x1f8]
/* 0d3012cd */  MOV word ptr [R15],AX
/* 0d3012d1 */  MOV RAX,qword ptr [RSP + 0x200]
/* 0d3012d9 */  MOV qword ptr [R15 + 0x8],RAX
/* 0d3012dd */  MOV RAX,qword ptr [RSP + 0x208]
/* 0d3012e5 */  MOV qword ptr [R15 + 0x10],RAX
/* 0d3012e9 */  XORPS XMM0,XMM0
/* 0d3012ec */  MOVUPS xmmword ptr [R12],XMM0
/* 0d3012f1 */  MOV RAX,qword ptr [RSP + 0x210]
/* 0d3012f9 */  MOV qword ptr [R15 + 0x18],RAX
/* 0d3012fd */  MOV qword ptr [RSP + 0x210],0x0
/* 0d301309 */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d30130d */  MOV word ptr [R15 + 0x28],AX
/* 0d301312 */  MOV RAX,qword ptr [RBX]
/* 0d301315 */  MOV qword ptr [R15 + 0x20],RAX
/* 0d301319 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d30131e */  MOV R14,qword ptr [RBX + 0xe0]
/* 0d301325 */  MOV qword ptr [RBX + 0xe0],R15
/* 0d30132c */  TEST R14,R14
/* 0d30132f */  JZ 0x0d3013a3
/* 0d301331 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d301335 */  MOVUPS xmmword ptr [R14 + 0x8],XMM0
/* 0d30133a */  TEST R15,R15
/* 0d30133d */  JZ 0x0d301396
/* 0d30133f */  MOV RAX,-0x1
/* 0d301346 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d30134c */  TEST RAX,RAX
/* 0d30134f */  JNZ 0x0d301362
/* 0d301351 */  MOV RAX,qword ptr [R15]
/* 0d301354 */  MOV RDI,R15
/* 0d301357 */  CALL qword ptr [RAX + 0x10]
/* 0d30135a */  MOV RDI,R15
/* 0d30135d */  CALL 0x0412c2d0
/* 0d301362 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d301366 */  MOV qword ptr [R14 + 0x18],0x0
/* 0d30136e */  TEST R15,R15
/* 0d301371 */  JZ 0x0d301396
/* 0d301373 */  MOV RAX,-0x1
/* 0d30137a */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d301380 */  TEST RAX,RAX
/* 0d301383 */  JNZ 0x0d301396
/* 0d301385 */  MOV RAX,qword ptr [R15]
/* 0d301388 */  MOV RDI,R15
/* 0d30138b */  CALL qword ptr [RAX + 0x10]
/* 0d30138e */  MOV RDI,R15
/* 0d301391 */  CALL 0x0412c2d0
/* 0d301396 */  MOV ESI,0x30
/* 0d30139b */  MOV RDI,R14
/* 0d30139e */  CALL 0x0412a280
/* 0d3013a3 */  XORPS XMM0,XMM0
/* 0d3013a6 */  MOV R14,qword ptr [RSP + 0x208]
/* 0d3013ae */  MOVUPS xmmword ptr [RSP + 0x200],XMM0
/* 0d3013b6 */  TEST R14,R14
/* 0d3013b9 */  JZ 0x0d301426
/* 0d3013bb */  MOV RAX,-0x1
/* 0d3013c2 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3013c8 */  TEST RAX,RAX
/* 0d3013cb */  MOV R15,0x80000000000000
/* 0d3013d5 */  JNZ 0x0d3013e8
/* 0d3013d7 */  MOV RAX,qword ptr [R14]
/* 0d3013da */  MOV RDI,R14
/* 0d3013dd */  CALL qword ptr [RAX + 0x10]
/* 0d3013e0 */  MOV RDI,R14
/* 0d3013e3 */  CALL 0x0412c2d0
/* 0d3013e8 */  MOV R14,qword ptr [RSP + 0x208]
/* 0d3013f0 */  MOV qword ptr [RSP + 0x210],0x0
/* 0d3013fc */  TEST R14,R14
/* 0d3013ff */  JZ 0x0d30143c
/* 0d301401 */  MOV RAX,-0x1
/* 0d301408 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d30140e */  TEST RAX,RAX
/* 0d301411 */  JNZ 0x0d30143c
/* 0d301413 */  MOV RAX,qword ptr [R14]
/* 0d301416 */  MOV RDI,R14
/* 0d301419 */  CALL qword ptr [RAX + 0x10]
/* 0d30141c */  MOV RDI,R14
/* 0d30141f */  CALL 0x0412c2d0
/* 0d301424 */  JMP 0x0d30143c
/* 0d301426 */  MOV qword ptr [RSP + 0x210],0x0
/* 0d301432 */  MOV R15,0x80000000000000
/* 0d30143c */  XORPS XMM0,XMM0
/* 0d30143f */  MOV R14,qword ptr [RSP + 0x340]
/* 0d301447 */  MOVUPS xmmword ptr [RSP + 0x338],XMM0
/* 0d30144f */  TEST R14,R14
/* 0d301452 */  JZ 0x0d3014b5
/* 0d301454 */  MOV RAX,-0x1
/* 0d30145b */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d301461 */  TEST RAX,RAX
/* 0d301464 */  JNZ 0x0d301477
/* 0d301466 */  MOV RAX,qword ptr [R14]
/* 0d301469 */  MOV RDI,R14
/* 0d30146c */  CALL qword ptr [RAX + 0x10]
/* 0d30146f */  MOV RDI,R14
/* 0d301472 */  CALL 0x0412c2d0
/* 0d301477 */  MOV R14,qword ptr [RSP + 0x340]
/* 0d30147f */  MOV qword ptr [RSP + 0x348],0x0
/* 0d30148b */  TEST R14,R14
/* 0d30148e */  JZ 0x0d3014c1
/* 0d301490 */  MOV RAX,-0x1
/* 0d301497 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d30149d */  TEST RAX,RAX
/* 0d3014a0 */  JNZ 0x0d3014c1
/* 0d3014a2 */  MOV RAX,qword ptr [R14]
/* 0d3014a5 */  MOV RDI,R14
/* 0d3014a8 */  CALL qword ptr [RAX + 0x10]
/* 0d3014ab */  MOV RDI,R14
/* 0d3014ae */  CALL 0x0412c2d0
/* 0d3014b3 */  JMP 0x0d3014c1
/* 0d3014b5 */  MOV qword ptr [RSP + 0x348],0x0
/* 0d3014c1 */  LEA RSI,[0xf45f928]
/* 0d3014c8 */  LEA RDI,[RSP + 0x70]
/* 0d3014cd */  CALL 0x05d54750
/* 0d3014d2 */  MOV RAX,qword ptr [RSP + 0x88]
/* 0d3014da */  MOV RAX,qword ptr [RAX]
/* 0d3014dd */  TEST RAX,RAX
/* 0d3014e0 */  JZ 0x0d3014e7
/* 0d3014e2 */  CMP byte ptr [RAX],0x0
/* 0d3014e5 */  JNZ 0x0d301528
/* 0d3014e7 */  LEA RDI,[0x13c6966]
/* 0d3014ee */  LEA RSI,[0x1259d39]
/* 0d3014f5 */  LEA RCX,[0x1259d48]
/* 0d3014fc */  LEA R8,[0x12cf3e8]
/* 0d301503 */  MOV EDX,0xf5
/* 0d301508 */  XOR EAX,EAX
/* 0d30150a */  CALL 0x0eeddcf0
/* 0d30150f */  TEST AL,AL
/* 0d301511 */  MOV R15,0x80000000000000
/* 0d30151b */  JZ 0x0d301528
/* 0d30151d */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d301528 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d30152d */  MOV qword ptr [RBX + 0xf8],RAX
/* 0d301534 */  MOV RSI,qword ptr [RBX + 0x100]
/* 0d30153b */  TEST RSI,R15
/* 0d30153e */  JZ 0x0d301558
/* 0d301540 */  AND RSI,RBP
/* 0d301543 */  ADD RSI,-0x8
/* 0d301547 */  LEA RDI,[0xf5463b0]
/* 0d30154e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301555 */  CALL qword ptr [RAX + 0x28]
/* 0d301558 */  MOV qword ptr [RBX + 0x100],0x0
/* 0d301563 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d301568 */  MOV RAX,0x80000000000000
/* 0d301572 */  TEST R14,RAX
/* 0d301575 */  JZ 0x0d3015e4
/* 0d301577 */  AND R14,RBP
/* 0d30157a */  MOV R15,qword ptr [R14 + -0x8]
/* 0d30157e */  LEA R13,[R15 + 0x9]
/* 0d301582 */  LEA RDI,[0xf5463b0]
/* 0d301589 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301590 */  MOV EDX,0x8
/* 0d301595 */  MOV RSI,R13
/* 0d301598 */  CALL qword ptr [RAX + 0x20]
/* 0d30159b */  MOV R12,RAX
/* 0d30159e */  TEST RAX,RAX
/* 0d3015a1 */  SETNZ AL
/* 0d3015a4 */  TEST R13,R13
/* 0d3015a7 */  SETZ CL
/* 0d3015aa */  OR CL,AL
/* 0d3015ac */  JZ 0x0d306809
/* 0d3015b2 */  MOV qword ptr [R12],R15
/* 0d3015b6 */  MOV R13,R12
/* 0d3015b9 */  ADD R13,0x8
/* 0d3015bd */  MOV RDI,R13
/* 0d3015c0 */  MOV RSI,R14
/* 0d3015c3 */  MOV RDX,R15
/* 0d3015c6 */  CALL 0x0eee2f00
/* 0d3015cb */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3015d1 */  AND R13,RBP
/* 0d3015d4 */  MOV RAX,0x80000000000000
/* 0d3015de */  OR R13,RAX
/* 0d3015e1 */  MOV R14,R13
/* 0d3015e4 */  MOV qword ptr [RBX + 0x100],R14
/* 0d3015eb */  MOV RSI,qword ptr [RBX + 0x108]
/* 0d3015f2 */  TEST RSI,RAX
/* 0d3015f5 */  JZ 0x0d30160f
/* 0d3015f7 */  AND RSI,RBP
/* 0d3015fa */  ADD RSI,-0x8
/* 0d3015fe */  LEA RDI,[0xf5463b0]
/* 0d301605 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30160c */  CALL qword ptr [RAX + 0x28]
/* 0d30160f */  MOV qword ptr [RBX + 0x108],0x0
/* 0d30161a */  MOV R14,qword ptr [RSP + 0x80]
/* 0d301622 */  MOV RAX,0x80000000000000
/* 0d30162c */  TEST R14,RAX
/* 0d30162f */  JZ 0x0d30169e
/* 0d301631 */  AND R14,RBP
/* 0d301634 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301638 */  LEA R13,[R15 + 0x9]
/* 0d30163c */  LEA RDI,[0xf5463b0]
/* 0d301643 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30164a */  MOV EDX,0x8
/* 0d30164f */  MOV RSI,R13
/* 0d301652 */  CALL qword ptr [RAX + 0x20]
/* 0d301655 */  MOV R12,RAX
/* 0d301658 */  TEST RAX,RAX
/* 0d30165b */  SETNZ AL
/* 0d30165e */  TEST R13,R13
/* 0d301661 */  SETZ CL
/* 0d301664 */  OR CL,AL
/* 0d301666 */  JZ 0x0d30681b
/* 0d30166c */  MOV qword ptr [R12],R15
/* 0d301670 */  MOV R13,R12
/* 0d301673 */  ADD R13,0x8
/* 0d301677 */  MOV RDI,R13
/* 0d30167a */  MOV RSI,R14
/* 0d30167d */  MOV RDX,R15
/* 0d301680 */  CALL 0x0eee2f00
/* 0d301685 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d30168b */  AND R13,RBP
/* 0d30168e */  MOV RAX,0x80000000000000
/* 0d301698 */  OR R13,RAX
/* 0d30169b */  MOV R14,R13
/* 0d30169e */  LEA RAX,[RBX + 0xb0]
/* 0d3016a5 */  MOV qword ptr [RBX + 0x108],R14
/* 0d3016ac */  MOV RCX,qword ptr [RSP + 0x2a8]
/* 0d3016b4 */  MOV qword ptr [RSP + 0x20],RCX
/* 0d3016b9 */  MOV qword ptr [RSP + 0x28],RAX
/* 0d3016be */  MOV RAX,RBX
/* 0d3016c1 */  MOV RBX,qword ptr [RBX + 0xc8]
/* 0d3016c8 */  MOV qword ptr [RSP + 0x30],RBX
/* 0d3016cd */  MOV R15,qword ptr [RAX + 0xd0]
/* 0d3016d4 */  MOV qword ptr [RSP + 0x38],R15
/* 0d3016d9 */  TEST R15,R15
/* 0d3016dc */  JZ 0x0d3016e3
/* 0d3016de */  INC.LOCK qword ptr [R15 + 0x8]
/* 0d3016e3 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d3016e8 */  MOV R12,qword ptr [RAX + 0xd8]
/* 0d3016ef */  MOV qword ptr [RSP + 0x40],R12
/* 0d3016f4 */  CMP qword ptr [RAX + 0xe0],0x0
/* 0d3016fc */  JNZ 0x0d301735
/* 0d3016fe */  LEA RDI,[0x13ba24d]
/* 0d301705 */  LEA RSI,[0x143b8d9]
/* 0d30170c */  LEA RCX,[0x1259d48]
/* 0d301713 */  LEA R8,[0x14c0e49]
/* 0d30171a */  MOV EDX,0xd8
/* 0d30171f */  XOR EAX,EAX
/* 0d301721 */  CALL 0x0eeddcf0
/* 0d301726 */  TEST AL,AL
/* 0d301728 */  JZ 0x0d301735
/* 0d30172a */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d301735 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d30173a */  MOV RAX,qword ptr [RCX + 0xe0]
/* 0d301741 */  MOV qword ptr [RSP + 0x48],RAX
/* 0d301746 */  MOV R14,qword ptr [RCX + 0xe8]
/* 0d30174d */  TEST R14,R14
/* 0d301750 */  JNZ 0x0d301787
/* 0d301752 */  LEA RDI,[0xf5463b0]
/* 0d301759 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301760 */  MOV ESI,0x8
/* 0d301765 */  CALL qword ptr [RAX + 0x10]
/* 0d301768 */  MOV R14,RAX
/* 0d30176b */  TEST RAX,RAX
/* 0d30176e */  JZ 0x0d306a5a
/* 0d301774 */  MOV qword ptr [R14],0x0
/* 0d30177b */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d301780 */  MOV qword ptr [RCX + 0xe8],R14
/* 0d301787 */  LEA RAX,[RCX + 0xf8]
/* 0d30178e */  LEA RCX,[RSP + 0x48]
/* 0d301793 */  MOV qword ptr [RSP + 0x50],R14
/* 0d301798 */  MOV qword ptr [RSP + 0x58],RAX
/* 0d30179d */  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
/* 0d3017a2 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0d3017aa */  MOV qword ptr [RSP + 0xc0],RBX
/* 0d3017b2 */  MOV qword ptr [RSP + 0xc8],R15
/* 0d3017ba */  XORPS XMM0,XMM0
/* 0d3017bd */  LEA RAX,[RSP + 0x30]
/* 0d3017c2 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0d3017c5 */  MOV qword ptr [RSP + 0xd0],R12
/* 0d3017cd */  MOV qword ptr [RSP + 0x40],0x0
/* 0d3017d6 */  MOVUPS XMM0,xmmword ptr [RCX]
/* 0d3017d9 */  MOVUPS xmmword ptr [RSP + 0xd8],XMM0
/* 0d3017e1 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0d3017e5 */  MOV qword ptr [RSP + 0xe8],RAX
/* 0d3017ed */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d3017f2 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d3017f7 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0d3017ff */  MOV qword ptr [RSP + 0xf8],0x0
/* 0d30180b */  MOV R15,0x80000000000000
/* 0d301815 */  TEST R14,R15
/* 0d301818 */  JZ 0x0d301887
/* 0d30181a */  AND R14,RBP
/* 0d30181d */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301821 */  LEA R13,[R15 + 0x9]
/* 0d301825 */  LEA RDI,[0xf5463b0]
/* 0d30182c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301833 */  MOV EDX,0x8
/* 0d301838 */  MOV RSI,R13
/* 0d30183b */  CALL qword ptr [RAX + 0x20]
/* 0d30183e */  MOV R12,RAX
/* 0d301841 */  TEST RAX,RAX
/* 0d301844 */  SETNZ AL
/* 0d301847 */  TEST R13,R13
/* 0d30184a */  SETZ CL
/* 0d30184d */  OR CL,AL
/* 0d30184f */  JZ 0x0d30682d
/* 0d301855 */  MOV qword ptr [R12],R15
/* 0d301859 */  MOV R13,R12
/* 0d30185c */  ADD R13,0x8
/* 0d301860 */  MOV RDI,R13
/* 0d301863 */  MOV RSI,R14
/* 0d301866 */  MOV RDX,R15
/* 0d301869 */  CALL 0x0eee2f00
/* 0d30186e */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d301874 */  AND R13,RBP
/* 0d301877 */  MOV R15,0x80000000000000
/* 0d301881 */  OR R13,R15
/* 0d301884 */  MOV R14,R13
/* 0d301887 */  MOV qword ptr [RSP + 0xf8],R14
/* 0d30188f */  MOV qword ptr [RSP + 0x100],0x0
/* 0d30189b */  MOV R14,qword ptr [RSP + 0x80]
/* 0d3018a3 */  TEST R14,R15
/* 0d3018a6 */  JZ 0x0d301927
/* 0d3018a8 */  LEA R12,[RSP + 0xf8]
/* 0d3018b0 */  AND R14,RBP
/* 0d3018b3 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3018b7 */  LEA RBP,[R15 + 0x9]
/* 0d3018bb */  LEA RDI,[0xf5463b0]
/* 0d3018c2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3018c9 */  MOV EDX,0x8
/* 0d3018ce */  MOV RSI,RBP
/* 0d3018d1 */  CALL qword ptr [RAX + 0x20]
/* 0d3018d4 */  MOV R13,RAX
/* 0d3018d7 */  TEST RAX,RAX
/* 0d3018da */  SETNZ AL
/* 0d3018dd */  TEST RBP,RBP
/* 0d3018e0 */  SETZ CL
/* 0d3018e3 */  OR CL,AL
/* 0d3018e5 */  JZ 0x0d30683f
/* 0d3018eb */  MOV qword ptr [R13],R15
/* 0d3018ef */  MOV R12,R13
/* 0d3018f2 */  ADD R12,0x8
/* 0d3018f6 */  MOV RDI,R12
/* 0d3018f9 */  MOV RSI,R14
/* 0d3018fc */  MOV RDX,R15
/* 0d3018ff */  CALL 0x0eee2f00
/* 0d301904 */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d30190a */  MOV RAX,-0xff000000000001
/* 0d301914 */  AND R12,RAX
/* 0d301917 */  MOV R15,0x80000000000000
/* 0d301921 */  OR R12,R15
/* 0d301924 */  MOV R14,R12
/* 0d301927 */  MOV qword ptr [RSP + 0x100],R14
/* 0d30192f */  MOV qword ptr [RSP + 0x130],0x0
/* 0d30193b */  MOV byte ptr [RSP + 0x140],0x1
/* 0d301943 */  MOV word ptr [RSP + 0x142],0xfbf8
/* 0d30194d */  MOV byte ptr [RSP + 0x144],0x1
/* 0d301955 */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d30195d */  MOV qword ptr [RSP + 0x88],RAX
/* 0d301965 */  MOV RBP,qword ptr [RSP + 0xb8]
/* 0d30196d */  MOV RAX,qword ptr [RBP]
/* 0d301971 */  MOV qword ptr [RSP],RAX
/* 0d301975 */  MOV R14,qword ptr [RBP + 0x8]
/* 0d301979 */  TEST R14,R15
/* 0d30197c */  JZ 0x0d301a03
/* 0d301982 */  MOV RAX,-0xff000000000001
/* 0d30198c */  AND R14,RAX
/* 0d30198f */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301993 */  LEA R13,[R15 + 0x9]
/* 0d301997 */  LEA RDI,[0xf5463b0]
/* 0d30199e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3019a5 */  MOV EDX,0x8
/* 0d3019aa */  MOV RSI,R13
/* 0d3019ad */  CALL qword ptr [RAX + 0x20]
/* 0d3019b0 */  MOV R12,RAX
/* 0d3019b3 */  TEST RAX,RAX
/* 0d3019b6 */  SETNZ AL
/* 0d3019b9 */  TEST R13,R13
/* 0d3019bc */  SETZ CL
/* 0d3019bf */  OR CL,AL
/* 0d3019c1 */  JZ 0x0d306851
/* 0d3019c7 */  MOV qword ptr [R12],R15
/* 0d3019cb */  MOV R13,R12
/* 0d3019ce */  ADD R13,0x8
/* 0d3019d2 */  MOV RDI,R13
/* 0d3019d5 */  MOV RSI,R14
/* 0d3019d8 */  MOV RDX,R15
/* 0d3019db */  CALL 0x0eee2f00
/* 0d3019e0 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3019e6 */  MOV RAX,-0xff000000000001
/* 0d3019f0 */  AND R13,RAX
/* 0d3019f3 */  MOV R15,0x80000000000000
/* 0d3019fd */  OR R13,R15
/* 0d301a00 */  MOV R14,R13
/* 0d301a03 */  MOV qword ptr [RSP + 0x8],R14
/* 0d301a08 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d301a11 */  MOV R14,qword ptr [RBP + 0x10]
/* 0d301a15 */  TEST R14,R15
/* 0d301a18 */  JZ 0x0d301a9f
/* 0d301a1e */  MOV RAX,-0xff000000000001
/* 0d301a28 */  AND R14,RAX
/* 0d301a2b */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301a2f */  LEA R13,[R15 + 0x9]
/* 0d301a33 */  LEA RDI,[0xf5463b0]
/* 0d301a3a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301a41 */  MOV EDX,0x8
/* 0d301a46 */  MOV RSI,R13
/* 0d301a49 */  CALL qword ptr [RAX + 0x20]
/* 0d301a4c */  MOV R12,RAX
/* 0d301a4f */  TEST RAX,RAX
/* 0d301a52 */  SETNZ AL
/* 0d301a55 */  TEST R13,R13
/* 0d301a58 */  SETZ CL
/* 0d301a5b */  OR CL,AL
/* 0d301a5d */  JZ 0x0d306863
/* 0d301a63 */  MOV qword ptr [R12],R15
/* 0d301a67 */  MOV R13,R12
/* 0d301a6a */  ADD R13,0x8
/* 0d301a6e */  MOV RDI,R13
/* 0d301a71 */  MOV RSI,R14
/* 0d301a74 */  MOV RDX,R15
/* 0d301a77 */  CALL 0x0eee2f00
/* 0d301a7c */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d301a82 */  MOV RAX,-0xff000000000001
/* 0d301a8c */  AND R13,RAX
/* 0d301a8f */  MOV R15,0x80000000000000
/* 0d301a99 */  OR R13,R15
/* 0d301a9c */  MOV R14,R13
/* 0d301a9f */  MOV RDI,0x7f000000000000
/* 0d301aa9 */  MOV qword ptr [RSP + 0x10],R14
/* 0d301aae */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d301ab6 */  MOV RAX,R13
/* 0d301ab9 */  AND RAX,R15
/* 0d301abc */  JNZ 0x0d301acf
/* 0d301abe */  TEST R13,RDI
/* 0d301ac1 */  JZ 0x0d301b3a
/* 0d301ac3 */  MOV RCX,R13
/* 0d301ac6 */  SHR RCX,0x30
/* 0d301aca */  AND ECX,0x7f
/* 0d301acd */  JMP 0x0d301ae8
/* 0d301acf */  MOV RCX,R13
/* 0d301ad2 */  MOV RDX,-0xff000000000001
/* 0d301adc */  AND RCX,RDX
/* 0d301adf */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d301ae3 */  TEST RCX,RCX
/* 0d301ae6 */  JZ 0x0d301b3a
/* 0d301ae8 */  CMP RCX,0x4
/* 0d301aec */  JNZ 0x0d301b3a
/* 0d301aee */  MOV RCX,R13
/* 0d301af1 */  MOV RDX,-0xff000000000001
/* 0d301afb */  AND RCX,RDX
/* 0d301afe */  CMP dword ptr [RCX],0x61746562
/* 0d301b04 */  JNZ 0x0d301b3a
/* 0d301b06 */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d301b0e */  CMP ECX,0x270f
/* 0d301b14 */  JNZ 0x0d301b3a
/* 0d301b16 */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d301b1e */  CMP ECX,0x270f
/* 0d301b24 */  JNZ 0x0d301b3a
/* 0d301b26 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d301b2e */  CMP ECX,0x270f
/* 0d301b34 */  JZ 0x0d301d20
/* 0d301b3a */  MOV RCX,qword ptr [RBP + 0x8]
/* 0d301b3e */  TEST RCX,R15
/* 0d301b41 */  JNZ 0x0d301b58
/* 0d301b43 */  TEST RCX,RDI
/* 0d301b46 */  JZ 0x0d301d20
/* 0d301b4c */  MOV RDX,RCX
/* 0d301b4f */  SHR RDX,0x30
/* 0d301b53 */  AND EDX,0x7f
/* 0d301b56 */  JMP 0x0d301b75
/* 0d301b58 */  MOV RDX,RCX
/* 0d301b5b */  MOV RSI,-0xff000000000001
/* 0d301b65 */  AND RDX,RSI
/* 0d301b68 */  MOV RDX,qword ptr [RDX + -0x8]
/* 0d301b6c */  TEST RDX,RDX
/* 0d301b6f */  JZ 0x0d301d20
/* 0d301b75 */  CMP RDX,0x4
/* 0d301b79 */  JNZ 0x0d301d20
/* 0d301b7f */  MOV RDX,-0xff000000000001
/* 0d301b89 */  AND RCX,RDX
/* 0d301b8c */  CMP dword ptr [RCX],0x61746562
/* 0d301b92 */  JNZ 0x0d301d20
/* 0d301b98 */  MOVZX ECX,word ptr [RBP]
/* 0d301b9c */  CMP ECX,0x270f
/* 0d301ba2 */  JNZ 0x0d301d20
/* 0d301ba8 */  MOVZX ECX,word ptr [RBP + 0x2]
/* 0d301bac */  CMP ECX,0x270f
/* 0d301bb2 */  JNZ 0x0d301d20
/* 0d301bb8 */  MOVZX ECX,word ptr [RBP + 0x4]
/* 0d301bbc */  CMP ECX,0x270f
/* 0d301bc2 */  JNZ 0x0d301d20
/* 0d301bc8 */  MOV RBX,qword ptr [RSP + 0xb8]
/* 0d301bd0 */  MOV RAX,qword ptr [RBX]
/* 0d301bd3 */  MOV qword ptr [RSP],RAX
/* 0d301bd7 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d301bdc */  TEST RSI,R15
/* 0d301bdf */  MOV RBP,-0xff000000000001
/* 0d301be9 */  JZ 0x0d301c03
/* 0d301beb */  AND RSI,RBP
/* 0d301bee */  ADD RSI,-0x8
/* 0d301bf2 */  LEA RDI,[0xf5463b0]
/* 0d301bf9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301c00 */  CALL qword ptr [RAX + 0x28]
/* 0d301c03 */  MOV qword ptr [RSP + 0x8],0x0
/* 0d301c0c */  MOV R14,qword ptr [RBX + 0x8]
/* 0d301c10 */  MOV RAX,0x80000000000000
/* 0d301c1a */  TEST R14,RAX
/* 0d301c1d */  JZ 0x0d301c8c
/* 0d301c1f */  AND R14,RBP
/* 0d301c22 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301c26 */  LEA R13,[R15 + 0x9]
/* 0d301c2a */  LEA RDI,[0xf5463b0]
/* 0d301c31 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301c38 */  MOV EDX,0x8
/* 0d301c3d */  MOV RSI,R13
/* 0d301c40 */  CALL qword ptr [RAX + 0x20]
/* 0d301c43 */  MOV R12,RAX
/* 0d301c46 */  TEST RAX,RAX
/* 0d301c49 */  SETNZ AL
/* 0d301c4c */  TEST R13,R13
/* 0d301c4f */  SETZ CL
/* 0d301c52 */  OR CL,AL
/* 0d301c54 */  JZ 0x0d306b61
/* 0d301c5a */  MOV qword ptr [R12],R15
/* 0d301c5e */  MOV R13,R12
/* 0d301c61 */  ADD R13,0x8
/* 0d301c65 */  MOV RDI,R13
/* 0d301c68 */  MOV RSI,R14
/* 0d301c6b */  MOV RDX,R15
/* 0d301c6e */  CALL 0x0eee2f00
/* 0d301c73 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d301c79 */  AND R13,RBP
/* 0d301c7c */  MOV RAX,0x80000000000000
/* 0d301c86 */  OR R13,RAX
/* 0d301c89 */  MOV R14,R13
/* 0d301c8c */  MOV qword ptr [RSP + 0x8],R14
/* 0d301c91 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d301c96 */  TEST RSI,RAX
/* 0d301c99 */  JZ 0x0d301cb3
/* 0d301c9b */  AND RSI,RBP
/* 0d301c9e */  ADD RSI,-0x8
/* 0d301ca2 */  LEA RDI,[0xf5463b0]
/* 0d301ca9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301cb0 */  CALL qword ptr [RAX + 0x28]
/* 0d301cb3 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d301cbc */  MOV R14,qword ptr [RBX + 0x10]
/* 0d301cc0 */  MOV R15,0x80000000000000
/* 0d301cca */  TEST R14,R15
/* 0d301ccd */  JZ 0x0d301f2f
/* 0d301cd3 */  AND R14,RBP
/* 0d301cd6 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301cda */  LEA R13,[R15 + 0x9]
/* 0d301cde */  LEA RDI,[0xf5463b0]
/* 0d301ce5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301cec */  MOV EDX,0x8
/* 0d301cf1 */  MOV RSI,R13
/* 0d301cf4 */  CALL qword ptr [RAX + 0x20]
/* 0d301cf7 */  MOV R12,RAX
/* 0d301cfa */  TEST RAX,RAX
/* 0d301cfd */  SETNZ AL
/* 0d301d00 */  TEST R13,R13
/* 0d301d03 */  SETZ CL
/* 0d301d06 */  OR CL,AL
/* 0d301d08 */  JNZ 0x0d301efd
/* 0d301d0e */  MOV ESI,0x8
/* 0d301d13 */  MOV RDI,R13
/* 0d301d16 */  CALL 0x0eec74c0
/* 0d301d1b */  JMP 0x0d301efd
/* 0d301d20 */  TEST RAX,RAX
/* 0d301d23 */  JNZ 0x0d301d44
/* 0d301d25 */  TEST R13,RDI
/* 0d301d28 */  MOV RBP,-0xff000000000001
/* 0d301d32 */  JZ 0x0d301f34
/* 0d301d38 */  MOV RCX,R13
/* 0d301d3b */  SHR RCX,0x30
/* 0d301d3f */  AND ECX,0x7f
/* 0d301d42 */  JMP 0x0d301d61
/* 0d301d44 */  MOV RCX,R13
/* 0d301d47 */  MOV RBP,-0xff000000000001
/* 0d301d51 */  AND RCX,RBP
/* 0d301d54 */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d301d58 */  TEST RCX,RCX
/* 0d301d5b */  JZ 0x0d301f34
/* 0d301d61 */  CMP RCX,0x4
/* 0d301d65 */  JNZ 0x0d301f34
/* 0d301d6b */  MOV R14,R13
/* 0d301d6e */  AND R14,RBP
/* 0d301d71 */  CMP dword ptr [R14],0x61746562
/* 0d301d78 */  JNZ 0x0d301f34
/* 0d301d7e */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d301d86 */  CMP ECX,0x270f
/* 0d301d8c */  JNZ 0x0d301f34
/* 0d301d92 */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d301d9a */  CMP ECX,0x270f
/* 0d301da0 */  JNZ 0x0d301f34
/* 0d301da6 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d301dae */  CMP ECX,0x270f
/* 0d301db4 */  JNZ 0x0d301f34
/* 0d301dba */  MOV RCX,qword ptr [RSP + 0xf0]
/* 0d301dc2 */  MOV qword ptr [RSP],RCX
/* 0d301dc6 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d301dcb */  TEST RSI,R15
/* 0d301dce */  JZ 0x0d301e06
/* 0d301dd0 */  AND RSI,RBP
/* 0d301dd3 */  ADD RSI,-0x8
/* 0d301dd7 */  LEA RDI,[0xf5463b0]
/* 0d301dde */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301de5 */  CALL qword ptr [RAX + 0x28]
/* 0d301de8 */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d301df0 */  MOV R14,R13
/* 0d301df3 */  AND R14,RBP
/* 0d301df6 */  MOV RAX,R13
/* 0d301df9 */  MOV R15,0x80000000000000
/* 0d301e03 */  AND RAX,R15
/* 0d301e06 */  MOV qword ptr [RSP + 0x8],0x0
/* 0d301e0f */  TEST RAX,RAX
/* 0d301e12 */  JZ 0x0d301e7b
/* 0d301e14 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301e18 */  LEA R13,[R15 + 0x9]
/* 0d301e1c */  LEA RDI,[0xf5463b0]
/* 0d301e23 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301e2a */  MOV EDX,0x8
/* 0d301e2f */  MOV RSI,R13
/* 0d301e32 */  CALL qword ptr [RAX + 0x20]
/* 0d301e35 */  MOV R12,RAX
/* 0d301e38 */  TEST RAX,RAX
/* 0d301e3b */  SETNZ AL
/* 0d301e3e */  TEST R13,R13
/* 0d301e41 */  SETZ CL
/* 0d301e44 */  OR CL,AL
/* 0d301e46 */  JZ 0x0d306ad1
/* 0d301e4c */  MOV qword ptr [R12],R15
/* 0d301e50 */  MOV R13,R12
/* 0d301e53 */  ADD R13,0x8
/* 0d301e57 */  MOV RDI,R13
/* 0d301e5a */  MOV RSI,R14
/* 0d301e5d */  MOV RDX,R15
/* 0d301e60 */  CALL 0x0eee2f00
/* 0d301e65 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d301e6b */  AND R13,RBP
/* 0d301e6e */  MOV R15,0x80000000000000
/* 0d301e78 */  OR R13,R15
/* 0d301e7b */  MOV qword ptr [RSP + 0x8],R13
/* 0d301e80 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d301e85 */  TEST RSI,R15
/* 0d301e88 */  JZ 0x0d301ea2
/* 0d301e8a */  AND RSI,RBP
/* 0d301e8d */  ADD RSI,-0x8
/* 0d301e91 */  LEA RDI,[0xf5463b0]
/* 0d301e98 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301e9f */  CALL qword ptr [RAX + 0x28]
/* 0d301ea2 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d301eab */  MOV R14,qword ptr [RSP + 0x100]
/* 0d301eb3 */  MOV R15,0x80000000000000
/* 0d301ebd */  TEST R14,R15
/* 0d301ec0 */  JZ 0x0d301f2f
/* 0d301ec2 */  AND R14,RBP
/* 0d301ec5 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d301ec9 */  LEA R13,[R15 + 0x9]
/* 0d301ecd */  LEA RDI,[0xf5463b0]
/* 0d301ed4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d301edb */  MOV EDX,0x8
/* 0d301ee0 */  MOV RSI,R13
/* 0d301ee3 */  CALL qword ptr [RAX + 0x20]
/* 0d301ee6 */  MOV R12,RAX
/* 0d301ee9 */  TEST RAX,RAX
/* 0d301eec */  SETNZ AL
/* 0d301eef */  TEST R13,R13
/* 0d301ef2 */  SETZ CL
/* 0d301ef5 */  OR CL,AL
/* 0d301ef7 */  JZ 0x0d306b19
/* 0d301efd */  MOV qword ptr [R12],R15
/* 0d301f01 */  MOV R13,R12
/* 0d301f04 */  ADD R13,0x8
/* 0d301f08 */  MOV RDI,R13
/* 0d301f0b */  MOV RSI,R14
/* 0d301f0e */  MOV RDX,R15
/* 0d301f11 */  CALL 0x0eee2f00
/* 0d301f16 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d301f1c */  AND R13,RBP
/* 0d301f1f */  MOV R15,0x80000000000000
/* 0d301f29 */  OR R13,R15
/* 0d301f2c */  MOV R14,R13
/* 0d301f2f */  MOV qword ptr [RSP + 0x10],R14
/* 0d301f34 */  LEA RSI,[RSP + 0xf0]
/* 0d301f3c */  LEA RDI,[RSP + 0x160]
/* 0d301f44 */  MOV RDX,RSP
/* 0d301f47 */  MOV ECX,0x1
/* 0d301f4c */  CALL 0x0d6b3300
/* 0d301f51 */  CMP qword ptr [RSP + 0xd8],0x0
/* 0d301f5a */  JNZ 0x0d301f93
/* 0d301f5c */  LEA RDI,[0x12a4e2b]
/* 0d301f63 */  LEA RSI,[0x1495f35]
/* 0d301f6a */  LEA RCX,[0x13fa33d]
/* 0d301f71 */  LEA R8,[0x13388ad]
/* 0d301f78 */  MOV EDX,0x16d
/* 0d301f7d */  XOR EAX,EAX
/* 0d301f7f */  CALL 0x0eeddcf0
/* 0d301f84 */  TEST AL,AL
/* 0d301f86 */  JZ 0x0d301f93
/* 0d301f88 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d301f93 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d301f9b */  TEST RAX,RAX
/* 0d301f9e */  JZ 0x0d301fb2
/* 0d301fa0 */  CMP byte ptr [RAX],0x1
/* 0d301fa3 */  JNZ 0x0d301fb2
/* 0d301fa5 */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d301fad */  JMP 0x0d302033
/* 0d301fb2 */  LEA RDI,[0x11b95c6]
/* 0d301fb9 */  LEA RSI,[0x119d79e]
/* 0d301fc0 */  LEA RCX,[0x13fa33d]
/* 0d301fc7 */  LEA R8,[0x13388ad]
/* 0d301fce */  MOV EDX,0x16e
/* 0d301fd3 */  XOR EAX,EAX
/* 0d301fd5 */  CALL 0x0eeddcf0
/* 0d301fda */  TEST AL,AL
/* 0d301fdc */  JZ 0x0d301fe9
/* 0d301fde */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d301fe9 */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d301ff1 */  CMP qword ptr [RSP + 0xc0],0x0
/* 0d301ffa */  JNZ 0x0d302033
/* 0d301ffc */  LEA RDI,[0x1411d19]
/* 0d302003 */  LEA RSI,[0x135b312]
/* 0d30200a */  LEA RCX,[0x142bd41]
/* 0d302011 */  LEA R8,[0x13f915e]
/* 0d302018 */  MOV EDX,0x12c
/* 0d30201d */  XOR EAX,EAX
/* 0d30201f */  CALL 0x0eeddcf0
/* 0d302024 */  TEST AL,AL
/* 0d302026 */  JZ 0x0d302033
/* 0d302028 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d302033 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d30203b */  CMP byte ptr [RAX],0x0
/* 0d30203e */  JNZ 0x0d302077
/* 0d302040 */  LEA RDI,[0x130991f]
/* 0d302047 */  LEA RSI,[0x147828b]
/* 0d30204e */  LEA RCX,[0x142bd41]
/* 0d302055 */  LEA R8,[0x13f915e]
/* 0d30205c */  MOV EDX,0x130
/* 0d302061 */  XOR EAX,EAX
/* 0d302063 */  CALL 0x0eeddcf0
/* 0d302068 */  TEST AL,AL
/* 0d30206a */  JZ 0x0d302077
/* 0d30206c */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d302077 */  MOV R12,qword ptr [RSP + 0xd0]
/* 0d30207f */  LEA RDI,[0xf5463b0]
/* 0d302086 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30208d */  MOV ESI,0x80
/* 0d302092 */  CALL qword ptr [RAX + 0x10]
/* 0d302095 */  MOV RBX,RAX
/* 0d302098 */  TEST RAX,RAX
/* 0d30209b */  JZ 0x0d306735
/* 0d3020a1 */  MOV qword ptr [RSP + 0x158],RBX
/* 0d3020a9 */  MOV RBX,qword ptr [RSP + 0xf0]
/* 0d3020b1 */  MOV R14,qword ptr [RSP + 0xf8]
/* 0d3020b9 */  MOV qword ptr [RSP + 0x1a0],RBX
/* 0d3020c1 */  TEST R14,R15
/* 0d3020c4 */  MOV qword ptr [RSP + 0x288],R12
/* 0d3020cc */  JNZ 0x0d3020d3
/* 0d3020ce */  MOV RAX,R15
/* 0d3020d1 */  JMP 0x0d30214a
/* 0d3020d3 */  AND R14,RBP
/* 0d3020d6 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3020da */  LEA R12,[R15 + 0x9]
/* 0d3020de */  LEA RDI,[0xf5463b0]
/* 0d3020e5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3020ec */  MOV EDX,0x8
/* 0d3020f1 */  MOV RSI,R12
/* 0d3020f4 */  CALL qword ptr [RAX + 0x20]
/* 0d3020f7 */  MOV RBP,RAX
/* 0d3020fa */  TEST RAX,RAX
/* 0d3020fd */  SETNZ AL
/* 0d302100 */  TEST R12,R12
/* 0d302103 */  SETZ CL
/* 0d302106 */  OR CL,AL
/* 0d302108 */  JZ 0x0d306875
/* 0d30210e */  MOV qword ptr [RBP],R15
/* 0d302112 */  MOV R12,RBP
/* 0d302115 */  ADD R12,0x8
/* 0d302119 */  MOV RDI,R12
/* 0d30211c */  MOV RSI,R14
/* 0d30211f */  MOV RDX,R15
/* 0d302122 */  CALL 0x0eee2f00
/* 0d302127 */  MOV byte ptr [RBP + R15*0x1 + 0x8],0x0
/* 0d30212d */  MOV RBP,-0xff000000000001
/* 0d302137 */  AND R12,RBP
/* 0d30213a */  MOV RAX,0x80000000000000
/* 0d302144 */  OR R12,RAX
/* 0d302147 */  MOV R14,R12
/* 0d30214a */  MOV qword ptr [RSP + 0x1a8],R14
/* 0d302152 */  MOV qword ptr [RSP + 0x1b0],0x0
/* 0d30215e */  MOV R15,qword ptr [RSP + 0x100]
/* 0d302166 */  TEST R15,RAX
/* 0d302169 */  JZ 0x0d3021f6
/* 0d30216f */  MOV qword ptr [RSP + 0x350],R13
/* 0d302177 */  AND R15,RBP
/* 0d30217a */  MOV RBP,qword ptr [R15 + -0x8]
/* 0d30217e */  LEA R13,[RBP + 0x9]
/* 0d302182 */  LEA RDI,[0xf5463b0]
/* 0d302189 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302190 */  MOV EDX,0x8
/* 0d302195 */  MOV RSI,R13
/* 0d302198 */  CALL qword ptr [RAX + 0x20]
/* 0d30219b */  MOV R12,RAX
/* 0d30219e */  TEST RAX,RAX
/* 0d3021a1 */  SETNZ AL
/* 0d3021a4 */  TEST R13,R13
/* 0d3021a7 */  SETZ CL
/* 0d3021aa */  OR CL,AL
/* 0d3021ac */  JZ 0x0d306887
/* 0d3021b2 */  MOV qword ptr [R12],RBP
/* 0d3021b6 */  MOV R13,R12
/* 0d3021b9 */  ADD R13,0x8
/* 0d3021bd */  MOV RDI,R13
/* 0d3021c0 */  MOV RSI,R15
/* 0d3021c3 */  MOV RDX,RBP
/* 0d3021c6 */  CALL 0x0eee2f00
/* 0d3021cb */  MOV byte ptr [R12 + RBP*0x1 + 0x8],0x0
/* 0d3021d1 */  MOV RAX,-0xff000000000001
/* 0d3021db */  AND R13,RAX
/* 0d3021de */  MOV RAX,0x80000000000000
/* 0d3021e8 */  OR R13,RAX
/* 0d3021eb */  MOV R15,R13
/* 0d3021ee */  MOV R13,qword ptr [RSP + 0x350]
/* 0d3021f6 */  MOVZX EAX,word ptr [RSP + 0x190]
/* 0d3021fe */  MOV word ptr [RSP + 0x2e8],AX
/* 0d302206 */  MOVZX R12D,word ptr [RSP + 0x142]
/* 0d30220f */  MOV qword ptr [RSP + 0x90],RBX
/* 0d302217 */  LEA RBP,[RSP + 0x98]
/* 0d30221f */  MOV qword ptr [RSP + 0x98],R14
/* 0d302227 */  XORPS XMM0,XMM0
/* 0d30222a */  MOVUPS xmmword ptr [RSP + 0x1a8],XMM0
/* 0d302232 */  LEA R14,[RSP + 0xa0]
/* 0d30223a */  MOV qword ptr [RSP + 0xa0],R15
/* 0d302242 */  MOV RCX,qword ptr [RSP + 0x160]
/* 0d30224a */  MOV qword ptr [RSP + 0x2b8],RCX
/* 0d302252 */  MOVAPS XMM1,xmmword ptr [RSP + 0x160]
/* 0d30225a */  MOVAPS XMM2,xmmword ptr [RSP + 0x170]
/* 0d302262 */  MOVUPS xmmword ptr [RSP + 0x168],XMM0
/* 0d30226a */  MOVAPS xmmword ptr [RSP + 0x20],XMM1
/* 0d30226f */  MOVUPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0d302277 */  MOV RCX,qword ptr [RSP + 0x178]
/* 0d30227f */  MOV qword ptr [RSP + 0x2d0],RCX
/* 0d302287 */  MOVAPS xmmword ptr [RSP + 0x30],XMM2
/* 0d30228c */  MOV qword ptr [RSP + 0x2d8],0x0
/* 0d302298 */  MOVAPS XMM1,xmmword ptr [RSP + 0x180]
/* 0d3022a0 */  MOVAPS xmmword ptr [RSP + 0x180],XMM0
/* 0d3022a8 */  MOVAPS xmmword ptr [RSP + 0x40],XMM1
/* 0d3022ad */  MOV qword ptr [RSP + 0x2e0],0x0
/* 0d3022b9 */  MOV word ptr [RSP + 0x50],AX
/* 0d3022be */  LEA RDX,[RSP + 0x90]
/* 0d3022c6 */  LEA RCX,[RSP + 0x20]
/* 0d3022cb */  MOV R15,qword ptr [RSP + 0x158]
/* 0d3022d3 */  MOV RDI,R15
/* 0d3022d6 */  MOV RSI,qword ptr [RSP + 0x288]
/* 0d3022de */  CALL 0x0d6a8a30
/* 0d3022e3 */  MOV RSI,qword ptr [RSP + 0x48]
/* 0d3022e8 */  MOV RBX,0x80000000000000
/* 0d3022f2 */  TEST RSI,RBX
/* 0d3022f5 */  MOV RBP,-0xff000000000001
/* 0d3022ff */  JZ 0x0d302319
/* 0d302301 */  AND RSI,RBP
/* 0d302304 */  ADD RSI,-0x8
/* 0d302308 */  LEA RDI,[0xf5463b0]
/* 0d30230f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302316 */  CALL qword ptr [RAX + 0x28]
/* 0d302319 */  MOV qword ptr [RSP + 0x48],0x0
/* 0d302322 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0d302327 */  TEST RSI,RBX
/* 0d30232a */  JZ 0x0d302344
/* 0d30232c */  AND RSI,RBP
/* 0d30232f */  ADD RSI,-0x8
/* 0d302333 */  LEA RDI,[0xf5463b0]
/* 0d30233a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302341 */  CALL qword ptr [RAX + 0x28]
/* 0d302344 */  MOV qword ptr [RSP + 0x40],0x0
/* 0d30234d */  MOV RSI,qword ptr [RSP + 0x30]
/* 0d302352 */  TEST RSI,RBX
/* 0d302355 */  JZ 0x0d30236f
/* 0d302357 */  AND RSI,RBP
/* 0d30235a */  ADD RSI,-0x8
/* 0d30235e */  LEA RDI,[0xf5463b0]
/* 0d302365 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30236c */  CALL qword ptr [RAX + 0x28]
/* 0d30236f */  MOV qword ptr [RSP + 0x30],0x0
/* 0d302378 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0d30237d */  TEST RSI,RBX
/* 0d302380 */  JZ 0x0d30239a
/* 0d302382 */  AND RSI,RBP
/* 0d302385 */  ADD RSI,-0x8
/* 0d302389 */  LEA RDI,[0xf5463b0]
/* 0d302390 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302397 */  CALL qword ptr [RAX + 0x28]
/* 0d30239a */  MOV qword ptr [RSP + 0x28],0x0
/* 0d3023a3 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0d3023ab */  TEST RSI,RBX
/* 0d3023ae */  JZ 0x0d3023c8
/* 0d3023b0 */  AND RSI,RBP
/* 0d3023b3 */  ADD RSI,-0x8
/* 0d3023b7 */  LEA RDI,[0xf5463b0]
/* 0d3023be */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3023c5 */  CALL qword ptr [RAX + 0x28]
/* 0d3023c8 */  MOV qword ptr [RSP + 0xa0],0x0
/* 0d3023d4 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0d3023dc */  TEST RSI,RBX
/* 0d3023df */  JZ 0x0d3023f9
/* 0d3023e1 */  AND RSI,RBP
/* 0d3023e4 */  ADD RSI,-0x8
/* 0d3023e8 */  LEA RDI,[0xf5463b0]
/* 0d3023ef */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3023f6 */  CALL qword ptr [RAX + 0x28]
/* 0d3023f9 */  LEA RAX,[0xf4602e0]
/* 0d302400 */  MOV qword ptr [R15],RAX
/* 0d302403 */  MOV qword ptr [R15 + 0x70],R13
/* 0d302407 */  MOV word ptr [R15 + 0x78],R12W
/* 0d30240c */  MOV byte ptr [R15 + 0x7a],0x1
/* 0d302411 */  MOV RSI,qword ptr [RSP + 0x188]
/* 0d302419 */  MOV qword ptr [RSP + 0x20],R15
/* 0d30241e */  TEST RSI,RBX
/* 0d302421 */  JZ 0x0d30243b
/* 0d302423 */  AND RSI,RBP
/* 0d302426 */  ADD RSI,-0x8
/* 0d30242a */  LEA RDI,[0xf5463b0]
/* 0d302431 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302438 */  CALL qword ptr [RAX + 0x28]
/* 0d30243b */  MOV qword ptr [RSP + 0x188],0x0
/* 0d302447 */  MOV RSI,qword ptr [RSP + 0x180]
/* 0d30244f */  TEST RSI,RBX
/* 0d302452 */  JZ 0x0d30246c
/* 0d302454 */  AND RSI,RBP
/* 0d302457 */  ADD RSI,-0x8
/* 0d30245b */  LEA RDI,[0xf5463b0]
/* 0d302462 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302469 */  CALL qword ptr [RAX + 0x28]
/* 0d30246c */  MOV qword ptr [RSP + 0x180],0x0
/* 0d302478 */  MOV RSI,qword ptr [RSP + 0x170]
/* 0d302480 */  TEST RSI,RBX
/* 0d302483 */  JZ 0x0d30249d
/* 0d302485 */  AND RSI,RBP
/* 0d302488 */  ADD RSI,-0x8
/* 0d30248c */  LEA RDI,[0xf5463b0]
/* 0d302493 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30249a */  CALL qword ptr [RAX + 0x28]
/* 0d30249d */  MOV qword ptr [RSP + 0x170],0x0
/* 0d3024a9 */  MOV RSI,qword ptr [RSP + 0x168]
/* 0d3024b1 */  TEST RSI,RBX
/* 0d3024b4 */  JZ 0x0d3024ce
/* 0d3024b6 */  AND RSI,RBP
/* 0d3024b9 */  ADD RSI,-0x8
/* 0d3024bd */  LEA RDI,[0xf5463b0]
/* 0d3024c4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3024cb */  CALL qword ptr [RAX + 0x28]
/* 0d3024ce */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d3024d3 */  TEST RSI,RBX
/* 0d3024d6 */  JZ 0x0d3024f0
/* 0d3024d8 */  AND RSI,RBP
/* 0d3024db */  ADD RSI,-0x8
/* 0d3024df */  LEA RDI,[0xf5463b0]
/* 0d3024e6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3024ed */  CALL qword ptr [RAX + 0x28]
/* 0d3024f0 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d3024f9 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d3024fe */  TEST RSI,RBX
/* 0d302501 */  JZ 0x0d30251b
/* 0d302503 */  AND RSI,RBP
/* 0d302506 */  ADD RSI,-0x8
/* 0d30250a */  LEA RDI,[0xf5463b0]
/* 0d302511 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302518 */  CALL qword ptr [RAX + 0x28]
/* 0d30251b */  MOV RAX,qword ptr [RSP + 0x88]
/* 0d302523 */  MOV R14,qword ptr [RAX]
/* 0d302526 */  MOV RBX,qword ptr [RAX + 0x8]
/* 0d30252a */  CMP R14,RBX
/* 0d30252d */  JZ 0x0d30255c
/* 0d30252f */  ADD R15,0x38
/* 0d302533 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0d302540 */  MOV RDI,qword ptr [R14]
/* 0d302543 */  ADD RDI,0x20
/* 0d302547 */  MOV RSI,R15
/* 0d30254a */  CALL 0x04fa7a10
/* 0d30254f */  TEST AL,AL
/* 0d302551 */  JZ 0x0d30255c
/* 0d302553 */  ADD R14,0x8
/* 0d302557 */  CMP R14,RBX
/* 0d30255a */  JNZ 0x0d302540
/* 0d30255c */  LEA RDX,[RSP + 0x20]
/* 0d302561 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0d302569 */  MOV RSI,R14
/* 0d30256c */  CALL 0x0d6af860
/* 0d302571 */  MOV R14,0x80000000000000
/* 0d30257b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0d302580 */  MOV qword ptr [RSP + 0x20],0x0
/* 0d302589 */  TEST RDI,RDI
/* 0d30258c */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d302591 */  JZ 0x0d302599
/* 0d302593 */  MOV RAX,qword ptr [RDI]
/* 0d302596 */  CALL qword ptr [RAX + 0x8]
/* 0d302599 */  MOV byte ptr [RSP + 0x140],0x0
/* 0d3025a1 */  LEA RDI,[RSP + 0xb0]
/* 0d3025a9 */  CALL 0x0d307480
/* 0d3025ae */  MOV RSI,qword ptr [RSP + 0x80]
/* 0d3025b6 */  TEST RSI,R14
/* 0d3025b9 */  JZ 0x0d3025d3
/* 0d3025bb */  AND RSI,RBP
/* 0d3025be */  ADD RSI,-0x8
/* 0d3025c2 */  LEA RDI,[0xf5463b0]
/* 0d3025c9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3025d0 */  CALL qword ptr [RAX + 0x28]
/* 0d3025d3 */  MOV qword ptr [RSP + 0x80],0x0
/* 0d3025df */  MOV RSI,qword ptr [RSP + 0x78]
/* 0d3025e4 */  TEST RSI,R14
/* 0d3025e7 */  JZ 0x0d302601
/* 0d3025e9 */  AND RSI,RBP
/* 0d3025ec */  ADD RSI,-0x8
/* 0d3025f0 */  LEA RDI,[0xf5463b0]
/* 0d3025f7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3025fe */  CALL qword ptr [RAX + 0x28]
/* 0d302601 */  XORPS XMM0,XMM0
/* 0d302604 */  MOV R14,qword ptr [RBX + 0x1c0]
/* 0d30260b */  MOVUPS xmmword ptr [RBX + 0x1b8],XMM0
/* 0d302612 */  TEST R14,R14
/* 0d302615 */  JZ 0x0d30263a
/* 0d302617 */  MOV RAX,-0x1
/* 0d30261e */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d302624 */  TEST RAX,RAX
/* 0d302627 */  JNZ 0x0d30263a
/* 0d302629 */  MOV RAX,qword ptr [R14]
/* 0d30262c */  MOV RDI,R14
/* 0d30262f */  CALL qword ptr [RAX + 0x10]
/* 0d302632 */  MOV RDI,R14
/* 0d302635 */  CALL 0x0412c2d0
/* 0d30263a */  MOV qword ptr [RBX + 0x1c8],0x0
/* 0d302645 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0d30264a */  MOV RAX,qword ptr [RCX + 0x8]
/* 0d30264e */  MOV RCX,qword ptr [RCX + 0x10]
/* 0d302652 */  TEST RCX,RCX
/* 0d302655 */  JZ 0x0d30265c
/* 0d302657 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d30265c */  MOV qword ptr [RBX + 0x1b8],RAX
/* 0d302663 */  MOV R14,qword ptr [RBX + 0x1c0]
/* 0d30266a */  MOV qword ptr [RBX + 0x1c0],RCX
/* 0d302671 */  TEST R14,R14
/* 0d302674 */  JZ 0x0d3026a1
/* 0d302676 */  MOV RAX,-0x1
/* 0d30267d */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d302683 */  TEST RAX,RAX
/* 0d302686 */  JNZ 0x0d302699
/* 0d302688 */  MOV RAX,qword ptr [R14]
/* 0d30268b */  MOV RDI,R14
/* 0d30268e */  CALL qword ptr [RAX + 0x10]
/* 0d302691 */  MOV RDI,R14
/* 0d302694 */  CALL 0x0412c2d0
/* 0d302699 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0d30269e */  MOV RAX,qword ptr [RAX]
/* 0d3026a1 */  TEST RAX,RAX
/* 0d3026a4 */  JZ 0x0d3026b2
/* 0d3026a6 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0d3026ab */  MOV qword ptr [RBX + 0x1c8],RAX
/* 0d3026b2 */  MOV RAX,qword ptr [RSP + 0x1b8]
/* 0d3026ba */  MOV RDX,qword ptr [RAX]
/* 0d3026bd */  MOV qword ptr [RSP + 0x320],RDX
/* 0d3026c5 */  MOV RAX,qword ptr [RAX + 0x8]
/* 0d3026c9 */  MOV qword ptr [RSP + 0x328],RAX
/* 0d3026d1 */  LEA R12,[RSP + 0x260]
/* 0d3026d9 */  TEST RAX,RAX
/* 0d3026dc */  JZ 0x0d302717
/* 0d3026de */  INC.LOCK qword ptr [RAX + 0x8]
/* 0d3026e3 */  MOV RCX,qword ptr [RSP + 0xa8]
/* 0d3026eb */  MOV RCX,qword ptr [RCX]
/* 0d3026ee */  MOV qword ptr [RSP + 0x330],RCX
/* 0d3026f6 */  MOV word ptr [RSP + 0x258],0xc
/* 0d302700 */  MOV qword ptr [RSP + 0x260],RDX
/* 0d302708 */  MOV qword ptr [RSP + 0x268],RAX
/* 0d302710 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0d302715 */  JMP 0x0d302744
/* 0d302717 */  MOV RCX,qword ptr [RSP + 0xa8]
/* 0d30271f */  MOV RCX,qword ptr [RCX]
/* 0d302722 */  MOV qword ptr [RSP + 0x330],RCX
/* 0d30272a */  MOV word ptr [RSP + 0x258],0xc
/* 0d302734 */  MOV qword ptr [RSP + 0x260],RDX
/* 0d30273c */  MOV qword ptr [RSP + 0x268],RAX
/* 0d302744 */  MOV qword ptr [RSP + 0x270],RCX
/* 0d30274c */  LEA RBX,[RSP + 0x278]
/* 0d302754 */  MOV qword ptr [RSP + 0x278],0x0
/* 0d302760 */  MOV word ptr [RSP + 0x280],0x100
/* 0d30276a */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d30276f */  MOV R15,qword ptr [RAX + 0x1d0]
/* 0d302776 */  TEST R15,R15
/* 0d302779 */  JZ 0x0d302845
/* 0d30277f */  MOV word ptr [R15],0xc
/* 0d302785 */  LEA RAX,[RSP + 0x258]
/* 0d30278d */  CMP R15,RAX
/* 0d302790 */  JZ 0x0d30282b
/* 0d302796 */  XORPS XMM1,XMM1
/* 0d302799 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d30279d */  MOVUPS xmmword ptr [R15 + 0x8],XMM1
/* 0d3027a2 */  TEST R14,R14
/* 0d3027a5 */  JZ 0x0d3027cd
/* 0d3027a7 */  MOV RAX,-0x1
/* 0d3027ae */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3027b4 */  TEST RAX,RAX
/* 0d3027b7 */  JNZ 0x0d3027cd
/* 0d3027b9 */  MOV RAX,qword ptr [R14]
/* 0d3027bc */  MOV RDI,R14
/* 0d3027bf */  CALL qword ptr [RAX + 0x10]
/* 0d3027c2 */  MOV RDI,R14
/* 0d3027c5 */  CALL 0x0412c2d0
/* 0d3027ca */  XORPS XMM1,XMM1
/* 0d3027cd */  MOV qword ptr [R15 + 0x18],0x0
/* 0d3027d5 */  MOVUPS XMM0,xmmword ptr [RSP + 0x260]
/* 0d3027dd */  MOVUPS xmmword ptr [R12],XMM1
/* 0d3027e2 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d3027e6 */  MOVUPS xmmword ptr [R15 + 0x8],XMM0
/* 0d3027eb */  TEST R14,R14
/* 0d3027ee */  JZ 0x0d302813
/* 0d3027f0 */  MOV RAX,-0x1
/* 0d3027f7 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3027fd */  TEST RAX,RAX
/* 0d302800 */  JNZ 0x0d302813
/* 0d302802 */  MOV RAX,qword ptr [R14]
/* 0d302805 */  MOV RDI,R14
/* 0d302808 */  CALL qword ptr [RAX + 0x10]
/* 0d30280b */  MOV RDI,R14
/* 0d30280e */  CALL 0x0412c2d0
/* 0d302813 */  MOV RAX,qword ptr [RSP + 0x270]
/* 0d30281b */  MOV qword ptr [R15 + 0x18],RAX
/* 0d30281f */  MOV qword ptr [RSP + 0x270],0x0
/* 0d30282b */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d30282f */  MOV word ptr [R15 + 0x28],AX
/* 0d302834 */  MOV RAX,qword ptr [RBX]
/* 0d302837 */  MOV qword ptr [R15 + 0x20],RAX
/* 0d30283b */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d302840 */  JMP 0x0d302945
/* 0d302845 */  LEA RDI,[0xf5463b0]
/* 0d30284c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302853 */  MOV ESI,0x30
/* 0d302858 */  CALL qword ptr [RAX + 0x10]
/* 0d30285b */  MOV R15,RAX
/* 0d30285e */  TEST RAX,RAX
/* 0d302861 */  JZ 0x0d306a6b
/* 0d302867 */  MOVZX EAX,word ptr [RSP + 0x258]
/* 0d30286f */  MOV word ptr [R15],AX
/* 0d302873 */  MOV RAX,qword ptr [RSP + 0x260]
/* 0d30287b */  MOV qword ptr [R15 + 0x8],RAX
/* 0d30287f */  MOV RAX,qword ptr [RSP + 0x268]
/* 0d302887 */  MOV qword ptr [R15 + 0x10],RAX
/* 0d30288b */  XORPS XMM0,XMM0
/* 0d30288e */  MOVUPS xmmword ptr [R12],XMM0
/* 0d302893 */  MOV RAX,qword ptr [RSP + 0x270]
/* 0d30289b */  MOV qword ptr [R15 + 0x18],RAX
/* 0d30289f */  MOV qword ptr [RSP + 0x270],0x0
/* 0d3028ab */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d3028af */  MOV word ptr [R15 + 0x28],AX
/* 0d3028b4 */  MOV RAX,qword ptr [RBX]
/* 0d3028b7 */  MOV qword ptr [R15 + 0x20],RAX
/* 0d3028bb */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d3028c0 */  MOV R14,qword ptr [RBX + 0x1d0]
/* 0d3028c7 */  MOV qword ptr [RBX + 0x1d0],R15
/* 0d3028ce */  TEST R14,R14
/* 0d3028d1 */  JZ 0x0d302945
/* 0d3028d3 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d3028d7 */  MOVUPS xmmword ptr [R14 + 0x8],XMM0
/* 0d3028dc */  TEST R15,R15
/* 0d3028df */  JZ 0x0d302938
/* 0d3028e1 */  MOV RAX,-0x1
/* 0d3028e8 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d3028ee */  TEST RAX,RAX
/* 0d3028f1 */  JNZ 0x0d302904
/* 0d3028f3 */  MOV RAX,qword ptr [R15]
/* 0d3028f6 */  MOV RDI,R15
/* 0d3028f9 */  CALL qword ptr [RAX + 0x10]
/* 0d3028fc */  MOV RDI,R15
/* 0d3028ff */  CALL 0x0412c2d0
/* 0d302904 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d302908 */  MOV qword ptr [R14 + 0x18],0x0
/* 0d302910 */  TEST R15,R15
/* 0d302913 */  JZ 0x0d302938
/* 0d302915 */  MOV RAX,-0x1
/* 0d30291c */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d302922 */  TEST RAX,RAX
/* 0d302925 */  JNZ 0x0d302938
/* 0d302927 */  MOV RAX,qword ptr [R15]
/* 0d30292a */  MOV RDI,R15
/* 0d30292d */  CALL qword ptr [RAX + 0x10]
/* 0d302930 */  MOV RDI,R15
/* 0d302933 */  CALL 0x0412c2d0
/* 0d302938 */  MOV ESI,0x30
/* 0d30293d */  MOV RDI,R14
/* 0d302940 */  CALL 0x0412a280
/* 0d302945 */  XORPS XMM0,XMM0
/* 0d302948 */  MOV R14,qword ptr [RSP + 0x268]
/* 0d302950 */  MOVUPS xmmword ptr [RSP + 0x260],XMM0
/* 0d302958 */  TEST R14,R14
/* 0d30295b */  JZ 0x0d3029c8
/* 0d30295d */  MOV RAX,-0x1
/* 0d302964 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d30296a */  TEST RAX,RAX
/* 0d30296d */  MOV R15,0x80000000000000
/* 0d302977 */  JNZ 0x0d30298a
/* 0d302979 */  MOV RAX,qword ptr [R14]
/* 0d30297c */  MOV RDI,R14
/* 0d30297f */  CALL qword ptr [RAX + 0x10]
/* 0d302982 */  MOV RDI,R14
/* 0d302985 */  CALL 0x0412c2d0
/* 0d30298a */  MOV R14,qword ptr [RSP + 0x268]
/* 0d302992 */  MOV qword ptr [RSP + 0x270],0x0
/* 0d30299e */  TEST R14,R14
/* 0d3029a1 */  JZ 0x0d3029de
/* 0d3029a3 */  MOV RAX,-0x1
/* 0d3029aa */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3029b0 */  TEST RAX,RAX
/* 0d3029b3 */  JNZ 0x0d3029de
/* 0d3029b5 */  MOV RAX,qword ptr [R14]
/* 0d3029b8 */  MOV RDI,R14
/* 0d3029bb */  CALL qword ptr [RAX + 0x10]
/* 0d3029be */  MOV RDI,R14
/* 0d3029c1 */  CALL 0x0412c2d0
/* 0d3029c6 */  JMP 0x0d3029de
/* 0d3029c8 */  MOV qword ptr [RSP + 0x270],0x0
/* 0d3029d4 */  MOV R15,0x80000000000000
/* 0d3029de */  XORPS XMM0,XMM0
/* 0d3029e1 */  MOV R14,qword ptr [RSP + 0x328]
/* 0d3029e9 */  MOVUPS xmmword ptr [RSP + 0x320],XMM0
/* 0d3029f1 */  TEST R14,R14
/* 0d3029f4 */  JZ 0x0d302a57
/* 0d3029f6 */  MOV RAX,-0x1
/* 0d3029fd */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d302a03 */  TEST RAX,RAX
/* 0d302a06 */  JNZ 0x0d302a19
/* 0d302a08 */  MOV RAX,qword ptr [R14]
/* 0d302a0b */  MOV RDI,R14
/* 0d302a0e */  CALL qword ptr [RAX + 0x10]
/* 0d302a11 */  MOV RDI,R14
/* 0d302a14 */  CALL 0x0412c2d0
/* 0d302a19 */  MOV R14,qword ptr [RSP + 0x328]
/* 0d302a21 */  MOV qword ptr [RSP + 0x330],0x0
/* 0d302a2d */  TEST R14,R14
/* 0d302a30 */  JZ 0x0d302a63
/* 0d302a32 */  MOV RAX,-0x1
/* 0d302a39 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d302a3f */  TEST RAX,RAX
/* 0d302a42 */  JNZ 0x0d302a63
/* 0d302a44 */  MOV RAX,qword ptr [R14]
/* 0d302a47 */  MOV RDI,R14
/* 0d302a4a */  CALL qword ptr [RAX + 0x10]
/* 0d302a4d */  MOV RDI,R14
/* 0d302a50 */  CALL 0x0412c2d0
/* 0d302a55 */  JMP 0x0d302a63
/* 0d302a57 */  MOV qword ptr [RSP + 0x330],0x0
/* 0d302a63 */  LEA RSI,[0xf45f950]
/* 0d302a6a */  LEA RDI,[RSP + 0x70]
/* 0d302a6f */  CALL 0x05d54750
/* 0d302a74 */  MOV RAX,qword ptr [RSP + 0x60]
/* 0d302a79 */  MOV RAX,qword ptr [RAX]
/* 0d302a7c */  TEST RAX,RAX
/* 0d302a7f */  JZ 0x0d302a86
/* 0d302a81 */  CMP byte ptr [RAX],0x0
/* 0d302a84 */  JNZ 0x0d302ac7
/* 0d302a86 */  LEA RDI,[0x13c6966]
/* 0d302a8d */  LEA RSI,[0x1259d39]
/* 0d302a94 */  LEA RCX,[0x1259d48]
/* 0d302a9b */  LEA R8,[0x128345c]
/* 0d302aa2 */  MOV EDX,0xf5
/* 0d302aa7 */  XOR EAX,EAX
/* 0d302aa9 */  CALL 0x0eeddcf0
/* 0d302aae */  TEST AL,AL
/* 0d302ab0 */  MOV R15,0x80000000000000
/* 0d302aba */  JZ 0x0d302ac7
/* 0d302abc */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d302ac7 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d302acc */  MOV qword ptr [RBX + 0x1e8],RAX
/* 0d302ad3 */  MOV RSI,qword ptr [RBX + 0x1f0]
/* 0d302ada */  TEST RSI,R15
/* 0d302add */  JZ 0x0d302af7
/* 0d302adf */  AND RSI,RBP
/* 0d302ae2 */  ADD RSI,-0x8
/* 0d302ae6 */  LEA RDI,[0xf5463b0]
/* 0d302aed */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302af4 */  CALL qword ptr [RAX + 0x28]
/* 0d302af7 */  MOV qword ptr [RBX + 0x1f0],0x0
/* 0d302b02 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d302b07 */  MOV RAX,0x80000000000000
/* 0d302b11 */  TEST R14,RAX
/* 0d302b14 */  JZ 0x0d302b83
/* 0d302b16 */  AND R14,RBP
/* 0d302b19 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302b1d */  LEA R13,[R15 + 0x9]
/* 0d302b21 */  LEA RDI,[0xf5463b0]
/* 0d302b28 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302b2f */  MOV EDX,0x8
/* 0d302b34 */  MOV RSI,R13
/* 0d302b37 */  CALL qword ptr [RAX + 0x20]
/* 0d302b3a */  MOV R12,RAX
/* 0d302b3d */  TEST RAX,RAX
/* 0d302b40 */  SETNZ AL
/* 0d302b43 */  TEST R13,R13
/* 0d302b46 */  SETZ CL
/* 0d302b49 */  OR CL,AL
/* 0d302b4b */  JZ 0x0d306899
/* 0d302b51 */  MOV qword ptr [R12],R15
/* 0d302b55 */  MOV R13,R12
/* 0d302b58 */  ADD R13,0x8
/* 0d302b5c */  MOV RDI,R13
/* 0d302b5f */  MOV RSI,R14
/* 0d302b62 */  MOV RDX,R15
/* 0d302b65 */  CALL 0x0eee2f00
/* 0d302b6a */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d302b70 */  AND R13,RBP
/* 0d302b73 */  MOV RAX,0x80000000000000
/* 0d302b7d */  OR R13,RAX
/* 0d302b80 */  MOV R14,R13
/* 0d302b83 */  MOV qword ptr [RBX + 0x1f0],R14
/* 0d302b8a */  MOV RSI,qword ptr [RBX + 0x1f8]
/* 0d302b91 */  TEST RSI,RAX
/* 0d302b94 */  JZ 0x0d302bae
/* 0d302b96 */  AND RSI,RBP
/* 0d302b99 */  ADD RSI,-0x8
/* 0d302b9d */  LEA RDI,[0xf5463b0]
/* 0d302ba4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302bab */  CALL qword ptr [RAX + 0x28]
/* 0d302bae */  MOV qword ptr [RBX + 0x1f8],0x0
/* 0d302bb9 */  MOV R14,qword ptr [RSP + 0x80]
/* 0d302bc1 */  MOV RAX,0x80000000000000
/* 0d302bcb */  TEST R14,RAX
/* 0d302bce */  JZ 0x0d302c3d
/* 0d302bd0 */  AND R14,RBP
/* 0d302bd3 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302bd7 */  LEA R13,[R15 + 0x9]
/* 0d302bdb */  LEA RDI,[0xf5463b0]
/* 0d302be2 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302be9 */  MOV EDX,0x8
/* 0d302bee */  MOV RSI,R13
/* 0d302bf1 */  CALL qword ptr [RAX + 0x20]
/* 0d302bf4 */  MOV R12,RAX
/* 0d302bf7 */  TEST RAX,RAX
/* 0d302bfa */  SETNZ AL
/* 0d302bfd */  TEST R13,R13
/* 0d302c00 */  SETZ CL
/* 0d302c03 */  OR CL,AL
/* 0d302c05 */  JZ 0x0d3068ab
/* 0d302c0b */  MOV qword ptr [R12],R15
/* 0d302c0f */  MOV R13,R12
/* 0d302c12 */  ADD R13,0x8
/* 0d302c16 */  MOV RDI,R13
/* 0d302c19 */  MOV RSI,R14
/* 0d302c1c */  MOV RDX,R15
/* 0d302c1f */  CALL 0x0eee2f00
/* 0d302c24 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d302c2a */  AND R13,RBP
/* 0d302c2d */  MOV RAX,0x80000000000000
/* 0d302c37 */  OR R13,RAX
/* 0d302c3a */  MOV R14,R13
/* 0d302c3d */  LEA RAX,[RBX + 0x1a0]
/* 0d302c44 */  MOV qword ptr [RBX + 0x1f8],R14
/* 0d302c4b */  MOV RCX,qword ptr [RSP + 0x2a0]
/* 0d302c53 */  MOV qword ptr [RSP + 0x20],RCX
/* 0d302c58 */  MOV qword ptr [RSP + 0x28],RAX
/* 0d302c5d */  MOV RAX,RBX
/* 0d302c60 */  MOV RBX,qword ptr [RBX + 0x1b8]
/* 0d302c67 */  MOV qword ptr [RSP + 0x30],RBX
/* 0d302c6c */  MOV R15,qword ptr [RAX + 0x1c0]
/* 0d302c73 */  MOV qword ptr [RSP + 0x38],R15
/* 0d302c78 */  TEST R15,R15
/* 0d302c7b */  JZ 0x0d302c82
/* 0d302c7d */  INC.LOCK qword ptr [R15 + 0x8]
/* 0d302c82 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d302c87 */  MOV R12,qword ptr [RAX + 0x1c8]
/* 0d302c8e */  MOV qword ptr [RSP + 0x40],R12
/* 0d302c93 */  CMP qword ptr [RAX + 0x1d0],0x0
/* 0d302c9b */  JNZ 0x0d302cd4
/* 0d302c9d */  LEA RDI,[0x13ba24d]
/* 0d302ca4 */  LEA RSI,[0x143b8d9]
/* 0d302cab */  LEA RCX,[0x1259d48]
/* 0d302cb2 */  LEA R8,[0x13a396e]
/* 0d302cb9 */  MOV EDX,0xd8
/* 0d302cbe */  XOR EAX,EAX
/* 0d302cc0 */  CALL 0x0eeddcf0
/* 0d302cc5 */  TEST AL,AL
/* 0d302cc7 */  JZ 0x0d302cd4
/* 0d302cc9 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d302cd4 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d302cd9 */  MOV RAX,qword ptr [RCX + 0x1d0]
/* 0d302ce0 */  MOV qword ptr [RSP + 0x48],RAX
/* 0d302ce5 */  MOV R14,qword ptr [RCX + 0x1d8]
/* 0d302cec */  TEST R14,R14
/* 0d302cef */  JNZ 0x0d302d26
/* 0d302cf1 */  LEA RDI,[0xf5463b0]
/* 0d302cf8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302cff */  MOV ESI,0x8
/* 0d302d04 */  CALL qword ptr [RAX + 0x10]
/* 0d302d07 */  MOV R14,RAX
/* 0d302d0a */  TEST RAX,RAX
/* 0d302d0d */  JZ 0x0d306a7c
/* 0d302d13 */  MOV qword ptr [R14],0x0
/* 0d302d1a */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d302d1f */  MOV qword ptr [RCX + 0x1d8],R14
/* 0d302d26 */  LEA RAX,[RCX + 0x1e8]
/* 0d302d2d */  MOV qword ptr [RSP + 0x50],R14
/* 0d302d32 */  MOV qword ptr [RSP + 0x58],RAX
/* 0d302d37 */  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
/* 0d302d3c */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0d302d44 */  MOV qword ptr [RSP + 0xc0],RBX
/* 0d302d4c */  MOV qword ptr [RSP + 0xc8],R15
/* 0d302d54 */  XORPS XMM0,XMM0
/* 0d302d57 */  LEA RAX,[RSP + 0x30]
/* 0d302d5c */  MOVUPS xmmword ptr [RAX],XMM0
/* 0d302d5f */  MOV qword ptr [RSP + 0xd0],R12
/* 0d302d67 */  MOV qword ptr [RSP + 0x40],0x0
/* 0d302d70 */  LEA RAX,[RSP + 0x48]
/* 0d302d75 */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0d302d78 */  MOVUPS xmmword ptr [RSP + 0xd8],XMM0
/* 0d302d80 */  MOV RAX,qword ptr [RAX + 0x10]
/* 0d302d84 */  MOV qword ptr [RSP + 0xe8],RAX
/* 0d302d8c */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d302d91 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d302d96 */  MOV qword ptr [RSP + 0xf0],RAX
/* 0d302d9e */  MOV qword ptr [RSP + 0xf8],0x0
/* 0d302daa */  MOV R15,0x80000000000000
/* 0d302db4 */  TEST R14,R15
/* 0d302db7 */  JNZ 0x0d302dc5
/* 0d302db9 */  MOV RBX,0x7f000000000000
/* 0d302dc3 */  JMP 0x0d302e3c
/* 0d302dc5 */  AND R14,RBP
/* 0d302dc8 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302dcc */  LEA R13,[R15 + 0x9]
/* 0d302dd0 */  LEA RDI,[0xf5463b0]
/* 0d302dd7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302dde */  MOV EDX,0x8
/* 0d302de3 */  MOV RSI,R13
/* 0d302de6 */  CALL qword ptr [RAX + 0x20]
/* 0d302de9 */  MOV RBX,0x7f000000000000
/* 0d302df3 */  MOV R12,RAX
/* 0d302df6 */  TEST RAX,RAX
/* 0d302df9 */  SETNZ AL
/* 0d302dfc */  TEST R13,R13
/* 0d302dff */  SETZ CL
/* 0d302e02 */  OR CL,AL
/* 0d302e04 */  JZ 0x0d3068bd
/* 0d302e0a */  MOV qword ptr [R12],R15
/* 0d302e0e */  MOV R13,R12
/* 0d302e11 */  ADD R13,0x8
/* 0d302e15 */  MOV RDI,R13
/* 0d302e18 */  MOV RSI,R14
/* 0d302e1b */  MOV RDX,R15
/* 0d302e1e */  CALL 0x0eee2f00
/* 0d302e23 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d302e29 */  AND R13,RBP
/* 0d302e2c */  MOV R15,0x80000000000000
/* 0d302e36 */  OR R13,R15
/* 0d302e39 */  MOV R14,R13
/* 0d302e3c */  MOV qword ptr [RSP + 0xf8],R14
/* 0d302e44 */  MOV qword ptr [RSP + 0x100],0x0
/* 0d302e50 */  MOV R14,qword ptr [RSP + 0x80]
/* 0d302e58 */  TEST R14,R15
/* 0d302e5b */  JZ 0x0d302edc
/* 0d302e5d */  LEA R12,[RSP + 0xf8]
/* 0d302e65 */  AND R14,RBP
/* 0d302e68 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302e6c */  LEA RBP,[R15 + 0x9]
/* 0d302e70 */  LEA RDI,[0xf5463b0]
/* 0d302e77 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302e7e */  MOV EDX,0x8
/* 0d302e83 */  MOV RSI,RBP
/* 0d302e86 */  CALL qword ptr [RAX + 0x20]
/* 0d302e89 */  MOV R13,RAX
/* 0d302e8c */  TEST RAX,RAX
/* 0d302e8f */  SETNZ AL
/* 0d302e92 */  TEST RBP,RBP
/* 0d302e95 */  SETZ CL
/* 0d302e98 */  OR CL,AL
/* 0d302e9a */  JZ 0x0d3068cf
/* 0d302ea0 */  MOV qword ptr [R13],R15
/* 0d302ea4 */  MOV R12,R13
/* 0d302ea7 */  ADD R12,0x8
/* 0d302eab */  MOV RDI,R12
/* 0d302eae */  MOV RSI,R14
/* 0d302eb1 */  MOV RDX,R15
/* 0d302eb4 */  CALL 0x0eee2f00
/* 0d302eb9 */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d302ebf */  MOV RAX,-0xff000000000001
/* 0d302ec9 */  AND R12,RAX
/* 0d302ecc */  MOV R15,0x80000000000000
/* 0d302ed6 */  OR R12,R15
/* 0d302ed9 */  MOV R14,R12
/* 0d302edc */  MOV qword ptr [RSP + 0x100],R14
/* 0d302ee4 */  MOV qword ptr [RSP + 0x130],0x0
/* 0d302ef0 */  MOV byte ptr [RSP + 0x140],0x1
/* 0d302ef8 */  MOV word ptr [RSP + 0x142],0xfbf8
/* 0d302f02 */  MOV byte ptr [RSP + 0x144],0x1
/* 0d302f0a */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d302f12 */  MOV qword ptr [RSP + 0x88],RAX
/* 0d302f1a */  MOV RBP,qword ptr [RSP + 0xb8]
/* 0d302f22 */  MOV RAX,qword ptr [RBP]
/* 0d302f26 */  MOV qword ptr [RSP],RAX
/* 0d302f2a */  MOV R14,qword ptr [RBP + 0x8]
/* 0d302f2e */  TEST R14,R15
/* 0d302f31 */  JZ 0x0d302fb8
/* 0d302f37 */  MOV RAX,-0xff000000000001
/* 0d302f41 */  AND R14,RAX
/* 0d302f44 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302f48 */  LEA R13,[R15 + 0x9]
/* 0d302f4c */  LEA RDI,[0xf5463b0]
/* 0d302f53 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302f5a */  MOV EDX,0x8
/* 0d302f5f */  MOV RSI,R13
/* 0d302f62 */  CALL qword ptr [RAX + 0x20]
/* 0d302f65 */  MOV R12,RAX
/* 0d302f68 */  TEST RAX,RAX
/* 0d302f6b */  SETNZ AL
/* 0d302f6e */  TEST R13,R13
/* 0d302f71 */  SETZ CL
/* 0d302f74 */  OR CL,AL
/* 0d302f76 */  JZ 0x0d3068e1
/* 0d302f7c */  MOV qword ptr [R12],R15
/* 0d302f80 */  MOV R13,R12
/* 0d302f83 */  ADD R13,0x8
/* 0d302f87 */  MOV RDI,R13
/* 0d302f8a */  MOV RSI,R14
/* 0d302f8d */  MOV RDX,R15
/* 0d302f90 */  CALL 0x0eee2f00
/* 0d302f95 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d302f9b */  MOV RAX,-0xff000000000001
/* 0d302fa5 */  AND R13,RAX
/* 0d302fa8 */  MOV R15,0x80000000000000
/* 0d302fb2 */  OR R13,R15
/* 0d302fb5 */  MOV R14,R13
/* 0d302fb8 */  MOV qword ptr [RSP + 0x8],R14
/* 0d302fbd */  MOV qword ptr [RSP + 0x10],0x0
/* 0d302fc6 */  MOV R14,qword ptr [RBP + 0x10]
/* 0d302fca */  TEST R14,R15
/* 0d302fcd */  JZ 0x0d303054
/* 0d302fd3 */  MOV RAX,-0xff000000000001
/* 0d302fdd */  AND R14,RAX
/* 0d302fe0 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d302fe4 */  LEA R13,[R15 + 0x9]
/* 0d302fe8 */  LEA RDI,[0xf5463b0]
/* 0d302fef */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d302ff6 */  MOV EDX,0x8
/* 0d302ffb */  MOV RSI,R13
/* 0d302ffe */  CALL qword ptr [RAX + 0x20]
/* 0d303001 */  MOV R12,RAX
/* 0d303004 */  TEST RAX,RAX
/* 0d303007 */  SETNZ AL
/* 0d30300a */  TEST R13,R13
/* 0d30300d */  SETZ CL
/* 0d303010 */  OR CL,AL
/* 0d303012 */  JZ 0x0d3068f3
/* 0d303018 */  MOV qword ptr [R12],R15
/* 0d30301c */  MOV R13,R12
/* 0d30301f */  ADD R13,0x8
/* 0d303023 */  MOV RDI,R13
/* 0d303026 */  MOV RSI,R14
/* 0d303029 */  MOV RDX,R15
/* 0d30302c */  CALL 0x0eee2f00
/* 0d303031 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d303037 */  MOV RAX,-0xff000000000001
/* 0d303041 */  AND R13,RAX
/* 0d303044 */  MOV R15,0x80000000000000
/* 0d30304e */  OR R13,R15
/* 0d303051 */  MOV R14,R13
/* 0d303054 */  MOV qword ptr [RSP + 0x10],R14
/* 0d303059 */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d303061 */  MOV RAX,R13
/* 0d303064 */  AND RAX,R15
/* 0d303067 */  JNZ 0x0d30307a
/* 0d303069 */  TEST R13,RBX
/* 0d30306c */  JZ 0x0d3030e5
/* 0d30306e */  MOV RCX,R13
/* 0d303071 */  SHR RCX,0x30
/* 0d303075 */  AND ECX,0x7f
/* 0d303078 */  JMP 0x0d303093
/* 0d30307a */  MOV RCX,R13
/* 0d30307d */  MOV RDX,-0xff000000000001
/* 0d303087 */  AND RCX,RDX
/* 0d30308a */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d30308e */  TEST RCX,RCX
/* 0d303091 */  JZ 0x0d3030e5
/* 0d303093 */  CMP RCX,0x4
/* 0d303097 */  JNZ 0x0d3030e5
/* 0d303099 */  MOV RCX,R13
/* 0d30309c */  MOV RDX,-0xff000000000001
/* 0d3030a6 */  AND RCX,RDX
/* 0d3030a9 */  CMP dword ptr [RCX],0x61746562
/* 0d3030af */  JNZ 0x0d3030e5
/* 0d3030b1 */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d3030b9 */  CMP ECX,0x270f
/* 0d3030bf */  JNZ 0x0d3030e5
/* 0d3030c1 */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d3030c9 */  CMP ECX,0x270f
/* 0d3030cf */  JNZ 0x0d3030e5
/* 0d3030d1 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d3030d9 */  CMP ECX,0x270f
/* 0d3030df */  JZ 0x0d3032cb
/* 0d3030e5 */  MOV RCX,qword ptr [RBP + 0x8]
/* 0d3030e9 */  TEST RCX,R15
/* 0d3030ec */  JNZ 0x0d303103
/* 0d3030ee */  TEST RCX,RBX
/* 0d3030f1 */  JZ 0x0d3032cb
/* 0d3030f7 */  MOV RDX,RCX
/* 0d3030fa */  SHR RDX,0x30
/* 0d3030fe */  AND EDX,0x7f
/* 0d303101 */  JMP 0x0d303120
/* 0d303103 */  MOV RDX,RCX
/* 0d303106 */  MOV RSI,-0xff000000000001
/* 0d303110 */  AND RDX,RSI
/* 0d303113 */  MOV RDX,qword ptr [RDX + -0x8]
/* 0d303117 */  TEST RDX,RDX
/* 0d30311a */  JZ 0x0d3032cb
/* 0d303120 */  CMP RDX,0x4
/* 0d303124 */  JNZ 0x0d3032cb
/* 0d30312a */  MOV RDX,-0xff000000000001
/* 0d303134 */  AND RCX,RDX
/* 0d303137 */  CMP dword ptr [RCX],0x61746562
/* 0d30313d */  JNZ 0x0d3032cb
/* 0d303143 */  MOVZX ECX,word ptr [RBP]
/* 0d303147 */  CMP ECX,0x270f
/* 0d30314d */  JNZ 0x0d3032cb
/* 0d303153 */  MOVZX ECX,word ptr [RBP + 0x2]
/* 0d303157 */  CMP ECX,0x270f
/* 0d30315d */  JNZ 0x0d3032cb
/* 0d303163 */  MOVZX ECX,word ptr [RBP + 0x4]
/* 0d303167 */  CMP ECX,0x270f
/* 0d30316d */  JNZ 0x0d3032cb
/* 0d303173 */  MOV RBX,qword ptr [RSP + 0xb8]
/* 0d30317b */  MOV RAX,qword ptr [RBX]
/* 0d30317e */  MOV qword ptr [RSP],RAX
/* 0d303182 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d303187 */  TEST RSI,R15
/* 0d30318a */  MOV RBP,-0xff000000000001
/* 0d303194 */  JZ 0x0d3031ae
/* 0d303196 */  AND RSI,RBP
/* 0d303199 */  ADD RSI,-0x8
/* 0d30319d */  LEA RDI,[0xf5463b0]
/* 0d3031a4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3031ab */  CALL qword ptr [RAX + 0x28]
/* 0d3031ae */  MOV qword ptr [RSP + 0x8],0x0
/* 0d3031b7 */  MOV R14,qword ptr [RBX + 0x8]
/* 0d3031bb */  MOV RAX,0x80000000000000
/* 0d3031c5 */  TEST R14,RAX
/* 0d3031c8 */  JZ 0x0d303237
/* 0d3031ca */  AND R14,RBP
/* 0d3031cd */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3031d1 */  LEA R13,[R15 + 0x9]
/* 0d3031d5 */  LEA RDI,[0xf5463b0]
/* 0d3031dc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3031e3 */  MOV EDX,0x8
/* 0d3031e8 */  MOV RSI,R13
/* 0d3031eb */  CALL qword ptr [RAX + 0x20]
/* 0d3031ee */  MOV R12,RAX
/* 0d3031f1 */  TEST RAX,RAX
/* 0d3031f4 */  SETNZ AL
/* 0d3031f7 */  TEST R13,R13
/* 0d3031fa */  SETZ CL
/* 0d3031fd */  OR CL,AL
/* 0d3031ff */  JZ 0x0d306b73
/* 0d303205 */  MOV qword ptr [R12],R15
/* 0d303209 */  MOV R13,R12
/* 0d30320c */  ADD R13,0x8
/* 0d303210 */  MOV RDI,R13
/* 0d303213 */  MOV RSI,R14
/* 0d303216 */  MOV RDX,R15
/* 0d303219 */  CALL 0x0eee2f00
/* 0d30321e */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d303224 */  AND R13,RBP
/* 0d303227 */  MOV RAX,0x80000000000000
/* 0d303231 */  OR R13,RAX
/* 0d303234 */  MOV R14,R13
/* 0d303237 */  MOV qword ptr [RSP + 0x8],R14
/* 0d30323c */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d303241 */  TEST RSI,RAX
/* 0d303244 */  JZ 0x0d30325e
/* 0d303246 */  AND RSI,RBP
/* 0d303249 */  ADD RSI,-0x8
/* 0d30324d */  LEA RDI,[0xf5463b0]
/* 0d303254 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30325b */  CALL qword ptr [RAX + 0x28]
/* 0d30325e */  MOV qword ptr [RSP + 0x10],0x0
/* 0d303267 */  MOV R14,qword ptr [RBX + 0x10]
/* 0d30326b */  MOV R15,0x80000000000000
/* 0d303275 */  TEST R14,R15
/* 0d303278 */  JZ 0x0d3034da
/* 0d30327e */  AND R14,RBP
/* 0d303281 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d303285 */  LEA R13,[R15 + 0x9]
/* 0d303289 */  LEA RDI,[0xf5463b0]
/* 0d303290 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303297 */  MOV EDX,0x8
/* 0d30329c */  MOV RSI,R13
/* 0d30329f */  CALL qword ptr [RAX + 0x20]
/* 0d3032a2 */  MOV R12,RAX
/* 0d3032a5 */  TEST RAX,RAX
/* 0d3032a8 */  SETNZ AL
/* 0d3032ab */  TEST R13,R13
/* 0d3032ae */  SETZ CL
/* 0d3032b1 */  OR CL,AL
/* 0d3032b3 */  JNZ 0x0d3034a8
/* 0d3032b9 */  MOV ESI,0x8
/* 0d3032be */  MOV RDI,R13
/* 0d3032c1 */  CALL 0x0eec74c0
/* 0d3032c6 */  JMP 0x0d3034a8
/* 0d3032cb */  TEST RAX,RAX
/* 0d3032ce */  JNZ 0x0d3032ef
/* 0d3032d0 */  TEST R13,RBX
/* 0d3032d3 */  MOV RBP,-0xff000000000001
/* 0d3032dd */  JZ 0x0d3034df
/* 0d3032e3 */  MOV RCX,R13
/* 0d3032e6 */  SHR RCX,0x30
/* 0d3032ea */  AND ECX,0x7f
/* 0d3032ed */  JMP 0x0d30330c
/* 0d3032ef */  MOV RCX,R13
/* 0d3032f2 */  MOV RBP,-0xff000000000001
/* 0d3032fc */  AND RCX,RBP
/* 0d3032ff */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d303303 */  TEST RCX,RCX
/* 0d303306 */  JZ 0x0d3034df
/* 0d30330c */  CMP RCX,0x4
/* 0d303310 */  JNZ 0x0d3034df
/* 0d303316 */  MOV R14,R13
/* 0d303319 */  AND R14,RBP
/* 0d30331c */  CMP dword ptr [R14],0x61746562
/* 0d303323 */  JNZ 0x0d3034df
/* 0d303329 */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d303331 */  CMP ECX,0x270f
/* 0d303337 */  JNZ 0x0d3034df
/* 0d30333d */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d303345 */  CMP ECX,0x270f
/* 0d30334b */  JNZ 0x0d3034df
/* 0d303351 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d303359 */  CMP ECX,0x270f
/* 0d30335f */  JNZ 0x0d3034df
/* 0d303365 */  MOV RCX,qword ptr [RSP + 0xf0]
/* 0d30336d */  MOV qword ptr [RSP],RCX
/* 0d303371 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d303376 */  TEST RSI,R15
/* 0d303379 */  JZ 0x0d3033b1
/* 0d30337b */  AND RSI,RBP
/* 0d30337e */  ADD RSI,-0x8
/* 0d303382 */  LEA RDI,[0xf5463b0]
/* 0d303389 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303390 */  CALL qword ptr [RAX + 0x28]
/* 0d303393 */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d30339b */  MOV R14,R13
/* 0d30339e */  AND R14,RBP
/* 0d3033a1 */  MOV RAX,R13
/* 0d3033a4 */  MOV R15,0x80000000000000
/* 0d3033ae */  AND RAX,R15
/* 0d3033b1 */  MOV qword ptr [RSP + 0x8],0x0
/* 0d3033ba */  TEST RAX,RAX
/* 0d3033bd */  JZ 0x0d303426
/* 0d3033bf */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3033c3 */  LEA R13,[R15 + 0x9]
/* 0d3033c7 */  LEA RDI,[0xf5463b0]
/* 0d3033ce */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3033d5 */  MOV EDX,0x8
/* 0d3033da */  MOV RSI,R13
/* 0d3033dd */  CALL qword ptr [RAX + 0x20]
/* 0d3033e0 */  MOV R12,RAX
/* 0d3033e3 */  TEST RAX,RAX
/* 0d3033e6 */  SETNZ AL
/* 0d3033e9 */  TEST R13,R13
/* 0d3033ec */  SETZ CL
/* 0d3033ef */  OR CL,AL
/* 0d3033f1 */  JZ 0x0d306ae3
/* 0d3033f7 */  MOV qword ptr [R12],R15
/* 0d3033fb */  MOV R13,R12
/* 0d3033fe */  ADD R13,0x8
/* 0d303402 */  MOV RDI,R13
/* 0d303405 */  MOV RSI,R14
/* 0d303408 */  MOV RDX,R15
/* 0d30340b */  CALL 0x0eee2f00
/* 0d303410 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d303416 */  AND R13,RBP
/* 0d303419 */  MOV R15,0x80000000000000
/* 0d303423 */  OR R13,R15
/* 0d303426 */  MOV qword ptr [RSP + 0x8],R13
/* 0d30342b */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d303430 */  TEST RSI,R15
/* 0d303433 */  JZ 0x0d30344d
/* 0d303435 */  AND RSI,RBP
/* 0d303438 */  ADD RSI,-0x8
/* 0d30343c */  LEA RDI,[0xf5463b0]
/* 0d303443 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30344a */  CALL qword ptr [RAX + 0x28]
/* 0d30344d */  MOV qword ptr [RSP + 0x10],0x0
/* 0d303456 */  MOV R14,qword ptr [RSP + 0x100]
/* 0d30345e */  MOV R15,0x80000000000000
/* 0d303468 */  TEST R14,R15
/* 0d30346b */  JZ 0x0d3034da
/* 0d30346d */  AND R14,RBP
/* 0d303470 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d303474 */  LEA R13,[R15 + 0x9]
/* 0d303478 */  LEA RDI,[0xf5463b0]
/* 0d30347f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303486 */  MOV EDX,0x8
/* 0d30348b */  MOV RSI,R13
/* 0d30348e */  CALL qword ptr [RAX + 0x20]
/* 0d303491 */  MOV R12,RAX
/* 0d303494 */  TEST RAX,RAX
/* 0d303497 */  SETNZ AL
/* 0d30349a */  TEST R13,R13
/* 0d30349d */  SETZ CL
/* 0d3034a0 */  OR CL,AL
/* 0d3034a2 */  JZ 0x0d306b2b
/* 0d3034a8 */  MOV qword ptr [R12],R15
/* 0d3034ac */  MOV R13,R12
/* 0d3034af */  ADD R13,0x8
/* 0d3034b3 */  MOV RDI,R13
/* 0d3034b6 */  MOV RSI,R14
/* 0d3034b9 */  MOV RDX,R15
/* 0d3034bc */  CALL 0x0eee2f00
/* 0d3034c1 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3034c7 */  AND R13,RBP
/* 0d3034ca */  MOV R15,0x80000000000000
/* 0d3034d4 */  OR R13,R15
/* 0d3034d7 */  MOV R14,R13
/* 0d3034da */  MOV qword ptr [RSP + 0x10],R14
/* 0d3034df */  LEA RSI,[RSP + 0xf0]
/* 0d3034e7 */  LEA RDI,[RSP + 0x160]
/* 0d3034ef */  MOV RDX,RSP
/* 0d3034f2 */  MOV ECX,0x1
/* 0d3034f7 */  CALL 0x0d6b3300
/* 0d3034fc */  CMP qword ptr [RSP + 0xd8],0x0
/* 0d303505 */  JNZ 0x0d30353e
/* 0d303507 */  LEA RDI,[0x12a4e2b]
/* 0d30350e */  LEA RSI,[0x1495f35]
/* 0d303515 */  LEA RCX,[0x13fa33d]
/* 0d30351c */  LEA R8,[0x120064d]
/* 0d303523 */  MOV EDX,0x16d
/* 0d303528 */  XOR EAX,EAX
/* 0d30352a */  CALL 0x0eeddcf0
/* 0d30352f */  TEST AL,AL
/* 0d303531 */  JZ 0x0d30353e
/* 0d303533 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d30353e */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d303546 */  TEST RAX,RAX
/* 0d303549 */  JZ 0x0d30355d
/* 0d30354b */  CMP byte ptr [RAX],0x1
/* 0d30354e */  JNZ 0x0d30355d
/* 0d303550 */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d303558 */  JMP 0x0d3035de
/* 0d30355d */  LEA RDI,[0x11b95c6]
/* 0d303564 */  LEA RSI,[0x119d79e]
/* 0d30356b */  LEA RCX,[0x13fa33d]
/* 0d303572 */  LEA R8,[0x120064d]
/* 0d303579 */  MOV EDX,0x16e
/* 0d30357e */  XOR EAX,EAX
/* 0d303580 */  CALL 0x0eeddcf0
/* 0d303585 */  TEST AL,AL
/* 0d303587 */  JZ 0x0d303594
/* 0d303589 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d303594 */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d30359c */  CMP qword ptr [RSP + 0xc0],0x0
/* 0d3035a5 */  JNZ 0x0d3035de
/* 0d3035a7 */  LEA RDI,[0x1411d19]
/* 0d3035ae */  LEA RSI,[0x135b312]
/* 0d3035b5 */  LEA RCX,[0x142bd41]
/* 0d3035bc */  LEA R8,[0x13f915e]
/* 0d3035c3 */  MOV EDX,0x12c
/* 0d3035c8 */  XOR EAX,EAX
/* 0d3035ca */  CALL 0x0eeddcf0
/* 0d3035cf */  TEST AL,AL
/* 0d3035d1 */  JZ 0x0d3035de
/* 0d3035d3 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d3035de */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d3035e6 */  CMP byte ptr [RAX],0x0
/* 0d3035e9 */  JNZ 0x0d303622
/* 0d3035eb */  LEA RDI,[0x130991f]
/* 0d3035f2 */  LEA RSI,[0x147828b]
/* 0d3035f9 */  LEA RCX,[0x142bd41]
/* 0d303600 */  LEA R8,[0x13f915e]
/* 0d303607 */  MOV EDX,0x130
/* 0d30360c */  XOR EAX,EAX
/* 0d30360e */  CALL 0x0eeddcf0
/* 0d303613 */  TEST AL,AL
/* 0d303615 */  JZ 0x0d303622
/* 0d303617 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d303622 */  MOV R12,qword ptr [RSP + 0xd0]
/* 0d30362a */  LEA RDI,[0xf5463b0]
/* 0d303631 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303638 */  MOV ESI,0x80
/* 0d30363d */  CALL qword ptr [RAX + 0x10]
/* 0d303640 */  MOV RBX,RAX
/* 0d303643 */  TEST RAX,RAX
/* 0d303646 */  JZ 0x0d306746
/* 0d30364c */  MOV qword ptr [RSP + 0x60],RBX
/* 0d303651 */  MOV RBX,qword ptr [RSP + 0xf0]
/* 0d303659 */  MOV R14,qword ptr [RSP + 0xf8]
/* 0d303661 */  MOV qword ptr [RSP + 0x1a0],RBX
/* 0d303669 */  TEST R14,R15
/* 0d30366c */  MOV qword ptr [RSP + 0x158],R12
/* 0d303674 */  JNZ 0x0d30367b
/* 0d303676 */  MOV RAX,R15
/* 0d303679 */  JMP 0x0d3036f2
/* 0d30367b */  AND R14,RBP
/* 0d30367e */  MOV R15,qword ptr [R14 + -0x8]
/* 0d303682 */  LEA R12,[R15 + 0x9]
/* 0d303686 */  LEA RDI,[0xf5463b0]
/* 0d30368d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303694 */  MOV EDX,0x8
/* 0d303699 */  MOV RSI,R12
/* 0d30369c */  CALL qword ptr [RAX + 0x20]
/* 0d30369f */  MOV RBP,RAX
/* 0d3036a2 */  TEST RAX,RAX
/* 0d3036a5 */  SETNZ AL
/* 0d3036a8 */  TEST R12,R12
/* 0d3036ab */  SETZ CL
/* 0d3036ae */  OR CL,AL
/* 0d3036b0 */  JZ 0x0d306905
/* 0d3036b6 */  MOV qword ptr [RBP],R15
/* 0d3036ba */  MOV R12,RBP
/* 0d3036bd */  ADD R12,0x8
/* 0d3036c1 */  MOV RDI,R12
/* 0d3036c4 */  MOV RSI,R14
/* 0d3036c7 */  MOV RDX,R15
/* 0d3036ca */  CALL 0x0eee2f00
/* 0d3036cf */  MOV byte ptr [RBP + R15*0x1 + 0x8],0x0
/* 0d3036d5 */  MOV RBP,-0xff000000000001
/* 0d3036df */  AND R12,RBP
/* 0d3036e2 */  MOV RAX,0x80000000000000
/* 0d3036ec */  OR R12,RAX
/* 0d3036ef */  MOV R14,R12
/* 0d3036f2 */  MOV qword ptr [RSP + 0x1a8],R14
/* 0d3036fa */  MOV qword ptr [RSP + 0x1b0],0x0
/* 0d303706 */  MOV R15,qword ptr [RSP + 0x100]
/* 0d30370e */  TEST R15,RAX
/* 0d303711 */  JZ 0x0d30379e
/* 0d303717 */  MOV qword ptr [RSP + 0x288],R13
/* 0d30371f */  AND R15,RBP
/* 0d303722 */  MOV RBP,qword ptr [R15 + -0x8]
/* 0d303726 */  LEA R13,[RBP + 0x9]
/* 0d30372a */  LEA RDI,[0xf5463b0]
/* 0d303731 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303738 */  MOV EDX,0x8
/* 0d30373d */  MOV RSI,R13
/* 0d303740 */  CALL qword ptr [RAX + 0x20]
/* 0d303743 */  MOV R12,RAX
/* 0d303746 */  TEST RAX,RAX
/* 0d303749 */  SETNZ AL
/* 0d30374c */  TEST R13,R13
/* 0d30374f */  SETZ CL
/* 0d303752 */  OR CL,AL
/* 0d303754 */  JZ 0x0d306917
/* 0d30375a */  MOV qword ptr [R12],RBP
/* 0d30375e */  MOV R13,R12
/* 0d303761 */  ADD R13,0x8
/* 0d303765 */  MOV RDI,R13
/* 0d303768 */  MOV RSI,R15
/* 0d30376b */  MOV RDX,RBP
/* 0d30376e */  CALL 0x0eee2f00
/* 0d303773 */  MOV byte ptr [R12 + RBP*0x1 + 0x8],0x0
/* 0d303779 */  MOV RAX,-0xff000000000001
/* 0d303783 */  AND R13,RAX
/* 0d303786 */  MOV RAX,0x80000000000000
/* 0d303790 */  OR R13,RAX
/* 0d303793 */  MOV R15,R13
/* 0d303796 */  MOV R13,qword ptr [RSP + 0x288]
/* 0d30379e */  MOVZX EAX,word ptr [RSP + 0x190]
/* 0d3037a6 */  MOV word ptr [RSP + 0x2e8],AX
/* 0d3037ae */  MOVZX R12D,word ptr [RSP + 0x142]
/* 0d3037b7 */  MOV qword ptr [RSP + 0x90],RBX
/* 0d3037bf */  LEA RBP,[RSP + 0x98]
/* 0d3037c7 */  MOV qword ptr [RSP + 0x98],R14
/* 0d3037cf */  XORPS XMM0,XMM0
/* 0d3037d2 */  MOVUPS xmmword ptr [RSP + 0x1a8],XMM0
/* 0d3037da */  LEA R14,[RSP + 0xa0]
/* 0d3037e2 */  MOV qword ptr [RSP + 0xa0],R15
/* 0d3037ea */  MOV RCX,qword ptr [RSP + 0x160]
/* 0d3037f2 */  MOV qword ptr [RSP + 0x2b8],RCX
/* 0d3037fa */  MOVAPS XMM1,xmmword ptr [RSP + 0x160]
/* 0d303802 */  MOVAPS XMM2,xmmword ptr [RSP + 0x170]
/* 0d30380a */  MOVUPS xmmword ptr [RSP + 0x168],XMM0
/* 0d303812 */  MOVAPS xmmword ptr [RSP + 0x20],XMM1
/* 0d303817 */  MOVUPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0d30381f */  MOV RCX,qword ptr [RSP + 0x178]
/* 0d303827 */  MOV qword ptr [RSP + 0x2d0],RCX
/* 0d30382f */  MOVAPS xmmword ptr [RSP + 0x30],XMM2
/* 0d303834 */  MOV qword ptr [RSP + 0x2d8],0x0
/* 0d303840 */  MOVAPS XMM1,xmmword ptr [RSP + 0x180]
/* 0d303848 */  MOVAPS xmmword ptr [RSP + 0x180],XMM0
/* 0d303850 */  MOVAPS xmmword ptr [RSP + 0x40],XMM1
/* 0d303855 */  MOV qword ptr [RSP + 0x2e0],0x0
/* 0d303861 */  MOV word ptr [RSP + 0x50],AX
/* 0d303866 */  LEA RDX,[RSP + 0x90]
/* 0d30386e */  LEA RCX,[RSP + 0x20]
/* 0d303873 */  MOV R15,qword ptr [RSP + 0x60]
/* 0d303878 */  MOV RDI,R15
/* 0d30387b */  MOV RSI,qword ptr [RSP + 0x158]
/* 0d303883 */  CALL 0x0d6a8a30
/* 0d303888 */  MOV RSI,qword ptr [RSP + 0x48]
/* 0d30388d */  MOV RBX,0x80000000000000
/* 0d303897 */  TEST RSI,RBX
/* 0d30389a */  MOV RBP,-0xff000000000001
/* 0d3038a4 */  JZ 0x0d3038be
/* 0d3038a6 */  AND RSI,RBP
/* 0d3038a9 */  ADD RSI,-0x8
/* 0d3038ad */  LEA RDI,[0xf5463b0]
/* 0d3038b4 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3038bb */  CALL qword ptr [RAX + 0x28]
/* 0d3038be */  MOV qword ptr [RSP + 0x48],0x0
/* 0d3038c7 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0d3038cc */  TEST RSI,RBX
/* 0d3038cf */  JZ 0x0d3038e9
/* 0d3038d1 */  AND RSI,RBP
/* 0d3038d4 */  ADD RSI,-0x8
/* 0d3038d8 */  LEA RDI,[0xf5463b0]
/* 0d3038df */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3038e6 */  CALL qword ptr [RAX + 0x28]
/* 0d3038e9 */  MOV qword ptr [RSP + 0x40],0x0
/* 0d3038f2 */  MOV RSI,qword ptr [RSP + 0x30]
/* 0d3038f7 */  TEST RSI,RBX
/* 0d3038fa */  JZ 0x0d303914
/* 0d3038fc */  AND RSI,RBP
/* 0d3038ff */  ADD RSI,-0x8
/* 0d303903 */  LEA RDI,[0xf5463b0]
/* 0d30390a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303911 */  CALL qword ptr [RAX + 0x28]
/* 0d303914 */  MOV qword ptr [RSP + 0x30],0x0
/* 0d30391d */  MOV RSI,qword ptr [RSP + 0x28]
/* 0d303922 */  TEST RSI,RBX
/* 0d303925 */  JZ 0x0d30393f
/* 0d303927 */  AND RSI,RBP
/* 0d30392a */  ADD RSI,-0x8
/* 0d30392e */  LEA RDI,[0xf5463b0]
/* 0d303935 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30393c */  CALL qword ptr [RAX + 0x28]
/* 0d30393f */  MOV qword ptr [RSP + 0x28],0x0
/* 0d303948 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0d303950 */  TEST RSI,RBX
/* 0d303953 */  JZ 0x0d30396d
/* 0d303955 */  AND RSI,RBP
/* 0d303958 */  ADD RSI,-0x8
/* 0d30395c */  LEA RDI,[0xf5463b0]
/* 0d303963 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30396a */  CALL qword ptr [RAX + 0x28]
/* 0d30396d */  MOV qword ptr [RSP + 0xa0],0x0
/* 0d303979 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0d303981 */  TEST RSI,RBX
/* 0d303984 */  JZ 0x0d30399e
/* 0d303986 */  AND RSI,RBP
/* 0d303989 */  ADD RSI,-0x8
/* 0d30398d */  LEA RDI,[0xf5463b0]
/* 0d303994 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30399b */  CALL qword ptr [RAX + 0x28]
/* 0d30399e */  LEA RAX,[0xf460320]
/* 0d3039a5 */  MOV qword ptr [R15],RAX
/* 0d3039a8 */  MOV qword ptr [R15 + 0x70],R13
/* 0d3039ac */  MOV word ptr [R15 + 0x78],R12W
/* 0d3039b1 */  MOV byte ptr [R15 + 0x7a],0x1
/* 0d3039b6 */  MOV RSI,qword ptr [RSP + 0x188]
/* 0d3039be */  MOV qword ptr [RSP + 0x20],R15
/* 0d3039c3 */  TEST RSI,RBX
/* 0d3039c6 */  JZ 0x0d3039e0
/* 0d3039c8 */  AND RSI,RBP
/* 0d3039cb */  ADD RSI,-0x8
/* 0d3039cf */  LEA RDI,[0xf5463b0]
/* 0d3039d6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3039dd */  CALL qword ptr [RAX + 0x28]
/* 0d3039e0 */  MOV qword ptr [RSP + 0x188],0x0
/* 0d3039ec */  MOV RSI,qword ptr [RSP + 0x180]
/* 0d3039f4 */  TEST RSI,RBX
/* 0d3039f7 */  JZ 0x0d303a11
/* 0d3039f9 */  AND RSI,RBP
/* 0d3039fc */  ADD RSI,-0x8
/* 0d303a00 */  LEA RDI,[0xf5463b0]
/* 0d303a07 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303a0e */  CALL qword ptr [RAX + 0x28]
/* 0d303a11 */  MOV qword ptr [RSP + 0x180],0x0
/* 0d303a1d */  MOV RSI,qword ptr [RSP + 0x170]
/* 0d303a25 */  TEST RSI,RBX
/* 0d303a28 */  JZ 0x0d303a42
/* 0d303a2a */  AND RSI,RBP
/* 0d303a2d */  ADD RSI,-0x8
/* 0d303a31 */  LEA RDI,[0xf5463b0]
/* 0d303a38 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303a3f */  CALL qword ptr [RAX + 0x28]
/* 0d303a42 */  MOV qword ptr [RSP + 0x170],0x0
/* 0d303a4e */  MOV RSI,qword ptr [RSP + 0x168]
/* 0d303a56 */  TEST RSI,RBX
/* 0d303a59 */  JZ 0x0d303a73
/* 0d303a5b */  AND RSI,RBP
/* 0d303a5e */  ADD RSI,-0x8
/* 0d303a62 */  LEA RDI,[0xf5463b0]
/* 0d303a69 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303a70 */  CALL qword ptr [RAX + 0x28]
/* 0d303a73 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d303a78 */  TEST RSI,RBX
/* 0d303a7b */  JZ 0x0d303a95
/* 0d303a7d */  AND RSI,RBP
/* 0d303a80 */  ADD RSI,-0x8
/* 0d303a84 */  LEA RDI,[0xf5463b0]
/* 0d303a8b */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303a92 */  CALL qword ptr [RAX + 0x28]
/* 0d303a95 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d303a9e */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d303aa3 */  TEST RSI,RBX
/* 0d303aa6 */  JZ 0x0d303ac0
/* 0d303aa8 */  AND RSI,RBP
/* 0d303aab */  ADD RSI,-0x8
/* 0d303aaf */  LEA RDI,[0xf5463b0]
/* 0d303ab6 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303abd */  CALL qword ptr [RAX + 0x28]
/* 0d303ac0 */  MOV RAX,qword ptr [RSP + 0x88]
/* 0d303ac8 */  MOV R14,qword ptr [RAX]
/* 0d303acb */  MOV RBX,qword ptr [RAX + 0x8]
/* 0d303acf */  CMP R14,RBX
/* 0d303ad2 */  JZ 0x0d303afc
/* 0d303ad4 */  ADD R15,0x38
/* 0d303ad8 */  NOP dword ptr [RAX + RAX*0x1]
/* 0d303ae0 */  MOV RDI,qword ptr [R14]
/* 0d303ae3 */  ADD RDI,0x20
/* 0d303ae7 */  MOV RSI,R15
/* 0d303aea */  CALL 0x04fa7a10
/* 0d303aef */  TEST AL,AL
/* 0d303af1 */  JZ 0x0d303afc
/* 0d303af3 */  ADD R14,0x8
/* 0d303af7 */  CMP R14,RBX
/* 0d303afa */  JNZ 0x0d303ae0
/* 0d303afc */  LEA RDX,[RSP + 0x20]
/* 0d303b01 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0d303b09 */  MOV RSI,R14
/* 0d303b0c */  CALL 0x0d6af860
/* 0d303b11 */  MOV R14,0x80000000000000
/* 0d303b1b */  MOV RDI,qword ptr [RSP + 0x20]
/* 0d303b20 */  MOV qword ptr [RSP + 0x20],0x0
/* 0d303b29 */  TEST RDI,RDI
/* 0d303b2c */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d303b31 */  JZ 0x0d303b39
/* 0d303b33 */  MOV RAX,qword ptr [RDI]
/* 0d303b36 */  CALL qword ptr [RAX + 0x8]
/* 0d303b39 */  MOV byte ptr [RSP + 0x140],0x0
/* 0d303b41 */  LEA RDI,[RSP + 0xb0]
/* 0d303b49 */  CALL 0x0d3075e0
/* 0d303b4e */  MOV RSI,qword ptr [RSP + 0x80]
/* 0d303b56 */  TEST RSI,R14
/* 0d303b59 */  JZ 0x0d303b73
/* 0d303b5b */  AND RSI,RBP
/* 0d303b5e */  ADD RSI,-0x8
/* 0d303b62 */  LEA RDI,[0xf5463b0]
/* 0d303b69 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303b70 */  CALL qword ptr [RAX + 0x28]
/* 0d303b73 */  MOV qword ptr [RSP + 0x80],0x0
/* 0d303b7f */  MOV RSI,qword ptr [RSP + 0x78]
/* 0d303b84 */  TEST RSI,R14
/* 0d303b87 */  JZ 0x0d303ba1
/* 0d303b89 */  AND RSI,RBP
/* 0d303b8c */  ADD RSI,-0x8
/* 0d303b90 */  LEA RDI,[0xf5463b0]
/* 0d303b97 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303b9e */  CALL qword ptr [RAX + 0x28]
/* 0d303ba1 */  XORPS XMM0,XMM0
/* 0d303ba4 */  MOV R14,qword ptr [RBX + 0x2b0]
/* 0d303bab */  MOVUPS xmmword ptr [RBX + 0x2a8],XMM0
/* 0d303bb2 */  TEST R14,R14
/* 0d303bb5 */  JZ 0x0d303bda
/* 0d303bb7 */  MOV RAX,-0x1
/* 0d303bbe */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303bc4 */  TEST RAX,RAX
/* 0d303bc7 */  JNZ 0x0d303bda
/* 0d303bc9 */  MOV RAX,qword ptr [R14]
/* 0d303bcc */  MOV RDI,R14
/* 0d303bcf */  CALL qword ptr [RAX + 0x10]
/* 0d303bd2 */  MOV RDI,R14
/* 0d303bd5 */  CALL 0x0412c2d0
/* 0d303bda */  MOV qword ptr [RBX + 0x2b8],0x0
/* 0d303be5 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0d303bea */  MOV RAX,qword ptr [RCX + 0x8]
/* 0d303bee */  MOV RCX,qword ptr [RCX + 0x10]
/* 0d303bf2 */  TEST RCX,RCX
/* 0d303bf5 */  JZ 0x0d303bfc
/* 0d303bf7 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d303bfc */  MOV qword ptr [RBX + 0x2a8],RAX
/* 0d303c03 */  MOV R14,qword ptr [RBX + 0x2b0]
/* 0d303c0a */  MOV qword ptr [RBX + 0x2b0],RCX
/* 0d303c11 */  TEST R14,R14
/* 0d303c14 */  JZ 0x0d303c44
/* 0d303c16 */  MOV RAX,-0x1
/* 0d303c1d */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303c23 */  TEST RAX,RAX
/* 0d303c26 */  JNZ 0x0d303c39
/* 0d303c28 */  MOV RAX,qword ptr [R14]
/* 0d303c2b */  MOV RDI,R14
/* 0d303c2e */  CALL qword ptr [RAX + 0x10]
/* 0d303c31 */  MOV RDI,R14
/* 0d303c34 */  CALL 0x0412c2d0
/* 0d303c39 */  MOV RAX,qword ptr [RSP + 0x1c0]
/* 0d303c41 */  MOV RAX,qword ptr [RAX]
/* 0d303c44 */  TEST RAX,RAX
/* 0d303c47 */  JZ 0x0d303c55
/* 0d303c49 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0d303c4e */  MOV qword ptr [RBX + 0x2b8],RAX
/* 0d303c55 */  MOV RAX,qword ptr [RSP + 0x1b8]
/* 0d303c5d */  MOV RDX,qword ptr [RAX]
/* 0d303c60 */  MOV qword ptr [RSP + 0x308],RDX
/* 0d303c68 */  MOV RAX,qword ptr [RAX + 0x8]
/* 0d303c6c */  MOV qword ptr [RSP + 0x310],RAX
/* 0d303c74 */  LEA R12,[RSP + 0x230]
/* 0d303c7c */  TEST RAX,RAX
/* 0d303c7f */  JZ 0x0d303cba
/* 0d303c81 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0d303c86 */  MOV RCX,qword ptr [RSP + 0xa8]
/* 0d303c8e */  MOV RCX,qword ptr [RCX]
/* 0d303c91 */  MOV qword ptr [RSP + 0x318],RCX
/* 0d303c99 */  MOV word ptr [RSP + 0x228],0xc
/* 0d303ca3 */  MOV qword ptr [RSP + 0x230],RDX
/* 0d303cab */  MOV qword ptr [RSP + 0x238],RAX
/* 0d303cb3 */  INC.LOCK qword ptr [RAX + 0x8]
/* 0d303cb8 */  JMP 0x0d303ce7
/* 0d303cba */  MOV RCX,qword ptr [RSP + 0xa8]
/* 0d303cc2 */  MOV RCX,qword ptr [RCX]
/* 0d303cc5 */  MOV qword ptr [RSP + 0x318],RCX
/* 0d303ccd */  MOV word ptr [RSP + 0x228],0xc
/* 0d303cd7 */  MOV qword ptr [RSP + 0x230],RDX
/* 0d303cdf */  MOV qword ptr [RSP + 0x238],RAX
/* 0d303ce7 */  MOV qword ptr [RSP + 0x240],RCX
/* 0d303cef */  LEA RBX,[RSP + 0x248]
/* 0d303cf7 */  MOV qword ptr [RSP + 0x248],0x0
/* 0d303d03 */  MOV word ptr [RSP + 0x250],0x100
/* 0d303d0d */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d303d12 */  MOV R15,qword ptr [RAX + 0x2c0]
/* 0d303d19 */  TEST R15,R15
/* 0d303d1c */  JZ 0x0d303de8
/* 0d303d22 */  MOV word ptr [R15],0xc
/* 0d303d28 */  LEA RAX,[RSP + 0x228]
/* 0d303d30 */  CMP R15,RAX
/* 0d303d33 */  JZ 0x0d303dce
/* 0d303d39 */  XORPS XMM1,XMM1
/* 0d303d3c */  MOV R14,qword ptr [R15 + 0x10]
/* 0d303d40 */  MOVUPS xmmword ptr [R15 + 0x8],XMM1
/* 0d303d45 */  TEST R14,R14
/* 0d303d48 */  JZ 0x0d303d70
/* 0d303d4a */  MOV RAX,-0x1
/* 0d303d51 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303d57 */  TEST RAX,RAX
/* 0d303d5a */  JNZ 0x0d303d70
/* 0d303d5c */  MOV RAX,qword ptr [R14]
/* 0d303d5f */  MOV RDI,R14
/* 0d303d62 */  CALL qword ptr [RAX + 0x10]
/* 0d303d65 */  MOV RDI,R14
/* 0d303d68 */  CALL 0x0412c2d0
/* 0d303d6d */  XORPS XMM1,XMM1
/* 0d303d70 */  MOV qword ptr [R15 + 0x18],0x0
/* 0d303d78 */  MOVUPS XMM0,xmmword ptr [RSP + 0x230]
/* 0d303d80 */  MOVUPS xmmword ptr [R12],XMM1
/* 0d303d85 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d303d89 */  MOVUPS xmmword ptr [R15 + 0x8],XMM0
/* 0d303d8e */  TEST R14,R14
/* 0d303d91 */  JZ 0x0d303db6
/* 0d303d93 */  MOV RAX,-0x1
/* 0d303d9a */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303da0 */  TEST RAX,RAX
/* 0d303da3 */  JNZ 0x0d303db6
/* 0d303da5 */  MOV RAX,qword ptr [R14]
/* 0d303da8 */  MOV RDI,R14
/* 0d303dab */  CALL qword ptr [RAX + 0x10]
/* 0d303dae */  MOV RDI,R14
/* 0d303db1 */  CALL 0x0412c2d0
/* 0d303db6 */  MOV RAX,qword ptr [RSP + 0x240]
/* 0d303dbe */  MOV qword ptr [R15 + 0x18],RAX
/* 0d303dc2 */  MOV qword ptr [RSP + 0x240],0x0
/* 0d303dce */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d303dd2 */  MOV word ptr [R15 + 0x28],AX
/* 0d303dd7 */  MOV RAX,qword ptr [RBX]
/* 0d303dda */  MOV qword ptr [R15 + 0x20],RAX
/* 0d303dde */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d303de3 */  JMP 0x0d303ee8
/* 0d303de8 */  LEA RDI,[0xf5463b0]
/* 0d303def */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d303df6 */  MOV ESI,0x30
/* 0d303dfb */  CALL qword ptr [RAX + 0x10]
/* 0d303dfe */  MOV R15,RAX
/* 0d303e01 */  TEST RAX,RAX
/* 0d303e04 */  JZ 0x0d306a8d
/* 0d303e0a */  MOVZX EAX,word ptr [RSP + 0x228]
/* 0d303e12 */  MOV word ptr [R15],AX
/* 0d303e16 */  MOV RAX,qword ptr [RSP + 0x230]
/* 0d303e1e */  MOV qword ptr [R15 + 0x8],RAX
/* 0d303e22 */  MOV RAX,qword ptr [RSP + 0x238]
/* 0d303e2a */  MOV qword ptr [R15 + 0x10],RAX
/* 0d303e2e */  XORPS XMM0,XMM0
/* 0d303e31 */  MOVUPS xmmword ptr [R12],XMM0
/* 0d303e36 */  MOV RAX,qword ptr [RSP + 0x240]
/* 0d303e3e */  MOV qword ptr [R15 + 0x18],RAX
/* 0d303e42 */  MOV qword ptr [RSP + 0x240],0x0
/* 0d303e4e */  MOVZX EAX,word ptr [RBX + 0x8]
/* 0d303e52 */  MOV word ptr [R15 + 0x28],AX
/* 0d303e57 */  MOV RAX,qword ptr [RBX]
/* 0d303e5a */  MOV qword ptr [R15 + 0x20],RAX
/* 0d303e5e */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d303e63 */  MOV R14,qword ptr [RBX + 0x2c0]
/* 0d303e6a */  MOV qword ptr [RBX + 0x2c0],R15
/* 0d303e71 */  TEST R14,R14
/* 0d303e74 */  JZ 0x0d303ee8
/* 0d303e76 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d303e7a */  MOVUPS xmmword ptr [R14 + 0x8],XMM0
/* 0d303e7f */  TEST R15,R15
/* 0d303e82 */  JZ 0x0d303edb
/* 0d303e84 */  MOV RAX,-0x1
/* 0d303e8b */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d303e91 */  TEST RAX,RAX
/* 0d303e94 */  JNZ 0x0d303ea7
/* 0d303e96 */  MOV RAX,qword ptr [R15]
/* 0d303e99 */  MOV RDI,R15
/* 0d303e9c */  CALL qword ptr [RAX + 0x10]
/* 0d303e9f */  MOV RDI,R15
/* 0d303ea2 */  CALL 0x0412c2d0
/* 0d303ea7 */  MOV R15,qword ptr [R14 + 0x10]
/* 0d303eab */  MOV qword ptr [R14 + 0x18],0x0
/* 0d303eb3 */  TEST R15,R15
/* 0d303eb6 */  JZ 0x0d303edb
/* 0d303eb8 */  MOV RAX,-0x1
/* 0d303ebf */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0d303ec5 */  TEST RAX,RAX
/* 0d303ec8 */  JNZ 0x0d303edb
/* 0d303eca */  MOV RAX,qword ptr [R15]
/* 0d303ecd */  MOV RDI,R15
/* 0d303ed0 */  CALL qword ptr [RAX + 0x10]
/* 0d303ed3 */  MOV RDI,R15
/* 0d303ed6 */  CALL 0x0412c2d0
/* 0d303edb */  MOV ESI,0x30
/* 0d303ee0 */  MOV RDI,R14
/* 0d303ee3 */  CALL 0x0412a280
/* 0d303ee8 */  XORPS XMM0,XMM0
/* 0d303eeb */  MOV R14,qword ptr [RSP + 0x238]
/* 0d303ef3 */  MOVUPS xmmword ptr [RSP + 0x230],XMM0
/* 0d303efb */  TEST R14,R14
/* 0d303efe */  JZ 0x0d303f6b
/* 0d303f00 */  MOV RAX,-0x1
/* 0d303f07 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303f0d */  TEST RAX,RAX
/* 0d303f10 */  MOV R15,0x80000000000000
/* 0d303f1a */  JNZ 0x0d303f2d
/* 0d303f1c */  MOV RAX,qword ptr [R14]
/* 0d303f1f */  MOV RDI,R14
/* 0d303f22 */  CALL qword ptr [RAX + 0x10]
/* 0d303f25 */  MOV RDI,R14
/* 0d303f28 */  CALL 0x0412c2d0
/* 0d303f2d */  MOV R14,qword ptr [RSP + 0x238]
/* 0d303f35 */  MOV qword ptr [RSP + 0x240],0x0
/* 0d303f41 */  TEST R14,R14
/* 0d303f44 */  JZ 0x0d303f81
/* 0d303f46 */  MOV RAX,-0x1
/* 0d303f4d */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303f53 */  TEST RAX,RAX
/* 0d303f56 */  JNZ 0x0d303f81
/* 0d303f58 */  MOV RAX,qword ptr [R14]
/* 0d303f5b */  MOV RDI,R14
/* 0d303f5e */  CALL qword ptr [RAX + 0x10]
/* 0d303f61 */  MOV RDI,R14
/* 0d303f64 */  CALL 0x0412c2d0
/* 0d303f69 */  JMP 0x0d303f81
/* 0d303f6b */  MOV qword ptr [RSP + 0x240],0x0
/* 0d303f77 */  MOV R15,0x80000000000000
/* 0d303f81 */  XORPS XMM0,XMM0
/* 0d303f84 */  MOV R14,qword ptr [RSP + 0x310]
/* 0d303f8c */  MOVUPS xmmword ptr [RSP + 0x308],XMM0
/* 0d303f94 */  TEST R14,R14
/* 0d303f97 */  JZ 0x0d303ffa
/* 0d303f99 */  MOV RAX,-0x1
/* 0d303fa0 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303fa6 */  TEST RAX,RAX
/* 0d303fa9 */  JNZ 0x0d303fbc
/* 0d303fab */  MOV RAX,qword ptr [R14]
/* 0d303fae */  MOV RDI,R14
/* 0d303fb1 */  CALL qword ptr [RAX + 0x10]
/* 0d303fb4 */  MOV RDI,R14
/* 0d303fb7 */  CALL 0x0412c2d0
/* 0d303fbc */  MOV R14,qword ptr [RSP + 0x310]
/* 0d303fc4 */  MOV qword ptr [RSP + 0x318],0x0
/* 0d303fd0 */  TEST R14,R14
/* 0d303fd3 */  JZ 0x0d304006
/* 0d303fd5 */  MOV RAX,-0x1
/* 0d303fdc */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d303fe2 */  TEST RAX,RAX
/* 0d303fe5 */  JNZ 0x0d304006
/* 0d303fe7 */  MOV RAX,qword ptr [R14]
/* 0d303fea */  MOV RDI,R14
/* 0d303fed */  CALL qword ptr [RAX + 0x10]
/* 0d303ff0 */  MOV RDI,R14
/* 0d303ff3 */  CALL 0x0412c2d0
/* 0d303ff8 */  JMP 0x0d304006
/* 0d303ffa */  MOV qword ptr [RSP + 0x318],0x0
/* 0d304006 */  LEA RSI,[0xf45f978]
/* 0d30400d */  LEA RDI,[RSP + 0x70]
/* 0d304012 */  CALL 0x05d54750
/* 0d304017 */  MOV RAX,qword ptr [RSP + 0x1c0]
/* 0d30401f */  MOV RAX,qword ptr [RAX]
/* 0d304022 */  TEST RAX,RAX
/* 0d304025 */  JZ 0x0d30402c
/* 0d304027 */  CMP byte ptr [RAX],0x0
/* 0d30402a */  JNZ 0x0d30406d
/* 0d30402c */  LEA RDI,[0x13c6966]
/* 0d304033 */  LEA RSI,[0x1259d39]
/* 0d30403a */  LEA RCX,[0x1259d48]
/* 0d304041 */  LEA R8,[0x13533dc]
/* 0d304048 */  MOV EDX,0xf5
/* 0d30404d */  XOR EAX,EAX
/* 0d30404f */  CALL 0x0eeddcf0
/* 0d304054 */  TEST AL,AL
/* 0d304056 */  MOV R15,0x80000000000000
/* 0d304060 */  JZ 0x0d30406d
/* 0d304062 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d30406d */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d304072 */  MOV qword ptr [RBX + 0x2d8],RAX
/* 0d304079 */  MOV RSI,qword ptr [RBX + 0x2e0]
/* 0d304080 */  TEST RSI,R15
/* 0d304083 */  JZ 0x0d30409d
/* 0d304085 */  AND RSI,RBP
/* 0d304088 */  ADD RSI,-0x8
/* 0d30408c */  LEA RDI,[0xf5463b0]
/* 0d304093 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30409a */  CALL qword ptr [RAX + 0x28]
/* 0d30409d */  MOV qword ptr [RBX + 0x2e0],0x0
/* 0d3040a8 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d3040ad */  MOV RAX,0x80000000000000
/* 0d3040b7 */  TEST R14,RAX
/* 0d3040ba */  JZ 0x0d304129
/* 0d3040bc */  AND R14,RBP
/* 0d3040bf */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3040c3 */  LEA R13,[R15 + 0x9]
/* 0d3040c7 */  LEA RDI,[0xf5463b0]
/* 0d3040ce */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3040d5 */  MOV EDX,0x8
/* 0d3040da */  MOV RSI,R13
/* 0d3040dd */  CALL qword ptr [RAX + 0x20]
/* 0d3040e0 */  MOV R12,RAX
/* 0d3040e3 */  TEST RAX,RAX
/* 0d3040e6 */  SETNZ AL
/* 0d3040e9 */  TEST R13,R13
/* 0d3040ec */  SETZ CL
/* 0d3040ef */  OR CL,AL
/* 0d3040f1 */  JZ 0x0d306929
/* 0d3040f7 */  MOV qword ptr [R12],R15
/* 0d3040fb */  MOV R13,R12
/* 0d3040fe */  ADD R13,0x8
/* 0d304102 */  MOV RDI,R13
/* 0d304105 */  MOV RSI,R14
/* 0d304108 */  MOV RDX,R15
/* 0d30410b */  CALL 0x0eee2f00
/* 0d304110 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d304116 */  AND R13,RBP
/* 0d304119 */  MOV RAX,0x80000000000000
/* 0d304123 */  OR R13,RAX
/* 0d304126 */  MOV R14,R13
/* 0d304129 */  MOV qword ptr [RBX + 0x2e0],R14
/* 0d304130 */  MOV RSI,qword ptr [RBX + 0x2e8]
/* 0d304137 */  TEST RSI,RAX
/* 0d30413a */  JZ 0x0d304154
/* 0d30413c */  AND RSI,RBP
/* 0d30413f */  ADD RSI,-0x8
/* 0d304143 */  LEA RDI,[0xf5463b0]
/* 0d30414a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304151 */  CALL qword ptr [RAX + 0x28]
/* 0d304154 */  MOV qword ptr [RBX + 0x2e8],0x0
/* 0d30415f */  MOV R14,qword ptr [RSP + 0x80]
/* 0d304167 */  MOV RAX,0x80000000000000
/* 0d304171 */  TEST R14,RAX
/* 0d304174 */  JZ 0x0d3041e3
/* 0d304176 */  AND R14,RBP
/* 0d304179 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d30417d */  LEA R13,[R15 + 0x9]
/* 0d304181 */  LEA RDI,[0xf5463b0]
/* 0d304188 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30418f */  MOV EDX,0x8
/* 0d304194 */  MOV RSI,R13
/* 0d304197 */  CALL qword ptr [RAX + 0x20]
/* 0d30419a */  MOV R12,RAX
/* 0d30419d */  TEST RAX,RAX
/* 0d3041a0 */  SETNZ AL
/* 0d3041a3 */  TEST R13,R13
/* 0d3041a6 */  SETZ CL
/* 0d3041a9 */  OR CL,AL
/* 0d3041ab */  JZ 0x0d30693b
/* 0d3041b1 */  MOV qword ptr [R12],R15
/* 0d3041b5 */  MOV R13,R12
/* 0d3041b8 */  ADD R13,0x8
/* 0d3041bc */  MOV RDI,R13
/* 0d3041bf */  MOV RSI,R14
/* 0d3041c2 */  MOV RDX,R15
/* 0d3041c5 */  CALL 0x0eee2f00
/* 0d3041ca */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3041d0 */  AND R13,RBP
/* 0d3041d3 */  MOV RAX,0x80000000000000
/* 0d3041dd */  OR R13,RAX
/* 0d3041e0 */  MOV R14,R13
/* 0d3041e3 */  LEA RAX,[RBX + 0x290]
/* 0d3041ea */  MOV qword ptr [RBX + 0x2e8],R14
/* 0d3041f1 */  MOV RCX,qword ptr [RSP + 0x298]
/* 0d3041f9 */  MOV qword ptr [RSP + 0x20],RCX
/* 0d3041fe */  MOV qword ptr [RSP + 0x28],RAX
/* 0d304203 */  MOV RAX,RBX
/* 0d304206 */  MOV RBX,qword ptr [RBX + 0x2a8]
/* 0d30420d */  MOV qword ptr [RSP + 0x30],RBX
/* 0d304212 */  MOV R15,qword ptr [RAX + 0x2b0]
/* 0d304219 */  MOV qword ptr [RSP + 0x38],R15
/* 0d30421e */  TEST R15,R15
/* 0d304221 */  JZ 0x0d304228
/* 0d304223 */  INC.LOCK qword ptr [R15 + 0x8]
/* 0d304228 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d30422d */  MOV R12,qword ptr [RAX + 0x2b8]
/* 0d304234 */  MOV qword ptr [RSP + 0x40],R12
/* 0d304239 */  CMP qword ptr [RAX + 0x2c0],0x0
/* 0d304241 */  JNZ 0x0d30427a
/* 0d304243 */  LEA RDI,[0x13ba24d]
/* 0d30424a */  LEA RSI,[0x143b8d9]
/* 0d304251 */  LEA RCX,[0x1259d48]
/* 0d304258 */  LEA R8,[0x13d79d8]
/* 0d30425f */  MOV EDX,0xd8
/* 0d304264 */  XOR EAX,EAX
/* 0d304266 */  CALL 0x0eeddcf0
/* 0d30426b */  TEST AL,AL
/* 0d30426d */  JZ 0x0d30427a
/* 0d30426f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d30427a */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d30427f */  MOV RAX,qword ptr [RCX + 0x2c0]
/* 0d304286 */  MOV qword ptr [RSP + 0x48],RAX
/* 0d30428b */  MOV R14,qword ptr [RCX + 0x2c8]
/* 0d304292 */  TEST R14,R14
/* 0d304295 */  JNZ 0x0d3042cc
/* 0d304297 */  LEA RDI,[0xf5463b0]
/* 0d30429e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3042a5 */  MOV ESI,0x8
/* 0d3042aa */  CALL qword ptr [RAX + 0x10]
/* 0d3042ad */  MOV R14,RAX
/* 0d3042b0 */  TEST RAX,RAX
/* 0d3042b3 */  JZ 0x0d306a9e
/* 0d3042b9 */  MOV qword ptr [R14],0x0
/* 0d3042c0 */  MOV RCX,qword ptr [RSP + 0x18]
/* 0d3042c5 */  MOV qword ptr [RCX + 0x2c8],R14
/* 0d3042cc */  LEA RAX,[RCX + 0x2d8]
/* 0d3042d3 */  MOV qword ptr [RSP + 0x50],R14
/* 0d3042d8 */  MOV qword ptr [RSP + 0x58],RAX
/* 0d3042dd */  MOVUPS XMM0,xmmword ptr [RSP + 0x20]
/* 0d3042e2 */  MOVAPS xmmword ptr [RSP + 0xb0],XMM0
/* 0d3042ea */  MOV qword ptr [RSP + 0xc0],RBX
/* 0d3042f2 */  MOV qword ptr [RSP + 0xc8],R15
/* 0d3042fa */  XORPS XMM0,XMM0
/* 0d3042fd */  LEA RAX,[RSP + 0x30]
/* 0d304302 */  MOVUPS xmmword ptr [RAX],XMM0
/* 0d304305 */  MOV qword ptr [RSP + 0xd0],R12
/* 0d30430d */  MOV qword ptr [RSP + 0x40],0x0
/* 0d304316 */  LEA RAX,[RSP + 0x48]
/* 0d30431b */  MOVUPS XMM0,xmmword ptr [RAX]
/* 0d30431e */  MOVUPS xmmword ptr [RSP + 0xd8],XMM0
/* 0d304326 */  MOV RAX,qword ptr [RAX + 0x10]
/* 0d30432a */  MOV qword ptr [RSP + 0xe8],RAX
/* 0d304332 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0d304337 */  MOV R14,qword ptr [RSP + 0x78]
/* 0d30433c */  MOV qword ptr [RSP + 0xf0],RAX
/* 0d304344 */  MOV qword ptr [RSP + 0xf8],0x0
/* 0d304350 */  MOV R15,0x80000000000000
/* 0d30435a */  TEST R14,R15
/* 0d30435d */  JNZ 0x0d30436b
/* 0d30435f */  MOV RBX,0x7f000000000000
/* 0d304369 */  JMP 0x0d3043e2
/* 0d30436b */  AND R14,RBP
/* 0d30436e */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304372 */  LEA R13,[R15 + 0x9]
/* 0d304376 */  LEA RDI,[0xf5463b0]
/* 0d30437d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304384 */  MOV EDX,0x8
/* 0d304389 */  MOV RSI,R13
/* 0d30438c */  CALL qword ptr [RAX + 0x20]
/* 0d30438f */  MOV RBX,0x7f000000000000
/* 0d304399 */  MOV R12,RAX
/* 0d30439c */  TEST RAX,RAX
/* 0d30439f */  SETNZ AL
/* 0d3043a2 */  TEST R13,R13
/* 0d3043a5 */  SETZ CL
/* 0d3043a8 */  OR CL,AL
/* 0d3043aa */  JZ 0x0d30694d
/* 0d3043b0 */  MOV qword ptr [R12],R15
/* 0d3043b4 */  MOV R13,R12
/* 0d3043b7 */  ADD R13,0x8
/* 0d3043bb */  MOV RDI,R13
/* 0d3043be */  MOV RSI,R14
/* 0d3043c1 */  MOV RDX,R15
/* 0d3043c4 */  CALL 0x0eee2f00
/* 0d3043c9 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3043cf */  AND R13,RBP
/* 0d3043d2 */  MOV R15,0x80000000000000
/* 0d3043dc */  OR R13,R15
/* 0d3043df */  MOV R14,R13
/* 0d3043e2 */  MOV qword ptr [RSP + 0xf8],R14
/* 0d3043ea */  MOV qword ptr [RSP + 0x100],0x0
/* 0d3043f6 */  MOV R14,qword ptr [RSP + 0x80]
/* 0d3043fe */  TEST R14,R15
/* 0d304401 */  JZ 0x0d304482
/* 0d304403 */  LEA R12,[RSP + 0xf8]
/* 0d30440b */  AND R14,RBP
/* 0d30440e */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304412 */  LEA RBP,[R15 + 0x9]
/* 0d304416 */  LEA RDI,[0xf5463b0]
/* 0d30441d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304424 */  MOV EDX,0x8
/* 0d304429 */  MOV RSI,RBP
/* 0d30442c */  CALL qword ptr [RAX + 0x20]
/* 0d30442f */  MOV R13,RAX
/* 0d304432 */  TEST RAX,RAX
/* 0d304435 */  SETNZ AL
/* 0d304438 */  TEST RBP,RBP
/* 0d30443b */  SETZ CL
/* 0d30443e */  OR CL,AL
/* 0d304440 */  JZ 0x0d30695f
/* 0d304446 */  MOV qword ptr [R13],R15
/* 0d30444a */  MOV R12,R13
/* 0d30444d */  ADD R12,0x8
/* 0d304451 */  MOV RDI,R12
/* 0d304454 */  MOV RSI,R14
/* 0d304457 */  MOV RDX,R15
/* 0d30445a */  CALL 0x0eee2f00
/* 0d30445f */  MOV byte ptr [R13 + R15*0x1 + 0x8],0x0
/* 0d304465 */  MOV RAX,-0xff000000000001
/* 0d30446f */  AND R12,RAX
/* 0d304472 */  MOV R15,0x80000000000000
/* 0d30447c */  OR R12,R15
/* 0d30447f */  MOV R14,R12
/* 0d304482 */  MOV qword ptr [RSP + 0x100],R14
/* 0d30448a */  MOV qword ptr [RSP + 0x130],0x0
/* 0d304496 */  MOV byte ptr [RSP + 0x140],0x1
/* 0d30449e */  MOV word ptr [RSP + 0x142],0xfbf8
/* 0d3044a8 */  MOV byte ptr [RSP + 0x144],0x1
/* 0d3044b0 */  MOV RAX,qword ptr [RSP + 0xb0]
/* 0d3044b8 */  MOV qword ptr [RSP + 0x88],RAX
/* 0d3044c0 */  MOV RBP,qword ptr [RSP + 0xb8]
/* 0d3044c8 */  MOV RAX,qword ptr [RBP]
/* 0d3044cc */  MOV qword ptr [RSP],RAX
/* 0d3044d0 */  MOV R14,qword ptr [RBP + 0x8]
/* 0d3044d4 */  TEST R14,R15
/* 0d3044d7 */  JZ 0x0d30455e
/* 0d3044dd */  MOV RAX,-0xff000000000001
/* 0d3044e7 */  AND R14,RAX
/* 0d3044ea */  MOV R15,qword ptr [R14 + -0x8]
/* 0d3044ee */  LEA R13,[R15 + 0x9]
/* 0d3044f2 */  LEA RDI,[0xf5463b0]
/* 0d3044f9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304500 */  MOV EDX,0x8
/* 0d304505 */  MOV RSI,R13
/* 0d304508 */  CALL qword ptr [RAX + 0x20]
/* 0d30450b */  MOV R12,RAX
/* 0d30450e */  TEST RAX,RAX
/* 0d304511 */  SETNZ AL
/* 0d304514 */  TEST R13,R13
/* 0d304517 */  SETZ CL
/* 0d30451a */  OR CL,AL
/* 0d30451c */  JZ 0x0d306971
/* 0d304522 */  MOV qword ptr [R12],R15
/* 0d304526 */  MOV R13,R12
/* 0d304529 */  ADD R13,0x8
/* 0d30452d */  MOV RDI,R13
/* 0d304530 */  MOV RSI,R14
/* 0d304533 */  MOV RDX,R15
/* 0d304536 */  CALL 0x0eee2f00
/* 0d30453b */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d304541 */  MOV RAX,-0xff000000000001
/* 0d30454b */  AND R13,RAX
/* 0d30454e */  MOV R15,0x80000000000000
/* 0d304558 */  OR R13,R15
/* 0d30455b */  MOV R14,R13
/* 0d30455e */  MOV qword ptr [RSP + 0x8],R14
/* 0d304563 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d30456c */  MOV R14,qword ptr [RBP + 0x10]
/* 0d304570 */  TEST R14,R15
/* 0d304573 */  JZ 0x0d3045fa
/* 0d304579 */  MOV RAX,-0xff000000000001
/* 0d304583 */  AND R14,RAX
/* 0d304586 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d30458a */  LEA R13,[R15 + 0x9]
/* 0d30458e */  LEA RDI,[0xf5463b0]
/* 0d304595 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30459c */  MOV EDX,0x8
/* 0d3045a1 */  MOV RSI,R13
/* 0d3045a4 */  CALL qword ptr [RAX + 0x20]
/* 0d3045a7 */  MOV R12,RAX
/* 0d3045aa */  TEST RAX,RAX
/* 0d3045ad */  SETNZ AL
/* 0d3045b0 */  TEST R13,R13
/* 0d3045b3 */  SETZ CL
/* 0d3045b6 */  OR CL,AL
/* 0d3045b8 */  JZ 0x0d306983
/* 0d3045be */  MOV qword ptr [R12],R15
/* 0d3045c2 */  MOV R13,R12
/* 0d3045c5 */  ADD R13,0x8
/* 0d3045c9 */  MOV RDI,R13
/* 0d3045cc */  MOV RSI,R14
/* 0d3045cf */  MOV RDX,R15
/* 0d3045d2 */  CALL 0x0eee2f00
/* 0d3045d7 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3045dd */  MOV RAX,-0xff000000000001
/* 0d3045e7 */  AND R13,RAX
/* 0d3045ea */  MOV R15,0x80000000000000
/* 0d3045f4 */  OR R13,R15
/* 0d3045f7 */  MOV R14,R13
/* 0d3045fa */  MOV qword ptr [RSP + 0x10],R14
/* 0d3045ff */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d304607 */  MOV RAX,R13
/* 0d30460a */  AND RAX,R15
/* 0d30460d */  JNZ 0x0d304620
/* 0d30460f */  TEST R13,RBX
/* 0d304612 */  JZ 0x0d30468b
/* 0d304614 */  MOV RCX,R13
/* 0d304617 */  SHR RCX,0x30
/* 0d30461b */  AND ECX,0x7f
/* 0d30461e */  JMP 0x0d304639
/* 0d304620 */  MOV RCX,R13
/* 0d304623 */  MOV RDX,-0xff000000000001
/* 0d30462d */  AND RCX,RDX
/* 0d304630 */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d304634 */  TEST RCX,RCX
/* 0d304637 */  JZ 0x0d30468b
/* 0d304639 */  CMP RCX,0x4
/* 0d30463d */  JNZ 0x0d30468b
/* 0d30463f */  MOV RCX,R13
/* 0d304642 */  MOV RDX,-0xff000000000001
/* 0d30464c */  AND RCX,RDX
/* 0d30464f */  CMP dword ptr [RCX],0x61746562
/* 0d304655 */  JNZ 0x0d30468b
/* 0d304657 */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d30465f */  CMP ECX,0x270f
/* 0d304665 */  JNZ 0x0d30468b
/* 0d304667 */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d30466f */  CMP ECX,0x270f
/* 0d304675 */  JNZ 0x0d30468b
/* 0d304677 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d30467f */  CMP ECX,0x270f
/* 0d304685 */  JZ 0x0d304871
/* 0d30468b */  MOV RCX,qword ptr [RBP + 0x8]
/* 0d30468f */  TEST RCX,R15
/* 0d304692 */  JNZ 0x0d3046a9
/* 0d304694 */  TEST RCX,RBX
/* 0d304697 */  JZ 0x0d304871
/* 0d30469d */  MOV RDX,RCX
/* 0d3046a0 */  SHR RDX,0x30
/* 0d3046a4 */  AND EDX,0x7f
/* 0d3046a7 */  JMP 0x0d3046c6
/* 0d3046a9 */  MOV RDX,RCX
/* 0d3046ac */  MOV RSI,-0xff000000000001
/* 0d3046b6 */  AND RDX,RSI
/* 0d3046b9 */  MOV RDX,qword ptr [RDX + -0x8]
/* 0d3046bd */  TEST RDX,RDX
/* 0d3046c0 */  JZ 0x0d304871
/* 0d3046c6 */  CMP RDX,0x4
/* 0d3046ca */  JNZ 0x0d304871
/* 0d3046d0 */  MOV RDX,-0xff000000000001
/* 0d3046da */  AND RCX,RDX
/* 0d3046dd */  CMP dword ptr [RCX],0x61746562
/* 0d3046e3 */  JNZ 0x0d304871
/* 0d3046e9 */  MOVZX ECX,word ptr [RBP]
/* 0d3046ed */  CMP ECX,0x270f
/* 0d3046f3 */  JNZ 0x0d304871
/* 0d3046f9 */  MOVZX ECX,word ptr [RBP + 0x2]
/* 0d3046fd */  CMP ECX,0x270f
/* 0d304703 */  JNZ 0x0d304871
/* 0d304709 */  MOVZX ECX,word ptr [RBP + 0x4]
/* 0d30470d */  CMP ECX,0x270f
/* 0d304713 */  JNZ 0x0d304871
/* 0d304719 */  MOV RBX,qword ptr [RSP + 0xb8]
/* 0d304721 */  MOV RAX,qword ptr [RBX]
/* 0d304724 */  MOV qword ptr [RSP],RAX
/* 0d304728 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d30472d */  TEST RSI,R15
/* 0d304730 */  MOV RBP,-0xff000000000001
/* 0d30473a */  JZ 0x0d304754
/* 0d30473c */  AND RSI,RBP
/* 0d30473f */  ADD RSI,-0x8
/* 0d304743 */  LEA RDI,[0xf5463b0]
/* 0d30474a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304751 */  CALL qword ptr [RAX + 0x28]
/* 0d304754 */  MOV qword ptr [RSP + 0x8],0x0
/* 0d30475d */  MOV R14,qword ptr [RBX + 0x8]
/* 0d304761 */  MOV RAX,0x80000000000000
/* 0d30476b */  TEST R14,RAX
/* 0d30476e */  JZ 0x0d3047dd
/* 0d304770 */  AND R14,RBP
/* 0d304773 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304777 */  LEA R13,[R15 + 0x9]
/* 0d30477b */  LEA RDI,[0xf5463b0]
/* 0d304782 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304789 */  MOV EDX,0x8
/* 0d30478e */  MOV RSI,R13
/* 0d304791 */  CALL qword ptr [RAX + 0x20]
/* 0d304794 */  MOV R12,RAX
/* 0d304797 */  TEST RAX,RAX
/* 0d30479a */  SETNZ AL
/* 0d30479d */  TEST R13,R13
/* 0d3047a0 */  SETZ CL
/* 0d3047a3 */  OR CL,AL
/* 0d3047a5 */  JZ 0x0d306b85
/* 0d3047ab */  MOV qword ptr [R12],R15
/* 0d3047af */  MOV R13,R12
/* 0d3047b2 */  ADD R13,0x8
/* 0d3047b6 */  MOV RDI,R13
/* 0d3047b9 */  MOV RSI,R14
/* 0d3047bc */  MOV RDX,R15
/* 0d3047bf */  CALL 0x0eee2f00
/* 0d3047c4 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3047ca */  AND R13,RBP
/* 0d3047cd */  MOV RAX,0x80000000000000
/* 0d3047d7 */  OR R13,RAX
/* 0d3047da */  MOV R14,R13
/* 0d3047dd */  MOV qword ptr [RSP + 0x8],R14
/* 0d3047e2 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d3047e7 */  TEST RSI,RAX
/* 0d3047ea */  JZ 0x0d304804
/* 0d3047ec */  AND RSI,RBP
/* 0d3047ef */  ADD RSI,-0x8
/* 0d3047f3 */  LEA RDI,[0xf5463b0]
/* 0d3047fa */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304801 */  CALL qword ptr [RAX + 0x28]
/* 0d304804 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d30480d */  MOV R14,qword ptr [RBX + 0x10]
/* 0d304811 */  MOV R15,0x80000000000000
/* 0d30481b */  TEST R14,R15
/* 0d30481e */  JZ 0x0d304a80
/* 0d304824 */  AND R14,RBP
/* 0d304827 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d30482b */  LEA R13,[R15 + 0x9]
/* 0d30482f */  LEA RDI,[0xf5463b0]
/* 0d304836 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30483d */  MOV EDX,0x8
/* 0d304842 */  MOV RSI,R13
/* 0d304845 */  CALL qword ptr [RAX + 0x20]
/* 0d304848 */  MOV R12,RAX
/* 0d30484b */  TEST RAX,RAX
/* 0d30484e */  SETNZ AL
/* 0d304851 */  TEST R13,R13
/* 0d304854 */  SETZ CL
/* 0d304857 */  OR CL,AL
/* 0d304859 */  JNZ 0x0d304a4e
/* 0d30485f */  MOV ESI,0x8
/* 0d304864 */  MOV RDI,R13
/* 0d304867 */  CALL 0x0eec74c0
/* 0d30486c */  JMP 0x0d304a4e
/* 0d304871 */  TEST RAX,RAX
/* 0d304874 */  JNZ 0x0d304895
/* 0d304876 */  TEST R13,RBX
/* 0d304879 */  MOV RBP,-0xff000000000001
/* 0d304883 */  JZ 0x0d304a85
/* 0d304889 */  MOV RCX,R13
/* 0d30488c */  SHR RCX,0x30
/* 0d304890 */  AND ECX,0x7f
/* 0d304893 */  JMP 0x0d3048b2
/* 0d304895 */  MOV RCX,R13
/* 0d304898 */  MOV RBP,-0xff000000000001
/* 0d3048a2 */  AND RCX,RBP
/* 0d3048a5 */  MOV RCX,qword ptr [RCX + -0x8]
/* 0d3048a9 */  TEST RCX,RCX
/* 0d3048ac */  JZ 0x0d304a85
/* 0d3048b2 */  CMP RCX,0x4
/* 0d3048b6 */  JNZ 0x0d304a85
/* 0d3048bc */  MOV R14,R13
/* 0d3048bf */  AND R14,RBP
/* 0d3048c2 */  CMP dword ptr [R14],0x61746562
/* 0d3048c9 */  JNZ 0x0d304a85
/* 0d3048cf */  MOVZX ECX,word ptr [RSP + 0xf0]
/* 0d3048d7 */  CMP ECX,0x270f
/* 0d3048dd */  JNZ 0x0d304a85
/* 0d3048e3 */  MOVZX ECX,word ptr [RSP + 0xf2]
/* 0d3048eb */  CMP ECX,0x270f
/* 0d3048f1 */  JNZ 0x0d304a85
/* 0d3048f7 */  MOVZX ECX,word ptr [RSP + 0xf4]
/* 0d3048ff */  CMP ECX,0x270f
/* 0d304905 */  JNZ 0x0d304a85
/* 0d30490b */  MOV RCX,qword ptr [RSP + 0xf0]
/* 0d304913 */  MOV qword ptr [RSP],RCX
/* 0d304917 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d30491c */  TEST RSI,R15
/* 0d30491f */  JZ 0x0d304957
/* 0d304921 */  AND RSI,RBP
/* 0d304924 */  ADD RSI,-0x8
/* 0d304928 */  LEA RDI,[0xf5463b0]
/* 0d30492f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304936 */  CALL qword ptr [RAX + 0x28]
/* 0d304939 */  MOV R13,qword ptr [RSP + 0xf8]
/* 0d304941 */  MOV R14,R13
/* 0d304944 */  AND R14,RBP
/* 0d304947 */  MOV RAX,R13
/* 0d30494a */  MOV R15,0x80000000000000
/* 0d304954 */  AND RAX,R15
/* 0d304957 */  MOV qword ptr [RSP + 0x8],0x0
/* 0d304960 */  TEST RAX,RAX
/* 0d304963 */  JZ 0x0d3049cc
/* 0d304965 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304969 */  LEA R13,[R15 + 0x9]
/* 0d30496d */  LEA RDI,[0xf5463b0]
/* 0d304974 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30497b */  MOV EDX,0x8
/* 0d304980 */  MOV RSI,R13
/* 0d304983 */  CALL qword ptr [RAX + 0x20]
/* 0d304986 */  MOV R12,RAX
/* 0d304989 */  TEST RAX,RAX
/* 0d30498c */  SETNZ AL
/* 0d30498f */  TEST R13,R13
/* 0d304992 */  SETZ CL
/* 0d304995 */  OR CL,AL
/* 0d304997 */  JZ 0x0d306af5
/* 0d30499d */  MOV qword ptr [R12],R15
/* 0d3049a1 */  MOV R13,R12
/* 0d3049a4 */  ADD R13,0x8
/* 0d3049a8 */  MOV RDI,R13
/* 0d3049ab */  MOV RSI,R14
/* 0d3049ae */  MOV RDX,R15
/* 0d3049b1 */  CALL 0x0eee2f00
/* 0d3049b6 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d3049bc */  AND R13,RBP
/* 0d3049bf */  MOV R15,0x80000000000000
/* 0d3049c9 */  OR R13,R15
/* 0d3049cc */  MOV qword ptr [RSP + 0x8],R13
/* 0d3049d1 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d3049d6 */  TEST RSI,R15
/* 0d3049d9 */  JZ 0x0d3049f3
/* 0d3049db */  AND RSI,RBP
/* 0d3049de */  ADD RSI,-0x8
/* 0d3049e2 */  LEA RDI,[0xf5463b0]
/* 0d3049e9 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d3049f0 */  CALL qword ptr [RAX + 0x28]
/* 0d3049f3 */  MOV qword ptr [RSP + 0x10],0x0
/* 0d3049fc */  MOV R14,qword ptr [RSP + 0x100]
/* 0d304a04 */  MOV R15,0x80000000000000
/* 0d304a0e */  TEST R14,R15
/* 0d304a11 */  JZ 0x0d304a80
/* 0d304a13 */  AND R14,RBP
/* 0d304a16 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304a1a */  LEA R13,[R15 + 0x9]
/* 0d304a1e */  LEA RDI,[0xf5463b0]
/* 0d304a25 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304a2c */  MOV EDX,0x8
/* 0d304a31 */  MOV RSI,R13
/* 0d304a34 */  CALL qword ptr [RAX + 0x20]
/* 0d304a37 */  MOV R12,RAX
/* 0d304a3a */  TEST RAX,RAX
/* 0d304a3d */  SETNZ AL
/* 0d304a40 */  TEST R13,R13
/* 0d304a43 */  SETZ CL
/* 0d304a46 */  OR CL,AL
/* 0d304a48 */  JZ 0x0d306b3d
/* 0d304a4e */  MOV qword ptr [R12],R15
/* 0d304a52 */  MOV R13,R12
/* 0d304a55 */  ADD R13,0x8
/* 0d304a59 */  MOV RDI,R13
/* 0d304a5c */  MOV RSI,R14
/* 0d304a5f */  MOV RDX,R15
/* 0d304a62 */  CALL 0x0eee2f00
/* 0d304a67 */  MOV byte ptr [R12 + R15*0x1 + 0x8],0x0
/* 0d304a6d */  AND R13,RBP
/* 0d304a70 */  MOV R15,0x80000000000000
/* 0d304a7a */  OR R13,R15
/* 0d304a7d */  MOV R14,R13
/* 0d304a80 */  MOV qword ptr [RSP + 0x10],R14
/* 0d304a85 */  LEA RSI,[RSP + 0xf0]
/* 0d304a8d */  LEA RDI,[RSP + 0x160]
/* 0d304a95 */  MOV RDX,RSP
/* 0d304a98 */  MOV ECX,0x1
/* 0d304a9d */  CALL 0x0d6b3300
/* 0d304aa2 */  CMP qword ptr [RSP + 0xd8],0x0
/* 0d304aab */  JNZ 0x0d304ae4
/* 0d304aad */  LEA RDI,[0x12a4e2b]
/* 0d304ab4 */  LEA RSI,[0x1495f35]
/* 0d304abb */  LEA RCX,[0x13fa33d]
/* 0d304ac2 */  LEA R8,[0x148c0a9]
/* 0d304ac9 */  MOV EDX,0x16d
/* 0d304ace */  XOR EAX,EAX
/* 0d304ad0 */  CALL 0x0eeddcf0
/* 0d304ad5 */  TEST AL,AL
/* 0d304ad7 */  JZ 0x0d304ae4
/* 0d304ad9 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d304ae4 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d304aec */  TEST RAX,RAX
/* 0d304aef */  JZ 0x0d304b03
/* 0d304af1 */  CMP byte ptr [RAX],0x1
/* 0d304af4 */  JNZ 0x0d304b03
/* 0d304af6 */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d304afe */  JMP 0x0d304b84
/* 0d304b03 */  LEA RDI,[0x11b95c6]
/* 0d304b0a */  LEA RSI,[0x119d79e]
/* 0d304b11 */  LEA RCX,[0x13fa33d]
/* 0d304b18 */  LEA R8,[0x148c0a9]
/* 0d304b1f */  MOV EDX,0x16e
/* 0d304b24 */  XOR EAX,EAX
/* 0d304b26 */  CALL 0x0eeddcf0
/* 0d304b2b */  TEST AL,AL
/* 0d304b2d */  JZ 0x0d304b3a
/* 0d304b2f */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d304b3a */  MOV R13,qword ptr [RSP + 0xd8]
/* 0d304b42 */  CMP qword ptr [RSP + 0xc0],0x0
/* 0d304b4b */  JNZ 0x0d304b84
/* 0d304b4d */  LEA RDI,[0x1411d19]
/* 0d304b54 */  LEA RSI,[0x135b312]
/* 0d304b5b */  LEA RCX,[0x142bd41]
/* 0d304b62 */  LEA R8,[0x13f915e]
/* 0d304b69 */  MOV EDX,0x12c
/* 0d304b6e */  XOR EAX,EAX
/* 0d304b70 */  CALL 0x0eeddcf0
/* 0d304b75 */  TEST AL,AL
/* 0d304b77 */  JZ 0x0d304b84
/* 0d304b79 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d304b84 */  MOV RAX,qword ptr [RSP + 0xc0]
/* 0d304b8c */  CMP byte ptr [RAX],0x0
/* 0d304b8f */  JNZ 0x0d304bc8
/* 0d304b91 */  LEA RDI,[0x130991f]
/* 0d304b98 */  LEA RSI,[0x147828b]
/* 0d304b9f */  LEA RCX,[0x142bd41]
/* 0d304ba6 */  LEA R8,[0x13f915e]
/* 0d304bad */  MOV EDX,0x130
/* 0d304bb2 */  XOR EAX,EAX
/* 0d304bb4 */  CALL 0x0eeddcf0
/* 0d304bb9 */  TEST AL,AL
/* 0d304bbb */  JZ 0x0d304bc8
/* 0d304bbd */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0d304bc8 */  MOV R12,qword ptr [RSP + 0xd0]
/* 0d304bd0 */  LEA RDI,[0xf5463b0]
/* 0d304bd7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304bde */  MOV ESI,0x80
/* 0d304be3 */  CALL qword ptr [RAX + 0x10]
/* 0d304be6 */  MOV RBX,RAX
/* 0d304be9 */  TEST RAX,RAX
/* 0d304bec */  JZ 0x0d306757
/* 0d304bf2 */  MOV qword ptr [RSP + 0x60],RBX
/* 0d304bf7 */  MOV RBX,qword ptr [RSP + 0xf0]
/* 0d304bff */  MOV R14,qword ptr [RSP + 0xf8]
/* 0d304c07 */  MOV qword ptr [RSP + 0x1a0],RBX
/* 0d304c0f */  TEST R14,R15
/* 0d304c12 */  MOV qword ptr [RSP + 0x1c0],R12
/* 0d304c1a */  JNZ 0x0d304c21
/* 0d304c1c */  MOV RAX,R15
/* 0d304c1f */  JMP 0x0d304c98
/* 0d304c21 */  AND R14,RBP
/* 0d304c24 */  MOV R15,qword ptr [R14 + -0x8]
/* 0d304c28 */  LEA R12,[R15 + 0x9]
/* 0d304c2c */  LEA RDI,[0xf5463b0]
/* 0d304c33 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304c3a */  MOV EDX,0x8
/* 0d304c3f */  MOV RSI,R12
/* 0d304c42 */  CALL qword ptr [RAX + 0x20]
/* 0d304c45 */  MOV RBP,RAX
/* 0d304c48 */  TEST RAX,RAX
/* 0d304c4b */  SETNZ AL
/* 0d304c4e */  TEST R12,R12
/* 0d304c51 */  SETZ CL
/* 0d304c54 */  OR CL,AL
/* 0d304c56 */  JZ 0x0d306995
/* 0d304c5c */  MOV qword ptr [RBP],R15
/* 0d304c60 */  MOV R12,RBP
/* 0d304c63 */  ADD R12,0x8
/* 0d304c67 */  MOV RDI,R12
/* 0d304c6a */  MOV RSI,R14
/* 0d304c6d */  MOV RDX,R15
/* 0d304c70 */  CALL 0x0eee2f00
/* 0d304c75 */  MOV byte ptr [RBP + R15*0x1 + 0x8],0x0
/* 0d304c7b */  MOV RBP,-0xff000000000001
/* 0d304c85 */  AND R12,RBP
/* 0d304c88 */  MOV RAX,0x80000000000000
/* 0d304c92 */  OR R12,RAX
/* 0d304c95 */  MOV R14,R12
/* 0d304c98 */  MOV qword ptr [RSP + 0x1a8],R14
/* 0d304ca0 */  MOV qword ptr [RSP + 0x1b0],0x0
/* 0d304cac */  MOV R15,qword ptr [RSP + 0x100]
/* 0d304cb4 */  TEST R15,RAX
/* 0d304cb7 */  JZ 0x0d304d44
/* 0d304cbd */  MOV qword ptr [RSP + 0x158],R13
/* 0d304cc5 */  AND R15,RBP
/* 0d304cc8 */  MOV RBP,qword ptr [R15 + -0x8]
/* 0d304ccc */  LEA R13,[RBP + 0x9]
/* 0d304cd0 */  LEA RDI,[0xf5463b0]
/* 0d304cd7 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304cde */  MOV EDX,0x8
/* 0d304ce3 */  MOV RSI,R13
/* 0d304ce6 */  CALL qword ptr [RAX + 0x20]
/* 0d304ce9 */  MOV R12,RAX
/* 0d304cec */  TEST RAX,RAX
/* 0d304cef */  SETNZ AL
/* 0d304cf2 */  TEST R13,R13
/* 0d304cf5 */  SETZ CL
/* 0d304cf8 */  OR CL,AL
/* 0d304cfa */  JZ 0x0d3069a7
/* 0d304d00 */  MOV qword ptr [R12],RBP
/* 0d304d04 */  MOV R13,R12
/* 0d304d07 */  ADD R13,0x8
/* 0d304d0b */  MOV RDI,R13
/* 0d304d0e */  MOV RSI,R15
/* 0d304d11 */  MOV RDX,RBP
/* 0d304d14 */  CALL 0x0eee2f00
/* 0d304d19 */  MOV byte ptr [R12 + RBP*0x1 + 0x8],0x0
/* 0d304d1f */  MOV RAX,-0xff000000000001
/* 0d304d29 */  AND R13,RAX
/* 0d304d2c */  MOV RAX,0x80000000000000
/* 0d304d36 */  OR R13,RAX
/* 0d304d39 */  MOV R15,R13
/* 0d304d3c */  MOV R13,qword ptr [RSP + 0x158]
/* 0d304d44 */  MOVZX EAX,word ptr [RSP + 0x190]
/* 0d304d4c */  MOV word ptr [RSP + 0x2e8],AX
/* 0d304d54 */  MOVZX R12D,word ptr [RSP + 0x142]
/* 0d304d5d */  MOV qword ptr [RSP + 0x90],RBX
/* 0d304d65 */  LEA RBP,[RSP + 0x98]
/* 0d304d6d */  MOV qword ptr [RSP + 0x98],R14
/* 0d304d75 */  XORPS XMM0,XMM0
/* 0d304d78 */  MOVUPS xmmword ptr [RSP + 0x1a8],XMM0
/* 0d304d80 */  LEA R14,[RSP + 0xa0]
/* 0d304d88 */  MOV qword ptr [RSP + 0xa0],R15
/* 0d304d90 */  MOV RCX,qword ptr [RSP + 0x160]
/* 0d304d98 */  MOV qword ptr [RSP + 0x2b8],RCX
/* 0d304da0 */  MOVAPS XMM1,xmmword ptr [RSP + 0x160]
/* 0d304da8 */  MOVAPS XMM2,xmmword ptr [RSP + 0x170]
/* 0d304db0 */  MOVUPS xmmword ptr [RSP + 0x168],XMM0
/* 0d304db8 */  MOVAPS xmmword ptr [RSP + 0x20],XMM1
/* 0d304dbd */  MOVUPS xmmword ptr [RSP + 0x2c0],XMM0
/* 0d304dc5 */  MOV RCX,qword ptr [RSP + 0x178]
/* 0d304dcd */  MOV qword ptr [RSP + 0x2d0],RCX
/* 0d304dd5 */  MOVAPS xmmword ptr [RSP + 0x30],XMM2
/* 0d304dda */  MOV qword ptr [RSP + 0x2d8],0x0
/* 0d304de6 */  MOVAPS XMM1,xmmword ptr [RSP + 0x180]
/* 0d304dee */  MOVAPS xmmword ptr [RSP + 0x180],XMM0
/* 0d304df6 */  MOVAPS xmmword ptr [RSP + 0x40],XMM1
/* 0d304dfb */  MOV qword ptr [RSP + 0x2e0],0x0
/* 0d304e07 */  MOV word ptr [RSP + 0x50],AX
/* 0d304e0c */  LEA RDX,[RSP + 0x90]
/* 0d304e14 */  LEA RCX,[RSP + 0x20]
/* 0d304e19 */  MOV R15,qword ptr [RSP + 0x60]
/* 0d304e1e */  MOV RDI,R15
/* 0d304e21 */  MOV RSI,qword ptr [RSP + 0x1c0]
/* 0d304e29 */  CALL 0x0d6a8a30
/* 0d304e2e */  MOV RSI,qword ptr [RSP + 0x48]
/* 0d304e33 */  MOV RBX,0x80000000000000
/* 0d304e3d */  TEST RSI,RBX
/* 0d304e40 */  MOV RBP,-0xff000000000001
/* 0d304e4a */  JZ 0x0d304e64
/* 0d304e4c */  AND RSI,RBP
/* 0d304e4f */  ADD RSI,-0x8
/* 0d304e53 */  LEA RDI,[0xf5463b0]
/* 0d304e5a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304e61 */  CALL qword ptr [RAX + 0x28]
/* 0d304e64 */  MOV qword ptr [RSP + 0x48],0x0
/* 0d304e6d */  MOV RSI,qword ptr [RSP + 0x40]
/* 0d304e72 */  TEST RSI,RBX
/* 0d304e75 */  JZ 0x0d304e8f
/* 0d304e77 */  AND RSI,RBP
/* 0d304e7a */  ADD RSI,-0x8
/* 0d304e7e */  LEA RDI,[0xf5463b0]
/* 0d304e85 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304e8c */  CALL qword ptr [RAX + 0x28]
/* 0d304e8f */  MOV qword ptr [RSP + 0x40],0x0
/* 0d304e98 */  MOV RSI,qword ptr [RSP + 0x30]
/* 0d304e9d */  TEST RSI,RBX
/* 0d304ea0 */  JZ 0x0d304eba
/* 0d304ea2 */  AND RSI,RBP
/* 0d304ea5 */  ADD RSI,-0x8
/* 0d304ea9 */  LEA RDI,[0xf5463b0]
/* 0d304eb0 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304eb7 */  CALL qword ptr [RAX + 0x28]
/* 0d304eba */  MOV qword ptr [RSP + 0x30],0x0
/* 0d304ec3 */  MOV RSI,qword ptr [RSP + 0x28]
/* 0d304ec8 */  TEST RSI,RBX
/* 0d304ecb */  JZ 0x0d304ee5
/* 0d304ecd */  AND RSI,RBP
/* 0d304ed0 */  ADD RSI,-0x8
/* 0d304ed4 */  LEA RDI,[0xf5463b0]
/* 0d304edb */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304ee2 */  CALL qword ptr [RAX + 0x28]
/* 0d304ee5 */  MOV qword ptr [RSP + 0x28],0x0
/* 0d304eee */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0d304ef6 */  TEST RSI,RBX
/* 0d304ef9 */  JZ 0x0d304f13
/* 0d304efb */  AND RSI,RBP
/* 0d304efe */  ADD RSI,-0x8
/* 0d304f02 */  LEA RDI,[0xf5463b0]
/* 0d304f09 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304f10 */  CALL qword ptr [RAX + 0x28]
/* 0d304f13 */  MOV qword ptr [RSP + 0xa0],0x0
/* 0d304f1f */  MOV RSI,qword ptr [RSP + 0x98]
/* 0d304f27 */  TEST RSI,RBX
/* 0d304f2a */  JZ 0x0d304f44
/* 0d304f2c */  AND RSI,RBP
/* 0d304f2f */  ADD RSI,-0x8
/* 0d304f33 */  LEA RDI,[0xf5463b0]
/* 0d304f3a */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304f41 */  CALL qword ptr [RAX + 0x28]
/* 0d304f44 */  LEA RAX,[0xf460360]
/* 0d304f4b */  MOV qword ptr [R15],RAX
/* 0d304f4e */  MOV qword ptr [R15 + 0x70],R13
/* 0d304f52 */  MOV word ptr [R15 + 0x78],R12W
/* 0d304f57 */  MOV byte ptr [R15 + 0x7a],0x1
/* 0d304f5c */  MOV RSI,qword ptr [RSP + 0x188]
/* 0d304f64 */  MOV qword ptr [RSP + 0x20],R15
/* 0d304f69 */  TEST RSI,RBX
/* 0d304f6c */  JZ 0x0d304f86
/* 0d304f6e */  AND RSI,RBP
/* 0d304f71 */  ADD RSI,-0x8
/* 0d304f75 */  LEA RDI,[0xf5463b0]
/* 0d304f7c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304f83 */  CALL qword ptr [RAX + 0x28]
/* 0d304f86 */  MOV qword ptr [RSP + 0x188],0x0
/* 0d304f92 */  MOV RSI,qword ptr [RSP + 0x180]
/* 0d304f9a */  TEST RSI,RBX
/* 0d304f9d */  JZ 0x0d304fb7
/* 0d304f9f */  AND RSI,RBP
/* 0d304fa2 */  ADD RSI,-0x8
/* 0d304fa6 */  LEA RDI,[0xf5463b0]
/* 0d304fad */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304fb4 */  CALL qword ptr [RAX + 0x28]
/* 0d304fb7 */  MOV qword ptr [RSP + 0x180],0x0
/* 0d304fc3 */  MOV RSI,qword ptr [RSP + 0x170]
/* 0d304fcb */  TEST RSI,RBX
/* 0d304fce */  JZ 0x0d304fe8
/* 0d304fd0 */  AND RSI,RBP
/* 0d304fd3 */  ADD RSI,-0x8
/* 0d304fd7 */  LEA RDI,[0xf5463b0]
/* 0d304fde */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d304fe5 */  CALL qword ptr [RAX + 0x28]
/* 0d304fe8 */  MOV qword ptr [RSP + 0x170],0x0
/* 0d304ff4 */  MOV RSI,qword ptr [RSP + 0x168]
/* 0d304ffc */  TEST RSI,RBX
/* 0d304fff */  JZ 0x0d305019
/* 0d305001 */  AND RSI,RBP
/* 0d305004 */  ADD RSI,-0x8
/* 0d305008 */  LEA RDI,[0xf5463b0]
/* 0d30500f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d305016 */  CALL qword ptr [RAX + 0x28]
/* 0d305019 */  MOV RSI,qword ptr [RSP + 0x10]
/* 0d30501e */  TEST RSI,RBX
/* 0d305021 */  JZ 0x0d30503b
/* 0d305023 */  AND RSI,RBP
/* 0d305026 */  ADD RSI,-0x8
/* 0d30502a */  LEA RDI,[0xf5463b0]
/* 0d305031 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d305038 */  CALL qword ptr [RAX + 0x28]
/* 0d30503b */  MOV qword ptr [RSP + 0x10],0x0
/* 0d305044 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0d305049 */  TEST RSI,RBX
/* 0d30504c */  JZ 0x0d305066
/* 0d30504e */  AND RSI,RBP
/* 0d305051 */  ADD RSI,-0x8
/* 0d305055 */  LEA RDI,[0xf5463b0]
/* 0d30505c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d305063 */  CALL qword ptr [RAX + 0x28]
/* 0d305066 */  MOV RAX,qword ptr [RSP + 0x88]
/* 0d30506e */  MOV R14,qword ptr [RAX]
/* 0d305071 */  MOV RBX,qword ptr [RAX + 0x8]
/* 0d305075 */  CMP R14,RBX
/* 0d305078 */  JZ 0x0d30509c
/* 0d30507a */  ADD R15,0x38
/* 0d30507e */  NOP
/* 0d305080 */  MOV RDI,qword ptr [R14]
/* 0d305083 */  ADD RDI,0x20
/* 0d305087 */  MOV RSI,R15
/* 0d30508a */  CALL 0x04fa7a10
/* 0d30508f */  TEST AL,AL
/* 0d305091 */  JZ 0x0d30509c
/* 0d305093 */  ADD R14,0x8
/* 0d305097 */  CMP R14,RBX
/* 0d30509a */  JNZ 0x0d305080
/* 0d30509c */  LEA RDX,[RSP + 0x20]
/* 0d3050a1 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0d3050a9 */  MOV RSI,R14
/* 0d3050ac */  CALL 0x0d6af860
/* 0d3050b1 */  MOV R14,0x80000000000000
/* 0d3050bb */  MOV RDI,qword ptr [RSP + 0x20]
/* 0d3050c0 */  MOV qword ptr [RSP + 0x20],0x0
/* 0d3050c9 */  TEST RDI,RDI
/* 0d3050cc */  MOV RBX,qword ptr [RSP + 0x18]
/* 0d3050d1 */  JZ 0x0d3050d9
/* 0d3050d3 */  MOV RAX,qword ptr [RDI]
/* 0d3050d6 */  CALL qword ptr [RAX + 0x8]
/* 0d3050d9 */  MOV byte ptr [RSP + 0x140],0x0
/* 0d3050e1 */  LEA RDI,[RSP + 0xb0]
/* 0d3050e9 */  CALL 0x0d307740
/* 0d3050ee */  MOV RSI,qword ptr [RSP + 0x80]
/* 0d3050f6 */  TEST RSI,R14
/* 0d3050f9 */  JZ 0x0d305113
/* 0d3050fb */  AND RSI,RBP
/* 0d3050fe */  ADD RSI,-0x8
/* 0d305102 */  LEA RDI,[0xf5463b0]
/* 0d305109 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d305110 */  CALL qword ptr [RAX + 0x28]
/* 0d305113 */  MOV qword ptr [RSP + 0x80],0x0
/* 0d30511f */  MOV RSI,qword ptr [RSP + 0x78]
/* 0d305124 */  TEST RSI,R14
/* 0d305127 */  JZ 0x0d305141
/* 0d305129 */  AND RSI,RBP
/* 0d30512c */  ADD RSI,-0x8
/* 0d305130 */  LEA RDI,[0xf5463b0]
/* 0d305137 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0d30513e */  CALL qword ptr [RAX + 0x28]
/* 0d305141 */  XORPS XMM0,XMM0
/* 0d305144 */  MOV R14,qword ptr [RBX + 0x3a0]
/* 0d30514b */  MOVUPS xmmword ptr [RBX + 0x398],XMM0
/* 0d305152 */  TEST R14,R14
/* 0d305155 */  JZ 0x0d30517a
/* 0d305157 */  MOV RAX,-0x1
/* 0d30515e */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d305164 */  TEST RAX,RAX
/* 0d305167 */  JNZ 0x0d30517a
/* 0d305169 */  MOV RAX,qword ptr [R14]
/* 0d30516c */  MOV RDI,R14
/* 0d30516f */  CALL qword ptr [RAX + 0x10]
/* 0d305172 */  MOV RDI,R14
/* 0d305175 */  CALL 0x0412c2d0
/* 0d30517a */  MOV qword ptr [RBX + 0x3a8],0x0
/* 0d305185 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0d30518a */  MOV RAX,qword ptr [RCX + 0x8]
/* 0d30518e */  MOV RCX,qword ptr [RCX + 0x10]
/* 0d305192 */  TEST RCX,RCX
/* 0d305195 */  JZ 0x0d30519c
/* 0d305197 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d30519c */  MOV qword ptr [RBX + 0x398],RAX
/* 0d3051a3 */  MOV R14,qword ptr [RBX + 0x3a0]
/* 0d3051aa */  MOV qword ptr [RBX + 0x3a0],RCX
/* 0d3051b1 */  TEST R14,R14
/* 0d3051b4 */  JZ 0x0d3051e4
/* 0d3051b6 */  MOV RAX,-0x1
/* 0d3051bd */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3051c3 */  TEST RAX,RAX
/* 0d3051c6 */  JNZ 0x0d3051d9
/* 0d3051c8 */  MOV RAX,qword ptr [R14]
/* 0d3051cb */  MOV RDI,R14
/* 0d3051ce */  CALL qword ptr [RAX + 0x10]
/* 0d3051d1 */  MOV RDI,R14
/* 0d3051d4 */  CALL 0x0412c2d0
/* 0d3051d9 */  MOV RAX,qword ptr [RSP + 0x2b0]
/* 0d3051e1 */  MOV RAX,qword ptr [RAX]
/* 0d3051e4 */  TEST RAX,RAX
/* 0d3051e7 */  JZ 0x0d3051f5
/* 0d3051e9 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0d3051ee */  MOV qword ptr [RBX + 0x3a8],RAX
/* 0d3051f5 */  MOV RAX,qword ptr [RSP + 0x1b8]
/* 0d3051fd */  MOV RDX,qword ptr [RAX]
/* 0d305200 */  MOV qword ptr [RSP + 0x2f0],RDX
/* 0d305208 */  MOV RCX,qword ptr [RAX + 0x8]
/* 0d30520c */  MOV qword ptr [RSP + 0x2f8],RCX
/* 0d305214 */  TEST RCX,RCX
/* 0d305217 */  JZ 0x0d30525a
/* 0d305219 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d30521e */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0d305226 */  MOV RAX,qword ptr [RAX]
/* 0d305229 */  MOV qword ptr [RSP + 0x300],RAX
/* 0d305231 */  MOV word ptr [RSP + 0x1c8],0xc
/* 0d30523b */  LEA R12,[RSP + 0x1d0]
/* 0d305243 */  MOV qword ptr [RSP + 0x1d0],RDX
/* 0d30524b */  MOV qword ptr [RSP + 0x1d8],RCX
/* 0d305253 */  INC.LOCK qword ptr [RCX + 0x8]
/* 0d305258 */  JMP 0x0d30528f
/* 0d30525a */  MOV RAX,qword ptr [RSP + 0xa8]
/* 0d305262 */  MOV RAX,qword ptr [RAX]
/* 0d305265 */  MOV qword ptr [RSP + 0x300],RAX
/* 0d30526d */  MOV word ptr [RSP + 0x1c8],0xc
/* 0d305277 */  LEA R12,[RSP + 0x1d0]
/* 0d30527f */  MOV qword ptr [RSP + 0x1d0],RDX
/* 0d305287 */  MOV qword ptr [RSP + 0x1d8],RCX
/* 0d30528f */  MOV qword ptr [RSP + 0x1e0],RAX
/* 0d305297 */  LEA RBX,[RSP + 0x1e8]
/* 0d30529f */  MOV qword ptr [RSP + 0x1e8],0x0
/* 0d3052ab */  MOV word ptr [RSP + 0x1f0],0x100
/* 0d3052b5 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0d3052ba */  MOV R15,qword ptr [RAX + 0x3b0]
/* 0d3052c1 */  TEST R15,R15
/* 0d3052c4 */  JZ 0x0d305390
/* 0d3052ca */  MOV word ptr [R15],0xc
/* 0d3052d0 */  LEA RAX,[RSP + 0x1c8]
/* 0d3052d8 */  CMP R15,RAX
/* 0d3052db */  JZ 0x0d305376
/* 0d3052e1 */  XORPS XMM1,XMM1
/* 0d3052e4 */  MOV R14,qword ptr [R15 + 0x10]
/* 0d3052e8 */  MOVUPS xmmword ptr [R15 + 0x8],XMM1
/* 0d3052ed */  TEST R14,R14
/* 0d3052f0 */  JZ 0x0d305318
/* 0d3052f2 */  MOV RAX,-0x1
/* 0d3052f9 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d3052ff */  TEST RAX,RAX
/* 0d305302 */  JNZ 0x0d305318
/* 0d305304 */  MOV RAX,qword ptr [R14]
/* 0d305307 */  MOV RDI,R14
/* 0d30530a */  CALL qword ptr [RAX + 0x10]
/* 0d30530d */  MOV RDI,R14
/* 0d305310 */  CALL 0x0412c2d0
/* 0d305315 */  XORPS XMM1,XMM1
/* 0d305318 */  MOV qword ptr [R15 + 0x18],0x0
/* 0d305320 */  MOVUPS XMM0,xmmword ptr [RSP + 0x1d0]
/* 0d305328 */  MOVUPS xmmword ptr [R12],XMM1
/* 0d30532d */  MOV R14,qword ptr [R15 + 0x10]
/* 0d305331 */  MOVUPS xmmword ptr [R15 + 0x8],XMM0
/* 0d305336 */  TEST R14,R14
/* 0d305339 */  JZ 0x0d30535e
/* 0d30533b */  MOV RAX,-0x1
/* 0d305342 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0d305348 */  TEST RAX,RAX
/* 0d30534b */  JNZ 0x0d30535e
/* 0d30534d */  MOV RAX,qword ptr [R14]
/* 0d305350 */  MOV RDI,R14
/* 0d305353 */  CALL qword ptr [RAX + 0x10]
/* 0d305356 */  MOV RDI,R14
/* 0d305359 */  CALL 0x0412c2d0
/* 0d30535e */  MOV RAX,qword ptr [RSP + 0x1e0]
/* 0d305366 */  MOV qword ptr [R15 + 0x18],RAX
; truncated
