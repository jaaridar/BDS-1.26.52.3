/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9e377b0 (ELF vaddr 0x9d377b0)
 * Label: caller-of-callee
 * Body:  [[09e377b0, 09e37c30] [09e37c40, 09e37ca7] [09e37cb0, 09e3838d] [09e38390, 09e383cc] [09e383d0, 09e386a1] [09e38791, 09e387cb] [09e387f1, 09e3885f]]
 * Ghidra: FUN_09e377b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_09e377b0(long param_1,long *param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  long lVar25;
  undefined8 **ppuVar26;
  byte *pbVar27;
  byte *pbVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  byte *pbVar32;
  bool bVar33;
  undefined1 uStack_1d9;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined4 uStack_1a4;
  long *plStack_1a0;
  undefined8 *puStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  undefined8 *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_150;
  long *plStack_148;
  long *plStack_140;
  byte *pbStack_138;
  long lStack_130;
  byte *pbStack_128;
  uint *puStack_120;
  long *plStack_118;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  undefined8 *puStack_b8;
  byte *pbStack_b0;
  undefined1 uStack_a8;
  long lStack_78;
  byte *pbStack_70;
  
  if (param_2 != (long *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  pbStack_1b8 = (byte *)0x0;
  plStack_140 = param_2;
  lStack_130 = param_1;
  func_0x04130630(&uStack_1d0,param_4);
  if (*param_4 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0xcbf29ce484222325;
    uVar16 = func_0x0eee2e90(param_4);
    if (uVar16 != 0) {
      uVar20 = (ulong)((uint)uVar16 & 7);
      if (7 < uVar16) {
        uVar16 = uVar16 & 0xfffffffffffffff8;
        do {
          uVar29 = (((((((uVar29 * 0x100000001b3 ^ (ulong)*param_4) * 0x100000001b3 ^
                        (ulong)param_4[1]) * 0x100000001b3 ^ (ulong)param_4[2]) * 0x100000001b3 ^
                      (ulong)param_4[3]) * 0x100000001b3 ^ (ulong)param_4[4]) * 0x100000001b3 ^
                    (ulong)param_4[5]) * 0x100000001b3 ^ (ulong)param_4[6]) * 0x100000001b3 ^
                   (ulong)param_4[7];
          param_4 = param_4 + 8;
          uVar16 = uVar16 - 8;
        } while (uVar16 != 0);
      }
      if (uVar20 != 0) {
        uVar16 = 0;
        do {
          uVar29 = uVar29 * 0x100000001b3 ^ (ulong)param_4[uVar16];
          uVar16 = uVar16 + 1;
        } while (uVar20 != uVar16);
      }
    }
  }
  lStack_78 = 0;
  puStack_f8 = (undefined8 *)&UNK_0f1e9800;
  uStack_1d8 = uVar29;
  pbStack_f0 = param_3;
  pbStack_70 = param_3;
  pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pbVar17 == (byte *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puStack_198 = puStack_f8;
  pbVar17[8] = 0;
  pbVar17[9] = 0;
  pbVar17[10] = 0;
  pbVar17[0xb] = 0;
  pbVar17[0xc] = 0;
  pbVar17[0xd] = 0;
  pbVar17[0xe] = 0;
  pbVar17[0xf] = 0;
  pbVar17[0x10] = 0;
  pbVar17[0x11] = 0;
  pbVar17[0x12] = 0;
  pbVar17[0x13] = 0;
  pbVar17[0x14] = 0;
  pbVar17[0x15] = 0;
  pbVar17[0x16] = 0;
  pbVar17[0x17] = 0;
  *(undefined **)pbVar17 = &UNK_0f1e95d8;
  puStack_f8 = (undefined8 *)0x0;
  pbStack_190 = pbStack_f0;
  *(undefined **)(pbVar17 + 0x20) = &UNK_0f2ccd78;
  pbVar17[0x28] = 0;
  pbVar17[0x29] = 0;
  pbVar17[0x2a] = 0;
  pbVar17[0x2b] = 0;
  pbVar17[0x2c] = 0;
  pbVar17[0x2d] = 0;
  pbVar17[0x2e] = 0;
  pbVar17[0x2f] = 0;
  pbVar17[0x30] = 0;
  pbVar17[0x31] = 0;
  pbVar17[0x32] = 0;
  pbVar17[0x33] = 0;
  pbVar17[0x34] = 0;
  pbVar17[0x35] = 0;
  pbVar17[0x36] = 0;
  pbVar17[0x37] = 0;
  pbVar17[0x38] = 0;
  pbVar17[0x39] = 0;
  pbVar17[0x3a] = 0;
  pbVar17[0x3b] = 0;
  pbVar17[0x3c] = 0;
  pbVar17[0x3d] = 0;
  pbVar17[0x3e] = 0;
  pbVar17[0x3f] = 0;
  pbVar17[0x40] = 0;
  pbVar17[0x41] = 0;
  pbVar17[0x42] = 0;
  pbVar17[0x43] = 0;
  pbVar17[0x44] = 0;
  pbVar17[0x45] = 0;
  pbVar17[0x46] = 0;
  pbVar17[0x47] = 0;
  pbVar17[0x48] = 0;
  pbVar17[0x49] = 0;
  pbVar17[0x4a] = 0;
  pbVar17[0x4b] = 0;
  pbVar17[0x4c] = 0;
  pbVar17[0x4d] = 0;
  pbVar17[0x4e] = 0;
  pbVar17[0x4f] = 0;
  pbVar17[0x50] = 0;
  pbVar17[0x51] = 0;
  pbVar17[0x52] = 0;
  pbVar17[0x53] = 0;
  pbVar17[0x54] = 0;
  pbVar17[0x55] = 0;
  pbVar17[0x56] = 0;
  pbVar17[0x57] = 0;
  pbVar17[0x58] = 0;
  pbVar17[0x59] = 0;
  pbVar17[0x5a] = 0;
  pbVar17[0x5b] = 0;
  pbVar17[0x5c] = 0;
  pbVar17[0x5d] = 0;
  pbVar17[0x5e] = 0;
  pbVar17[0x5f] = 0;
  pbVar17[0x60] = 0;
  pbVar17[0x61] = 0;
  pbVar17[0x62] = 0;
  pbVar17[99] = 0;
  pbVar17[100] = 0;
  pbVar17[0x65] = 0;
  pbVar17[0x66] = 0;
  pbVar17[0x67] = 0;
  pbVar17[0x68] = 0;
  func_0x04aa75f0(pbVar17 + 0x70,&uStack_1d9,&UNK_01254d89);
  pbVar17[0x80] = 0;
  pbStack_1b0 = pbVar17 + 0x88;
  pbVar17[0x88] = 0;
  pbVar17[0x89] = 0;
  pbVar17[0x8a] = 0;
  pbVar17[0x8b] = 0;
  pbVar17[0x8c] = 0;
  pbVar17[0x8d] = 0;
  pbVar17[0x8e] = 0;
  pbVar17[0x8f] = 0;
  pbVar17[0x90] = 0;
  pbVar17[0x91] = 0;
  pbVar17[0x92] = 0;
  pbVar17[0x93] = 0;
  pbVar17[0x94] = 0;
  pbVar17[0x95] = 0;
  pbVar17[0x96] = 0;
  pbVar17[0x97] = 0;
  pbVar17[0x98] = 0;
  pbVar17[0x99] = 0;
  pbVar17[0x9a] = 0;
  pbVar17[0x9b] = 0;
  pbVar17[0x9c] = 0;
  pbVar17[0x9d] = 0;
  pbVar17[0x9e] = 0;
  pbVar17[0x9f] = 0;
  pbVar17[0xa0] = 0;
  pbVar17[0xa1] = 0;
  pbVar17[0xa2] = 0;
  pbVar17[0xa3] = 0;
  pbVar17[0xa4] = 0;
  pbVar17[0xa5] = 0;
  pbVar17[0xa6] = 0;
  pbVar17[0xa7] = 0;
  pbVar17[0xa8] = 0;
  pbVar17[0xa9] = 0;
  pbVar17[0xaa] = 0;
  pbVar17[0xab] = 0;
  pbVar17[0xac] = 0;
  pbVar17[0xad] = 0;
  pbVar17[0xae] = 0;
  pbVar17[0xaf] = 0;
  pbVar17[0xb0] = 0;
  pbVar17[0xb1] = 0;
  pbVar17[0xb2] = 0;
  pbVar17[0xb3] = 0;
  pbVar17[0xb4] = 0;
  pbVar17[0xb5] = 0;
  pbVar17[0xb6] = 0;
  pbVar17[0xb7] = 0;
  pbVar17[0xb8] = 0xff;
  pbVar17[0xb9] = 0xff;
  pbVar17[0xba] = 0xff;
  pbVar17[0xbb] = 0xff;
  pbVar17[0xbc] = 0;
  pbVar17[0xbd] = 0;
  pbVar17[0xbe] = 0;
  pbVar17[0xbf] = 0;
  pbVar17[0x130] = 0;
  pbVar17[0x131] = 0;
  pbVar17[0x132] = 0;
  pbVar17[0x133] = 0;
  pbVar17[0x134] = 0;
  pbVar17[0x135] = 0;
  pbVar17[0x136] = 0;
  pbVar17[0x137] = 0;
  pbVar17[0x138] = 0;
  pbVar17[0x139] = 0;
  pbVar17[0x13a] = 0;
  pbVar17[0x13b] = 0;
  pbVar17[0x13c] = 0;
  pbVar17[0x13d] = 0;
  pbVar17[0x13e] = 0;
  pbVar17[0x13f] = 0;
  pbVar17[0xc0] = 0;
  pbVar17[0xc1] = 0;
  pbVar17[0xc2] = 0;
  pbVar17[0xc3] = 0;
  pbVar17[0xc4] = 0;
  pbVar17[0xc5] = 0;
  pbVar17[0xc6] = 0;
  pbVar17[199] = 0;
  pbVar17[200] = 0;
  pbVar17[0xc9] = 0;
  pbVar17[0xca] = 0;
  pbVar17[0xcb] = 0;
  pbVar17[0xcc] = 0;
  pbVar17[0xcd] = 0;
  pbVar17[0xce] = 0;
  pbVar17[0xcf] = 0;
  pbVar17[0xd0] = 0;
  pbVar17[0xd1] = 0;
  pbVar17[0xd2] = 0;
  pbVar17[0xd3] = 0;
  pbVar17[0xd4] = 0;
  pbVar17[0xd5] = 0;
  pbVar17[0xd6] = 0;
  pbVar17[0xd7] = 0;
  pbVar17[0xd8] = 0;
  pbVar17[0xd9] = 0;
  pbVar17[0xda] = 0;
  pbVar17[0xdb] = 0;
  pbVar17[0xdc] = 0;
  pbVar17[0xdd] = 0;
  pbVar17[0xde] = 0;
  pbVar17[0xdf] = 0;
  pbVar17[0xe0] = 0;
  pbVar17[0xe1] = 0;
  pbVar17[0xe2] = 0;
  pbVar17[0xe3] = 0;
  pbVar17[0xe4] = 0;
  pbVar17[0xe5] = 0;
  pbVar17[0xe6] = 0;
  pbVar17[0xe7] = 0;
  pbVar17[0xe8] = 0;
  pbVar17[0xe9] = 0;
  pbVar17[0xea] = 0;
  pbVar17[0xeb] = 0;
  pbVar17[0xec] = 0;
  pbVar17[0xed] = 0;
  pbVar17[0xee] = 0;
  pbVar17[0xef] = 0;
  pbVar17[0xf0] = 0;
  pbVar17[0xf1] = 0;
  pbVar17[0xf2] = 0;
  pbVar17[0xf3] = 0;
  pbVar17[0xf4] = 0;
  pbVar17[0xf5] = 0;
  pbVar17[0xf6] = 0;
  pbVar17[0xf7] = 0;
  pbVar17[0xf8] = 0;
  pbVar17[0xf9] = 0;
  pbVar17[0xfa] = 0;
  pbVar17[0xfb] = 0;
  pbVar17[0xfc] = 0;
  pbVar17[0xfd] = 0;
  pbVar17[0xfe] = 0;
  pbVar17[0xff] = 0;
  *(undefined **)(pbVar17 + 0x20) = &UNK_0f1e9628;
  pbVar17[0x178] = 0;
  pbVar17[0x179] = 0;
  pbVar17[0x17a] = 0;
  pbVar17[0x17b] = 0;
  pbVar17[0x17c] = 0;
  pbVar17[0x17d] = 0;
  pbVar17[0x17e] = 0;
  pbVar17[0x17f] = 0;
  pbVar17[0x180] = 0;
  pbVar17[0x181] = 0;
  pbVar17[0x182] = 0;
  pbVar17[0x183] = 0;
  pbVar17[0x184] = 0;
  pbVar17[0x185] = 0;
  pbVar17[0x186] = 0;
  pbVar17[0x187] = 0;
  *(byte **)(pbVar17 + 0x170) = pbVar17 + 0x178;
  ppuVar26 = (undefined8 **)(pbVar17 + 400);
  pbVar17[400] = 0;
  pbVar17[0x191] = 0;
  pbVar17[0x192] = 0;
  pbVar17[0x193] = 0;
  pbVar17[0x194] = 0;
  pbVar17[0x195] = 0;
  pbVar17[0x196] = 0;
  pbVar17[0x197] = 0;
  pbVar17[0x198] = 0;
  pbVar17[0x199] = 0;
  pbVar17[0x19a] = 0;
  pbVar17[0x19b] = 0;
  pbVar17[0x19c] = 0;
  pbVar17[0x19d] = 0;
  pbVar17[0x19e] = 0;
  pbVar17[0x19f] = 0;
  if (ppuVar26 != &puStack_198) {
    if (puStack_198 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_198)(&puStack_198,ppuVar26);
      puVar18 = puStack_198;
    }
    puStack_198 = (undefined8 *)0x0;
    *ppuVar26 = puVar18;
  }
  pbStack_138 = pbVar17 + 0x20;
  puStack_120 = (uint *)(pbVar17 + 0x90);
  pbStack_100 = param_3;
  if (pbStack_1b0 != &DAT_0f551f88) {
    if ((*puStack_120 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        *(undefined8 *)(pbVar17 + 0xa0) = _DAT_0f551fa0;
        uVar9 = uRam000000000f551f9c;
        uVar8 = _DAT_0f551f98;
        uVar7 = uRam000000000f551f94;
        *puStack_120 = _DAT_0f551f90;
        *(undefined4 *)(pbVar17 + 0x94) = uVar7;
        *(undefined4 *)(pbVar17 + 0x98) = uVar8;
        *(undefined4 *)(pbVar17 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puStack_120,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar33 = (_DAT_0f551f90 & 1) != 0;
      uVar19 = 0xf551f91;
      if (bVar33) {
        uVar19 = _DAT_0f551fa0;
      }
      uVar29 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar33) {
        uVar29 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      FUN_04885120(puStack_120,uVar19,uVar29);
    }
  }
  *(undefined8 *)(pbVar17 + 0x88) = _DAT_0f551f88;
  pbVar17[0xa8] = 0;
  pbVar17[0xa9] = 0;
  pbVar17[0xaa] = 0;
  pbVar17[0xab] = 0;
  pbVar17[0xac] = 0;
  pbVar17[0xad] = 0;
  pbVar17[0xae] = 0;
  pbVar17[0xaf] = 0;
  if (puStack_198 != (undefined8 *)0x0) {
    (*(code *)puStack_198[1])(&puStack_198);
  }
  pbVar32 = pbVar17 + 8;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  LOCK();
  *(long *)pbVar32 = *(long *)pbVar32 + 1;
  UNLOCK();
  uStack_1a4 = param_5;
  pbStack_108 = pbVar32;
  plStack_1a0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_1a0 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  uVar29 = uStack_1d8;
  plStack_1a0[1] = 0;
  plStack_1a0[2] = 0;
  *plStack_1a0 = (long)&UNK_0f1e9708;
  plStack_1a0[6] = 0;
  plStack_1a0[7] = 0;
  plStack_1a0[4] = (long)&UNK_0f1e9758;
  plStack_1a0[0xe] = (long)pbStack_138;
  plStack_1a0[0xf] = (long)pbVar17;
  LOCK();
  *(long *)(pbVar17 + 8) = *(long *)(pbVar17 + 8) + 1;
  UNLOCK();
  plStack_118 = plStack_1a0 + 1;
  pbStack_150 = *(byte **)(lStack_130 + 0xb8);
  pbVar23 = *(byte **)(lStack_130 + 0xc0);
  pbVar32 = pbVar17;
  plStack_148 = plStack_1a0;
  if (pbStack_150 != pbVar23) {
    if ((uStack_1d0 & 1) == 0) {
      lStack_110 = (long)&uStack_1d0 + 1;
      uVar16 = uStack_1d0 >> 1 & 0x7f;
    }
    else {
      lStack_110 = lStack_1c0;
      uVar16 = uStack_1c8;
    }
    pbStack_128 = pbStack_1b8;
    pbVar28 = pbStack_150 + 0x19;
    do {
      if (*(ulong *)(pbVar28 + -9) == uVar29) {
        pbVar32 = pbVar28 + -9;
        if ((*(ulong **)(pbVar28 + 0x17) == &uStack_1d8) && (pbVar32 == pbStack_128)) {
LAB_09e380f8:
          pbVar28 = pbVar28 + -0x19;
          plVar31 = plStack_148;
          goto LAB_09e38104;
        }
        bVar6 = pbVar28[-1];
        if ((bVar6 & 1) == 0) {
          uVar20 = (ulong)(bVar6 >> 1);
        }
        else {
          uVar20 = *(ulong *)(pbVar28 + 7);
        }
        if (uVar20 == uVar16) {
          pbVar27 = pbVar28;
          if ((bVar6 & 1) != 0) {
            pbVar27 = *(byte **)(pbVar28 + 0xf);
          }
          iVar15 = bcmp(pbVar27,lStack_110,uVar16);
          if (iVar15 == 0) {
            *(ulong **)(pbVar28 + 0x17) = &uStack_1d8;
            pbStack_1b8 = pbVar32;
            goto LAB_09e380f8;
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
    } while (pbVar27 != pbVar23);
  }
  lVar25 = lStack_130;
  if (pbVar23 < *(byte **)(lStack_130 + 200)) {
    func_0x09e88eb0(pbVar23);
    pbVar23 = pbVar23 + 0xa8;
    *(byte **)(lVar25 + 0xc0) = pbVar23;
LAB_09e37f71:
    *(byte **)(lVar25 + 0xc0) = pbVar23;
    func_0x0b63b6d0(*(undefined8 *)(pbVar23 + -0xa8),&uStack_1d8);
    lVar21 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar25 + 0x60);
    if ((ulong *)(lVar21 + -0x98) != &uStack_1d8) {
      pbVar32 = (byte *)(lVar21 + -0x90);
      if ((*pbVar32 & 1) == 0) {
        if ((uStack_1d0 & 1) == 0) {
          *(long *)(lVar21 + -0x80) = lStack_1c0;
          *(undefined4 *)pbVar32 = (undefined4)uStack_1d0;
          *(undefined4 *)(lVar21 + -0x8c) = uStack_1d0._4_4_;
          *(undefined4 *)(lVar21 + -0x88) = (undefined4)uStack_1c8;
          *(undefined4 *)(lVar21 + -0x84) = uStack_1c8._4_4_;
        }
        else {
          func_0x04885070(pbVar32,lStack_1c0,uStack_1c8);
        }
      }
      else {
        uVar29 = uStack_1d0 >> 1 & 0x7f;
        lVar30 = (long)&uStack_1d0 + 1;
        if ((uStack_1d0 & 1) != 0) {
          uVar29 = uStack_1c8;
          lVar30 = lStack_1c0;
        }
        FUN_04885120(pbVar32,lVar30,uVar29);
      }
    }
    *(ulong *)(lVar21 + -0x98) = uStack_1d8;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&puStack_198,&uStack_1d0,*(undefined1 *)(lVar25 + 0x60));
    lVar21 = *(long *)(lVar25 + 0xc0);
    func_0x04167a70(lVar21 + -0x70,&puStack_198);
    *(byte **)(lVar21 + -0x68) = pbStack_190;
    *(byte **)(lVar21 + -0x60) = pbStack_188;
    *(undefined8 **)(lVar21 + -0x58) = puStack_180;
    *(byte **)(lVar21 + -0x50) = pbStack_178;
    uVar7 = (undefined4)uStack_170;
    uVar8 = uStack_170._4_4_;
    uVar9 = (undefined4)uStack_168;
    uVar13 = uStack_168._4_4_;
    uStack_170 = 0;
    uStack_168 = (byte *)0x0;
    plVar31 = *(long **)(lVar21 + -0x40);
    *(undefined4 *)(lVar21 + -0x48) = uVar7;
    *(undefined4 *)(lVar21 + -0x44) = uVar8;
    *(undefined4 *)(lVar21 + -0x40) = uVar9;
    *(undefined4 *)(lVar21 + -0x3c) = uVar13;
    if (plVar31 != (long *)0x0) {
      LOCK();
      plVar1 = plVar31 + 1;
      lVar30 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar30 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        func_0x0412c2d0(plVar31);
      }
    }
    plVar31 = plStack_148;
    pbVar23 = uStack_168;
    *(undefined8 *)(lVar21 + -0x38) = uStack_160;
    if (uStack_168 != (byte *)0x0) {
      LOCK();
      pbVar32 = uStack_168 + 8;
      lVar21 = *(long *)pbVar32;
      *(long *)pbVar32 = *(long *)pbVar32 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*(long *)uStack_168 + 0x10))(uStack_168);
        func_0x0412c2d0(pbVar23);
      }
    }
    func_0x04167a40(&puStack_198);
    lVar25 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 0;
    pbVar28 = (byte *)(lVar25 + -0xa8);
LAB_09e38104:
    pbVar32 = (byte *)(plVar31 + 4);
    pbVar27 = *(byte **)(pbVar28 + 0x90);
    if (pbVar27 < *(byte **)(pbVar28 + 0x98)) {
      pbVar27[0x10] = 0;
      pbVar27[0x11] = 0;
      pbVar27[0x12] = 0;
      pbVar27[0x13] = 0;
      pbVar27[0x14] = 0;
      pbVar27[0x15] = 0;
      pbVar27[0x16] = 0;
      pbVar27[0x17] = 0;
      pbVar27[0x18] = 0;
      pbVar27[0x19] = 0;
      pbVar27[0x1a] = 0;
      pbVar27[0x1b] = 0;
      pbVar27[0x1c] = 0;
      pbVar27[0x1d] = 0;
      pbVar27[0x1e] = 0;
      pbVar27[0x1f] = 0;
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
      pbVar27[0x20] = 0;
      pbVar27[0x21] = 0;
      pbVar27[0x22] = 0;
      pbVar27[0x23] = 0;
      pbVar27[0x24] = 0;
      pbVar27[0x25] = 0;
      pbVar27[0x26] = 0;
      pbVar27[0x27] = 0;
      if (pbVar27 != pbStack_1b0) {
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)(pbVar27 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar19 = *(undefined8 *)(puStack_120 + 2);
          *(undefined8 *)(pbVar27 + 8) = *(undefined8 *)puStack_120;
          *(undefined8 *)(pbVar27 + 0x10) = uVar19;
        }
        else {
          func_0x04885070(pbVar27 + 8,*(undefined8 *)(pbVar17 + 0xa0),
                          *(undefined8 *)(pbVar17 + 0x98));
        }
      }
      *(undefined8 *)pbVar27 = *(undefined8 *)pbStack_1b0;
      *(byte **)(pbVar27 + 0x28) = pbVar32;
      *(long **)(pbVar27 + 0x30) = plStack_1a0;
      LOCK();
      plStack_1a0[1] = plStack_1a0[1] + 1;
      UNLOCK();
      pbVar27 = pbVar27 + 0x38;
      *(byte **)(pbVar28 + 0x90) = pbVar27;
      goto LAB_09e38422;
    }
    lVar25 = (long)pbVar27 - *(long *)(pbVar28 + 0x88);
    uVar29 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar29 < 0x492492492492493) {
      lVar21 = (long)*(byte **)(pbVar28 + 0x98) - *(long *)(pbVar28 + 0x88) >> 3;
      uVar16 = lVar21 * -0x2492492492492492;
      if (uVar29 < uVar16) {
        uVar29 = uVar16;
      }
      pbStack_178 = pbVar28 + 0x88;
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar29 = 0x492492492492492;
      }
      pbStack_128 = pbStack_178;
      if (uVar29 == 0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar29) goto LAB_09e3866b;
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x38);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar29 * 0x38,0);
          puVar18 = (undefined8 *)0x0;
        }
      }
      pbVar23 = (byte *)((long)puVar18 + lVar25);
      puStack_180 = puVar18 + uVar29 * 7;
      puVar5 = (undefined8 *)((long)puVar18 + lVar25 + 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25) = 0;
      ((undefined8 *)((long)puVar18 + lVar25))[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25 + 0x20) = 0;
      pbStack_188 = pbVar23;
      puStack_198 = puVar18;
      pbStack_190 = pbVar23;
      if (pbVar23 != pbStack_1b0) {
        puVar24 = (uint *)((long)puVar18 + lVar25 + 8);
        if ((*puStack_120 & 1) == 0) {
          *(undefined8 *)((long)puVar18 + lVar25 + 0x18) = *(undefined8 *)(puStack_120 + 4);
          uVar10 = puStack_120[1];
          uVar11 = puStack_120[2];
          uVar12 = puStack_120[3];
          *puVar24 = *puStack_120;
          *(uint *)((long)puVar18 + lVar25 + 0xc) = uVar10;
          *(uint *)((long)puVar18 + lVar25 + 0x10) = uVar11;
          *(uint *)((long)puVar18 + lVar25 + 0x14) = uVar12;
        }
        else {
          func_0x04885070(puVar24,*(undefined8 *)(pbVar17 + 0xa0),*(undefined8 *)(pbVar17 + 0x98));
        }
      }
      pbVar27 = pbStack_128;
      *(undefined8 *)pbVar23 = *(undefined8 *)pbStack_1b0;
      *(byte **)(pbVar23 + 0x28) = pbVar32;
      *(long **)(pbVar23 + 0x30) = plStack_1a0;
      LOCK();
      plStack_1a0[1] = plStack_1a0[1] + 1;
      UNLOCK();
      pbStack_188 = pbStack_188 + 0x38;
      puVar18 = *(undefined8 **)(pbVar28 + 0x88);
      puVar5 = *(undefined8 **)(pbVar28 + 0x90);
      pbVar32 = pbStack_190 + ((long)puVar18 - (long)puVar5);
      pbVar23 = pbVar32;
      puVar22 = puVar18;
      if ((long)puVar18 - (long)puVar5 != 0) {
        do {
          pbVar23[0x10] = 0;
          pbVar23[0x11] = 0;
          pbVar23[0x12] = 0;
          pbVar23[0x13] = 0;
          pbVar23[0x14] = 0;
          pbVar23[0x15] = 0;
          pbVar23[0x16] = 0;
          pbVar23[0x17] = 0;
          pbVar23[0x18] = 0;
          pbVar23[0x19] = 0;
          pbVar23[0x1a] = 0;
          pbVar23[0x1b] = 0;
          pbVar23[0x1c] = 0;
          pbVar23[0x1d] = 0;
          pbVar23[0x1e] = 0;
          pbVar23[0x1f] = 0;
          pbVar23[0] = 0;
          pbVar23[1] = 0;
          pbVar23[2] = 0;
          pbVar23[3] = 0;
          pbVar23[4] = 0;
          pbVar23[5] = 0;
          pbVar23[6] = 0;
          pbVar23[7] = 0;
          pbVar23[8] = 0;
          pbVar23[9] = 0;
          pbVar23[10] = 0;
          pbVar23[0xb] = 0;
          pbVar23[0xc] = 0;
          pbVar23[0xd] = 0;
          pbVar23[0xe] = 0;
          pbVar23[0xf] = 0;
          pbVar23[0x20] = 0;
          pbVar23[0x21] = 0;
          pbVar23[0x22] = 0;
          pbVar23[0x23] = 0;
          pbVar23[0x24] = 0;
          pbVar23[0x25] = 0;
          pbVar23[0x26] = 0;
          pbVar23[0x27] = 0;
          *(undefined8 *)(pbVar23 + 0x18) = puVar22[3];
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar23 + 8) = puVar22[1];
          *(undefined8 *)(pbVar23 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar23 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar23 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar23 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar23 = pbVar23 + 0x38;
        } while (puVar22 != puVar5);
        do {
          plVar31 = (long *)puVar18[6];
          if (plVar31 == (long *)0x0) {
LAB_09e383b4:
            bVar6 = *(byte *)(puVar18 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar31 + 1;
            lVar25 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar25 != 0) goto LAB_09e383b4;
            (**(code **)(*plVar31 + 0x10))(plVar31);
            func_0x0412c2d0(plVar31);
            bVar6 = *(byte *)(puVar18 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar18[3],puVar18[1] & 0xfffffffffffffffe);
          }
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar5);
        puVar18 = *(undefined8 **)pbVar27;
      }
      pbVar27 = pbStack_188;
      *(byte **)(pbVar28 + 0x88) = pbVar32;
      *(byte **)(pbVar28 + 0x90) = pbStack_188;
      lVar25 = *(long *)(pbVar28 + 0x98);
      *(undefined8 **)(pbVar28 + 0x98) = puStack_180;
      if (puVar18 != (undefined8 *)0x0) {
        func_0x0412a280(puVar18,lVar25 - (long)puVar18);
      }
