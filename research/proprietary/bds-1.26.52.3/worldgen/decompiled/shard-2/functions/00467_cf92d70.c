/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd092d70 (ELF vaddr 0xcf92d70)
 * Label: caller-of-callee
 * Body:  [[0d092d70, 0d093694] [0d0936a0, 0d09370b] [0d093710, 0d093e25] [0d093e30, 0d093e6c] [0d093e70, 0d0940f4] [0d0943c4, 0d094448]]
 * Ghidra: FUN_0d092d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d092d70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  ulong uVar28;
  byte *pbVar29;
  long *plVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  long lVar34;
  bool bVar35;
  undefined1 uStack_1c9;
  long *plStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  long *plStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  long *plStack_180;
  byte *pbStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  byte *pbStack_158;
  long *plStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  ulong auStack_138 [4];
  uint *puStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar30 = (long *)0xcbf29ce484222325;
  uVar21 = *param_2;
  plStack_108 = (long *)0x0;
  uStack_100 = _DAT_01d8fc18;
  uStack_f8 = _UNK_01d8fc20;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pbVar32 = (byte *)((long)&uStack_100 + 1);
  uVar17 = func_0x0eee2e90(pbVar32);
  if (uVar17 != 0) {
    uVar24 = (ulong)((uint)uVar17 & 7);
    if (7 < uVar17) {
      uVar17 = uVar17 & 0xfffffffffffffff8;
      do {
        plVar30 = (long *)(((((((((long)plVar30 * 0x100000001b3 ^ (ulong)*pbVar32) * 0x100000001b3 ^
                                (ulong)pbVar32[1]) * 0x100000001b3 ^ (ulong)pbVar32[2]) *
                               0x100000001b3 ^ (ulong)pbVar32[3]) * 0x100000001b3 ^
                             (ulong)pbVar32[4]) * 0x100000001b3 ^ (ulong)pbVar32[5]) * 0x100000001b3
                           ^ (ulong)pbVar32[6]) * 0x100000001b3 ^ (ulong)pbVar32[7]);
        pbVar32 = pbVar32 + 8;
        uVar17 = uVar17 - 8;
      } while (uVar17 != 0);
    }
    if (uVar24 != 0) {
      uVar17 = 0;
      do {
        plVar30 = (long *)((long)plVar30 * 0x100000001b3 ^ (ulong)pbVar32[uVar17]);
        uVar17 = uVar17 + 1;
      } while (uVar24 != uVar17);
    }
  }
  plStack_b8 = (long *)&UNK_0f450218;
  plStack_108 = plVar30;
  uStack_b0 = param_3;
  pbVar32 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (pbVar32 == (byte *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  pbVar32[8] = 0;
  pbVar32[9] = 0;
  pbVar32[10] = 0;
  pbVar32[0xb] = 0;
  pbVar32[0xc] = 0;
  pbVar32[0xd] = 0;
  pbVar32[0xe] = 0;
  pbVar32[0xf] = 0;
  pbVar32[0x10] = 0;
  pbVar32[0x11] = 0;
  pbVar32[0x12] = 0;
  pbVar32[0x13] = 0;
  pbVar32[0x14] = 0;
  pbVar32[0x15] = 0;
  pbVar32[0x16] = 0;
  pbVar32[0x17] = 0;
  *(undefined **)pbVar32 = &UNK_0f450030;
  plStack_1c8 = (long *)0x0;
  pbStack_1c0 = (byte *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_1c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_1c8);
    plStack_1c8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
  *(undefined **)(pbVar32 + 0x20) = &UNK_0f2ccd78;
  pbVar32[0x28] = 0;
  pbVar32[0x29] = 0;
  pbVar32[0x2a] = 0;
  pbVar32[0x2b] = 0;
  pbVar32[0x2c] = 0;
  pbVar32[0x2d] = 0;
  pbVar32[0x2e] = 0;
  pbVar32[0x2f] = 0;
  pbVar32[0x30] = 0;
  pbVar32[0x31] = 0;
  pbVar32[0x32] = 0;
  pbVar32[0x33] = 0;
  pbVar32[0x34] = 0;
  pbVar32[0x35] = 0;
  pbVar32[0x36] = 0;
  pbVar32[0x37] = 0;
  pbVar32[0x38] = 0;
  pbVar32[0x39] = 0;
  pbVar32[0x3a] = 0;
  pbVar32[0x3b] = 0;
  pbVar32[0x3c] = 0;
  pbVar32[0x3d] = 0;
  pbVar32[0x3e] = 0;
  pbVar32[0x3f] = 0;
  pbVar32[0x40] = 0;
  pbVar32[0x41] = 0;
  pbVar32[0x42] = 0;
  pbVar32[0x43] = 0;
  pbVar32[0x44] = 0;
  pbVar32[0x45] = 0;
  pbVar32[0x46] = 0;
  pbVar32[0x47] = 0;
  pbVar32[0x48] = 0;
  pbVar32[0x49] = 0;
  pbVar32[0x4a] = 0;
  pbVar32[0x4b] = 0;
  pbVar32[0x4c] = 0;
  pbVar32[0x4d] = 0;
  pbVar32[0x4e] = 0;
  pbVar32[0x4f] = 0;
  pbVar32[0x50] = 0;
  pbVar32[0x51] = 0;
  pbVar32[0x52] = 0;
  pbVar32[0x53] = 0;
  pbVar32[0x54] = 0;
  pbVar32[0x55] = 0;
  pbVar32[0x56] = 0;
  pbVar32[0x57] = 0;
  pbVar32[0x58] = 0;
  pbVar32[0x59] = 0;
  pbVar32[0x5a] = 0;
  pbVar32[0x5b] = 0;
  pbVar32[0x5c] = 0;
  pbVar32[0x5d] = 0;
  pbVar32[0x5e] = 0;
  pbVar32[0x5f] = 0;
  pbVar32[0x60] = 0;
  pbVar32[0x61] = 0;
  pbVar32[0x62] = 0;
  pbVar32[99] = 0;
  pbVar32[100] = 0;
  pbVar32[0x65] = 0;
  pbVar32[0x66] = 0;
  pbVar32[0x67] = 0;
  pbVar32[0x68] = 0;
  func_0x04aa75f0(pbVar32 + 0x70,&pbStack_178,&UNK_01254d89);
  pbVar32[0x80] = 0;
  pbVar20 = pbVar32 + 0x88;
  pbVar32[0x88] = 0;
  pbVar32[0x89] = 0;
  pbVar32[0x8a] = 0;
  pbVar32[0x8b] = 0;
  pbVar32[0x8c] = 0;
  pbVar32[0x8d] = 0;
  pbVar32[0x8e] = 0;
  pbVar32[0x8f] = 0;
  pbVar32[0x90] = 0;
  pbVar32[0x91] = 0;
  pbVar32[0x92] = 0;
  pbVar32[0x93] = 0;
  pbVar32[0x94] = 0;
  pbVar32[0x95] = 0;
  pbVar32[0x96] = 0;
  pbVar32[0x97] = 0;
  pbVar32[0x98] = 0;
  pbVar32[0x99] = 0;
  pbVar32[0x9a] = 0;
  pbVar32[0x9b] = 0;
  pbVar32[0x9c] = 0;
  pbVar32[0x9d] = 0;
  pbVar32[0x9e] = 0;
  pbVar32[0x9f] = 0;
  pbVar32[0xa0] = 0;
  pbVar32[0xa1] = 0;
  pbVar32[0xa2] = 0;
  pbVar32[0xa3] = 0;
  pbVar32[0xa4] = 0;
  pbVar32[0xa5] = 0;
  pbVar32[0xa6] = 0;
  pbVar32[0xa7] = 0;
  pbVar32[0xa8] = 0;
  pbVar32[0xa9] = 0;
  pbVar32[0xaa] = 0;
  pbVar32[0xab] = 0;
  pbVar32[0xac] = 0;
  pbVar32[0xad] = 0;
  pbVar32[0xae] = 0;
  pbVar32[0xaf] = 0;
  pbVar32[0xb0] = 0;
  pbVar32[0xb1] = 0;
  pbVar32[0xb2] = 0;
  pbVar32[0xb3] = 0;
  pbVar32[0xb4] = 0;
  pbVar32[0xb5] = 0;
  pbVar32[0xb6] = 0;
  pbVar32[0xb7] = 0;
  pbVar32[0xb8] = 0xff;
  pbVar32[0xb9] = 0xff;
  pbVar32[0xba] = 0xff;
  pbVar32[0xbb] = 0xff;
  pbVar32[0xbc] = 0;
  pbVar32[0xbd] = 0;
  pbVar32[0xbe] = 0;
  pbVar32[0xbf] = 0;
  pbVar32[0x130] = 0;
  pbVar32[0x131] = 0;
  pbVar32[0x132] = 0;
  pbVar32[0x133] = 0;
  pbVar32[0x134] = 0;
  pbVar32[0x135] = 0;
  pbVar32[0x136] = 0;
  pbVar32[0x137] = 0;
  pbVar32[0x138] = 0;
  pbVar32[0x139] = 0;
  pbVar32[0x13a] = 0;
  pbVar32[0x13b] = 0;
  pbVar32[0x13c] = 0;
  pbVar32[0x13d] = 0;
  pbVar32[0x13e] = 0;
  pbVar32[0x13f] = 0;
  pbVar32[0xc0] = 0;
  pbVar32[0xc1] = 0;
  pbVar32[0xc2] = 0;
  pbVar32[0xc3] = 0;
  pbVar32[0xc4] = 0;
  pbVar32[0xc5] = 0;
  pbVar32[0xc6] = 0;
  pbVar32[199] = 0;
  pbVar32[200] = 0;
  pbVar32[0xc9] = 0;
  pbVar32[0xca] = 0;
  pbVar32[0xcb] = 0;
  pbVar32[0xcc] = 0;
  pbVar32[0xcd] = 0;
  pbVar32[0xce] = 0;
  pbVar32[0xcf] = 0;
  pbVar32[0xd0] = 0;
  pbVar32[0xd1] = 0;
  pbVar32[0xd2] = 0;
  pbVar32[0xd3] = 0;
  pbVar32[0xd4] = 0;
  pbVar32[0xd5] = 0;
  pbVar32[0xd6] = 0;
  pbVar32[0xd7] = 0;
  pbVar32[0xd8] = 0;
  pbVar32[0xd9] = 0;
  pbVar32[0xda] = 0;
  pbVar32[0xdb] = 0;
  pbVar32[0xdc] = 0;
  pbVar32[0xdd] = 0;
  pbVar32[0xde] = 0;
  pbVar32[0xdf] = 0;
  pbVar32[0xe0] = 0;
  pbVar32[0xe1] = 0;
  pbVar32[0xe2] = 0;
  pbVar32[0xe3] = 0;
  pbVar32[0xe4] = 0;
  pbVar32[0xe5] = 0;
  pbVar32[0xe6] = 0;
  pbVar32[0xe7] = 0;
  pbVar32[0xe8] = 0;
  pbVar32[0xe9] = 0;
  pbVar32[0xea] = 0;
  pbVar32[0xeb] = 0;
  pbVar32[0xec] = 0;
  pbVar32[0xed] = 0;
  pbVar32[0xee] = 0;
  pbVar32[0xef] = 0;
  pbVar32[0xf0] = 0;
  pbVar32[0xf1] = 0;
  pbVar32[0xf2] = 0;
  pbVar32[0xf3] = 0;
  pbVar32[0xf4] = 0;
  pbVar32[0xf5] = 0;
  pbVar32[0xf6] = 0;
  pbVar32[0xf7] = 0;
  pbVar32[0xf8] = 0;
  pbVar32[0xf9] = 0;
  pbVar32[0xfa] = 0;
  pbVar32[0xfb] = 0;
  pbVar32[0xfc] = 0;
  pbVar32[0xfd] = 0;
  pbVar32[0xfe] = 0;
  pbVar32[0xff] = 0;
  *(undefined **)(pbVar32 + 0x20) = &UNK_0f450080;
  pplVar3 = (long **)(pbVar32 + 0x170);
  pbVar32[0x170] = 0;
  pbVar32[0x171] = 0;
  pbVar32[0x172] = 0;
  pbVar32[0x173] = 0;
  pbVar32[0x174] = 0;
  pbVar32[0x175] = 0;
  pbVar32[0x176] = 0;
  pbVar32[0x177] = 0;
  pbVar32[0x178] = 0;
  pbVar32[0x179] = 0;
  pbVar32[0x17a] = 0;
  pbVar32[0x17b] = 0;
  pbVar32[0x17c] = 0;
  pbVar32[0x17d] = 0;
  pbVar32[0x17e] = 0;
  pbVar32[0x17f] = 0;
  pbVar32[0x1b0] = 0;
  if (pplVar3 != &plStack_1c8) {
    if (plStack_1c8 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1c8)(&plStack_1c8,pplVar3);
      plVar30 = plStack_1c8;
    }
    plStack_1c8 = (long *)0x0;
    *pplVar3 = plVar30;
  }
  puVar25 = (uint *)(pbVar32 + 0x90);
  if (pbVar20 != &DAT_0f552108) {
    if ((*puVar25 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        *(undefined8 *)(pbVar32 + 0xa0) = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar25 = _DAT_0f552110;
        *(undefined4 *)(pbVar32 + 0x94) = uVar9;
        *(undefined4 *)(pbVar32 + 0x98) = uVar10;
        *(undefined4 *)(pbVar32 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar25,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar35 = (_DAT_0f552110 & 1) != 0;
      uVar27 = 0xf552111;
      if (bVar35) {
        uVar27 = _DAT_0f552120;
      }
      uVar17 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar35) {
        uVar17 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar25,uVar27,uVar17);
    }
  }
  pbVar33 = pbVar32 + 8;
  *(undefined8 *)(pbVar32 + 0x88) = _DAT_0f552108;
  pbVar32[0xa8] = 0;
  pbVar32[0xa9] = 0;
  pbVar32[0xaa] = 0;
  pbVar32[0xab] = 0;
  pbVar32[0xac] = 0;
  pbVar32[0xad] = 0;
  pbVar32[0xae] = 0;
  pbVar32[0xaf] = 0;
  if (plStack_1c8 != (long *)0x0) {
    (*(code *)plStack_1c8[1])(&plStack_1c8);
  }
  LOCK();
  *(long *)pbVar33 = *(long *)pbVar33 + 1;
  UNLOCK();
  pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar18 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar18 + 8) = 0;
  *(long *)((long)pbVar18 + 0x10) = 0;
  *(undefined **)pbVar18 = &UNK_0f450178;
  *(long *)((long)pbVar18 + 0x30) = 0;
  *(long *)((long)pbVar18 + 0x38) = 0;
  *(undefined **)((long)pbVar18 + 0x20) = &UNK_0f4501c8;
  *(byte **)((long)pbVar18 + 0x70) = pbVar32 + 0x20;
  *(byte **)((long)pbVar18 + 0x78) = pbVar32;
  LOCK();
  *(long *)(pbVar32 + 8) = *(long *)(pbVar32 + 8) + 1;
  UNLOCK();
  plStack_1c8 = (long *)((long)pbVar18 + 0x20);
  pbStack_1c0 = pbVar18;
  puVar19 = (undefined4 *)func_0x0cd30730(uVar21,&plStack_108,0);
  pbVar29 = *(byte **)(puVar19 + 0x24);
  if (pbVar29 < *(byte **)(puVar19 + 0x26)) {
    pbVar29[0x10] = 0;
    pbVar29[0x11] = 0;
    pbVar29[0x12] = 0;
    pbVar29[0x13] = 0;
    pbVar29[0x14] = 0;
    pbVar29[0x15] = 0;
    pbVar29[0x16] = 0;
    pbVar29[0x17] = 0;
    pbVar29[0x18] = 0;
    pbVar29[0x19] = 0;
    pbVar29[0x1a] = 0;
    pbVar29[0x1b] = 0;
    pbVar29[0x1c] = 0;
    pbVar29[0x1d] = 0;
    pbVar29[0x1e] = 0;
    pbVar29[0x1f] = 0;
    pbVar29[0] = 0;
    pbVar29[1] = 0;
    pbVar29[2] = 0;
    pbVar29[3] = 0;
    pbVar29[4] = 0;
    pbVar29[5] = 0;
    pbVar29[6] = 0;
    pbVar29[7] = 0;
    pbVar29[8] = 0;
    pbVar29[9] = 0;
    pbVar29[10] = 0;
    pbVar29[0xb] = 0;
    pbVar29[0xc] = 0;
    pbVar29[0xd] = 0;
    pbVar29[0xe] = 0;
    pbVar29[0xf] = 0;
    pbVar29[0x20] = 0;
    pbVar29[0x21] = 0;
    pbVar29[0x22] = 0;
    pbVar29[0x23] = 0;
    pbVar29[0x24] = 0;
    pbVar29[0x25] = 0;
    pbVar29[0x26] = 0;
    pbVar29[0x27] = 0;
    if (pbVar29 == pbVar20) {
LAB_0d09316e:
      *(undefined8 *)pbVar29 = *(undefined8 *)pbVar20;
      *(long **)(pbVar29 + 0x28) = (long *)((long)pbVar18 + 0x20);
      *(byte **)(pbVar29 + 0x30) = pbVar18;
LAB_0d0931dd:
      LOCK();
      *(long *)((long)pbVar18 + 8) = *(long *)((long)pbVar18 + 8) + 1;
      UNLOCK();
    }
    else {
      pbStack_188 = pbVar20;
      if ((*puVar25 & 1) == 0) {
        *(undefined8 *)(pbVar29 + 0x18) = *(undefined8 *)(pbVar32 + 0xa0);
        uVar21 = *(undefined8 *)(pbVar32 + 0x98);
        *(undefined8 *)(pbVar29 + 8) = *(undefined8 *)puVar25;
        *(undefined8 *)(pbVar29 + 0x10) = uVar21;
        goto LAB_0d09316e;
      }
      func_0x04885070(pbVar29 + 8,*(undefined8 *)(pbVar32 + 0xa0),*(undefined8 *)(pbVar32 + 0x98));
      *(undefined8 *)pbVar29 = *(undefined8 *)pbStack_188;
      *(long **)(pbVar29 + 0x28) = plStack_1c8;
      *(byte **)(pbVar29 + 0x30) = pbStack_1c0;
      pbVar18 = pbStack_1c0;
      if (pbStack_1c0 != (byte *)0x0) goto LAB_0d0931dd;
    }
    pbVar29 = pbVar29 + 0x38;
    *(byte **)(puVar19 + 0x24) = pbVar29;
  }
  else {
    pbVar29 = (byte *)func_0x0cd33e60(puVar19 + 0x22,pbVar20,&plStack_1c8);
  }
  *(byte **)(puVar19 + 0x24) = pbVar29;
  uVar9 = *puVar19;
  uVar10 = puVar19[1];
  uVar11 = puVar19[2];
  uVar12 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar30 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar30 = *plVar30 + 1;
    UNLOCK();
  }
  plVar30 = *(long **)(pbVar32 + 0x78);
  *(undefined4 *)(pbVar32 + 0x70) = uVar9;
  *(undefined4 *)(pbVar32 + 0x74) = uVar10;
  *(undefined4 *)(pbVar32 + 0x78) = uVar11;
  *(undefined4 *)(pbVar32 + 0x7c) = uVar12;
  if (plVar30 != (long *)0x0) {
    LOCK();
    plVar1 = plVar30 + 1;
    lVar34 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      FUN_0412c2d0(plVar30);
    }
  }
  pbVar20 = pbStack_1c0;
  pbVar32[0x80] = *(byte *)((long)puVar19 + 0xa1);
  if (pbStack_1c0 != (byte *)0x0) {
    LOCK();
    plVar30 = (long *)((long)pbStack_1c0 + 8);
    lVar34 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (lVar34 == 0) {
      (**(code **)(*(long *)pbStack_1c0 + 0x10))(pbStack_1c0);
      FUN_0412c2d0(pbVar20);
    }
  }
  LOCK();
  lVar34 = *(long *)pbVar33;
  *(long *)pbVar33 = *(long *)pbVar33 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*(long *)pbVar32 + 0x10))(pbVar32);
    FUN_0412c2d0(pbVar32);
    LOCK();
    lVar34 = *(long *)pbVar33;
    *(long *)pbVar33 = *(long *)pbVar33 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar34 = *(long *)pbVar33;
    *(long *)pbVar33 = *(long *)pbVar33 + -1;
    UNLOCK();
  }
  if (lVar34 == 0) {
    (**(code **)(*(long *)pbVar32 + 0x10))(pbVar32);
    FUN_0412c2d0(pbVar32);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  uStack_15f = 0;
  pbStack_158 = (byte *)0x0;
  uStack_170 = CONCAT31((int3)_DAT_013bdd29,0x20);
  uStack_16c._1_3_ = (undefined3)_UNK_013bdd2d;
  uStack_16c = CONCAT31(uStack_16c._1_3_,(char)((uint)_DAT_013bdd29 >> 0x18));
  uStack_168._1_3_ = (undefined3)_UNK_013bdd31;
  uStack_168 = CONCAT31(uStack_168._1_3_,(char)((uint)_UNK_013bdd2d >> 0x18));
  uStack_164._1_3_ = (undefined3)_UNK_013bdd35;
  uStack_164 = CONCAT31(uStack_164._1_3_,(char)((uint)_UNK_013bdd31 >> 0x18));
  uStack_160 = (undefined1)((uint)_UNK_013bdd35 >> 0x18);
  pbStack_178 = (byte *)0xcec9525277fc66aa;
  uStack_70 = 0;
  uStack_100 = 0;
  lStack_78 = 0;
  plStack_108 = (long *)&UNK_0f450230;
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  plStack_1c8 = plStack_108;
  pbVar20[8] = 0;
  pbVar20[9] = 0;
  pbVar20[10] = 0;
  pbVar20[0xb] = 0;
  pbVar20[0xc] = 0;
  pbVar20[0xd] = 0;
  pbVar20[0xe] = 0;
  pbVar20[0xf] = 0;
  pbVar20[0x10] = 0;
  pbVar20[0x11] = 0;
  pbVar20[0x12] = 0;
  pbVar20[0x13] = 0;
  pbVar20[0x14] = 0;
  pbVar20[0x15] = 0;
  pbVar20[0x16] = 0;
  pbVar20[0x17] = 0;
  *(undefined **)pbVar20 = &UNK_0f44c828;
  pbStack_1c0 = (byte *)0x0;
  plStack_108 = (long *)0x0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0f2ccd78;
  pbVar20[0x28] = 0;
  pbVar20[0x29] = 0;
  pbVar20[0x2a] = 0;
  pbVar20[0x2b] = 0;
  pbVar20[0x2c] = 0;
  pbVar20[0x2d] = 0;
  pbVar20[0x2e] = 0;
  pbVar20[0x2f] = 0;
  pbVar20[0x30] = 0;
  pbVar20[0x31] = 0;
  pbVar20[0x32] = 0;
  pbVar20[0x33] = 0;
  pbVar20[0x34] = 0;
  pbVar20[0x35] = 0;
  pbVar20[0x36] = 0;
  pbVar20[0x37] = 0;
  pbVar20[0x38] = 0;
  pbVar20[0x39] = 0;
  pbVar20[0x3a] = 0;
  pbVar20[0x3b] = 0;
  pbVar20[0x3c] = 0;
  pbVar20[0x3d] = 0;
  pbVar20[0x3e] = 0;
  pbVar20[0x3f] = 0;
  pbVar20[0x40] = 0;
  pbVar20[0x41] = 0;
  pbVar20[0x42] = 0;
  pbVar20[0x43] = 0;
  pbVar20[0x44] = 0;
  pbVar20[0x45] = 0;
  pbVar20[0x46] = 0;
  pbVar20[0x47] = 0;
  pbVar20[0x48] = 0;
  pbVar20[0x49] = 0;
  pbVar20[0x4a] = 0;
  pbVar20[0x4b] = 0;
  pbVar20[0x4c] = 0;
  pbVar20[0x4d] = 0;
  pbVar20[0x4e] = 0;
  pbVar20[0x4f] = 0;
  pbVar20[0x50] = 0;
  pbVar20[0x51] = 0;
  pbVar20[0x52] = 0;
  pbVar20[0x53] = 0;
  pbVar20[0x54] = 0;
  pbVar20[0x55] = 0;
  pbVar20[0x56] = 0;
  pbVar20[0x57] = 0;
  pbVar20[0x58] = 0;
  pbVar20[0x59] = 0;
  pbVar20[0x5a] = 0;
  pbVar20[0x5b] = 0;
  pbVar20[0x5c] = 0;
  pbVar20[0x5d] = 0;
  pbVar20[0x5e] = 0;
  pbVar20[0x5f] = 0;
  pbVar20[0x60] = 0;
  pbVar20[0x61] = 0;
  pbVar20[0x62] = 0;
  pbVar20[99] = 0;
  pbVar20[100] = 0;
  pbVar20[0x65] = 0;
  pbVar20[0x66] = 0;
  pbVar20[0x67] = 0;
  pbVar20[0x68] = 0;
  func_0x04aa75f0(pbVar20 + 0x70,&uStack_1c9,&UNK_01254d89);
  pbVar20[0x80] = 0;
  pbStack_148 = pbVar20 + 0x88;
  pbVar20[0x88] = 0;
  pbVar20[0x89] = 0;
  pbVar20[0x8a] = 0;
  pbVar20[0x8b] = 0;
  pbVar20[0x8c] = 0;
  pbVar20[0x8d] = 0;
  pbVar20[0x8e] = 0;
  pbVar20[0x8f] = 0;
  pbVar20[0x90] = 0;
  pbVar20[0x91] = 0;
  pbVar20[0x92] = 0;
  pbVar20[0x93] = 0;
  pbVar20[0x94] = 0;
  pbVar20[0x95] = 0;
  pbVar20[0x96] = 0;
  pbVar20[0x97] = 0;
  pbVar20[0x98] = 0;
  pbVar20[0x99] = 0;
  pbVar20[0x9a] = 0;
  pbVar20[0x9b] = 0;
  pbVar20[0x9c] = 0;
  pbVar20[0x9d] = 0;
  pbVar20[0x9e] = 0;
  pbVar20[0x9f] = 0;
  pbVar20[0xa0] = 0;
  pbVar20[0xa1] = 0;
  pbVar20[0xa2] = 0;
  pbVar20[0xa3] = 0;
  pbVar20[0xa4] = 0;
  pbVar20[0xa5] = 0;
  pbVar20[0xa6] = 0;
  pbVar20[0xa7] = 0;
  pbVar20[0xa8] = 0;
  pbVar20[0xa9] = 0;
  pbVar20[0xaa] = 0;
  pbVar20[0xab] = 0;
  pbVar20[0xac] = 0;
  pbVar20[0xad] = 0;
  pbVar20[0xae] = 0;
  pbVar20[0xaf] = 0;
  pbVar20[0xb0] = 0;
  pbVar20[0xb1] = 0;
  pbVar20[0xb2] = 0;
  pbVar20[0xb3] = 0;
  pbVar20[0xb4] = 0;
  pbVar20[0xb5] = 0;
  pbVar20[0xb6] = 0;
  pbVar20[0xb7] = 0;
  pbVar20[0xb8] = 0xff;
  pbVar20[0xb9] = 0xff;
  pbVar20[0xba] = 0xff;
  pbVar20[0xbb] = 0xff;
  pbVar20[0xbc] = 0;
  pbVar20[0xbd] = 0;
  pbVar20[0xbe] = 0;
  pbVar20[0xbf] = 0;
  pbVar20[0x130] = 0;
  pbVar20[0x131] = 0;
  pbVar20[0x132] = 0;
  pbVar20[0x133] = 0;
  pbVar20[0x134] = 0;
  pbVar20[0x135] = 0;
  pbVar20[0x136] = 0;
  pbVar20[0x137] = 0;
  pbVar20[0x138] = 0;
  pbVar20[0x139] = 0;
  pbVar20[0x13a] = 0;
  pbVar20[0x13b] = 0;
  pbVar20[0x13c] = 0;
  pbVar20[0x13d] = 0;
  pbVar20[0x13e] = 0;
  pbVar20[0x13f] = 0;
  pbVar20[0xc0] = 0;
  pbVar20[0xc1] = 0;
  pbVar20[0xc2] = 0;
  pbVar20[0xc3] = 0;
  pbVar20[0xc4] = 0;
  pbVar20[0xc5] = 0;
  pbVar20[0xc6] = 0;
  pbVar20[199] = 0;
  pbVar20[200] = 0;
  pbVar20[0xc9] = 0;
  pbVar20[0xca] = 0;
  pbVar20[0xcb] = 0;
  pbVar20[0xcc] = 0;
  pbVar20[0xcd] = 0;
  pbVar20[0xce] = 0;
  pbVar20[0xcf] = 0;
  pbVar20[0xd0] = 0;
  pbVar20[0xd1] = 0;
  pbVar20[0xd2] = 0;
  pbVar20[0xd3] = 0;
  pbVar20[0xd4] = 0;
  pbVar20[0xd5] = 0;
  pbVar20[0xd6] = 0;
  pbVar20[0xd7] = 0;
  pbVar20[0xd8] = 0;
  pbVar20[0xd9] = 0;
  pbVar20[0xda] = 0;
  pbVar20[0xdb] = 0;
  pbVar20[0xdc] = 0;
  pbVar20[0xdd] = 0;
  pbVar20[0xde] = 0;
  pbVar20[0xdf] = 0;
  pbVar20[0xe0] = 0;
  pbVar20[0xe1] = 0;
  pbVar20[0xe2] = 0;
  pbVar20[0xe3] = 0;
  pbVar20[0xe4] = 0;
  pbVar20[0xe5] = 0;
  pbVar20[0xe6] = 0;
  pbVar20[0xe7] = 0;
  pbVar20[0xe8] = 0;
  pbVar20[0xe9] = 0;
  pbVar20[0xea] = 0;
  pbVar20[0xeb] = 0;
  pbVar20[0xec] = 0;
  pbVar20[0xed] = 0;
  pbVar20[0xee] = 0;
  pbVar20[0xef] = 0;
  pbVar20[0xf0] = 0;
  pbVar20[0xf1] = 0;
  pbVar20[0xf2] = 0;
  pbVar20[0xf3] = 0;
  pbVar20[0xf4] = 0;
  pbVar20[0xf5] = 0;
  pbVar20[0xf6] = 0;
  pbVar20[0xf7] = 0;
  pbVar20[0xf8] = 0;
  pbVar20[0xf9] = 0;
  pbVar20[0xfa] = 0;
  pbVar20[0xfb] = 0;
  pbVar20[0xfc] = 0;
  pbVar20[0xfd] = 0;
  pbVar20[0xfe] = 0;
  pbVar20[0xff] = 0;
  *(undefined **)(pbVar20 + 0x20) = &UNK_0f44c878;
  pbVar20[0x178] = 0;
  pbVar20[0x179] = 0;
  pbVar20[0x17a] = 0;
  pbVar20[0x17b] = 0;
  pbVar20[0x17c] = 0;
  pbVar20[0x17d] = 0;
  pbVar20[0x17e] = 0;
  pbVar20[0x17f] = 0;
  pbVar20[0x180] = 0;
  pbVar20[0x181] = 0;
  pbVar20[0x182] = 0;
  pbVar20[0x183] = 0;
  pbVar20[0x184] = 0;
  pbVar20[0x185] = 0;
  pbVar20[0x186] = 0;
  pbVar20[0x187] = 0;
  *(byte **)(pbVar20 + 0x170) = pbVar20 + 0x178;
  pplVar3 = (long **)(pbVar20 + 400);
  pbVar20[400] = 0;
  pbVar20[0x191] = 0;
  pbVar20[0x192] = 0;
  pbVar20[0x193] = 0;
  pbVar20[0x194] = 0;
  pbVar20[0x195] = 0;
  pbVar20[0x196] = 0;
  pbVar20[0x197] = 0;
  pbVar20[0x198] = 0;
  pbVar20[0x199] = 0;
  pbVar20[0x19a] = 0;
  pbVar20[0x19b] = 0;
  pbVar20[0x19c] = 0;
  pbVar20[0x19d] = 0;
  pbVar20[0x19e] = 0;
  pbVar20[0x19f] = 0;
  if (pplVar3 != &plStack_1c8) {
    if (plStack_1c8 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1c8)(&plStack_1c8,pplVar3);
      plVar30 = plStack_1c8;
    }
    plStack_1c8 = (long *)0x0;
    *pplVar3 = plVar30;
  }
  pbStack_188 = pbVar20 + 0x20;
  puStack_118 = (uint *)(pbVar20 + 0x90);
  if (pbStack_148 != &DAT_0f551f88) {
    if ((*puStack_118 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        *(undefined8 *)(pbVar20 + 0xa0) = _DAT_0f551fa0;
        uVar11 = uRam000000000f551f9c;
        uVar10 = _DAT_0f551f98;
        uVar9 = uRam000000000f551f94;
        *puStack_118 = _DAT_0f551f90;
        *(undefined4 *)(pbVar20 + 0x94) = uVar9;
        *(undefined4 *)(pbVar20 + 0x98) = uVar10;
        *(undefined4 *)(pbVar20 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puStack_118,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar35 = (_DAT_0f551f90 & 1) != 0;
      uVar21 = 0xf551f91;
      if (bVar35) {
        uVar21 = _DAT_0f551fa0;
      }
      uVar17 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar35) {
        uVar17 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puStack_118,uVar21,uVar17);
    }
  }
  *(undefined8 *)(pbVar20 + 0x88) = _DAT_0f551f88;
  pbVar20[0xa8] = 0;
  pbVar20[0xa9] = 0;
  pbVar20[0xaa] = 0;
  pbVar20[0xab] = 0;
  pbVar20[0xac] = 0;
  pbVar20[0xad] = 0;
  pbVar20[0xae] = 0;
  pbVar20[0xaf] = 0;
  if (plStack_1c8 != (long *)0x0) {
    (*(code *)plStack_1c8[1])(&plStack_1c8);
  }
  pbVar33 = pbVar20 + 8;
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  LOCK();
  *(long *)pbVar33 = *(long *)pbVar33 + 1;
  UNLOCK();
  pbStack_c0 = pbVar33;
  plStack_180 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_180 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar18 = pbStack_158;
  pbVar33 = pbStack_178;
  plStack_180[1] = 0;
  plStack_180[2] = 0;
  *plStack_180 = (long)&UNK_0f44c958;
  plStack_180[6] = 0;
  plStack_180[7] = 0;
  plStack_180[4] = (long)&UNK_0f44c9a8;
  plStack_180[0xe] = (long)pbStack_188;
  plStack_180[0xf] = (long)pbVar20;
  LOCK();
  *(long *)(pbVar20 + 8) = *(long *)(pbVar20 + 8) + 1;
  UNLOCK();
  plStack_110 = plStack_180 + 1;
  uStack_140 = *(ulong *)(pbVar32 + 0xd8);
  uVar17 = *(ulong *)(pbVar32 + 0xe0);
  pbVar29 = pbVar20;
  plStack_150 = plStack_180;
  if (uStack_140 != uVar17) {
    if ((uStack_170 & 1) == 0) {
      uVar24 = (ulong)((byte)uStack_170 >> 1);
      lVar34 = (long)&uStack_170 + 1;
    }
    else {
      uVar24 = CONCAT44(uStack_164,uStack_168);
      lVar34 = CONCAT71(uStack_15f,uStack_160);
    }
    lVar22 = uStack_140 + 0x19;
    do {
      if (*(byte **)(lVar22 + -9) == pbVar33) {
        pbVar29 = (byte *)(lVar22 + -9);
        if ((*(byte ***)(lVar22 + 0x17) == &pbStack_178) && (pbVar29 == pbVar18)) {
LAB_0d093b84:
          puVar19 = (undefined4 *)(lVar22 + -0x19);
          plVar30 = plStack_180;
          pbVar33 = pbStack_148;
          goto LAB_0d093b9a;
        }
        bVar6 = *(byte *)(lVar22 + -1);
        if ((bVar6 & 1) == 0) {
          uVar28 = (ulong)(bVar6 >> 1);
        }
        else {
          uVar28 = *(ulong *)(lVar22 + 7);
        }
        if (uVar28 == uVar24) {
          lVar31 = lVar22;
          if ((bVar6 & 1) != 0) {
            lVar31 = *(long *)(lVar22 + 0xf);
          }
          iVar16 = func_0x0eee3000(lVar31,lVar34,uVar24);
          if (iVar16 == 0) {
            *(byte ***)(lVar22 + 0x17) = &pbStack_178;
            pbStack_158 = pbVar29;
            goto LAB_0d093b84;
          }
        }
      }
      *(undefined8 *)(lVar22 + 0x17) = 0;
      uVar28 = lVar22 + 0x8f;
      lVar22 = lVar22 + 0xa8;
      pbVar29 = pbVar33;
    } while (uVar28 != uVar17);
  }
  if (uVar17 < *(ulong *)(pbVar32 + 0xe8)) {
    func_0x0d0c4290(uVar17);
    pbVar33 = (byte *)(uVar17 + 0xa8);
    *(byte **)(pbVar32 + 0xe0) = pbVar33;
LAB_0d0939dd:
    *(byte **)(pbVar32 + 0xe0) = pbVar33;
    func_0x0b63b6d0(*(undefined8 *)(pbVar33 + -0xa8),&pbStack_178);
    lVar34 = *(long *)(pbVar32 + 0xe0);
    *(byte *)(lVar34 + -7) = pbVar32[0x80];
    if ((byte **)(lVar34 + -0x98) != &pbStack_178) {
      puVar25 = (uint *)(lVar34 + -0x90);
      if ((*(byte *)puVar25 & 1) == 0) {
        if ((uStack_170 & 1) == 0) {
          *(ulong *)(lVar34 + -0x80) = CONCAT71(uStack_15f,uStack_160);
          *puVar25 = uStack_170;
          *(undefined4 *)(lVar34 + -0x8c) = uStack_16c;
          *(undefined4 *)(lVar34 + -0x88) = uStack_168;
          *(undefined4 *)(lVar34 + -0x84) = uStack_164;
        }
        else {
          func_0x04885070(puVar25,CONCAT71(uStack_15f,uStack_160),CONCAT44(uStack_164,uStack_168));
        }
      }
      else {
        bVar35 = (uStack_170 & 1) != 0;
        lVar22 = (long)&uStack_170 + 1;
        if (bVar35) {
          lVar22 = CONCAT71(uStack_15f,uStack_160);
        }
        uVar17 = (ulong)((byte)uStack_170 >> 1);
        if (bVar35) {
          uVar17 = CONCAT44(uStack_164,uStack_168);
        }
        func_0x04885120(puVar25,lVar22,uVar17);
      }
    }
    *(byte **)(lVar34 + -0x98) = pbStack_178;
    *(undefined8 *)(lVar34 + -0x78) = 0;
    FUN_04aa9390(&plStack_1c8,&uStack_170,pbVar32[0x80]);
    pbVar29 = *(byte **)(pbVar32 + 0xe0);
    func_0x04167a70(pbVar29 + -0x70,&plStack_1c8);
    *(byte **)(pbVar29 + -0x68) = pbStack_1c0;
    *(byte **)(pbVar29 + -0x60) = pbStack_1b8;
    *(long **)(pbVar29 + -0x58) = plStack_1b0;
    *(byte **)(pbVar29 + -0x50) = pbStack_1a8;
    uVar9 = (undefined4)uStack_1a0;
    uVar10 = uStack_1a0._4_4_;
    uVar11 = (undefined4)uStack_198;
    uVar12 = uStack_198._4_4_;
    uStack_1a0 = 0;
    uStack_198 = (long *)0x0;
    plVar30 = *(long **)(pbVar29 + -0x40);
    *(undefined4 *)(pbVar29 + -0x48) = uVar9;
    *(undefined4 *)(pbVar29 + -0x44) = uVar10;
    *(undefined4 *)(pbVar29 + -0x40) = uVar11;
    *(undefined4 *)(pbVar29 + -0x3c) = uVar12;
    if (plVar30 != (long *)0x0) {
      LOCK();
      plVar1 = plVar30 + 1;
      lVar34 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        FUN_0412c2d0(plVar30);
      }
    }
    pbVar33 = pbStack_148;
    plVar30 = plStack_180;
    plVar1 = uStack_198;
    *(undefined8 *)(pbVar29 + -0x38) = uStack_190;
    if (uStack_198 != (long *)0x0) {
      LOCK();
      plVar2 = uStack_198 + 1;
      lVar34 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*uStack_198 + 0x10))(uStack_198);
        FUN_0412c2d0(plVar1);
      }
    }
    FUN_04167a40(&plStack_1c8);
    lVar34 = *(long *)(pbVar32 + 0xe0);
    *(undefined1 *)(lVar34 + -8) = 0;
    puVar19 = (undefined4 *)(lVar34 + -0xa8);
