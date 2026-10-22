/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0ad1a0 (ELF vaddr 0xcfad1a0)
 * Label: caller-of-callee
 * Body:  [[0d0ad1a0, 0d0ad4ca] [0d0ad4d0, 0d0ad539] [0d0ad540, 0d0adc55] [0d0adc60, 0d0adc9e] [0d0adca0, 0d0ade71] [0d0adf83, 0d0adfac]]
 * Ghidra: FUN_0d0ad1a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0d0ad1a0(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 **ppuVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint *puVar31;
  ulong uVar32;
  bool bVar33;
  undefined1 uStack_f9;
  long *plStack_f8;
  byte *pbStack_f0;
  undefined8 *puStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 *puStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  uint *puStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  lStack_a0 = param_1;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_3)(param_3,&puStack_78);
    puVar18 = (undefined8 *)*param_3;
  }
  *param_3 = 0;
  puStack_78 = puVar18;
  pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (pbVar17 == (byte *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
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
  *(undefined **)pbVar17 = &UNK_0f44ec80;
  puStack_e8 = (undefined8 *)0x0;
  pbStack_e0 = (byte *)0x0;
  if (puVar18 == (undefined8 *)0x0) {
    puStack_e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar18)(&puStack_78,&puStack_e8);
    puStack_e8 = puStack_78;
  }
  puStack_78 = (undefined8 *)0x0;
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
  func_0x04aa75f0(pbVar17 + 0x70,&uStack_f9,&UNK_01254d89);
  pbVar17[0x80] = 0;
  pbStack_f0 = pbVar17 + 0x88;
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
  *(undefined **)(pbVar17 + 0x20) = &UNK_0f44ecd0;
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
  ppuVar3 = (undefined8 **)(pbVar17 + 400);
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
  if (ppuVar3 != &puStack_e8) {
    if (puStack_e8 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_e8)(&puStack_e8,ppuVar3);
      puVar18 = puStack_e8;
    }
    puStack_e8 = (undefined8 *)0x0;
    *ppuVar3 = puVar18;
  }
  pbVar27 = pbVar17 + 0x20;
  puStack_98 = (uint *)(pbVar17 + 0x90);
  if (pbStack_f0 != &DAT_0f551f88) {
    if ((*puStack_98 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        *(undefined8 *)(pbVar17 + 0xa0) = _DAT_0f551fa0;
        uVar11 = uRam000000000f551f9c;
        uVar10 = _DAT_0f551f98;
        uVar9 = uRam000000000f551f94;
        *puStack_98 = _DAT_0f551f90;
        *(undefined4 *)(pbVar17 + 0x94) = uVar9;
        *(undefined4 *)(pbVar17 + 0x98) = uVar10;
        *(undefined4 *)(pbVar17 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puStack_98,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar33 = (_DAT_0f551f90 & 1) != 0;
      uVar19 = 0xf551f91;
      if (bVar33) {
        uVar19 = _DAT_0f551fa0;
      }
      uVar32 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar33) {
        uVar32 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      FUN_04885120(puStack_98,uVar19,uVar32);
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
  if (puStack_e8 != (undefined8 *)0x0) {
    (*(code *)puStack_e8[1])(&puStack_e8);
  }
  pbVar30 = pbVar17 + 8;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  LOCK();
  *(long *)pbVar30 = *(long *)pbVar30 + 1;
  UNLOCK();
  pbStack_80 = pbVar30;
  plStack_f8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_f8 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar25 = lStack_a0;
  plStack_f8[1] = 0;
  plStack_f8[2] = 0;
  *plStack_f8 = (long)&UNK_0f44edb0;
  plStack_f8[6] = 0;
  plStack_f8[7] = 0;
  plStack_f8[4] = (long)&UNK_0f44ee00;
  plStack_f8[0xe] = (long)pbVar27;
  plStack_f8[0xf] = (long)pbVar17;
  LOCK();
  *(long *)(pbVar17 + 8) = *(long *)(pbVar17 + 8) + 1;
  UNLOCK();
  pbStack_90 = *(byte **)(lStack_a0 + 0xb8);
  pbVar30 = *(byte **)(lStack_a0 + 0xc0);
  pbStack_88 = pbVar27;
  if (pbStack_90 != pbVar30) {
    pbVar27 = (byte *)*param_2;
    pbVar29 = pbStack_90 + 0x19;
    do {
      if (*(byte **)(pbVar29 + -9) == pbVar27) {
        if ((*(undefined8 **)(pbVar29 + 0x17) != param_2) || (pbVar29 + -9 != (byte *)param_2[4])) {
          bVar7 = pbVar29[-1];
          if ((bVar7 & 1) == 0) {
            uVar32 = (ulong)(bVar7 >> 1);
            uVar20 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0d0ad52f;
LAB_0d0ad54d:
            if (uVar32 != param_2[2]) goto LAB_0d0ad4dd;
          }
          else {
            uVar32 = *(ulong *)(pbVar29 + 7);
            uVar20 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0d0ad54d;
LAB_0d0ad52f:
            if (uVar32 != uVar20 >> 1) goto LAB_0d0ad4dd;
          }
          pbVar28 = pbVar29;
          if ((bVar7 & 1) != 0) {
            pbVar28 = *(byte **)(pbVar29 + 0xf);
          }
          lVar21 = (long)param_2 + 9;
          if ((uVar20 & 1) != 0) {
            lVar21 = param_2[3];
          }
          iVar16 = bcmp(pbVar28,lVar21);
          if (iVar16 != 0) goto LAB_0d0ad4dd;
          *(undefined8 **)(pbVar29 + 0x17) = param_2;
          param_2[4] = pbVar29 + -9;
        }
        pbVar29 = pbVar29 + -0x19;
        plVar23 = plStack_f8;
        pbVar27 = pbStack_f0;
        goto LAB_0d0ad9d0;
      }
LAB_0d0ad4dd:
      pbVar29[0x17] = 0;
      pbVar29[0x18] = 0;
      pbVar29[0x19] = 0;
      pbVar29[0x1a] = 0;
      pbVar29[0x1b] = 0;
      pbVar29[0x1c] = 0;
      pbVar29[0x1d] = 0;
      pbVar29[0x1e] = 0;
      pbVar28 = pbVar29 + 0x8f;
      pbVar29 = pbVar29 + 0xa8;
    } while (pbVar28 != pbVar30);
  }
  if (pbVar30 < *(byte **)(lVar25 + 200)) {
    func_0x0d0eacf0(pbVar30);
    pbVar30 = pbVar30 + 0xa8;
    *(byte **)(lVar25 + 0xc0) = pbVar30;
LAB_0d0ad847:
    *(byte **)(lVar25 + 0xc0) = pbVar30;
    func_0x0b63b6d0(*(undefined8 *)(pbVar30 + -0xa8),param_2);
    lVar21 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar21 + -7) = *(undefined1 *)(lVar25 + 0x60);
    pbVar27 = (byte *)(param_2 + 1);
    if ((undefined8 *)(lVar21 + -0x98) != param_2) {
      pbVar30 = (byte *)(lVar21 + -0x90);
      bVar7 = *pbVar27;
      if ((*pbVar30 & 1) == 0) {
        if ((bVar7 & 1) == 0) {
          *(undefined8 *)(lVar21 + -0x80) = param_2[3];
          uVar9 = *(undefined4 *)((long)param_2 + 0xc);
          uVar10 = *(undefined4 *)(param_2 + 2);
          uVar11 = *(undefined4 *)((long)param_2 + 0x14);
          *(undefined4 *)pbVar30 = *(undefined4 *)pbVar27;
          *(undefined4 *)(lVar21 + -0x8c) = uVar9;
          *(undefined4 *)(lVar21 + -0x88) = uVar10;
          *(undefined4 *)(lVar21 + -0x84) = uVar11;
        }
        else {
          func_0x04885070(pbVar30,param_2[3],param_2[2]);
        }
      }
      else {
        bVar33 = (bVar7 & 1) != 0;
        lVar26 = (long)param_2 + 9;
        if (bVar33) {
          lVar26 = param_2[3];
        }
        uVar32 = (ulong)(bVar7 >> 1);
        if (bVar33) {
          uVar32 = param_2[2];
        }
        FUN_04885120(pbVar30,lVar26,uVar32);
      }
    }
    *(undefined8 *)(lVar21 + -0x98) = *param_2;
    *(undefined8 *)(lVar21 + -0x78) = 0;
    func_0x04aa9390(&puStack_e8,pbVar27,*(undefined1 *)(lVar25 + 0x60));
    lVar25 = *(long *)(lVar25 + 0xc0);
    func_0x04167a70(lVar25 + -0x70,&puStack_e8);
    *(byte **)(lVar25 + -0x68) = pbStack_e0;
    *(byte **)(lVar25 + -0x60) = pbStack_d8;
    *(undefined8 **)(lVar25 + -0x58) = puStack_d0;
    *(byte **)(lVar25 + -0x50) = pbStack_c8;
    uVar9 = (undefined4)uStack_c0;
    uVar10 = uStack_c0._4_4_;
    uVar11 = (undefined4)uStack_b8;
    uVar15 = uStack_b8._4_4_;
    uStack_c0 = 0;
    uStack_b8 = (byte *)0x0;
    plVar23 = *(long **)(lVar25 + -0x40);
    *(undefined4 *)(lVar25 + -0x48) = uVar9;
    *(undefined4 *)(lVar25 + -0x44) = uVar10;
    *(undefined4 *)(lVar25 + -0x40) = uVar11;
    *(undefined4 *)(lVar25 + -0x3c) = uVar15;
    if (plVar23 != (long *)0x0) {
      LOCK();
      plVar1 = plVar23 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
      }
    }
    pbVar30 = uStack_b8;
    pbVar27 = pbStack_f0;
    plVar23 = plStack_f8;
    *(undefined8 *)(lVar25 + -0x38) = uStack_b0;
    if (uStack_b8 != (byte *)0x0) {
      LOCK();
      pbVar29 = uStack_b8 + 8;
      lVar25 = *(long *)pbVar29;
      *(long *)pbVar29 = *(long *)pbVar29 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
        func_0x0412c2d0(pbVar30);
      }
    }
    func_0x04167a40(&puStack_e8);
    lVar25 = *(long *)(lStack_a0 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 0;
    pbVar29 = (byte *)(lVar25 + -0xa8);
LAB_0d0ad9d0:
    pbVar28 = *(byte **)(pbVar29 + 0x90);
    if (pbVar28 < *(byte **)(pbVar29 + 0x98)) {
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
      if (pbVar28 != pbVar27) {
        if ((*puStack_98 & 1) == 0) {
          *(undefined8 *)(pbVar28 + 0x18) = *(undefined8 *)(puStack_98 + 4);
          uVar19 = *(undefined8 *)(puStack_98 + 2);
          *(undefined8 *)(pbVar28 + 8) = *(undefined8 *)puStack_98;
          *(undefined8 *)(pbVar28 + 0x10) = uVar19;
        }
        else {
          func_0x04885070(pbVar28 + 8,*(undefined8 *)(pbVar17 + 0xa0),
                          *(undefined8 *)(pbVar17 + 0x98));
        }
      }
      *(undefined8 *)pbVar28 = *(undefined8 *)pbVar27;
      *(long **)(pbVar28 + 0x28) = plVar23 + 4;
      *(long **)(pbVar28 + 0x30) = plVar23;
      LOCK();
      plVar23[1] = plVar23[1] + 1;
      UNLOCK();
      pbVar28 = pbVar28 + 0x38;
      *(byte **)(pbVar29 + 0x90) = pbVar28;
      goto LAB_0d0adcfc;
    }
    lVar25 = (long)pbVar28 - *(long *)(pbVar29 + 0x88);
    uVar32 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar27 = pbVar17;
    if (uVar32 < 0x492492492492493) {
      lVar21 = (long)*(byte **)(pbVar29 + 0x98) - *(long *)(pbVar29 + 0x88) >> 3;
      uVar20 = lVar21 * -0x2492492492492492;
      if (uVar32 < uVar20) {
        uVar32 = uVar20;
      }
      pbVar28 = pbVar29 + 0x88;
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar32 = 0x492492492492492;
      }
      pbStack_c8 = pbVar28;
      if (uVar32 == 0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar32) goto LAB_0d0ade36;
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0x38);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar32 * 0x38,0);
          puVar18 = (undefined8 *)0x0;
        }
      }
      pbVar27 = (byte *)((long)puVar18 + lVar25);
      puStack_d0 = puVar18 + uVar32 * 7;
      puVar6 = (undefined8 *)((long)puVar18 + lVar25 + 0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25) = 0;
      ((undefined8 *)((long)puVar18 + lVar25))[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25 + 0x20) = 0;
      pbStack_d8 = pbVar27;
      puStack_e8 = puVar18;
      pbStack_e0 = pbVar27;
      if (pbVar27 != pbStack_f0) {
        puVar31 = (uint *)((long)puVar18 + lVar25 + 8);
        if ((*puStack_98 & 1) == 0) {
          *(undefined8 *)((long)puVar18 + lVar25 + 0x18) = *(undefined8 *)(puStack_98 + 4);
          uVar12 = puStack_98[1];
          uVar13 = puStack_98[2];
          uVar14 = puStack_98[3];
          *puVar31 = *puStack_98;
          *(uint *)((long)puVar18 + lVar25 + 0xc) = uVar12;
          *(uint *)((long)puVar18 + lVar25 + 0x10) = uVar13;
          *(uint *)((long)puVar18 + lVar25 + 0x14) = uVar14;
        }
        else {
          func_0x04885070(puVar31,*(undefined8 *)(pbVar17 + 0xa0),*(undefined8 *)(pbVar17 + 0x98));
        }
      }
      *(undefined8 *)pbVar27 = *(undefined8 *)pbStack_f0;
      *(long **)(pbVar27 + 0x28) = plVar23 + 4;
      *(long **)(pbVar27 + 0x30) = plStack_f8;
      LOCK();
      plStack_f8[1] = plStack_f8[1] + 1;
      UNLOCK();
      pbStack_d8 = pbStack_d8 + 0x38;
      puVar18 = *(undefined8 **)(pbVar29 + 0x88);
      puVar6 = *(undefined8 **)(pbVar29 + 0x90);
      pbVar27 = pbStack_e0 + ((long)puVar18 - (long)puVar6);
      pbVar30 = pbVar27;
      puVar22 = puVar18;
      if ((long)puVar18 - (long)puVar6 != 0) {
        do {
          pbVar30[0x10] = 0;
          pbVar30[0x11] = 0;
          pbVar30[0x12] = 0;
          pbVar30[0x13] = 0;
          pbVar30[0x14] = 0;
          pbVar30[0x15] = 0;
          pbVar30[0x16] = 0;
          pbVar30[0x17] = 0;
          pbVar30[0x18] = 0;
          pbVar30[0x19] = 0;
          pbVar30[0x1a] = 0;
          pbVar30[0x1b] = 0;
          pbVar30[0x1c] = 0;
          pbVar30[0x1d] = 0;
          pbVar30[0x1e] = 0;
          pbVar30[0x1f] = 0;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          pbVar30[8] = 0;
          pbVar30[9] = 0;
          pbVar30[10] = 0;
          pbVar30[0xb] = 0;
          pbVar30[0xc] = 0;
          pbVar30[0xd] = 0;
          pbVar30[0xe] = 0;
          pbVar30[0xf] = 0;
          pbVar30[0x20] = 0;
          pbVar30[0x21] = 0;
          pbVar30[0x22] = 0;
          pbVar30[0x23] = 0;
          pbVar30[0x24] = 0;
          pbVar30[0x25] = 0;
          pbVar30[0x26] = 0;
          pbVar30[0x27] = 0;
          *(undefined8 *)(pbVar30 + 0x18) = puVar22[3];
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar30 + 8) = puVar22[1];
          *(undefined8 *)(pbVar30 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar30 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar30 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar30 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar30 = pbVar30 + 0x38;
        } while (puVar22 != puVar6);
        do {
          plVar23 = (long *)puVar18[6];
          if (plVar23 == (long *)0x0) {
LAB_0d0adc85:
            bVar7 = *(byte *)(puVar18 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar23 + 1;
            lVar25 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar25 != 0) goto LAB_0d0adc85;
            (**(code **)(*plVar23 + 0x10))(plVar23);
            func_0x0412c2d0(plVar23);
            bVar7 = *(byte *)(puVar18 + 1);
          }
          if ((bVar7 & 1) != 0) {
            func_0x0412a280(puVar18[3],puVar18[1] & 0xfffffffffffffffe);
          }
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar6);
        puVar18 = *(undefined8 **)pbVar28;
      }
      pbVar28 = pbStack_d8;
      *(byte **)(pbVar29 + 0x88) = pbVar27;
      *(byte **)(pbVar29 + 0x90) = pbStack_d8;
      lVar25 = *(long *)(pbVar29 + 0x98);
      *(undefined8 **)(pbVar29 + 0x98) = puStack_d0;
      if (puVar18 != (undefined8 *)0x0) {
        func_0x0412a280(puVar18,lVar25 - (long)puVar18);
      }
