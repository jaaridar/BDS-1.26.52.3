/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9e3eb50 (ELF vaddr 0x9d3eb50)
 * Label: caller-of-callee
 * Body:  [[09e3eb50, 09e3efc0] [09e3efd0, 09e3f725] [09e3f730, 09e3f76c] [09e3f770, 09e3fc5c] [09e3fc60, 09e40255] [09e40260, 09e4029c] [09e402a0, 09e404bc] [09e4071b, 09e4087f]]
 * Ghidra: FUN_09e3eb50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_09e3eb50(undefined8 *param_1,byte *param_2,byte *param_3,byte *param_4,undefined4 param_5
                   )

{
  long *plVar1;
  undefined8 **ppuVar2;
  long lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  long lVar30;
  byte *pbVar31;
  bool bVar32;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a0;
  undefined8 *puStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  undefined8 *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_151;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  byte *pbStack_118;
  byte *pbStack_f8;
  undefined4 uStack_ec;
  uint *puStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  
  pbStack_148 = (byte *)*param_1;
  uStack_128 = (byte *)0x0;
  lStack_120 = 0;
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = (byte *)0x0;
  pbStack_118 = (byte *)0x0;
  func_0x04130630(&uStack_130,param_4);
  if (*param_4 == 0) {
    puVar29 = (undefined8 *)0x0;
  }
  else {
    puVar29 = (undefined8 *)0xcbf29ce484222325;
    uVar19 = func_0x0eee2e90(param_4);
    if (uVar19 != 0) {
      uVar25 = (ulong)((uint)uVar19 & 7);
      if (7 < uVar19) {
        uVar19 = uVar19 & 0xfffffffffffffff8;
        do {
          puVar29 = (undefined8 *)
                    (((((((((long)puVar29 * 0x100000001b3 ^ (ulong)*param_4) * 0x100000001b3 ^
                          (ulong)param_4[1]) * 0x100000001b3 ^ (ulong)param_4[2]) * 0x100000001b3 ^
                        (ulong)param_4[3]) * 0x100000001b3 ^ (ulong)param_4[4]) * 0x100000001b3 ^
                      (ulong)param_4[5]) * 0x100000001b3 ^ (ulong)param_4[6]) * 0x100000001b3 ^
                    (ulong)param_4[7]);
          param_4 = param_4 + 8;
          uVar19 = uVar19 - 8;
        } while (uVar19 != 0);
      }
      if (uVar25 != 0) {
        uVar19 = 0;
        do {
          puVar29 = (undefined8 *)((long)puVar29 * 0x100000001b3 ^ (ulong)param_4[uVar19]);
          uVar19 = uVar19 + 1;
        } while (uVar25 != uVar19);
      }
    }
  }
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f1eb0c0;
  puStack_138 = puVar29;
  pbStack_1b0 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbStack_1b0 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbStack_1b0[8] = 0;
  pbStack_1b0[9] = 0;
  pbStack_1b0[10] = 0;
  pbStack_1b0[0xb] = 0;
  pbStack_1b0[0xc] = 0;
  pbStack_1b0[0xd] = 0;
  pbStack_1b0[0xe] = 0;
  pbStack_1b0[0xf] = 0;
  pbStack_1b0[0x10] = 0;
  pbStack_1b0[0x11] = 0;
  pbStack_1b0[0x12] = 0;
  pbStack_1b0[0x13] = 0;
  pbStack_1b0[0x14] = 0;
  pbStack_1b0[0x15] = 0;
  pbStack_1b0[0x16] = 0;
  pbStack_1b0[0x17] = 0;
  *(undefined **)pbStack_1b0 = &UNK_0f1eae80;
  puStack_198 = (undefined8 *)0x0;
  pbStack_190 = (byte *)0x0;
  if (puStack_b8 == (undefined8 *)0x0) {
    puStack_198 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b8)(&puStack_b8,&puStack_198);
    puStack_198 = puStack_b8;
  }
  puStack_b8 = (undefined8 *)0x0;
  *(undefined **)(pbStack_1b0 + 0x20) = &UNK_0f2ccd78;
  pbStack_1b0[0x28] = 0;
  pbStack_1b0[0x29] = 0;
  pbStack_1b0[0x2a] = 0;
  pbStack_1b0[0x2b] = 0;
  pbStack_1b0[0x2c] = 0;
  pbStack_1b0[0x2d] = 0;
  pbStack_1b0[0x2e] = 0;
  pbStack_1b0[0x2f] = 0;
  pbStack_1b0[0x30] = 0;
  pbStack_1b0[0x31] = 0;
  pbStack_1b0[0x32] = 0;
  pbStack_1b0[0x33] = 0;
  pbStack_1b0[0x34] = 0;
  pbStack_1b0[0x35] = 0;
  pbStack_1b0[0x36] = 0;
  pbStack_1b0[0x37] = 0;
  pbStack_1b0[0x38] = 0;
  pbStack_1b0[0x39] = 0;
  pbStack_1b0[0x3a] = 0;
  pbStack_1b0[0x3b] = 0;
  pbStack_1b0[0x3c] = 0;
  pbStack_1b0[0x3d] = 0;
  pbStack_1b0[0x3e] = 0;
  pbStack_1b0[0x3f] = 0;
  pbStack_1b0[0x40] = 0;
  pbStack_1b0[0x41] = 0;
  pbStack_1b0[0x42] = 0;
  pbStack_1b0[0x43] = 0;
  pbStack_1b0[0x44] = 0;
  pbStack_1b0[0x45] = 0;
  pbStack_1b0[0x46] = 0;
  pbStack_1b0[0x47] = 0;
  pbStack_1b0[0x48] = 0;
  pbStack_1b0[0x49] = 0;
  pbStack_1b0[0x4a] = 0;
  pbStack_1b0[0x4b] = 0;
  pbStack_1b0[0x4c] = 0;
  pbStack_1b0[0x4d] = 0;
  pbStack_1b0[0x4e] = 0;
  pbStack_1b0[0x4f] = 0;
  pbStack_1b0[0x50] = 0;
  pbStack_1b0[0x51] = 0;
  pbStack_1b0[0x52] = 0;
  pbStack_1b0[0x53] = 0;
  pbStack_1b0[0x54] = 0;
  pbStack_1b0[0x55] = 0;
  pbStack_1b0[0x56] = 0;
  pbStack_1b0[0x57] = 0;
  pbStack_1b0[0x58] = 0;
  pbStack_1b0[0x59] = 0;
  pbStack_1b0[0x5a] = 0;
  pbStack_1b0[0x5b] = 0;
  pbStack_1b0[0x5c] = 0;
  pbStack_1b0[0x5d] = 0;
  pbStack_1b0[0x5e] = 0;
  pbStack_1b0[0x5f] = 0;
  pbStack_1b0[0x60] = 0;
  pbStack_1b0[0x61] = 0;
  pbStack_1b0[0x62] = 0;
  pbStack_1b0[99] = 0;
  pbStack_1b0[100] = 0;
  pbStack_1b0[0x65] = 0;
  pbStack_1b0[0x66] = 0;
  pbStack_1b0[0x67] = 0;
  pbStack_1b0[0x68] = 0;
  func_0x04aa75f0(pbStack_1b0 + 0x70,&lStack_78,&UNK_01254d89);
  pbStack_1b0[0x80] = 0;
  pbStack_1a0 = pbStack_1b0 + 0x88;
  pbStack_1b0[0x88] = 0;
  pbStack_1b0[0x89] = 0;
  pbStack_1b0[0x8a] = 0;
  pbStack_1b0[0x8b] = 0;
  pbStack_1b0[0x8c] = 0;
  pbStack_1b0[0x8d] = 0;
  pbStack_1b0[0x8e] = 0;
  pbStack_1b0[0x8f] = 0;
  pbStack_1b0[0x90] = 0;
  pbStack_1b0[0x91] = 0;
  pbStack_1b0[0x92] = 0;
  pbStack_1b0[0x93] = 0;
  pbStack_1b0[0x94] = 0;
  pbStack_1b0[0x95] = 0;
  pbStack_1b0[0x96] = 0;
  pbStack_1b0[0x97] = 0;
  pbStack_1b0[0x98] = 0;
  pbStack_1b0[0x99] = 0;
  pbStack_1b0[0x9a] = 0;
  pbStack_1b0[0x9b] = 0;
  pbStack_1b0[0x9c] = 0;
  pbStack_1b0[0x9d] = 0;
  pbStack_1b0[0x9e] = 0;
  pbStack_1b0[0x9f] = 0;
  pbStack_1b0[0xa0] = 0;
  pbStack_1b0[0xa1] = 0;
  pbStack_1b0[0xa2] = 0;
  pbStack_1b0[0xa3] = 0;
  pbStack_1b0[0xa4] = 0;
  pbStack_1b0[0xa5] = 0;
  pbStack_1b0[0xa6] = 0;
  pbStack_1b0[0xa7] = 0;
  pbStack_1b0[0xa8] = 0;
  pbStack_1b0[0xa9] = 0;
  pbStack_1b0[0xaa] = 0;
  pbStack_1b0[0xab] = 0;
  pbStack_1b0[0xac] = 0;
  pbStack_1b0[0xad] = 0;
  pbStack_1b0[0xae] = 0;
  pbStack_1b0[0xaf] = 0;
  pbStack_1b0[0xb0] = 0;
  pbStack_1b0[0xb1] = 0;
  pbStack_1b0[0xb2] = 0;
  pbStack_1b0[0xb3] = 0;
  pbStack_1b0[0xb4] = 0;
  pbStack_1b0[0xb5] = 0;
  pbStack_1b0[0xb6] = 0;
  pbStack_1b0[0xb7] = 0;
  pbStack_1b0[0xb8] = 0xff;
  pbStack_1b0[0xb9] = 0xff;
  pbStack_1b0[0xba] = 0xff;
  pbStack_1b0[0xbb] = 0xff;
  pbStack_1b0[0xbc] = 0;
  pbStack_1b0[0xbd] = 0;
  pbStack_1b0[0xbe] = 0;
  pbStack_1b0[0xbf] = 0;
  pbStack_1b0[0x130] = 0;
  pbStack_1b0[0x131] = 0;
  pbStack_1b0[0x132] = 0;
  pbStack_1b0[0x133] = 0;
  pbStack_1b0[0x134] = 0;
  pbStack_1b0[0x135] = 0;
  pbStack_1b0[0x136] = 0;
  pbStack_1b0[0x137] = 0;
  pbStack_1b0[0x138] = 0;
  pbStack_1b0[0x139] = 0;
  pbStack_1b0[0x13a] = 0;
  pbStack_1b0[0x13b] = 0;
  pbStack_1b0[0x13c] = 0;
  pbStack_1b0[0x13d] = 0;
  pbStack_1b0[0x13e] = 0;
  pbStack_1b0[0x13f] = 0;
  pbStack_1b0[0xc0] = 0;
  pbStack_1b0[0xc1] = 0;
  pbStack_1b0[0xc2] = 0;
  pbStack_1b0[0xc3] = 0;
  pbStack_1b0[0xc4] = 0;
  pbStack_1b0[0xc5] = 0;
  pbStack_1b0[0xc6] = 0;
  pbStack_1b0[199] = 0;
  pbStack_1b0[200] = 0;
  pbStack_1b0[0xc9] = 0;
  pbStack_1b0[0xca] = 0;
  pbStack_1b0[0xcb] = 0;
  pbStack_1b0[0xcc] = 0;
  pbStack_1b0[0xcd] = 0;
  pbStack_1b0[0xce] = 0;
  pbStack_1b0[0xcf] = 0;
  pbStack_1b0[0xd0] = 0;
  pbStack_1b0[0xd1] = 0;
  pbStack_1b0[0xd2] = 0;
  pbStack_1b0[0xd3] = 0;
  pbStack_1b0[0xd4] = 0;
  pbStack_1b0[0xd5] = 0;
  pbStack_1b0[0xd6] = 0;
  pbStack_1b0[0xd7] = 0;
  pbStack_1b0[0xd8] = 0;
  pbStack_1b0[0xd9] = 0;
  pbStack_1b0[0xda] = 0;
  pbStack_1b0[0xdb] = 0;
  pbStack_1b0[0xdc] = 0;
  pbStack_1b0[0xdd] = 0;
  pbStack_1b0[0xde] = 0;
  pbStack_1b0[0xdf] = 0;
  pbStack_1b0[0xe0] = 0;
  pbStack_1b0[0xe1] = 0;
  pbStack_1b0[0xe2] = 0;
  pbStack_1b0[0xe3] = 0;
  pbStack_1b0[0xe4] = 0;
  pbStack_1b0[0xe5] = 0;
  pbStack_1b0[0xe6] = 0;
  pbStack_1b0[0xe7] = 0;
  pbStack_1b0[0xe8] = 0;
  pbStack_1b0[0xe9] = 0;
  pbStack_1b0[0xea] = 0;
  pbStack_1b0[0xeb] = 0;
  pbStack_1b0[0xec] = 0;
  pbStack_1b0[0xed] = 0;
  pbStack_1b0[0xee] = 0;
  pbStack_1b0[0xef] = 0;
  pbStack_1b0[0xf0] = 0;
  pbStack_1b0[0xf1] = 0;
  pbStack_1b0[0xf2] = 0;
  pbStack_1b0[0xf3] = 0;
  pbStack_1b0[0xf4] = 0;
  pbStack_1b0[0xf5] = 0;
  pbStack_1b0[0xf6] = 0;
  pbStack_1b0[0xf7] = 0;
  pbStack_1b0[0xf8] = 0;
  pbStack_1b0[0xf9] = 0;
  pbStack_1b0[0xfa] = 0;
  pbStack_1b0[0xfb] = 0;
  pbStack_1b0[0xfc] = 0;
  pbStack_1b0[0xfd] = 0;
  pbStack_1b0[0xfe] = 0;
  pbStack_1b0[0xff] = 0;
  *(undefined **)(pbStack_1b0 + 0x20) = &UNK_0f1eaed0;
  ppuVar2 = (undefined8 **)(pbStack_1b0 + 0x170);
  pbStack_1b0[0x170] = 0;
  pbStack_1b0[0x171] = 0;
  pbStack_1b0[0x172] = 0;
  pbStack_1b0[0x173] = 0;
  pbStack_1b0[0x174] = 0;
  pbStack_1b0[0x175] = 0;
  pbStack_1b0[0x176] = 0;
  pbStack_1b0[0x177] = 0;
  pbStack_1b0[0x178] = 0;
  pbStack_1b0[0x179] = 0;
  pbStack_1b0[0x17a] = 0;
  pbStack_1b0[0x17b] = 0;
  pbStack_1b0[0x17c] = 0;
  pbStack_1b0[0x17d] = 0;
  pbStack_1b0[0x17e] = 0;
  pbStack_1b0[0x17f] = 0;
  if (ppuVar2 != &puStack_198) {
    if (puStack_198 == (undefined8 *)0x0) {
      puVar29 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_198)(&puStack_198,ppuVar2);
      puVar29 = puStack_198;
    }
    puStack_198 = (undefined8 *)0x0;
    *ppuVar2 = puVar29;
  }
  pbVar28 = pbStack_1b0 + 0x20;
  puStack_e8 = (uint *)(pbStack_1b0 + 0x90);
  if (pbStack_1a0 != &DAT_0f551f58) {
    if ((*puStack_e8 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(pbStack_1b0 + 0xa0) = _DAT_0f551f70;
        uVar12 = uRam000000000f551f6c;
        uVar11 = _DAT_0f551f68;
        uVar10 = uRam000000000f551f64;
        *puStack_e8 = _DAT_0f551f60;
        *(undefined4 *)(pbStack_1b0 + 0x94) = uVar10;
        *(undefined4 *)(pbStack_1b0 + 0x98) = uVar11;
        *(undefined4 *)(pbStack_1b0 + 0x9c) = uVar12;
      }
      else {
        func_0x04885070(puStack_e8,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar32 = (_DAT_0f551f60 & 1) != 0;
      lVar23 = 0xf551f61;
      if (bVar32) {
        lVar23 = _DAT_0f551f70;
      }
      uVar19 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar32) {
        uVar19 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puStack_e8,lVar23,uVar19);
    }
  }
  pbVar20 = pbStack_1b0 + 8;
  *(long *)(pbStack_1b0 + 0x88) = _DAT_0f551f58;
  pbStack_1b0[0xa8] = 0;
  pbStack_1b0[0xa9] = 0;
  pbStack_1b0[0xaa] = 0;
  pbStack_1b0[0xab] = 0;
  pbStack_1b0[0xac] = 0;
  pbStack_1b0[0xad] = 0;
  pbStack_1b0[0xae] = 0;
  pbStack_1b0[0xaf] = 0;
  if (puStack_198 != (undefined8 *)0x0) {
    (*(code *)puStack_198[1])(&puStack_198);
  }
  LOCK();
  *(long *)pbVar20 = *(long *)pbVar20 + 1;
  UNLOCK();
  pbStack_f8 = pbVar20;
  uStack_ec = param_5;
  pbStack_c8 = param_2;
  pbStack_c0 = param_3;
  pbVar20 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar20 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar29 = puStack_138;
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
  *(undefined **)pbVar20 = &UNK_0f1eafc8;
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
  *(undefined **)(pbVar20 + 0x20) = &UNK_0f1eb018;
  *(byte **)(pbVar20 + 0x70) = pbVar28;
  *(byte **)(pbVar20 + 0x78) = pbStack_1b0;
  LOCK();
  *(long *)(pbStack_1b0 + 8) = *(long *)(pbStack_1b0 + 8) + 1;
  UNLOCK();
  pbStack_d0 = pbVar20 + 8;
  pbStack_e0 = *(byte **)(pbStack_148 + 0xb8);
  pbVar26 = *(byte **)(pbStack_148 + 0xc0);
  pbVar31 = pbStack_1b0;
  pbStack_150 = pbVar20;
  pbStack_d8 = pbVar28;
  if (pbStack_e0 != pbVar26) {
    if (((ulong)uStack_130 & 1) == 0) {
      lStack_1b8 = (long)&uStack_130 + 1;
      pbVar31 = (byte *)((ulong)uStack_130 >> 1 & 0x7f);
    }
    else {
      lStack_1b8 = lStack_120;
      pbVar31 = uStack_128;
    }
    pbStack_140 = pbStack_118;
    pbVar28 = pbStack_e0 + 0x19;
    do {
      if (*(undefined8 **)(pbVar28 + -9) == puVar29) {
        param_3 = pbVar28 + -9;
        if ((*(undefined8 ***)(pbVar28 + 0x17) == &puStack_138) && (param_3 == pbStack_140)) {
LAB_09e3f492:
          pbVar28 = pbVar28 + -0x19;
          goto LAB_09e3f496;
        }
        bVar8 = pbVar28[-1];
        if ((bVar8 & 1) == 0) {
          pbVar27 = (byte *)(ulong)(bVar8 >> 1);
        }
        else {
          pbVar27 = *(byte **)(pbVar28 + 7);
        }
        if (pbVar27 == pbVar31) {
          pbVar27 = pbVar28;
          if ((bVar8 & 1) != 0) {
            pbVar27 = *(byte **)(pbVar28 + 0xf);
          }
          iVar18 = func_0x0eee3000(pbVar27,lStack_1b8,pbVar31);
          if (iVar18 == 0) {
            *(undefined8 ***)(pbVar28 + 0x17) = &puStack_138;
            pbStack_118 = param_3;
            goto LAB_09e3f492;
          }
        }
      }
      pbVar28[0x17] = 0;
      pbVar28[0x18] = 0;
      pbVar28[0x19] = 0;
      pbVar28[0x1a] = 0;
      pbVar28[0x1b] = 0;
      pbVar28[0x1c] = 0;
      pbVar28[0x1d] = 0;
      pbVar28[0x1e] = 0;
      pbVar27 = pbVar28 + 0x8f;
      pbVar28 = pbVar28 + 0xa8;
    } while (pbVar27 != pbVar26);
  }
  pbVar28 = pbStack_148;
  if (pbVar26 < *(byte **)(pbStack_148 + 200)) {
    func_0x09e9faa0(pbVar26);
    pbVar26 = pbVar26 + 0xa8;
    *(byte **)(pbVar28 + 0xc0) = pbVar26;
LAB_09e3f2f1:
    *(byte **)(pbVar28 + 0xc0) = pbVar26;
    func_0x0b63b6d0(*(long *)(pbVar26 + -0xa8),&puStack_138);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    *(byte *)(lVar23 + -7) = pbVar28[0x60];
    if ((undefined8 **)(lVar23 + -0x98) != &puStack_138) {
      pbVar31 = (byte *)(lVar23 + -0x90);
      if ((*pbVar31 & 1) == 0) {
        if (((ulong)uStack_130 & 1) == 0) {
          *(long *)(lVar23 + -0x80) = lStack_120;
          *(undefined4 *)pbVar31 = (undefined4)uStack_130;
          *(undefined4 *)(lVar23 + -0x8c) = uStack_130._4_4_;
          *(undefined4 *)(lVar23 + -0x88) = (undefined4)uStack_128;
          *(undefined4 *)(lVar23 + -0x84) = uStack_128._4_4_;
        }
        else {
          func_0x04885070(pbVar31,lStack_120,uStack_128);
        }
      }
      else {
        pbVar26 = (byte *)((ulong)uStack_130 >> 1 & 0x7f);
        lVar7 = (long)&uStack_130 + 1;
        if (((ulong)uStack_130 & 1) != 0) {
          pbVar26 = uStack_128;
          lVar7 = lStack_120;
        }
        func_0x04885120(pbVar31,lVar7,pbVar26);
      }
    }
    *(undefined8 **)(lVar23 + -0x98) = puStack_138;
    *(undefined8 *)(lVar23 + -0x78) = 0;
    FUN_04aa9390(&puStack_198,&uStack_130,pbVar28[0x60]);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    func_0x04167a70(lVar23 + -0x70,&puStack_198);
    *(byte **)(lVar23 + -0x68) = pbStack_190;
    *(byte **)(lVar23 + -0x60) = pbStack_188;
    *(undefined8 **)(lVar23 + -0x58) = puStack_180;
    *(byte **)(lVar23 + -0x50) = pbStack_178;
    uVar10 = (undefined4)uStack_170;
    uVar11 = uStack_170._4_4_;
    uVar12 = (undefined4)uStack_168;
    uVar16 = uStack_168._4_4_;
    uStack_170 = 0;
    uStack_168 = (byte *)0x0;
    plVar9 = *(long **)(lVar23 + -0x40);
    *(undefined4 *)(lVar23 + -0x48) = uVar10;
    *(undefined4 *)(lVar23 + -0x44) = uVar11;
    *(undefined4 *)(lVar23 + -0x40) = uVar12;
    *(undefined4 *)(lVar23 + -0x3c) = uVar16;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
    }
    pbVar26 = uStack_168;
    *(undefined8 *)(lVar23 + -0x38) = uStack_160;
    if (uStack_168 != (byte *)0x0) {
      LOCK();
      pbVar31 = uStack_168 + 8;
      lVar23 = *(long *)pbVar31;
      *(long *)pbVar31 = *(long *)pbVar31 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)uStack_168 + 0x10))(uStack_168);
        FUN_0412c2d0(pbVar26);
      }
    }
    FUN_04167a40(&puStack_198);
    lVar23 = *(long *)(pbVar28 + 0xc0);
    *(char *)(lVar23 + -8) = (char)uStack_ec;
    pbVar28 = (byte *)(lVar23 + -0xa8);
