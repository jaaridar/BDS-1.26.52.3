/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x70244e0 (ELF vaddr 0x6f244e0)
 * Label: caller-of-callee
 * Body:  [[070244e0, 07024896] [070248a0, 07024908] [07024910, 0702500a] [07025010, 0702504c] [07025050, 07025575] [07025580, 07025b6a] [07025b70, 07025bac] [07025bb0, 07025e88] [07026109, 070261f3]]
 * Ghidra: FUN_070244e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_070244e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 **ppuVar6;
  uint *puVar7;
  long lVar8;
  byte bVar9;
  long *plVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  bool bVar34;
  undefined8 uStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  undefined8 *puStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  undefined8 *puStack_1e0;
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined8 *puStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined2 uStack_187;
  undefined1 uStack_185;
  undefined4 uStack_184;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_158;
  byte *pbStack_150;
  ulong auStack_148 [4];
  ulong auStack_128 [4];
  ulong auStack_108 [4];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  pbVar30 = (byte *)*param_1;
  uStack_185 = 0;
  uStack_184 = 0;
  pbStack_180 = (byte *)0x0;
  pbStack_178 = (byte *)0x0;
  uStack_190 = 0x6f6c6214;
  uStack_18c = 0x6c5f6b63;
  uStack_188 = 0x69;
  uStack_187 = 0x7473;
  puStack_198 = (undefined8 *)0x8ccfc1cbb210a143;
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f0b5eb8;
  pbStack_210 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbStack_210 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbStack_210[8] = 0;
  pbStack_210[9] = 0;
  pbStack_210[10] = 0;
  pbStack_210[0xb] = 0;
  pbStack_210[0xc] = 0;
  pbStack_210[0xd] = 0;
  pbStack_210[0xe] = 0;
  pbStack_210[0xf] = 0;
  pbStack_210[0x10] = 0;
  pbStack_210[0x11] = 0;
  pbStack_210[0x12] = 0;
  pbStack_210[0x13] = 0;
  pbStack_210[0x14] = 0;
  pbStack_210[0x15] = 0;
  pbStack_210[0x16] = 0;
  pbStack_210[0x17] = 0;
  *(undefined **)pbStack_210 = &UNK_0f0b5c78;
  puStack_1f8 = (undefined8 *)0x0;
  pbStack_1f0 = (byte *)0x0;
  if (puStack_b8 == (undefined8 *)0x0) {
    puStack_1f8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b8)(&puStack_b8,&puStack_1f8);
    puStack_1f8 = puStack_b8;
  }
  puStack_b8 = (undefined8 *)0x0;
  *(undefined **)(pbStack_210 + 0x20) = &UNK_0f2ccd78;
  pbStack_210[0x28] = 0;
  pbStack_210[0x29] = 0;
  pbStack_210[0x2a] = 0;
  pbStack_210[0x2b] = 0;
  pbStack_210[0x2c] = 0;
  pbStack_210[0x2d] = 0;
  pbStack_210[0x2e] = 0;
  pbStack_210[0x2f] = 0;
  pbStack_210[0x30] = 0;
  pbStack_210[0x31] = 0;
  pbStack_210[0x32] = 0;
  pbStack_210[0x33] = 0;
  pbStack_210[0x34] = 0;
  pbStack_210[0x35] = 0;
  pbStack_210[0x36] = 0;
  pbStack_210[0x37] = 0;
  pbStack_210[0x38] = 0;
  pbStack_210[0x39] = 0;
  pbStack_210[0x3a] = 0;
  pbStack_210[0x3b] = 0;
  pbStack_210[0x3c] = 0;
  pbStack_210[0x3d] = 0;
  pbStack_210[0x3e] = 0;
  pbStack_210[0x3f] = 0;
  pbStack_210[0x40] = 0;
  pbStack_210[0x41] = 0;
  pbStack_210[0x42] = 0;
  pbStack_210[0x43] = 0;
  pbStack_210[0x44] = 0;
  pbStack_210[0x45] = 0;
  pbStack_210[0x46] = 0;
  pbStack_210[0x47] = 0;
  pbStack_210[0x48] = 0;
  pbStack_210[0x49] = 0;
  pbStack_210[0x4a] = 0;
  pbStack_210[0x4b] = 0;
  pbStack_210[0x4c] = 0;
  pbStack_210[0x4d] = 0;
  pbStack_210[0x4e] = 0;
  pbStack_210[0x4f] = 0;
  pbStack_210[0x50] = 0;
  pbStack_210[0x51] = 0;
  pbStack_210[0x52] = 0;
  pbStack_210[0x53] = 0;
  pbStack_210[0x54] = 0;
  pbStack_210[0x55] = 0;
  pbStack_210[0x56] = 0;
  pbStack_210[0x57] = 0;
  pbStack_210[0x58] = 0;
  pbStack_210[0x59] = 0;
  pbStack_210[0x5a] = 0;
  pbStack_210[0x5b] = 0;
  pbStack_210[0x5c] = 0;
  pbStack_210[0x5d] = 0;
  pbStack_210[0x5e] = 0;
  pbStack_210[0x5f] = 0;
  pbStack_210[0x60] = 0;
  pbStack_210[0x61] = 0;
  pbStack_210[0x62] = 0;
  pbStack_210[99] = 0;
  pbStack_210[100] = 0;
  pbStack_210[0x65] = 0;
  pbStack_210[0x66] = 0;
  pbStack_210[0x67] = 0;
  pbStack_210[0x68] = 0;
  FUN_04aa75f0(pbStack_210 + 0x70,&uStack_e8,&UNK_01254d89);
  pbStack_210[0x80] = 0;
  pbVar5 = pbStack_210 + 0x88;
  pbStack_210[0x88] = 0;
  pbStack_210[0x89] = 0;
  pbStack_210[0x8a] = 0;
  pbStack_210[0x8b] = 0;
  pbStack_210[0x8c] = 0;
  pbStack_210[0x8d] = 0;
  pbStack_210[0x8e] = 0;
  pbStack_210[0x8f] = 0;
  pbStack_210[0x90] = 0;
  pbStack_210[0x91] = 0;
  pbStack_210[0x92] = 0;
  pbStack_210[0x93] = 0;
  pbStack_210[0x94] = 0;
  pbStack_210[0x95] = 0;
  pbStack_210[0x96] = 0;
  pbStack_210[0x97] = 0;
  pbStack_210[0x98] = 0;
  pbStack_210[0x99] = 0;
  pbStack_210[0x9a] = 0;
  pbStack_210[0x9b] = 0;
  pbStack_210[0x9c] = 0;
  pbStack_210[0x9d] = 0;
  pbStack_210[0x9e] = 0;
  pbStack_210[0x9f] = 0;
  pbStack_210[0xa0] = 0;
  pbStack_210[0xa1] = 0;
  pbStack_210[0xa2] = 0;
  pbStack_210[0xa3] = 0;
  pbStack_210[0xa4] = 0;
  pbStack_210[0xa5] = 0;
  pbStack_210[0xa6] = 0;
  pbStack_210[0xa7] = 0;
  pbStack_210[0xa8] = 0;
  pbStack_210[0xa9] = 0;
  pbStack_210[0xaa] = 0;
  pbStack_210[0xab] = 0;
  pbStack_210[0xac] = 0;
  pbStack_210[0xad] = 0;
  pbStack_210[0xae] = 0;
  pbStack_210[0xaf] = 0;
  pbStack_210[0xb0] = 0;
  pbStack_210[0xb1] = 0;
  pbStack_210[0xb2] = 0;
  pbStack_210[0xb3] = 0;
  pbStack_210[0xb4] = 0;
  pbStack_210[0xb5] = 0;
  pbStack_210[0xb6] = 0;
  pbStack_210[0xb7] = 0;
  pbStack_210[0xb8] = 0xff;
  pbStack_210[0xb9] = 0xff;
  pbStack_210[0xba] = 0xff;
  pbStack_210[0xbb] = 0xff;
  pbStack_210[0xbc] = 0;
  pbStack_210[0xbd] = 0;
  pbStack_210[0xbe] = 0;
  pbStack_210[0xbf] = 0;
  pbStack_210[0x130] = 0;
  pbStack_210[0x131] = 0;
  pbStack_210[0x132] = 0;
  pbStack_210[0x133] = 0;
  pbStack_210[0x134] = 0;
  pbStack_210[0x135] = 0;
  pbStack_210[0x136] = 0;
  pbStack_210[0x137] = 0;
  pbStack_210[0x138] = 0;
  pbStack_210[0x139] = 0;
  pbStack_210[0x13a] = 0;
  pbStack_210[0x13b] = 0;
  pbStack_210[0x13c] = 0;
  pbStack_210[0x13d] = 0;
  pbStack_210[0x13e] = 0;
  pbStack_210[0x13f] = 0;
  pbStack_210[0xc0] = 0;
  pbStack_210[0xc1] = 0;
  pbStack_210[0xc2] = 0;
  pbStack_210[0xc3] = 0;
  pbStack_210[0xc4] = 0;
  pbStack_210[0xc5] = 0;
  pbStack_210[0xc6] = 0;
  pbStack_210[199] = 0;
  pbStack_210[200] = 0;
  pbStack_210[0xc9] = 0;
  pbStack_210[0xca] = 0;
  pbStack_210[0xcb] = 0;
  pbStack_210[0xcc] = 0;
  pbStack_210[0xcd] = 0;
  pbStack_210[0xce] = 0;
  pbStack_210[0xcf] = 0;
  pbStack_210[0xd0] = 0;
  pbStack_210[0xd1] = 0;
  pbStack_210[0xd2] = 0;
  pbStack_210[0xd3] = 0;
  pbStack_210[0xd4] = 0;
  pbStack_210[0xd5] = 0;
  pbStack_210[0xd6] = 0;
  pbStack_210[0xd7] = 0;
  pbStack_210[0xd8] = 0;
  pbStack_210[0xd9] = 0;
  pbStack_210[0xda] = 0;
  pbStack_210[0xdb] = 0;
  pbStack_210[0xdc] = 0;
  pbStack_210[0xdd] = 0;
  pbStack_210[0xde] = 0;
  pbStack_210[0xdf] = 0;
  pbStack_210[0xe0] = 0;
  pbStack_210[0xe1] = 0;
  pbStack_210[0xe2] = 0;
  pbStack_210[0xe3] = 0;
  pbStack_210[0xe4] = 0;
  pbStack_210[0xe5] = 0;
  pbStack_210[0xe6] = 0;
  pbStack_210[0xe7] = 0;
  pbStack_210[0xe8] = 0;
  pbStack_210[0xe9] = 0;
  pbStack_210[0xea] = 0;
  pbStack_210[0xeb] = 0;
  pbStack_210[0xec] = 0;
  pbStack_210[0xed] = 0;
  pbStack_210[0xee] = 0;
  pbStack_210[0xef] = 0;
  pbStack_210[0xf0] = 0;
  pbStack_210[0xf1] = 0;
  pbStack_210[0xf2] = 0;
  pbStack_210[0xf3] = 0;
  pbStack_210[0xf4] = 0;
  pbStack_210[0xf5] = 0;
  pbStack_210[0xf6] = 0;
  pbStack_210[0xf7] = 0;
  pbStack_210[0xf8] = 0;
  pbStack_210[0xf9] = 0;
  pbStack_210[0xfa] = 0;
  pbStack_210[0xfb] = 0;
  pbStack_210[0xfc] = 0;
  pbStack_210[0xfd] = 0;
  pbStack_210[0xfe] = 0;
  pbStack_210[0xff] = 0;
  *(undefined **)(pbStack_210 + 0x20) = &UNK_0f0b5cc8;
  ppuVar6 = (undefined8 **)(pbStack_210 + 0x170);
  pbStack_210[0x170] = 0;
  pbStack_210[0x171] = 0;
  pbStack_210[0x172] = 0;
  pbStack_210[0x173] = 0;
  pbStack_210[0x174] = 0;
  pbStack_210[0x175] = 0;
  pbStack_210[0x176] = 0;
  pbStack_210[0x177] = 0;
  pbStack_210[0x178] = 0;
  pbStack_210[0x179] = 0;
  pbStack_210[0x17a] = 0;
  pbStack_210[0x17b] = 0;
  pbStack_210[0x17c] = 0;
  pbStack_210[0x17d] = 0;
  pbStack_210[0x17e] = 0;
  pbStack_210[0x17f] = 0;
  if (ppuVar6 != &puStack_1f8) {
    if (puStack_1f8 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_1f8)(&puStack_1f8,ppuVar6);
      puVar21 = puStack_1f8;
    }
    puStack_1f8 = (undefined8 *)0x0;
    *ppuVar6 = puVar21;
  }
  pbVar28 = pbStack_210 + 0x20;
  puVar7 = (uint *)(pbStack_210 + 0x90);
  pbStack_1a8 = pbVar30;
  if (pbVar5 != &DAT_0f551f58) {
    if ((*puVar7 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(pbStack_210 + 0xa0) = _DAT_0f551f70;
        uVar14 = uRam000000000f551f6c;
        uVar13 = _DAT_0f551f68;
        uVar12 = uRam000000000f551f64;
        *puVar7 = _DAT_0f551f60;
        *(undefined4 *)(pbStack_210 + 0x94) = uVar12;
        *(undefined4 *)(pbStack_210 + 0x98) = uVar13;
        *(undefined4 *)(pbStack_210 + 0x9c) = uVar14;
      }
      else {
        func_0x04885070(puVar7,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar34 = (_DAT_0f551f60 & 1) != 0;
      lVar25 = 0xf551f61;
      if (bVar34) {
        lVar25 = _DAT_0f551f70;
      }
      uVar27 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar34) {
        uVar27 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar7,lVar25,uVar27);
    }
  }
  pbVar30 = pbStack_210 + 8;
  *(long *)(pbStack_210 + 0x88) = _DAT_0f551f58;
  pbStack_210[0xa8] = 0;
  pbStack_210[0xa9] = 0;
  pbStack_210[0xaa] = 0;
  pbStack_210[0xab] = 0;
  pbStack_210[0xac] = 0;
  pbStack_210[0xad] = 0;
  pbStack_210[0xae] = 0;
  pbStack_210[0xaf] = 0;
  if (puStack_1f8 != (undefined8 *)0x0) {
    (*(code *)puStack_1f8[1])(&puStack_1f8);
  }
  LOCK();
  *(long *)pbVar30 = *(long *)pbVar30 + 1;
  UNLOCK();
  puStack_d8 = puVar7;
  pbStack_d0 = pbVar30;
  puStack_c0 = param_1;
  pbStack_208 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_208 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar31 = pbStack_178;
  puVar21 = puStack_198;
  pbStack_208[8] = 0;
  pbStack_208[9] = 0;
  pbStack_208[10] = 0;
  pbStack_208[0xb] = 0;
  pbStack_208[0xc] = 0;
  pbStack_208[0xd] = 0;
  pbStack_208[0xe] = 0;
  pbStack_208[0xf] = 0;
  pbStack_208[0x10] = 0;
  pbStack_208[0x11] = 0;
  pbStack_208[0x12] = 0;
  pbStack_208[0x13] = 0;
  pbStack_208[0x14] = 0;
  pbStack_208[0x15] = 0;
  pbStack_208[0x16] = 0;
  pbStack_208[0x17] = 0;
  *(undefined **)pbStack_208 = &UNK_0f0b5dc0;
  pbStack_208[0x30] = 0;
  pbStack_208[0x31] = 0;
  pbStack_208[0x32] = 0;
  pbStack_208[0x33] = 0;
  pbStack_208[0x34] = 0;
  pbStack_208[0x35] = 0;
  pbStack_208[0x36] = 0;
  pbStack_208[0x37] = 0;
  pbStack_208[0x38] = 0;
  pbStack_208[0x39] = 0;
  pbStack_208[0x3a] = 0;
  pbStack_208[0x3b] = 0;
  pbStack_208[0x3c] = 0;
  pbStack_208[0x3d] = 0;
  pbStack_208[0x3e] = 0;
  pbStack_208[0x3f] = 0;
  *(undefined **)(pbStack_208 + 0x20) = &UNK_0f0b5e10;
  *(byte **)(pbStack_208 + 0x70) = pbVar28;
  *(byte **)(pbStack_208 + 0x78) = pbStack_210;
  LOCK();
  *(long *)(pbStack_210 + 8) = *(long *)(pbStack_210 + 8) + 1;
  UNLOCK();
  pbStack_1b0 = pbStack_208 + 8;
  pbStack_158 = *(byte **)(pbStack_1a8 + 0xb8);
  pbVar32 = *(byte **)(pbStack_1a8 + 0xc0);
  pbVar30 = pbStack_210;
  pbStack_150 = pbStack_208;
  pbStack_c8 = pbVar28;
  if (pbStack_158 != pbVar32) {
    if ((uStack_190 & 1) == 0) {
      uVar27 = (ulong)((byte)uStack_190 >> 1);
      pbStack_1a0 = (byte *)((long)&uStack_190 + 1);
    }
    else {
      uVar27 = CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)));
      pbStack_1a0 = pbStack_180;
    }
    pbStack_200 = pbStack_178;
    pbVar28 = pbStack_158 + 0x19;
    do {
      if (*(undefined8 **)(pbVar28 + -9) == puVar21) {
        if ((*(undefined8 ***)(pbVar28 + 0x17) == &puStack_198) && (pbVar28 + -9 == pbVar31)) {
LAB_07024d75:
          pbVar30 = pbVar28 + -0x19;
          goto LAB_07024d79;
        }
        bVar9 = pbVar28[-1];
        if ((bVar9 & 1) == 0) {
          uVar23 = (ulong)(bVar9 >> 1);
        }
        else {
          uVar23 = *(ulong *)(pbVar28 + 7);
        }
        if (uVar23 == uVar27) {
          pbVar30 = pbVar28;
          if ((bVar9 & 1) != 0) {
            pbVar30 = *(byte **)(pbVar28 + 0xf);
          }
          iVar20 = func_0x0eee3000(pbVar30,pbStack_1a0,uVar27);
          if (iVar20 == 0) {
            *(undefined8 ***)(pbVar28 + 0x17) = &puStack_198;
            pbStack_178 = pbVar28 + -9;
            goto LAB_07024d75;
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
      pbVar30 = pbVar28 + 0xa8;
      pbVar29 = pbVar28 + 0x8f;
      pbVar28 = pbVar30;
    } while (pbVar29 != pbVar32);
  }
  pbVar28 = pbStack_1a8;
  if (pbVar32 < *(byte **)(pbStack_1a8 + 200)) {
    func_0x071422f0(pbVar32);
    pbVar32 = pbVar32 + 0xa8;
    *(byte **)(pbVar28 + 0xc0) = pbVar32;
LAB_07024bde:
    *(byte **)(pbVar28 + 0xc0) = pbVar32;
    func_0x0b63b6d0(*(long *)(pbVar32 + -0xa8),&puStack_198);
    lVar25 = *(long *)(pbVar28 + 0xc0);
    *(byte *)(lVar25 + -7) = pbVar28[0x60];
    if ((undefined8 **)(lVar25 + -0x98) != &puStack_198) {
      puVar7 = (uint *)(lVar25 + -0x90);
      if ((*(byte *)puVar7 & 1) == 0) {
        if ((uStack_190 & 1) == 0) {
          *(byte **)(lVar25 + -0x80) = pbStack_180;
          *puVar7 = uStack_190;
          *(undefined4 *)(lVar25 + -0x8c) = uStack_18c;
          *(uint *)(lVar25 + -0x88) = CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188));
          *(undefined4 *)(lVar25 + -0x84) = uStack_184;
        }
        else {
          func_0x04885070(puVar7,pbStack_180,
                          CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188))))
          ;
        }
      }
      else {
        bVar34 = (uStack_190 & 1) != 0;
        pbVar30 = (byte *)((long)&uStack_190 + 1);
        if (bVar34) {
          pbVar30 = pbStack_180;
        }
        uVar27 = (ulong)((byte)uStack_190 >> 1);
        if (bVar34) {
          uVar27 = CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)));
        }
        func_0x04885120(puVar7,pbVar30,uVar27);
      }
    }
    *(undefined8 **)(lVar25 + -0x98) = puStack_198;
    *(undefined8 *)(lVar25 + -0x78) = 0;
    func_0x04aa9390(&puStack_1f8,&uStack_190,pbVar28[0x60]);
    lVar25 = *(long *)(pbVar28 + 0xc0);
    FUN_04167a70(lVar25 + -0x70,&puStack_1f8);
    *(byte **)(lVar25 + -0x68) = pbStack_1f0;
    *(byte **)(lVar25 + -0x60) = pbStack_1e8;
    *(undefined8 **)(lVar25 + -0x58) = puStack_1e0;
    *(byte **)(lVar25 + -0x50) = pbStack_1d8;
    uVar12 = (undefined4)uStack_1d0;
    uVar13 = uStack_1d0._4_4_;
    uVar14 = (undefined4)uStack_1c8;
    uVar18 = uStack_1c8._4_4_;
    uStack_1d0 = 0;
    uStack_1c8 = (long *)0x0;
    plVar10 = *(long **)(lVar25 + -0x40);
    *(undefined4 *)(lVar25 + -0x48) = uVar12;
    *(undefined4 *)(lVar25 + -0x44) = uVar13;
    *(undefined4 *)(lVar25 + -0x40) = uVar14;
    *(undefined4 *)(lVar25 + -0x3c) = uVar18;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = uStack_1c8;
    *(undefined8 *)(lVar25 + -0x38) = uStack_1c0;
    if (uStack_1c8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_1c8 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_1c8 + 0x10))(uStack_1c8);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x04167a40(&puStack_1f8);
    lVar25 = *(long *)(pbVar28 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 1;
    pbVar30 = (byte *)(lVar25 + -0xa8);
LAB_07024d79:
    pbVar31 = pbStack_150 + 0x20;
    pbVar28 = *(byte **)(pbVar30 + 0x90);
    if (*(byte **)(pbVar30 + 0x98) <= pbVar28) {
      pbVar28 = pbVar28 + -*(long *)(pbVar30 + 0x88);
      pbVar32 = (byte *)(((long)pbVar28 >> 3) * 0x6db6db6db6db6db7 + 1);
      if (pbVar32 < (byte *)0x492492492492493) {
        lVar25 = (long)*(byte **)(pbVar30 + 0x98) - *(long *)(pbVar30 + 0x88) >> 3;
        pbVar29 = (byte *)(lVar25 * -0x2492492492492492);
        if (pbVar32 < pbVar29) {
          pbVar32 = pbVar29;
        }
        pbStack_200 = pbVar30 + 0x88;
        if (0x249249249249248 < (ulong)(lVar25 * 0x6db6db6db6db6db7)) {
          pbVar32 = (byte *)0x492492492492492;
        }
        pbStack_1d8 = pbStack_200;
        if (pbVar32 == (byte *)0x0) {
          puVar21 = (undefined8 *)0x0;
        }
        else {
          if ((byte *)0x492492492492492 < pbVar32) goto LAB_07025e46;
          puVar21 = (undefined8 *)
                    (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar32 * 0x38);
          if (puVar21 == (undefined8 *)0x0) {
            func_0x0eec74c0((long)pbVar32 * 0x38,0);
            puVar21 = (undefined8 *)0x0;
          }
        }
        pbVar29 = (byte *)((long)puVar21 + (long)pbVar28);
        puStack_1e0 = puVar21 + (long)pbVar32 * 7;
        pbVar32 = (byte *)((long)(puVar21 + 2) + (long)pbVar28);
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
        pbVar32 = (byte *)((long)puVar21 + (long)pbVar28);
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
        pbVar32 = (byte *)((long)(puVar21 + 4) + (long)pbVar28);
        pbVar32[0] = 0;
        pbVar32[1] = 0;
        pbVar32[2] = 0;
        pbVar32[3] = 0;
        pbVar32[4] = 0;
        pbVar32[5] = 0;
        pbVar32[6] = 0;
        pbVar32[7] = 0;
        pbStack_1e8 = pbVar29;
        puStack_1f8 = puVar21;
        pbStack_1f0 = pbVar29;
        if (pbVar29 != pbVar5) {
          pbVar28 = (byte *)((long)puVar21 + (long)pbVar28);
          if ((*puStack_d8 & 1) == 0) {
            *(long *)(pbVar28 + 0x18) = *(long *)(puStack_d8 + 4);
            uVar15 = puStack_d8[1];
            uVar16 = puStack_d8[2];
            uVar17 = puStack_d8[3];
            *(uint *)(pbVar28 + 8) = *puStack_d8;
            *(uint *)(pbVar28 + 0xc) = uVar15;
            *(uint *)(pbVar28 + 0x10) = uVar16;
            *(uint *)(pbVar28 + 0x14) = uVar17;
          }
          else {
            func_0x04885070(pbVar28 + 8,*(long *)(pbStack_210 + 0xa0),*(long *)(pbStack_210 + 0x98))
            ;
          }
        }
        *(long *)pbVar29 = *(long *)pbVar5;
        *(byte **)(pbVar29 + 0x28) = pbVar31;
        *(byte **)(pbVar29 + 0x30) = pbStack_208;
        LOCK();
        *(long *)(pbStack_208 + 8) = *(long *)(pbStack_208 + 8) + 1;
        UNLOCK();
        pbStack_1e8 = pbStack_1e8 + 0x38;
        puVar21 = *(undefined8 **)(pbVar30 + 0x88);
        puVar22 = *(undefined8 **)(pbVar30 + 0x90);
        pbVar5 = pbStack_1f0 + ((long)puVar21 - (long)puVar22);
        pbVar28 = pbVar5;
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
            uVar19 = puVar24[2];
            *(undefined8 *)(pbVar28 + 8) = puVar24[1];
            *(undefined8 *)(pbVar28 + 0x10) = uVar19;
            *(undefined2 *)(puVar24 + 1) = 0;
            *(undefined8 *)pbVar28 = *puVar24;
            uVar12 = *(undefined4 *)((long)puVar24 + 0x2c);
            uVar13 = *(undefined4 *)(puVar24 + 6);
            uVar14 = *(undefined4 *)((long)puVar24 + 0x34);
            *(undefined4 *)(pbVar28 + 0x28) = *(undefined4 *)(puVar24 + 5);
            *(undefined4 *)(pbVar28 + 0x2c) = uVar12;
            *(undefined4 *)(pbVar28 + 0x30) = uVar13;
            *(undefined4 *)(pbVar28 + 0x34) = uVar14;
            puVar24[5] = 0;
            puVar24[6] = 0;
            puVar24 = puVar24 + 7;
            pbVar28 = pbVar28 + 0x38;
          } while (puVar24 != puVar22);
          do {
            plVar10 = (long *)puVar21[6];
            if (plVar10 == (long *)0x0) {
LAB_07025034:
              bVar9 = *(byte *)(puVar21 + 1);
            }
            else {
              LOCK();
              plVar1 = plVar10 + 1;
              lVar25 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar25 != 0) goto LAB_07025034;
              (**(code **)(*plVar10 + 0x10))(plVar10);
              func_0x0412c2d0(plVar10);
              bVar9 = *(byte *)(puVar21 + 1);
            }
            if ((bVar9 & 1) != 0) {
              thunk_FUN_0ee326a0(puVar21[3],puVar21[1] & 0xfffffffffffffffe);
            }
            puVar21 = puVar21 + 7;
          } while (puVar21 != puVar22);
          puVar21 = *(undefined8 **)pbStack_200;
        }
        pbVar28 = pbStack_1e8;
        *(byte **)(pbVar30 + 0x88) = pbVar5;
        *(byte **)(pbVar30 + 0x90) = pbStack_1e8;
        lVar25 = *(long *)(pbVar30 + 0x98);
        *(undefined8 **)(pbVar30 + 0x98) = puStack_1e0;
        if (puVar21 != (undefined8 *)0x0) {
          thunk_FUN_0ee326a0(puVar21,lVar25 - (long)puVar21);
        }
        goto LAB_070250ab;
      }
      goto LAB_07025e4b;
    }
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
    if (pbVar28 != pbVar5) {
      if ((*puStack_d8 & 1) == 0) {
        *(long *)(pbVar28 + 0x18) = *(long *)(puStack_d8 + 4);
        lVar25 = *(long *)(puStack_d8 + 2);
        *(long *)(pbVar28 + 8) = *(long *)puStack_d8;
        *(long *)(pbVar28 + 0x10) = lVar25;
      }
      else {
        func_0x04885070(pbVar28 + 8,*(long *)(pbStack_210 + 0xa0),*(long *)(pbStack_210 + 0x98));
      }
    }
    *(long *)pbVar28 = *(long *)pbVar5;
    *(byte **)(pbVar28 + 0x28) = pbVar31;
    *(byte **)(pbVar28 + 0x30) = pbStack_208;
    LOCK();
    *(long *)(pbStack_208 + 8) = *(long *)(pbStack_208 + 8) + 1;
    UNLOCK();
    pbVar28 = pbVar28 + 0x38;
    *(byte **)(pbVar30 + 0x90) = pbVar28;