LAB_0d093b9a:
    plVar30 = plVar30 + 4;
    pbVar32 = *(byte **)(puVar19 + 0x24);
    if (pbVar32 < *(byte **)(puVar19 + 0x26)) {
      pbVar32[0x10] = 0;
      pbVar32[0x11] = 0;
      pbVar32[0x12] = 0;
      pbVar32[0x13] = 0;
      pbVar32[0x14] = 0;
      pbVar32[0x15] = 0;
      pbVar32[0x16] = 0;
      pbVar32[0x17] = 0;
      pbVar32[0x18] = 0;
      pbVar32[0x19] = 0;
      pbVar32[0x1a] = 0;
      pbVar32[0x1b] = 0;
      pbVar32[0x1c] = 0;
      pbVar32[0x1d] = 0;
      pbVar32[0x1e] = 0;
      pbVar32[0x1f] = 0;
      pbVar32[0] = 0;
      pbVar32[1] = 0;
      pbVar32[2] = 0;
      pbVar32[3] = 0;
      pbVar32[4] = 0;
      pbVar32[5] = 0;
      pbVar32[6] = 0;
      pbVar32[7] = 0;
      pbVar32[8] = 0;
      pbVar32[9] = 0;
      pbVar32[10] = 0;
      pbVar32[0xb] = 0;
      pbVar32[0xc] = 0;
      pbVar32[0xd] = 0;
      pbVar32[0xe] = 0;
      pbVar32[0xf] = 0;
      pbVar32[0x20] = 0;
      pbVar32[0x21] = 0;
      pbVar32[0x22] = 0;
      pbVar32[0x23] = 0;
      pbVar32[0x24] = 0;
      pbVar32[0x25] = 0;
      pbVar32[0x26] = 0;
      pbVar32[0x27] = 0;
      if (pbVar32 != pbVar33) {
        if ((*puStack_118 & 1) == 0) {
          *(undefined8 *)(pbVar32 + 0x18) = *(undefined8 *)(puStack_118 + 4);
          uVar21 = *(undefined8 *)(puStack_118 + 2);
          *(undefined8 *)(pbVar32 + 8) = *(undefined8 *)puStack_118;
          *(undefined8 *)(pbVar32 + 0x10) = uVar21;
        }
        else {
          func_0x04885070(pbVar32 + 8,*(undefined8 *)(pbVar20 + 0xa0),
                          *(undefined8 *)(pbVar20 + 0x98));
        }
      }
      *(undefined8 *)pbVar32 = *(undefined8 *)pbVar33;
      *(long **)(pbVar32 + 0x28) = plVar30;
      *(long **)(pbVar32 + 0x30) = plStack_150;
      LOCK();
      plStack_150[1] = plStack_150[1] + 1;
      UNLOCK();
      pbVar32 = pbVar32 + 0x38;
      *(byte **)(puVar19 + 0x24) = pbVar32;
      goto LAB_0d093ecf;
    }
    lVar34 = (long)pbVar32 - *(long *)(puVar19 + 0x22);
    uVar17 = (lVar34 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar32 = pbVar29;
    pbVar29 = pbVar20;
    if (uVar17 < 0x492492492492493) {
      lVar22 = (long)*(byte **)(puVar19 + 0x26) - *(long *)(puVar19 + 0x22) >> 3;
      uVar24 = lVar22 * -0x2492492492492492;
      if (uVar17 < uVar24) {
        uVar17 = uVar24;
      }
      pbVar33 = (byte *)(puVar19 + 0x22);
      if (0x249249249249248 < (ulong)(lVar22 * 0x6db6db6db6db6db7)) {
        uVar17 = 0x492492492492492;
      }
      pbStack_1a8 = pbVar33;
      plStack_180 = plVar30;
      if (uVar17 == 0) {
        plVar30 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar17) goto LAB_0d0940be;
        plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 0x38);
        if (plVar30 == (long *)0x0) {
          func_0x0eec74c0(uVar17 * 0x38,0);
          plVar30 = (long *)0x0;
        }
      }
      pbVar18 = pbStack_148;
      pbVar32 = (byte *)((long)plVar30 + lVar34);
      plStack_1b0 = plVar30 + uVar17 * 7;
      puVar26 = (undefined8 *)((long)plVar30 + lVar34 + 0x10);
      *puVar26 = 0;
      puVar26[1] = 0;
      *(undefined8 *)((long)plVar30 + lVar34) = 0;
      ((undefined8 *)((long)plVar30 + lVar34))[1] = 0;
      *(undefined8 *)((long)plVar30 + lVar34 + 0x20) = 0;
      pbStack_1b8 = pbVar32;
      plStack_1c8 = plVar30;
      pbStack_1c0 = pbVar32;
      if (pbVar32 != pbStack_148) {
        puVar25 = (uint *)((long)plVar30 + lVar34 + 8);
        if ((*puStack_118 & 1) == 0) {
          *(undefined8 *)((long)plVar30 + lVar34 + 0x18) = *(undefined8 *)(puStack_118 + 4);
          uVar13 = puStack_118[1];
          uVar14 = puStack_118[2];
          uVar15 = puStack_118[3];
          *puVar25 = *puStack_118;
          *(uint *)((long)plVar30 + lVar34 + 0xc) = uVar13;
          *(uint *)((long)plVar30 + lVar34 + 0x10) = uVar14;
          *(uint *)((long)plVar30 + lVar34 + 0x14) = uVar15;
        }
        else {
          func_0x04885070(puVar25,*(undefined8 *)(pbVar20 + 0xa0),*(undefined8 *)(pbVar20 + 0x98));
        }
      }
      *(undefined8 *)pbVar32 = *(undefined8 *)pbVar18;
      *(long **)(pbVar32 + 0x28) = plStack_180;
      *(long **)(pbVar32 + 0x30) = plStack_150;
      LOCK();
      plStack_150[1] = plStack_150[1] + 1;
      UNLOCK();
      pbStack_1b8 = pbStack_1b8 + 0x38;
      puVar26 = *(undefined8 **)(puVar19 + 0x22);
      puVar7 = *(undefined8 **)(puVar19 + 0x24);
      pbVar18 = pbStack_1c0 + ((long)puVar26 - (long)puVar7);
      pbVar32 = pbVar18;
      puVar23 = puVar26;
      if ((long)puVar26 - (long)puVar7 != 0) {
        do {
          pbVar32[0x10] = 0;
          pbVar32[0x11] = 0;
          pbVar32[0x12] = 0;
          pbVar32[0x13] = 0;
          pbVar32[0x14] = 0;
          pbVar32[0x15] = 0;
          pbVar32[0x16] = 0;
          pbVar32[0x17] = 0;
          pbVar32[0x18] = 0;
          pbVar32[0x19] = 0;
          pbVar32[0x1a] = 0;
          pbVar32[0x1b] = 0;
          pbVar32[0x1c] = 0;
          pbVar32[0x1d] = 0;
          pbVar32[0x1e] = 0;
          pbVar32[0x1f] = 0;
          pbVar32[0] = 0;
          pbVar32[1] = 0;
          pbVar32[2] = 0;
          pbVar32[3] = 0;
          pbVar32[4] = 0;
          pbVar32[5] = 0;
          pbVar32[6] = 0;
          pbVar32[7] = 0;
          pbVar32[8] = 0;
          pbVar32[9] = 0;
          pbVar32[10] = 0;
          pbVar32[0xb] = 0;
          pbVar32[0xc] = 0;
          pbVar32[0xd] = 0;
          pbVar32[0xe] = 0;
          pbVar32[0xf] = 0;
          pbVar32[0x20] = 0;
          pbVar32[0x21] = 0;
          pbVar32[0x22] = 0;
          pbVar32[0x23] = 0;
          pbVar32[0x24] = 0;
          pbVar32[0x25] = 0;
          pbVar32[0x26] = 0;
          pbVar32[0x27] = 0;
          *(undefined8 *)(pbVar32 + 0x18) = puVar23[3];
          uVar21 = puVar23[2];
          *(undefined8 *)(pbVar32 + 8) = puVar23[1];
          *(undefined8 *)(pbVar32 + 0x10) = uVar21;
          *(undefined2 *)(puVar23 + 1) = 0;
          *(undefined8 *)pbVar32 = *puVar23;
          uVar21 = puVar23[6];
          *(undefined8 *)(pbVar32 + 0x28) = puVar23[5];
          *(undefined8 *)(pbVar32 + 0x30) = uVar21;
          puVar23[5] = 0;
          puVar23[6] = 0;
          puVar23 = puVar23 + 7;
          pbVar32 = pbVar32 + 0x38;
        } while (puVar23 != puVar7);
        do {
          plVar30 = (long *)puVar26[6];
          if (plVar30 == (long *)0x0) {
LAB_0d093e54:
            bVar6 = *(byte *)(puVar26 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar30 + 1;
            lVar34 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar34 != 0) goto LAB_0d093e54;
            (**(code **)(*plVar30 + 0x10))(plVar30);
            FUN_0412c2d0(plVar30);
            bVar6 = *(byte *)(puVar26 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar26[3],puVar26[1] & 0xfffffffffffffffe);
          }
          puVar26 = puVar26 + 7;
        } while (puVar26 != puVar7);
        puVar26 = *(undefined8 **)pbVar33;
      }
      pbVar32 = pbStack_1b8;
      *(byte **)(puVar19 + 0x22) = pbVar18;
      *(byte **)(puVar19 + 0x24) = pbStack_1b8;
      lVar34 = *(long *)(puVar19 + 0x26);
      *(long **)(puVar19 + 0x26) = plStack_1b0;
      if (puVar26 != (undefined8 *)0x0) {
        func_0x0412a280(puVar26,lVar34 - (long)puVar26);
      }
