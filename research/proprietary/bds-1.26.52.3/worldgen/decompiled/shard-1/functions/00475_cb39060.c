/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc39060 (ELF vaddr 0xcb39060)
 * Label: caller-of-callee
 * Body:  [[0cc39060, 0cc398cc] [0cc398d0, 0cc39933] [0cc39940, 0cc3a02d] [0cc3a030, 0cc3a06e] [0cc3a070, 0cc3a2f0] [0cc3a567, 0cc3a5e9]]
 * Ghidra: FUN_0cc39060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc39060(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long **pplVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 *puVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  long *plVar26;
  byte *pbVar27;
  byte *pbVar28;
  long *plVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  bool bVar32;
  undefined1 uStack_1d9;
  long *plStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  long *plStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined2 uStack_187;
  undefined1 uStack_185;
  undefined4 uStack_184;
  long lStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  long *plStack_168;
  long *plStack_160;
  ulong auStack_158 [4];
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_118;
  byte *pbStack_110;
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
  
  plVar29 = (long *)0xcbf29ce484222325;
  uVar18 = *param_2;
  plStack_108 = (long *)0x0;
  uStack_100 = _DAT_01d4b4f8;
  uStack_f8 = _UNK_01d4b500;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pbVar25 = (byte *)((long)&uStack_100 + 1);
  uVar12 = func_0x0eee2e90(pbVar25);
  if (uVar12 != 0) {
    uVar19 = (ulong)((uint)uVar12 & 7);
    if (7 < uVar12) {
      uVar12 = uVar12 & 0xfffffffffffffff8;
      do {
        plVar29 = (long *)(((((((((long)plVar29 * 0x100000001b3 ^ (ulong)*pbVar25) * 0x100000001b3 ^
                                (ulong)pbVar25[1]) * 0x100000001b3 ^ (ulong)pbVar25[2]) *
                               0x100000001b3 ^ (ulong)pbVar25[3]) * 0x100000001b3 ^
                             (ulong)pbVar25[4]) * 0x100000001b3 ^ (ulong)pbVar25[5]) * 0x100000001b3
                           ^ (ulong)pbVar25[6]) * 0x100000001b3 ^ (ulong)pbVar25[7]);
        pbVar25 = pbVar25 + 8;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
    }
    if (uVar19 != 0) {
      uVar12 = 0;
      do {
        plVar29 = (long *)((long)plVar29 * 0x100000001b3 ^ (ulong)pbVar25[uVar12]);
        uVar12 = uVar12 + 1;
      } while (uVar19 != uVar12);
    }
  }
  plStack_b8 = (long *)&UNK_0f3fa258;
  plStack_108 = plVar29;
  uStack_b0 = param_3;
  plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar29 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar29[1] = 0;
  plVar29[2] = 0;
  *plVar29 = (long)&UNK_0f3fa070;
  plStack_1d8 = (long *)0x0;
  pbStack_1d0 = (byte *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_1d8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_1d8);
    plStack_1d8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
  plVar29[4] = (long)&UNK_0f2ccd78;
  plVar29[5] = 0;
  plVar29[6] = 0;
  plVar29[7] = 0;
  plVar29[8] = 0;
  plVar29[9] = 0;
  plVar29[10] = 0;
  plVar29[0xb] = 0;
  plVar29[0xc] = 0;
  *(undefined1 *)(plVar29 + 0xd) = 0;
  func_0x04aa75f0(plVar29 + 0xe,&lStack_198,&UNK_01254d89);
  *(undefined1 *)(plVar29 + 0x10) = 0;
  plVar17 = plVar29 + 0x11;
  plVar29[0x11] = 0;
  plVar29[0x12] = 0;
  plVar29[0x13] = 0;
  plVar29[0x14] = 0;
  plVar29[0x15] = 0;
  plVar29[0x16] = 0;
  plVar29[0x17] = 0xffffffff;
  plVar29[0x26] = 0;
  plVar29[0x27] = 0;
  plVar29[0x18] = 0;
  plVar29[0x19] = 0;
  plVar29[0x1a] = 0;
  plVar29[0x1b] = 0;
  plVar29[0x1c] = 0;
  plVar29[0x1d] = 0;
  plVar29[0x1e] = 0;
  plVar29[0x1f] = 0;
  plVar29[4] = (long)&UNK_0f3fa0c0;
  pplVar1 = (long **)(plVar29 + 0x2e);
  plVar29[0x2e] = 0;
  plVar29[0x2f] = 0;
  *(undefined1 *)(plVar29 + 0x36) = 0;
  if (pplVar1 != &plStack_1d8) {
    if (plStack_1d8 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1d8)(&plStack_1d8,pplVar1);
      plVar13 = plStack_1d8;
    }
    plStack_1d8 = (long *)0x0;
    *pplVar1 = plVar13;
  }
  plVar13 = plVar29 + 4;
  puVar2 = (uint *)(plVar29 + 0x12);
  if (plVar17 != (long *)&DAT_0f552108) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar29[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar2 = _DAT_0f552110;
        *(undefined4 *)((long)plVar29 + 0x94) = uVar7;
        *(undefined4 *)(plVar29 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar29 + 0x9c) = uVar9;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar23 = 0xf552111;
      if (bVar32) {
        lVar23 = _DAT_0f552120;
      }
      uVar12 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar12 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar2,lVar23,uVar12);
    }
  }
  plVar26 = plVar29 + 1;
  plVar29[0x11] = _DAT_0f552108;
  plVar29[0x15] = 0;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  LOCK();
  *plVar26 = *plVar26 + 1;
  UNLOCK();
  pbVar25 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar25 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar25 + 8) = 0;
  *(long *)((long)pbVar25 + 0x10) = 0;
  *(undefined **)pbVar25 = &UNK_0f3fa1b8;
  *(long *)((long)pbVar25 + 0x30) = 0;
  *(long *)((long)pbVar25 + 0x38) = 0;
  *(undefined **)((long)pbVar25 + 0x20) = &UNK_0f3fa208;
  *(long **)((long)pbVar25 + 0x70) = plVar13;
  *(long **)((long)pbVar25 + 0x78) = plVar29;
  LOCK();
  plVar29[1] = plVar29[1] + 1;
  UNLOCK();
  plStack_1d8 = (long *)((long)pbVar25 + 0x20);
  pbStack_1d0 = pbVar25;
  puVar14 = (undefined4 *)func_0x0cd30730(uVar18,&plStack_108,0);
  plVar15 = *(long **)(puVar14 + 0x24);
  if (plVar15 < *(long **)(puVar14 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 == plVar17) {
LAB_0cc3945a:
      *plVar15 = *plVar17;
      plVar15[5] = (long)pbVar25 + 0x20;
      plVar15[6] = (long)pbVar25;
LAB_0cc394c4:
      LOCK();
      *(long *)((long)pbVar25 + 8) = *(long *)((long)pbVar25 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puVar2 & 1) == 0) {
        plVar15[3] = plVar29[0x14];
        lVar23 = plVar29[0x13];
        plVar15[1] = *(long *)puVar2;
        plVar15[2] = lVar23;
        goto LAB_0cc3945a;
      }
      func_0x04885070(plVar15 + 1,plVar29[0x14],plVar29[0x13]);
      *plVar15 = *plVar17;
      plVar15[5] = (long)plStack_1d8;
      plVar15[6] = (long)pbStack_1d0;
      pbVar25 = pbStack_1d0;
      if (pbStack_1d0 != (byte *)0x0) goto LAB_0cc394c4;
    }
    plVar15 = plVar15 + 7;
    *(long **)(puVar14 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x0cd33e60(puVar14 + 0x22,plVar17,&plStack_1d8);
  }
  *(long **)(puVar14 + 0x24) = plVar15;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  if (*(long *)(puVar14 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar14 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar29[0xf];
  *(undefined4 *)(plVar29 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar29 + 0x74) = uVar8;
  *(undefined4 *)(plVar29 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar29 + 0x7c) = uVar10;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar15 = plVar17 + 1;
    lVar23 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  pbVar25 = pbStack_1d0;
  *(undefined1 *)(plVar29 + 0x10) = *(undefined1 *)((long)puVar14 + 0xa1);
  if (pbStack_1d0 != (byte *)0x0) {
    LOCK();
    plVar17 = (long *)((long)pbStack_1d0 + 8);
    lVar23 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*(long *)pbStack_1d0 + 0x10))(pbStack_1d0);
      func_0x0412c2d0(pbVar25);
    }
  }
  LOCK();
  lVar23 = *plVar26;
  *plVar26 = *plVar26 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plVar29 + 0x10))(plVar29);
    func_0x0412c2d0(plVar29);
    LOCK();
    lVar23 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar23 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
  }
  if (lVar23 == 0) {
    (**(code **)(*plVar29 + 0x10))(plVar29);
    func_0x0412c2d0(plVar29);
  }
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  pbVar25 = (byte *)(**(code **)(*plVar13 + 0x10))(plVar13,&uStack_138);
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  uStack_185 = 0;
  uStack_184 = 0;
  lStack_180 = 0;
  pbStack_178 = (byte *)0x0;
  uStack_190 = 0x6f6c6214;
  uStack_18c = 0x745f6b63;
  uStack_188 = 0x79;
  uStack_187 = 0x6570;
  lStack_198 = 0x44f76acb88a64eb7;
  uStack_70 = 0;
  uStack_100 = 0;
  lStack_78 = 0;
  plStack_108 = (long *)&UNK_0f3fa270;
  pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar16 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_1d8 = plStack_108;
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
  *(undefined **)pbVar16 = &UNK_0f3f6d20;
  pbStack_1d0 = (byte *)0x0;
  plStack_108 = (long *)0x0;
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
  func_0x04aa75f0(pbVar16 + 0x70,&uStack_1d9,&UNK_01254d89);
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
  *(undefined **)(pbVar16 + 0x20) = &UNK_0f3f6d70;
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
  if (plStack_1d8 == (long *)0x0) {
    plVar29 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1d8)(&plStack_1d8,pbVar16 + 0x170);
    plVar29 = plStack_1d8;
  }
  pbVar30 = pbVar16 + 8;
  *(long **)(pbVar16 + 0x170) = plVar29;
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  LOCK();
  *(long *)pbVar30 = *(long *)pbVar30 + 1;
  UNLOCK();
  pbStack_110 = pbVar30;
  plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar29 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar24 = pbStack_178;
  lVar23 = lStack_198;
  pbStack_c0 = pbVar16 + 0x20;
  plVar29[1] = 0;
  plVar29[2] = 0;
  *plVar29 = (long)&UNK_0f3f6e50;
  plVar29[6] = 0;
  plVar29[7] = 0;
  plVar29[4] = (long)&UNK_0f3f6ea0;
  plVar29[0xe] = (long)pbStack_c0;
  plVar29[0xf] = (long)pbVar16;
  LOCK();
  *(long *)(pbVar16 + 8) = *(long *)(pbVar16 + 8) + 1;
  UNLOCK();
  plStack_160 = plVar29 + 1;
  pbStack_118 = *(byte **)(pbVar25 + 0xb8);
  pbVar30 = *(byte **)(pbVar25 + 0xc0);
  pbStack_170 = pbVar25;
  plStack_168 = plVar29;
  if (pbStack_118 != pbVar30) {
    if ((uStack_190 & 1) == 0) {
      uVar12 = (ulong)((byte)uStack_190 >> 1);
      lVar20 = (long)&uStack_190 + 1;
    }
    else {
      uVar12 = CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)));
      lVar20 = lStack_180;
    }
    pbVar28 = pbStack_118 + 0x19;
    do {
      if (*(long *)(pbVar28 + -9) == lVar23) {
        pbVar25 = pbVar28 + -9;
        if ((*(long **)(pbVar28 + 0x17) == &lStack_198) && (pbVar25 == pbVar24)) {
LAB_0cc39d83:
          pbVar28 = pbVar28 + -0x19;
          goto LAB_0cc39d8c;
        }
        bVar4 = pbVar28[-1];
        if ((bVar4 & 1) == 0) {
          uVar19 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar19 = *(ulong *)(pbVar28 + 7);
        }
        if (uVar19 == uVar12) {
          pbVar27 = pbVar28;
          if ((bVar4 & 1) != 0) {
            pbVar27 = *(byte **)(pbVar28 + 0xf);
          }
          iVar11 = func_0x0eee3000(pbVar27,lVar20,uVar12);
          if (iVar11 == 0) {
            *(long **)(pbVar28 + 0x17) = &lStack_198;
            pbStack_178 = pbVar25;
            goto LAB_0cc39d83;
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
    } while (pbVar27 != pbVar30);
  }
  pbVar24 = pbStack_170;
  if (pbVar30 < *(byte **)(pbStack_170 + 200)) {
    func_0x0cca8080(pbVar30);
    pbVar30 = pbVar30 + 0xa8;
    *(byte **)(pbVar24 + 0xc0) = pbVar30;
LAB_0cc39c00:
    *(byte **)(pbVar24 + 0xc0) = pbVar30;
    func_0x0b63b6d0(*(undefined8 *)(pbVar30 + -0xa8),&lStack_198);
    lVar23 = *(long *)(pbVar24 + 0xc0);
    *(byte *)(lVar23 + -7) = pbVar24[0x60];
    if ((long *)(lVar23 + -0x98) != &lStack_198) {
      puVar2 = (uint *)(lVar23 + -0x90);
      if ((*(byte *)puVar2 & 1) == 0) {
        if ((uStack_190 & 1) == 0) {
          *(long *)(lVar23 + -0x80) = lStack_180;
          *puVar2 = uStack_190;
          *(undefined4 *)(lVar23 + -0x8c) = uStack_18c;
          *(uint *)(lVar23 + -0x88) = CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188));
          *(undefined4 *)(lVar23 + -0x84) = uStack_184;
        }
        else {
          func_0x04885070(puVar2,lStack_180,
                          CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188))))
          ;
        }
      }
      else {
        bVar32 = (uStack_190 & 1) != 0;
        lVar20 = (long)&uStack_190 + 1;
        if (bVar32) {
          lVar20 = lStack_180;
        }
        uVar12 = (ulong)((byte)uStack_190 >> 1);
        if (bVar32) {
          uVar12 = CONCAT44(uStack_184,CONCAT13(uStack_185,CONCAT21(uStack_187,uStack_188)));
        }
        func_0x04885120(puVar2,lVar20,uVar12);
      }
    }
    *(long *)(lVar23 + -0x98) = lStack_198;
    *(undefined8 *)(lVar23 + -0x78) = 0;
    func_0x04aa9390(&plStack_1d8,&uStack_190,pbVar24[0x60]);
    lVar23 = *(long *)(pbVar24 + 0xc0);
    func_0x04167a70(lVar23 + -0x70,&plStack_1d8);
    *(byte **)(lVar23 + -0x68) = pbStack_1d0;
    *(byte **)(lVar23 + -0x60) = pbStack_1c8;
    *(long **)(lVar23 + -0x58) = plStack_1c0;
    *(byte **)(lVar23 + -0x50) = pbStack_1b8;
    uVar7 = (undefined4)uStack_1b0;
    uVar8 = uStack_1b0._4_4_;
    uVar9 = (undefined4)uStack_1a8;
    uVar10 = uStack_1a8._4_4_;
    uStack_1b0 = 0;
    uStack_1a8 = (byte *)0x0;
    plVar17 = *(long **)(lVar23 + -0x40);
    *(undefined4 *)(lVar23 + -0x48) = uVar7;
    *(undefined4 *)(lVar23 + -0x44) = uVar8;
    *(undefined4 *)(lVar23 + -0x40) = uVar9;
    *(undefined4 *)(lVar23 + -0x3c) = uVar10;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar13 = plVar17 + 1;
      lVar20 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    pbVar30 = uStack_1a8;
    *(undefined8 *)(lVar23 + -0x38) = uStack_1a0;
    if (uStack_1a8 != (byte *)0x0) {
      LOCK();
      pbVar25 = uStack_1a8 + 8;
      lVar23 = *(long *)pbVar25;
      *(long *)pbVar25 = *(long *)pbVar25 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)uStack_1a8 + 0x10))(uStack_1a8);
        func_0x0412c2d0(pbVar30);
      }
    }
    func_0x04167a40(&plStack_1d8);
    lVar23 = *(long *)(pbVar24 + 0xc0);
    *(undefined1 *)(lVar23 + -8) = 0;
    pbVar28 = (byte *)(lVar23 + -0xa8);
