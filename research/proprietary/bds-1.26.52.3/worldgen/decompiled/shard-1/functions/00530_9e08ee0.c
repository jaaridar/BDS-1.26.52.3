/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f08ee0 (ELF vaddr 0x9e08ee0)
 * Label: caller-of-callee
 * Body:  [[09f08ee0, 09f091f6] [09f09200, 09f09271] [09f09280, 09f0997a] [09f09980, 09f099bd] [09f099c0, 09f09b8a] [09f09c81, 09f09ca7]]
 * Ghidra: FUN_09f08ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_09f08ee0(byte *param_1,long *param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  uint *puVar32;
  bool bVar33;
  undefined1 uStack_f1;
  byte *pbStack_f0;
  undefined8 *puStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 *puStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined4 uStack_94;
  uint *puStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  pbStack_f0 = param_1;
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_4)(param_4,&puStack_78);
    puVar17 = (undefined8 *)*param_4;
  }
  *param_4 = 0;
  puStack_78 = puVar17;
  pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar16 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  pbVar16[8] = 0;
  pbVar16[9] = 0;
  pbVar16[10] = 0;
  pbVar16[0xb] = 0;
  pbVar16[0xc] = 0;
  pbVar16[0xd] = 0;
  pbVar16[0xe] = 0;
  pbVar16[0xf] = 0;
  pbVar16[0x10] = 0;
  pbVar16[0x11] = 0;
  pbVar16[0x12] = 0;
  pbVar16[0x13] = 0;
  pbVar16[0x14] = 0;
  pbVar16[0x15] = 0;
  pbVar16[0x16] = 0;
  pbVar16[0x17] = 0;
  *(undefined **)pbVar16 = &UNK_0f1f12f0;
  puStack_e8 = (undefined8 *)0x0;
  pbStack_e0 = (byte *)0x0;
  if (puVar17 == (undefined8 *)0x0) {
    puStack_e8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar17)(&puStack_78,&puStack_e8);
    puStack_e8 = puStack_78;
  }
  puStack_78 = (undefined8 *)0x0;
  *(undefined **)(pbVar16 + 0x20) = &UNK_0f2ccd78;
  pbVar16[0x28] = 0;
  pbVar16[0x29] = 0;
  pbVar16[0x2a] = 0;
  pbVar16[0x2b] = 0;
  pbVar16[0x2c] = 0;
  pbVar16[0x2d] = 0;
  pbVar16[0x2e] = 0;
  pbVar16[0x2f] = 0;
  pbVar16[0x30] = 0;
  pbVar16[0x31] = 0;
  pbVar16[0x32] = 0;
  pbVar16[0x33] = 0;
  pbVar16[0x34] = 0;
  pbVar16[0x35] = 0;
  pbVar16[0x36] = 0;
  pbVar16[0x37] = 0;
  pbVar16[0x38] = 0;
  pbVar16[0x39] = 0;
  pbVar16[0x3a] = 0;
  pbVar16[0x3b] = 0;
  pbVar16[0x3c] = 0;
  pbVar16[0x3d] = 0;
  pbVar16[0x3e] = 0;
  pbVar16[0x3f] = 0;
  pbVar16[0x40] = 0;
  pbVar16[0x41] = 0;
  pbVar16[0x42] = 0;
  pbVar16[0x43] = 0;
  pbVar16[0x44] = 0;
  pbVar16[0x45] = 0;
  pbVar16[0x46] = 0;
  pbVar16[0x47] = 0;
  pbVar16[0x48] = 0;
  pbVar16[0x49] = 0;
  pbVar16[0x4a] = 0;
  pbVar16[0x4b] = 0;
  pbVar16[0x4c] = 0;
  pbVar16[0x4d] = 0;
  pbVar16[0x4e] = 0;
  pbVar16[0x4f] = 0;
  pbVar16[0x50] = 0;
  pbVar16[0x51] = 0;
  pbVar16[0x52] = 0;
  pbVar16[0x53] = 0;
  pbVar16[0x54] = 0;
  pbVar16[0x55] = 0;
  pbVar16[0x56] = 0;
  pbVar16[0x57] = 0;
  pbVar16[0x58] = 0;
  pbVar16[0x59] = 0;
  pbVar16[0x5a] = 0;
  pbVar16[0x5b] = 0;
  pbVar16[0x5c] = 0;
  pbVar16[0x5d] = 0;
  pbVar16[0x5e] = 0;
  pbVar16[0x5f] = 0;
  pbVar16[0x60] = 0;
  pbVar16[0x61] = 0;
  pbVar16[0x62] = 0;
  pbVar16[99] = 0;
  pbVar16[100] = 0;
  pbVar16[0x65] = 0;
  pbVar16[0x66] = 0;
  pbVar16[0x67] = 0;
  pbVar16[0x68] = 0;
  func_0x04aa75f0(pbVar16 + 0x70,&uStack_f1,&UNK_01254d89);
  pbVar16[0x80] = 0;
  pbVar16[0x88] = 0;
  pbVar16[0x89] = 0;
  pbVar16[0x8a] = 0;
  pbVar16[0x8b] = 0;
  pbVar16[0x8c] = 0;
  pbVar16[0x8d] = 0;
  pbVar16[0x8e] = 0;
  pbVar16[0x8f] = 0;
  pbVar16[0x90] = 0;
  pbVar16[0x91] = 0;
  pbVar16[0x92] = 0;
  pbVar16[0x93] = 0;
  pbVar16[0x94] = 0;
  pbVar16[0x95] = 0;
  pbVar16[0x96] = 0;
  pbVar16[0x97] = 0;
  pbVar16[0x98] = 0;
  pbVar16[0x99] = 0;
  pbVar16[0x9a] = 0;
  pbVar16[0x9b] = 0;
  pbVar16[0x9c] = 0;
  pbVar16[0x9d] = 0;
  pbVar16[0x9e] = 0;
  pbVar16[0x9f] = 0;
  pbVar16[0xa0] = 0;
  pbVar16[0xa1] = 0;
  pbVar16[0xa2] = 0;
  pbVar16[0xa3] = 0;
  pbVar16[0xa4] = 0;
  pbVar16[0xa5] = 0;
  pbVar16[0xa6] = 0;
  pbVar16[0xa7] = 0;
  pbVar16[0xa8] = 0;
  pbVar16[0xa9] = 0;
  pbVar16[0xaa] = 0;
  pbVar16[0xab] = 0;
  pbVar16[0xac] = 0;
  pbVar16[0xad] = 0;
  pbVar16[0xae] = 0;
  pbVar16[0xaf] = 0;
  pbVar16[0xb0] = 0;
  pbVar16[0xb1] = 0;
  pbVar16[0xb2] = 0;
  pbVar16[0xb3] = 0;
  pbVar16[0xb4] = 0;
  pbVar16[0xb5] = 0;
  pbVar16[0xb6] = 0;
  pbVar16[0xb7] = 0;
  pbVar16[0xb8] = 0xff;
  pbVar16[0xb9] = 0xff;
  pbVar16[0xba] = 0xff;
  pbVar16[0xbb] = 0xff;
  pbVar16[0xbc] = 0;
  pbVar16[0xbd] = 0;
  pbVar16[0xbe] = 0;
  pbVar16[0xbf] = 0;
  pbVar16[0x130] = 0;
  pbVar16[0x131] = 0;
  pbVar16[0x132] = 0;
  pbVar16[0x133] = 0;
  pbVar16[0x134] = 0;
  pbVar16[0x135] = 0;
  pbVar16[0x136] = 0;
  pbVar16[0x137] = 0;
  pbVar16[0x138] = 0;
  pbVar16[0x139] = 0;
  pbVar16[0x13a] = 0;
  pbVar16[0x13b] = 0;
  pbVar16[0x13c] = 0;
  pbVar16[0x13d] = 0;
  pbVar16[0x13e] = 0;
  pbVar16[0x13f] = 0;
  pbVar16[0xc0] = 0;
  pbVar16[0xc1] = 0;
  pbVar16[0xc2] = 0;
  pbVar16[0xc3] = 0;
  pbVar16[0xc4] = 0;
  pbVar16[0xc5] = 0;
  pbVar16[0xc6] = 0;
  pbVar16[199] = 0;
  pbVar16[200] = 0;
  pbVar16[0xc9] = 0;
  pbVar16[0xca] = 0;
  pbVar16[0xcb] = 0;
  pbVar16[0xcc] = 0;
  pbVar16[0xcd] = 0;
  pbVar16[0xce] = 0;
  pbVar16[0xcf] = 0;
  pbVar16[0xd0] = 0;
  pbVar16[0xd1] = 0;
  pbVar16[0xd2] = 0;
  pbVar16[0xd3] = 0;
  pbVar16[0xd4] = 0;
  pbVar16[0xd5] = 0;
  pbVar16[0xd6] = 0;
  pbVar16[0xd7] = 0;
  pbVar16[0xd8] = 0;
  pbVar16[0xd9] = 0;
  pbVar16[0xda] = 0;
  pbVar16[0xdb] = 0;
  pbVar16[0xdc] = 0;
  pbVar16[0xdd] = 0;
  pbVar16[0xde] = 0;
  pbVar16[0xdf] = 0;
  pbVar16[0xe0] = 0;
  pbVar16[0xe1] = 0;
  pbVar16[0xe2] = 0;
  pbVar16[0xe3] = 0;
  pbVar16[0xe4] = 0;
  pbVar16[0xe5] = 0;
  pbVar16[0xe6] = 0;
  pbVar16[0xe7] = 0;
  pbVar16[0xe8] = 0;
  pbVar16[0xe9] = 0;
  pbVar16[0xea] = 0;
  pbVar16[0xeb] = 0;
  pbVar16[0xec] = 0;
  pbVar16[0xed] = 0;
  pbVar16[0xee] = 0;
  pbVar16[0xef] = 0;
  pbVar16[0xf0] = 0;
  pbVar16[0xf1] = 0;
  pbVar16[0xf2] = 0;
  pbVar16[0xf3] = 0;
  pbVar16[0xf4] = 0;
  pbVar16[0xf5] = 0;
  pbVar16[0xf6] = 0;
  pbVar16[0xf7] = 0;
  pbVar16[0xf8] = 0;
  pbVar16[0xf9] = 0;
  pbVar16[0xfa] = 0;
  pbVar16[0xfb] = 0;
  pbVar16[0xfc] = 0;
  pbVar16[0xfd] = 0;
  pbVar16[0xfe] = 0;
  pbVar16[0xff] = 0;
  *(undefined **)(pbVar16 + 0x20) = &UNK_0f1f1340;
  pbVar16[0x170] = 0;
  pbVar16[0x171] = 0;
  pbVar16[0x172] = 0;
  pbVar16[0x173] = 0;
  pbVar16[0x174] = 0;
  pbVar16[0x175] = 0;
  pbVar16[0x176] = 0;
  pbVar16[0x177] = 0;
  pbVar16[0x178] = 0;
  pbVar16[0x179] = 0;
  pbVar16[0x17a] = 0;
  pbVar16[0x17b] = 0;
  pbVar16[0x17c] = 0;
  pbVar16[0x17d] = 0;
  pbVar16[0x17e] = 0;
  pbVar16[0x17f] = 0;
  uStack_94 = param_3;
  if (puStack_e8 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_e8)(&puStack_e8,pbVar16 + 0x170);
    puVar17 = puStack_e8;
  }
  pbVar29 = pbVar16 + 0x20;
  puStack_e8 = (undefined8 *)0x0;
  *(undefined8 **)(pbVar16 + 0x170) = puVar17;
  puStack_90 = (uint *)(pbVar16 + 0x90);
  if (pbVar16 + 0x88 == &DAT_0f551ef8) {
    pbVar16[0xa8] = 0;
    pbVar16[0xa9] = 0;
    pbVar16[0xaa] = 0;
    pbVar16[0xab] = 0;
    pbVar16[0xac] = 0;
    pbVar16[0xad] = 0;
    pbVar16[0xae] = 0;
    pbVar16[0xaf] = 0;
  }
  else {
    if ((*puStack_90 & 1) == 0) {
      if ((_DAT_0f551f00 & 1) == 0) {
        *(undefined8 *)(pbVar16 + 0xa0) = _DAT_0f551f10;
        uVar10 = uRam000000000f551f0c;
        uVar9 = _DAT_0f551f08;
        uVar8 = uRam000000000f551f04;
        *puStack_90 = _DAT_0f551f00;
        *(undefined4 *)(pbVar16 + 0x94) = uVar8;
        *(undefined4 *)(pbVar16 + 0x98) = uVar9;
        *(undefined4 *)(pbVar16 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_90,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
      }
    }
    else {
      bVar33 = (_DAT_0f551f00 & 1) != 0;
      uVar18 = 0xf551f01;
      if (bVar33) {
        uVar18 = _DAT_0f551f10;
      }
      uVar31 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
      if (bVar33) {
        uVar31 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
      }
      func_0x04885120(puStack_90,uVar18,uVar31);
    }
    *(undefined8 *)(pbVar16 + 0x88) = _DAT_0f551ef8;
    pbVar16[0xa8] = 0;
    pbVar16[0xa9] = 0;
    pbVar16[0xaa] = 0;
    pbVar16[0xab] = 0;
    pbVar16[0xac] = 0;
    pbVar16[0xad] = 0;
    pbVar16[0xae] = 0;
    pbVar16[0xaf] = 0;
    if (puStack_e8 != (undefined8 *)0x0) {
      (*(code *)puStack_e8[1])(&puStack_e8);
    }
  }
  pbVar27 = pbVar16 + 8;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  LOCK();
  *(long *)pbVar27 = *(long *)pbVar27 + 1;
  UNLOCK();
  pbStack_a0 = pbVar16 + 0x88;
  pbStack_80 = pbVar27;
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
  *(undefined **)pbVar27 = &UNK_0f1f1420;
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
  *(undefined **)(pbVar27 + 0x20) = &UNK_0f1f1470;
  *(byte **)(pbVar27 + 0x70) = pbVar29;
  *(byte **)(pbVar27 + 0x78) = pbVar16;
  LOCK();
  *(long *)(pbVar16 + 8) = *(long *)(pbVar16 + 8) + 1;
  UNLOCK();
  pbStack_a8 = *(byte **)(pbStack_f0 + 0xb8);
  pbVar30 = *(byte **)(pbStack_f0 + 0xc0);
  pbVar25 = pbVar16;
  pbVar23 = pbVar27;
  pbStack_88 = pbVar29;
  if (pbStack_a8 != pbVar30) {
    lVar24 = *param_2;
    pbVar23 = (byte *)((long)param_2 + 9);
    pbVar29 = pbStack_a8 + 0x19;
    do {
      if (*(long *)(pbVar29 + -9) == lVar24) {
        pbVar25 = pbVar29 + -9;
        if ((*(long **)(pbVar29 + 0x17) != param_2) || (pbVar25 != (byte *)param_2[4])) {
          bVar5 = pbVar29[-1];
          if ((bVar5 & 1) == 0) {
            uVar31 = (ulong)(bVar5 >> 1);
            uVar19 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_09f09267;
LAB_09f0928e:
            if (uVar31 != param_2[2]) goto LAB_09f0920d;
          }
          else {
            uVar31 = *(ulong *)(pbVar29 + 7);
            uVar19 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_09f0928e;
LAB_09f09267:
            if (uVar31 != uVar19 >> 1) goto LAB_09f0920d;
          }
          pbVar28 = pbVar29;
          if ((bVar5 & 1) != 0) {
            pbVar28 = *(byte **)(pbVar29 + 0xf);
          }
          pbVar26 = pbVar23;
          if ((uVar19 & 1) != 0) {
            pbVar26 = (byte *)param_2[3];
          }
          iVar15 = func_0x0eee3000(pbVar28,pbVar26);
          if (iVar15 != 0) goto LAB_09f0920d;
          *(long **)(pbVar29 + 0x17) = param_2;
          param_2[4] = (long)pbVar25;
        }
        pbVar29 = pbVar29 + -0x19;
        goto LAB_09f096f4;
      }
LAB_09f0920d:
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
  pbVar29 = pbStack_f0;
  if (pbVar30 < *(byte **)(pbStack_f0 + 200)) {
    func_0x09f0b620(pbVar30);
    pbVar30 = pbVar30 + 0xa8;
    *(byte **)(pbVar29 + 0xc0) = pbVar30;
LAB_09f09576:
    *(byte **)(pbVar29 + 0xc0) = pbVar30;
    func_0x0b63b6d0(*(undefined8 *)(pbVar30 + -0xa8),param_2);
    lVar24 = *(long *)(pbVar29 + 0xc0);
    *(byte *)(lVar24 + -7) = pbVar29[0x60];
    pbVar23 = (byte *)(param_2 + 1);
    if ((long *)(lVar24 + -0x98) != param_2) {
      pbVar25 = (byte *)(lVar24 + -0x90);
      bVar5 = *pbVar23;
      if ((*pbVar25 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          *(long *)(lVar24 + -0x80) = param_2[3];
          uVar8 = *(undefined4 *)((long)param_2 + 0xc);
          lVar20 = param_2[2];
          uVar9 = *(undefined4 *)((long)param_2 + 0x14);
          *(undefined4 *)pbVar25 = *(undefined4 *)pbVar23;
          *(undefined4 *)(lVar24 + -0x8c) = uVar8;
          *(int *)(lVar24 + -0x88) = (int)lVar20;
          *(undefined4 *)(lVar24 + -0x84) = uVar9;
        }
        else {
          func_0x04885070(pbVar25,param_2[3],param_2[2]);
        }
      }
      else {
        bVar33 = (bVar5 & 1) != 0;
        lVar20 = (long)param_2 + 9;
        if (bVar33) {
          lVar20 = param_2[3];
        }
        uVar31 = (ulong)(bVar5 >> 1);
        if (bVar33) {
          uVar31 = param_2[2];
        }
        func_0x04885120(pbVar25,lVar20,uVar31);
      }
    }
    *(long *)(lVar24 + -0x98) = *param_2;
    *(undefined8 *)(lVar24 + -0x78) = 0;
    func_0x04aa9390(&puStack_e8,pbVar23,pbVar29[0x60]);
    lVar24 = *(long *)(pbVar29 + 0xc0);
    func_0x04167a70(lVar24 + -0x70,&puStack_e8);
    *(byte **)(lVar24 + -0x68) = pbStack_e0;
    *(byte **)(lVar24 + -0x60) = pbStack_d8;
    *(undefined8 **)(lVar24 + -0x58) = puStack_d0;
    *(byte **)(lVar24 + -0x50) = pbStack_c8;
    uVar8 = (undefined4)uStack_c0;
    uVar9 = uStack_c0._4_4_;
    uVar10 = (undefined4)uStack_b8;
    uVar14 = uStack_b8._4_4_;
    uStack_c0 = 0;
    uStack_b8 = (byte *)0x0;
    plVar6 = *(long **)(lVar24 + -0x40);
    *(undefined4 *)(lVar24 + -0x48) = uVar8;
    *(undefined4 *)(lVar24 + -0x44) = uVar9;
    *(undefined4 *)(lVar24 + -0x40) = uVar10;
    *(undefined4 *)(lVar24 + -0x3c) = uVar14;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    uVar8 = uStack_94;
    pbVar23 = uStack_b8;
    *(undefined8 *)(lVar24 + -0x38) = uStack_b0;
    if (uStack_b8 != (byte *)0x0) {
      LOCK();
      pbVar25 = uStack_b8 + 8;
      lVar24 = *(long *)pbVar25;
      *(long *)pbVar25 = *(long *)pbVar25 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)uStack_b8 + 0x10))(uStack_b8);
        func_0x0412c2d0(pbVar23);
      }
    }
    func_0x04167a40(&puStack_e8);
    lVar24 = *(long *)(pbVar29 + 0xc0);
    *(char *)(lVar24 + -8) = (char)uVar8;
    pbVar29 = (byte *)(lVar24 + -0xa8);