LAB_09e3f496:
    pbVar31 = *(byte **)(pbVar28 + 0x90);
    if (*(byte **)(pbVar28 + 0x98) <= pbVar31) {
      pbVar31 = pbVar31 + -*(long *)(pbVar28 + 0x88);
      param_3 = (byte *)(((long)pbVar31 >> 3) * 0x6db6db6db6db6db7 + 1);
      pbVar27 = pbVar31;
      if (param_3 < (byte *)0x492492492492493) {
        lVar23 = (long)*(byte **)(pbVar28 + 0x98) - *(long *)(pbVar28 + 0x88) >> 3;
        pbVar27 = (byte *)(lVar23 * -0x2492492492492492);
        if (param_3 < pbVar27) {
          param_3 = pbVar27;
        }
        pbStack_178 = pbVar28 + 0x88;
        if (0x249249249249248 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
          param_3 = (byte *)0x492492492492492;
        }
        pbStack_140 = pbStack_178;
        if (param_3 == (byte *)0x0) {
          puVar29 = (undefined8 *)0x0;
        }
        else {
          if ((byte *)0x492492492492492 < param_3) goto LAB_09e4047b;
          puVar29 = (undefined8 *)
                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)param_3 * 0x38);
          if (puVar29 == (undefined8 *)0x0) {
            func_0x0eec74c0((long)param_3 * 0x38,0);
            puVar29 = (undefined8 *)0x0;
          }
        }
        pbVar26 = (byte *)((long)puVar29 + (long)pbVar31);
        puStack_180 = puVar29 + (long)param_3 * 7;
        pbVar27 = (byte *)((long)(puVar29 + 2) + (long)pbVar31);
        pbVar27[0] = 0;
        pbVar27[1] = 0;
        pbVar27[2] = 0;
        pbVar27[3] = 0;
        pbVar27[4] = 0;
        pbVar27[5] = 0;
        pbVar27[6] = 0;
        pbVar27[7] = 0;
        pbVar27[8] = 0;
        pbVar27[9] = 0;
        pbVar27[10] = 0;
        pbVar27[0xb] = 0;
        pbVar27[0xc] = 0;
        pbVar27[0xd] = 0;
        pbVar27[0xe] = 0;
        pbVar27[0xf] = 0;
        pbVar27 = (byte *)((long)puVar29 + (long)pbVar31);
        pbVar27[0] = 0;
        pbVar27[1] = 0;
        pbVar27[2] = 0;
        pbVar27[3] = 0;
        pbVar27[4] = 0;
        pbVar27[5] = 0;
        pbVar27[6] = 0;
        pbVar27[7] = 0;
        pbVar27[8] = 0;
        pbVar27[9] = 0;
        pbVar27[10] = 0;
        pbVar27[0xb] = 0;
        pbVar27[0xc] = 0;
        pbVar27[0xd] = 0;
        pbVar27[0xe] = 0;
        pbVar27[0xf] = 0;
        pbVar27 = (byte *)((long)(puVar29 + 4) + (long)pbVar31);
        pbVar27[0] = 0;
        pbVar27[1] = 0;
        pbVar27[2] = 0;
        pbVar27[3] = 0;
        pbVar27[4] = 0;
        pbVar27[5] = 0;
        pbVar27[6] = 0;
        pbVar27[7] = 0;
        pbStack_188 = pbVar26;
        puStack_198 = puVar29;
        pbStack_190 = pbVar26;
        if (pbVar26 != pbStack_1a0) {
          pbVar31 = (byte *)((long)puVar29 + (long)pbVar31);
          if ((*puStack_e8 & 1) == 0) {
            *(long *)(pbVar31 + 0x18) = *(long *)(puStack_e8 + 4);
            uVar13 = puStack_e8[1];
            uVar14 = puStack_e8[2];
            uVar15 = puStack_e8[3];
            *(uint *)(pbVar31 + 8) = *puStack_e8;
            *(uint *)(pbVar31 + 0xc) = uVar13;
            *(uint *)(pbVar31 + 0x10) = uVar14;
            *(uint *)(pbVar31 + 0x14) = uVar15;
          }
          else {
            func_0x04885070(pbVar31 + 8,*(long *)(pbStack_1b0 + 0xa0),*(long *)(pbStack_1b0 + 0x98))
            ;
          }
        }
        *(long *)pbVar26 = *(long *)pbStack_1a0;
        *(byte **)(pbVar26 + 0x28) = pbVar20 + 0x20;
        *(byte **)(pbVar26 + 0x30) = pbStack_150;
        LOCK();
        *(long *)(pbStack_150 + 8) = *(long *)(pbStack_150 + 8) + 1;
        UNLOCK();
        pbStack_188 = pbStack_188 + 0x38;
        puVar29 = *(undefined8 **)(pbVar28 + 0x88);
        puVar21 = *(undefined8 **)(pbVar28 + 0x90);
        pbVar20 = pbStack_190 + ((long)puVar29 - (long)puVar21);
        pbVar31 = pbVar20;
        puVar22 = puVar29;
        if ((long)puVar29 - (long)puVar21 != 0) {
          do {
            pbVar31[0x10] = 0;
            pbVar31[0x11] = 0;
            pbVar31[0x12] = 0;
            pbVar31[0x13] = 0;
            pbVar31[0x14] = 0;
            pbVar31[0x15] = 0;
            pbVar31[0x16] = 0;
            pbVar31[0x17] = 0;
            pbVar31[0x18] = 0;
            pbVar31[0x19] = 0;
            pbVar31[0x1a] = 0;
            pbVar31[0x1b] = 0;
            pbVar31[0x1c] = 0;
            pbVar31[0x1d] = 0;
            pbVar31[0x1e] = 0;
            pbVar31[0x1f] = 0;
            pbVar31[0] = 0;
            pbVar31[1] = 0;
            pbVar31[2] = 0;
            pbVar31[3] = 0;
            pbVar31[4] = 0;
            pbVar31[5] = 0;
            pbVar31[6] = 0;
            pbVar31[7] = 0;
            pbVar31[8] = 0;
            pbVar31[9] = 0;
            pbVar31[10] = 0;
            pbVar31[0xb] = 0;
            pbVar31[0xc] = 0;
            pbVar31[0xd] = 0;
            pbVar31[0xe] = 0;
            pbVar31[0xf] = 0;
            pbVar31[0x20] = 0;
            pbVar31[0x21] = 0;
            pbVar31[0x22] = 0;
            pbVar31[0x23] = 0;
            pbVar31[0x24] = 0;
            pbVar31[0x25] = 0;
            pbVar31[0x26] = 0;
            pbVar31[0x27] = 0;
            *(undefined8 *)(pbVar31 + 0x18) = puVar22[3];
            uVar17 = puVar22[2];
            *(undefined8 *)(pbVar31 + 8) = puVar22[1];
            *(undefined8 *)(pbVar31 + 0x10) = uVar17;
            *(undefined2 *)(puVar22 + 1) = 0;
            *(undefined8 *)pbVar31 = *puVar22;
            uVar10 = *(undefined4 *)((long)puVar22 + 0x2c);
            uVar11 = *(undefined4 *)(puVar22 + 6);
            uVar12 = *(undefined4 *)((long)puVar22 + 0x34);
            *(undefined4 *)(pbVar31 + 0x28) = *(undefined4 *)(puVar22 + 5);
            *(undefined4 *)(pbVar31 + 0x2c) = uVar10;
            *(undefined4 *)(pbVar31 + 0x30) = uVar11;
            *(undefined4 *)(pbVar31 + 0x34) = uVar12;
            puVar22[5] = 0;
            puVar22[6] = 0;
            puVar22 = puVar22 + 7;
            pbVar31 = pbVar31 + 0x38;
          } while (puVar22 != puVar21);
          do {
            plVar9 = (long *)puVar29[6];
            if (plVar9 == (long *)0x0) {
LAB_09e3f754:
              bVar8 = *(byte *)(puVar29 + 1);
            }
            else {
              LOCK();
              plVar1 = plVar9 + 1;
              lVar23 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar23 != 0) goto LAB_09e3f754;
              (**(code **)(*plVar9 + 0x10))(plVar9);
              FUN_0412c2d0(plVar9);
              bVar8 = *(byte *)(puVar29 + 1);
            }
            if ((bVar8 & 1) != 0) {
              func_0x0412a280(puVar29[3],puVar29[1] & 0xfffffffffffffffe);
            }
            puVar29 = puVar29 + 7;
          } while (puVar29 != puVar21);
          puVar29 = *(undefined8 **)pbStack_140;
        }
        pbVar31 = pbStack_188;
        *(byte **)(pbVar28 + 0x88) = pbVar20;
        *(byte **)(pbVar28 + 0x90) = pbStack_188;
        lVar23 = *(long *)(pbVar28 + 0x98);
        *(undefined8 **)(pbVar28 + 0x98) = puStack_180;
        if (puVar29 != (undefined8 *)0x0) {
          func_0x0412a280(puVar29,lVar23 - (long)puVar29);
        }
        goto LAB_09e3f7cc;
      }
      goto LAB_09e40480;
    }
    pbVar31[0x10] = 0;
    pbVar31[0x11] = 0;
    pbVar31[0x12] = 0;
    pbVar31[0x13] = 0;
    pbVar31[0x14] = 0;
    pbVar31[0x15] = 0;
    pbVar31[0x16] = 0;
    pbVar31[0x17] = 0;
    pbVar31[0x18] = 0;
    pbVar31[0x19] = 0;
    pbVar31[0x1a] = 0;
    pbVar31[0x1b] = 0;
    pbVar31[0x1c] = 0;
    pbVar31[0x1d] = 0;
    pbVar31[0x1e] = 0;
    pbVar31[0x1f] = 0;
    pbVar31[0] = 0;
    pbVar31[1] = 0;
    pbVar31[2] = 0;
    pbVar31[3] = 0;
    pbVar31[4] = 0;
    pbVar31[5] = 0;
    pbVar31[6] = 0;
    pbVar31[7] = 0;
    pbVar31[8] = 0;
    pbVar31[9] = 0;
    pbVar31[10] = 0;
    pbVar31[0xb] = 0;
    pbVar31[0xc] = 0;
    pbVar31[0xd] = 0;
    pbVar31[0xe] = 0;
    pbVar31[0xf] = 0;
    pbVar31[0x20] = 0;
    pbVar31[0x21] = 0;
    pbVar31[0x22] = 0;
    pbVar31[0x23] = 0;
    pbVar31[0x24] = 0;
    pbVar31[0x25] = 0;
    pbVar31[0x26] = 0;
    pbVar31[0x27] = 0;
    if (pbVar31 != pbStack_1a0) {
      if ((*puStack_e8 & 1) == 0) {
        *(long *)(pbVar31 + 0x18) = *(long *)(puStack_e8 + 4);
        lVar23 = *(long *)(puStack_e8 + 2);
        *(long *)(pbVar31 + 8) = *(long *)puStack_e8;
        *(long *)(pbVar31 + 0x10) = lVar23;
      }
      else {
        func_0x04885070(pbVar31 + 8,*(long *)(pbStack_1b0 + 0xa0),*(long *)(pbStack_1b0 + 0x98));
      }
    }
    *(long *)pbVar31 = *(long *)pbStack_1a0;
    *(byte **)(pbVar31 + 0x28) = pbVar20 + 0x20;
    *(byte **)(pbVar31 + 0x30) = pbStack_150;
    LOCK();
    *(long *)(pbStack_150 + 8) = *(long *)(pbStack_150 + 8) + 1;
    UNLOCK();
    pbVar31 = pbVar31 + 0x38;
    *(byte **)(pbVar28 + 0x90) = pbVar31;
