/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb2b9ae0 (ELF vaddr 0xb1b9ae0)
 * Label: caller-of-callee
 * Body:  [[0b2b9ae0, 0b2b9f03] [0b2b9f10, 0b2b9f7e] [0b2b9f80, 0b2ba66d] [0b2ba670, 0b2ba6ad] [0b2ba6b0, 0b2baa94] [0b2babb6, 0b2bac1e] [0b2bac48, 0b2bacb6]]
 * Ghidra: FUN_0b2b9ae0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b2b9ae0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  uint *puVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  undefined4 *puVar26;
  byte *pbVar27;
  ulong uVar28;
  undefined8 **ppuVar29;
  bool bVar30;
  undefined1 uStack_1f9;
  long lStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined2 uStack_1e2;
  undefined1 uStack_1e0;
  undefined5 uStack_1df;
  undefined2 uStack_1da;
  long *plStack_1d8;
  long *plStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 *puStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte *pbStack_170;
  byte *pbStack_168;
  long lStack_160;
  long *plStack_158;
  ulong auStack_150 [2];
  undefined4 *puStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined4 *puStack_128;
  uint *puStack_120;
  ulong uStack_118;
  byte *pbStack_110;
  long lStack_108;
  byte *pbStack_100;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar6 = (long *)*param_1;
  puStack_128 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_128 == (undefined4 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar17 = _UNK_014a266a;
  uStack_138 = 0x21;
  uStack_130 = 0x1f;
  *(ulong *)((long)puStack_128 + 0xf) = CONCAT71(_UNK_014a2663,DAT_014a2662);
  *(undefined8 *)((long)puStack_128 + 0x17) = uVar17;
  uVar9 = _UNK_014a265f;
  uVar8 = _UNK_014a265b;
  uVar7 = _UNK_014a2657;
  *puStack_128 = _DAT_014a2653;
  puStack_128[1] = uVar7;
  puStack_128[2] = uVar8;
  puStack_128[3] = uVar9;
  *(undefined1 *)((long)puStack_128 + 0x1f) = 0;
  (**(code **)(*plVar6 + 0x10))(plVar6,&uStack_138);
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  lVar23 = *param_1;
  plStack_1d0 = (long *)param_1[1];
  if (plStack_1d0 != (long *)0x0) {
    LOCK();
    plStack_1d0[1] = plStack_1d0[1] + 1;
    UNLOCK();
    LOCK();
    plStack_1d0[1] = plStack_1d0[1] + 1;
    UNLOCK();
  }
  uStack_1da = 0;
  plStack_1d8 = (long *)0x0;
  uStack_1f0 = CONCAT31((int3)_DAT_0125b9c2,0x2a);
  uStack_1ec._1_3_ = (undefined3)_UNK_0125b9c6;
  uStack_1ec = CONCAT31(uStack_1ec._1_3_,(char)((uint)_DAT_0125b9c2 >> 0x18));
  uStack_1e8._1_3_ = (undefined3)_UNK_0125b9ca;
  uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(char)((uint)_UNK_0125b9c6 >> 0x18));
  uStack_1e4 = (undefined1)((uint)_UNK_0125b9ca >> 0x18);
  uStack_1e3 = (undefined1)_UNK_0125b9ce;
  uStack_1e2 = 0x6e65;
  uStack_1e0 = 0x74;
  uStack_1df = 0x7365697469;
  lStack_1f8 = 0x2934b00f9a7830fc;
  lStack_78 = 0;
  uStack_70 = 0;
  pbStack_f0 = (byte *)0x0;
  puStack_f8 = (undefined8 *)&UNK_0f29c378;
  pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pbVar15 == (byte *)0x0) {
    FUN_0eec74c0(0x1d0,0);
  }
  puStack_1b8 = puStack_f8;
  pbVar15[8] = 0;
  pbVar15[9] = 0;
  pbVar15[10] = 0;
  pbVar15[0xb] = 0;
  pbVar15[0xc] = 0;
  pbVar15[0xd] = 0;
  pbVar15[0xe] = 0;
  pbVar15[0xf] = 0;
  pbVar15[0x10] = 0;
  pbVar15[0x11] = 0;
  pbVar15[0x12] = 0;
  pbVar15[0x13] = 0;
  pbVar15[0x14] = 0;
  pbVar15[0x15] = 0;
  pbVar15[0x16] = 0;
  pbVar15[0x17] = 0;
  *(undefined **)pbVar15 = &UNK_0f29c150;
  puStack_f8 = (undefined8 *)0x0;
  pbStack_1b0 = pbStack_f0;
  *(undefined **)(pbVar15 + 0x20) = &UNK_0f2ccd78;
  pbVar15[0x28] = 0;
  pbVar15[0x29] = 0;
  pbVar15[0x2a] = 0;
  pbVar15[0x2b] = 0;
  pbVar15[0x2c] = 0;
  pbVar15[0x2d] = 0;
  pbVar15[0x2e] = 0;
  pbVar15[0x2f] = 0;
  pbVar15[0x30] = 0;
  pbVar15[0x31] = 0;
  pbVar15[0x32] = 0;
  pbVar15[0x33] = 0;
  pbVar15[0x34] = 0;
  pbVar15[0x35] = 0;
  pbVar15[0x36] = 0;
  pbVar15[0x37] = 0;
  pbVar15[0x38] = 0;
  pbVar15[0x39] = 0;
  pbVar15[0x3a] = 0;
  pbVar15[0x3b] = 0;
  pbVar15[0x3c] = 0;
  pbVar15[0x3d] = 0;
  pbVar15[0x3e] = 0;
  pbVar15[0x3f] = 0;
  pbVar15[0x40] = 0;
  pbVar15[0x41] = 0;
  pbVar15[0x42] = 0;
  pbVar15[0x43] = 0;
  pbVar15[0x44] = 0;
  pbVar15[0x45] = 0;
  pbVar15[0x46] = 0;
  pbVar15[0x47] = 0;
  pbVar15[0x48] = 0;
  pbVar15[0x49] = 0;
  pbVar15[0x4a] = 0;
  pbVar15[0x4b] = 0;
  pbVar15[0x4c] = 0;
  pbVar15[0x4d] = 0;
  pbVar15[0x4e] = 0;
  pbVar15[0x4f] = 0;
  pbVar15[0x50] = 0;
  pbVar15[0x51] = 0;
  pbVar15[0x52] = 0;
  pbVar15[0x53] = 0;
  pbVar15[0x54] = 0;
  pbVar15[0x55] = 0;
  pbVar15[0x56] = 0;
  pbVar15[0x57] = 0;
  pbVar15[0x58] = 0;
  pbVar15[0x59] = 0;
  pbVar15[0x5a] = 0;
  pbVar15[0x5b] = 0;
  pbVar15[0x5c] = 0;
  pbVar15[0x5d] = 0;
  pbVar15[0x5e] = 0;
  pbVar15[0x5f] = 0;
  pbVar15[0x60] = 0;
  pbVar15[0x61] = 0;
  pbVar15[0x62] = 0;
  pbVar15[99] = 0;
  pbVar15[100] = 0;
  pbVar15[0x65] = 0;
  pbVar15[0x66] = 0;
  pbVar15[0x67] = 0;
  pbVar15[0x68] = 0;
  lStack_160 = lVar23;
  func_0x04aa75f0(pbVar15 + 0x70,&uStack_1f9,&UNK_01254d89);
  pbVar15[0x80] = 0;
  pbVar15[0x88] = 0;
  pbVar15[0x89] = 0;
  pbVar15[0x8a] = 0;
  pbVar15[0x8b] = 0;
  pbVar15[0x8c] = 0;
  pbVar15[0x8d] = 0;
  pbVar15[0x8e] = 0;
  pbVar15[0x8f] = 0;
  pbVar15[0x90] = 0;
  pbVar15[0x91] = 0;
  pbVar15[0x92] = 0;
  pbVar15[0x93] = 0;
  pbVar15[0x94] = 0;
  pbVar15[0x95] = 0;
  pbVar15[0x96] = 0;
  pbVar15[0x97] = 0;
  pbVar15[0x98] = 0;
  pbVar15[0x99] = 0;
  pbVar15[0x9a] = 0;
  pbVar15[0x9b] = 0;
  pbVar15[0x9c] = 0;
  pbVar15[0x9d] = 0;
  pbVar15[0x9e] = 0;
  pbVar15[0x9f] = 0;
  pbVar15[0xa0] = 0;
  pbVar15[0xa1] = 0;
  pbVar15[0xa2] = 0;
  pbVar15[0xa3] = 0;
  pbVar15[0xa4] = 0;
  pbVar15[0xa5] = 0;
  pbVar15[0xa6] = 0;
  pbVar15[0xa7] = 0;
  pbVar15[0xa8] = 0;
  pbVar15[0xa9] = 0;
  pbVar15[0xaa] = 0;
  pbVar15[0xab] = 0;
  pbVar15[0xac] = 0;
  pbVar15[0xad] = 0;
  pbVar15[0xae] = 0;
  pbVar15[0xaf] = 0;
  pbVar15[0xb0] = 0;
  pbVar15[0xb1] = 0;
  pbVar15[0xb2] = 0;
  pbVar15[0xb3] = 0;
  pbVar15[0xb4] = 0;
  pbVar15[0xb5] = 0;
  pbVar15[0xb6] = 0;
  pbVar15[0xb7] = 0;
  pbVar15[0xb8] = 0xff;
  pbVar15[0xb9] = 0xff;
  pbVar15[0xba] = 0xff;
  pbVar15[0xbb] = 0xff;
  pbVar15[0xbc] = 0;
  pbVar15[0xbd] = 0;
  pbVar15[0xbe] = 0;
  pbVar15[0xbf] = 0;
  pbVar15[0x130] = 0;
  pbVar15[0x131] = 0;
  pbVar15[0x132] = 0;
  pbVar15[0x133] = 0;
  pbVar15[0x134] = 0;
  pbVar15[0x135] = 0;
  pbVar15[0x136] = 0;
  pbVar15[0x137] = 0;
  pbVar15[0x138] = 0;
  pbVar15[0x139] = 0;
  pbVar15[0x13a] = 0;
  pbVar15[0x13b] = 0;
  pbVar15[0x13c] = 0;
  pbVar15[0x13d] = 0;
  pbVar15[0x13e] = 0;
  pbVar15[0x13f] = 0;
  pbVar15[0xc0] = 0;
  pbVar15[0xc1] = 0;
  pbVar15[0xc2] = 0;
  pbVar15[0xc3] = 0;
  pbVar15[0xc4] = 0;
  pbVar15[0xc5] = 0;
  pbVar15[0xc6] = 0;
  pbVar15[199] = 0;
  pbVar15[200] = 0;
  pbVar15[0xc9] = 0;
  pbVar15[0xca] = 0;
  pbVar15[0xcb] = 0;
  pbVar15[0xcc] = 0;
  pbVar15[0xcd] = 0;
  pbVar15[0xce] = 0;
  pbVar15[0xcf] = 0;
  pbVar15[0xd0] = 0;
  pbVar15[0xd1] = 0;
  pbVar15[0xd2] = 0;
  pbVar15[0xd3] = 0;
  pbVar15[0xd4] = 0;
  pbVar15[0xd5] = 0;
  pbVar15[0xd6] = 0;
  pbVar15[0xd7] = 0;
  pbVar15[0xd8] = 0;
  pbVar15[0xd9] = 0;
  pbVar15[0xda] = 0;
  pbVar15[0xdb] = 0;
  pbVar15[0xdc] = 0;
  pbVar15[0xdd] = 0;
  pbVar15[0xde] = 0;
  pbVar15[0xdf] = 0;
  pbVar15[0xe0] = 0;
  pbVar15[0xe1] = 0;
  pbVar15[0xe2] = 0;
  pbVar15[0xe3] = 0;
  pbVar15[0xe4] = 0;
  pbVar15[0xe5] = 0;
  pbVar15[0xe6] = 0;
  pbVar15[0xe7] = 0;
  pbVar15[0xe8] = 0;
  pbVar15[0xe9] = 0;
  pbVar15[0xea] = 0;
  pbVar15[0xeb] = 0;
  pbVar15[0xec] = 0;
  pbVar15[0xed] = 0;
  pbVar15[0xee] = 0;
  pbVar15[0xef] = 0;
  pbVar15[0xf0] = 0;
  pbVar15[0xf1] = 0;
  pbVar15[0xf2] = 0;
  pbVar15[0xf3] = 0;
  pbVar15[0xf4] = 0;
  pbVar15[0xf5] = 0;
  pbVar15[0xf6] = 0;
  pbVar15[0xf7] = 0;
  pbVar15[0xf8] = 0;
  pbVar15[0xf9] = 0;
  pbVar15[0xfa] = 0;
  pbVar15[0xfb] = 0;
  pbVar15[0xfc] = 0;
  pbVar15[0xfd] = 0;
  pbVar15[0xfe] = 0;
  pbVar15[0xff] = 0;
  *(undefined **)(pbVar15 + 0x20) = &UNK_0f29c1a0;
  pbVar15[0x178] = 0;
  pbVar15[0x179] = 0;
  pbVar15[0x17a] = 0;
  pbVar15[0x17b] = 0;
  pbVar15[0x17c] = 0;
  pbVar15[0x17d] = 0;
  pbVar15[0x17e] = 0;
  pbVar15[0x17f] = 0;
  pbVar15[0x180] = 0;
  pbVar15[0x181] = 0;
  pbVar15[0x182] = 0;
  pbVar15[0x183] = 0;
  pbVar15[0x184] = 0;
  pbVar15[0x185] = 0;
  pbVar15[0x186] = 0;
  pbVar15[0x187] = 0;
  *(byte **)(pbVar15 + 0x170) = pbVar15 + 0x178;
  ppuVar29 = (undefined8 **)(pbVar15 + 400);
  pbVar15[400] = 0;
  pbVar15[0x191] = 0;
  pbVar15[0x192] = 0;
  pbVar15[0x193] = 0;
  pbVar15[0x194] = 0;
  pbVar15[0x195] = 0;
  pbVar15[0x196] = 0;
  pbVar15[0x197] = 0;
  pbVar15[0x198] = 0;
  pbVar15[0x199] = 0;
  pbVar15[0x19a] = 0;
  pbVar15[0x19b] = 0;
  pbVar15[0x19c] = 0;
  pbVar15[0x19d] = 0;
  pbVar15[0x19e] = 0;
  pbVar15[0x19f] = 0;
  if (ppuVar29 != &puStack_1b8) {
    if (puStack_1b8 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_1b8)(&puStack_1b8,ppuVar29);
      puVar16 = puStack_1b8;
    }
    puStack_1b8 = (undefined8 *)0x0;
    *ppuVar29 = puVar16;
  }
  pbVar24 = pbVar15 + 0x20;
  puStack_120 = (uint *)(pbVar15 + 0x90);
  if (pbVar15 + 0x88 != &DAT_0f551f88) {
    if ((*puStack_120 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        *(undefined8 *)(pbVar15 + 0xa0) = _DAT_0f551fa0;
        uVar9 = uRam000000000f551f9c;
        uVar8 = _DAT_0f551f98;
        uVar7 = uRam000000000f551f94;
        *puStack_120 = _DAT_0f551f90;
        *(undefined4 *)(pbVar15 + 0x94) = uVar7;
        *(undefined4 *)(pbVar15 + 0x98) = uVar8;
        *(undefined4 *)(pbVar15 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puStack_120,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar30 = (_DAT_0f551f90 & 1) != 0;
      uVar17 = 0xf551f91;
      if (bVar30) {
        uVar17 = _DAT_0f551fa0;
      }
      uVar28 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar30) {
        uVar28 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puStack_120,uVar17,uVar28);
    }
  }
  *(undefined8 *)(pbVar15 + 0x88) = _DAT_0f551f88;
  pbVar15[0xa8] = 0;
  pbVar15[0xa9] = 0;
  pbVar15[0xaa] = 0;
  pbVar15[0xab] = 0;
  pbVar15[0xac] = 0;
  pbVar15[0xad] = 0;
  pbVar15[0xae] = 0;
  pbVar15[0xaf] = 0;
  if (puStack_1b8 != (undefined8 *)0x0) {
    (*(code *)puStack_1b8[1])(&puStack_1b8);
  }
  pbVar27 = pbVar15 + 8;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  LOCK();
  *(long *)pbVar27 = *(long *)pbVar27 + 1;
  UNLOCK();
  pbStack_1c0 = pbVar15 + 0x88;
  pbStack_100 = pbVar27;
  pbStack_1c8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_1c8 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  lVar23 = lStack_1f8;
  pbStack_1c8[8] = 0;
  pbStack_1c8[9] = 0;
  pbStack_1c8[10] = 0;
  pbStack_1c8[0xb] = 0;
  pbStack_1c8[0xc] = 0;
  pbStack_1c8[0xd] = 0;
  pbStack_1c8[0xe] = 0;
  pbStack_1c8[0xf] = 0;
  pbStack_1c8[0x10] = 0;
  pbStack_1c8[0x11] = 0;
  pbStack_1c8[0x12] = 0;
  pbStack_1c8[0x13] = 0;
  pbStack_1c8[0x14] = 0;
  pbStack_1c8[0x15] = 0;
  pbStack_1c8[0x16] = 0;
  pbStack_1c8[0x17] = 0;
  *(undefined **)pbStack_1c8 = &UNK_0f29c280;
  pbStack_1c8[0x30] = 0;
  pbStack_1c8[0x31] = 0;
  pbStack_1c8[0x32] = 0;
  pbStack_1c8[0x33] = 0;
  pbStack_1c8[0x34] = 0;
  pbStack_1c8[0x35] = 0;
  pbStack_1c8[0x36] = 0;
  pbStack_1c8[0x37] = 0;
  pbStack_1c8[0x38] = 0;
  pbStack_1c8[0x39] = 0;
  pbStack_1c8[0x3a] = 0;
  pbStack_1c8[0x3b] = 0;
  pbStack_1c8[0x3c] = 0;
  pbStack_1c8[0x3d] = 0;
  pbStack_1c8[0x3e] = 0;
  pbStack_1c8[0x3f] = 0;
  *(undefined **)(pbStack_1c8 + 0x20) = &UNK_0f29c2d0;
  *(byte **)(pbStack_1c8 + 0x70) = pbVar24;
  *(byte **)(pbStack_1c8 + 0x78) = pbVar15;
  LOCK();
  *(long *)(pbVar15 + 8) = *(long *)(pbVar15 + 8) + 1;
  UNLOCK();
  pbStack_168 = pbStack_1c8 + 8;
  uStack_118 = *(ulong *)(lStack_160 + 0xb8);
  uVar28 = *(ulong *)(lStack_160 + 0xc0);
  pbVar21 = pbStack_1c8;
  pbVar27 = pbVar15;
  pbStack_170 = pbStack_1c8;
  pbStack_110 = pbVar24;
  if (uStack_118 != uVar28) {
    if ((uStack_1f0 & 1) == 0) {
      pbVar21 = (byte *)(ulong)((byte)uStack_1f0 >> 1);
      lStack_108 = (long)&uStack_1f0 + 1;
    }
    else {
      pbVar21 = (byte *)CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)));
      lStack_108 = CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0));
    }
    plStack_158 = plStack_1d8;
    pbVar27 = (byte *)&lStack_1f8;
    lVar19 = uStack_118 + 0x19;
    do {
      if (*(long *)(lVar19 + -9) == lVar23) {
        if ((*(byte **)(lVar19 + 0x17) == pbVar27) && ((long *)(lVar19 + -9) == plStack_158)) {
LAB_0b2ba3c7:
          puVar26 = (undefined4 *)(lVar19 + -0x19);
          pbVar27 = pbStack_170;
          goto LAB_0b2ba3d3;
        }
        bVar5 = *(byte *)(lVar19 + -1);
        if ((bVar5 & 1) == 0) {
          pbVar24 = (byte *)(ulong)(bVar5 >> 1);
        }
        else {
          pbVar24 = *(byte **)(lVar19 + 7);
        }
        if (pbVar24 == pbVar21) {
          lVar18 = lVar19;
          if ((bVar5 & 1) != 0) {
            lVar18 = *(long *)(lVar19 + 0xf);
          }
          iVar14 = func_0x0eee3000(lVar18,lStack_108,pbVar21);
          if (iVar14 == 0) {
            *(byte **)(lVar19 + 0x17) = pbVar27;
            plStack_1d8 = (long *)(lVar19 + -9);
            goto LAB_0b2ba3c7;
          }
        }
      }
      *(undefined8 *)(lVar19 + 0x17) = 0;
      uVar25 = lVar19 + 0x8f;
      lVar19 = lVar19 + 0xa8;
    } while (uVar25 != uVar28);
  }
  lVar23 = lStack_160;
  if (uVar28 < *(ulong *)(lStack_160 + 200)) {
    func_0x0b2ef040(uVar28);
    pbVar27 = (byte *)(uVar28 + 0xa8);
    *(byte **)(lVar23 + 0xc0) = pbVar27;
LAB_0b2ba240:
    *(byte **)(lVar23 + 0xc0) = pbVar27;
    func_0x0b63b6d0(*(undefined8 *)(pbVar27 + -0xa8),&lStack_1f8);
    lVar19 = *(long *)(lVar23 + 0xc0);
    *(undefined1 *)(lVar19 + -7) = *(undefined1 *)(lVar23 + 0x60);
    if ((long *)(lVar19 + -0x98) != &lStack_1f8) {
      puVar22 = (uint *)(lVar19 + -0x90);
      if ((*(byte *)puVar22 & 1) == 0) {
        if ((uStack_1f0 & 1) == 0) {
          *(ulong *)(lVar19 + -0x80) = CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0));
          *puVar22 = uStack_1f0;
          *(undefined4 *)(lVar19 + -0x8c) = uStack_1ec;
          *(undefined4 *)(lVar19 + -0x88) = uStack_1e8;
          *(uint *)(lVar19 + -0x84) = CONCAT22(uStack_1e2,CONCAT11(uStack_1e3,uStack_1e4));
        }
        else {
          FUN_04885070(puVar22,CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0)),
                       CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8))));
        }
      }
      else {
        bVar30 = (uStack_1f0 & 1) != 0;
        lVar18 = (long)&uStack_1f0 + 1;
        if (bVar30) {
          lVar18 = CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0));
        }
        uVar28 = (ulong)((byte)uStack_1f0 >> 1);
        if (bVar30) {
          uVar28 = CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,uStack_1e8)));
        }
        func_0x04885120(puVar22,lVar18,uVar28);
      }
    }
    *(long *)(lVar19 + -0x98) = lStack_1f8;
    *(undefined8 *)(lVar19 + -0x78) = 0;
    func_0x04aa9390(&puStack_1b8,&uStack_1f0,*(undefined1 *)(lVar23 + 0x60));
    lVar19 = *(long *)(lVar23 + 0xc0);
    func_0x04167a70(lVar19 + -0x70,&puStack_1b8);
    *(byte **)(lVar19 + -0x68) = pbStack_1b0;
    *(byte **)(lVar19 + -0x60) = pbStack_1a8;
    *(undefined8 **)(lVar19 + -0x58) = puStack_1a0;
    *(long **)(lVar19 + -0x50) = plStack_198;
    uVar7 = (undefined4)uStack_190;
    uVar8 = uStack_190._4_4_;
    uVar9 = (undefined4)uStack_188;
    uVar13 = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = (byte *)0x0;
    plVar6 = *(long **)(lVar19 + -0x40);
    *(undefined4 *)(lVar19 + -0x48) = uVar7;
    *(undefined4 *)(lVar19 + -0x44) = uVar8;
    *(undefined4 *)(lVar19 + -0x40) = uVar9;
    *(undefined4 *)(lVar19 + -0x3c) = uVar13;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar18 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    pbVar27 = pbStack_170;
    pbVar21 = uStack_188;
    *(undefined8 *)(lVar19 + -0x38) = uStack_180;
    if (uStack_188 != (byte *)0x0) {
      LOCK();
      pbVar24 = uStack_188 + 8;
      lVar19 = *(long *)pbVar24;
      *(long *)pbVar24 = *(long *)pbVar24 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*(long *)uStack_188 + 0x10))(uStack_188);
        func_0x0412c2d0(pbVar21);
      }
    }
    func_0x04167a40(&puStack_1b8);
    lVar23 = *(long *)(lVar23 + 0xc0);
    *(undefined1 *)(lVar23 + -8) = 0;
    puVar26 = (undefined4 *)(lVar23 + -0xa8);