LAB_09f096f4:
    pbVar25 = *(byte **)(pbVar29 + 0x90);
    if (pbVar25 < *(byte **)(pbVar29 + 0x98)) {
      pbVar25[0x10] = 0;
      pbVar25[0x11] = 0;
      pbVar25[0x12] = 0;
      pbVar25[0x13] = 0;
      pbVar25[0x14] = 0;
      pbVar25[0x15] = 0;
      pbVar25[0x16] = 0;
      pbVar25[0x17] = 0;
      pbVar25[0x18] = 0;
      pbVar25[0x19] = 0;
      pbVar25[0x1a] = 0;
      pbVar25[0x1b] = 0;
      pbVar25[0x1c] = 0;
      pbVar25[0x1d] = 0;
      pbVar25[0x1e] = 0;
      pbVar25[0x1f] = 0;
      pbVar25[0] = 0;
      pbVar25[1] = 0;
      pbVar25[2] = 0;
      pbVar25[3] = 0;
      pbVar25[4] = 0;
      pbVar25[5] = 0;
      pbVar25[6] = 0;
      pbVar25[7] = 0;
      pbVar25[8] = 0;
      pbVar25[9] = 0;
      pbVar25[10] = 0;
      pbVar25[0xb] = 0;
      pbVar25[0xc] = 0;
      pbVar25[0xd] = 0;
      pbVar25[0xe] = 0;
      pbVar25[0xf] = 0;
      pbVar25[0x20] = 0;
      pbVar25[0x21] = 0;
      pbVar25[0x22] = 0;
      pbVar25[0x23] = 0;
      pbVar25[0x24] = 0;
      pbVar25[0x25] = 0;
      pbVar25[0x26] = 0;
      pbVar25[0x27] = 0;
      if (pbVar25 != pbStack_a0) {
        if ((*puStack_90 & 1) == 0) {
          *(undefined8 *)(pbVar25 + 0x18) = *(undefined8 *)(puStack_90 + 4);
          uVar18 = *(undefined8 *)(puStack_90 + 2);
          *(undefined8 *)(pbVar25 + 8) = *(undefined8 *)puStack_90;
          *(undefined8 *)(pbVar25 + 0x10) = uVar18;
        }
        else {
          func_0x04885070(pbVar25 + 8,*(undefined8 *)(pbVar16 + 0xa0),
                          *(undefined8 *)(pbVar16 + 0x98));
        }
      }
      *(undefined8 *)pbVar25 = *(undefined8 *)pbStack_a0;
      *(byte **)(pbVar25 + 0x28) = pbVar27 + 0x20;
      *(byte **)(pbVar25 + 0x30) = pbVar27;
      LOCK();
      *(long *)(pbVar27 + 8) = *(long *)(pbVar27 + 8) + 1;
      UNLOCK();
      pbVar25 = pbVar25 + 0x38;
      *(byte **)(pbVar29 + 0x90) = pbVar25;
      goto LAB_09f09a17;
    }
    lVar24 = (long)pbVar25 - *(long *)(pbVar29 + 0x88);
    uVar31 = (lVar24 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar25 = pbVar27;
    if (uVar31 < 0x492492492492493) {
      lVar20 = (long)*(byte **)(pbVar29 + 0x98) - *(long *)(pbVar29 + 0x88) >> 3;
      uVar19 = lVar20 * -0x2492492492492492;
      if (uVar31 < uVar19) {
        uVar31 = uVar19;
      }
      pbStack_f0 = pbVar29 + 0x88;
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        uVar31 = 0x492492492492492;
      }
      pbStack_c8 = pbStack_f0;
      if (uVar31 == 0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar31) goto LAB_09f09b53;
        puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar31 * 0x38,0);
          puVar17 = (undefined8 *)0x0;
        }
      }
      pbVar23 = (byte *)((long)puVar17 + lVar24);
      puStack_d0 = puVar17 + uVar31 * 7;
      puVar4 = (undefined8 *)((long)puVar17 + lVar24 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar24) = 0;
      ((undefined8 *)((long)puVar17 + lVar24))[1] = 0;
      *(undefined8 *)((long)puVar17 + lVar24 + 0x20) = 0;
      pbStack_d8 = pbVar23;
      puStack_e8 = puVar17;
      pbStack_e0 = pbVar23;
      if (pbVar23 != pbStack_a0) {
        puVar32 = (uint *)((long)puVar17 + lVar24 + 8);
        if ((*puStack_90 & 1) == 0) {
          *(undefined8 *)((long)puVar17 + lVar24 + 0x18) = *(undefined8 *)(puStack_90 + 4);
          uVar11 = puStack_90[1];
          uVar12 = puStack_90[2];
          uVar13 = puStack_90[3];
          *puVar32 = *puStack_90;
          *(uint *)((long)puVar17 + lVar24 + 0xc) = uVar11;
          *(uint *)((long)puVar17 + lVar24 + 0x10) = uVar12;
          *(uint *)((long)puVar17 + lVar24 + 0x14) = uVar13;
        }
        else {
          func_0x04885070(puVar32,*(undefined8 *)(pbVar16 + 0xa0),*(undefined8 *)(pbVar16 + 0x98));
        }
      }
      pbVar25 = pbStack_f0;
      *(undefined8 *)pbVar23 = *(undefined8 *)pbStack_a0;
      *(byte **)(pbVar23 + 0x28) = pbVar27 + 0x20;
      *(byte **)(pbVar23 + 0x30) = pbVar27;
      LOCK();
      *(long *)(pbVar27 + 8) = *(long *)(pbVar27 + 8) + 1;
      UNLOCK();
      pbStack_d8 = pbStack_d8 + 0x38;
      puVar17 = *(undefined8 **)(pbVar29 + 0x88);
      puVar4 = *(undefined8 **)(pbVar29 + 0x90);
      pbVar23 = pbStack_e0 + ((long)puVar17 - (long)puVar4);
      pbVar30 = pbVar23;
      puVar21 = puVar17;
      if ((long)puVar17 - (long)puVar4 != 0) {
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
          *(undefined8 *)(pbVar30 + 0x18) = puVar21[3];
          uVar18 = puVar21[2];
          *(undefined8 *)(pbVar30 + 8) = puVar21[1];
          *(undefined8 *)(pbVar30 + 0x10) = uVar18;
          *(undefined2 *)(puVar21 + 1) = 0;
          *(undefined8 *)pbVar30 = *puVar21;
          uVar18 = puVar21[6];
          *(undefined8 *)(pbVar30 + 0x28) = puVar21[5];
          *(undefined8 *)(pbVar30 + 0x30) = uVar18;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          pbVar30 = pbVar30 + 0x38;
        } while (puVar21 != puVar4);
        do {
          plVar6 = (long *)puVar17[6];
          if (plVar6 == (long *)0x0) {
LAB_09f099a4:
            bVar5 = *(byte *)(puVar17 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar24 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar24 != 0) goto LAB_09f099a4;
            (**(code **)(*plVar6 + 0x10))(plVar6);
            func_0x0412c2d0(plVar6);
            bVar5 = *(byte *)(puVar17 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar17[3],puVar17[1] & 0xfffffffffffffffe);
          }
          puVar17 = puVar17 + 7;
        } while (puVar17 != puVar4);
        puVar17 = *(undefined8 **)pbVar25;
      }
      pbVar25 = pbStack_d8;
      *(byte **)(pbVar29 + 0x88) = pbVar23;
      *(byte **)(pbVar29 + 0x90) = pbStack_d8;
      lVar24 = *(long *)(pbVar29 + 0x98);
      *(undefined8 **)(pbVar29 + 0x98) = puStack_d0;
      if (puVar17 != (undefined8 *)0x0) {
        func_0x0412a280(puVar17,lVar24 - (long)puVar17);
      }