LAB_09e3f7cc:
    pbVar26 = pbStack_c0;
    pbVar20 = pbStack_c8;
    *(byte **)(pbVar28 + 0x90) = pbVar31;
    uVar10 = *(undefined4 *)pbVar28;
    uVar11 = *(undefined4 *)(pbVar28 + 4);
    uVar12 = *(undefined4 *)(pbVar28 + 8);
    uVar16 = *(undefined4 *)(pbVar28 + 0xc);
    if (*(long *)(pbVar28 + 8) != 0) {
      LOCK();
      plVar9 = (long *)(*(long *)(pbVar28 + 8) + 8);
      *plVar9 = *plVar9 + 1;
      UNLOCK();
    }
    plVar9 = *(long **)(pbStack_1b0 + 0x78);
    *(undefined4 *)(pbStack_1b0 + 0x70) = uVar10;
    *(undefined4 *)(pbStack_1b0 + 0x74) = uVar11;
    *(undefined4 *)(pbStack_1b0 + 0x78) = uVar12;
    *(undefined4 *)(pbStack_1b0 + 0x7c) = uVar16;
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0412c2d0(plVar9);
      }
    }
    pbVar31 = pbStack_150;
    pbStack_1b0[0x80] = pbVar28[0xa1];
    LOCK();
    lVar23 = *(long *)pbStack_d0;
    *(long *)pbStack_d0 = *(long *)pbStack_d0 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbStack_150 + 0x10))(pbStack_150);
      FUN_0412c2d0(pbVar31);
    }
    pbVar28 = pbStack_f8;
    LOCK();
    lVar23 = *(long *)pbStack_f8;
    *(long *)pbStack_f8 = *(long *)pbStack_f8 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbStack_1b0 + 0x10))(pbStack_1b0);
      FUN_0412c2d0(pbStack_1b0);
      LOCK();
      lVar23 = *(long *)pbVar28;
      *(long *)pbVar28 = *(long *)pbVar28 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar23 = *(long *)pbStack_f8;
      *(long *)pbStack_f8 = *(long *)pbStack_f8 + -1;
      UNLOCK();
    }
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbStack_1b0 + 0x10))(pbStack_1b0);
      FUN_0412c2d0(pbStack_1b0);
    }
    if (puStack_b8 != (undefined8 *)0x0) {
      (*(code *)puStack_b8[1])(&puStack_b8);
    }
    if (((ulong)uStack_130 & 1) != 0) {
      func_0x0412a280(lStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
    }
    pbStack_70 = pbVar20;
    pbStack_68 = pbVar26;
    uStack_130 = pbVar20;
    uStack_128 = pbVar26;
    lStack_78 = 0;
    puStack_138 = (undefined8 *)&UNK_0f1eb310;
    param_3 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
    if (param_3 == (byte *)0x0) {
      func_0x0eec74c0(0x200,0);
    }
    puStack_198 = puStack_138;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    *(undefined **)param_3 = &UNK_0f1eb0e8;
    pbStack_190 = uStack_130;
    pbStack_188 = uStack_128;
    puStack_138 = (undefined8 *)0x0;
    *(undefined **)(param_3 + 0x20) = &UNK_0f2ccd78;
    param_3[0x28] = 0;
    param_3[0x29] = 0;
    param_3[0x2a] = 0;
    param_3[0x2b] = 0;
    param_3[0x2c] = 0;
    param_3[0x2d] = 0;
    param_3[0x2e] = 0;
    param_3[0x2f] = 0;
    param_3[0x30] = 0;
    param_3[0x31] = 0;
    param_3[0x32] = 0;
    param_3[0x33] = 0;
    param_3[0x34] = 0;
    param_3[0x35] = 0;
    param_3[0x36] = 0;
    param_3[0x37] = 0;
    param_3[0x38] = 0;
    param_3[0x39] = 0;
    param_3[0x3a] = 0;
    param_3[0x3b] = 0;
    param_3[0x3c] = 0;
    param_3[0x3d] = 0;
    param_3[0x3e] = 0;
    param_3[0x3f] = 0;
    param_3[0x40] = 0;
    param_3[0x41] = 0;
    param_3[0x42] = 0;
    param_3[0x43] = 0;
    param_3[0x44] = 0;
    param_3[0x45] = 0;
    param_3[0x46] = 0;
    param_3[0x47] = 0;
    param_3[0x48] = 0;
    param_3[0x49] = 0;
    param_3[0x4a] = 0;
    param_3[0x4b] = 0;
    param_3[0x4c] = 0;
    param_3[0x4d] = 0;
    param_3[0x4e] = 0;
    param_3[0x4f] = 0;
    param_3[0x50] = 0;
    param_3[0x51] = 0;
    param_3[0x52] = 0;
    param_3[0x53] = 0;
    param_3[0x54] = 0;
    param_3[0x55] = 0;
    param_3[0x56] = 0;
    param_3[0x57] = 0;
    param_3[0x58] = 0;
    param_3[0x59] = 0;
    param_3[0x5a] = 0;
    param_3[0x5b] = 0;
    param_3[0x5c] = 0;
    param_3[0x5d] = 0;
    param_3[0x5e] = 0;
    param_3[0x5f] = 0;
    param_3[0x60] = 0;
    param_3[0x61] = 0;
    param_3[0x62] = 0;
    param_3[99] = 0;
    param_3[100] = 0;
    param_3[0x65] = 0;
    param_3[0x66] = 0;
    param_3[0x67] = 0;
    param_3[0x68] = 0;
    func_0x04aa75f0(param_3 + 0x70,&uStack_151,&UNK_01254d89);
    param_3[0x80] = 0;
    pbVar28 = param_3 + 0x88;
    param_3[0x88] = 0;
    param_3[0x89] = 0;
    param_3[0x8a] = 0;
    param_3[0x8b] = 0;
    param_3[0x8c] = 0;
    param_3[0x8d] = 0;
    param_3[0x8e] = 0;
    param_3[0x8f] = 0;
    param_3[0x90] = 0;
    param_3[0x91] = 0;
    param_3[0x92] = 0;
    param_3[0x93] = 0;
    param_3[0x94] = 0;
    param_3[0x95] = 0;
    param_3[0x96] = 0;
    param_3[0x97] = 0;
    param_3[0x98] = 0;
    param_3[0x99] = 0;
    param_3[0x9a] = 0;
    param_3[0x9b] = 0;
    param_3[0x9c] = 0;
    param_3[0x9d] = 0;
    param_3[0x9e] = 0;
    param_3[0x9f] = 0;
    param_3[0xa0] = 0;
    param_3[0xa1] = 0;
    param_3[0xa2] = 0;
    param_3[0xa3] = 0;
    param_3[0xa4] = 0;
    param_3[0xa5] = 0;
    param_3[0xa6] = 0;
    param_3[0xa7] = 0;
    param_3[0xa8] = 0;
    param_3[0xa9] = 0;
    param_3[0xaa] = 0;
    param_3[0xab] = 0;
    param_3[0xac] = 0;
    param_3[0xad] = 0;
    param_3[0xae] = 0;
    param_3[0xaf] = 0;
    param_3[0xb0] = 0;
    param_3[0xb1] = 0;
    param_3[0xb2] = 0;
    param_3[0xb3] = 0;
    param_3[0xb4] = 0;
    param_3[0xb5] = 0;
    param_3[0xb6] = 0;
    param_3[0xb7] = 0;
    param_3[0xb8] = 0xff;
    param_3[0xb9] = 0xff;
    param_3[0xba] = 0xff;
    param_3[0xbb] = 0xff;
    param_3[0xbc] = 0;
    param_3[0xbd] = 0;
    param_3[0xbe] = 0;
    param_3[0xbf] = 0;
    param_3[0x130] = 0;
    param_3[0x131] = 0;
    param_3[0x132] = 0;
    param_3[0x133] = 0;
    param_3[0x134] = 0;
    param_3[0x135] = 0;
    param_3[0x136] = 0;
    param_3[0x137] = 0;
    param_3[0x138] = 0;
    param_3[0x139] = 0;
    param_3[0x13a] = 0;
    param_3[0x13b] = 0;
    param_3[0x13c] = 0;
    param_3[0x13d] = 0;
    param_3[0x13e] = 0;
    param_3[0x13f] = 0;
    param_3[0xc0] = 0;
    param_3[0xc1] = 0;
    param_3[0xc2] = 0;
    param_3[0xc3] = 0;
    param_3[0xc4] = 0;
    param_3[0xc5] = 0;
    param_3[0xc6] = 0;
    param_3[199] = 0;
    param_3[200] = 0;
    param_3[0xc9] = 0;
    param_3[0xca] = 0;
    param_3[0xcb] = 0;
    param_3[0xcc] = 0;
    param_3[0xcd] = 0;
    param_3[0xce] = 0;
    param_3[0xcf] = 0;
    param_3[0xd0] = 0;
    param_3[0xd1] = 0;
    param_3[0xd2] = 0;
    param_3[0xd3] = 0;
    param_3[0xd4] = 0;
    param_3[0xd5] = 0;
    param_3[0xd6] = 0;
    param_3[0xd7] = 0;
    param_3[0xd8] = 0;
    param_3[0xd9] = 0;
    param_3[0xda] = 0;
    param_3[0xdb] = 0;
    param_3[0xdc] = 0;
    param_3[0xdd] = 0;
    param_3[0xde] = 0;
    param_3[0xdf] = 0;
    param_3[0xe0] = 0;
    param_3[0xe1] = 0;
    param_3[0xe2] = 0;
    param_3[0xe3] = 0;
    param_3[0xe4] = 0;
    param_3[0xe5] = 0;
    param_3[0xe6] = 0;
    param_3[0xe7] = 0;
    param_3[0xe8] = 0;
    param_3[0xe9] = 0;
    param_3[0xea] = 0;
    param_3[0xeb] = 0;
    param_3[0xec] = 0;
    param_3[0xed] = 0;
    param_3[0xee] = 0;
    param_3[0xef] = 0;
    param_3[0xf0] = 0;
    param_3[0xf1] = 0;
    param_3[0xf2] = 0;
    param_3[0xf3] = 0;
    param_3[0xf4] = 0;
    param_3[0xf5] = 0;
    param_3[0xf6] = 0;
    param_3[0xf7] = 0;
    param_3[0xf8] = 0;
    param_3[0xf9] = 0;
    param_3[0xfa] = 0;
    param_3[0xfb] = 0;
    param_3[0xfc] = 0;
    param_3[0xfd] = 0;
    param_3[0xfe] = 0;
    param_3[0xff] = 0;
    *(undefined **)(param_3 + 0x20) = &UNK_0f1eb138;
    param_3[0x170] = 0;
    param_3[0x171] = 0;
    param_3[0x172] = 0;
    param_3[0x173] = 0;
    param_3[0x174] = 0;
    param_3[0x175] = 0;
    param_3[0x176] = 0;
    param_3[0x177] = 0;
    param_3[0x178] = 0;
    param_3[0x179] = 0;
    param_3[0x17a] = 0;
    param_3[0x17b] = 0;
    param_3[0x17c] = 0;
    param_3[0x17d] = 0;
    param_3[0x17e] = 0;
    param_3[0x17f] = 0;
    param_3[0x180] = 0;
    param_3[0x181] = 0;
    param_3[0x182] = 0;
    param_3[0x183] = 0;
    param_3[0x184] = 0;
    param_3[0x185] = 0;
    param_3[0x186] = 0;
    param_3[0x187] = 0;
    param_3[0x188] = 0;
    param_3[0x189] = 0;
    param_3[0x18a] = 0;
    param_3[0x18b] = 0;
    param_3[0x18c] = 0;
    param_3[0x18d] = 0;
    param_3[0x18e] = 0;
    param_3[399] = 0;
    param_3[400] = 0;
    param_3[0x191] = 0;
    param_3[0x192] = 0;
    param_3[0x193] = 0;
    param_3[0x194] = 0;
    param_3[0x195] = 0;
    param_3[0x196] = 0;
    param_3[0x197] = 0;
    param_3[0x198] = 0;
    param_3[0x199] = 0;
    param_3[0x19a] = 0;
    param_3[0x19b] = 0;
    param_3[0x19c] = 0;
    param_3[0x19d] = 0;
    param_3[0x19e] = 0;
    param_3[0x19f] = 0;
    param_3[0x1a0] = 0;
    param_3[0x1a1] = 0;
    param_3[0x1a2] = 0;
    param_3[0x1a3] = 0;
    param_3[0x1a4] = 0;
    param_3[0x1a5] = 0;
    param_3[0x1a6] = 0;
    param_3[0x1a7] = 0;
    param_3[0x1a8] = 0;
    param_3[0x1a9] = 0;
    param_3[0x1aa] = 0x80;
    param_3[0x1ab] = 0x3f;
    param_3[0x1b0] = 0;
    param_3[0x1b1] = 0;
    param_3[0x1b2] = 0;
    param_3[0x1b3] = 0;
    param_3[0x1b4] = 0;
    param_3[0x1b5] = 0;
    param_3[0x1b6] = 0;
    param_3[0x1b7] = 0;
    param_3[0x1b8] = 0;
    param_3[0x1b9] = 0;
    param_3[0x1ba] = 0;
    param_3[0x1bb] = 0;
    param_3[0x1bc] = 0;
    param_3[0x1bd] = 0;
    param_3[0x1be] = 0;
    param_3[0x1bf] = 0;
    if (puStack_198 == (undefined8 *)0x0) {
      puVar29 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_198)(&puStack_198,param_3 + 0x1b0);
      puVar29 = puStack_198;
    }
    puStack_198 = (undefined8 *)0x0;
    *(undefined8 **)(param_3 + 0x1b0) = puVar29;
    param_3[0x1f0] = 0;
    puVar6 = (uint *)(param_3 + 0x90);
    if (pbVar28 != &DAT_0f552138) {
      if ((*puVar6 & 1) == 0) {
        if ((_DAT_0f552140 & 1) == 0) {
          *(long *)(param_3 + 0xa0) = _DAT_0f552150;
          uVar12 = uRam000000000f55214c;
          uVar11 = _DAT_0f552148;
          uVar10 = uRam000000000f552144;
          *puVar6 = _DAT_0f552140;
          *(undefined4 *)(param_3 + 0x94) = uVar10;
          *(undefined4 *)(param_3 + 0x98) = uVar11;
          *(undefined4 *)(param_3 + 0x9c) = uVar12;
        }
        else {
          func_0x04885070(puVar6,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
        }
      }
      else {
        bVar32 = (_DAT_0f552140 & 1) != 0;
        lVar23 = 0xf552141;
        if (bVar32) {
          lVar23 = _DAT_0f552150;
        }
        uVar19 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
        if (bVar32) {
          uVar19 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
        }
        func_0x04885120(puVar6,lVar23,uVar19);
      }
    }
    *(long *)(param_3 + 0x88) = _DAT_0f552138;
    param_3[0xa8] = 0;
    param_3[0xa9] = 0;
    param_3[0xaa] = 0;
    param_3[0xab] = 0;
    param_3[0xac] = 0;
    param_3[0xad] = 0;
    param_3[0xae] = 0;
    param_3[0xaf] = 0;
    if (puStack_198 != (undefined8 *)0x0) {
      (*(code *)puStack_198[1])(&puStack_198);
    }
    pbVar20 = param_3 + 8;
    if (puStack_138 != (undefined8 *)0x0) {
      (*(code *)puStack_138[1])(&puStack_138);
    }
    LOCK();
    *(long *)pbVar20 = *(long *)pbVar20 + 1;
    UNLOCK();
    pbVar27 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (pbVar27 == (byte *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    pbVar27[8] = 0;
    pbVar27[9] = 0;
    pbVar27[10] = 0;
    pbVar27[0xb] = 0;
    pbVar27[0xc] = 0;
    pbVar27[0xd] = 0;
    pbVar27[0xe] = 0;
    pbVar27[0xf] = 0;
    pbVar27[0x10] = 0;
    pbVar27[0x11] = 0;
    pbVar27[0x12] = 0;
    pbVar27[0x13] = 0;
    pbVar27[0x14] = 0;
    pbVar27[0x15] = 0;
    pbVar27[0x16] = 0;
    pbVar27[0x17] = 0;
    *(undefined **)pbVar27 = &UNK_0f1eb218;
    pbVar27[0x30] = 0;
    pbVar27[0x31] = 0;
    pbVar27[0x32] = 0;
    pbVar27[0x33] = 0;
    pbVar27[0x34] = 0;
    pbVar27[0x35] = 0;
    pbVar27[0x36] = 0;
    pbVar27[0x37] = 0;
    pbVar27[0x38] = 0;
    pbVar27[0x39] = 0;
    pbVar27[0x3a] = 0;
    pbVar27[0x3b] = 0;
    pbVar27[0x3c] = 0;
    pbVar27[0x3d] = 0;
    pbVar27[0x3e] = 0;
    pbVar27[0x3f] = 0;
    *(undefined **)(pbVar27 + 0x20) = &UNK_0f1eb268;
    *(byte **)(pbVar27 + 0x70) = param_3 + 0x20;
    *(byte **)(pbVar27 + 0x78) = param_3;
    LOCK();
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
    UNLOCK();
    pbStack_140 = pbVar27 + 8;
    puVar22 = *(undefined8 **)(pbStack_1b0 + 0xe0);
    puVar21 = *(undefined8 **)(pbStack_1b0 + 0xd8);
    for (puVar29 = puVar21; pbStack_1a0 = pbVar27, pbStack_148 = pbVar28, puVar29 != puVar22;
        puVar29 = puVar29 + 0x15) {
      if ((puVar29[0xf] == 0) && (puVar29[0x10] == -1)) goto LAB_09e3ffc1;
    }
    if (puVar22 < *(undefined8 **)(pbStack_1b0 + 0xe8)) {
      func_0x09ea2080(puVar22);
      *(undefined8 **)(pbStack_1b0 + 0xe0) = puVar22 + 0x15;
      *(undefined8 **)(pbStack_1b0 + 0xe0) = puVar22 + 0x15;
      pbVar31 = (byte *)*puVar22;
      bVar8 = *pbVar31;
joined_r0x09e3ff6d:
      if ((bVar8 & 1) == 0) {
        *pbVar31 = 0x26;
        pbVar31 = pbVar31 + 1;
      }
      else {
        pbVar31[8] = 0x13;
        pbVar31[9] = 0;
        pbVar31[10] = 0;
        pbVar31[0xb] = 0;
        pbVar31[0xc] = 0;
        pbVar31[0xd] = 0;
        pbVar31[0xe] = 0;
        pbVar31[0xf] = 0;
        pbVar31 = *(byte **)(pbVar31 + 0x10);
      }
      uVar12 = _UNK_01494d69;
      uVar11 = _UNK_01494d65;
      uVar10 = _UNK_01494d61;
      *(undefined4 *)pbVar31 = _DAT_01494d5d;
      *(undefined4 *)(pbVar31 + 4) = uVar10;
      *(undefined4 *)(pbVar31 + 8) = uVar11;
      *(undefined4 *)(pbVar31 + 0xc) = uVar12;
      pbVar31[0xf] = 0x65;
      pbVar31[0x10] = 0x6e;
      pbVar31[0x11] = 0x74;
      pbVar31[0x12] = 0x3e;
      pbVar31[0x13] = 0;
      lVar23 = *(long *)(pbStack_1b0 + 0xe0);
      puVar29 = (undefined8 *)(lVar23 + -0xa8);
      *(byte *)(lVar23 + -7) = pbStack_1b0[0x80];
      *(undefined8 *)(lVar23 + -0x30) = 0;
      *(undefined8 *)(lVar23 + -0x28) = 0xffffffffffffffff;
      *(undefined1 *)(lVar23 + -8) = 0;
LAB_09e3ffc1:
      pbVar26 = (byte *)puVar29[0x12];
      if (pbVar26 < (byte *)puVar29[0x13]) {
        pbVar26[0x10] = 0;
        pbVar26[0x11] = 0;
        pbVar26[0x12] = 0;
        pbVar26[0x13] = 0;
        pbVar26[0x14] = 0;
        pbVar26[0x15] = 0;
        pbVar26[0x16] = 0;
        pbVar26[0x17] = 0;
        pbVar26[0x18] = 0;
        pbVar26[0x19] = 0;
        pbVar26[0x1a] = 0;
        pbVar26[0x1b] = 0;
        pbVar26[0x1c] = 0;
        pbVar26[0x1d] = 0;
        pbVar26[0x1e] = 0;
        pbVar26[0x1f] = 0;
        pbVar26[0] = 0;
        pbVar26[1] = 0;
        pbVar26[2] = 0;
        pbVar26[3] = 0;
        pbVar26[4] = 0;
        pbVar26[5] = 0;
        pbVar26[6] = 0;
        pbVar26[7] = 0;
        pbVar26[8] = 0;
        pbVar26[9] = 0;
        pbVar26[10] = 0;
        pbVar26[0xb] = 0;
        pbVar26[0xc] = 0;
        pbVar26[0xd] = 0;
        pbVar26[0xe] = 0;
        pbVar26[0xf] = 0;
        pbVar26[0x20] = 0;
        pbVar26[0x21] = 0;
        pbVar26[0x22] = 0;
        pbVar26[0x23] = 0;
        pbVar26[0x24] = 0;
        pbVar26[0x25] = 0;
        pbVar26[0x26] = 0;
        pbVar26[0x27] = 0;
        if (pbVar26 != pbVar28) {
          if ((*puVar6 & 1) == 0) {
            *(long *)(pbVar26 + 0x18) = *(long *)(param_3 + 0xa0);
            lVar23 = *(long *)(param_3 + 0x98);
            *(long *)(pbVar26 + 8) = *(long *)puVar6;
            *(long *)(pbVar26 + 0x10) = lVar23;
          }
          else {
            func_0x04885070(pbVar26 + 8,*(long *)(param_3 + 0xa0),*(long *)(param_3 + 0x98));
          }
        }
        *(long *)pbVar26 = *(long *)pbVar28;
        *(byte **)(pbVar26 + 0x28) = pbVar27 + 0x20;
        *(byte **)(pbVar26 + 0x30) = pbVar27;
        LOCK();
        *(long *)(pbVar27 + 8) = *(long *)(pbVar27 + 8) + 1;
        UNLOCK();
        pbVar26 = pbVar26 + 0x38;
        puVar29[0x12] = pbVar26;
        pbVar28 = pbStack_d8;
        goto LAB_09e402ff;
      }
      pbVar26 = pbVar26 + -puVar29[0x11];
      uVar19 = ((long)pbVar26 >> 3) * 0x6db6db6db6db6db7 + 1;
      if (uVar19 < 0x492492492492493) {
        lVar23 = (long)puVar29[0x13] - puVar29[0x11] >> 3;
        uVar25 = lVar23 * -0x2492492492492492;
        if (uVar19 < uVar25) {
          uVar19 = uVar25;
        }
        pbStack_1b0 = (byte *)(puVar29 + 0x11);
        if (0x249249249249248 < (ulong)(lVar23 * 0x6db6db6db6db6db7)) {
          uVar19 = 0x492492492492492;
        }
        pbStack_178 = pbStack_1b0;
        if (uVar19 == 0) {
          puVar21 = (undefined8 *)0x0;
        }
        else {
          pbVar31 = pbVar27;
          if (0x492492492492492 < uVar19) goto LAB_09e40476;
          puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0x38);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar19 * 0x38,0);
            puVar21 = (undefined8 *)0x0;
          }
        }
        pbVar4 = pbStack_148;
        pbVar28 = (byte *)((long)puVar21 + (long)pbVar26);
        puStack_180 = puVar21 + uVar19 * 7;
        pbVar31 = (byte *)((long)(puVar21 + 2) + (long)pbVar26);
        pbVar31[0] = 0;
        pbVar31[1] = 0;
        pbVar31[2] = 0;
        pbVar31[3] = 0;
        pbVar31[4] = 0;
        pbVar31[5] = 0;
        pbVar31[6] = 0;
        pbVar31[7] = 0;
        pbVar31[8] = 0;
        pbVar31[9] = 0;
        pbVar31[10] = 0;
        pbVar31[0xb] = 0;
        pbVar31[0xc] = 0;
        pbVar31[0xd] = 0;
        pbVar31[0xe] = 0;
        pbVar31[0xf] = 0;
        pbVar31 = (byte *)((long)puVar21 + (long)pbVar26);
        pbVar31[0] = 0;
        pbVar31[1] = 0;
        pbVar31[2] = 0;
        pbVar31[3] = 0;
        pbVar31[4] = 0;
        pbVar31[5] = 0;
        pbVar31[6] = 0;
        pbVar31[7] = 0;
        pbVar31[8] = 0;
        pbVar31[9] = 0;
        pbVar31[10] = 0;
        pbVar31[0xb] = 0;
        pbVar31[0xc] = 0;
        pbVar31[0xd] = 0;
        pbVar31[0xe] = 0;
        pbVar31[0xf] = 0;
        pbVar31 = (byte *)((long)(puVar21 + 4) + (long)pbVar26);
        pbVar31[0] = 0;
        pbVar31[1] = 0;
        pbVar31[2] = 0;
        pbVar31[3] = 0;
        pbVar31[4] = 0;
        pbVar31[5] = 0;
        pbVar31[6] = 0;
        pbVar31[7] = 0;
        pbStack_188 = pbVar28;
        puStack_198 = puVar21;
        pbStack_190 = pbVar28;
        if (pbVar28 != pbStack_148) {
          pbVar26 = pbVar26 + (long)puVar21;
          if ((*puVar6 & 1) == 0) {
            *(long *)(pbVar26 + 0x18) = *(long *)(param_3 + 0xa0);
            uVar10 = *(undefined4 *)(param_3 + 0x94);
            uVar11 = *(undefined4 *)(param_3 + 0x98);
            uVar12 = *(undefined4 *)(param_3 + 0x9c);
            *(uint *)(pbVar26 + 8) = *puVar6;
            *(undefined4 *)(pbVar26 + 0xc) = uVar10;
            *(undefined4 *)(pbVar26 + 0x10) = uVar11;
            *(undefined4 *)(pbVar26 + 0x14) = uVar12;
          }
          else {
            func_0x04885070(pbVar26 + 8,*(long *)(param_3 + 0xa0),*(long *)(param_3 + 0x98));
          }
        }
        *(long *)pbVar28 = *(long *)pbVar4;
        *(byte **)(pbVar28 + 0x28) = pbVar27 + 0x20;
        *(byte **)(pbVar28 + 0x30) = pbVar27;
        LOCK();
        *(long *)(pbVar27 + 8) = *(long *)(pbVar27 + 8) + 1;
        UNLOCK();
        pbStack_188 = pbStack_188 + 0x38;
        puVar21 = (undefined8 *)puVar29[0x11];
        puVar22 = (undefined8 *)puVar29[0x12];
        pbVar31 = pbStack_190 + ((long)puVar21 - (long)puVar22);
        pbVar28 = pbVar31;
        puVar24 = puVar21;
        if ((long)puVar21 - (long)puVar22 != 0) {
          do {
            pbVar28[0x10] = 0;
            pbVar28[0x11] = 0;
            pbVar28[0x12] = 0;
            pbVar28[0x13] = 0;
            pbVar28[0x14] = 0;
            pbVar28[0x15] = 0;
            pbVar28[0x16] = 0;
            pbVar28[0x17] = 0;
            pbVar28[0x18] = 0;
            pbVar28[0x19] = 0;
            pbVar28[0x1a] = 0;
            pbVar28[0x1b] = 0;
            pbVar28[0x1c] = 0;
            pbVar28[0x1d] = 0;
            pbVar28[0x1e] = 0;
            pbVar28[0x1f] = 0;
            pbVar28[0] = 0;
            pbVar28[1] = 0;
            pbVar28[2] = 0;
            pbVar28[3] = 0;
            pbVar28[4] = 0;
            pbVar28[5] = 0;
            pbVar28[6] = 0;
            pbVar28[7] = 0;
            pbVar28[8] = 0;
            pbVar28[9] = 0;
            pbVar28[10] = 0;
            pbVar28[0xb] = 0;
            pbVar28[0xc] = 0;
            pbVar28[0xd] = 0;
            pbVar28[0xe] = 0;
            pbVar28[0xf] = 0;
            pbVar28[0x20] = 0;
            pbVar28[0x21] = 0;
            pbVar28[0x22] = 0;
            pbVar28[0x23] = 0;
            pbVar28[0x24] = 0;
            pbVar28[0x25] = 0;
            pbVar28[0x26] = 0;
            pbVar28[0x27] = 0;
            *(undefined8 *)(pbVar28 + 0x18) = puVar24[3];
            uVar17 = puVar24[2];
            *(undefined8 *)(pbVar28 + 8) = puVar24[1];
            *(undefined8 *)(pbVar28 + 0x10) = uVar17;
            *(undefined2 *)(puVar24 + 1) = 0;
            *(undefined8 *)pbVar28 = *puVar24;
            uVar17 = puVar24[6];
            *(undefined8 *)(pbVar28 + 0x28) = puVar24[5];
            *(undefined8 *)(pbVar28 + 0x30) = uVar17;
            puVar24[5] = 0;
            puVar24[6] = 0;
            puVar24 = puVar24 + 7;
            pbVar28 = pbVar28 + 0x38;
          } while (puVar24 != puVar22);
          do {
            plVar9 = (long *)puVar21[6];
            if (plVar9 == (long *)0x0) {
LAB_09e40284:
              bVar8 = *(byte *)(puVar21 + 1);
            }
            else {
              LOCK();
              plVar1 = plVar9 + 1;
              lVar23 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar23 != 0) goto LAB_09e40284;
              (**(code **)(*plVar9 + 0x10))(plVar9);
              FUN_0412c2d0(plVar9);
              bVar8 = *(byte *)(puVar21 + 1);
            }
            if ((bVar8 & 1) != 0) {
              func_0x0412a280(puVar21[3],puVar21[1] & 0xfffffffffffffffe);
            }
            puVar21 = puVar21 + 7;
          } while (puVar21 != puVar22);
          puVar21 = *(undefined8 **)pbStack_1b0;
        }
        pbVar28 = pbStack_d8;
        pbVar26 = pbStack_188;
        puVar29[0x11] = pbVar31;
        puVar29[0x12] = pbStack_188;
        lVar23 = puVar29[0x13];
        puVar29[0x13] = puStack_180;
        if (puVar21 != (undefined8 *)0x0) {
          func_0x0412a280(puVar21,lVar23 - (long)puVar21);
        }
LAB_09e402ff:
        puVar29[0x12] = pbVar26;
        uVar10 = *(undefined4 *)puVar29;
        uVar11 = *(undefined4 *)((long)puVar29 + 4);
        uVar12 = *(undefined4 *)(puVar29 + 1);
        uVar16 = *(undefined4 *)((long)puVar29 + 0xc);
        if (puVar29[1] != 0) {
          LOCK();
          plVar9 = (long *)(puVar29[1] + 8);
          *plVar9 = *plVar9 + 1;
          UNLOCK();
        }
        plVar9 = *(long **)(param_3 + 0x78);
        *(undefined4 *)(param_3 + 0x70) = uVar10;
        *(undefined4 *)(param_3 + 0x74) = uVar11;
        *(undefined4 *)(param_3 + 0x78) = uVar12;
        *(undefined4 *)(param_3 + 0x7c) = uVar16;
        if (plVar9 != (long *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar23 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar23 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            FUN_0412c2d0(plVar9);
          }
        }
        param_3[0x80] = *(byte *)((long)puVar29 + 0xa1);
        LOCK();
        lVar23 = *(long *)pbStack_140;
        *(long *)pbStack_140 = *(long *)pbStack_140 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*(long *)pbVar27 + 0x10))(pbVar27);
          FUN_0412c2d0(pbVar27);
          LOCK();
          lVar23 = *(long *)pbVar20;
          *(long *)pbVar20 = *(long *)pbVar20 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          lVar23 = *(long *)pbVar20;
          *(long *)pbVar20 = *(long *)pbVar20 + -1;
          UNLOCK();
        }
        if (lVar23 == 0) {
          (**(code **)(*(long *)param_3 + 0x10))(param_3);
          FUN_0412c2d0(param_3);
          LOCK();
          lVar23 = *(long *)pbVar20;
          *(long *)pbVar20 = *(long *)pbVar20 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          lVar23 = *(long *)pbVar20;
          *(long *)pbVar20 = *(long *)pbVar20 + -1;
          UNLOCK();
        }
        if (lVar23 == 0) {
          (**(code **)(*(long *)param_3 + 0x10))(param_3);
          FUN_0412c2d0(param_3);
        }
        if (lStack_78 != 0) {
          (**(code **)(lStack_78 + 8))(&lStack_78);
        }
        return pbVar28;
      }
      goto LAB_09e40485;
    }
    pbVar26 = (byte *)((long)puVar22 - (long)puVar21);
    uVar19 = ((long)pbVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (uVar19 < 0x186186186186187) {
      pbVar31 = pbStack_1b0 + 0xd8;
      lVar23 = (long)*(undefined8 **)(pbStack_1b0 + 0xe8) - (long)puVar21 >> 3;
      uVar25 = lVar23 * -0x6186186186186186;
      if (uVar19 < uVar25) {
        uVar19 = uVar25;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar23 * -0x30c30c30c30c30c3)) {
        uVar19 = 0x186186186186186;
      }
      pbStack_178 = pbVar31;
      if (uVar19 == 0) {
        puVar29 = (undefined8 *)0x0;
LAB_09e3fd68:
        pbStack_190 = pbVar26 + (long)puVar29;
        puStack_180 = puVar29 + uVar19 * 0x15;
        puStack_198 = puVar29;
        pbStack_188 = pbStack_190;
        pbStack_150 = pbVar31;
        func_0x09ea2080(pbStack_190);
        pbVar31 = pbStack_188;
        pbVar28 = pbStack_188 + 0xa8;
        lVar23 = *(long *)(pbStack_1b0 + 0xd8);
        lVar7 = *(long *)(pbStack_1b0 + 0xe0);
        pbVar26 = pbStack_190 + (lVar23 - lVar7);
        if (lVar23 != lVar7) {
          lVar30 = 0;
          do {
            uVar17 = ((undefined8 *)(lVar23 + lVar30))[1];
            *(undefined8 *)(pbVar26 + lVar30) = *(undefined8 *)(lVar23 + lVar30);
            *(undefined8 *)(pbVar26 + lVar30 + 8) = uVar17;
            *(undefined8 *)(lVar23 + lVar30) = 0;
            ((undefined8 *)(lVar23 + lVar30))[1] = 0;
            pbVar4 = pbVar26 + lVar30 + 0x20;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            pbVar4[8] = 0;
            pbVar4[9] = 0;
            pbVar4[10] = 0;
            pbVar4[0xb] = 0;
            pbVar4[0xc] = 0;
            pbVar4[0xd] = 0;
            pbVar4[0xe] = 0;
            pbVar4[0xf] = 0;
            pbVar4 = pbVar26 + lVar30 + 0x10;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            pbVar4[8] = 0;
            pbVar4[9] = 0;
            pbVar4[10] = 0;
            pbVar4[0xb] = 0;
            pbVar4[0xc] = 0;
            pbVar4[0xd] = 0;
            pbVar4[0xe] = 0;
            pbVar4[0xf] = 0;
            pbVar4 = pbVar26 + lVar30 + 0x30;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            *(undefined8 *)(pbVar26 + lVar30 + 0x28) = *(undefined8 *)(lVar23 + 0x28 + lVar30);
            puVar5 = (undefined4 *)(lVar23 + 0x18 + lVar30);
            uVar10 = puVar5[1];
            uVar11 = puVar5[2];
            uVar12 = puVar5[3];
            pbVar4 = pbVar26 + lVar30 + 0x18;
            *(undefined4 *)pbVar4 = *puVar5;
            *(undefined4 *)(pbVar4 + 4) = uVar10;
            *(undefined4 *)(pbVar4 + 8) = uVar11;
            *(undefined4 *)(pbVar4 + 0xc) = uVar12;
            *(undefined2 *)(lVar23 + 0x18 + lVar30) = 0;
            *(undefined8 *)(pbVar26 + lVar30 + 0x10) = *(undefined8 *)(lVar23 + 0x10 + lVar30);
            func_0x04167a20(pbVar26 + lVar30 + 0x38,lVar30 + lVar23 + 0x38);
            puVar29 = (undefined8 *)(lVar23 + 0x40 + lVar30);
            uVar17 = puVar29[1];
            *(undefined8 *)(pbVar26 + lVar30 + 0x40) = *puVar29;
            *(undefined8 *)(pbVar26 + lVar30 + 0x40 + 8) = uVar17;
            puVar29 = (undefined8 *)(lVar23 + 0x50 + lVar30);
            uVar17 = puVar29[1];
            *(undefined8 *)(pbVar26 + lVar30 + 0x50) = *puVar29;
            *(undefined8 *)(pbVar26 + lVar30 + 0x50 + 8) = uVar17;
            puVar29 = (undefined8 *)(lVar23 + 0x60 + lVar30);
            uVar17 = puVar29[1];
            *(undefined8 *)(pbVar26 + lVar30 + 0x60) = *puVar29;
            *(undefined8 *)(pbVar26 + lVar30 + 0x60 + 8) = uVar17;
            puVar29 = (undefined8 *)(lVar23 + 0x60 + lVar30);
            *puVar29 = 0;
            puVar29[1] = 0;
            *(undefined8 *)(pbVar26 + lVar30 + 0x70) = *(undefined8 *)(lVar23 + 0x70 + lVar30);
            puVar29 = (undefined8 *)(lVar23 + 0x78 + lVar30);
            uVar17 = puVar29[1];
            *(undefined8 *)(pbVar26 + lVar30 + 0x78) = *puVar29;
            *(undefined8 *)(pbVar26 + lVar30 + 0x78 + 8) = uVar17;
            pbVar4 = pbVar26 + lVar30 + 0x88;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            pbVar4[8] = 0;
            pbVar4[9] = 0;
            pbVar4[10] = 0;
            pbVar4[0xb] = 0;
            pbVar4[0xc] = 0;
            pbVar4[0xd] = 0;
            pbVar4[0xe] = 0;
            pbVar4[0xf] = 0;
            pbVar4 = pbVar26 + lVar30 + 0x98;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            pbVar4[4] = 0;
            pbVar4[5] = 0;
            pbVar4[6] = 0;
            pbVar4[7] = 0;
            puVar5 = (undefined4 *)(lVar23 + 0x88 + lVar30);
            uVar10 = puVar5[1];
            uVar11 = puVar5[2];
            uVar12 = puVar5[3];
            pbVar4 = pbVar26 + lVar30 + 0x88;
            *(undefined4 *)pbVar4 = *puVar5;
            *(undefined4 *)(pbVar4 + 4) = uVar10;
            *(undefined4 *)(pbVar4 + 8) = uVar11;
            *(undefined4 *)(pbVar4 + 0xc) = uVar12;
            *(undefined8 *)(pbVar26 + lVar30 + 0x98) = *(undefined8 *)(lVar23 + 0x98 + lVar30);
            puVar29 = (undefined8 *)(lVar23 + 0x88 + lVar30);
            *puVar29 = 0;
            puVar29[1] = 0;
            *(undefined8 *)(lVar23 + 0x98 + lVar30) = 0;
            *(undefined2 *)(pbVar26 + lVar30 + 0xa0) = *(undefined2 *)(lVar23 + 0xa0 + lVar30);
            lVar3 = lVar30 + lVar23;
            lVar30 = lVar30 + 0xa8;
          } while (lVar3 + 0xa8 != lVar7);
          do {
            func_0x09e9e5b0(lVar23);
            lVar23 = lVar23 + 0xa8;
          } while (lVar23 != lVar7);
          lVar23 = *(long *)pbStack_150;
        }
        *(byte **)(pbStack_1b0 + 0xd8) = pbVar26;
        *(byte **)(pbStack_1b0 + 0xe0) = pbVar28;
        lVar7 = *(long *)(pbStack_1b0 + 0xe8);
        *(undefined8 **)(pbStack_1b0 + 0xe8) = puStack_180;
        if (lVar23 != 0) {
          func_0x0412a280(lVar23,lVar7 - lVar23);
        }
        *(byte **)(pbStack_1b0 + 0xe0) = pbVar28;
        pbVar31 = *(byte **)pbVar31;
        bVar8 = *pbVar31;
        pbVar28 = pbStack_148;
        goto joined_r0x09e3ff6d;
      }
      if (uVar19 < 0x186186186186187) {
        puVar29 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0xa8);
        if (puVar29 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar19 * 0xa8,0);
          puVar29 = (undefined8 *)0x0;
        }
        goto LAB_09e3fd68;
      }