LAB_0d093ecf:
      *(byte **)(puVar19 + 0x24) = pbVar32;
      uVar9 = *puVar19;
      uVar10 = puVar19[1];
      uVar11 = puVar19[2];
      uVar12 = puVar19[3];
      if (*(long *)(puVar19 + 2) != 0) {
        LOCK();
        plVar30 = (long *)(*(long *)(puVar19 + 2) + 8);
        *plVar30 = *plVar30 + 1;
        UNLOCK();
      }
      plVar30 = *(long **)(pbVar20 + 0x78);
      *(undefined4 *)(pbVar20 + 0x70) = uVar9;
      *(undefined4 *)(pbVar20 + 0x74) = uVar10;
      *(undefined4 *)(pbVar20 + 0x78) = uVar11;
      *(undefined4 *)(pbVar20 + 0x7c) = uVar12;
      if (plVar30 != (long *)0x0) {
        LOCK();
        plVar1 = plVar30 + 1;
        lVar34 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar34 == 0) {
          (**(code **)(*plVar30 + 0x10))(plVar30);
          FUN_0412c2d0(plVar30);
        }
      }
      plVar30 = plStack_150;
      pbVar20[0x80] = *(byte *)((long)puVar19 + 0xa1);
      LOCK();
      lVar34 = *plStack_110;
      *plStack_110 = *plStack_110 + -1;
      UNLOCK();
      if (lVar34 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        FUN_0412c2d0(plVar30);
        LOCK();
        lVar34 = *(long *)pbStack_c0;
        *(long *)pbStack_c0 = *(long *)pbStack_c0 + -1;
        UNLOCK();
        pbVar32 = pbStack_c0;
      }
      else {
        LOCK();
        lVar34 = *(long *)pbStack_c0;
        *(long *)pbStack_c0 = *(long *)pbStack_c0 + -1;
        UNLOCK();
        pbVar32 = pbStack_c0;
      }
      pbStack_c0 = pbVar32;
      if (lVar34 == 0) {
        (**(code **)(*(long *)pbVar20 + 0x10))(pbVar20);
        FUN_0412c2d0(pbVar20);
        LOCK();
        lVar34 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar34 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      if (lVar34 == 0) {
        (**(code **)(*(long *)pbVar20 + 0x10))(pbVar20);
        FUN_0412c2d0(pbVar20);
      }
      auStack_138[0] = 0;
      auStack_138[1] = 0;
      auStack_138[2] = 0;
      (**(code **)(*(long *)pbStack_188 + 0x10))(pbStack_188,auStack_138);
      if ((auStack_138[0] & 1) != 0) {
        func_0x0412a280(auStack_138[2],auStack_138[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_170 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_15f,uStack_160),
                        CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar34 = uVar17 - uStack_140;
    uVar17 = (lVar34 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar17) goto LAB_0d0940c8;
    pbVar29 = pbVar32 + 0xd8;
    lVar22 = (long)(*(ulong *)(pbVar32 + 0xe8) - uStack_140) >> 3;
    uVar24 = lVar22 * -0x6186186186186186;
    if (uVar17 < uVar24) {
      uVar17 = uVar24;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar22 * -0x30c30c30c30c30c3)) {
      uVar17 = 0x186186186186186;
    }
    pbStack_1a8 = pbVar29;
    if (uVar17 == 0) {
      plVar30 = (long *)0x0;
LAB_0d0937ff:
      pbStack_1c0 = (byte *)(lVar34 + (long)plVar30);
      plStack_1b0 = plVar30 + uVar17 * 0x15;
      plStack_1c8 = plVar30;
      pbStack_1b8 = pbStack_1c0;
      func_0x0d0c4290(pbStack_1c0);
      pbVar33 = pbStack_1b8 + 0xa8;
      lVar34 = *(long *)(pbVar32 + 0xd8);
      lVar22 = *(long *)(pbVar32 + 0xe0);
      pbVar18 = pbStack_1c0 + (lVar34 - lVar22);
      if (lVar34 != lVar22) {
        lVar31 = 0;
        do {
          uVar21 = ((undefined8 *)(lVar34 + lVar31))[1];
          *(undefined8 *)(pbVar18 + lVar31) = *(undefined8 *)(lVar34 + lVar31);
          *(undefined8 *)(pbVar18 + lVar31 + 8) = uVar21;
          *(undefined8 *)(lVar34 + lVar31) = 0;
          ((undefined8 *)(lVar34 + lVar31))[1] = 0;
          pbVar5 = pbVar18 + lVar31 + 0x20;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar18 + lVar31 + 0x10;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar18 + lVar31 + 0x30;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          *(undefined8 *)(pbVar18 + lVar31 + 0x28) = *(undefined8 *)(lVar34 + 0x28 + lVar31);
          puVar19 = (undefined4 *)(lVar34 + 0x18 + lVar31);
          uVar9 = puVar19[1];
          uVar10 = puVar19[2];
          uVar11 = puVar19[3];
          pbVar5 = pbVar18 + lVar31 + 0x18;
          *(undefined4 *)pbVar5 = *puVar19;
          *(undefined4 *)(pbVar5 + 4) = uVar9;
          *(undefined4 *)(pbVar5 + 8) = uVar10;
          *(undefined4 *)(pbVar5 + 0xc) = uVar11;
          *(undefined2 *)(lVar34 + 0x18 + lVar31) = 0;
          *(undefined8 *)(pbVar18 + lVar31 + 0x10) = *(undefined8 *)(lVar34 + 0x10 + lVar31);
          func_0x04167a20(pbVar18 + lVar31 + 0x38,lVar31 + lVar34 + 0x38);
          puVar26 = (undefined8 *)(lVar34 + 0x40 + lVar31);
          uVar21 = puVar26[1];
          *(undefined8 *)(pbVar18 + lVar31 + 0x40) = *puVar26;
          *(undefined8 *)(pbVar18 + lVar31 + 0x40 + 8) = uVar21;
          puVar26 = (undefined8 *)(lVar34 + 0x50 + lVar31);
          uVar21 = puVar26[1];
          *(undefined8 *)(pbVar18 + lVar31 + 0x50) = *puVar26;
          *(undefined8 *)(pbVar18 + lVar31 + 0x50 + 8) = uVar21;
          puVar26 = (undefined8 *)(lVar34 + 0x60 + lVar31);
          uVar21 = puVar26[1];
          *(undefined8 *)(pbVar18 + lVar31 + 0x60) = *puVar26;
          *(undefined8 *)(pbVar18 + lVar31 + 0x60 + 8) = uVar21;
          puVar26 = (undefined8 *)(lVar34 + 0x60 + lVar31);
          *puVar26 = 0;
          puVar26[1] = 0;
          *(undefined8 *)(pbVar18 + lVar31 + 0x70) = *(undefined8 *)(lVar34 + 0x70 + lVar31);
          puVar26 = (undefined8 *)(lVar34 + 0x78 + lVar31);
          uVar21 = puVar26[1];
          *(undefined8 *)(pbVar18 + lVar31 + 0x78) = *puVar26;
          *(undefined8 *)(pbVar18 + lVar31 + 0x78 + 8) = uVar21;
          pbVar5 = pbVar18 + lVar31 + 0x88;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
          pbVar5 = pbVar18 + lVar31 + 0x98;
          pbVar5[0] = 0;
          pbVar5[1] = 0;
          pbVar5[2] = 0;
          pbVar5[3] = 0;
          pbVar5[4] = 0;
          pbVar5[5] = 0;
          pbVar5[6] = 0;
          pbVar5[7] = 0;
          puVar19 = (undefined4 *)(lVar34 + 0x88 + lVar31);
          uVar9 = puVar19[1];
          uVar10 = puVar19[2];
          uVar11 = puVar19[3];
          pbVar5 = pbVar18 + lVar31 + 0x88;
          *(undefined4 *)pbVar5 = *puVar19;
          *(undefined4 *)(pbVar5 + 4) = uVar9;
          *(undefined4 *)(pbVar5 + 8) = uVar10;
          *(undefined4 *)(pbVar5 + 0xc) = uVar11;
          *(undefined8 *)(pbVar18 + lVar31 + 0x98) = *(undefined8 *)(lVar34 + 0x98 + lVar31);
          puVar26 = (undefined8 *)(lVar34 + 0x88 + lVar31);
          *puVar26 = 0;
          puVar26[1] = 0;
          *(undefined8 *)(lVar34 + 0x98 + lVar31) = 0;
          *(undefined2 *)(pbVar18 + lVar31 + 0xa0) = *(undefined2 *)(lVar34 + 0xa0 + lVar31);
          lVar4 = lVar31 + lVar34;
          lVar31 = lVar31 + 0xa8;
        } while (lVar4 + 0xa8 != lVar22);
        do {
          func_0x0d0c4410(lVar34);
          lVar34 = lVar34 + 0xa8;
        } while (lVar34 != lVar22);
        lVar34 = *(long *)pbVar29;
      }
      *(byte **)(pbVar32 + 0xd8) = pbVar18;
      *(byte **)(pbVar32 + 0xe0) = pbVar33;
      lVar22 = *(long *)(pbVar32 + 0xe8);
      *(long **)(pbVar32 + 0xe8) = plStack_1b0;
      if (lVar34 != 0) {
        func_0x0412a280(lVar34,lVar22 - lVar34);
      }
      goto LAB_0d0939dd;
    }
    if (uVar17 < 0x186186186186187) {
      plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 0xa8);
      if (plVar30 == (long *)0x0) {
        func_0x0eec74c0(uVar17 * 0xa8,0);
        plVar30 = (long *)0x0;
      }
      goto LAB_0d0937ff;
    }
LAB_0d0940be:
    func_0x04882eb0();
  }
  func_0x0d0c4630();
LAB_0d0940c8:
  uVar21 = func_0x0d0c4400();
  if ((*pbVar32 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar29 + 0x18),*(ulong *)(pbVar29 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d0c4570(&plStack_1c8);
  plVar30 = plStack_150;
  LOCK();
  lVar34 = *plStack_110;
  *plStack_110 = *plStack_110 + -1;
  UNLOCK();
  if (lVar34 == 0) {
    (**(code **)(*plStack_150 + 0x10))(plStack_150);
    FUN_0412c2d0(plVar30);
  }
  func_0x0d0c2b30(pbVar20);
  func_0x0d0c2b60(pbVar20);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_170 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_15f,uStack_160),
                    CONCAT44(uStack_16c,uStack_170) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar21);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}



/* ---- referenced strings ----
 * 0x13bdd29  ignore_game_mode
 */