LAB_070250ab:
    pbVar5 = pbStack_d0;
    *(byte **)(pbVar30 + 0x90) = pbVar28;
    uVar12 = *(undefined4 *)pbVar30;
    uVar13 = *(undefined4 *)(pbVar30 + 4);
    uVar14 = *(undefined4 *)(pbVar30 + 8);
    uVar18 = *(undefined4 *)(pbVar30 + 0xc);
    if (*(long *)(pbVar30 + 8) != 0) {
      LOCK();
      plVar10 = (long *)(*(long *)(pbVar30 + 8) + 8);
      *plVar10 = *plVar10 + 1;
      UNLOCK();
    }
    plVar10 = *(long **)(pbStack_210 + 0x78);
    *(undefined4 *)(pbStack_210 + 0x70) = uVar12;
    *(undefined4 *)(pbStack_210 + 0x74) = uVar13;
    *(undefined4 *)(pbStack_210 + 0x78) = uVar14;
    *(undefined4 *)(pbStack_210 + 0x7c) = uVar18;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        func_0x0412c2d0(plVar10);
      }
    }
    pbStack_210[0x80] = pbVar30[0xa1];
    LOCK();
    lVar25 = *(long *)pbStack_1b0;
    *(long *)pbStack_1b0 = *(long *)pbStack_1b0 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*(long *)pbStack_208 + 0x10))(pbStack_208);
      func_0x0412c2d0(pbStack_208);
      LOCK();
      lVar25 = *(long *)pbVar5;
      *(long *)pbVar5 = *(long *)pbVar5 + -1;
      UNLOCK();
      if (lVar25 != 0) goto LAB_07025140;