LAB_09e38422:
      plVar31 = plStack_140;
      uVar14 = uStack_1a4;
      *(byte **)(pbVar28 + 0x90) = pbVar27;
      uVar7 = *(undefined4 *)pbVar28;
      uVar8 = *(undefined4 *)(pbVar28 + 4);
      uVar9 = *(undefined4 *)(pbVar28 + 8);
      uVar13 = *(undefined4 *)(pbVar28 + 0xc);
      if (*(long *)(pbVar28 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(pbVar28 + 8) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = *(long **)(pbVar17 + 0x78);
      *(undefined4 *)(pbVar17 + 0x70) = uVar7;
      *(undefined4 *)(pbVar17 + 0x74) = uVar8;
      *(undefined4 *)(pbVar17 + 0x78) = uVar9;
      *(undefined4 *)(pbVar17 + 0x7c) = uVar13;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar25 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
        }
      }
      plVar1 = plStack_1a0;
      pbVar17[0x80] = pbVar28[0xa1];
      LOCK();
      lVar25 = *plStack_118;
      *plStack_118 = *plStack_118 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        func_0x0412c2d0(plVar1);
        LOCK();
        lVar25 = *(long *)pbStack_108;
        *(long *)pbStack_108 = *(long *)pbStack_108 + -1;
        UNLOCK();
        pbVar32 = pbStack_108;
      }
      else {
        LOCK();
        lVar25 = *(long *)pbStack_108;
        *(long *)pbStack_108 = *(long *)pbStack_108 + -1;
        UNLOCK();
        pbVar32 = pbStack_108;
      }
      pbStack_108 = pbVar32;
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        func_0x0412c2d0(pbVar17);
        LOCK();
        lVar25 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        func_0x0412c2d0(pbVar17);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_1d0 & 1) != 0) {
        func_0x0412a280(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
      }
      ppuVar26 = (undefined8 **)(pbVar17 + 0x130);
      if (plVar31 != (long *)0x0) {
        LOCK();
        plVar1 = plVar31 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
          func_0x0412c2d0(plVar31);
        }
      }
      puStack_b8 = (undefined8 *)&UNK_0f1e9818;
      pbStack_b0 = pbStack_100;
      uStack_a8 = (undefined1)uVar14;
      if (ppuVar26 != &puStack_b8) {
        if ((*ppuVar26 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar26)[1])(ppuVar26), puStack_b8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_b8)(&puStack_b8,ppuVar26);
        }
        else {
          puStack_b8 = (undefined8 *)0x0;
        }
        *ppuVar26 = puStack_b8;
      }
      return pbStack_138;
    }
  }
  else {
    pbVar23 = pbVar23 + -(long)pbStack_150;
    uVar29 = ((long)pbVar23 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar29) goto LAB_09e38675;
    lVar21 = (long)*(byte **)(lStack_130 + 200) - (long)pbStack_150 >> 3;
    uVar16 = lVar21 * -0x6186186186186186;
    if (uVar29 < uVar16) {
      uVar29 = uVar16;
    }
    pbVar28 = (byte *)(lStack_130 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar29 = 0x186186186186186;
    }
    pbStack_178 = pbVar28;
    if (uVar29 == 0) {
      puVar18 = (undefined8 *)0x0;
LAB_09e37d9f:
      pbStack_190 = pbVar23 + (long)puVar18;
      puStack_180 = puVar18 + uVar29 * 0x15;
      puStack_198 = puVar18;
      pbStack_188 = pbStack_190;
      func_0x09e88eb0(pbStack_190);
      pbVar23 = pbStack_188 + 0xa8;
      lVar21 = *(long *)(lVar25 + 0xb8);
      lVar25 = *(long *)(lVar25 + 0xc0);
      pbVar32 = pbStack_190 + (lVar21 - lVar25);
      if (lVar21 != lVar25) {
        lVar30 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar30))[1];
          *(undefined8 *)(pbVar32 + lVar30) = *(undefined8 *)(lVar21 + lVar30);
          *(undefined8 *)(pbVar32 + lVar30 + 8) = uVar19;
          *(undefined8 *)(lVar21 + lVar30) = 0;
          ((undefined8 *)(lVar21 + lVar30))[1] = 0;
          pbVar27 = pbVar32 + lVar30 + 0x20;
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
          pbVar27 = pbVar32 + lVar30 + 0x10;
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
          pbVar27 = pbVar32 + lVar30 + 0x30;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          *(undefined8 *)(pbVar32 + lVar30 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar30);
          puVar4 = (undefined4 *)(lVar21 + 0x18 + lVar30);
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
          pbVar27 = pbVar32 + lVar30 + 0x18;
          *(undefined4 *)pbVar27 = *puVar4;
          *(undefined4 *)(pbVar27 + 4) = uVar7;
          *(undefined4 *)(pbVar27 + 8) = uVar8;
          *(undefined4 *)(pbVar27 + 0xc) = uVar9;
          *(undefined2 *)(lVar21 + 0x18 + lVar30) = 0;
          *(undefined8 *)(pbVar32 + lVar30 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar30);
          FUN_04167a20(pbVar32 + lVar30 + 0x38,lVar21 + lVar30 + 0x38);
          puVar18 = (undefined8 *)(lVar21 + 0x40 + lVar30);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar30 + 0x40) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar30 + 0x40 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x50 + lVar30);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar30 + 0x50) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar30 + 0x50 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar30);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar30 + 0x60) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar30 + 0x60 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar30);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(pbVar32 + lVar30 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar30);
          puVar18 = (undefined8 *)(lVar21 + 0x78 + lVar30);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar32 + lVar30 + 0x78) = *puVar18;
          *(undefined8 *)(pbVar32 + lVar30 + 0x78 + 8) = uVar19;
          pbVar27 = pbVar32 + lVar30 + 0x88;
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
          pbVar27 = pbVar32 + lVar30 + 0x98;
          pbVar27[0] = 0;
          pbVar27[1] = 0;
          pbVar27[2] = 0;
          pbVar27[3] = 0;
          pbVar27[4] = 0;
          pbVar27[5] = 0;
          pbVar27[6] = 0;
          pbVar27[7] = 0;
          puVar4 = (undefined4 *)(lVar21 + 0x88 + lVar30);
          uVar7 = puVar4[1];
          uVar8 = puVar4[2];
          uVar9 = puVar4[3];
          pbVar27 = pbVar32 + lVar30 + 0x88;
          *(undefined4 *)pbVar27 = *puVar4;
          *(undefined4 *)(pbVar27 + 4) = uVar7;
          *(undefined4 *)(pbVar27 + 8) = uVar8;
          *(undefined4 *)(pbVar27 + 0xc) = uVar9;
          *(undefined8 *)(pbVar32 + lVar30 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar30);
          puVar18 = (undefined8 *)(lVar21 + 0x88 + lVar30);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar30) = 0;
          *(undefined2 *)(pbVar32 + lVar30 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar30);
          lVar3 = lVar21 + lVar30;
          lVar30 = lVar30 + 0xa8;
        } while (lVar3 + 0xa8 != lVar25);
        do {
          func_0x09e89030(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar25);
        lVar21 = *(long *)pbVar28;
      }
      lVar25 = lStack_130;
      *(byte **)(lStack_130 + 0xb8) = pbVar32;
      *(byte **)(lStack_130 + 0xc0) = pbVar23;
      lVar30 = *(long *)(lStack_130 + 200);
      *(undefined8 **)(lStack_130 + 200) = puStack_180;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar30 - lVar21);
      }
      goto LAB_09e37f71;
    }
    if (uVar29 < 0x186186186186187) {
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar29 * 0xa8,0);
        puVar18 = (undefined8 *)0x0;
      }
      goto LAB_09e37d9f;
    }
LAB_09e3866b:
    func_0x04882eb0();
  }
  func_0x09e89250();
LAB_09e38675:
  uVar19 = func_0x09e89020();
  if ((*pbVar23 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar32 + 0x18),*(ulong *)(pbVar32 + 8) & 0xfffffffffffffffe);
  }
  func_0x09e89190(&puStack_198);
  plVar31 = plStack_1a0;
  LOCK();
  lVar25 = *plStack_118;
  *plStack_118 = *plStack_118 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
    func_0x0412c2d0(plVar31);
  }
  func_0x09e87750(pbVar17);
  func_0x09e87780(pbVar17);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_1d0 & 1) != 0) goto LAB_09e38798;
  do {
    do {
      func_0x09e38860(plStack_140);
      uVar19 = func_0x0eee2d70(uVar19);
    } while ((uStack_1d0 & 1) == 0);
LAB_09e38798:
    func_0x0412a280(lStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
  } while( true );
}


