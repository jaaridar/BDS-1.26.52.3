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
      func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
            func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
            func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
            func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
            func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
          func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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
      func_0x0412c2d0(plVar15);
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
        func_0x0412c2d0(plVar15);
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