LAB_09e40476:
      func_0x04882eb0();
      goto LAB_09e4047b;
    }
  }
  else {
    pbVar26 = pbVar26 + -(long)pbStack_e0;
    uVar19 = ((long)pbVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar19) goto LAB_09e4048f;
    lVar23 = (long)*(byte **)(pbStack_148 + 200) - (long)pbStack_e0 >> 3;
    uVar25 = lVar23 * -0x6186186186186186;
    if (uVar19 < uVar25) {
      uVar19 = uVar25;
    }
    param_3 = pbStack_148 + 0xb8;
    if (0xc30c30c30c30c2 < (ulong)(lVar23 * -0x30c30c30c30c30c3)) {
      uVar19 = 0x186186186186186;
    }
    pbStack_178 = param_3;
    if (uVar19 == 0) {
      puVar29 = (undefined8 *)0x0;
LAB_09e3f119:
      pbStack_190 = pbVar26 + (long)puVar29;
      puStack_180 = puVar29 + uVar19 * 0x15;
      puStack_198 = puVar29;
      pbStack_188 = pbStack_190;
      func_0x09e9faa0(pbStack_190);
      pbVar26 = pbStack_188 + 0xa8;
      lVar23 = *(long *)(pbVar28 + 0xb8);
      lVar7 = *(long *)(pbVar28 + 0xc0);
      pbVar31 = pbStack_190 + (lVar23 - lVar7);
      if (lVar23 != lVar7) {
        lVar30 = 0;
        do {
          uVar17 = ((undefined8 *)(lVar23 + lVar30))[1];
          *(undefined8 *)(pbVar31 + lVar30) = *(undefined8 *)(lVar23 + lVar30);
          *(undefined8 *)(pbVar31 + lVar30 + 8) = uVar17;
          *(undefined8 *)(lVar23 + lVar30) = 0;
          ((undefined8 *)(lVar23 + lVar30))[1] = 0;
          pbVar28 = pbVar31 + lVar30 + 0x20;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar31 + lVar30 + 0x10;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar31 + lVar30 + 0x30;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar31 + lVar30 + 0x28) = *(undefined8 *)(lVar23 + 0x28 + lVar30);
          puVar5 = (undefined4 *)(lVar23 + 0x18 + lVar30);
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          pbVar28 = pbVar31 + lVar30 + 0x18;
          *(undefined4 *)pbVar28 = *puVar5;
          *(undefined4 *)(pbVar28 + 4) = uVar10;
          *(undefined4 *)(pbVar28 + 8) = uVar11;
          *(undefined4 *)(pbVar28 + 0xc) = uVar12;
          *(undefined2 *)(lVar23 + 0x18 + lVar30) = 0;
          *(undefined8 *)(pbVar31 + lVar30 + 0x10) = *(undefined8 *)(lVar23 + 0x10 + lVar30);
          func_0x04167a20(pbVar31 + lVar30 + 0x38,lVar23 + lVar30 + 0x38);
          puVar29 = (undefined8 *)(lVar23 + 0x40 + lVar30);
          uVar17 = puVar29[1];
          *(undefined8 *)(pbVar31 + lVar30 + 0x40) = *puVar29;
          *(undefined8 *)(pbVar31 + lVar30 + 0x40 + 8) = uVar17;
          puVar29 = (undefined8 *)(lVar23 + 0x50 + lVar30);
          uVar17 = puVar29[1];
          *(undefined8 *)(pbVar31 + lVar30 + 0x50) = *puVar29;
          *(undefined8 *)(pbVar31 + lVar30 + 0x50 + 8) = uVar17;
          puVar29 = (undefined8 *)(lVar23 + 0x60 + lVar30);
          uVar17 = puVar29[1];
          *(undefined8 *)(pbVar31 + lVar30 + 0x60) = *puVar29;
          *(undefined8 *)(pbVar31 + lVar30 + 0x60 + 8) = uVar17;
          puVar29 = (undefined8 *)(lVar23 + 0x60 + lVar30);
          *puVar29 = 0;
          puVar29[1] = 0;
          *(undefined8 *)(pbVar31 + lVar30 + 0x70) = *(undefined8 *)(lVar23 + 0x70 + lVar30);
          puVar29 = (undefined8 *)(lVar23 + 0x78 + lVar30);
          uVar17 = puVar29[1];
          *(undefined8 *)(pbVar31 + lVar30 + 0x78) = *puVar29;
          *(undefined8 *)(pbVar31 + lVar30 + 0x78 + 8) = uVar17;
          pbVar28 = pbVar31 + lVar30 + 0x88;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          pbVar28[8] = 0;
          pbVar28[9] = 0;
          pbVar28[10] = 0;
          pbVar28[0xb] = 0;
          pbVar28[0xc] = 0;
          pbVar28[0xd] = 0;
          pbVar28[0xe] = 0;
          pbVar28[0xf] = 0;
          pbVar28 = pbVar31 + lVar30 + 0x98;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar5 = (undefined4 *)(lVar23 + 0x88 + lVar30);
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          pbVar28 = pbVar31 + lVar30 + 0x88;
          *(undefined4 *)pbVar28 = *puVar5;
          *(undefined4 *)(pbVar28 + 4) = uVar10;
          *(undefined4 *)(pbVar28 + 8) = uVar11;
          *(undefined4 *)(pbVar28 + 0xc) = uVar12;
          *(undefined8 *)(pbVar31 + lVar30 + 0x98) = *(undefined8 *)(lVar23 + 0x98 + lVar30);
          puVar29 = (undefined8 *)(lVar23 + 0x88 + lVar30);
          *puVar29 = 0;
          puVar29[1] = 0;
          *(undefined8 *)(lVar23 + 0x98 + lVar30) = 0;
          *(undefined2 *)(pbVar31 + lVar30 + 0xa0) = *(undefined2 *)(lVar23 + 0xa0 + lVar30);
          lVar3 = lVar23 + lVar30;
          lVar30 = lVar30 + 0xa8;
        } while (lVar3 + 0xa8 != lVar7);
        do {
          func_0x09e9fc20(lVar23);
          lVar23 = lVar23 + 0xa8;
        } while (lVar23 != lVar7);
        lVar23 = *(long *)param_3;
      }
      pbVar28 = pbStack_148;
      *(byte **)(pbStack_148 + 0xb8) = pbVar31;
      *(byte **)(pbStack_148 + 0xc0) = pbVar26;
      lVar7 = *(long *)(pbStack_148 + 200);
      *(undefined8 **)(pbStack_148 + 200) = puStack_180;
      if (lVar23 != 0) {
        func_0x0412a280(lVar23,lVar7 - lVar23);
      }
      goto LAB_09e3f2f1;
    }
    if (uVar19 < 0x186186186186187) {
      puVar29 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 0xa8);
      if (puVar29 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar19 * 0xa8,0);
        puVar29 = (undefined8 *)0x0;
      }
      goto LAB_09e3f119;
    }
