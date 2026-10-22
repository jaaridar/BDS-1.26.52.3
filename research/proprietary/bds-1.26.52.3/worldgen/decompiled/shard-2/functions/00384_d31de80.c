/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd41de80 (ELF vaddr 0xd31de80)
 * Label: callee2-of:0xd317f90
 * Body:  [[0d41de80, 0d41e12c] [0d41e130, 0d41e1a1] [0d41e1b0, 0d41e8aa] [0d41e8b0, 0d41e8ed] [0d41e8f0, 0d41eab7] [0d41eb90, 0d41ebb6]]
 * Ghidra: FUN_0d41de80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0d41de80(byte *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  byte bVar6;
  long *plVar7;
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
  long lVar23;
  byte *pbVar24;
  long lVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  ulong uVar32;
  uint *puVar33;
  bool bVar34;
  undefined1 uStack_a1;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined8 *puStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  uint *puStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  
  pbStack_a0 = param_1;
  pbVar17 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (pbVar17 == (byte *)0x0) {
    func_0x0eec74c0(0x1c0,0);
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
  *(undefined **)pbVar17 = &UNK_0f471128;
  puStack_98 = (undefined8 *)0x0;
  pbStack_90 = (byte *)0x0;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    puStack_98 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_3)(param_3,&puStack_98);
    puStack_98 = (undefined8 *)*param_3;
  }
  *param_3 = 0;
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
  func_0x04aa75f0(pbVar17 + 0x70,&uStack_a1,&UNK_01254d89);
  pbVar17[0x80] = 0;
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
  *(undefined **)(pbVar17 + 0x20) = &UNK_0f471178;
  ppuVar5 = (undefined8 **)(pbVar17 + 0x170);
  pbVar17[0x170] = 0;
  pbVar17[0x171] = 0;
  pbVar17[0x172] = 0;
  pbVar17[0x173] = 0;
  pbVar17[0x174] = 0;
  pbVar17[0x175] = 0;
  pbVar17[0x176] = 0;
  pbVar17[0x177] = 0;
  pbVar17[0x178] = 0;
  pbVar17[0x179] = 0;
  pbVar17[0x17a] = 0;
  pbVar17[0x17b] = 0;
  pbVar17[0x17c] = 0;
  pbVar17[0x17d] = 0;
  pbVar17[0x17e] = 0;
  pbVar17[0x17f] = 0;
  pbVar17[0x1b0] = 0;
  if (ppuVar5 != &puStack_98) {
    if (puStack_98 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_98)(&puStack_98,ppuVar5);
      puVar18 = puStack_98;
    }
    puStack_98 = (undefined8 *)0x0;
    *ppuVar5 = puVar18;
  }
  pbVar30 = pbVar17 + 0x20;
  puStack_48 = (uint *)(pbVar17 + 0x90);
  if (pbVar17 + 0x88 != &DAT_0f552108) {
    if ((*puStack_48 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        *(undefined8 *)(pbVar17 + 0xa0) = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puStack_48 = _DAT_0f552110;
        *(undefined4 *)(pbVar17 + 0x94) = uVar9;
        *(undefined4 *)(pbVar17 + 0x98) = uVar10;
        *(undefined4 *)(pbVar17 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puStack_48,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar34 = (_DAT_0f552110 & 1) != 0;
      uVar19 = 0xf552111;
      if (bVar34) {
        uVar19 = _DAT_0f552120;
      }
      uVar32 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar34) {
        uVar32 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puStack_48,uVar19,uVar32);
    }
  }
  pbVar28 = pbVar17 + 8;
  *(undefined8 *)(pbVar17 + 0x88) = _DAT_0f552108;
  pbVar17[0xa8] = 0;
  pbVar17[0xa9] = 0;
  pbVar17[0xaa] = 0;
  pbVar17[0xab] = 0;
  pbVar17[0xac] = 0;
  pbVar17[0xad] = 0;
  pbVar17[0xae] = 0;
  pbVar17[0xaf] = 0;
  if (puStack_98 != (undefined8 *)0x0) {
    (*(code *)puStack_98[1])(&puStack_98);
  }
  LOCK();
  *(long *)pbVar28 = *(long *)pbVar28 + 1;
  UNLOCK();
  pbStack_50 = pbVar17 + 0x88;
  pbStack_38 = pbVar28;
  pbVar28 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar28 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar28[8] = 0;
  pbVar28[9] = 0;
  pbVar28[10] = 0;
  pbVar28[0xb] = 0;
  pbVar28[0xc] = 0;
  pbVar28[0xd] = 0;
  pbVar28[0xe] = 0;
  pbVar28[0xf] = 0;
  pbVar28[0x10] = 0;
  pbVar28[0x11] = 0;
  pbVar28[0x12] = 0;
  pbVar28[0x13] = 0;
  pbVar28[0x14] = 0;
  pbVar28[0x15] = 0;
  pbVar28[0x16] = 0;
  pbVar28[0x17] = 0;
  *(undefined **)pbVar28 = &UNK_0f471270;
  pbVar28[0x30] = 0;
  pbVar28[0x31] = 0;
  pbVar28[0x32] = 0;
  pbVar28[0x33] = 0;
  pbVar28[0x34] = 0;
  pbVar28[0x35] = 0;
  pbVar28[0x36] = 0;
  pbVar28[0x37] = 0;
  pbVar28[0x38] = 0;
  pbVar28[0x39] = 0;
  pbVar28[0x3a] = 0;
  pbVar28[0x3b] = 0;
  pbVar28[0x3c] = 0;
  pbVar28[0x3d] = 0;
  pbVar28[0x3e] = 0;
  pbVar28[0x3f] = 0;
  *(undefined **)(pbVar28 + 0x20) = &UNK_0f4712c0;
  *(byte **)(pbVar28 + 0x70) = pbVar30;
  *(byte **)(pbVar28 + 0x78) = pbVar17;
  LOCK();
  *(long *)(pbVar17 + 8) = *(long *)(pbVar17 + 8) + 1;
  UNLOCK();
  pbStack_58 = *(byte **)(pbStack_a0 + 0xb8);
  pbVar31 = *(byte **)(pbStack_a0 + 0xc0);
  pbVar26 = pbVar17;
  pbVar24 = pbVar28;
  pbStack_40 = pbVar30;
  if (pbStack_58 != pbVar31) {
    lVar25 = *param_2;
    pbVar24 = (byte *)((long)param_2 + 9);
    pbVar30 = pbStack_58 + 0x19;
    do {
      if (*(long *)(pbVar30 + -9) == lVar25) {
        pbVar26 = pbVar30 + -9;
        if ((*(long **)(pbVar30 + 0x17) != param_2) || (pbVar26 != (byte *)param_2[4])) {
          bVar6 = pbVar30[-1];
          if ((bVar6 & 1) == 0) {
            uVar32 = (ulong)(bVar6 >> 1);
            uVar20 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0d41e197;
LAB_0d41e1be:
            if (uVar32 != param_2[2]) goto LAB_0d41e13d;
          }
          else {
            uVar32 = *(ulong *)(pbVar30 + 7);
            uVar20 = (ulong)*(byte *)(param_2 + 1);
            if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0d41e1be;
LAB_0d41e197:
            if (uVar32 != uVar20 >> 1) goto LAB_0d41e13d;
          }
          pbVar29 = pbVar30;
          if ((bVar6 & 1) != 0) {
            pbVar29 = *(byte **)(pbVar30 + 0xf);
          }
          pbVar27 = pbVar24;
          if ((uVar20 & 1) != 0) {
            pbVar27 = (byte *)param_2[3];
          }
          iVar16 = func_0x0eee3000(pbVar29,pbVar27);
          if (iVar16 != 0) goto LAB_0d41e13d;
          *(long **)(pbVar30 + 0x17) = param_2;
          param_2[4] = (long)pbVar26;
        }
        pbVar30 = pbVar30 + -0x19;
        goto LAB_0d41e621;
      }
LAB_0d41e13d:
      pbVar30[0x17] = 0;
      pbVar30[0x18] = 0;
      pbVar30[0x19] = 0;
      pbVar30[0x1a] = 0;
      pbVar30[0x1b] = 0;
      pbVar30[0x1c] = 0;
      pbVar30[0x1d] = 0;
      pbVar30[0x1e] = 0;
      pbVar29 = pbVar30 + 0x8f;
      pbVar30 = pbVar30 + 0xa8;
    } while (pbVar29 != pbVar31);
  }
  pbVar30 = pbStack_a0;
  if (pbVar31 < *(byte **)(pbStack_a0 + 200)) {
    func_0x0d4edcc0(pbVar31);
    pbVar31 = pbVar31 + 0xa8;
    *(byte **)(pbVar30 + 0xc0) = pbVar31;
LAB_0d41e4a6:
    *(byte **)(pbVar30 + 0xc0) = pbVar31;
    func_0x0b63b6d0(*(undefined8 *)(pbVar31 + -0xa8),param_2);
    lVar25 = *(long *)(pbVar30 + 0xc0);
    *(byte *)(lVar25 + -7) = pbVar30[0x60];
    pbVar24 = (byte *)(param_2 + 1);
    if ((long *)(lVar25 + -0x98) != param_2) {
      pbVar26 = (byte *)(lVar25 + -0x90);
      bVar6 = *pbVar24;
      if ((*pbVar26 & 1) == 0) {
        if ((bVar6 & 1) == 0) {
          *(long *)(lVar25 + -0x80) = param_2[3];
          uVar9 = *(undefined4 *)((long)param_2 + 0xc);
          lVar21 = param_2[2];
          uVar10 = *(undefined4 *)((long)param_2 + 0x14);
          *(undefined4 *)pbVar26 = *(undefined4 *)pbVar24;
          *(undefined4 *)(lVar25 + -0x8c) = uVar9;
          *(int *)(lVar25 + -0x88) = (int)lVar21;
          *(undefined4 *)(lVar25 + -0x84) = uVar10;
        }
        else {
          func_0x04885070(pbVar26,param_2[3],param_2[2]);
        }
      }
      else {
        bVar34 = (bVar6 & 1) != 0;
        lVar21 = (long)param_2 + 9;
        if (bVar34) {
          lVar21 = param_2[3];
        }
        uVar32 = (ulong)(bVar6 >> 1);
        if (bVar34) {
          uVar32 = param_2[2];
        }
        func_0x04885120(pbVar26,lVar21,uVar32);
      }
    }
    *(long *)(lVar25 + -0x98) = *param_2;
    *(undefined8 *)(lVar25 + -0x78) = 0;
    FUN_04aa9390(&puStack_98,pbVar24,pbVar30[0x60]);
    lVar25 = *(long *)(pbVar30 + 0xc0);
    func_0x04167a70(lVar25 + -0x70,&puStack_98);
    *(byte **)(lVar25 + -0x68) = pbStack_90;
    *(byte **)(lVar25 + -0x60) = pbStack_88;
    *(undefined8 **)(lVar25 + -0x58) = puStack_80;
    *(byte **)(lVar25 + -0x50) = pbStack_78;
    uVar9 = (undefined4)uStack_70;
    uVar10 = uStack_70._4_4_;
    uVar11 = (undefined4)uStack_68;
    uVar15 = uStack_68._4_4_;
    uStack_70 = 0;
    uStack_68 = (byte *)0x0;
    plVar7 = *(long **)(lVar25 + -0x40);
    *(undefined4 *)(lVar25 + -0x48) = uVar9;
    *(undefined4 *)(lVar25 + -0x44) = uVar10;
    *(undefined4 *)(lVar25 + -0x40) = uVar11;
    *(undefined4 *)(lVar25 + -0x3c) = uVar15;
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar21 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0412c2d0(plVar7);
      }
    }
    pbVar24 = uStack_68;
    *(undefined8 *)(lVar25 + -0x38) = uStack_60;
    if (uStack_68 != (byte *)0x0) {
      LOCK();
      pbVar26 = uStack_68 + 8;
      lVar25 = *(long *)pbVar26;
      *(long *)pbVar26 = *(long *)pbVar26 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)uStack_68 + 0x10))(uStack_68);
        FUN_0412c2d0(pbVar24);
      }
    }
    FUN_04167a40(&puStack_98);
    lVar25 = *(long *)(pbVar30 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 0;
    pbVar30 = (byte *)(lVar25 + -0xa8);
LAB_0d41e621:
    pbVar26 = *(byte **)(pbVar30 + 0x90);
    if (pbVar26 < *(byte **)(pbVar30 + 0x98)) {
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
      if (pbVar26 != pbStack_50) {
        if ((*puStack_48 & 1) == 0) {
          *(undefined8 *)(pbVar26 + 0x18) = *(undefined8 *)(puStack_48 + 4);
          uVar19 = *(undefined8 *)(puStack_48 + 2);
          *(undefined8 *)(pbVar26 + 8) = *(undefined8 *)puStack_48;
          *(undefined8 *)(pbVar26 + 0x10) = uVar19;
        }
        else {
          func_0x04885070(pbVar26 + 8,*(undefined8 *)(pbVar17 + 0xa0),
                          *(undefined8 *)(pbVar17 + 0x98));
        }
      }
      *(undefined8 *)pbVar26 = *(undefined8 *)pbStack_50;
      *(byte **)(pbVar26 + 0x28) = pbVar28 + 0x20;
      *(byte **)(pbVar26 + 0x30) = pbVar28;
      LOCK();
      *(long *)(pbVar28 + 8) = *(long *)(pbVar28 + 8) + 1;
      UNLOCK();
      pbVar26 = pbVar26 + 0x38;
      *(byte **)(pbVar30 + 0x90) = pbVar26;
      goto LAB_0d41e947;
    }
    lVar25 = (long)pbVar26 - *(long *)(pbVar30 + 0x88);
    uVar32 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar26 = pbVar28;
    if (uVar32 < 0x492492492492493) {
      lVar21 = (long)*(byte **)(pbVar30 + 0x98) - *(long *)(pbVar30 + 0x88) >> 3;
      uVar20 = lVar21 * -0x2492492492492492;
      if (uVar32 < uVar20) {
        uVar32 = uVar20;
      }
      pbStack_a0 = pbVar30 + 0x88;
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar32 = 0x492492492492492;
      }
      pbStack_78 = pbStack_a0;
      if (uVar32 == 0) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar32) goto LAB_0d41ea80;
        puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0x38);
        if (puVar18 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar32 * 0x38,0);
          puVar18 = (undefined8 *)0x0;
        }
      }
      pbVar24 = (byte *)((long)puVar18 + lVar25);
      puStack_80 = puVar18 + uVar32 * 7;
      puVar4 = (undefined8 *)((long)puVar18 + lVar25 + 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25) = 0;
      ((undefined8 *)((long)puVar18 + lVar25))[1] = 0;
      *(undefined8 *)((long)puVar18 + lVar25 + 0x20) = 0;
      pbStack_88 = pbVar24;
      puStack_98 = puVar18;
      pbStack_90 = pbVar24;
      if (pbVar24 != pbStack_50) {
        puVar33 = (uint *)((long)puVar18 + lVar25 + 8);
        if ((*puStack_48 & 1) == 0) {
          *(undefined8 *)((long)puVar18 + lVar25 + 0x18) = *(undefined8 *)(puStack_48 + 4);
          uVar12 = puStack_48[1];
          uVar13 = puStack_48[2];
          uVar14 = puStack_48[3];
          *puVar33 = *puStack_48;
          *(uint *)((long)puVar18 + lVar25 + 0xc) = uVar12;
          *(uint *)((long)puVar18 + lVar25 + 0x10) = uVar13;
          *(uint *)((long)puVar18 + lVar25 + 0x14) = uVar14;
        }
        else {
          func_0x04885070(puVar33,*(undefined8 *)(pbVar17 + 0xa0),*(undefined8 *)(pbVar17 + 0x98));
        }
      }
      pbVar26 = pbStack_a0;
      *(undefined8 *)pbVar24 = *(undefined8 *)pbStack_50;
      *(byte **)(pbVar24 + 0x28) = pbVar28 + 0x20;
      *(byte **)(pbVar24 + 0x30) = pbVar28;
      LOCK();
      *(long *)(pbVar28 + 8) = *(long *)(pbVar28 + 8) + 1;
      UNLOCK();
      pbStack_88 = pbStack_88 + 0x38;
      puVar18 = *(undefined8 **)(pbVar30 + 0x88);
      puVar4 = *(undefined8 **)(pbVar30 + 0x90);
      pbVar24 = pbStack_90 + ((long)puVar18 - (long)puVar4);
      pbVar31 = pbVar24;
      puVar22 = puVar18;
      if ((long)puVar18 - (long)puVar4 != 0) {
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
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar31 + 8) = puVar22[1];
          *(undefined8 *)(pbVar31 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar31 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar31 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar31 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar31 = pbVar31 + 0x38;
        } while (puVar22 != puVar4);
        do {
          plVar7 = (long *)puVar18[6];
          if (plVar7 == (long *)0x0) {
LAB_0d41e8d4:
            bVar6 = *(byte *)(puVar18 + 1);
          }
          else {
            LOCK();
            plVar1 = plVar7 + 1;
            lVar25 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar25 != 0) goto LAB_0d41e8d4;
            (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_0412c2d0(plVar7);
            bVar6 = *(byte *)(puVar18 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar18[3],puVar18[1] & 0xfffffffffffffffe);
          }
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar4);
        puVar18 = *(undefined8 **)pbVar26;
      }
      pbVar26 = pbStack_88;
      *(byte **)(pbVar30 + 0x88) = pbVar24;
      *(byte **)(pbVar30 + 0x90) = pbStack_88;
      lVar25 = *(long *)(pbVar30 + 0x98);
      *(undefined8 **)(pbVar30 + 0x98) = puStack_80;
      if (puVar18 != (undefined8 *)0x0) {
        func_0x0412a280(puVar18,lVar25 - (long)puVar18);
      }