LAB_07025375:
      (**(code **)(*(long *)pbStack_210 + 0x10))(pbStack_210);
      func_0x0412c2d0(pbStack_210);
      LOCK();
      lVar25 = *(long *)pbVar5;
      *(long *)pbVar5 = *(long *)pbVar5 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar25 = *(long *)pbVar5;
      *(long *)pbVar5 = *(long *)pbVar5 + -1;
      UNLOCK();
      if (lVar25 == 0) goto LAB_07025375;
LAB_07025140:
      LOCK();
      lVar25 = *(long *)pbVar5;
      *(long *)pbVar5 = *(long *)pbVar5 + -1;
      UNLOCK();
    }
    if (lVar25 == 0) {
      (**(code **)(*(long *)pbStack_210 + 0x10))(pbStack_210);
      func_0x0412c2d0(pbStack_210);
    }
    if (puStack_b8 != (undefined8 *)0x0) {
      (*(code *)puStack_b8[1])(&puStack_b8);
    }
    if ((uStack_190 & 1) != 0) {
      thunk_FUN_0ee326a0(pbStack_180,CONCAT44(uStack_18c,uStack_190) & 0xfffffffffffffffe);
    }
    uStack_70 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    lStack_78 = 0;
    puStack_198 = (undefined8 *)&UNK_0f0b5ed0;
    pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
    if (pbVar30 == (byte *)0x0) {
      func_0x0eec74c0(0x1c0,0);
    }
    puStack_1f8 = puStack_198;
    pbVar30[8] = 0;
    pbVar30[9] = 0;
    pbVar30[10] = 0;
    pbVar30[0xb] = 0;
    pbVar30[0xc] = 0;
    pbVar30[0xd] = 0;
    pbVar30[0xe] = 0;
    pbVar30[0xf] = 0;
    pbVar30[0x10] = 0;
    pbVar30[0x11] = 0;
    pbVar30[0x12] = 0;
    pbVar30[0x13] = 0;
    pbVar30[0x14] = 0;
    pbVar30[0x15] = 0;
    pbVar30[0x16] = 0;
    pbVar30[0x17] = 0;
    *(undefined **)pbVar30 = &UNK_0f0b3dc8;
    pbStack_1f0 = (byte *)0x0;
    puStack_198 = (undefined8 *)0x0;
    *(undefined **)(pbVar30 + 0x20) = &UNK_0f2ccd78;
    pbVar30[0x28] = 0;
    pbVar30[0x29] = 0;
    pbVar30[0x2a] = 0;
    pbVar30[0x2b] = 0;
    pbVar30[0x2c] = 0;
    pbVar30[0x2d] = 0;
    pbVar30[0x2e] = 0;
    pbVar30[0x2f] = 0;
    pbVar30[0x30] = 0;
    pbVar30[0x31] = 0;
    pbVar30[0x32] = 0;
    pbVar30[0x33] = 0;
    pbVar30[0x34] = 0;
    pbVar30[0x35] = 0;
    pbVar30[0x36] = 0;
    pbVar30[0x37] = 0;
    pbVar30[0x38] = 0;
    pbVar30[0x39] = 0;
    pbVar30[0x3a] = 0;
    pbVar30[0x3b] = 0;
    pbVar30[0x3c] = 0;
    pbVar30[0x3d] = 0;
    pbVar30[0x3e] = 0;
    pbVar30[0x3f] = 0;
    pbVar30[0x40] = 0;
    pbVar30[0x41] = 0;
    pbVar30[0x42] = 0;
    pbVar30[0x43] = 0;
    pbVar30[0x44] = 0;
    pbVar30[0x45] = 0;
    pbVar30[0x46] = 0;
    pbVar30[0x47] = 0;
    pbVar30[0x48] = 0;
    pbVar30[0x49] = 0;
    pbVar30[0x4a] = 0;
    pbVar30[0x4b] = 0;
    pbVar30[0x4c] = 0;
    pbVar30[0x4d] = 0;
    pbVar30[0x4e] = 0;
    pbVar30[0x4f] = 0;
    pbVar30[0x50] = 0;
    pbVar30[0x51] = 0;
    pbVar30[0x52] = 0;
    pbVar30[0x53] = 0;
    pbVar30[0x54] = 0;
    pbVar30[0x55] = 0;
    pbVar30[0x56] = 0;
    pbVar30[0x57] = 0;
    pbVar30[0x58] = 0;
    pbVar30[0x59] = 0;
    pbVar30[0x5a] = 0;
    pbVar30[0x5b] = 0;
    pbVar30[0x5c] = 0;
    pbVar30[0x5d] = 0;
    pbVar30[0x5e] = 0;
    pbVar30[0x5f] = 0;
    pbVar30[0x60] = 0;
    pbVar30[0x61] = 0;
    pbVar30[0x62] = 0;
    pbVar30[99] = 0;
    pbVar30[100] = 0;
    pbVar30[0x65] = 0;
    pbVar30[0x66] = 0;
    pbVar30[0x67] = 0;
    pbVar30[0x68] = 0;
    FUN_04aa75f0(pbVar30 + 0x70,&uStack_e8,&UNK_01254d89);
    pbVar30[0x80] = 0;
    pbVar30[0x88] = 0;
    pbVar30[0x89] = 0;
    pbVar30[0x8a] = 0;
    pbVar30[0x8b] = 0;
    pbVar30[0x8c] = 0;
    pbVar30[0x8d] = 0;
    pbVar30[0x8e] = 0;
    pbVar30[0x8f] = 0;
    pbVar30[0x90] = 0;
    pbVar30[0x91] = 0;
    pbVar30[0x92] = 0;
    pbVar30[0x93] = 0;
    pbVar30[0x94] = 0;
    pbVar30[0x95] = 0;
    pbVar30[0x96] = 0;
    pbVar30[0x97] = 0;
    pbVar30[0x98] = 0;
    pbVar30[0x99] = 0;
    pbVar30[0x9a] = 0;
    pbVar30[0x9b] = 0;
    pbVar30[0x9c] = 0;
    pbVar30[0x9d] = 0;
    pbVar30[0x9e] = 0;
    pbVar30[0x9f] = 0;
    pbVar30[0xa0] = 0;
    pbVar30[0xa1] = 0;
    pbVar30[0xa2] = 0;
    pbVar30[0xa3] = 0;
    pbVar30[0xa4] = 0;
    pbVar30[0xa5] = 0;
    pbVar30[0xa6] = 0;
    pbVar30[0xa7] = 0;
    pbVar30[0xa8] = 0;
    pbVar30[0xa9] = 0;
    pbVar30[0xaa] = 0;
    pbVar30[0xab] = 0;
    pbVar30[0xac] = 0;
    pbVar30[0xad] = 0;
    pbVar30[0xae] = 0;
    pbVar30[0xaf] = 0;
    pbVar30[0xb0] = 0;
    pbVar30[0xb1] = 0;
    pbVar30[0xb2] = 0;
    pbVar30[0xb3] = 0;
    pbVar30[0xb4] = 0;
    pbVar30[0xb5] = 0;
    pbVar30[0xb6] = 0;
    pbVar30[0xb7] = 0;
    pbVar30[0xb8] = 0xff;
    pbVar30[0xb9] = 0xff;
    pbVar30[0xba] = 0xff;
    pbVar30[0xbb] = 0xff;
    pbVar30[0xbc] = 0;
    pbVar30[0xbd] = 0;
    pbVar30[0xbe] = 0;
    pbVar30[0xbf] = 0;
    pbVar30[0x130] = 0;
    pbVar30[0x131] = 0;
    pbVar30[0x132] = 0;
    pbVar30[0x133] = 0;
    pbVar30[0x134] = 0;
    pbVar30[0x135] = 0;
    pbVar30[0x136] = 0;
    pbVar30[0x137] = 0;
    pbVar30[0x138] = 0;
    pbVar30[0x139] = 0;
    pbVar30[0x13a] = 0;
    pbVar30[0x13b] = 0;
    pbVar30[0x13c] = 0;
    pbVar30[0x13d] = 0;
    pbVar30[0x13e] = 0;
    pbVar30[0x13f] = 0;
    pbVar30[0xc0] = 0;
    pbVar30[0xc1] = 0;
    pbVar30[0xc2] = 0;
    pbVar30[0xc3] = 0;
    pbVar30[0xc4] = 0;
    pbVar30[0xc5] = 0;
    pbVar30[0xc6] = 0;
    pbVar30[199] = 0;
    pbVar30[200] = 0;
    pbVar30[0xc9] = 0;
    pbVar30[0xca] = 0;
    pbVar30[0xcb] = 0;
    pbVar30[0xcc] = 0;
    pbVar30[0xcd] = 0;
    pbVar30[0xce] = 0;
    pbVar30[0xcf] = 0;
    pbVar30[0xd0] = 0;
    pbVar30[0xd1] = 0;
    pbVar30[0xd2] = 0;
    pbVar30[0xd3] = 0;
    pbVar30[0xd4] = 0;
    pbVar30[0xd5] = 0;
    pbVar30[0xd6] = 0;
    pbVar30[0xd7] = 0;
    pbVar30[0xd8] = 0;
    pbVar30[0xd9] = 0;
    pbVar30[0xda] = 0;
    pbVar30[0xdb] = 0;
    pbVar30[0xdc] = 0;
    pbVar30[0xdd] = 0;
    pbVar30[0xde] = 0;
    pbVar30[0xdf] = 0;
    pbVar30[0xe0] = 0;
    pbVar30[0xe1] = 0;
    pbVar30[0xe2] = 0;
    pbVar30[0xe3] = 0;
    pbVar30[0xe4] = 0;
    pbVar30[0xe5] = 0;
    pbVar30[0xe6] = 0;
    pbVar30[0xe7] = 0;
    pbVar30[0xe8] = 0;
    pbVar30[0xe9] = 0;
    pbVar30[0xea] = 0;
    pbVar30[0xeb] = 0;
    pbVar30[0xec] = 0;
    pbVar30[0xed] = 0;
    pbVar30[0xee] = 0;
    pbVar30[0xef] = 0;
    pbVar30[0xf0] = 0;
    pbVar30[0xf1] = 0;
    pbVar30[0xf2] = 0;
    pbVar30[0xf3] = 0;
    pbVar30[0xf4] = 0;
    pbVar30[0xf5] = 0;
    pbVar30[0xf6] = 0;
    pbVar30[0xf7] = 0;
    pbVar30[0xf8] = 0;
    pbVar30[0xf9] = 0;
    pbVar30[0xfa] = 0;
    pbVar30[0xfb] = 0;
    pbVar30[0xfc] = 0;
    pbVar30[0xfd] = 0;
    pbVar30[0xfe] = 0;
    pbVar30[0xff] = 0;
    *(undefined **)(pbVar30 + 0x20) = &UNK_0f0b3e18;
    pbVar30[0x170] = 0;
    pbVar30[0x171] = 0;
    pbVar30[0x172] = 0;
    pbVar30[0x173] = 0;
    pbVar30[0x174] = 0;
    pbVar30[0x175] = 0;
    pbVar30[0x176] = 0;
    pbVar30[0x177] = 0;
    pbVar30[0x178] = 0;
    pbVar30[0x179] = 0;
    pbVar30[0x17a] = 0;
    pbVar30[0x17b] = 0;
    pbVar30[0x17c] = 0;
    pbVar30[0x17d] = 0;
    pbVar30[0x17e] = 0;
    pbVar30[0x17f] = 0;
    if (puStack_1f8 == (undefined8 *)0x0) {
      pbVar30[0x1b0] = 0;
      pbVar30[0x1b1] = 0;
      pbVar30[0x1b2] = 0;
      pbVar30[0x1b3] = 0;
      pbVar30[0x1b4] = 0;
      pbVar30[0x1b5] = 0;
      pbVar30[0x1b6] = 0;
      pbVar30[0x1b7] = 0;
      pbVar30[0x1b8] = 0;
      pbVar30[0x1b9] = 0;
      pbVar30[0x1ba] = 0;
      pbVar30[0x1bb] = 0;
      pbVar30[0x1bc] = 0;
      pbVar30[0x1bd] = 0;
      pbVar30[0x1be] = 0;
      pbVar30[0x1bf] = 0;
    }
    else {
      (*(code *)*puStack_1f8)(&puStack_1f8,pbVar30 + 0x170);
      puVar21 = puStack_1f8;
      puStack_1f8 = (undefined8 *)0x0;
      *(undefined8 **)(pbVar30 + 0x170) = puVar21;
      pbVar30[0x1b0] = 0;
      pbVar30[0x1b1] = 0;
      pbVar30[0x1b2] = 0;
      pbVar30[0x1b3] = 0;
      pbVar30[0x1b4] = 0;
      pbVar30[0x1b5] = 0;
      pbVar30[0x1b6] = 0;
      pbVar30[0x1b7] = 0;
      pbVar30[0x1b8] = 0;
      pbVar30[0x1b9] = 0;
      pbVar30[0x1ba] = 0;
      pbVar30[0x1bb] = 0;
      pbVar30[0x1bc] = 0;
      pbVar30[0x1bd] = 0;
      pbVar30[0x1be] = 0;
      pbVar30[0x1bf] = 0;
      if ((pbVar30[0x90] & 1) != 0) {
        thunk_FUN_0ee326a0(*(long *)(pbVar30 + 0xa0),*(ulong *)(pbVar30 + 0x90) & 0xfffffffffffffffe
                          );
      }
    }
    pbVar5 = pbVar30 + 0x20;
    pbStack_208 = pbVar30 + 0x90;
    pbStack_208[0] = 0x2c;
    uVar14 = _UNK_012db4fd;
    uVar13 = _UNK_012db4f9;
    uVar12 = _UNK_012db4f5;
    pbStack_208[1] = 0x69;
    *(undefined4 *)(pbVar30 + 0x92) = _DAT_012db4f1;
    *(undefined4 *)(pbVar30 + 0x96) = uVar12;
    *(undefined4 *)(pbVar30 + 0x9a) = uVar13;
    *(undefined4 *)(pbVar30 + 0x9e) = uVar14;
    pbVar30[0x9f] = 0x76;
    pbVar30[0xa0] = 0x65;
    pbVar30[0xa1] = 0x6e;
    pbVar30[0xa2] = 0x74;
    pbVar30[0xa3] = 0x5f;
    pbVar30[0xa4] = 0x6d;
    pbVar30[0xa5] = 0x61;
    pbVar30[0xa6] = 0x70;
    pbVar30[0xa7] = 0;
    pbVar30[0x88] = 0x79;
    pbVar30[0x89] = 0x76;
    pbVar30[0x8a] = 10;
    pbVar30[0x8b] = 10;
    pbVar30[0x8c] = 0x18;
    pbVar30[0x8d] = 0x88;
    pbVar30[0x8e] = 0x5f;
    pbVar30[0x8f] = 0x4b;
    pbVar30[0xa8] = 0;
    pbVar30[0xa9] = 0;
    pbVar30[0xaa] = 0;
    pbVar30[0xab] = 0;
    pbVar30[0xac] = 0;
    pbVar30[0xad] = 0;
    pbVar30[0xae] = 0;
    pbVar30[0xaf] = 0;
    func_0x0c6ee530(&uStack_e8);
    uVar12 = (undefined4)uStack_e8;
    uVar13 = uStack_e8._4_4_;
    uVar14 = (undefined4)uStack_e0;
    uVar18 = uStack_e0._4_4_;
    uStack_e8 = 0;
    uStack_e0 = (long *)0x0;
    plVar10 = *(long **)(pbVar30 + 0x1b8);
    *(undefined4 *)(pbVar30 + 0x1b0) = uVar12;
    *(undefined4 *)(pbVar30 + 0x1b4) = uVar13;
    *(undefined4 *)(pbVar30 + 0x1b8) = uVar14;
    *(undefined4 *)(pbVar30 + 0x1bc) = uVar18;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = uStack_e0;
    if (uStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_e0 + 1;
      lVar25 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
        func_0x0412c2d0(plVar10);
      }
    }
    if (puStack_1f8 != (undefined8 *)0x0) {
      (*(code *)puStack_1f8[1])(&puStack_1f8);
    }
    pbVar28 = pbVar30 + 8;
    if (puStack_198 != (undefined8 *)0x0) {
      (*(code *)puStack_198[1])(&puStack_198);
    }
    LOCK();
    *(long *)pbVar28 = *(long *)pbVar28 + 1;
    UNLOCK();
    pbStack_1a8 = pbVar28;
    pbStack_200 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (pbStack_200 == (byte *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
    pbStack_200[8] = 0;
    pbStack_200[9] = 0;
    pbStack_200[10] = 0;
    pbStack_200[0xb] = 0;
    pbStack_200[0xc] = 0;
    pbStack_200[0xd] = 0;
    pbStack_200[0xe] = 0;
    pbStack_200[0xf] = 0;
    pbStack_200[0x10] = 0;
    pbStack_200[0x11] = 0;
    pbStack_200[0x12] = 0;
    pbStack_200[0x13] = 0;
    pbStack_200[0x14] = 0;
    pbStack_200[0x15] = 0;
    pbStack_200[0x16] = 0;
    pbStack_200[0x17] = 0;
    *(undefined **)pbStack_200 = &UNK_0f0b3ef8;
    pbStack_200[0x30] = 0;
    pbStack_200[0x31] = 0;
    pbStack_200[0x32] = 0;
    pbStack_200[0x33] = 0;
    pbStack_200[0x34] = 0;
    pbStack_200[0x35] = 0;
    pbStack_200[0x36] = 0;
    pbStack_200[0x37] = 0;
    pbStack_200[0x38] = 0;
    pbStack_200[0x39] = 0;
    pbStack_200[0x3a] = 0;
    pbStack_200[0x3b] = 0;
    pbStack_200[0x3c] = 0;
    pbStack_200[0x3d] = 0;
    pbStack_200[0x3e] = 0;
    pbStack_200[0x3f] = 0;
    *(undefined **)(pbStack_200 + 0x20) = &UNK_0f0b3f48;
    *(byte **)(pbStack_200 + 0x70) = pbVar5;
    *(byte **)(pbStack_200 + 0x78) = pbVar30;
    LOCK();
    *(long *)(pbVar30 + 8) = *(long *)(pbVar30 + 8) + 1;
    UNLOCK();
    pbStack_1a0 = pbStack_200 + 8;
    puVar24 = *(undefined8 **)(pbStack_210 + 0xe0);
    puVar22 = *(undefined8 **)(pbStack_210 + 0xd8);
    for (puVar21 = puVar22; puVar21 != puVar24; puVar21 = puVar21 + 0x15) {
      if ((puVar21[0xf] == 0) && (puVar21[0x10] == -1)) goto LAB_070258cc;
    }
    if (puVar24 < *(undefined8 **)(pbStack_210 + 0xe8)) {
      func_0x07124c30(puVar24);
      *(undefined8 **)(pbStack_210 + 0xe0) = puVar24 + 0x15;
      *(undefined8 **)(pbStack_210 + 0xe0) = puVar24 + 0x15;
      pbVar28 = (byte *)*puVar24;
      bVar9 = *pbVar28;
joined_r0x07025878:
      if ((bVar9 & 1) == 0) {
        *pbVar28 = 0x26;
        pbVar28 = pbVar28 + 1;
      }
      else {
        pbVar28[8] = 0x13;
        pbVar28[9] = 0;
        pbVar28[10] = 0;
        pbVar28[0xb] = 0;
        pbVar28[0xc] = 0;
        pbVar28[0xd] = 0;
        pbVar28[0xe] = 0;
        pbVar28[0xf] = 0;
        pbVar28 = *(byte **)(pbVar28 + 0x10);
      }
      uVar14 = _UNK_01494d69;
      uVar13 = _UNK_01494d65;
      uVar12 = _UNK_01494d61;
      *(undefined4 *)pbVar28 = _DAT_01494d5d;
      *(undefined4 *)(pbVar28 + 4) = uVar12;
      *(undefined4 *)(pbVar28 + 8) = uVar13;
      *(undefined4 *)(pbVar28 + 0xc) = uVar14;
      pbVar28[0xf] = 0x65;
      pbVar28[0x10] = 0x6e;
      pbVar28[0x11] = 0x74;
      pbVar28[0x12] = 0x3e;
      pbVar28[0x13] = 0;
      lVar25 = *(long *)(pbStack_210 + 0xe0);
      puVar21 = (undefined8 *)(lVar25 + -0xa8);
      *(byte *)(lVar25 + -7) = pbStack_210[0x80];
      *(undefined8 *)(lVar25 + -0x30) = 0;
      *(undefined8 *)(lVar25 + -0x28) = 0xffffffffffffffff;
      *(undefined1 *)(lVar25 + -8) = 0;
LAB_070258cc:
      pbVar31 = pbVar30 + 0x88;
      pbVar29 = pbStack_200 + 0x20;
      pbVar32 = (byte *)puVar21[0x12];
      if (pbVar32 < (byte *)puVar21[0x13]) {
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
        if (pbVar32 != pbVar31) {
          if ((*pbStack_208 & 1) == 0) {
            *(long *)(pbVar32 + 0x18) = *(long *)(pbVar30 + 0xa0);
            lVar25 = *(long *)(pbVar30 + 0x98);
            *(long *)(pbVar32 + 8) = *(long *)pbStack_208;
            *(long *)(pbVar32 + 0x10) = lVar25;
          }
          else {
            func_0x04885070(pbVar32 + 8,*(long *)(pbVar30 + 0xa0),*(long *)(pbVar30 + 0x98));
          }
        }
        *(long *)pbVar32 = *(long *)pbVar31;
        *(byte **)(pbVar32 + 0x28) = pbVar29;
        *(byte **)(pbVar32 + 0x30) = pbStack_200;
        LOCK();
        *(long *)(pbStack_200 + 8) = *(long *)(pbStack_200 + 8) + 1;
        UNLOCK();
        pbVar32 = pbVar32 + 0x38;
        puVar21[0x12] = pbVar32;
        goto LAB_07025c0c;
      }
      pbVar32 = pbVar32 + -puVar21[0x11];
      uVar27 = ((long)pbVar32 >> 3) * 0x6db6db6db6db6db7 + 1;
      pbVar28 = pbStack_200;
      if (uVar27 < 0x492492492492493) {
        lVar25 = (long)puVar21[0x13] - puVar21[0x11] >> 3;
        uVar23 = lVar25 * -0x2492492492492492;
        if (uVar27 < uVar23) {
          uVar27 = uVar23;
        }
        pbStack_1d8 = (byte *)(puVar21 + 0x11);
        if (0x249249249249248 < (ulong)(lVar25 * 0x6db6db6db6db6db7)) {
          uVar27 = 0x492492492492492;
        }
        pbStack_1b0 = pbStack_1d8;
        if (uVar27 == 0) {
          puVar22 = (undefined8 *)0x0;
        }
        else {
          pbStack_210 = pbVar29;
          if (0x492492492492492 < uVar27) goto LAB_07025e41;
          puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 * 0x38);
          if (puVar22 == (undefined8 *)0x0) {
            func_0x0eec74c0(uVar27 * 0x38,0);
            puVar22 = (undefined8 *)0x0;
          }
        }
        pbVar28 = (byte *)((long)puVar22 + (long)pbVar32);
        puStack_1e0 = puVar22 + uVar27 * 7;
        pbVar4 = (byte *)((long)(puVar22 + 2) + (long)pbVar32);
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
        pbVar4 = (byte *)((long)puVar22 + (long)pbVar32);
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
        pbVar4 = (byte *)((long)(puVar22 + 4) + (long)pbVar32);
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbStack_1e8 = pbVar28;
        puStack_1f8 = puVar22;
        pbStack_1f0 = pbVar28;
        if (pbVar28 != pbVar31) {
          pbVar32 = pbVar32 + (long)puVar22;
          if ((*pbStack_208 & 1) == 0) {
            *(long *)(pbVar32 + 0x18) = *(long *)(pbVar30 + 0xa0);
            uVar12 = *(undefined4 *)(pbVar30 + 0x94);
            uVar13 = *(undefined4 *)(pbVar30 + 0x98);
            uVar14 = *(undefined4 *)(pbVar30 + 0x9c);
            *(undefined4 *)(pbVar32 + 8) = *(undefined4 *)pbStack_208;
            *(undefined4 *)(pbVar32 + 0xc) = uVar12;
            *(undefined4 *)(pbVar32 + 0x10) = uVar13;
            *(undefined4 *)(pbVar32 + 0x14) = uVar14;
          }
          else {
            func_0x04885070(pbVar32 + 8,*(long *)(pbVar30 + 0xa0),*(long *)(pbVar30 + 0x98));
          }
        }
        pbVar32 = pbStack_1b0;
        *(long *)pbVar28 = *(long *)pbVar31;
        *(byte **)(pbVar28 + 0x28) = pbVar29;
        *(byte **)(pbVar28 + 0x30) = pbStack_200;
        LOCK();
        *(long *)(pbStack_200 + 8) = *(long *)(pbStack_200 + 8) + 1;
        UNLOCK();
        pbStack_1e8 = pbStack_1e8 + 0x38;
        puVar22 = (undefined8 *)puVar21[0x11];
        puVar24 = (undefined8 *)puVar21[0x12];
        pbVar28 = pbStack_1f0 + ((long)puVar22 - (long)puVar24);
        pbVar31 = pbVar28;
        puVar26 = puVar22;
        if ((long)puVar22 - (long)puVar24 != 0) {
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
            *(undefined8 *)(pbVar31 + 0x18) = puVar26[3];
            uVar19 = puVar26[2];
            *(undefined8 *)(pbVar31 + 8) = puVar26[1];
            *(undefined8 *)(pbVar31 + 0x10) = uVar19;
            *(undefined2 *)(puVar26 + 1) = 0;
            *(undefined8 *)pbVar31 = *puVar26;
            uVar19 = puVar26[6];
            *(undefined8 *)(pbVar31 + 0x28) = puVar26[5];
            *(undefined8 *)(pbVar31 + 0x30) = uVar19;
            puVar26[5] = 0;
            puVar26[6] = 0;
            puVar26 = puVar26 + 7;
            pbVar31 = pbVar31 + 0x38;
          } while (puVar26 != puVar24);
          do {
            plVar10 = (long *)puVar22[6];
            if (plVar10 == (long *)0x0) {
LAB_07025b94:
              bVar9 = *(byte *)(puVar22 + 1);
            }
            else {
              LOCK();
              plVar1 = plVar10 + 1;
              lVar25 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar25 != 0) goto LAB_07025b94;
              (**(code **)(*plVar10 + 0x10))(plVar10);
              func_0x0412c2d0(plVar10);
              bVar9 = *(byte *)(puVar22 + 1);
            }
            if ((bVar9 & 1) != 0) {
              thunk_FUN_0ee326a0(puVar22[3],puVar22[1] & 0xfffffffffffffffe);
            }
            puVar22 = puVar22 + 7;
          } while (puVar22 != puVar24);
          puVar22 = *(undefined8 **)pbVar32;
        }
        pbVar32 = pbStack_1e8;
        puVar21[0x11] = pbVar28;
        puVar21[0x12] = pbStack_1e8;
        lVar25 = puVar21[0x13];
        puVar21[0x13] = puStack_1e0;
        if (puVar22 != (undefined8 *)0x0) {
          thunk_FUN_0ee326a0(puVar22,lVar25 - (long)puVar22);
        }
LAB_07025c0c:
        pbVar28 = pbStack_c8;
        puVar21[0x12] = pbVar32;
        uVar12 = *(undefined4 *)puVar21;
        uVar13 = *(undefined4 *)((long)puVar21 + 4);
        uVar14 = *(undefined4 *)(puVar21 + 1);
        uVar18 = *(undefined4 *)((long)puVar21 + 0xc);
        if (puVar21[1] != 0) {
          LOCK();
          plVar10 = (long *)(puVar21[1] + 8);
          *plVar10 = *plVar10 + 1;
          UNLOCK();
        }
        plVar10 = *(long **)(pbVar30 + 0x78);
        *(undefined4 *)(pbVar30 + 0x70) = uVar12;
        *(undefined4 *)(pbVar30 + 0x74) = uVar13;
        *(undefined4 *)(pbVar30 + 0x78) = uVar14;
        *(undefined4 *)(pbVar30 + 0x7c) = uVar18;
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar25 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar25 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            func_0x0412c2d0(plVar10);
          }
        }
        pbVar30[0x80] = *(byte *)((long)puVar21 + 0xa1);
        LOCK();
        lVar25 = *(long *)pbStack_1a0;
        *(long *)pbStack_1a0 = *(long *)pbStack_1a0 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*(long *)pbStack_200 + 0x10))(pbStack_200);
          func_0x0412c2d0(pbStack_200);
        }
        pbVar32 = pbStack_1a8;
        LOCK();
        lVar25 = *(long *)pbStack_1a8;
        *(long *)pbStack_1a8 = *(long *)pbStack_1a8 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*(long *)pbVar30 + 0x10))(pbVar30);
          func_0x0412c2d0(pbVar30);
        }
        puVar21 = puStack_c0;
        LOCK();
        lVar25 = *(long *)pbVar32;
        *(long *)pbVar32 = *(long *)pbVar32 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*(long *)pbVar30 + 0x10))(pbVar30);
          func_0x0412c2d0(pbVar30);
        }
        if (lStack_78 != 0) {
          (**(code **)(lStack_78 + 8))(&lStack_78);
        }
        auStack_108[0] = 0;
        auStack_108[1] = 0;
        auStack_108[2] = 0;
        (**(code **)(*(long *)*puVar21 + 0x10))((long *)*puVar21,auStack_108);
        if ((auStack_108[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_108[2],auStack_108[0] & 0xfffffffffffffffe);
        }
        auStack_128[0] = 0;
        auStack_128[1] = 0;
        auStack_128[2] = 0;
        (**(code **)(*(long *)pbVar28 + 0x10))(pbVar28,auStack_128);
        if ((auStack_128[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_128[2],auStack_128[0] & 0xfffffffffffffffe);
        }
        auStack_148[0] = 0;
        auStack_148[1] = 0;
        auStack_148[2] = 0;
        (**(code **)(*(long *)pbVar5 + 0x10))(pbVar5,auStack_148);
        if ((auStack_148[0] & 1) != 0) {
          thunk_FUN_0ee326a0(auStack_148[2],auStack_148[0] & 0xfffffffffffffffe);
        }
        return;
      }
      goto LAB_07025e50;
    }
    pbVar32 = (byte *)((long)puVar24 - (long)puVar22);
    pbVar28 = (byte *)(((long)pbVar32 >> 3) * -0x30c30c30c30c30c3 + 1);
    if (pbVar28 < (byte *)0x186186186186187) {
      pbVar29 = pbStack_210 + 0xd8;
      lVar25 = (long)*(undefined8 **)(pbStack_210 + 0xe8) - (long)puVar22 >> 3;
      pbVar31 = (byte *)(lVar25 * -0x6186186186186186);
      if (pbVar28 < pbVar31) {
        pbVar28 = pbVar31;
      }
      if (0xc30c30c30c30c2 < (ulong)(lVar25 * -0x30c30c30c30c30c3)) {
        pbVar28 = (byte *)0x186186186186186;
      }
      pbStack_1d8 = pbVar29;
      if (pbVar28 == (byte *)0x0) {
        puVar21 = (undefined8 *)0x0;
LAB_0702568d:
        pbStack_1f0 = pbVar32 + (long)puVar21;
        puStack_1e0 = puVar21 + (long)pbVar28 * 0x15;
        puStack_1f8 = puVar21;
        pbStack_1e8 = pbStack_1f0;
        pbStack_1b0 = pbVar29;
        func_0x07124c30(pbStack_1f0);
        pbVar28 = pbStack_1e8;
        pbVar31 = pbStack_1e8 + 0xa8;
        lVar25 = *(long *)(pbStack_210 + 0xd8);
        lVar8 = *(long *)(pbStack_210 + 0xe0);
        pbVar32 = pbStack_1f0 + (lVar25 - lVar8);
        if (lVar25 != lVar8) {
          lVar33 = 0;
          do {
            uVar19 = ((undefined8 *)(lVar25 + lVar33))[1];
            *(undefined8 *)(pbVar32 + lVar33) = *(undefined8 *)(lVar25 + lVar33);
            *(undefined8 *)(pbVar32 + lVar33 + 8) = uVar19;
            *(undefined8 *)(lVar25 + lVar33) = 0;
            ((undefined8 *)(lVar25 + lVar33))[1] = 0;
            pbVar29 = pbVar32 + lVar33 + 0x20;
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
            pbVar29 = pbVar32 + lVar33 + 0x10;
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
            pbVar29 = pbVar32 + lVar33 + 0x30;
            pbVar29[0] = 0;
            pbVar29[1] = 0;
            pbVar29[2] = 0;
            pbVar29[3] = 0;
            pbVar29[4] = 0;
            pbVar29[5] = 0;
            pbVar29[6] = 0;
            pbVar29[7] = 0;
            *(undefined8 *)(pbVar32 + lVar33 + 0x28) = *(undefined8 *)(lVar25 + 0x28 + lVar33);
            puVar3 = (undefined4 *)(lVar25 + 0x18 + lVar33);
            uVar12 = puVar3[1];
            uVar13 = puVar3[2];
            uVar14 = puVar3[3];
            pbVar29 = pbVar32 + lVar33 + 0x18;
            *(undefined4 *)pbVar29 = *puVar3;
            *(undefined4 *)(pbVar29 + 4) = uVar12;
            *(undefined4 *)(pbVar29 + 8) = uVar13;
            *(undefined4 *)(pbVar29 + 0xc) = uVar14;
            *(undefined2 *)(lVar25 + 0x18 + lVar33) = 0;
            *(undefined8 *)(pbVar32 + lVar33 + 0x10) = *(undefined8 *)(lVar25 + 0x10 + lVar33);
            func_0x04167a20(pbVar32 + lVar33 + 0x38,lVar25 + lVar33 + 0x38);
            puVar21 = (undefined8 *)(lVar25 + 0x40 + lVar33);
            uVar19 = puVar21[1];
            *(undefined8 *)(pbVar32 + lVar33 + 0x40) = *puVar21;
            *(undefined8 *)(pbVar32 + lVar33 + 0x40 + 8) = uVar19;
            puVar21 = (undefined8 *)(lVar25 + 0x50 + lVar33);
            uVar19 = puVar21[1];
            *(undefined8 *)(pbVar32 + lVar33 + 0x50) = *puVar21;
            *(undefined8 *)(pbVar32 + lVar33 + 0x50 + 8) = uVar19;
            puVar21 = (undefined8 *)(lVar25 + 0x60 + lVar33);
            uVar19 = puVar21[1];
            *(undefined8 *)(pbVar32 + lVar33 + 0x60) = *puVar21;
            *(undefined8 *)(pbVar32 + lVar33 + 0x60 + 8) = uVar19;
            puVar21 = (undefined8 *)(lVar25 + 0x60 + lVar33);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)(pbVar32 + lVar33 + 0x70) = *(undefined8 *)(lVar25 + 0x70 + lVar33);
            puVar21 = (undefined8 *)(lVar25 + 0x78 + lVar33);
            uVar19 = puVar21[1];
            *(undefined8 *)(pbVar32 + lVar33 + 0x78) = *puVar21;
            *(undefined8 *)(pbVar32 + lVar33 + 0x78 + 8) = uVar19;
            pbVar29 = pbVar32 + lVar33 + 0x88;
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
            pbVar29 = pbVar32 + lVar33 + 0x98;
            pbVar29[0] = 0;
            pbVar29[1] = 0;
            pbVar29[2] = 0;
            pbVar29[3] = 0;
            pbVar29[4] = 0;
            pbVar29[5] = 0;
            pbVar29[6] = 0;
            pbVar29[7] = 0;
            puVar3 = (undefined4 *)(lVar25 + 0x88 + lVar33);
            uVar12 = puVar3[1];
            uVar13 = puVar3[2];
            uVar14 = puVar3[3];
            pbVar29 = pbVar32 + lVar33 + 0x88;
            *(undefined4 *)pbVar29 = *puVar3;
            *(undefined4 *)(pbVar29 + 4) = uVar12;
            *(undefined4 *)(pbVar29 + 8) = uVar13;
            *(undefined4 *)(pbVar29 + 0xc) = uVar14;
            *(undefined8 *)(pbVar32 + lVar33 + 0x98) = *(undefined8 *)(lVar25 + 0x98 + lVar33);
            puVar21 = (undefined8 *)(lVar25 + 0x88 + lVar33);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)(lVar25 + 0x98 + lVar33) = 0;
            *(undefined2 *)(pbVar32 + lVar33 + 0xa0) = *(undefined2 *)(lVar25 + 0xa0 + lVar33);
            lVar2 = lVar25 + lVar33;
            lVar33 = lVar33 + 0xa8;
          } while (lVar2 + 0xa8 != lVar8);
          do {
            func_0x07124db0(lVar25);
            lVar25 = lVar25 + 0xa8;
          } while (lVar25 != lVar8);
          lVar25 = *(long *)pbStack_1b0;
        }
        *(byte **)(pbStack_210 + 0xd8) = pbVar32;
        *(byte **)(pbStack_210 + 0xe0) = pbVar31;
        lVar8 = *(long *)(pbStack_210 + 0xe8);
        *(undefined8 **)(pbStack_210 + 0xe8) = puStack_1e0;
        if (lVar25 != 0) {
          thunk_FUN_0ee326a0(lVar25,lVar8 - lVar25);
        }
        *(byte **)(pbStack_210 + 0xe0) = pbVar31;
        pbVar28 = *(byte **)pbVar28;
        bVar9 = *pbVar28;
        goto joined_r0x07025878;
      }
      if (pbVar28 < (byte *)0x186186186186187) {
        puVar21 = (undefined8 *)
                  (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar28 * 0xa8);
        if (puVar21 == (undefined8 *)0x0) {
          func_0x0eec74c0((long)pbVar28 * 0xa8,0);
          puVar21 = (undefined8 *)0x0;
        }
        goto LAB_0702568d;
      }
