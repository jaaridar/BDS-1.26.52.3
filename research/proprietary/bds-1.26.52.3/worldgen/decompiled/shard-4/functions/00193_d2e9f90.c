/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e9f90 (ELF vaddr 0xd2e9f90)
 * Label: callee-of:0x4de9260
 * Body:  [[0d3e9f90, 0d3eae92] [0d3eaea0, 0d3eb48d] [0d3eb490, 0d3eb4cd] [0d3eb4d0, 0d3eb7dc] [0d3ebcb1, 0d3ebd2b]]
 * Ghidra: FUN_0d3e9f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3e9f90(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  char cVar13;
  long *plVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  byte *pbVar29;
  long *plVar30;
  undefined *puVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  byte *pbVar34;
  bool bVar35;
  undefined8 *puStack_2f8;
  byte bStack_2f0;
  undefined4 uStack_2ef;
  undefined4 uStack_2eb;
  undefined4 uStack_2e7;
  undefined4 uStack_2e3;
  undefined2 uStack_2df;
  undefined5 uStack_2dd;
  byte *pbStack_2d8;
  undefined1 uStack_2a9;
  byte *pbStack_2a8;
  uint *puStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  ulong auStack_288 [2];
  byte *pbStack_278;
  long *plStack_270;
  undefined8 *puStack_268;
  byte bStack_260;
  undefined7 uStack_25f;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong auStack_228 [4];
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined4 uStack_197;
  undefined3 uStack_193;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  if (_DAT_0f71ffb8 == 5) {
    puVar24 = (undefined8 *)0xf71ff80;
LAB_0d3ea02b:
    uStack_298 = *puVar24;
    uStack_290 = 0;
    uVar28 = puVar24[1];
    if ((uVar28 & 0x80000000000000) != 0) {
      lVar21 = *(long *)((uVar28 & 0xff00ffffffffffff) - 8);
      lVar27 = lVar21 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar27,8);
      if (plVar14 == (long *)0x0 && lVar27 != 0) {
        func_0x0eec74c0(lVar27,8);
      }
      *plVar14 = lVar21;
      func_0x0eee2f00(plVar14 + 1,uVar28 & 0xff00ffffffffffff,lVar21);
      *(undefined1 *)((long)plVar14 + lVar21 + 8) = 0;
      uVar28 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_288[0] = 0;
    uVar26 = puVar24[2];
    uStack_290 = uVar28;
    if ((uVar26 & 0x80000000000000) != 0) {
      lVar27 = *(long *)((uVar26 & 0xff00ffffffffffff) - 8);
      lVar21 = lVar27 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar21,8);
      if (lVar21 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar21,8);
      }
      *plVar14 = lVar27;
      func_0x0eee2f00(plVar14 + 1,uVar26 & 0xff00ffffffffffff,lVar27);
      *(undefined1 *)((long)plVar14 + lVar27 + 8) = 0;
      uVar26 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
  }
  else {
    if (_DAT_0f71fff8 == 5) {
      puVar24 = (undefined8 *)0xf71ffc0;
      goto LAB_0d3ea02b;
    }
    if (_DAT_0f720038 == 5) {
      puVar24 = (undefined8 *)0xf720000;
      goto LAB_0d3ea02b;
    }
    if (_DAT_0f720078 == 5) {
      puVar24 = (undefined8 *)0xf720040;
      goto LAB_0d3ea02b;
    }
    if (_DAT_0f7200b8 == 5) {
      puVar24 = (undefined8 *)0xf720080;
      goto LAB_0d3ea02b;
    }
    if (_DAT_0f7200f8 == 5) {
      puVar24 = (undefined8 *)0xf7200c0;
      goto LAB_0d3ea02b;
    }
    uStack_298 = 0;
    uStack_290 = 0;
    auStack_288[0] = 0;
    uVar26 = auStack_288[0];
  }
  auStack_288[0] = uVar26;
  cVar13 = func_0x04fa7a10(param_2,&uStack_298);
  if (cVar13 != '\0') goto LAB_0d3eb65f;
  uStack_193 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1a8 = 0xae8ea2e4ee1dc1c3;
  bStack_1a0 = 0x18;
  uStack_19f = 0x5f736563616c70;
  uStack_198 = 0x62;
  uStack_197 = 0x6b636f6c;
  uStack_70 = 0;
  bStack_260 = 0;
  uStack_25f = 0;
  lStack_78 = 0;
  puStack_268 = (undefined8 *)&UNK_0f46dc38;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2f8 = puStack_268;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f464f08;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2eb = (uint)uStack_2eb._3_1_ << 0x18;
  puStack_268 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&uStack_2a9,&UNK_01254d89);
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
  plVar14[4] = (long)&UNK_0f464f58;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_2f8 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2f8)(&puStack_2f8,plVar14 + 0x2e);
    puVar24 = puStack_2f8;
  }
  plVar17 = plVar14 + 1;
  plVar14[0x2e] = (long)puVar24;
  if (puStack_268 != (undefined8 *)0x0) {
    (*(code *)puStack_268[1])(&puStack_268);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_2a0 = (uint *)(plVar14 + 4);
  puVar24[1] = 0;
  puVar24[2] = 0;
  *puVar24 = &UNK_0f465038;
  puVar24[6] = 0;
  puVar24[7] = 0;
  puVar24[4] = &UNK_0f465088;
  puVar24[0xe] = puStack_2a0;
  puVar24[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  bStack_2f0 = (byte)puVar24;
  uStack_2ef = (undefined4)((ulong)puVar24 >> 8);
  uStack_2eb._0_3_ = (undefined3)((ulong)puVar24 >> 0x28);
  puStack_2f8 = puVar24 + 4;
  puVar15 = (undefined4 *)func_0x0509ede0(param_1,&uStack_1a8,1);
  plVar1 = plVar14 + 0x11;
  plVar30 = *(long **)(puVar15 + 0x24);
  if (plVar30 < *(long **)(puVar15 + 0x26)) {
    plVar30[2] = 0;
    plVar30[3] = 0;
    *plVar30 = 0;
    plVar30[1] = 0;
    plVar30[4] = 0;
    if (plVar30 == plVar1) {
LAB_0d3ea40a:
      *plVar30 = *plVar1;
      plVar30[5] = (long)(puVar24 + 4);
      plVar30[6] = (long)puVar24;
LAB_0d3ea467:
      LOCK();
      puVar24[1] = puVar24[1] + 1;
      UNLOCK();
    }
    else {
      if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
        plVar30[3] = plVar14[0x14];
        lVar21 = plVar14[0x13];
        plVar30[1] = plVar14[0x12];
        plVar30[2] = lVar21;
        goto LAB_0d3ea40a;
      }
      func_0x04885070(plVar30 + 1,plVar14[0x14],plVar14[0x13]);
      *plVar30 = *plVar1;
      puVar24 = (undefined8 *)CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
      plVar30[5] = (long)puStack_2f8;
      plVar30[6] = CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
      if (puVar24 != (undefined8 *)0x0) goto LAB_0d3ea467;
    }
    plVar30 = plVar30 + 7;
    *(long **)(puVar15 + 0x24) = plVar30;
  }
  else {
    plVar30 = (long *)func_0x050a24e0(puVar15 + 0x22,plVar1,&puStack_2f8);
  }
  *(long **)(puVar15 + 0x24) = plVar30;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar9;
  *(undefined4 *)(plVar14 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar11;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar30 = plVar1 + 1;
    lVar21 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
  plVar1 = (long *)CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar30 = plVar1 + 1;
    lVar21 = *plVar30;
    *plVar30 = *plVar30 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  LOCK();
  lVar21 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar21 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  (**(code **)(*(long *)puStack_2a0 + 0x10))(puStack_2a0,&uStack_1c8);
  if ((uStack_1c8 & 1) != 0) {
    func_0x0412a280(uStack_1b8,uStack_1c8 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_1a0 & 1) != 0) {
    func_0x0412a280(uStack_190,CONCAT71(uStack_19f,bStack_1a0) & 0xfffffffffffffffe);
  }
  uStack_2e7 = 0;
  uStack_2e3 = 0;
  uStack_2df = 0;
  uStack_2dd = 0;
  puStack_2f8 = (undefined8 *)0x0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2eb = 0;
  pbStack_2d8 = (byte *)0x0;
  func_0x0412f5e0(&bStack_2f0,&UNK_011e4bfa,0x17);
  puStack_2f8 = (undefined8 *)0xecaa303f31372af9;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0f46dc50;
  plVar14 = (long *)func_0x0d3ebd30(param_1,&puStack_2f8,&puStack_f8);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_1e8);
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
  }
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2dd,CONCAT21(uStack_2df,uStack_2e3._3_1_)),
                    CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0)) &
                    0xfffffffffffffffe);
  }
  uStack_2dd = 0;
  pbStack_2d8 = (byte *)0x0;
  bStack_2f0 = 0x24;
  uStack_2ef = _DAT_013a3cd7;
  uStack_2eb = _UNK_013a3cdb;
  uStack_2e7 = _UNK_013a3cdf;
  uStack_2e3 = _UNK_013a3ce3;
  uStack_2df = 0x6e6f;
  puStack_2f8 = (undefined8 *)0xa8ef5ab3b87433b3;
  uStack_130 = 0;
  puStack_138 = &UNK_0f46dc68;
  plVar14 = (long *)func_0x0d3ebd30(param_1,&puStack_2f8,&puStack_138);
  uStack_208 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  (**(code **)(*plVar14 + 0x10))(plVar14,&uStack_208);
  if ((uStack_208 & 1) != 0) {
    func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
  }
  if (puStack_138 != (undefined *)0x0) {
    (**(code **)(puStack_138 + 8))(&puStack_138);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2dd,CONCAT21(uStack_2df,uStack_2e3._3_1_)),
                    CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0)) &
                    0xfffffffffffffffe);
  }
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  bStack_260 = 0x16;
  uStack_25f = 0x7065725f79616d;
  uStack_258 = 0x6563616c;
  puStack_268 = (undefined8 *)0x272a7fa09187bb85;
  puStack_178 = (undefined8 *)0x0;
  uStack_170 = 0;
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
  *(undefined **)pbVar16 = &UNK_0f46dc90;
  puStack_2f8 = (undefined8 *)0x0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2eb = uStack_2eb & 0xff000000;
  if (puStack_178 == (undefined8 *)0x0) {
    puStack_2f8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_178)(&puStack_178,&puStack_2f8);
    puStack_2f8 = puStack_178;
  }
  puStack_178 = (undefined8 *)0x0;
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
  func_0x04aa75f0(pbVar16 + 0x70,&uStack_1a8,&UNK_01254d89);
  pbVar16[0x80] = 0;
  pbVar18 = pbVar16 + 0x88;
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
  *(undefined **)(pbVar16 + 0x20) = &UNK_0f46dce0;
  ppuVar2 = (undefined8 **)(pbVar16 + 0x170);
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
  if (ppuVar2 != &puStack_2f8) {
    if (puStack_2f8 == (undefined8 *)0x0) {
      puVar24 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_2f8)(&puStack_2f8,ppuVar2);
      puVar24 = puStack_2f8;
    }
    puStack_2f8 = (undefined8 *)0x0;
    *ppuVar2 = puVar24;
  }
  puVar3 = (uint *)(pbVar16 + 0x90);
  if (pbVar18 != &DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        *(undefined8 *)(pbVar16 + 0xa0) = _DAT_0f551f70;
        uVar10 = uRam000000000f551f6c;
        uVar9 = _DAT_0f551f68;
        uVar8 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)(pbVar16 + 0x94) = uVar8;
        *(undefined4 *)(pbVar16 + 0x98) = uVar9;
        *(undefined4 *)(pbVar16 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      uVar19 = 0xf551f61;
      if (bVar35) {
        uVar19 = _DAT_0f551f70;
      }
      uVar26 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar26 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      FUN_04885120(puVar3,uVar19,uVar26);
    }
  }
  pbVar33 = pbVar16 + 8;
  *(undefined8 *)(pbVar16 + 0x88) = _DAT_0f551f58;
  pbVar16[0xa8] = 0;
  pbVar16[0xa9] = 0;
  pbVar16[0xaa] = 0;
  pbVar16[0xab] = 0;
  pbVar16[0xac] = 0;
  pbVar16[0xad] = 0;
  pbVar16[0xae] = 0;
  pbVar16[0xaf] = 0;
  puStack_2a0 = puVar3;
  if (puStack_2f8 != (undefined8 *)0x0) {
    (*(code *)puStack_2f8[1])(&puStack_2f8);
  }
  LOCK();
  *(long *)pbVar33 = *(long *)pbVar33 + 1;
  UNLOCK();
  puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar24 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar24[1] = 0;
  puVar24[2] = 0;
  *puVar24 = &UNK_0f46ddd8;
  puVar24[6] = 0;
  puVar24[7] = 0;
  puVar24[4] = &UNK_0f46de28;
  puVar24[0xe] = pbVar16 + 0x20;
  puVar24[0xf] = pbVar16;
  LOCK();
  *(long *)(pbVar16 + 8) = *(long *)(pbVar16 + 8) + 1;
  UNLOCK();
  bStack_2f0 = (byte)puVar24;
  uStack_2ef = (undefined4)((ulong)puVar24 >> 8);
  uStack_2eb._0_3_ = (undefined3)((ulong)puVar24 >> 0x28);
  puStack_2f8 = puVar24 + 4;
  puVar15 = (undefined4 *)func_0x0509ede0(param_1,&puStack_268,0);
  pbVar29 = *(byte **)(puVar15 + 0x24);
  if (pbVar29 < *(byte **)(puVar15 + 0x26)) {
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
    if (pbVar29 == pbVar18) {
LAB_0d3eaada:
      *(undefined8 *)pbVar29 = *(undefined8 *)pbVar18;
      *(undefined8 **)(pbVar29 + 0x28) = puVar24 + 4;
      *(undefined8 **)(pbVar29 + 0x30) = puVar24;
LAB_0d3eab3a:
      LOCK();
      puVar24[1] = puVar24[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_2a0 & 1) == 0) {
        *(undefined8 *)(pbVar29 + 0x18) = *(undefined8 *)(puStack_2a0 + 4);
        uVar19 = *(undefined8 *)(puStack_2a0 + 2);
        *(undefined8 *)(pbVar29 + 8) = *(undefined8 *)puStack_2a0;
        *(undefined8 *)(pbVar29 + 0x10) = uVar19;
        goto LAB_0d3eaada;
      }
      func_0x04885070(pbVar29 + 8,*(undefined8 *)(pbVar16 + 0xa0),*(undefined8 *)(pbVar16 + 0x98));
      *(undefined8 *)pbVar29 = *(undefined8 *)pbVar18;
      puVar24 = (undefined8 *)CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
      *(undefined8 **)(pbVar29 + 0x28) = puStack_2f8;
      *(ulong *)(pbVar29 + 0x30) = CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
      if (puVar24 != (undefined8 *)0x0) goto LAB_0d3eab3a;
    }
    pbVar29 = pbVar29 + 0x38;
    *(byte **)(puVar15 + 0x24) = pbVar29;
  }
  else {
    pbVar29 = (byte *)func_0x050a24e0(puVar15 + 0x22,pbVar18,&puStack_2f8);
  }
  *(byte **)(puVar15 + 0x24) = pbVar29;
  uVar8 = *puVar15;
  uVar9 = puVar15[1];
  uVar10 = puVar15[2];
  uVar11 = puVar15[3];
  if (*(long *)(puVar15 + 2) != 0) {
    LOCK();
    plVar14 = (long *)(*(long *)(puVar15 + 2) + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = *(long **)(pbVar16 + 0x78);
  *(undefined4 *)(pbVar16 + 0x70) = uVar8;
  *(undefined4 *)(pbVar16 + 0x74) = uVar9;
  *(undefined4 *)(pbVar16 + 0x78) = uVar10;
  *(undefined4 *)(pbVar16 + 0x7c) = uVar11;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar21 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  pbVar16[0x80] = *(byte *)((long)puVar15 + 0xa1);
  plVar14 = (long *)CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar21 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  LOCK();
  lVar21 = *(long *)pbVar33;
  *(long *)pbVar33 = *(long *)pbVar33 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
    func_0x0412c2d0(pbVar16);
    LOCK();
    lVar21 = *(long *)pbVar33;
    *(long *)pbVar33 = *(long *)pbVar33 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar21 = *(long *)pbVar33;
    *(long *)pbVar33 = *(long *)pbVar33 + -1;
    UNLOCK();
  }
  if (lVar21 == 0) {
    (**(code **)(*(long *)pbVar16 + 0x10))(pbVar16);
    func_0x0412c2d0(pbVar16);
  }
  if (puStack_178 != (undefined8 *)0x0) {
    (*(code *)puStack_178[1])(&puStack_178);
  }
  if ((bStack_260 & 1) != 0) {
    func_0x0412a280(uStack_250,CONCAT71(uStack_25f,bStack_260) & 0xfffffffffffffffe);
  }
  uStack_b0 = 0;
  bStack_260 = 0;
  uStack_25f = 0;
  lStack_b8 = 0;
  puStack_268 = (undefined8 *)&UNK_0f46de78;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_2f8 = puStack_268;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f4652c8;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  uStack_2eb = uStack_2eb & 0xff000000;
  puStack_268 = (undefined8 *)0x0;
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
  func_0x04aa75f0(plVar14 + 0xe,&uStack_1a8,&UNK_01254d89);
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
  plVar14[4] = (long)&UNK_0f465318;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_2f8 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_2f8)(&puStack_2f8,plVar14 + 0x2e);
    puVar24 = puStack_2f8;
  }
  plVar17 = plVar14 + 1;
  plVar14[0x2e] = (long)puVar24;
  if (puStack_268 != (undefined8 *)0x0) {
    (*(code *)puStack_268[1])(&puStack_268);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puStack_2a0 = (uint *)plVar17;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plStack_180 = plVar14 + 4;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f4653f8;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[4] = (long)&UNK_0f465448;
  plVar17[0xe] = (long)plStack_180;
  plVar17[0xf] = (long)plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plVar1 = plVar17 + 1;
  puVar32 = *(undefined4 **)(pbVar16 + 0xe0);
  puVar6 = *(undefined4 **)(pbVar16 + 0xd8);
  for (puVar15 = puVar6; plStack_270 = plVar17, puVar15 != puVar32; puVar15 = puVar15 + 0x2a) {
    if ((*(long *)(puVar15 + 0x1e) == 0) && (*(long *)(puVar15 + 0x20) == -1)) goto LAB_0d3eb1d3;
  }
  if (puVar32 < *(undefined4 **)(pbVar16 + 0xe8)) {
    func_0x0d43c1d0(puVar32);
    puVar32 = puVar32 + 0x2a;
    *(undefined4 **)(pbVar16 + 0xe0) = puVar32;
LAB_0d3eb165:
    *(undefined4 **)(pbVar16 + 0xe0) = puVar32;
    pbVar18 = *(byte **)(puVar32 + -0x2a);
    if ((*pbVar18 & 1) == 0) {
      *pbVar18 = 0x26;
      pbVar18 = pbVar18 + 1;
    }
    else {
      pbVar18[8] = 0x13;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18 = *(byte **)(pbVar18 + 0x10);
    }
    uVar10 = _UNK_01494d69;
    uVar9 = _UNK_01494d65;
    uVar8 = _UNK_01494d61;
    *(undefined4 *)pbVar18 = _DAT_01494d5d;
    *(undefined4 *)(pbVar18 + 4) = uVar8;
    *(undefined4 *)(pbVar18 + 8) = uVar9;
    *(undefined4 *)(pbVar18 + 0xc) = uVar10;
    pbVar18[0xf] = 0x65;
    pbVar18[0x10] = 0x6e;
    pbVar18[0x11] = 0x74;
    pbVar18[0x12] = 0x3e;
    pbVar18[0x13] = 0;
    lVar21 = *(long *)(pbVar16 + 0xe0);
    puVar15 = (undefined4 *)(lVar21 - 0xa8);
    *(byte *)(lVar21 + -7) = pbVar16[0x80];
    *(undefined8 *)(lVar21 + -0x30) = 0;
    *(undefined8 *)(lVar21 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar21 + -8) = 0;
LAB_0d3eb1d3:
    pbVar18 = (byte *)(plVar14 + 0x11);
    pbVar33 = (byte *)(plVar17 + 4);
    pbVar16 = *(byte **)(puVar15 + 0x24);
    if (pbVar16 < *(byte **)(puVar15 + 0x26)) {
      pbVar16[0x10] = 0;
      pbVar16[0x11] = 0;
      pbVar16[0x12] = 0;
      pbVar16[0x13] = 0;
      pbVar16[0x14] = 0;
      pbVar16[0x15] = 0;
      pbVar16[0x16] = 0;
      pbVar16[0x17] = 0;
      pbVar16[0x18] = 0;
      pbVar16[0x19] = 0;
      pbVar16[0x1a] = 0;
      pbVar16[0x1b] = 0;
      pbVar16[0x1c] = 0;
      pbVar16[0x1d] = 0;
      pbVar16[0x1e] = 0;
      pbVar16[0x1f] = 0;
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      pbVar16[8] = 0;
      pbVar16[9] = 0;
      pbVar16[10] = 0;
      pbVar16[0xb] = 0;
      pbVar16[0xc] = 0;
      pbVar16[0xd] = 0;
      pbVar16[0xe] = 0;
      pbVar16[0xf] = 0;
      pbVar16[0x20] = 0;
      pbVar16[0x21] = 0;
      pbVar16[0x22] = 0;
      pbVar16[0x23] = 0;
      pbVar16[0x24] = 0;
      pbVar16[0x25] = 0;
      pbVar16[0x26] = 0;
      pbVar16[0x27] = 0;
      if (pbVar16 != pbVar18) {
        if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
          *(long *)(pbVar16 + 0x18) = plVar14[0x14];
          lVar21 = plVar14[0x13];
          *(long *)(pbVar16 + 8) = plVar14[0x12];
          *(long *)(pbVar16 + 0x10) = lVar21;
        }
        else {
          pbStack_278 = pbVar18;
          func_0x04885070(pbVar16 + 8,plVar14[0x14],plVar14[0x13]);
          pbVar18 = pbStack_278;
        }
      }
      *(undefined8 *)pbVar16 = *(undefined8 *)pbVar18;
      *(byte **)(pbVar16 + 0x28) = pbVar33;
      *(long **)(pbVar16 + 0x30) = plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      pbVar16 = pbVar16 + 0x38;
      *(byte **)(puVar15 + 0x24) = pbVar16;
    }
    else {
      pbVar16 = pbVar16 + -*(long *)(puVar15 + 0x22);
      uVar26 = ((long)pbVar16 >> 3) * 0x6db6db6db6db6db7 + 1;
      plVar30 = plVar14;
      if (0x492492492492492 < uVar26) goto LAB_0d3eb7aa;
      lVar21 = (long)*(byte **)(puVar15 + 0x26) - *(long *)(puVar15 + 0x22) >> 3;
      uVar28 = lVar21 * -0x2492492492492492;
      if (uVar26 < uVar28) {
        uVar26 = uVar28;
      }
      pbStack_2d8 = (byte *)(puVar15 + 0x22);
      if (0x249249249249248 < (ulong)(lVar21 * 0x6db6db6db6db6db7)) {
        uVar26 = 0x492492492492492;
      }
      pbStack_2a8 = pbVar33;
      pbStack_278 = pbStack_2d8;
      if (uVar26 == 0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar26) goto LAB_0d3eb7a5;
        puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0x38);
        if (puVar24 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar26 * 0x38,0);
          puVar24 = (undefined8 *)0x0;
        }
      }
      pbVar33 = (byte *)((long)puVar24 + (long)pbVar16);
      uStack_2eb._3_1_ = (byte)pbVar33;
      uStack_2e7 = (undefined4)((ulong)pbVar33 >> 8);
      uStack_2e3._0_3_ = (undefined3)((ulong)pbVar33 >> 0x28);
      uStack_2eb._0_3_ = (undefined3)uStack_2e3;
      puVar20 = puVar24 + uVar26 * 7;
      uStack_2e3._3_1_ = SUB81(puVar20,0);
      uStack_2df = (undefined2)((ulong)puVar20 >> 8);
      uStack_2dd = (undefined5)((ulong)puVar20 >> 0x18);
      pbVar29 = (byte *)((long)(puVar24 + 2) + (long)pbVar16);
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
      pbVar29 = (byte *)((long)puVar24 + (long)pbVar16);
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
      pbVar29 = (byte *)((long)(puVar24 + 4) + (long)pbVar16);
      pbVar29[0] = 0;
      pbVar29[1] = 0;
      pbVar29[2] = 0;
      pbVar29[3] = 0;
      pbVar29[4] = 0;
      pbVar29[5] = 0;
      pbVar29[6] = 0;
      pbVar29[7] = 0;
      pbVar29 = pbVar33;
      pbVar34 = pbVar33;
      puStack_2f8 = puVar24;
      bStack_2f0 = uStack_2eb._3_1_;
      uStack_2ef = uStack_2e7;
      if (pbVar33 != pbVar18) {
        pbVar16 = pbVar16 + (long)puVar24;
        if ((*(byte *)(plVar14 + 0x12) & 1) == 0) {
          *(long *)(pbVar16 + 0x18) = plVar14[0x14];
          uVar8 = *(undefined4 *)((long)plVar14 + 0x94);
          lVar21 = plVar14[0x13];
          uVar9 = *(undefined4 *)((long)plVar14 + 0x9c);
          *(undefined4 *)(pbVar16 + 8) = *(undefined4 *)(plVar14 + 0x12);
          *(undefined4 *)(pbVar16 + 0xc) = uVar8;
          *(int *)(pbVar16 + 0x10) = (int)lVar21;
          *(undefined4 *)(pbVar16 + 0x14) = uVar9;
        }
        else {
          func_0x04885070(pbVar16 + 8,plVar14[0x14],plVar14[0x13]);
          pbVar29 = (byte *)CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
          pbVar34 = (byte *)CONCAT35((undefined3)uStack_2e3,CONCAT41(uStack_2e7,uStack_2eb._3_1_));
        }
      }
      pbVar12 = pbStack_278;
      *(undefined8 *)pbVar33 = *(undefined8 *)pbVar18;
      *(byte **)(pbVar33 + 0x28) = pbStack_2a8;
      *(long **)(pbVar33 + 0x30) = plVar17;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      pbVar16 = pbVar34 + 0x38;
      uStack_2eb._3_1_ = (byte)pbVar16;
      uStack_2e7 = (undefined4)((ulong)pbVar16 >> 8);
      uStack_2e3._0_3_ = (undefined3)((ulong)pbVar16 >> 0x28);
      puVar24 = *(undefined8 **)(puVar15 + 0x22);
      puVar20 = *(undefined8 **)(puVar15 + 0x24);
      pbVar29 = pbVar29 + ((long)puVar24 - (long)puVar20);
      pbVar18 = pbVar29;
      puVar22 = puVar24;
      if ((long)puVar24 - (long)puVar20 != 0) {
        do {
          pbVar18[0x10] = 0;
          pbVar18[0x11] = 0;
          pbVar18[0x12] = 0;
          pbVar18[0x13] = 0;
          pbVar18[0x14] = 0;
          pbVar18[0x15] = 0;
          pbVar18[0x16] = 0;
          pbVar18[0x17] = 0;
          pbVar18[0x18] = 0;
          pbVar18[0x19] = 0;
          pbVar18[0x1a] = 0;
          pbVar18[0x1b] = 0;
          pbVar18[0x1c] = 0;
          pbVar18[0x1d] = 0;
          pbVar18[0x1e] = 0;
          pbVar18[0x1f] = 0;
          pbVar18[0] = 0;
          pbVar18[1] = 0;
          pbVar18[2] = 0;
          pbVar18[3] = 0;
          pbVar18[4] = 0;
          pbVar18[5] = 0;
          pbVar18[6] = 0;
          pbVar18[7] = 0;
          pbVar18[8] = 0;
          pbVar18[9] = 0;
          pbVar18[10] = 0;
          pbVar18[0xb] = 0;
          pbVar18[0xc] = 0;
          pbVar18[0xd] = 0;
          pbVar18[0xe] = 0;
          pbVar18[0xf] = 0;
          pbVar18[0x20] = 0;
          pbVar18[0x21] = 0;
          pbVar18[0x22] = 0;
          pbVar18[0x23] = 0;
          pbVar18[0x24] = 0;
          pbVar18[0x25] = 0;
          pbVar18[0x26] = 0;
          pbVar18[0x27] = 0;
          *(undefined8 *)(pbVar18 + 0x18) = puVar22[3];
          uVar19 = puVar22[2];
          *(undefined8 *)(pbVar18 + 8) = puVar22[1];
          *(undefined8 *)(pbVar18 + 0x10) = uVar19;
          *(undefined2 *)(puVar22 + 1) = 0;
          *(undefined8 *)pbVar18 = *puVar22;
          uVar19 = puVar22[6];
          *(undefined8 *)(pbVar18 + 0x28) = puVar22[5];
          *(undefined8 *)(pbVar18 + 0x30) = uVar19;
          puVar22[5] = 0;
          puVar22[6] = 0;
          puVar22 = puVar22 + 7;
          pbVar18 = pbVar18 + 0x38;
          pbStack_2a8 = pbVar29;
        } while (puVar22 != puVar20);
        do {
          plVar17 = (long *)puVar24[6];
          if (plVar17 == (long *)0x0) {
LAB_0d3eb4b4:
            bVar5 = *(byte *)(puVar24 + 1);
          }
          else {
            LOCK();
            plVar30 = plVar17 + 1;
            lVar21 = *plVar30;
            *plVar30 = *plVar30 + -1;
            UNLOCK();
            if (lVar21 != 0) goto LAB_0d3eb4b4;
            (**(code **)(*plVar17 + 0x10))(plVar17);
            func_0x0412c2d0(plVar17);
            bVar5 = *(byte *)(puVar24 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar24[3],puVar24[1] & 0xfffffffffffffffe);
          }
          puVar24 = puVar24 + 7;
        } while (puVar24 != puVar20);
        puVar24 = *(undefined8 **)pbVar12;
        pbVar16 = (byte *)CONCAT35((undefined3)uStack_2e3,CONCAT41(uStack_2e7,uStack_2eb._3_1_));
        pbVar29 = pbStack_2a8;
      }
      *(byte **)(puVar15 + 0x22) = pbVar29;
      *(byte **)(puVar15 + 0x24) = pbVar16;
      lVar21 = *(long *)(puVar15 + 0x26);
      *(ulong *)(puVar15 + 0x26) = CONCAT53(uStack_2dd,CONCAT21(uStack_2df,uStack_2e3._3_1_));
      if (puVar24 != (undefined8 *)0x0) {
        func_0x0412a280(puVar24,lVar21 - (long)puVar24);
      }
    }
    *(byte **)(puVar15 + 0x24) = pbVar16;
    uVar8 = *puVar15;
    uVar9 = puVar15[1];
    uVar10 = puVar15[2];
    uVar11 = puVar15[3];
    if (*(long *)(puVar15 + 2) != 0) {
      LOCK();
      plVar17 = (long *)(*(long *)(puVar15 + 2) + 8);
      *plVar17 = *plVar17 + 1;
      UNLOCK();
    }
    plVar17 = (long *)plVar14[0xf];
    *(undefined4 *)(plVar14 + 0xe) = uVar8;
    *(undefined4 *)((long)plVar14 + 0x74) = uVar9;
    *(undefined4 *)(plVar14 + 0xf) = uVar10;
    *(undefined4 *)((long)plVar14 + 0x7c) = uVar11;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar30 = plVar17 + 1;
      lVar21 = *plVar30;
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_270;
    *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar15 + 0xa1);
    LOCK();
    lVar21 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_270 + 0x10))(plStack_270);
      func_0x0412c2d0(plVar17);
    }
    puVar3 = puStack_2a0;
    LOCK();
    lVar21 = *(long *)puStack_2a0;
    *(long *)puStack_2a0 = *(long *)puStack_2a0 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
      LOCK();
      lVar21 = *(long *)puVar3;
      *(long *)puVar3 = *(long *)puVar3 + -1;
      UNLOCK();
    }
    else {
      LOCK();
      lVar21 = *(long *)puStack_2a0;
      *(long *)puStack_2a0 = *(long *)puStack_2a0 + -1;
      UNLOCK();
    }
    if (lVar21 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    auStack_228[0] = 0;
    auStack_228[1] = 0;
    auStack_228[2] = 0;
    (**(code **)(*plStack_180 + 0x10))(plStack_180,auStack_228);
    if ((auStack_228[0] & 1) != 0) {
      func_0x0412a280(auStack_228[2],auStack_228[0] & 0xfffffffffffffffe);
    }
    if (lStack_b8 != 0) {
      (**(code **)(lStack_b8 + 8))(&lStack_b8);
    }
LAB_0d3eb65f:
    if ((auStack_288[0] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_288[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_288[0] = 0;
    if ((uStack_290 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_290 & 0xff00ffffffffffff) - 8);
    }
    return;
  }
  plVar30 = (long *)((long)puVar32 - (long)puVar6);
  uVar26 = ((long)plVar30 >> 3) * -0x30c30c30c30c30c3 + 1;
  if (0x186186186186186 < uVar26) goto LAB_0d3eb7af;
  pbVar18 = pbVar16 + 0xd8;
  lVar21 = (long)*(undefined4 **)(pbVar16 + 0xe8) - (long)puVar6 >> 3;
  uVar28 = lVar21 * -0x6186186186186186;
  if (uVar26 < uVar28) {
    uVar26 = uVar28;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar21 * -0x30c30c30c30c30c3)) {
    uVar26 = 0x186186186186186;
  }
  pbStack_2d8 = pbVar18;
  if (uVar26 == 0) {
    puVar24 = (undefined8 *)0x0;
LAB_0d3eaf90:
    puVar31 = (undefined *)((long)plVar30 + (long)puVar24);
    uStack_2eb._3_1_ = (byte)puVar31;
    uStack_2e7 = (undefined4)((ulong)puVar31 >> 8);
    uStack_2e3._0_3_ = (undefined3)((ulong)puVar31 >> 0x28);
    uStack_2eb = CONCAT13(uStack_2eb._3_1_,(undefined3)uStack_2e3);
    puVar20 = puVar24 + uVar26 * 0x15;
    uStack_2e3._3_1_ = SUB81(puVar20,0);
    uStack_2df = (undefined2)((ulong)puVar20 >> 8);
    uStack_2dd = (undefined5)((ulong)puVar20 >> 0x18);
    puStack_2f8 = puVar24;
    bStack_2f0 = uStack_2eb._3_1_;
    uStack_2ef = uStack_2e7;
    pbStack_2a8 = pbVar18;
    func_0x0d43c1d0(puVar31);
    puVar32 = (undefined4 *)
              (CONCAT35((undefined3)uStack_2e3,CONCAT41(uStack_2e7,uStack_2eb._3_1_)) + 0xa8);
    lVar21 = *(long *)(pbVar16 + 0xd8);
    lVar27 = *(long *)(pbVar16 + 0xe0);
    lVar25 = (lVar21 - lVar27) + CONCAT35((undefined3)uStack_2eb,CONCAT41(uStack_2ef,bStack_2f0));
    if (lVar21 != lVar27) {
      lVar23 = 0;
      do {
        uVar19 = ((undefined8 *)(lVar21 + lVar23))[1];
        *(undefined8 *)(lVar25 + lVar23) = *(undefined8 *)(lVar21 + lVar23);
        ((undefined8 *)(lVar25 + lVar23))[1] = uVar19;
        *(undefined8 *)(lVar21 + lVar23) = 0;
        ((undefined8 *)(lVar21 + lVar23))[1] = 0;
        puVar24 = (undefined8 *)(lVar25 + 0x20 + lVar23);
        *puVar24 = 0;
        puVar24[1] = 0;
        puVar24 = (undefined8 *)(lVar25 + 0x10 + lVar23);
        *puVar24 = 0;
        puVar24[1] = 0;
        *(undefined8 *)(lVar25 + 0x30 + lVar23) = 0;
        *(undefined8 *)(lVar25 + 0x28 + lVar23) = *(undefined8 *)(lVar21 + 0x28 + lVar23);
        puVar15 = (undefined4 *)(lVar21 + 0x18 + lVar23);
        uVar8 = puVar15[1];
        uVar9 = puVar15[2];
        uVar10 = puVar15[3];
        puVar6 = (undefined4 *)(lVar25 + 0x18 + lVar23);
        *puVar6 = *puVar15;
        puVar6[1] = uVar8;
        puVar6[2] = uVar9;
        puVar6[3] = uVar10;
        *(undefined2 *)(lVar21 + 0x18 + lVar23) = 0;
        *(undefined8 *)(lVar25 + 0x10 + lVar23) = *(undefined8 *)(lVar21 + 0x10 + lVar23);
        FUN_04167a20(lVar25 + lVar23 + 0x38,lVar23 + lVar21 + 0x38);
        puVar24 = (undefined8 *)(lVar21 + 0x40 + lVar23);
        uVar19 = puVar24[1];
        puVar20 = (undefined8 *)(lVar25 + 0x40 + lVar23);
        *puVar20 = *puVar24;
        puVar20[1] = uVar19;
        puVar24 = (undefined8 *)(lVar21 + 0x50 + lVar23);
        uVar19 = puVar24[1];
        puVar20 = (undefined8 *)(lVar25 + 0x50 + lVar23);
        *puVar20 = *puVar24;
        puVar20[1] = uVar19;
        puVar24 = (undefined8 *)(lVar21 + 0x60 + lVar23);
        uVar19 = puVar24[1];
        puVar20 = (undefined8 *)(lVar25 + 0x60 + lVar23);
        *puVar20 = *puVar24;
        puVar20[1] = uVar19;
        puVar24 = (undefined8 *)(lVar21 + 0x60 + lVar23);
        *puVar24 = 0;
        puVar24[1] = 0;
        *(undefined8 *)(lVar25 + 0x70 + lVar23) = *(undefined8 *)(lVar21 + 0x70 + lVar23);
        puVar24 = (undefined8 *)(lVar21 + 0x78 + lVar23);
        uVar19 = puVar24[1];
        puVar20 = (undefined8 *)(lVar25 + 0x78 + lVar23);
        *puVar20 = *puVar24;
        puVar20[1] = uVar19;
        puVar24 = (undefined8 *)(lVar25 + 0x88 + lVar23);
        *puVar24 = 0;
        puVar24[1] = 0;
        *(undefined8 *)(lVar25 + 0x98 + lVar23) = 0;
        puVar15 = (undefined4 *)(lVar21 + 0x88 + lVar23);
        uVar8 = puVar15[1];
        uVar9 = puVar15[2];
        uVar10 = puVar15[3];
        puVar6 = (undefined4 *)(lVar25 + 0x88 + lVar23);
        *puVar6 = *puVar15;
        puVar6[1] = uVar8;
        puVar6[2] = uVar9;
        puVar6[3] = uVar10;
        *(undefined8 *)(lVar25 + 0x98 + lVar23) = *(undefined8 *)(lVar21 + 0x98 + lVar23);
        puVar24 = (undefined8 *)(lVar21 + 0x88 + lVar23);
        *puVar24 = 0;
        puVar24[1] = 0;
        *(undefined8 *)(lVar21 + 0x98 + lVar23) = 0;
        *(undefined2 *)(lVar25 + 0xa0 + lVar23) = *(undefined2 *)(lVar21 + 0xa0 + lVar23);
        lVar4 = lVar23 + lVar21;
        lVar23 = lVar23 + 0xa8;
      } while (lVar4 + 0xa8 != lVar27);
      do {
        func_0x0d43c350(lVar21);
        lVar21 = lVar21 + 0xa8;
      } while (lVar21 != lVar27);
      lVar21 = *(long *)pbStack_2a8;
      plVar17 = plStack_270;
    }
    *(long *)(pbVar16 + 0xd8) = lVar25;
    *(undefined4 **)(pbVar16 + 0xe0) = puVar32;
    lVar27 = *(long *)(pbVar16 + 0xe8);
    *(ulong *)(pbVar16 + 0xe8) = CONCAT53(uStack_2dd,CONCAT21(uStack_2df,uStack_2e3._3_1_));
    if (lVar21 != 0) {
      func_0x0412a280(lVar21,lVar27 - lVar21);
    }
    goto LAB_0d3eb165;
  }
  if (uVar26 < 0x186186186186187) {
    puVar24 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0xa8);
    if (puVar24 == (undefined8 *)0x0) {
      func_0x0eec74c0(uVar26 * 0xa8,0);
      puVar24 = (undefined8 *)0x0;
    }
    goto LAB_0d3eaf90;
  }
LAB_0d3eb7a5:
  func_0x04882eb0();
LAB_0d3eb7aa:
  func_0x0d43c570();
LAB_0d3eb7af:
  uVar19 = func_0x0d43c340();
  if ((*pbVar16 & 1) != 0) {
    func_0x0412a280(plVar30[3],plVar30[1] & 0xfffffffffffffffe);
  }
  func_0x0d43c4b0(&puStack_2f8);
  plVar17 = plStack_270;
  LOCK();
  lVar21 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar21 == 0) {
    (**(code **)(*plStack_270 + 0x10))(plStack_270);
    func_0x0412c2d0(plVar17);
  }
  func_0x0d43a820(plVar14);
  func_0x0d43a850(plVar14);
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  func_0x0ee386e0(auStack_288);
  func_0x0ee386e0(&uStack_290);
  func_0x0eee2d70(uVar19);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x13a3cd7  randomize_rotation
 * 0x1494d5d  <any array element>
 */
