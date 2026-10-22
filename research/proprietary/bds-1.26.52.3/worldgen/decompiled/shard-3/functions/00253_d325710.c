/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd425710 (ELF vaddr 0xd325710)
 * Label: callee-of:0x4de9260
 * Body:  [[0d425710, 0d425e90] [0d425ea0, 0d426475] [0d426480, 0d4264bc] [0d4264c0, 0d427205] [0d427617, 0d4278ea]]
 * Ghidra: FUN_0d425710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d425710(undefined8 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long **pplVar6;
  code *pcVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long *plVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  byte *pbVar28;
  ulong uVar29;
  byte *pbVar30;
  long **pplVar31;
  bool bVar32;
  undefined8 uStack_288;
  undefined1 uStack_279;
  uint *puStack_278;
  uint *puStack_270;
  long *plStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  long *plStack_250;
  long **pplStack_248;
  byte *pbStack_228;
  byte *pbStack_220;
  long *plStack_218;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  ulong auStack_1c8 [4];
  ulong auStack_1a8 [4];
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte *pbStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_128;
  undefined8 uStack_120;
  undefined *apuStack_e8 [4];
  undefined **ppuStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_207 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  bStack_210 = 0x10;
  uStack_20f = 0x65727574616566;
  uStack_208 = 0x73;
  plStack_218 = (long *)0xf72b8f5de3e59010;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f4721d8;
  plStack_268 = (long *)0x0;
  pbStack_260 = (byte *)0x0;
  if (plStack_128 == (long *)0x0) {
    plStack_268 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_128)(&plStack_128,&plStack_268);
    plStack_268 = plStack_128;
  }
  plStack_128 = (long *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_279,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar19 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f472228;
  pplVar31 = (long **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (pplVar31 != &plStack_268) {
    if (plStack_268 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_268)(&plStack_268,pplVar31);
      plVar20 = plStack_268;
    }
    plStack_268 = (long *)0x0;
    *pplVar31 = plVar20;
  }
  puVar27 = (uint *)(plVar14 + 0x12);
  if (plVar19 != (long *)&DAT_0f551f58) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar27 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar9;
        *(undefined4 *)(plVar14 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar32 = (_DAT_0f551f60 & 1) != 0;
      lVar26 = 0xf551f61;
      if (bVar32) {
        lVar26 = _DAT_0f551f70;
      }
      uVar29 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar27,lVar26,uVar29);
    }
  }
  plVar20 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f551f58;
  plVar14[0x15] = 0;
  puStack_270 = puVar27;
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  LOCK();
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  pbStack_220 = (byte *)plVar20;
  pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar15 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar15 + 8) = 0;
  *(long *)((long)pbVar15 + 0x10) = 0;
  *(undefined **)pbVar15 = &UNK_0f472320;
  *(long *)((long)pbVar15 + 0x30) = 0;
  *(long *)((long)pbVar15 + 0x38) = 0;
  *(undefined **)((long)pbVar15 + 0x20) = &UNK_0f472370;
  *(long **)((long)pbVar15 + 0x70) = plVar14 + 4;
  *(long **)((long)pbVar15 + 0x78) = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plStack_268 = (long *)((long)pbVar15 + 0x20);
  pbStack_260 = pbVar15;
  puVar16 = (undefined4 *)func_0x05095bf0(param_1,&plStack_218,1);
  plVar20 = *(long **)(puVar16 + 0x24);
  if (plVar20 < *(long **)(puVar16 + 0x26)) {
    plVar20[2] = 0;
    plVar20[3] = 0;
    *plVar20 = 0;
    plVar20[1] = 0;
    plVar20[4] = 0;
    if (plVar20 == plVar19) {
LAB_0d425a36:
      *plVar20 = *plVar19;
      plVar20[5] = (long)pbVar15 + 0x20;
      plVar20[6] = (long)pbVar15;
LAB_0d425a96:
      LOCK();
      *(long *)((long)pbVar15 + 8) = *(long *)((long)pbVar15 + 8) + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_270 & 1) == 0) {
        plVar20[3] = *(long *)(puStack_270 + 4);
        lVar26 = *(long *)(puStack_270 + 2);
        plVar20[1] = *(long *)puStack_270;
        plVar20[2] = lVar26;
        goto LAB_0d425a36;
      }
      FUN_04885070(plVar20 + 1,plVar14[0x14],plVar14[0x13]);
      *plVar20 = *plVar19;
      plVar20[5] = (long)plStack_268;
      plVar20[6] = (long)pbStack_260;
      pbVar15 = pbStack_260;
      if (pbStack_260 != (byte *)0x0) goto LAB_0d425a96;
    }
    plVar20 = plVar20 + 7;
    *(long **)(puVar16 + 0x24) = plVar20;
  }
  else {
    plVar20 = (long *)func_0x050992f0(puVar16 + 0x22,plVar19,&plStack_268);
  }
  *(long **)(puVar16 + 0x24) = plVar20;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar10;
  *(undefined4 *)(plVar14 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar12;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    lVar26 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  pbVar15 = pbStack_260;
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  if (pbStack_260 != (byte *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pbStack_260 + 8);
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)pbStack_260 + 0x10))(pbStack_260);
      func_0x0412c2d0(pbVar15);
    }
  }
  pbVar15 = pbStack_220;
  LOCK();
  lVar26 = *(long *)pbStack_220;
  *(long *)pbStack_220 = *(long *)pbStack_220 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar26 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
    if (lVar26 == 0) goto LAB_0d425c37;