LAB_0cc39d8c:
    pbVar24 = pbVar16 + 0x88;
    pbVar25 = *(byte **)(pbVar28 + 0x90);
    if (pbVar25 < *(byte **)(pbVar28 + 0x98)) {
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
      if (pbVar25 != pbVar24) {
        if ((pbVar16[0x90] & 1) == 0) {
          *(undefined8 *)(pbVar25 + 0x18) = *(undefined8 *)(pbVar16 + 0xa0);
          uVar18 = *(undefined8 *)(pbVar16 + 0x98);
          *(undefined8 *)(pbVar25 + 8) = *(undefined8 *)(pbVar16 + 0x90);
          *(undefined8 *)(pbVar25 + 0x10) = uVar18;
        }
        else {
          func_0x04885070(pbVar25 + 8,*(undefined8 *)(pbVar16 + 0xa0),
                          *(undefined8 *)(pbVar16 + 0x98));
        }
      }
      *(undefined8 *)pbVar25 = *(undefined8 *)pbVar24;
      *(long **)(pbVar25 + 0x28) = plVar29 + 4;
      *(long **)(pbVar25 + 0x30) = plStack_168;
      LOCK();
      plStack_168[1] = plStack_168[1] + 1;
      UNLOCK();
      pbVar25 = pbVar25 + 0x38;
      *(byte **)(pbVar28 + 0x90) = pbVar25;
      goto LAB_0cc3a0c9;
    }
    lVar23 = (long)pbVar25 - *(long *)(pbVar28 + 0x88);
    uVar12 = (lVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar25 = pbVar16;
    if (uVar12 < 0x492492492492493) {
      lVar20 = (long)*(byte **)(pbVar28 + 0x98) - *(long *)(pbVar28 + 0x88) >> 3;
      uVar19 = lVar20 * -0x2492492492492492;
      if (uVar12 < uVar19) {
        uVar12 = uVar19;
      }
      pbStack_1b8 = pbVar28 + 0x88;
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        uVar12 = 0x492492492492492;
      }
      pbStack_170 = pbStack_1b8;
      if (uVar12 == 0) {
        plVar17 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar12) goto LAB_0cc3a2b6;
        plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12 * 0x38);
        if (plVar17 == (long *)0x0) {
          func_0x0eec74c0(uVar12 * 0x38,0);
          plVar17 = (long *)0x0;
        }
      }
      pbVar25 = (byte *)((long)plVar17 + lVar23);
      plStack_1c0 = plVar17 + uVar12 * 7;
      puVar31 = (undefined8 *)((long)plVar17 + lVar23 + 0x10);
      *puVar31 = 0;
      puVar31[1] = 0;
      *(undefined8 *)((long)plVar17 + lVar23) = 0;
      ((undefined8 *)((long)plVar17 + lVar23))[1] = 0;
      *(undefined8 *)((long)plVar17 + lVar23 + 0x20) = 0;
      pbStack_1c8 = pbVar25;
      plStack_1d8 = plVar17;
      pbStack_1d0 = pbVar25;
      if (pbVar25 != pbVar24) {
        puVar14 = (undefined4 *)((long)plVar17 + lVar23 + 8);
        if ((pbVar16[0x90] & 1) == 0) {
          *(undefined8 *)((long)plVar17 + lVar23 + 0x18) = *(undefined8 *)(pbVar16 + 0xa0);
          uVar7 = *(undefined4 *)(pbVar16 + 0x94);
          uVar8 = *(undefined4 *)(pbVar16 + 0x98);
          uVar9 = *(undefined4 *)(pbVar16 + 0x9c);
          *puVar14 = *(undefined4 *)(pbVar16 + 0x90);
          *(undefined4 *)((long)plVar17 + lVar23 + 0xc) = uVar7;
          *(undefined4 *)((long)plVar17 + lVar23 + 0x10) = uVar8;
          *(undefined4 *)((long)plVar17 + lVar23 + 0x14) = uVar9;
        }
        else {
          func_0x04885070(puVar14,*(undefined8 *)(pbVar16 + 0xa0),*(undefined8 *)(pbVar16 + 0x98));
        }
      }
      pbVar27 = pbStack_170;
      *(undefined8 *)pbVar25 = *(undefined8 *)pbVar24;
      *(long **)(pbVar25 + 0x28) = plVar29 + 4;
      *(long **)(pbVar25 + 0x30) = plStack_168;
      LOCK();
      plStack_168[1] = plStack_168[1] + 1;
      UNLOCK();
      pbStack_1c8 = pbStack_1c8 + 0x38;
      puVar31 = *(undefined8 **)(pbVar28 + 0x88);
      puVar5 = *(undefined8 **)(pbVar28 + 0x90);
      pbVar30 = pbStack_1d0 + ((long)puVar31 - (long)puVar5);
      pbVar25 = pbVar30;
      puVar21 = puVar31;
      if ((long)puVar31 - (long)puVar5 != 0) {
        do {
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
          *(undefined8 *)(pbVar25 + 0x18) = puVar21[3];
          uVar18 = puVar21[2];
          *(undefined8 *)(pbVar25 + 8) = puVar21[1];
          *(undefined8 *)(pbVar25 + 0x10) = uVar18;
          *(undefined2 *)(puVar21 + 1) = 0;
          *(undefined8 *)pbVar25 = *puVar21;
          uVar18 = puVar21[6];
          *(undefined8 *)(pbVar25 + 0x28) = puVar21[5];
          *(undefined8 *)(pbVar25 + 0x30) = uVar18;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          pbVar25 = pbVar25 + 0x38;
        } while (puVar21 != puVar5);
        do {
          plVar29 = (long *)puVar31[6];
          if (plVar29 == (long *)0x0) {
LAB_0cc3a055:
            bVar4 = *(byte *)(puVar31 + 1);
          }
          else {
            LOCK();
            plVar17 = plVar29 + 1;
            lVar23 = *plVar17;
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (lVar23 != 0) goto LAB_0cc3a055;
            (**(code **)(*plVar29 + 0x10))(plVar29);
            func_0x0412c2d0(plVar29);
            bVar4 = *(byte *)(puVar31 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar31[3],puVar31[1] & 0xfffffffffffffffe);
          }
          puVar31 = puVar31 + 7;
        } while (puVar31 != puVar5);
        puVar31 = *(undefined8 **)pbVar27;
      }
      pbVar25 = pbStack_1c8;
      *(byte **)(pbVar28 + 0x88) = pbVar30;
      *(byte **)(pbVar28 + 0x90) = pbStack_1c8;
      lVar23 = *(long *)(pbVar28 + 0x98);
      *(long **)(pbVar28 + 0x98) = plStack_1c0;
      if (puVar31 != (undefined8 *)0x0) {
        func_0x0412a280(puVar31,lVar23 - (long)puVar31);
      }