LAB_07025e41:
      func_0x04882eb0();
      goto LAB_07025e46;
    }
  }
  else {
    pbVar32 = pbVar32 + -(long)pbStack_158;
    uVar27 = ((long)pbVar32 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar27) goto LAB_07025e5a;
    lVar25 = (long)*(byte **)(pbStack_1a8 + 200) - (long)pbStack_158 >> 3;
    uVar23 = lVar25 * -0x6186186186186186;
    if (uVar27 < uVar23) {
      uVar27 = uVar23;
    }
    pbVar30 = pbStack_1a8 + 0xb8;
    if (0xc30c30c30c30c2 < (ulong)(lVar25 * -0x30c30c30c30c30c3)) {
      uVar27 = 0x186186186186186;
    }
    pbStack_1d8 = pbVar30;
    if (uVar27 == 0) {
      puVar21 = (undefined8 *)0x0;
LAB_070249fd:
      pbStack_1f0 = pbVar32 + (long)puVar21;
      puStack_1e0 = puVar21 + uVar27 * 0x15;
      puStack_1f8 = puVar21;
      pbStack_1e8 = pbStack_1f0;
      func_0x071422f0(pbStack_1f0);
      pbVar32 = pbStack_1e8 + 0xa8;
      lVar25 = *(long *)(pbVar28 + 0xb8);
      lVar8 = *(long *)(pbVar28 + 0xc0);
      pbVar31 = pbStack_1f0 + (lVar25 - lVar8);
      if (lVar25 != lVar8) {
        lVar33 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar25 + lVar33))[1];
          *(undefined8 *)(pbVar31 + lVar33) = *(undefined8 *)(lVar25 + lVar33);
          *(undefined8 *)(pbVar31 + lVar33 + 8) = uVar19;
          *(undefined8 *)(lVar25 + lVar33) = 0;
          ((undefined8 *)(lVar25 + lVar33))[1] = 0;
          pbVar28 = pbVar31 + lVar33 + 0x20;
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
          pbVar28 = pbVar31 + lVar33 + 0x10;
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
          pbVar28 = pbVar31 + lVar33 + 0x30;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar31 + lVar33 + 0x28) = *(undefined8 *)(lVar25 + 0x28 + lVar33);
          puVar3 = (undefined4 *)(lVar25 + 0x18 + lVar33);
          uVar12 = puVar3[1];
          uVar13 = puVar3[2];
          uVar14 = puVar3[3];
          pbVar28 = pbVar31 + lVar33 + 0x18;
          *(undefined4 *)pbVar28 = *puVar3;
          *(undefined4 *)(pbVar28 + 4) = uVar12;
          *(undefined4 *)(pbVar28 + 8) = uVar13;
          *(undefined4 *)(pbVar28 + 0xc) = uVar14;
          *(undefined2 *)(lVar25 + 0x18 + lVar33) = 0;
          *(undefined8 *)(pbVar31 + lVar33 + 0x10) = *(undefined8 *)(lVar25 + 0x10 + lVar33);
          func_0x04167a20(pbVar31 + lVar33 + 0x38,lVar33 + lVar25 + 0x38);
          puVar21 = (undefined8 *)(lVar25 + 0x40 + lVar33);
          uVar19 = puVar21[1];
          *(undefined8 *)(pbVar31 + lVar33 + 0x40) = *puVar21;
          *(undefined8 *)(pbVar31 + lVar33 + 0x40 + 8) = uVar19;
          puVar21 = (undefined8 *)(lVar25 + 0x50 + lVar33);
          uVar19 = puVar21[1];
          *(undefined8 *)(pbVar31 + lVar33 + 0x50) = *puVar21;
          *(undefined8 *)(pbVar31 + lVar33 + 0x50 + 8) = uVar19;
          puVar21 = (undefined8 *)(lVar25 + 0x60 + lVar33);
          uVar19 = puVar21[1];
          *(undefined8 *)(pbVar31 + lVar33 + 0x60) = *puVar21;
          *(undefined8 *)(pbVar31 + lVar33 + 0x60 + 8) = uVar19;
          puVar21 = (undefined8 *)(lVar25 + 0x60 + lVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(pbVar31 + lVar33 + 0x70) = *(undefined8 *)(lVar25 + 0x70 + lVar33);
          puVar21 = (undefined8 *)(lVar25 + 0x78 + lVar33);
          uVar19 = puVar21[1];
          *(undefined8 *)(pbVar31 + lVar33 + 0x78) = *puVar21;
          *(undefined8 *)(pbVar31 + lVar33 + 0x78 + 8) = uVar19;
          pbVar28 = pbVar31 + lVar33 + 0x88;
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
          pbVar28 = pbVar31 + lVar33 + 0x98;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar3 = (undefined4 *)(lVar25 + 0x88 + lVar33);
          uVar12 = puVar3[1];
          uVar13 = puVar3[2];
          uVar14 = puVar3[3];
          pbVar28 = pbVar31 + lVar33 + 0x88;
          *(undefined4 *)pbVar28 = *puVar3;
          *(undefined4 *)(pbVar28 + 4) = uVar12;
          *(undefined4 *)(pbVar28 + 8) = uVar13;
          *(undefined4 *)(pbVar28 + 0xc) = uVar14;
          *(undefined8 *)(pbVar31 + lVar33 + 0x98) = *(undefined8 *)(lVar25 + 0x98 + lVar33);
          puVar21 = (undefined8 *)(lVar25 + 0x88 + lVar33);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar25 + 0x98 + lVar33) = 0;
          *(undefined2 *)(pbVar31 + lVar33 + 0xa0) = *(undefined2 *)(lVar25 + 0xa0 + lVar33);
          lVar2 = lVar33 + lVar25;
          lVar33 = lVar33 + 0xa8;
        } while (lVar2 + 0xa8 != lVar8);
        do {
          func_0x07142470(lVar25);
          lVar25 = lVar25 + 0xa8;
        } while (lVar25 != lVar8);
        lVar25 = *(long *)pbVar30;
      }
      pbVar28 = pbStack_1a8;
      *(byte **)(pbStack_1a8 + 0xb8) = pbVar31;
      *(byte **)(pbStack_1a8 + 0xc0) = pbVar32;
      lVar8 = *(long *)(pbStack_1a8 + 200);
      *(undefined8 **)(pbStack_1a8 + 200) = puStack_1e0;
      if (lVar25 != 0) {
        thunk_FUN_0ee326a0(lVar25,lVar8 - lVar25);
      }
      goto LAB_07024bde;
    }
    if (uVar27 < 0x186186186186187) {
      puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 * 0xa8);
      if (puVar21 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar27 * 0xa8,0);
        puVar21 = (undefined8 *)0x0;
      }
      goto LAB_070249fd;
    }