LAB_0d425b59:
    plVar14[0x16] = 1;
  }
  else {
    LOCK();
    lVar26 = *(long *)pbStack_220;
    *(long *)pbStack_220 = *(long *)pbStack_220 + -1;
    UNLOCK();
    if (lVar26 != 0) goto LAB_0d425b59;
LAB_0d425c37:
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    plVar14[0x16] = 1;
  }
  if (plStack_128 != (long *)0x0) {
    (*(code *)plStack_128[1])(&plStack_128);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
  }
  uStack_160 = 0;
  plStack_168 = (long *)&UNK_0f472610;
  pbVar15 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar15 == (byte *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
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
  *(undefined **)pbVar15 = &UNK_0f4723d0;
  plStack_268 = (long *)0x0;
  pbStack_260 = (byte *)0x0;
  if (plStack_168 == (long *)0x0) {
    plStack_268 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_168)(&plStack_168,&plStack_268);
    plStack_268 = plStack_168;
  }
  plStack_168 = (long *)0x0;
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
  puStack_278 = (uint *)pbVar15;
  func_0x04aa75f0(pbVar15 + 0x70,&plStack_218,&UNK_01254d89);
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
  *(undefined **)(pbVar15 + 0x20) = &UNK_0f472420;
  pplVar31 = (long **)(pbVar15 + 0x170);
  pbVar15[0x170] = 0;
  pbVar15[0x171] = 0;
  pbVar15[0x172] = 0;
  pbVar15[0x173] = 0;
  pbVar15[0x174] = 0;
  pbVar15[0x175] = 0;
  pbVar15[0x176] = 0;
  pbVar15[0x177] = 0;
  pbVar15[0x178] = 0;
  pbVar15[0x179] = 0;
  pbVar15[0x17a] = 0;
  pbVar15[0x17b] = 0;
  pbVar15[0x17c] = 0;
  pbVar15[0x17d] = 0;
  pbVar15[0x17e] = 0;
  pbVar15[0x17f] = 0;
  if (pplVar31 != &plStack_268) {
    if (plStack_268 == (long *)0x0) {
      plVar20 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_268)(&plStack_268,pplVar31);
      plVar20 = plStack_268;
    }
    plStack_268 = (long *)0x0;
    *pplVar31 = plVar20;
  }
  pbStack_220 = pbVar15 + 0x20;
  puVar27 = (uint *)(pbVar15 + 0x90);
  if (pbVar15 + 0x88 != &DAT_0f551f58) {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(long *)(pbVar15 + 0xa0) = _DAT_0f551f70;
        uVar11 = uRam000000000f551f6c;
        uVar10 = _DAT_0f551f68;
        uVar9 = uRam000000000f551f64;
        *puVar27 = _DAT_0f551f60;
        *(undefined4 *)(pbVar15 + 0x94) = uVar9;
        *(undefined4 *)(pbVar15 + 0x98) = uVar10;
        *(undefined4 *)(pbVar15 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puVar27,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar32 = (_DAT_0f551f60 & 1) != 0;
      lVar26 = 0xf551f61;
      if (bVar32) {
        lVar26 = _DAT_0f551f70;
      }
      uVar29 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar27,lVar26,uVar29);
    }
  }
  pbVar30 = pbVar15 + 8;
  *(long *)(pbVar15 + 0x88) = _DAT_0f551f58;
  pbVar15[0xa8] = 0;
  pbVar15[0xa9] = 0;
  pbVar15[0xaa] = 0;
  pbVar15[0xab] = 0;
  pbVar15[0xac] = 0;
  pbVar15[0xad] = 0;
  pbVar15[0xae] = 0;
  pbVar15[0xaf] = 0;
  if (plStack_268 != (long *)0x0) {
    (*(code *)plStack_268[1])(&plStack_268);
  }
  LOCK();
  *(long *)pbVar30 = *(long *)pbVar30 + 1;
  UNLOCK();
  puStack_270 = (uint *)(pbVar15 + 0x88);
  pbStack_1d0 = pbVar30;
  puVar17 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar17 == (uint *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  *(byte *)((long)puVar17 + 8) = 0;
  *(byte *)((long)puVar17 + 9) = 0;
  *(byte *)((long)puVar17 + 10) = 0;
  *(byte *)((long)puVar17 + 0xb) = 0;
  *(byte *)((long)puVar17 + 0xc) = 0;
  *(byte *)((long)puVar17 + 0xd) = 0;
  *(byte *)((long)puVar17 + 0xe) = 0;
  *(byte *)((long)puVar17 + 0xf) = 0;
  *(byte *)((long)puVar17 + 0x10) = 0;
  *(byte *)((long)puVar17 + 0x11) = 0;
  *(byte *)((long)puVar17 + 0x12) = 0;
  *(byte *)((long)puVar17 + 0x13) = 0;
  *(byte *)((long)puVar17 + 0x14) = 0;
  *(byte *)((long)puVar17 + 0x15) = 0;
  *(byte *)((long)puVar17 + 0x16) = 0;
  *(byte *)((long)puVar17 + 0x17) = 0;
  *(undefined **)puVar17 = &UNK_0f472518;
  *(byte *)((long)puVar17 + 0x30) = 0;
  *(byte *)((long)puVar17 + 0x31) = 0;
  *(byte *)((long)puVar17 + 0x32) = 0;
  *(byte *)((long)puVar17 + 0x33) = 0;
  *(byte *)((long)puVar17 + 0x34) = 0;
  *(byte *)((long)puVar17 + 0x35) = 0;
  *(byte *)((long)puVar17 + 0x36) = 0;
  *(byte *)((long)puVar17 + 0x37) = 0;
  *(byte *)((long)puVar17 + 0x38) = 0;
  *(byte *)((long)puVar17 + 0x39) = 0;
  *(byte *)((long)puVar17 + 0x3a) = 0;
  *(byte *)((long)puVar17 + 0x3b) = 0;
  *(byte *)((long)puVar17 + 0x3c) = 0;
  *(byte *)((long)puVar17 + 0x3d) = 0;
  *(byte *)((long)puVar17 + 0x3e) = 0;
  *(byte *)((long)puVar17 + 0x3f) = 0;
  *(undefined **)((long)puVar17 + 0x20) = &UNK_0f472568;
  *(byte **)((long)puVar17 + 0x70) = pbStack_220;
  *(byte **)((long)puVar17 + 0x78) = pbVar15;
  LOCK();
  *(long *)(pbVar15 + 8) = *(long *)(pbVar15 + 8) + 1;
  UNLOCK();
  pbStack_170 = (byte *)((long)puVar17 + 8);
  puVar3 = (undefined4 *)plVar14[0x1c];
  puVar2 = (undefined4 *)plVar14[0x1b];
  for (puVar16 = puVar2; puVar25 = (uint *)pbVar15, pbStack_228 = (byte *)puVar17, puVar16 != puVar3
      ; puVar16 = puVar16 + 0x2a) {
    if ((*(long *)(puVar16 + 0x1e) == 0) && (*(long *)(puVar16 + 0x20) == -1)) goto LAB_0d4261e3;
  }
  if ((undefined4 *)plVar14[0x1d] <= puVar3) {
    pbVar30 = (byte *)((long)puVar3 - (long)puVar2);
    uVar29 = ((long)pbVar30 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar29) goto LAB_0d4271d5;
    puVar25 = (uint *)(plVar14 + 0x1b);
    lVar26 = plVar14[0x1d] - (long)puVar2 >> 3;
    uVar8 = lVar26 * -0x6186186186186186;
    if (uVar29 < uVar8) {
      uVar29 = uVar8;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
      uVar29 = 0x186186186186186;
    }
    pplStack_248 = (long **)puVar25;
    if (uVar29 == 0) {
      plVar20 = (long *)0x0;
LAB_0d425f90:
      pbStack_260 = pbVar30 + (long)plVar20;
      plStack_250 = plVar20 + uVar29 * 0x15;
      plStack_268 = plVar20;
      pbStack_258 = pbStack_260;
      pbStack_1d8 = (byte *)puVar25;
      func_0x0d4fbb60(pbStack_260);
      pbVar23 = pbStack_258 + 0xa8;
      lVar26 = plVar14[0x1b];
      lVar4 = plVar14[0x1c];
      pbVar30 = pbStack_260 + (lVar26 - lVar4);
      if (lVar26 != lVar4) {
        plVar19 = (long *)0x0;
        do {
          uVar13 = ((undefined8 *)(lVar26 + (long)plVar19))[1];
          *(undefined8 *)(pbVar30 + (long)plVar19) = *(undefined8 *)(lVar26 + (long)plVar19);
          *(undefined8 *)(pbVar30 + (long)plVar19 + 8) = uVar13;
          *(undefined8 *)(lVar26 + (long)plVar19) = 0;
          ((undefined8 *)(lVar26 + (long)plVar19))[1] = 0;
          pbVar28 = pbVar30 + 0x20 + (long)plVar19;
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
          pbVar28 = pbVar30 + 0x10 + (long)plVar19;
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
          pbVar28 = pbVar30 + 0x30 + (long)plVar19;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          *(undefined8 *)(pbVar30 + 0x28 + (long)plVar19) =
               *(undefined8 *)(lVar26 + 0x28 + (long)plVar19);
          puVar16 = (undefined4 *)(lVar26 + 0x18 + (long)plVar19);
          uVar9 = puVar16[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          pbVar28 = pbVar30 + 0x18 + (long)plVar19;
          *(undefined4 *)pbVar28 = *puVar16;
          *(undefined4 *)(pbVar28 + 4) = uVar9;
          *(undefined4 *)(pbVar28 + 8) = uVar10;
          *(undefined4 *)(pbVar28 + 0xc) = uVar11;
          *(undefined2 *)(lVar26 + 0x18 + (long)plVar19) = 0;
          *(undefined8 *)(pbVar30 + 0x10 + (long)plVar19) =
               *(undefined8 *)(lVar26 + 0x10 + (long)plVar19);
          func_0x04167a20((byte *)((long)plVar19 + (long)pbVar30) + 0x38,
                          (long)plVar19 + lVar26 + 0x38);
          puVar5 = (undefined8 *)(lVar26 + 0x40 + (long)plVar19);
          uVar13 = puVar5[1];
          *(undefined8 *)(pbVar30 + 0x40 + (long)plVar19) = *puVar5;
          *(undefined8 *)(pbVar30 + 0x40 + (long)plVar19 + 8) = uVar13;
          puVar5 = (undefined8 *)(lVar26 + 0x50 + (long)plVar19);
          uVar13 = puVar5[1];
          *(undefined8 *)(pbVar30 + 0x50 + (long)plVar19) = *puVar5;
          *(undefined8 *)(pbVar30 + 0x50 + (long)plVar19 + 8) = uVar13;
          puVar5 = (undefined8 *)(lVar26 + 0x60 + (long)plVar19);
          uVar13 = puVar5[1];
          *(undefined8 *)(pbVar30 + 0x60 + (long)plVar19) = *puVar5;
          *(undefined8 *)(pbVar30 + 0x60 + (long)plVar19 + 8) = uVar13;
          puVar5 = (undefined8 *)(lVar26 + 0x60 + (long)plVar19);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(pbVar30 + 0x70 + (long)plVar19) =
               *(undefined8 *)(lVar26 + 0x70 + (long)plVar19);
          puVar5 = (undefined8 *)(lVar26 + 0x78 + (long)plVar19);
          uVar13 = puVar5[1];
          *(undefined8 *)(pbVar30 + 0x78 + (long)plVar19) = *puVar5;
          *(undefined8 *)(pbVar30 + 0x78 + (long)plVar19 + 8) = uVar13;
          pbVar28 = pbVar30 + 0x88 + (long)plVar19;
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
          pbVar28 = pbVar30 + 0x98 + (long)plVar19;
          pbVar28[0] = 0;
          pbVar28[1] = 0;
          pbVar28[2] = 0;
          pbVar28[3] = 0;
          pbVar28[4] = 0;
          pbVar28[5] = 0;
          pbVar28[6] = 0;
          pbVar28[7] = 0;
          puVar16 = (undefined4 *)(lVar26 + 0x88 + (long)plVar19);
          uVar9 = puVar16[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          pbVar28 = pbVar30 + 0x88 + (long)plVar19;
          *(undefined4 *)pbVar28 = *puVar16;
          *(undefined4 *)(pbVar28 + 4) = uVar9;
          *(undefined4 *)(pbVar28 + 8) = uVar10;
          *(undefined4 *)(pbVar28 + 0xc) = uVar11;
          *(undefined8 *)(pbVar30 + 0x98 + (long)plVar19) =
               *(undefined8 *)(lVar26 + 0x98 + (long)plVar19);
          puVar5 = (undefined8 *)(lVar26 + 0x88 + (long)plVar19);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar26 + 0x98 + (long)plVar19) = 0;
          *(undefined2 *)(pbVar30 + 0xa0 + (long)plVar19) =
               *(undefined2 *)(lVar26 + 0xa0 + (long)plVar19);
          lVar18 = (long)plVar19 + lVar26 + 0xa8;
          plVar19 = plVar19 + 0x15;
        } while (lVar18 != lVar4);
        do {
          func_0x0d4f8a30(lVar26);
          lVar26 = lVar26 + 0xa8;
        } while (lVar26 != lVar4);
        lVar26 = *(long *)pbStack_1d8;
      }
      puVar25 = puStack_278;
      plVar14[0x1b] = (long)pbVar30;
      plVar14[0x1c] = (long)pbVar23;
      lVar4 = plVar14[0x1d];
      plVar14[0x1d] = (long)plStack_250;
      if (lVar26 != 0) {
        func_0x0412a280(lVar26,lVar4 - lVar26);
      }
      goto LAB_0d426175;
    }
    if (uVar29 < 0x186186186186187) {
      plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0xa8);
      if (plVar20 == (long *)0x0) {
        FUN_0eec74c0(uVar29 * 0xa8,0);
        plVar20 = (long *)0x0;
      }
      goto LAB_0d425f90;
    }
LAB_0d4271cb:
    func_0x04882eb0();
LAB_0d4271d0:
    func_0x0d4fbda0();
    pbVar15 = (byte *)puVar25;
LAB_0d4271d5:
    uStack_288 = func_0x0d4fbcd0();
    if ((*puStack_278 & 1) != 0) {
      func_0x0412a280(*(long *)(pbVar30 + 0x18),*(ulong *)(pbVar30 + 8) & 0xfffffffffffffffe);
    }
    plVar19[0x12] = (long)pbVar30;
    pbVar30 = pbVar15 + 8;
    LOCK();
    lVar26 = *(long *)pbVar30;
    *(long *)pbVar30 = *(long *)pbVar30 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15);
      func_0x0412c2d0(pbVar15);
    }
    LOCK();
    lVar26 = *(long *)puVar17;
    *(long *)puVar17 = *(long *)puVar17 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    LOCK();
    plVar19 = *(long **)puVar17;
    *(long *)puVar17 = *(long *)puVar17 + -1;
    UNLOCK();
    if (plVar19 == (long *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    if (lStack_b8 != 0) {
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
      uStack_288 = func_0x0eee2d70(uStack_288);
      plVar20 = plVar19 + 1;
      LOCK();
      lVar26 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        func_0x0412c2d0(plVar19);
      }
      LOCK();
      lVar26 = *(long *)puStack_270;
      *(long *)puStack_270 = *(long *)puStack_270 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
      LOCK();
      puVar17 = *(uint **)puStack_270;
      *(long *)puStack_270 = *(long *)puStack_270 + -1;
      UNLOCK();
      if (puVar17 == (uint *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
        uStack_288 = func_0x0eee2d70(uStack_288);
        func_0x050945a0(&plStack_268);
        LOCK();
        lVar26 = *(long *)pbStack_220;
        *(long *)pbStack_220 = *(long *)pbStack_220 + -1;
        UNLOCK();
        if (lVar26 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
          LOCK();
          puVar17 = *(uint **)pbStack_220;
          *(long *)pbStack_220 = *(long *)pbStack_220 + -1;
          UNLOCK();
        }
        else {
          LOCK();
          puVar17 = *(uint **)pbStack_220;
          *(long *)pbStack_220 = *(long *)pbStack_220 + -1;
          UNLOCK();
        }
        if (puVar17 == (uint *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
        }
        if (plStack_128 != (long *)0x0) {
          (*(code *)plStack_128[1])(&plStack_128);
        }
        if ((bStack_210 & 1) != 0) {
          func_0x0412a280(uStack_200,CONCAT71(uStack_20f,bStack_210) & 0xfffffffffffffffe);
          uStack_288 = func_0x0eee2d70(uStack_288);
          pbVar15 = pbStack_228;
          LOCK();
          lVar26 = *(long *)pbStack_170;
          *(long *)pbStack_170 = *(long *)pbStack_170 + -1;
          UNLOCK();
          if (lVar26 == 0) {
            (**(code **)(*(long *)pbStack_228 + 0x10))(pbStack_228);
            func_0x0412c2d0(pbVar15);
          }
          puVar17 = (uint *)0xffffffffffffffff;
          LOCK();
          lVar26 = *(long *)pbStack_1d0;
          *(long *)pbStack_1d0 = *(long *)pbStack_1d0 + -1;
          UNLOCK();
          if (lVar26 == 0) goto LAB_0d42788b;
          LOCK();
          puVar17 = *(uint **)pbStack_1d0;
          *(long *)pbStack_1d0 = *(long *)pbStack_1d0 + -1;
          UNLOCK();
          if (puVar17 == (uint *)0x0) goto LAB_0d4278b3;
          goto LAB_0d427875;
        }
      }
    }
    do {
      while( true ) {
        func_0x0eee2d70(uStack_288);
LAB_0d42788b:
        puVar27 = puStack_278;
        (**(code **)(*(long *)puStack_278 + 0x10))(puStack_278);
        func_0x0412c2d0(puVar27);
        LOCK();
        pbVar15 = (byte *)((long)puVar17 + *(long *)pbStack_1d0);
        puVar17 = *(uint **)pbStack_1d0;
        *(byte **)pbStack_1d0 = pbVar15;
        UNLOCK();
        if (puVar17 != (uint *)0x0) break;
LAB_0d4278b3:
        puVar17 = puStack_278;
        (**(code **)(*(long *)puStack_278 + 0x10))(puStack_278);
        func_0x0412c2d0(puVar17);
        if (plStack_168 != (long *)0x0) goto LAB_0d4278d6;
      }
LAB_0d427875:
    } while (plStack_168 == (long *)0x0);
LAB_0d4278d6:
    (*(code *)plStack_168[1])(&plStack_168);
    func_0x0eee2d70(uStack_288);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_0x0d4fbb60(puVar3);
  pbVar23 = (byte *)(puVar3 + 0x2a);
  plVar14[0x1c] = (long)pbVar23;
LAB_0d426175:
  plVar14[0x1c] = (long)pbVar23;
  pbVar30 = *(byte **)(pbVar23 + -0xa8);
  if ((*pbVar30 & 1) == 0) {
    *pbVar30 = 0x26;
    pbVar30 = pbVar30 + 1;
  }
  else {
    pbVar30[8] = 0x13;
    pbVar30[9] = 0;
    pbVar30[10] = 0;
    pbVar30[0xb] = 0;
    pbVar30[0xc] = 0;
    pbVar30[0xd] = 0;
    pbVar30[0xe] = 0;
    pbVar30[0xf] = 0;
    pbVar30 = *(byte **)(pbVar30 + 0x10);
  }
  uVar11 = _UNK_01494d69;
  uVar10 = _UNK_01494d65;
  uVar9 = _UNK_01494d61;
  *(undefined4 *)pbVar30 = _DAT_01494d5d;
  *(undefined4 *)(pbVar30 + 4) = uVar9;
  *(undefined4 *)(pbVar30 + 8) = uVar10;
  *(undefined4 *)(pbVar30 + 0xc) = uVar11;
  pbVar30[0xf] = 0x65;
  pbVar30[0x10] = 0x6e;
  pbVar30[0x11] = 0x74;
  pbVar30[0x12] = 0x3e;
  pbVar30[0x13] = 0;
  lVar26 = plVar14[0x1c];
  puVar16 = (undefined4 *)(lVar26 - 0xa8);
  *(char *)(lVar26 + -7) = (char)plVar14[0x10];
  *(undefined8 *)(lVar26 + -0x30) = 0;
  *(undefined8 *)(lVar26 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar26 + -8) = 0;
LAB_0d4261e3:
  pbVar30 = pbStack_228;
  pbVar28 = pbStack_228 + 0x20;
  pbVar23 = *(byte **)(puVar16 + 0x24);
  if (pbVar23 < *(byte **)(puVar16 + 0x26)) {
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
    if ((uint *)pbVar23 != puStack_270) {
      if ((*puVar27 & 1) == 0) {
        *(long *)(pbVar23 + 0x18) = *(long *)(pbVar15 + 0xa0);
        lVar26 = *(long *)(pbVar15 + 0x98);
        *(long *)(pbVar23 + 8) = *(long *)puVar27;
        *(long *)(pbVar23 + 0x10) = lVar26;
      }
      else {
        FUN_04885070(pbVar23 + 8,*(long *)((long)puVar25 + 0xa0),*(long *)((long)puVar25 + 0x98));
      }
    }
    *(long *)pbVar23 = *(long *)puStack_270;
    *(byte **)(pbVar23 + 0x28) = pbVar28;
    *(byte **)(pbVar23 + 0x30) = pbVar30;
    LOCK();
    pbVar30 = pbVar30 + 8;
    *(long *)pbVar30 = *(long *)pbVar30 + 1;
    UNLOCK();
    pbVar23 = pbVar23 + 0x38;
    *(byte **)(puVar16 + 0x24) = pbVar23;
  }
  else {
    puVar17 = (uint *)(pbVar23 + -*(long *)(puVar16 + 0x22));
    plVar14 = (long *)(((long)puVar17 >> 3) * 0x6db6db6db6db6db7 + 1);
    if ((long *)0x492492492492492 < plVar14) goto LAB_0d4271d0;
    lVar26 = (long)*(byte **)(puVar16 + 0x26) - *(long *)(puVar16 + 0x22) >> 3;
    plVar20 = (long *)(lVar26 * -0x2492492492492492);
    if (plVar14 < plVar20) {
      plVar14 = plVar20;
    }
    pplStack_248 = (long **)(puVar16 + 0x22);
    if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
      plVar14 = (long *)0x492492492492492;
    }
    pbStack_1d8 = (byte *)pplStack_248;
    if (plVar14 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      if ((long *)0x492492492492492 < plVar14) goto LAB_0d4271cb;
      plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)plVar14 * 0x38);
      if (plVar19 == (long *)0x0) {
        FUN_0eec74c0((long)plVar14 * 0x38,0);
        plVar19 = (long *)0x0;
      }
    }
    pbVar30 = (byte *)((long)plVar19 + (long)puVar17);
    plStack_250 = plVar19 + (long)plVar14 * 7;
    pbVar23 = (byte *)((long)(plVar19 + 2) + (long)puVar17);
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
    pbVar23 = (byte *)((long)plVar19 + (long)puVar17);
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
    pbVar23 = (byte *)((long)(plVar19 + 4) + (long)puVar17);
    pbVar23[0] = 0;
    pbVar23[1] = 0;
    pbVar23[2] = 0;
    pbVar23[3] = 0;
    pbVar23[4] = 0;
    pbVar23[5] = 0;
    pbVar23[6] = 0;
    pbVar23[7] = 0;
    pbStack_258 = pbVar30;
    plStack_268 = plVar19;
    pbStack_260 = pbVar30;
    if ((uint *)pbVar30 != puStack_270) {
      pbVar23 = (byte *)((long)puVar17 + (long)plVar19);
      if ((*puVar27 & 1) == 0) {
        *(long *)(pbVar23 + 0x18) = *(long *)(pbVar15 + 0xa0);
        uVar9 = *(undefined4 *)(pbVar15 + 0x94);
        uVar10 = *(undefined4 *)(pbVar15 + 0x98);
        uVar11 = *(undefined4 *)(pbVar15 + 0x9c);
        *(uint *)(pbVar23 + 8) = *puVar27;
        *(undefined4 *)(pbVar23 + 0xc) = uVar9;
        *(undefined4 *)(pbVar23 + 0x10) = uVar10;
        *(undefined4 *)(pbVar23 + 0x14) = uVar11;
      }
      else {
        FUN_04885070(pbVar23 + 8,*(long *)((long)puStack_278 + 0xa0),
                     *(long *)((long)puStack_278 + 0x98));
      }
    }
    puVar25 = puStack_278;
    *(long *)pbVar30 = *(long *)puStack_270;
    *(byte **)(pbVar30 + 0x28) = pbVar28;
    *(byte **)(pbVar30 + 0x30) = pbStack_228;
    LOCK();
    *(long *)(pbStack_228 + 8) = *(long *)(pbStack_228 + 8) + 1;
    UNLOCK();
    pbStack_258 = pbStack_258 + 0x38;
    puVar24 = *(undefined8 **)(puVar16 + 0x22);
    puVar5 = *(undefined8 **)(puVar16 + 0x24);
    pbVar15 = pbStack_260 + ((long)puVar24 - (long)puVar5);
    pbVar30 = pbVar15;
    puVar22 = puVar24;
    if ((long)puVar24 - (long)puVar5 != 0) {
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
        uVar13 = puVar22[2];
        *(undefined8 *)(pbVar30 + 8) = puVar22[1];
        *(undefined8 *)(pbVar30 + 0x10) = uVar13;
        *(undefined2 *)(puVar22 + 1) = 0;
        *(undefined8 *)pbVar30 = *puVar22;
        uVar9 = *(undefined4 *)((long)puVar22 + 0x2c);
        uVar10 = *(undefined4 *)(puVar22 + 6);
        uVar11 = *(undefined4 *)((long)puVar22 + 0x34);
        *(undefined4 *)(pbVar30 + 0x28) = *(undefined4 *)(puVar22 + 5);
        *(undefined4 *)(pbVar30 + 0x2c) = uVar9;
        *(undefined4 *)(pbVar30 + 0x30) = uVar10;
        *(undefined4 *)(pbVar30 + 0x34) = uVar11;
        puVar22[5] = 0;
        puVar22[6] = 0;
        puVar22 = puVar22 + 7;
        pbVar30 = pbVar30 + 0x38;
      } while (puVar22 != puVar5);
      do {
        plVar14 = (long *)puVar24[6];
        if (plVar14 == (long *)0x0) {
LAB_0d4264a4:
          bVar1 = *(byte *)(puVar24 + 1);
        }
        else {
          LOCK();
          plVar19 = plVar14 + 1;
          lVar26 = *plVar19;
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (lVar26 != 0) goto LAB_0d4264a4;
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
          bVar1 = *(byte *)(puVar24 + 1);
        }
        if ((bVar1 & 1) != 0) {
          func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
        }
        puVar24 = puVar24 + 7;
      } while (puVar24 != puVar5);
      puVar24 = *(undefined8 **)pbStack_1d8;
    }
    pbVar23 = pbStack_258;
    *(byte **)(puVar16 + 0x22) = pbVar15;
    *(byte **)(puVar16 + 0x24) = pbStack_258;
    lVar26 = *(long *)(puVar16 + 0x26);
    *(long **)(puVar16 + 0x26) = plStack_250;
    if (puVar24 != (undefined8 *)0x0) {
      func_0x0412a280(puVar24,lVar26 - (long)puVar24);
    }
  }
  pbVar15 = pbStack_1d0;
  *(byte **)(puVar16 + 0x24) = pbVar23;
  *(byte *)((long)puVar25 + 0xb0) = 2;
  *(byte *)((long)puVar25 + 0xb1) = 0;
  *(byte *)((long)puVar25 + 0xb2) = 0;
  *(byte *)((long)puVar25 + 0xb3) = 0;
  *(byte *)((long)puVar25 + 0xb4) = 0;
  *(byte *)((long)puVar25 + 0xb5) = 0;
  *(byte *)((long)puVar25 + 0xb6) = 0;
  *(byte *)((long)puVar25 + 0xb7) = 0;
  *(byte *)((long)puVar25 + 0xb8) = 2;
  *(byte *)((long)puVar25 + 0xb9) = 0;
  *(byte *)((long)puVar25 + 0xba) = 0;
  *(byte *)((long)puVar25 + 0xbb) = 0;
  *(byte *)((long)puVar25 + 0xbc) = 0;
  *(byte *)((long)puVar25 + 0xbd) = 0;
  *(byte *)((long)puVar25 + 0xbe) = 0;
  *(byte *)((long)puVar25 + 0xbf) = 0;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)((long)puVar25 + 0x78);
  *(undefined4 *)((long)puVar25 + 0x70) = uVar9;
  *(undefined4 *)((long)puVar25 + 0x74) = uVar10;
  *(undefined4 *)((long)puVar25 + 0x78) = uVar11;
  *(undefined4 *)((long)puVar25 + 0x7c) = uVar12;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar19 = plVar14 + 1;
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  pbVar30 = pbStack_228;
  *(byte *)((long)puVar25 + 0x80) = *(byte *)((long)puVar16 + 0xa1);
  LOCK();
  lVar26 = *(long *)pbStack_170;
  *(long *)pbStack_170 = *(long *)pbStack_170 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*(long *)pbStack_228 + 0x10))(pbStack_228);
    func_0x0412c2d0(pbVar30);
    LOCK();
    lVar26 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
    if (lVar26 == 0) goto LAB_0d42678c;