LAB_0d41e947:
      pbVar31 = pbStack_38;
      pbVar24 = pbStack_40;
      *(byte **)(pbVar30 + 0x90) = pbVar26;
      uVar9 = *(undefined4 *)pbVar30;
      uVar10 = *(undefined4 *)(pbVar30 + 4);
      uVar11 = *(undefined4 *)(pbVar30 + 8);
      uVar15 = *(undefined4 *)(pbVar30 + 0xc);
      if (*(long *)(pbVar30 + 8) != 0) {
        LOCK();
        plVar7 = (long *)(*(long *)(pbVar30 + 8) + 8);
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      pbVar26 = pbVar28 + 8;
      plVar7 = *(long **)(pbVar17 + 0x78);
      *(undefined4 *)(pbVar17 + 0x70) = uVar9;
      *(undefined4 *)(pbVar17 + 0x74) = uVar10;
      *(undefined4 *)(pbVar17 + 0x78) = uVar11;
      *(undefined4 *)(pbVar17 + 0x7c) = uVar15;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          FUN_0412c2d0(plVar7);
        }
      }
      pbVar17[0x80] = pbVar30[0xa1];
      LOCK();
      lVar25 = *(long *)pbVar26;
      *(long *)pbVar26 = *(long *)pbVar26 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar28 + 0x10))(pbVar28);
        FUN_0412c2d0(pbVar28);
        LOCK();
        lVar25 = *(long *)pbVar31;
        *(long *)pbVar31 = *(long *)pbVar31 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *(long *)pbVar31;
        *(long *)pbVar31 = *(long *)pbVar31 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        FUN_0412c2d0(pbVar17);
        LOCK();
        lVar25 = *(long *)pbVar31;
        *(long *)pbVar31 = *(long *)pbVar31 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *(long *)pbVar31;
        *(long *)pbVar31 = *(long *)pbVar31 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17);
        FUN_0412c2d0(pbVar17);
      }
      return pbVar24;
    }
  }
  else {
    lVar25 = (long)pbVar31 - (long)pbStack_58;
    uVar32 = (lVar25 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar32) goto LAB_0d41ea8a;
    lVar21 = (long)*(byte **)(pbStack_a0 + 200) - (long)pbStack_58 >> 3;
    uVar20 = lVar21 * -0x6186186186186186;
    if (uVar32 < uVar20) {
      uVar32 = uVar20;
    }
    pbVar26 = pbStack_a0 + 0xb8;
    if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
      uVar32 = 0x186186186186186;
    }
    pbStack_78 = pbVar26;
    if (uVar32 == 0) {
      puVar18 = (undefined8 *)0x0;
LAB_0d41e2cd:
      pbStack_90 = (byte *)(lVar25 + (long)puVar18);
      puStack_80 = puVar18 + uVar32 * 0x15;
      puStack_98 = puVar18;
      pbStack_88 = pbStack_90;
      func_0x0d4edcc0(pbStack_90);
      pbVar31 = pbStack_88 + 0xa8;
      lVar25 = *(long *)(pbVar30 + 0xb8);
      lVar21 = *(long *)(pbVar30 + 0xc0);
      pbVar24 = pbStack_90 + (lVar25 - lVar21);
      if (lVar25 != lVar21) {
        lVar23 = 0;
        pbStack_58 = pbVar26;
        do {
          uVar19 = ((undefined8 *)(lVar25 + lVar23))[1];
          *(undefined8 *)(pbVar24 + lVar23) = *(undefined8 *)(lVar25 + lVar23);
          *(undefined8 *)(pbVar24 + lVar23 + 8) = uVar19;
          *(undefined8 *)(lVar25 + lVar23) = 0;
          ((undefined8 *)(lVar25 + lVar23))[1] = 0;
          pbVar30 = pbVar24 + lVar23 + 0x20;
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
          pbVar30 = pbVar24 + lVar23 + 0x10;
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
          pbVar30 = pbVar24 + lVar23 + 0x30;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          *(undefined8 *)(pbVar24 + lVar23 + 0x28) = *(undefined8 *)(lVar25 + 0x28 + lVar23);
          puVar3 = (undefined4 *)(lVar25 + 0x18 + lVar23);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          pbVar30 = pbVar24 + lVar23 + 0x18;
          *(undefined4 *)pbVar30 = *puVar3;
          *(undefined4 *)(pbVar30 + 4) = uVar9;
          *(undefined4 *)(pbVar30 + 8) = uVar10;
          *(undefined4 *)(pbVar30 + 0xc) = uVar11;
          *(undefined2 *)(lVar25 + 0x18 + lVar23) = 0;
          *(undefined8 *)(pbVar24 + lVar23 + 0x10) = *(undefined8 *)(lVar25 + 0x10 + lVar23);
          func_0x04167a20(pbVar24 + lVar23 + 0x38,lVar25 + lVar23 + 0x38);
          puVar18 = (undefined8 *)(lVar25 + 0x40 + lVar23);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar24 + lVar23 + 0x40) = *puVar18;
          *(undefined8 *)(pbVar24 + lVar23 + 0x40 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar25 + 0x50 + lVar23);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar24 + lVar23 + 0x50) = *puVar18;
          *(undefined8 *)(pbVar24 + lVar23 + 0x50 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar25 + 0x60 + lVar23);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar24 + lVar23 + 0x60) = *puVar18;
          *(undefined8 *)(pbVar24 + lVar23 + 0x60 + 8) = uVar19;
          puVar18 = (undefined8 *)(lVar25 + 0x60 + lVar23);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(pbVar24 + lVar23 + 0x70) = *(undefined8 *)(lVar25 + 0x70 + lVar23);
          puVar18 = (undefined8 *)(lVar25 + 0x78 + lVar23);
          uVar19 = puVar18[1];
          *(undefined8 *)(pbVar24 + lVar23 + 0x78) = *puVar18;
          *(undefined8 *)(pbVar24 + lVar23 + 0x78 + 8) = uVar19;
          pbVar30 = pbVar24 + lVar23 + 0x88;
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
          pbVar30 = pbVar24 + lVar23 + 0x98;
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
          puVar3 = (undefined4 *)(lVar25 + 0x88 + lVar23);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          pbVar30 = pbVar24 + lVar23 + 0x88;
          *(undefined4 *)pbVar30 = *puVar3;
          *(undefined4 *)(pbVar30 + 4) = uVar9;
          *(undefined4 *)(pbVar30 + 8) = uVar10;
          *(undefined4 *)(pbVar30 + 0xc) = uVar11;
          *(undefined8 *)(pbVar24 + lVar23 + 0x98) = *(undefined8 *)(lVar25 + 0x98 + lVar23);
          puVar18 = (undefined8 *)(lVar25 + 0x88 + lVar23);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)(lVar25 + 0x98 + lVar23) = 0;
          *(undefined2 *)(pbVar24 + lVar23 + 0xa0) = *(undefined2 *)(lVar25 + 0xa0 + lVar23);
          lVar2 = lVar25 + lVar23;
          lVar23 = lVar23 + 0xa8;
        } while (lVar2 + 0xa8 != lVar21);
        do {
          func_0x0d4e9630(lVar25);
          lVar25 = lVar25 + 0xa8;
        } while (lVar25 != lVar21);
        lVar25 = *(long *)pbStack_58;
      }
      pbVar30 = pbStack_a0;
      *(byte **)(pbStack_a0 + 0xb8) = pbVar24;
      *(byte **)(pbStack_a0 + 0xc0) = pbVar31;
      lVar21 = *(long *)(pbStack_a0 + 200);
      *(undefined8 **)(pbStack_a0 + 200) = puStack_80;
      if (lVar25 != 0) {
        func_0x0412a280(lVar25,lVar21 - lVar25);
      }
      goto LAB_0d41e4a6;
    }
    if (uVar32 < 0x186186186186187) {
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32 * 0xa8);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar32 * 0xa8,0);
        puVar18 = (undefined8 *)0x0;
      }
      goto LAB_0d41e2cd;
    }
LAB_0d41ea80:
    func_0x04882eb0();
  }
  func_0x0d4edf00();
LAB_0d41ea8a:
  uVar19 = func_0x0d4ede30();
  if ((*pbVar24 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar26 + 0x18),*(ulong *)(pbVar26 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d4ede40(&puStack_98);
  func_0x0d4e9790(pbVar28);
  func_0x0d4eacd0(pbVar17);
  func_0x0d4ead00(pbVar17);
  func_0x0eee2d70(uVar19);
  pcVar8 = (code *)swi(3);
  pbVar17 = (byte *)(*pcVar8)();
  return pbVar17;
}