LAB_0b2ba3d3:
    pbVar27 = pbVar27 + 0x20;
    pbVar24 = *(byte **)(puVar26 + 0x24);
    if (pbVar24 < *(byte **)(puVar26 + 0x26)) {
      pbVar24[0x10] = 0;
      pbVar24[0x11] = 0;
      pbVar24[0x12] = 0;
      pbVar24[0x13] = 0;
      pbVar24[0x14] = 0;
      pbVar24[0x15] = 0;
      pbVar24[0x16] = 0;
      pbVar24[0x17] = 0;
      pbVar24[0x18] = 0;
      pbVar24[0x19] = 0;
      pbVar24[0x1a] = 0;
      pbVar24[0x1b] = 0;
      pbVar24[0x1c] = 0;
      pbVar24[0x1d] = 0;
      pbVar24[0x1e] = 0;
      pbVar24[0x1f] = 0;
      pbVar24[0] = 0;
      pbVar24[1] = 0;
      pbVar24[2] = 0;
      pbVar24[3] = 0;
      pbVar24[4] = 0;
      pbVar24[5] = 0;
      pbVar24[6] = 0;
      pbVar24[7] = 0;
      pbVar24[8] = 0;
      pbVar24[9] = 0;
      pbVar24[10] = 0;
      pbVar24[0xb] = 0;
      pbVar24[0xc] = 0;
      pbVar24[0xd] = 0;
      pbVar24[0xe] = 0;
      pbVar24[0xf] = 0;
      pbVar24[0x20] = 0;
      pbVar24[0x21] = 0;
      pbVar24[0x22] = 0;
      pbVar24[0x23] = 0;
      pbVar24[0x24] = 0;
      pbVar24[0x25] = 0;
      pbVar24[0x26] = 0;
      pbVar24[0x27] = 0;
      if (pbVar24 != pbStack_1c0) {
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)(pbVar24 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar17 = *(undefined8 *)(puStack_120 + 2);
          *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)puStack_120;
          *(undefined8 *)(pbVar24 + 0x10) = uVar17;
        }
        else {
          FUN_04885070(pbVar24 + 8,*(undefined8 *)(pbVar15 + 0xa0),*(undefined8 *)(pbVar15 + 0x98));
        }
      }
      *(undefined8 *)pbVar24 = *(undefined8 *)pbStack_1c0;
      *(byte **)(pbVar24 + 0x28) = pbVar27;
      *(byte **)(pbVar24 + 0x30) = pbStack_1c8;
      LOCK();
      *(long *)(pbStack_1c8 + 8) = *(long *)(pbStack_1c8 + 8) + 1;
      UNLOCK();
      pbVar24 = pbVar24 + 0x38;
      *(byte **)(puVar26 + 0x24) = pbVar24;
      goto LAB_0b2ba707;
    }
    lVar23 = (long)pbVar24 - *(long *)(puVar26 + 0x22);
    uVar28 = (lVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar28 < 0x492492492492493) {
      lVar19 = (long)*(byte **)(puVar26 + 0x26) - *(long *)(puVar26 + 0x22) >> 3;
      uVar25 = lVar19 * -0x2492492492492492;
      if (uVar28 < uVar25) {
        uVar28 = uVar25;
      }
      plStack_198 = (long *)(puVar26 + 0x22);
      if (0x249249249249248 < (ulong)(lVar19 * 0x6db6db6db6db6db7)) {
        uVar28 = 0x492492492492492;
      }
      plStack_158 = plStack_198;
      if (uVar28 == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar28) goto LAB_0b2baa5e;
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0x38);
        if (puVar16 == (undefined8 *)0x0) {
          FUN_0eec74c0(uVar28 * 0x38,0);
          puVar16 = (undefined8 *)0x0;
        }
      }
      pbVar24 = (byte *)((long)puVar16 + lVar23);
      puStack_1a0 = puVar16 + uVar28 * 7;
      puVar4 = (undefined8 *)((long)puVar16 + lVar23 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar16 + lVar23) = 0;
      ((undefined8 *)((long)puVar16 + lVar23))[1] = 0;
      *(undefined8 *)((long)puVar16 + lVar23 + 0x20) = 0;
      pbStack_1a8 = pbVar24;
      puStack_1b8 = puVar16;
      pbStack_1b0 = pbVar24;
      if (pbVar24 != pbStack_1c0) {
        puVar22 = (uint *)((long)puVar16 + lVar23 + 8);
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)((long)puVar16 + lVar23 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar10 = puStack_120[1];
          uVar11 = puStack_120[2];
          uVar12 = puStack_120[3];
          *puVar22 = *puStack_120;
          *(uint *)((long)puVar16 + lVar23 + 0xc) = uVar10;
          *(uint *)((long)puVar16 + lVar23 + 0x10) = uVar11;
          *(uint *)((long)puVar16 + lVar23 + 0x14) = uVar12;
        }
        else {
          FUN_04885070(puVar22,*(undefined8 *)(pbVar15 + 0xa0),*(undefined8 *)(pbVar15 + 0x98));
        }
      }
      plVar6 = plStack_158;
      *(undefined8 *)pbVar24 = *(undefined8 *)pbStack_1c0;
      *(byte **)(pbVar24 + 0x28) = pbVar27;
      *(byte **)(pbVar24 + 0x30) = pbStack_1c8;
      LOCK();
      *(long *)(pbStack_1c8 + 8) = *(long *)(pbStack_1c8 + 8) + 1;
      UNLOCK();
      pbStack_1a8 = pbStack_1a8 + 0x38;
      puVar16 = *(undefined8 **)(puVar26 + 0x22);
      puVar4 = *(undefined8 **)(puVar26 + 0x24);
      pbVar27 = pbStack_1b0 + ((long)puVar16 - (long)puVar4);
      pbVar24 = pbVar27;
      puVar20 = puVar16;
      if ((long)puVar16 - (long)puVar4 != 0) {
        do {
          pbVar24[0x10] = 0;
          pbVar24[0x11] = 0;
          pbVar24[0x12] = 0;
          pbVar24[0x13] = 0;
          pbVar24[0x14] = 0;
          pbVar24[0x15] = 0;
          pbVar24[0x16] = 0;
          pbVar24[0x17] = 0;
          pbVar24[0x18] = 0;
          pbVar24[0x19] = 0;
          pbVar24[0x1a] = 0;
          pbVar24[0x1b] = 0;
          pbVar24[0x1c] = 0;
          pbVar24[0x1d] = 0;
          pbVar24[0x1e] = 0;
          pbVar24[0x1f] = 0;
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          pbVar24[8] = 0;
          pbVar24[9] = 0;
          pbVar24[10] = 0;
          pbVar24[0xb] = 0;
          pbVar24[0xc] = 0;
          pbVar24[0xd] = 0;
          pbVar24[0xe] = 0;
          pbVar24[0xf] = 0;
          pbVar24[0x20] = 0;
          pbVar24[0x21] = 0;
          pbVar24[0x22] = 0;
          pbVar24[0x23] = 0;
          pbVar24[0x24] = 0;
          pbVar24[0x25] = 0;
          pbVar24[0x26] = 0;
          pbVar24[0x27] = 0;
          *(undefined8 *)(pbVar24 + 0x18) = puVar20[3];
          uVar17 = puVar20[2];
          *(undefined8 *)(pbVar24 + 8) = puVar20[1];
          *(undefined8 *)(pbVar24 + 0x10) = uVar17;
          *(undefined2 *)(puVar20 + 1) = 0;
          *(undefined8 *)pbVar24 = *puVar20;
          uVar17 = puVar20[6];
          *(undefined8 *)(pbVar24 + 0x28) = puVar20[5];
          *(undefined8 *)(pbVar24 + 0x30) = uVar17;
          puVar20[5] = 0;
          puVar20[6] = 0;
          puVar20 = puVar20 + 7;
          pbVar24 = pbVar24 + 0x38;
        } while (puVar20 != puVar4);
        do {
          plVar2 = (long *)puVar16[6];
          if (plVar2 == (long *)0x0) {
LAB_0b2ba694:
            bVar5 = *(byte *)(puVar16 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar23 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar23 != 0) goto LAB_0b2ba694;
            (**(code **)(*plVar2 + 0x10))(plVar2);
            func_0x0412c2d0(plVar2);
            bVar5 = *(byte *)(puVar16 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar16[3],puVar16[1] & 0xfffffffffffffffe);
          }
          puVar16 = puVar16 + 7;
        } while (puVar16 != puVar4);
        puVar16 = (undefined8 *)*plVar6;
      }
      pbVar24 = pbStack_1a8;
      *(byte **)(puVar26 + 0x22) = pbVar27;
      *(byte **)(puVar26 + 0x24) = pbStack_1a8;
      lVar23 = *(long *)(puVar26 + 0x26);
      *(undefined8 **)(puVar26 + 0x26) = puStack_1a0;
      if (puVar16 != (undefined8 *)0x0) {
        func_0x0412a280(puVar16,lVar23 - (long)puVar16);
      }