LAB_0d4265cc:
    LOCK();
    lVar26 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
    if (lVar26 != 0) goto LAB_0d4265cc;
LAB_0d42678c:
    (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
    func_0x0412c2d0(puVar25);
    LOCK();
    lVar26 = *(long *)pbVar15;
    *(long *)pbVar15 = *(long *)pbVar15 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*(long *)puVar25 + 0x10))(puVar25);
    func_0x0412c2d0(puVar25);
  }
  if (plStack_168 != (long *)0x0) {
    (*(code *)plStack_168[1])(&plStack_168);
  }
  uStack_70 = 0;
  bStack_210 = 0;
  uStack_20f = 0;
  lStack_78 = 0;
  plStack_218 = (long *)&UNK_0f472628;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plStack_268 = plStack_218;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f46cf98;
  pbStack_260 = (byte *)0x0;
  plStack_218 = (long *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_279,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f46cfe8;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (plStack_268 == (long *)0x0) {
    plVar14[0x3a] = 0;
    plVar19 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_268)(&plStack_268,plVar14 + 0x2e);
    plVar19 = plStack_268;
    plStack_268 = (long *)0x0;
    plVar14[0x2e] = (long)plVar19;
    plVar14[0x3a] = 0;
    if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
      plVar19 = (long *)0x0;
    }
    else {
      func_0x0412a280(plVar14[0x14],plVar14[0x12] & 0xfffffffffffffffe);
      plVar19 = plStack_268;
    }
  }
  pbVar15 = (byte *)(plVar14 + 0x12);
  pbVar15[0] = 0x22;
  uVar11 = _UNK_01207d03;
  uVar10 = _UNK_01207cff;
  uVar9 = _UNK_01207cfb;
  pbVar15[1] = 0x66;
  *(undefined4 *)((long)plVar14 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar14 + 0x96) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x9a) = uVar10;
  *(undefined4 *)((long)plVar14 + 0x9e) = uVar11;
  *(undefined4 *)((long)plVar14 + 0xa2) = 0;
  *(undefined2 *)((long)plVar14 + 0xa6) = 0;
  plVar14[0x11] = 0xf6c39062bb9edf3;
  plVar14[0x15] = 0;
  if (plVar19 != (long *)0x0) {
    (*(code *)plVar19[1])(&plStack_268);
  }
  plVar19 = plVar14 + 1;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puStack_270 = (uint *)plVar19;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar19 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  pbStack_228 = (byte *)(plVar14 + 4);
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f46d0c8;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[4] = (long)&UNK_0f46d118;
  plVar19[0xe] = (long)pbStack_228;
  plVar19[0xf] = (long)plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plStack_268 = plVar19 + 4;
  pbStack_260 = (byte *)plVar19;
  puVar16 = (undefined4 *)func_0x0d4b1a90(pbStack_220,0,0);
  puVar27 = (uint *)(plVar14 + 0x11);
  pbVar30 = *(byte **)(puVar16 + 0x24);
  if (pbVar30 < *(byte **)(puVar16 + 0x26)) {
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
    if ((uint *)pbVar30 != puVar27) {
      if ((*pbVar15 & 1) == 0) {
        *(long *)(pbVar30 + 0x18) = plVar14[0x14];
        lVar26 = plVar14[0x13];
        *(long *)(pbVar30 + 8) = *(long *)pbVar15;
        *(long *)(pbVar30 + 0x10) = lVar26;
      }
      else {
        puStack_278 = puVar27;
        FUN_04885070(pbVar30 + 8,plVar14[0x14],plVar14[0x13]);
        puVar27 = puStack_278;
      }
    }
    *(long *)pbVar30 = *(long *)puVar27;
    *(long **)(pbVar30 + 0x28) = plVar19 + 4;
    *(long **)(pbVar30 + 0x30) = plVar19;
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
    pbVar30 = pbVar30 + 0x38;
    *(byte **)(puVar16 + 0x24) = pbVar30;
  }
  else {
    pbVar30 = (byte *)func_0x0d4b38c0(puVar16 + 0x22,puVar27,&plStack_268);
  }
  *(byte **)(puVar16 + 0x24) = pbVar30;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar10;
  *(undefined4 *)(plVar14 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar12;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar20 = plVar19 + 1;
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  pbVar15 = pbStack_260;
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  if (pbStack_260 != (byte *)0x0) {
    LOCK();
    plVar19 = (long *)((long)pbStack_260 + 8);
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)pbStack_260 + 0x10))(pbStack_260);
      func_0x0412c2d0(pbVar15);
    }
  }
  puVar27 = puStack_270;
  LOCK();
  lVar26 = *(long *)puStack_270;
  *(long *)puStack_270 = *(long *)puStack_270 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar26 = *(long *)puVar27;
    *(long *)puVar27 = *(long *)puVar27 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *(long *)puStack_270;
    *(long *)puStack_270 = *(long *)puStack_270 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  apuStack_e8[0] = &UNK_0f472650;
  ppuStack_c8 = apuStack_e8;
  pplVar31 = (long **)(plVar14 + 0x36);
  pplStack_248 = &plStack_268;
  plStack_268 = (long *)&UNK_0f472650;
  lVar26 = 0x20;
  if (pplVar31 == &plStack_268) {
LAB_0d426b82:
    (**(code **)((long)*pplStack_248 + lVar26))();
  }
  else {
    pplVar6 = (long **)plVar14[0x3a];
    if (pplVar6 == pplVar31) {
      plStack_218 = (long *)&UNK_0f472650;
      pplStack_248 = (long **)0x0;
      (*(code *)(*pplVar6)[3])(pplVar6,&plStack_268);
      (**(code **)(*(long *)plVar14[0x3a] + 0x20))();
      plVar14[0x3a] = 0;
      pplStack_248 = &plStack_268;
      (*(code *)plStack_218[3])(&plStack_218,pplVar31);
      (*(code *)plStack_218[4])(&plStack_218);
      plVar14[0x3a] = (long)pplVar31;
      if (pplStack_248 != &plStack_268) goto LAB_0d426b78;
      goto LAB_0d426b82;
    }
    plVar14[0x36] = (long)&UNK_0f472650;
    pplStack_248 = pplVar6;
    plVar14[0x3a] = (long)pplVar31;
    if (pplVar6 == &plStack_268) goto LAB_0d426b82;
LAB_0d426b78:
    lVar26 = 0x28;
    if (pplStack_248 != (long **)0x0) goto LAB_0d426b82;
  }
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  (**(code **)(*(long *)pbStack_228 + 0x10))(pbStack_228,&uStack_188);
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(uStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  if (ppuStack_c8 == apuStack_e8) {
    lVar26 = 0x20;
  }
  else {
    lVar26 = 0x28;
    if (ppuStack_c8 == (undefined **)0x0) goto joined_r0x0d426d78;
  }
  (**(code **)(*ppuStack_c8 + lVar26))();
joined_r0x0d426d78:
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  uStack_b0 = 0;
  bStack_210 = 0;
  uStack_20f = 0;
  lStack_b8 = 0;
  plStack_218 = (long *)&UNK_0f4726d0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plStack_268 = plStack_218;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f46d1d0;
  pbStack_260 = (byte *)0x0;
  plStack_218 = (long *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_279,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar19 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f46d220;
  plVar14[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar14 + 0x2f) = 1;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  if (plStack_268 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_268)(&plStack_268,plVar14 + 0x30);
    plVar20 = plStack_268;
  }
  plStack_268 = (long *)0x0;
  plVar14[0x30] = (long)plVar20;
  puVar27 = (uint *)(plVar14 + 0x12);
  puStack_270 = (uint *)plVar19;
  if (plVar19 == (long *)&DAT_0f552018) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puVar27 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552030;
        uVar11 = uRam000000000f55202c;
        uVar10 = _DAT_0f552028;
        uVar9 = uRam000000000f552024;
        *puVar27 = _DAT_0f552020;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar9;
        *(undefined4 *)(plVar14 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar11;
      }
      else {
        FUN_04885070(puVar27,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar32 = (_DAT_0f552020 & 1) != 0;
      lVar26 = 0xf552021;
      if (bVar32) {
        lVar26 = _DAT_0f552030;
      }
      uVar29 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar32) {
        uVar29 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar27,lVar26,uVar29);
    }
    plVar14[0x11] = _DAT_0f552018;
    plVar14[0x15] = 0;
    if (plStack_268 != (long *)0x0) {
      (*(code *)plStack_268[1])(&plStack_268);
    }
  }
  pbVar15 = pbStack_220;
  plVar19 = plVar14 + 1;
  puStack_278 = puVar27;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f46d300;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0f46d350;
  plVar20[0xe] = (long)(plVar14 + 4);
  plVar20[0xf] = (long)plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plStack_268 = plVar20 + 4;
  pbStack_260 = (byte *)plVar20;
  pbStack_228 = (byte *)(plVar14 + 4);
  puVar16 = (undefined4 *)func_0x0d4b1a90(pbVar15,1,1);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if ((uint *)plVar21 != puStack_270) {
      puVar27 = (uint *)(plVar21 + 1);
      if ((*puStack_278 & 1) == 0) {
        plVar21[3] = *(long *)(puStack_278 + 4);
        lVar26 = *(long *)(puStack_278 + 2);
        *(undefined8 *)puVar27 = *(undefined8 *)puStack_278;
        plVar21[2] = lVar26;
      }
      else {
        puStack_278 = puVar27;
        FUN_04885070(puVar27,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *(long *)puStack_270;
    plVar21[5] = (long)(plVar20 + 4);
    plVar21[6] = (long)plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0d4b38c0(puVar16 + 0x22,puStack_270,&plStack_268);
  }
  pbVar15 = pbStack_228;
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar9 = *puVar16;
  uVar10 = puVar16[1];
  uVar11 = puVar16[2];
  uVar12 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar10;
  *(undefined4 *)(plVar14 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar12;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar21 = plVar20 + 1;
    lVar26 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  pbVar30 = pbStack_260;
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  if (pbStack_260 != (byte *)0x0) {
    LOCK();
    plVar20 = (long *)((long)pbStack_260 + 8);
    lVar26 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar26 == 0) {
      (**(code **)(*(long *)pbStack_260 + 0x10))(pbStack_260);
      func_0x0412c2d0(pbVar30);
    }
  }
  pbVar30 = pbStack_220;
  LOCK();
  lVar26 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar26 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar26 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar26 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  auStack_1a8[0] = 0;
  auStack_1a8[1] = 0;
  auStack_1a8[2] = 0;
  (**(code **)(*(long *)pbVar15 + 0x10))(pbVar15,auStack_1a8);
  if ((auStack_1a8[0] & 1) != 0) {
    func_0x0412a280(auStack_1a8[2],auStack_1a8[0] & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  auStack_1c8[0] = 0;
  auStack_1c8[1] = 0;
  auStack_1c8[2] = 0;
  (**(code **)(*(long *)pbVar30 + 0x10))(pbVar30,auStack_1c8);
  if ((auStack_1c8[0] & 1) != 0) {
    func_0x0412a280(auStack_1c8[2],auStack_1c8[0] & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1494d5d  <any array element>
 */