LAB_0d0adcfc:
      plVar23 = plStack_f8;
      *(byte **)(pbVar29 + 0x90) = pbVar28;
      uVar9 = *(undefined4 *)pbVar29;
      uVar10 = *(undefined4 *)(pbVar29 + 4);
      uVar11 = *(undefined4 *)(pbVar29 + 8);
      uVar15 = *(undefined4 *)(pbVar29 + 0xc);
      if (*(long *)(pbVar29 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(pbVar29 + 8) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar24 = plStack_f8 + 1;
      plVar1 = *(long **)(pbVar17 + 0x78);
      *(undefined4 *)(pbVar17 + 0x70) = uVar9;
      *(undefined4 *)(pbVar17 + 0x74) = uVar10;
      *(undefined4 *)(pbVar17 + 0x78) = uVar11;
      *(undefined4 *)(pbVar17 + 0x7c) = uVar15;
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
      pbVar17[0x80] = pbVar29[0xa1];
      LOCK();
      lVar25 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x0412c2d0(plVar23);
        LOCK();
        lVar25 = *(long *)pbStack_80;
        *(long *)pbStack_80 = *(long *)pbStack_80 + -1;
        UNLOCK();
        pbVar27 = pbStack_80;
      }
      else {
        LOCK();
        lVar25 = *(long *)pbStack_80;
        *(long *)pbStack_80 = *(long *)pbStack_80 + -1;
        UNLOCK();
        pbVar27 = pbStack_80;
      }
      pbStack_80 = pbVar27;
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        func_0x0412c2d0(pbVar17);
        LOCK();
        lVar25 = *(long *)pbVar27;
        *(long *)pbVar27 = *(long *)pbVar27 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *(long *)pbVar27;
        *(long *)pbVar27 = *(long *)pbVar27 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        func_0x0412c2d0(pbVar17);
      }
      return pbStack_88;
    }
  }
  else {
    pbVar30 = pbVar30 + -(long)pbStack_90;
    uVar32 = ((long)pbVar30 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar32) goto LAB_0d0ade40;
    lVar21 = (long)*(byte **)(lVar25 + 200) - (long)pbStack_90 >> 3;
    uVar20 = lVar21 * -0x6186186186186186;
    if (uVar32 < uVar20) {
      uVar32 = uVar20;
    }
    pbVar27 = (byte *)(lVar25 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar32 = 0x186186186186186;
    }
    pbStack_c8 = pbVar27;
    if (uVar32 == 0) {
      puVar18 = (undefined8 *)0x0;
LAB_0d0ad65b:
      pbStack_e0 = pbVar30 + (long)puVar18;
      puStack_d0 = puVar18 + uVar32 * 0x15;
      puStack_e8 = puVar18;
      pbStack_d8 = pbStack_e0;
      func_0x0d0eacf0(pbStack_e0);
      pbVar30 = pbStack_d8 + 0xa8;
      lVar21 = *(long *)(lVar25 + 0xb8);
      lVar26 = *(long *)(lVar25 + 0xc0);
      pbVar29 = pbStack_e0 + (lVar21 - lVar26);
      if (lVar21 != lVar26) {
        lVar25 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar21 + lVar25))[1];
          *(undefined8 *)(pbVar29 + lVar25) = *(undefined8 *)(lVar21 + lVar25);
          *(undefined8 *)(pbVar29 + lVar25 + 8) = uVar19;
          *(undefined8 *)(lVar21 + lVar25) = 0;
          ((undefined8 *)(lVar21 + lVar25))[1] = 0;
          pbVar28 = pbVar29 + lVar25 + 0x20;
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
          pbVar28 = pbVar29 + lVar25 + 0x10;
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
          pbVar28 = pbVar29 + lVar25 + 0x30;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar29 + lVar25 + 0x28) = *(undefined8 *)(lVar21 + 0x28 + lVar25);
          puVar5 = (undefined4 *)(lVar21 + 0x18 + lVar25);
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          pbVar28 = pbVar29 + lVar25 + 0x18;
          *(undefined4 *)pbVar28 = *puVar5;
          *(undefined4 *)(pbVar28 + 4) = uVar9;
          *(undefined4 *)(pbVar28 + 8) = uVar10;
          *(undefined4 *)(pbVar28 + 0xc) = uVar11;
          *(undefined2 *)(lVar21 + 0x18 + lVar25) = 0;
          *(undefined8 *)(pbVar29 + lVar25 + 0x10) = *(undefined8 *)(lVar21 + 0x10 + lVar25);
          FUN_04167a20(pbVar29 + lVar25 + 0x38,lVar25 + lVar21 + 0x38);
          puVar18 = (undefined8 *)(lVar21 + 0x40 + lVar25);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar29 + lVar25 + 0x40) = *puVar18;
          *(undefined8 *)(pbVar29 + lVar25 + 0x40 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x50 + lVar25);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar29 + lVar25 + 0x50) = *puVar18;
          *(undefined8 *)(pbVar29 + lVar25 + 0x50 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar25);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar29 + lVar25 + 0x60) = *puVar18;
          *(undefined8 *)(pbVar29 + lVar25 + 0x60 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar21 + 0x60 + lVar25);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(pbVar29 + lVar25 + 0x70) = *(undefined8 *)(lVar21 + 0x70 + lVar25);
          puVar18 = (undefined8 *)(lVar21 + 0x78 + lVar25);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar29 + lVar25 + 0x78) = *puVar18;
          *(undefined8 *)(pbVar29 + lVar25 + 0x78 + 8) = uVar19;
          pbVar28 = pbVar29 + lVar25 + 0x88;
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
          pbVar28 = pbVar29 + lVar25 + 0x98;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar5 = (undefined4 *)(lVar21 + 0x88 + lVar25);
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          pbVar28 = pbVar29 + lVar25 + 0x88;
          *(undefined4 *)pbVar28 = *puVar5;
          *(undefined4 *)(pbVar28 + 4) = uVar9;
          *(undefined4 *)(pbVar28 + 8) = uVar10;
          *(undefined4 *)(pbVar28 + 0xc) = uVar11;
          *(undefined8 *)(pbVar29 + lVar25 + 0x98) = *(undefined8 *)(lVar21 + 0x98 + lVar25);
          puVar18 = (undefined8 *)(lVar21 + 0x88 + lVar25);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar21 + 0x98 + lVar25) = 0;
          *(undefined2 *)(pbVar29 + lVar25 + 0xa0) = *(undefined2 *)(lVar21 + 0xa0 + lVar25);
          lVar4 = lVar25 + lVar21;
          lVar25 = lVar25 + 0xa8;
        } while (lVar4 + 0xa8 != lVar26);
        do {
          func_0x0d0eae70(lVar21);
          lVar21 = lVar21 + 0xa8;
        } while (lVar21 != lVar26);
        lVar21 = *(long *)pbVar27;
        lVar25 = lStack_a0;
      }
      *(byte **)(lVar25 + 0xb8) = pbVar29;
      *(byte **)(lVar25 + 0xc0) = pbVar30;
      lVar26 = *(long *)(lVar25 + 200);
      *(undefined8 **)(lVar25 + 200) = puStack_d0;
      if (lVar21 != 0) {
        func_0x0412a280(lVar21,lVar26 - lVar21);
      }
      goto LAB_0d0ad847;
    }
    if (uVar32 < 0x186186186186187) {
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0xa8);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar32 * 0xa8,0);
        puVar18 = (undefined8 *)0x0;
      }
      goto LAB_0d0ad65b;
    }
LAB_0d0ade36:
    func_0x04882eb0();
  }
  func_0x0d0eb090();
LAB_0d0ade40:
  uVar19 = func_0x0d0eae60();
  if ((*pbVar30 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar27 + 0x18),*(ulong *)(pbVar27 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d0eafd0(&puStack_e8);
  func_0x0d0e9560(plStack_f8);
  func_0x0d0e9590(pbVar17);
  func_0x0d0e95c0(pbVar17);
  func_0x0eee2d70(uVar19);
  pcVar8 = (code *)swi(3);
  pbVar17 = (byte *)(*pcVar8)();
  return pbVar17;
}