LAB_0b2ba707:
      pbVar21 = pbStack_110;
      pbVar27 = pbStack_168;
      plVar6 = plStack_1d0;
      *(byte **)(puVar26 + 0x24) = pbVar24;
      uVar7 = *puVar26;
      uVar8 = puVar26[1];
      uVar9 = puVar26[2];
      uVar13 = puVar26[3];
      if (*(long *)(puVar26 + 2) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(puVar26 + 2) + 8);
        *plVar2 = *plVar2 + 1;
        UNLOCK();
      }
      plVar2 = *(long **)(pbVar15 + 0x78);
      *(undefined4 *)(pbVar15 + 0x70) = uVar7;
      *(undefined4 *)(pbVar15 + 0x74) = uVar8;
      *(undefined4 *)(pbVar15 + 0x78) = uVar9;
      *(undefined4 *)(pbVar15 + 0x7c) = uVar13;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar23 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          func_0x0412c2d0(plVar2);
        }
      }
      pbVar24 = pbStack_1c8;
      pbVar15[0x80] = *(byte *)((long)puVar26 + 0xa1);
      LOCK();
      lVar23 = *(long *)pbVar27;
      *(long *)pbVar27 = *(long *)pbVar27 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbStack_1c8 + 0x10))(pbStack_1c8);
        func_0x0412c2d0(pbVar24);
        LOCK();
        lVar23 = *(long *)pbStack_100;
        *(long *)pbStack_100 = *(long *)pbStack_100 + -1;
        UNLOCK();
        pbVar24 = pbStack_100;
      }
      else {
        LOCK();
        lVar23 = *(long *)pbStack_100;
        *(long *)pbStack_100 = *(long *)pbStack_100 + -1;
        UNLOCK();
        pbVar24 = pbStack_100;
      }
      pbStack_100 = pbVar24;
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
        func_0x0412c2d0(pbVar15);
        LOCK();
        lVar23 = *(long *)pbVar24;
        *(long *)pbVar24 = *(long *)pbVar24 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar23 = *(long *)pbVar24;
        *(long *)pbVar24 = *(long *)pbVar24 + -1;
        UNLOCK();
      }
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
        func_0x0412c2d0(pbVar15);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_1f0 & 1) != 0) {
        func_0x0412a280(CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0)),
                        CONCAT44(uStack_1ec,uStack_1f0) & 0xfffffffffffffffe);
      }
      ppuVar29 = (undefined8 **)(pbVar15 + 0x130);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar23 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      puStack_b8 = (undefined8 *)&UNK_0f29c390;
      uStack_b0 = 0;
      uStack_a8 = 0;
      if (ppuVar29 != &puStack_b8) {
        if ((*ppuVar29 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar29)[1])(ppuVar29), puStack_b8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_b8)(&puStack_b8,ppuVar29);
          puVar16 = puStack_b8;
        }
        else {
          puVar16 = (undefined8 *)0x0;
        }
        *ppuVar29 = puVar16;
      }
      puStack_140 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
      if (puStack_140 == (undefined4 *)0x0) {
        FUN_0eec74c0(0x70,0);
      }
      uVar17 = _UNK_011abf79;
      auStack_150[0] = 0x71;
      auStack_150[1] = 0x69;
      *(ulong *)((long)puStack_140 + 0x59) = CONCAT17(UNK_011abf78,_DAT_011abf71);
      *(undefined8 *)((long)puStack_140 + 0x61) = uVar17;
      uVar17 = CONCAT71(_DAT_011abf71,UNK_011abf70);
      *(undefined8 *)(puStack_140 + 0x14) = _DAT_011abf68;
      *(undefined8 *)(puStack_140 + 0x16) = uVar17;
      uVar17 = _UNK_011abf60;
      *(undefined8 *)(puStack_140 + 0x10) = _DAT_011abf58;
      *(undefined8 *)(puStack_140 + 0x12) = uVar17;
      uVar17 = _UNK_011abf50;
      *(undefined8 *)(puStack_140 + 0xc) = _DAT_011abf48;
      *(undefined8 *)(puStack_140 + 0xe) = uVar17;
      uVar17 = _UNK_011abf40;
      *(undefined8 *)(puStack_140 + 8) = _DAT_011abf38;
      *(undefined8 *)(puStack_140 + 10) = uVar17;
      uVar17 = _UNK_011abf30;
      *(undefined8 *)(puStack_140 + 4) = _DAT_011abf28;
      *(undefined8 *)(puStack_140 + 6) = uVar17;
      uVar9 = _UNK_011abf24;
      uVar8 = _UNK_011abf20;
      uVar7 = _UNK_011abf1c;
      *puStack_140 = _DAT_011abf18;
      puStack_140[1] = uVar7;
      puStack_140[2] = uVar8;
      puStack_140[3] = uVar9;
      *(undefined1 *)((long)puStack_140 + 0x69) = 0;
      (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21,auStack_150);
      if ((auStack_150[0] & 1) != 0) {
        func_0x0412a280(puStack_140,auStack_150[0] & 0xfffffffffffffffe);
      }
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar23 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      return;
    }
  }
  else {
    lVar19 = uVar28 - uStack_118;
    uVar28 = (lVar19 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar28) goto LAB_0b2baa68;
    lVar18 = (long)(*(ulong *)(lStack_160 + 200) - uStack_118) >> 3;
    uVar25 = lVar18 * -0x6186186186186186;
    if (uVar28 < uVar25) {
      uVar28 = uVar25;
    }
    plVar6 = (long *)(lStack_160 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar18 * -0x30c30c30c30c30c3)) {
      uVar28 = 0x186186186186186;
    }
    plStack_198 = plVar6;
    if (uVar28 == 0) {
      puVar16 = (undefined8 *)0x0;
LAB_0b2ba070:
      pbStack_1b0 = (byte *)(lVar19 + (long)puVar16);
      puStack_1a0 = puVar16 + uVar28 * 0x15;
      puStack_1b8 = puVar16;
      pbStack_1a8 = pbStack_1b0;
      func_0x0b2ef040(pbStack_1b0);
      pbVar27 = pbStack_1a8 + 0xa8;
      lVar19 = *(long *)(lVar23 + 0xb8);
      lVar23 = *(long *)(lVar23 + 0xc0);
      pbVar24 = pbStack_1b0 + (lVar19 - lVar23);
      if (lVar19 != lVar23) {
        lVar18 = 0;
        do {
          uVar17 = ((undefined8 *)(lVar19 + lVar18))[1];
          *(undefined8 *)(pbVar24 + lVar18) = *(undefined8 *)(lVar19 + lVar18);
          *(undefined8 *)(pbVar24 + lVar18 + 8) = uVar17;
          *(undefined8 *)(lVar19 + lVar18) = 0;
          ((undefined8 *)(lVar19 + lVar18))[1] = 0;
          pbVar21 = pbVar24 + lVar18 + 0x20;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21[8] = 0;
          pbVar21[9] = 0;
          pbVar21[10] = 0;
          pbVar21[0xb] = 0;
          pbVar21[0xc] = 0;
          pbVar21[0xd] = 0;
          pbVar21[0xe] = 0;
          pbVar21[0xf] = 0;
          pbVar21 = pbVar24 + lVar18 + 0x10;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21[8] = 0;
          pbVar21[9] = 0;
          pbVar21[10] = 0;
          pbVar21[0xb] = 0;
          pbVar21[0xc] = 0;
          pbVar21[0xd] = 0;
          pbVar21[0xe] = 0;
          pbVar21[0xf] = 0;
          pbVar21 = pbVar24 + lVar18 + 0x30;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          *(undefined8 *)(pbVar24 + lVar18 + 0x28) = *(undefined8 *)(lVar19 + 0x28 + lVar18);
          puVar26 = (undefined4 *)(lVar19 + 0x18 + lVar18);
          uVar7 = puVar26[1];
          uVar8 = puVar26[2];
          uVar9 = puVar26[3];
          pbVar21 = pbVar24 + lVar18 + 0x18;
          *(undefined4 *)pbVar21 = *puVar26;
          *(undefined4 *)(pbVar21 + 4) = uVar7;
          *(undefined4 *)(pbVar21 + 8) = uVar8;
          *(undefined4 *)(pbVar21 + 0xc) = uVar9;
          *(undefined2 *)(lVar19 + 0x18 + lVar18) = 0;
          *(undefined8 *)(pbVar24 + lVar18 + 0x10) = *(undefined8 *)(lVar19 + 0x10 + lVar18);
          func_0x04167a20(pbVar24 + lVar18 + 0x38,lVar19 + lVar18 + 0x38);
          puVar16 = (undefined8 *)(lVar19 + 0x40 + lVar18);
          uVar17 = puVar16[1];
          *(undefined8 *)(pbVar24 + lVar18 + 0x40) = *puVar16;
          *(undefined8 *)(pbVar24 + lVar18 + 0x40 + 8) = uVar17;
          puVar16 = (undefined8 *)(lVar19 + 0x50 + lVar18);
          uVar17 = puVar16[1];
          *(undefined8 *)(pbVar24 + lVar18 + 0x50) = *puVar16;
          *(undefined8 *)(pbVar24 + lVar18 + 0x50 + 8) = uVar17;
          puVar16 = (undefined8 *)(lVar19 + 0x60 + lVar18);
          uVar17 = puVar16[1];
          *(undefined8 *)(pbVar24 + lVar18 + 0x60) = *puVar16;
          *(undefined8 *)(pbVar24 + lVar18 + 0x60 + 8) = uVar17;
          puVar16 = (undefined8 *)(lVar19 + 0x60 + lVar18);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(pbVar24 + lVar18 + 0x70) = *(undefined8 *)(lVar19 + 0x70 + lVar18);
          puVar16 = (undefined8 *)(lVar19 + 0x78 + lVar18);
          uVar17 = puVar16[1];
          *(undefined8 *)(pbVar24 + lVar18 + 0x78) = *puVar16;
          *(undefined8 *)(pbVar24 + lVar18 + 0x78 + 8) = uVar17;
          pbVar21 = pbVar24 + lVar18 + 0x88;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          pbVar21[8] = 0;
          pbVar21[9] = 0;
          pbVar21[10] = 0;
          pbVar21[0xb] = 0;
          pbVar21[0xc] = 0;
          pbVar21[0xd] = 0;
          pbVar21[0xe] = 0;
          pbVar21[0xf] = 0;
          pbVar21 = pbVar24 + lVar18 + 0x98;
          pbVar21[0] = 0;
          pbVar21[1] = 0;
          pbVar21[2] = 0;
          pbVar21[3] = 0;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
          puVar26 = (undefined4 *)(lVar19 + 0x88 + lVar18);
          uVar7 = puVar26[1];
          uVar8 = puVar26[2];
          uVar9 = puVar26[3];
          pbVar21 = pbVar24 + lVar18 + 0x88;
          *(undefined4 *)pbVar21 = *puVar26;
          *(undefined4 *)(pbVar21 + 4) = uVar7;
          *(undefined4 *)(pbVar21 + 8) = uVar8;
          *(undefined4 *)(pbVar21 + 0xc) = uVar9;
          *(undefined8 *)(pbVar24 + lVar18 + 0x98) = *(undefined8 *)(lVar19 + 0x98 + lVar18);
          puVar16 = (undefined8 *)(lVar19 + 0x88 + lVar18);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar19 + 0x98 + lVar18) = 0;
          *(undefined2 *)(pbVar24 + lVar18 + 0xa0) = *(undefined2 *)(lVar19 + 0xa0 + lVar18);
          lVar3 = lVar19 + lVar18;
          lVar18 = lVar18 + 0xa8;
        } while (lVar3 + 0xa8 != lVar23);
        do {
          func_0x0b1ef180(lVar19);
          lVar19 = lVar19 + 0xa8;
        } while (lVar19 != lVar23);
        lVar19 = *plVar6;
      }
      lVar23 = lStack_160;
      *(byte **)(lStack_160 + 0xb8) = pbVar24;
      *(byte **)(lStack_160 + 0xc0) = pbVar27;
      lVar18 = *(long *)(lStack_160 + 200);
      *(undefined8 **)(lStack_160 + 200) = puStack_1a0;
      if (lVar19 != 0) {
        func_0x0412a280(lVar19,lVar18 - lVar19);
      }
      goto LAB_0b2ba240;
    }
    if (uVar28 < 0x186186186186187) {
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0xa8);
      if (puVar16 == (undefined8 *)0x0) {
        FUN_0eec74c0(uVar28 * 0xa8,0);
        puVar16 = (undefined8 *)0x0;
      }
      goto LAB_0b2ba070;
    }