LAB_09e4047b:
    func_0x04882eb0();
    pbVar27 = pbVar31;
LAB_09e40480:
    func_0x09e9fe40();
LAB_09e40485:
    func_0x09ea22c0();
  }
  func_0x09ea21f0();
  pbVar31 = pbVar27;
LAB_09e4048f:
  lStack_1b8 = func_0x09e9fc10();
  if ((*pbVar26 & 1) != 0) {
    func_0x0412a280(*(long *)(pbVar31 + 0x18),*(ulong *)(pbVar31 + 8) & 0xfffffffffffffffe);
  }
  func_0x09ea2200(&puStack_198);
  LOCK();
  lVar23 = *(long *)pbStack_140;
  *(long *)pbStack_140 = *(long *)pbStack_140 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbStack_1a0 + 0x10))(pbStack_1a0);
    FUN_0412c2d0(pbStack_1a0);
    pbVar26 = pbStack_1a0;
  }
  func_0x09e9fe90(param_3);
  func_0x09e9fec0(param_3);
  if (lStack_78 == 0) goto LAB_09e40811;
  (**(code **)(lStack_78 + 8))(&lStack_78);
  lStack_1b8 = func_0x0eee2d70(lStack_1b8);
  pbVar28 = pbStack_150;
  LOCK();
  lVar23 = *(long *)pbStack_d0;
  *(long *)pbStack_d0 = *(long *)pbStack_d0 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbStack_150 + 0x10))(pbStack_150);
    FUN_0412c2d0(pbVar28);
  }
  pbVar26 = (byte *)0xffffffffffffffff;
  LOCK();
  lVar23 = *(long *)pbStack_f8;
  *(long *)pbStack_f8 = *(long *)pbStack_f8 + -1;
  UNLOCK();
  if (lVar23 == 0) goto LAB_09e4081a;
  LOCK();
  pbVar26 = *(byte **)pbStack_f8;
  *(long *)pbStack_f8 = *(long *)pbStack_f8 + -1;
  UNLOCK();
  if (pbVar26 == (byte *)0x0) goto LAB_09e40842;
  do {
    do {
      if (puStack_b8 != (undefined8 *)0x0) {
        (**(code **)((long)puStack_b8 + 8))(&puStack_b8);
      }
      if (((ulong)uStack_130 & 1) != 0) {
        func_0x0412a280(lStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
      }
LAB_09e40811:
      func_0x0eee2d70(lStack_1b8);
LAB_09e4081a:
      (**(code **)(*(long *)pbStack_1b0 + 0x10))(pbStack_1b0);
      FUN_0412c2d0(pbStack_1b0);
      LOCK();
      pbVar28 = pbVar26 + *(long *)pbStack_f8;
      pbVar26 = *(byte **)pbStack_f8;
      *(byte **)pbStack_f8 = pbVar28;
      UNLOCK();
    } while (pbVar26 != (byte *)0x0);
LAB_09e40842:
    (**(code **)(*(long *)pbStack_1b0 + 0x10))(pbStack_1b0);
    FUN_0412c2d0(pbStack_1b0);
    pbVar26 = pbStack_1b0;
  } while( true );
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 */