LAB_09f09a17:
      pbVar30 = pbStack_80;
      pbVar23 = pbStack_88;
      *(byte **)(pbVar29 + 0x90) = pbVar25;
      uVar8 = *(undefined4 *)pbVar29;
      uVar9 = *(undefined4 *)(pbVar29 + 4);
      uVar10 = *(undefined4 *)(pbVar29 + 8);
      uVar14 = *(undefined4 *)(pbVar29 + 0xc);
      if (*(long *)(pbVar29 + 8) != 0) {
        LOCK();
        plVar6 = (long *)(*(long *)(pbVar29 + 8) + 8);
        *plVar6 = *plVar6 + 1;
        UNLOCK();
      }
      pbVar25 = pbVar27 + 8;
      plVar6 = *(long **)(pbVar16 + 0x78);
      *(undefined4 *)(pbVar16 + 0x70) = uVar8;
      *(undefined4 *)(pbVar16 + 0x74) = uVar9;
      *(undefined4 *)(pbVar16 + 0x78) = uVar10;
      *(undefined4 *)(pbVar16 + 0x7c) = uVar14;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar24 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar24 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          func_0x0412c2d0(plVar6);
        }
      }
      pbVar16[0x80] = pbVar29[0xa1];
      LOCK();
      lVar24 = *(long *)pbVar25;
      *(long *)pbVar25 = *(long *)pbVar25 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*(long *)pbVar27 + 0x10))(pbVar27);
        func_0x0412c2d0(pbVar27);
        LOCK();
        lVar24 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar24 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      if (lVar24 == 0) {
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        func_0x0412c2d0(pbVar16);
        LOCK();
        lVar24 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar24 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      if (lVar24 == 0) {
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        func_0x0412c2d0(pbVar16);
      }
      return pbVar23;
    }
  }
  else {
    lVar24 = (long)pbVar30 - (long)pbStack_a8;
    uVar31 = (lVar24 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar31) goto LAB_09f09b5d;
    lVar20 = (long)*(byte **)(pbStack_f0 + 200) - (long)pbStack_a8 >> 3;
    uVar19 = lVar20 * -0x6186186186186186;
    if (uVar31 < uVar19) {
      uVar31 = uVar19;
    }
    pbVar25 = pbStack_f0 + 0xb8;
    if (0xc30c30c30c30c2 < (ulong)(lVar20 * -0x30c30c30c30c30c3)) {
      uVar31 = 0x186186186186186;
    }
    pbStack_c8 = pbVar25;
    if (uVar31 == 0) {
      puVar17 = (undefined8 *)0x0;
LAB_09f0939d:
      pbStack_e0 = (byte *)(lVar24 + (long)puVar17);
      puStack_d0 = puVar17 + uVar31 * 0x15;
      puStack_e8 = puVar17;
      pbStack_d8 = pbStack_e0;
      func_0x09f0b620(pbStack_e0);
      pbVar30 = pbStack_d8 + 0xa8;
      lVar24 = *(long *)(pbVar29 + 0xb8);
      lVar20 = *(long *)(pbVar29 + 0xc0);
      pbVar23 = pbStack_e0 + (lVar24 - lVar20);
      if (lVar24 != lVar20) {
        lVar22 = 0;
        pbStack_a8 = pbVar25;
        do {
          uVar18 = ((undefined8 *)(lVar24 + lVar22))[1];
          *(undefined8 *)(pbVar23 + lVar22) = *(undefined8 *)(lVar24 + lVar22);
          *(undefined8 *)(pbVar23 + lVar22 + 8) = uVar18;
          *(undefined8 *)(lVar24 + lVar22) = 0;
          ((undefined8 *)(lVar24 + lVar22))[1] = 0;
          pbVar29 = pbVar23 + lVar22 + 0x20;
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
          pbVar29 = pbVar23 + lVar22 + 0x10;
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
          pbVar29 = pbVar23 + lVar22 + 0x30;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          *(undefined8 *)(pbVar23 + lVar22 + 0x28) = *(undefined8 *)(lVar24 + 0x28 + lVar22);
          puVar3 = (undefined4 *)(lVar24 + 0x18 + lVar22);
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          pbVar29 = pbVar23 + lVar22 + 0x18;
          *(undefined4 *)pbVar29 = *puVar3;
          *(undefined4 *)(pbVar29 + 4) = uVar8;
          *(undefined4 *)(pbVar29 + 8) = uVar9;
          *(undefined4 *)(pbVar29 + 0xc) = uVar10;
          *(undefined2 *)(lVar24 + 0x18 + lVar22) = 0;
          *(undefined8 *)(pbVar23 + lVar22 + 0x10) = *(undefined8 *)(lVar24 + 0x10 + lVar22);
          func_0x04167a20(pbVar23 + lVar22 + 0x38,lVar24 + lVar22 + 0x38);
          puVar17 = (undefined8 *)(lVar24 + 0x40 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar23 + lVar22 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar23 + lVar22 + 0x40 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar24 + 0x50 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar23 + lVar22 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar23 + lVar22 + 0x50 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar24 + 0x60 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar23 + lVar22 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar23 + lVar22 + 0x60 + 8) = uVar18;
          puVar17 = (undefined8 *)(lVar24 + 0x60 + lVar22);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar23 + lVar22 + 0x70) = *(undefined8 *)(lVar24 + 0x70 + lVar22);
          puVar17 = (undefined8 *)(lVar24 + 0x78 + lVar22);
          uVar18 = puVar17[1];
          *(undefined8 *)(pbVar23 + lVar22 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar23 + lVar22 + 0x78 + 8) = uVar18;
          pbVar29 = pbVar23 + lVar22 + 0x88;
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
          pbVar29 = pbVar23 + lVar22 + 0x98;
          pbVar29[0] = 0;
          pbVar29[1] = 0;
          pbVar29[2] = 0;
          pbVar29[3] = 0;
          pbVar29[4] = 0;
          pbVar29[5] = 0;
          pbVar29[6] = 0;
          pbVar29[7] = 0;
          puVar3 = (undefined4 *)(lVar24 + 0x88 + lVar22);
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          pbVar29 = pbVar23 + lVar22 + 0x88;
          *(undefined4 *)pbVar29 = *puVar3;
          *(undefined4 *)(pbVar29 + 4) = uVar8;
          *(undefined4 *)(pbVar29 + 8) = uVar9;
          *(undefined4 *)(pbVar29 + 0xc) = uVar10;
          *(undefined8 *)(pbVar23 + lVar22 + 0x98) = *(undefined8 *)(lVar24 + 0x98 + lVar22);
          puVar17 = (undefined8 *)(lVar24 + 0x88 + lVar22);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar24 + 0x98 + lVar22) = 0;
          *(undefined2 *)(pbVar23 + lVar22 + 0xa0) = *(undefined2 *)(lVar24 + 0xa0 + lVar22);
          lVar2 = lVar24 + lVar22;
          lVar22 = lVar22 + 0xa8;
        } while (lVar2 + 0xa8 != lVar20);
        do {
          func_0x09f0b7a0(lVar24);
          lVar24 = lVar24 + 0xa8;
        } while (lVar24 != lVar20);
        lVar24 = *(long *)pbStack_a8;
      }
      pbVar29 = pbStack_f0;
      *(byte **)(pbStack_f0 + 0xb8) = pbVar23;
      *(byte **)(pbStack_f0 + 0xc0) = pbVar30;
      lVar20 = *(long *)(pbStack_f0 + 200);
      *(undefined8 **)(pbStack_f0 + 200) = puStack_d0;
      if (lVar24 != 0) {
        func_0x0412a280(lVar24,lVar20 - lVar24);
      }
      goto LAB_09f09576;
    }
    if (uVar31 < 0x186186186186187) {
      puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0xa8);
      if (puVar17 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar31 * 0xa8,0);
        puVar17 = (undefined8 *)0x0;
      }
      goto LAB_09f0939d;
    }
LAB_09f09b53:
    func_0x04882eb0();
  }
  func_0x09f0b9c0();
LAB_09f09b5d:
  uVar18 = func_0x09f0b790();
  if ((*pbVar23 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar25 + 0x18),*(ulong *)(pbVar25 + 8) & 0xfffffffffffffffe);
  }
  func_0x09f0b900(&puStack_e8);
  func_0x09f09cb0(pbVar27);
  func_0x09f09ce0(pbVar16);
  func_0x09f09d10(pbVar16);
  _Unwind_Resume(uVar18);
  pcVar7 = (code *)swi(3);
  pbVar16 = (byte *)(*pcVar7)();
  return pbVar16;
}