LAB_0b2baa5e:
    func_0x04882eb0();
  }
  func_0x0b2ef280();
LAB_0b2baa68:
  uVar17 = func_0x0b2ef1b0();
  if ((*pbVar21 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar27 + 0x18),*(ulong *)(pbVar27 + 8) & 0xfffffffffffffffe);
  }
  func_0x0b2ef1c0(&puStack_1b8);
  pbVar24 = pbStack_1c8;
  LOCK();
  lVar23 = *(long *)pbStack_168;
  *(long *)pbStack_168 = *(long *)pbStack_168 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbStack_1c8 + 0x10))(pbStack_1c8);
    func_0x0412c2d0(pbVar24);
  }
  func_0x0b2ed8e0(pbVar15);
  func_0x0b2ed910(pbVar15);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_1f0 & 1) != 0) {
    func_0x0412a280(CONCAT26(uStack_1da,CONCAT51(uStack_1df,uStack_1e0)),
                    CONCAT44(uStack_1ec,uStack_1f0) & 0xfffffffffffffffe);
  }
  func_0x0b2bacc0(plStack_1d0);
  do {
    func_0x0b2bacc0(plStack_1d0);
    do {
      uVar17 = func_0x0eee2d70(uVar17);
    } while ((uStack_138 & 1) == 0);
    func_0x0412a280(puStack_128,uStack_138 & 0xfffffffffffffffe);
    uVar17 = func_0x0eee2d70(uVar17);
  } while( true );
}



/* ---- referenced strings ----
 * 0x11abf18  If true, all entities linked to this entity in a child relationship (eg. leashed) will also be d
 * 0x11abf28  ities linked to this entity in a child relationship (eg. leashed) will also be despawned.
 * 0x11abf38  this entity in a child relationship (eg. leashed) will also be despawned.
 * 0x11abf48   child relationship (eg. leashed) will also be despawned.
 * 0x11abf58  hip (eg. leashed) will also be despawned.
 * 0x11abf68  ) will also be despawned.
 * 0x11abf71  so be despawned.
 * 0x125b9c2  remove_child_entities
 * 0x14a2653  Despawns the Actor immediately.
 * 0x14a2662  tor immediately.
 */