LAB_07025e46:
    func_0x04882eb0();
LAB_07025e4b:
    func_0x07142690();
LAB_07025e50:
    func_0x07124fd0();
  }
  func_0x07124da0();
LAB_07025e5a:
  uStack_218 = func_0x07142460();
  if ((*pbVar32 & 1) != 0) {
    thunk_FUN_0ee326a0(*(long *)(pbVar28 + 0x18),*(ulong *)(pbVar28 + 8) & 0xfffffffffffffffe);
  }
  func_0x07124f10(&puStack_1f8);
  LOCK();
  lVar25 = *(long *)pbStack_1a0;
  *(long *)pbStack_1a0 = *(long *)pbStack_1a0 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*(long *)pbStack_200 + 0x10))(pbStack_200);
    func_0x0412c2d0(pbStack_200);
  }
  func_0x071215d0(pbVar30);
  func_0x07121600(pbVar30);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
    uStack_218 = func_0x0eee2d70(uStack_218);
    LOCK();
    lVar25 = *(long *)pbStack_1b0;
    *(long *)pbStack_1b0 = *(long *)pbStack_1b0 + -1;
    UNLOCK();
    if (lVar25 == 0) {
      (**(code **)(*(long *)pbStack_208 + 0x10))(pbStack_208);
      func_0x0412c2d0(pbStack_208);
    }
    func_0x07140620(pbStack_210);
    func_0x07140650(pbStack_210);
    if (puStack_b8 != (undefined8 *)0x0) {
      (*(code *)puStack_b8[1])(&puStack_b8);
    }
    if ((uStack_190 & 1) != 0) {
      thunk_FUN_0ee326a0(pbStack_180,CONCAT44(uStack_18c,uStack_190) & 0xfffffffffffffffe);
    }
  }
  func_0x0eee2d70(uStack_218);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}



/* ---- referenced strings ----
 * 0x12db4f1  nside_block_event_map
 * 0x1494d5d  <any array element>
 */