LAB_0cc3a0c9:
      pbVar30 = pbStack_110;
      plVar29 = plStack_160;
      *(byte **)(pbVar28 + 0x90) = pbVar25;
      uVar7 = *(undefined4 *)pbVar28;
      uVar8 = *(undefined4 *)(pbVar28 + 4);
      uVar9 = *(undefined4 *)(pbVar28 + 8);
      uVar10 = *(undefined4 *)(pbVar28 + 0xc);
      if (*(long *)(pbVar28 + 8) != 0) {
        LOCK();
        plVar17 = (long *)(*(long *)(pbVar28 + 8) + 8);
        *plVar17 = *plVar17 + 1;
        UNLOCK();
      }
      plVar17 = *(long **)(pbVar16 + 0x78);
      *(undefined4 *)(pbVar16 + 0x70) = uVar7;
      *(undefined4 *)(pbVar16 + 0x74) = uVar8;
      *(undefined4 *)(pbVar16 + 0x78) = uVar9;
      *(undefined4 *)(pbVar16 + 0x7c) = uVar10;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar13 = plVar17 + 1;
        lVar23 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      plVar17 = plStack_168;
      pbVar16[0x80] = pbVar28[0xa1];
      LOCK();
      lVar23 = *plVar29;
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        func_0x0412c2d0(plVar17);
        LOCK();
        lVar23 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar23 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        func_0x0412c2d0(pbVar16);
        LOCK();
        lVar23 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar23 = *(long *)pbVar30;
        *(long *)pbVar30 = *(long *)pbVar30 + -1;
        UNLOCK();
      }
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
        func_0x0412c2d0(pbVar16);
      }
      auStack_158[0] = 0;
      auStack_158[1] = 0;
      auStack_158[2] = 0;
      (**(code **)(*(long *)pbStack_c0 + 0x10))(pbStack_c0,auStack_158);
      if ((auStack_158[0] & 1) != 0) {
        func_0x0412a280(auStack_158[2],auStack_158[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_190 & 1) != 0) {
        func_0x0412a280(lStack_180,CONCAT44(uStack_18c,uStack_190) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    pbVar30 = pbVar30 + -(long)pbStack_118;
    uVar12 = ((long)pbVar30 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar12) goto LAB_0cc3a2c0;
    pbVar28 = pbStack_170 + 0xb8;
    lVar23 = (long)*(byte **)(pbStack_170 + 200) - (long)pbStack_118 >> 3;
    uVar19 = lVar23 * -0x6186186186186186;
    if (uVar12 < uVar19) {
      uVar12 = uVar19;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar23 * -0x30c30c30c30c30c3)) {
      uVar12 = 0x186186186186186;
    }
    pbStack_1b8 = pbVar28;
    if (uVar12 == 0) {
      plVar17 = (long *)0x0;
LAB_0cc39a32:
      pbStack_1d0 = pbVar30 + (long)plVar17;
      plStack_1c0 = plVar17 + uVar12 * 0x15;
      plStack_1d8 = plVar17;
      pbStack_1c8 = pbStack_1d0;
      func_0x0cca8080(pbStack_1d0);
      pbVar30 = pbStack_1c8 + 0xa8;
      lVar23 = *(long *)(pbVar24 + 0xb8);
      lVar20 = *(long *)(pbVar24 + 0xc0);
      pbVar25 = pbStack_1d0 + (lVar23 - lVar20);
      if (lVar23 != lVar20) {
        lVar22 = 0;
        do {
          uVar18 = ((undefined8 *)(lVar23 + lVar22))[1];
          *(undefined8 *)(pbVar25 + lVar22) = *(undefined8 *)(lVar23 + lVar22);
          *(undefined8 *)(pbVar25 + lVar22 + 8) = uVar18;
          *(undefined8 *)(lVar23 + lVar22) = 0;
          ((undefined8 *)(lVar23 + lVar22))[1] = 0;
          pbVar24 = pbVar25 + lVar22 + 0x20;
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
          pbVar24 = pbVar25 + lVar22 + 0x10;
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
          pbVar24 = pbVar25 + lVar22 + 0x30;
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(undefined8 *)(pbVar25 + lVar22 + 0x28) = *(undefined8 *)(lVar23 + 0x28 + lVar22);
          puVar14 = (undefined4 *)(lVar23 + 0x18 + lVar22);
          uVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          pbVar24 = pbVar25 + lVar22 + 0x18;
          *(undefined4 *)pbVar24 = *puVar14;
          *(undefined4 *)(pbVar24 + 4) = uVar7;
          *(undefined4 *)(pbVar24 + 8) = uVar8;
          *(undefined4 *)(pbVar24 + 0xc) = uVar9;
          *(undefined2 *)(lVar23 + 0x18 + lVar22) = 0;
          *(undefined8 *)(pbVar25 + lVar22 + 0x10) = *(undefined8 *)(lVar23 + 0x10 + lVar22);
          func_0x04167a20(pbVar25 + lVar22 + 0x38,lVar22 + lVar23 + 0x38);
          puVar31 = (undefined8 *)(lVar23 + 0x40 + lVar22);
          uVar18 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar22 + 0x40) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar22 + 0x40 + 8) = uVar18;
          puVar31 = (undefined8 *)(lVar23 + 0x50 + lVar22);
          uVar18 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar22 + 0x50) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar22 + 0x50 + 8) = uVar18;
          puVar31 = (undefined8 *)(lVar23 + 0x60 + lVar22);
          uVar18 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar22 + 0x60) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar22 + 0x60 + 8) = uVar18;
          puVar31 = (undefined8 *)(lVar23 + 0x60 + lVar22);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(pbVar25 + lVar22 + 0x70) = *(undefined8 *)(lVar23 + 0x70 + lVar22);
          puVar31 = (undefined8 *)(lVar23 + 0x78 + lVar22);
          uVar18 = puVar31[1];
          *(undefined8 *)(pbVar25 + lVar22 + 0x78) = *puVar31;
          *(undefined8 *)(pbVar25 + lVar22 + 0x78 + 8) = uVar18;
          pbVar24 = pbVar25 + lVar22 + 0x88;
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
          pbVar24 = pbVar25 + lVar22 + 0x98;
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          puVar14 = (undefined4 *)(lVar23 + 0x88 + lVar22);
          uVar7 = puVar14[1];
          uVar8 = puVar14[2];
          uVar9 = puVar14[3];
          pbVar24 = pbVar25 + lVar22 + 0x88;
          *(undefined4 *)pbVar24 = *puVar14;
          *(undefined4 *)(pbVar24 + 4) = uVar7;
          *(undefined4 *)(pbVar24 + 8) = uVar8;
          *(undefined4 *)(pbVar24 + 0xc) = uVar9;
          *(undefined8 *)(pbVar25 + lVar22 + 0x98) = *(undefined8 *)(lVar23 + 0x98 + lVar22);
          puVar31 = (undefined8 *)(lVar23 + 0x88 + lVar22);
          *puVar31 = 0;
          puVar31[1] = 0;
          *(undefined8 *)(lVar23 + 0x98 + lVar22) = 0;
          *(undefined2 *)(pbVar25 + lVar22 + 0xa0) = *(undefined2 *)(lVar23 + 0xa0 + lVar22);
          lVar3 = lVar22 + lVar23;
          lVar22 = lVar22 + 0xa8;
        } while (lVar3 + 0xa8 != lVar20);
        do {
          func_0x0cca8200(lVar23);
          lVar23 = lVar23 + 0xa8;
        } while (lVar23 != lVar20);
        lVar23 = *(long *)pbVar28;
      }
      pbVar24 = pbStack_170;
      *(byte **)(pbStack_170 + 0xb8) = pbVar25;
      *(byte **)(pbStack_170 + 0xc0) = pbVar30;
      lVar20 = *(long *)(pbStack_170 + 200);
      *(long **)(pbStack_170 + 200) = plStack_1c0;
      if (lVar23 != 0) {
        func_0x0412a280(lVar23,lVar20 - lVar23);
      }
      goto LAB_0cc39c00;
    }
    if (uVar12 < 0x186186186186187) {
      plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12 * 0xa8);
      if (plVar17 == (long *)0x0) {
        func_0x0eec74c0(uVar12 * 0xa8,0);
        plVar17 = (long *)0x0;
      }
      goto LAB_0cc39a32;
    }
LAB_0cc3a2b6:
    func_0x04882eb0();
  }
  func_0x0cca8420();
LAB_0cc3a2c0:
  uVar18 = func_0x0cca81f0();
  if ((*pbVar30 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar25 + 0x18),*(ulong *)(pbVar25 + 8) & 0xfffffffffffffffe);
  }
  func_0x0cca8360(&plStack_1d8);
  plVar29 = plStack_168;
  LOCK();
  lVar23 = *plStack_160;
  *plStack_160 = *plStack_160 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plStack_168 + 0x10))(plStack_168);
    func_0x0412c2d0(plVar29);
  }
  func_0x0cca66d0(pbVar16);
  func_0x0cca6700(pbVar16);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_190 & 1) != 0) {
    func_0x0412a280(lStack_180,CONCAT44(uStack_18c,uStack_190) & 0xfffffffffffffffe);
  }
  _Unwind_Resume(uVar18);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


