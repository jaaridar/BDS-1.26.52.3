/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd420de0 (ELF vaddr 0xd320de0)
 * Label: callee-of:0x4de9260
 * Body:  [[0d420de0, 0d42147b] [0d421480, 0d421a85] [0d421a90, 0d421acc] [0d421ad0, 0d423d3e] [0d4245cf, 0d42463c] [0d4248e4, 0d42490e]]
 * Ghidra: FUN_0d420de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d420de0(undefined8 param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 **ppuVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 **ppuVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  long lVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  bool bVar35;
  undefined1 uStack_5a1;
  long *plStack_5a0;
  undefined8 *puStack_598;
  byte bStack_590;
  undefined4 uStack_58f;
  undefined1 uStack_58b;
  undefined2 uStack_58a;
  byte bStack_588;
  undefined4 uStack_587;
  undefined4 uStack_583;
  undefined1 uStack_57f;
  undefined6 uStack_57e;
  undefined8 **ppuStack_578;
  uint *puStack_550;
  undefined8 uStack_548;
  uint uStack_540;
  undefined1 uStack_53c;
  undefined2 uStack_53b;
  undefined1 uStack_539;
  undefined4 uStack_538;
  undefined1 uStack_534;
  undefined2 uStack_533;
  undefined1 uStack_531;
  undefined1 uStack_530;
  undefined2 uStack_52f;
  undefined5 uStack_52d;
  undefined8 uStack_528;
  uint *puStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  byte *pbStack_4d8;
  byte *pbStack_4d0;
  ulong auStack_4c8 [4];
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  ulong uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  ulong uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  byte *pbStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *apuStack_68 [4];
  undefined **ppuStack_48;
  
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540._1_3_ = (undefined3)_DAT_0129cd56;
  uStack_540 = CONCAT31(uStack_540._1_3_,0x24);
  uStack_53c = (undefined1)((uint)_DAT_0129cd56 >> 0x18);
  uStack_53b = (undefined2)_UNK_0129cd5a;
  uStack_539 = (undefined1)((uint)_UNK_0129cd5a >> 0x10);
  uStack_538._1_3_ = (undefined3)_UNK_0129cd5e;
  uStack_538 = CONCAT31(uStack_538._1_3_,(char)((uint)_UNK_0129cd5a >> 0x18));
  uStack_534 = (undefined1)((uint)_UNK_0129cd5e >> 0x18);
  uStack_533 = (undefined2)_UNK_0129cd62;
  uStack_531 = (undefined1)((uint)_UNK_0129cd62 >> 0x10);
  uStack_530 = (undefined1)((uint)_UNK_0129cd62 >> 0x18);
  uStack_52f = 0x736b;
  uStack_548 = 0x853a5cbd777e1d34;
  puStack_368 = (undefined8 *)0x0;
  uStack_360 = 0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f471e48;
  puStack_598 = (undefined8 *)0x0;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  if (puStack_368 == (undefined8 *)0x0) {
    puStack_598 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_368)(&puStack_368,&puStack_598);
    puStack_598 = puStack_368;
  }
  puStack_368 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&puStack_518,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar19 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f471e98;
  ppuVar3 = (undefined8 **)(plVar15 + 0x2e);
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (ppuVar3 != &puStack_598) {
    if (puStack_598 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_598)(&puStack_598,ppuVar3);
      puVar16 = puStack_598;
    }
    puStack_598 = (undefined8 *)0x0;
    *ppuVar3 = puVar16;
  }
  puVar2 = (uint *)(plVar15 + 0x12);
  if (plVar19 != (long *)&DAT_0f551f58) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551f70;
        uVar13 = uRam000000000f551f6c;
        uVar12 = _DAT_0f551f68;
        uVar11 = uRam000000000f551f64;
        *puVar2 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar35 = (_DAT_0f551f60 & 1) != 0;
      lVar24 = 0xf551f61;
      if (bVar35) {
        lVar24 = _DAT_0f551f70;
      }
      uVar34 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar35) {
        uVar34 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar2,lVar24,uVar34);
    }
  }
  plVar25 = plVar15 + 1;
  plVar15[0x11] = _DAT_0f551f58;
  plVar15[0x15] = 0;
  plStack_5a0 = plVar19;
  if (puStack_598 != (undefined8 *)0x0) {
    (*(code *)puStack_598[1])(&puStack_598);
  }
  LOCK();
  *plVar25 = *plVar25 + 1;
  UNLOCK();
  puStack_550 = (uint *)plVar25;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f471f90;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f471fe0;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  pbVar17 = (byte *)func_0x0508c8e0(param_1,&uStack_548,1);
  plVar19 = *(long **)(pbVar17 + 0x90);
  if (plVar19 < *(long **)(pbVar17 + 0x98)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 == plStack_5a0) {
LAB_0d42110b:
      *plVar19 = *plStack_5a0;
      plVar19[5] = (long)(puVar16 + 4);
      plVar19[6] = (long)puVar16;
LAB_0d421173:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar2 & 1) == 0) {
        plVar19[3] = plVar15[0x14];
        lVar24 = plVar15[0x13];
        plVar19[1] = *(long *)puVar2;
        plVar19[2] = lVar24;
        goto LAB_0d42110b;
      }
      func_0x04885070(plVar19 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar19 = *plStack_5a0;
      puVar16 = (undefined8 *)
                CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      plVar19[5] = (long)puStack_598;
      plVar19[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d421173;
    }
    plVar19 = plVar19 + 7;
    *(long **)(pbVar17 + 0x90) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x0508ffe0(pbVar17 + 0x88,plStack_5a0,&puStack_598);
  }
  puVar2 = puStack_550;
  *(long **)(pbVar17 + 0x90) = plVar19;
  uVar11 = *(undefined4 *)pbVar17;
  uVar12 = *(undefined4 *)(pbVar17 + 4);
  uVar13 = *(undefined4 *)(pbVar17 + 8);
  uVar14 = *(undefined4 *)(pbVar17 + 0xc);
  if (*(long *)(pbVar17 + 8) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(pbVar17 + 8) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar25 = plVar19 + 1;
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(byte *)(plVar15 + 0x10) = pbVar17[0xa1];
  plVar19 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar25 = plVar19 + 1;
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  LOCK();
  lVar24 = *(long *)puVar2;
  *(long *)puVar2 = *(long *)puVar2 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *(long *)puVar2;
    *(long *)puVar2 = *(long *)puVar2 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *(long *)puVar2;
    *(long *)puVar2 = *(long *)puVar2 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_a0 = 0;
  uStack_510 = 0;
  lStack_a8 = 0;
  puStack_518 = (undefined8 *)&UNK_0f472030;
  pbVar18 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbVar18 == (byte *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_598 = puStack_518;
  pbVar18[8] = 0;
  pbVar18[9] = 0;
  pbVar18[10] = 0;
  pbVar18[0xb] = 0;
  pbVar18[0xc] = 0;
  pbVar18[0xd] = 0;
  pbVar18[0xe] = 0;
  pbVar18[0xf] = 0;
  pbVar18[0x10] = 0;
  pbVar18[0x11] = 0;
  pbVar18[0x12] = 0;
  pbVar18[0x13] = 0;
  pbVar18[0x14] = 0;
  pbVar18[0x15] = 0;
  pbVar18[0x16] = 0;
  pbVar18[0x17] = 0;
  *(undefined **)pbVar18 = &UNK_0f46c040;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0f2ccd78;
  pbVar18[0x28] = 0;
  pbVar18[0x29] = 0;
  pbVar18[0x2a] = 0;
  pbVar18[0x2b] = 0;
  pbVar18[0x2c] = 0;
  pbVar18[0x2d] = 0;
  pbVar18[0x2e] = 0;
  pbVar18[0x2f] = 0;
  pbVar18[0x30] = 0;
  pbVar18[0x31] = 0;
  pbVar18[0x32] = 0;
  pbVar18[0x33] = 0;
  pbVar18[0x34] = 0;
  pbVar18[0x35] = 0;
  pbVar18[0x36] = 0;
  pbVar18[0x37] = 0;
  pbVar18[0x38] = 0;
  pbVar18[0x39] = 0;
  pbVar18[0x3a] = 0;
  pbVar18[0x3b] = 0;
  pbVar18[0x3c] = 0;
  pbVar18[0x3d] = 0;
  pbVar18[0x3e] = 0;
  pbVar18[0x3f] = 0;
  pbVar18[0x40] = 0;
  pbVar18[0x41] = 0;
  pbVar18[0x42] = 0;
  pbVar18[0x43] = 0;
  pbVar18[0x44] = 0;
  pbVar18[0x45] = 0;
  pbVar18[0x46] = 0;
  pbVar18[0x47] = 0;
  pbVar18[0x48] = 0;
  pbVar18[0x49] = 0;
  pbVar18[0x4a] = 0;
  pbVar18[0x4b] = 0;
  pbVar18[0x4c] = 0;
  pbVar18[0x4d] = 0;
  pbVar18[0x4e] = 0;
  pbVar18[0x4f] = 0;
  pbVar18[0x50] = 0;
  pbVar18[0x51] = 0;
  pbVar18[0x52] = 0;
  pbVar18[0x53] = 0;
  pbVar18[0x54] = 0;
  pbVar18[0x55] = 0;
  pbVar18[0x56] = 0;
  pbVar18[0x57] = 0;
  pbVar18[0x58] = 0;
  pbVar18[0x59] = 0;
  pbVar18[0x5a] = 0;
  pbVar18[0x5b] = 0;
  pbVar18[0x5c] = 0;
  pbVar18[0x5d] = 0;
  pbVar18[0x5e] = 0;
  pbVar18[0x5f] = 0;
  pbVar18[0x60] = 0;
  pbVar18[0x61] = 0;
  pbVar18[0x62] = 0;
  pbVar18[99] = 0;
  pbVar18[100] = 0;
  pbVar18[0x65] = 0;
  pbVar18[0x66] = 0;
  pbVar18[0x67] = 0;
  pbVar18[0x68] = 0;
  func_0x04aa75f0(pbVar18 + 0x70,&uStack_5a1,&UNK_01254d89);
  pbVar18[0x80] = 0;
  pbVar18[0x88] = 0;
  pbVar18[0x89] = 0;
  pbVar18[0x8a] = 0;
  pbVar18[0x8b] = 0;
  pbVar18[0x8c] = 0;
  pbVar18[0x8d] = 0;
  pbVar18[0x8e] = 0;
  pbVar18[0x8f] = 0;
  pbVar18[0x90] = 0;
  pbVar18[0x91] = 0;
  pbVar18[0x92] = 0;
  pbVar18[0x93] = 0;
  pbVar18[0x94] = 0;
  pbVar18[0x95] = 0;
  pbVar18[0x96] = 0;
  pbVar18[0x97] = 0;
  pbVar18[0x98] = 0;
  pbVar18[0x99] = 0;
  pbVar18[0x9a] = 0;
  pbVar18[0x9b] = 0;
  pbVar18[0x9c] = 0;
  pbVar18[0x9d] = 0;
  pbVar18[0x9e] = 0;
  pbVar18[0x9f] = 0;
  pbVar18[0xa0] = 0;
  pbVar18[0xa1] = 0;
  pbVar18[0xa2] = 0;
  pbVar18[0xa3] = 0;
  pbVar18[0xa4] = 0;
  pbVar18[0xa5] = 0;
  pbVar18[0xa6] = 0;
  pbVar18[0xa7] = 0;
  pbVar18[0xa8] = 0;
  pbVar18[0xa9] = 0;
  pbVar18[0xaa] = 0;
  pbVar18[0xab] = 0;
  pbVar18[0xac] = 0;
  pbVar18[0xad] = 0;
  pbVar18[0xae] = 0;
  pbVar18[0xaf] = 0;
  pbVar18[0xb0] = 0;
  pbVar18[0xb1] = 0;
  pbVar18[0xb2] = 0;
  pbVar18[0xb3] = 0;
  pbVar18[0xb4] = 0;
  pbVar18[0xb5] = 0;
  pbVar18[0xb6] = 0;
  pbVar18[0xb7] = 0;
  pbVar18[0xb8] = 0xff;
  pbVar18[0xb9] = 0xff;
  pbVar18[0xba] = 0xff;
  pbVar18[0xbb] = 0xff;
  pbVar18[0xbc] = 0;
  pbVar18[0xbd] = 0;
  pbVar18[0xbe] = 0;
  pbVar18[0xbf] = 0;
  pbVar18[0x130] = 0;
  pbVar18[0x131] = 0;
  pbVar18[0x132] = 0;
  pbVar18[0x133] = 0;
  pbVar18[0x134] = 0;
  pbVar18[0x135] = 0;
  pbVar18[0x136] = 0;
  pbVar18[0x137] = 0;
  pbVar18[0x138] = 0;
  pbVar18[0x139] = 0;
  pbVar18[0x13a] = 0;
  pbVar18[0x13b] = 0;
  pbVar18[0x13c] = 0;
  pbVar18[0x13d] = 0;
  pbVar18[0x13e] = 0;
  pbVar18[0x13f] = 0;
  pbVar18[0xc0] = 0;
  pbVar18[0xc1] = 0;
  pbVar18[0xc2] = 0;
  pbVar18[0xc3] = 0;
  pbVar18[0xc4] = 0;
  pbVar18[0xc5] = 0;
  pbVar18[0xc6] = 0;
  pbVar18[199] = 0;
  pbVar18[200] = 0;
  pbVar18[0xc9] = 0;
  pbVar18[0xca] = 0;
  pbVar18[0xcb] = 0;
  pbVar18[0xcc] = 0;
  pbVar18[0xcd] = 0;
  pbVar18[0xce] = 0;
  pbVar18[0xcf] = 0;
  pbVar18[0xd0] = 0;
  pbVar18[0xd1] = 0;
  pbVar18[0xd2] = 0;
  pbVar18[0xd3] = 0;
  pbVar18[0xd4] = 0;
  pbVar18[0xd5] = 0;
  pbVar18[0xd6] = 0;
  pbVar18[0xd7] = 0;
  pbVar18[0xd8] = 0;
  pbVar18[0xd9] = 0;
  pbVar18[0xda] = 0;
  pbVar18[0xdb] = 0;
  pbVar18[0xdc] = 0;
  pbVar18[0xdd] = 0;
  pbVar18[0xde] = 0;
  pbVar18[0xdf] = 0;
  pbVar18[0xe0] = 0;
  pbVar18[0xe1] = 0;
  pbVar18[0xe2] = 0;
  pbVar18[0xe3] = 0;
  pbVar18[0xe4] = 0;
  pbVar18[0xe5] = 0;
  pbVar18[0xe6] = 0;
  pbVar18[0xe7] = 0;
  pbVar18[0xe8] = 0;
  pbVar18[0xe9] = 0;
  pbVar18[0xea] = 0;
  pbVar18[0xeb] = 0;
  pbVar18[0xec] = 0;
  pbVar18[0xed] = 0;
  pbVar18[0xee] = 0;
  pbVar18[0xef] = 0;
  pbVar18[0xf0] = 0;
  pbVar18[0xf1] = 0;
  pbVar18[0xf2] = 0;
  pbVar18[0xf3] = 0;
  pbVar18[0xf4] = 0;
  pbVar18[0xf5] = 0;
  pbVar18[0xf6] = 0;
  pbVar18[0xf7] = 0;
  pbVar18[0xf8] = 0;
  pbVar18[0xf9] = 0;
  pbVar18[0xfa] = 0;
  pbVar18[0xfb] = 0;
  pbVar18[0xfc] = 0;
  pbVar18[0xfd] = 0;
  pbVar18[0xfe] = 0;
  pbVar18[0xff] = 0;
  *(undefined **)(pbVar18 + 0x20) = &UNK_0f46c090;
  pbVar18[0x170] = 0;
  pbVar18[0x171] = 0;
  pbVar18[0x172] = 0;
  pbVar18[0x173] = 0;
  pbVar18[0x174] = 0;
  pbVar18[0x175] = 0;
  pbVar18[0x176] = 0;
  pbVar18[0x177] = 0;
  pbVar18[0x178] = 0;
  pbVar18[0x179] = 0;
  pbVar18[0x17a] = 0;
  pbVar18[0x17b] = 0;
  pbVar18[0x17c] = 0;
  pbVar18[0x17d] = 0;
  pbVar18[0x17e] = 0;
  pbVar18[0x17f] = 0;
  if (puStack_598 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_598)(&puStack_598,pbVar18 + 0x170);
    puVar16 = puStack_598;
  }
  pbVar28 = pbVar18 + 8;
  *(undefined8 **)(pbVar18 + 0x170) = puVar16;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *(long *)pbVar28 = *(long *)pbVar28 + 1;
  UNLOCK();
  puStack_520 = (uint *)pbVar28;
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbStack_370 = pbVar18 + 0x20;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f46c170;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[4] = (long)&UNK_0f46c1c0;
  plVar19[0xe] = (long)pbStack_370;
  plVar19[0xf] = (long)pbVar18;
  LOCK();
  *(long *)(pbVar18 + 8) = *(long *)(pbVar18 + 8) + 1;
  UNLOCK();
  puStack_550 = (uint *)(plVar19 + 1);
  puVar27 = (undefined8 *)plVar15[0x1c];
  puVar20 = (undefined8 *)plVar15[0x1b];
  for (puVar16 = puVar20; plStack_5a0 = plVar19, puVar16 != puVar27; puVar16 = puVar16 + 0x15) {
    if ((puVar16[0xf] == 0) && (puVar16[0x10] == -1)) goto LAB_0d4217d2;
  }
  if ((undefined8 *)plVar15[0x1d] <= puVar27) {
    pbVar28 = (byte *)((long)puVar27 - (long)puVar20);
    puVar16 = (undefined8 *)(((long)pbVar28 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((undefined8 *)0x186186186186186 < puVar16) goto LAB_0d423d13;
    pbVar17 = (byte *)(plVar15 + 0x1b);
    lVar24 = plVar15[0x1d] - (long)puVar20 >> 3;
    puVar20 = (undefined8 *)(lVar24 * -0x6186186186186186);
    if (puVar16 < puVar20) {
      puVar16 = puVar20;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar24 * -0x30c30c30c30c30c3)) {
      puVar16 = (undefined8 *)0x186186186186186;
    }
    ppuStack_578 = (undefined8 **)pbVar17;
    if (puVar16 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
LAB_0d421588:
      pbVar28 = pbVar28 + (long)puVar20;
      bStack_588 = (byte)pbVar28;
      uStack_587 = (undefined4)((ulong)pbVar28 >> 8);
      uStack_583._0_3_ = (undefined3)((ulong)pbVar28 >> 0x28);
      uStack_58b = (undefined1)((ulong)pbVar28 >> 0x28);
      uStack_58a = (undefined2)((ulong)pbVar28 >> 0x30);
      puVar16 = puVar20 + (long)puVar16 * 0x15;
      uStack_583._3_1_ = SUB81(puVar16,0);
      uStack_57f = (undefined1)((ulong)puVar16 >> 8);
      uStack_57e = (undefined6)((ulong)puVar16 >> 0x10);
      puStack_598 = puVar20;
      bStack_590 = bStack_588;
      uStack_58f = uStack_587;
      pbStack_4d0 = pbVar17;
      func_0x0d4a68e0(pbVar28);
      puVar16 = (undefined8 *)CONCAT35((undefined3)uStack_583,CONCAT41(uStack_587,bStack_588));
      puVar20 = puVar16 + 0x15;
      lVar24 = plVar15[0x1b];
      lVar33 = plVar15[0x1c];
      lVar29 = (lVar24 - lVar33) +
               CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (lVar24 != lVar33) {
        lVar31 = 0;
        pbStack_4d8 = pbVar18;
        do {
          uVar26 = ((undefined8 *)(lVar24 + lVar31))[1];
          *(undefined8 *)(lVar29 + lVar31) = *(undefined8 *)(lVar24 + lVar31);
          ((undefined8 *)(lVar29 + lVar31))[1] = uVar26;
          *(undefined8 *)(lVar24 + lVar31) = 0;
          ((undefined8 *)(lVar24 + lVar31))[1] = 0;
          puVar27 = (undefined8 *)(lVar29 + 0x20 + lVar31);
          *puVar27 = 0;
          puVar27[1] = 0;
          puVar27 = (undefined8 *)(lVar29 + 0x10 + lVar31);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)(lVar29 + 0x30 + lVar31) = 0;
          *(undefined8 *)(lVar29 + 0x28 + lVar31) = *(undefined8 *)(lVar24 + 0x28 + lVar31);
          puVar22 = (undefined4 *)(lVar24 + 0x18 + lVar31);
          uVar11 = puVar22[1];
          uVar12 = puVar22[2];
          uVar13 = puVar22[3];
          puVar5 = (undefined4 *)(lVar29 + 0x18 + lVar31);
          *puVar5 = *puVar22;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          *(undefined2 *)(lVar24 + 0x18 + lVar31) = 0;
          *(undefined8 *)(lVar29 + 0x10 + lVar31) = *(undefined8 *)(lVar24 + 0x10 + lVar31);
          func_0x04167a20(lVar31 + lVar29 + 0x38,lVar24 + lVar31 + 0x38);
          puVar27 = (undefined8 *)(lVar24 + 0x40 + lVar31);
          uVar26 = puVar27[1];
          puVar6 = (undefined8 *)(lVar29 + 0x40 + lVar31);
          *puVar6 = *puVar27;
          puVar6[1] = uVar26;
          puVar27 = (undefined8 *)(lVar24 + 0x50 + lVar31);
          uVar26 = puVar27[1];
          puVar6 = (undefined8 *)(lVar29 + 0x50 + lVar31);
          *puVar6 = *puVar27;
          puVar6[1] = uVar26;
          puVar27 = (undefined8 *)(lVar24 + 0x60 + lVar31);
          uVar26 = puVar27[1];
          puVar6 = (undefined8 *)(lVar29 + 0x60 + lVar31);
          *puVar6 = *puVar27;
          puVar6[1] = uVar26;
          puVar27 = (undefined8 *)(lVar24 + 0x60 + lVar31);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)(lVar29 + 0x70 + lVar31) = *(undefined8 *)(lVar24 + 0x70 + lVar31);
          puVar27 = (undefined8 *)(lVar24 + 0x78 + lVar31);
          uVar26 = puVar27[1];
          puVar6 = (undefined8 *)(lVar29 + 0x78 + lVar31);
          *puVar6 = *puVar27;
          puVar6[1] = uVar26;
          puVar27 = (undefined8 *)(lVar29 + 0x88 + lVar31);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)(lVar29 + 0x98 + lVar31) = 0;
          puVar22 = (undefined4 *)(lVar24 + 0x88 + lVar31);
          uVar11 = puVar22[1];
          uVar12 = puVar22[2];
          uVar13 = puVar22[3];
          puVar5 = (undefined4 *)(lVar29 + 0x88 + lVar31);
          *puVar5 = *puVar22;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          *(undefined8 *)(lVar29 + 0x98 + lVar31) = *(undefined8 *)(lVar24 + 0x98 + lVar31);
          puVar27 = (undefined8 *)(lVar24 + 0x88 + lVar31);
          *puVar27 = 0;
          puVar27[1] = 0;
          *(undefined8 *)(lVar24 + 0x98 + lVar31) = 0;
          *(undefined2 *)(lVar29 + 0xa0 + lVar31) = *(undefined2 *)(lVar24 + 0xa0 + lVar31);
          lVar4 = lVar24 + lVar31;
          lVar31 = lVar31 + 0xa8;
        } while (lVar4 + 0xa8 != lVar33);
        do {
          func_0x0d4a6a60(lVar24);
          lVar24 = lVar24 + 0xa8;
        } while (lVar24 != lVar33);
        lVar24 = *(long *)pbStack_4d0;
        pbVar18 = pbStack_4d8;
      }
      plVar15[0x1b] = lVar29;
      plVar15[0x1c] = (long)puVar20;
      lVar33 = plVar15[0x1d];
      plVar15[0x1d] = CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_));
      if (lVar24 != 0) {
        func_0x0412a280(lVar24,lVar33 - lVar24);
      }
      plVar15[0x1c] = (long)puVar20;
      pbVar17 = (byte *)*puVar16;
      bVar7 = *pbVar17;
      plVar19 = plStack_5a0;
      goto joined_r0x0d42177e;
    }
    if (puVar16 < (undefined8 *)0x186186186186187) {
      puVar20 = (undefined8 *)
                (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar16 * 0xa8);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0((long)puVar16 * 0xa8,0);
        puVar20 = (undefined8 *)0x0;
      }
      goto LAB_0d421588;
    }
LAB_0d423d09:
    func_0x04882eb0();
LAB_0d423d0e:
    func_0x0d4a6c80();
LAB_0d423d13:
    uVar26 = func_0x0d4a6a50();
    if ((*pbVar28 & 1) != 0) {
      func_0x0412a280(puVar16[3],puVar16[1] & 0xfffffffffffffffe);
    }
    *(undefined8 **)(pbVar17 + 0x90) = puVar16;
    func_0x0508b290(&puStack_598);
    LOCK();
    lVar24 = *(long *)pbVar18;
    *(long *)pbVar18 = *(long *)pbVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    LOCK();
    lVar24 = *(long *)pbVar18;
    *(long *)pbVar18 = *(long *)pbVar18 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    if (lStack_1e8 != 0) {
      (**(code **)(lStack_1e8 + 8))(&lStack_1e8);
    }
    if ((uStack_540 & 1) != 0) {
      func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                      CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                      0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar26);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  func_0x0d4a68e0(puVar27);
  plVar15[0x1c] = (long)(puVar27 + 0x15);
  plVar15[0x1c] = (long)(puVar27 + 0x15);
  pbVar17 = (byte *)*puVar27;
  bVar7 = *pbVar17;
joined_r0x0d42177e:
  if ((bVar7 & 1) == 0) {
    *pbVar17 = 0x26;
    pbVar17 = pbVar17 + 1;
  }
  else {
    pbVar17[8] = 0x13;
    pbVar17[9] = 0;
    pbVar17[10] = 0;
    pbVar17[0xb] = 0;
    pbVar17[0xc] = 0;
    pbVar17[0xd] = 0;
    pbVar17[0xe] = 0;
    pbVar17[0xf] = 0;
    pbVar17 = *(byte **)(pbVar17 + 0x10);
  }
  uVar13 = _UNK_01494d69;
  uVar12 = _UNK_01494d65;
  uVar11 = _UNK_01494d61;
  *(undefined4 *)pbVar17 = _DAT_01494d5d;
  *(undefined4 *)(pbVar17 + 4) = uVar11;
  *(undefined4 *)(pbVar17 + 8) = uVar12;
  *(undefined4 *)(pbVar17 + 0xc) = uVar13;
  pbVar17[0xf] = 0x65;
  pbVar17[0x10] = 0x6e;
  pbVar17[0x11] = 0x74;
  pbVar17[0x12] = 0x3e;
  pbVar17[0x13] = 0;
  lVar24 = plVar15[0x1c];
  puVar16 = (undefined8 *)(lVar24 + -0xa8);
  *(char *)(lVar24 + -7) = (char)plVar15[0x10];
  *(undefined8 *)(lVar24 + -0x30) = 0;
  *(undefined8 *)(lVar24 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar24 + -8) = 0;
LAB_0d4217d2:
  pbVar30 = pbVar18 + 0x88;
  pbVar17 = (byte *)(plVar19 + 4);
  pbVar28 = (byte *)puVar16[0x12];
  if (pbVar28 < (byte *)puVar16[0x13]) {
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
    if (pbVar28 != pbVar30) {
      if ((pbVar18[0x90] & 1) == 0) {
        *(long *)(pbVar28 + 0x18) = *(long *)(pbVar18 + 0xa0);
        lVar24 = *(long *)(pbVar18 + 0x98);
        *(long *)(pbVar28 + 8) = *(long *)(pbVar18 + 0x90);
        *(long *)(pbVar28 + 0x10) = lVar24;
      }
      else {
        pbStack_4d8 = pbVar30;
        func_0x04885070(pbVar28 + 8,*(long *)(pbVar18 + 0xa0),*(long *)(pbVar18 + 0x98));
        pbVar30 = pbStack_4d8;
      }
    }
    *(long *)pbVar28 = *(long *)pbVar30;
    *(byte **)(pbVar28 + 0x28) = pbVar17;
    *(long **)(pbVar28 + 0x30) = plVar19;
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
    pbVar28 = pbVar28 + 0x38;
    puVar16[0x12] = pbVar28;
    pbVar17 = pbStack_370;
  }
  else {
    pbVar28 = pbVar28 + -puVar16[0x11];
    uVar34 = ((long)pbVar28 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar34) goto LAB_0d423d0e;
    lVar24 = (long)puVar16[0x13] - puVar16[0x11] >> 3;
    uVar10 = lVar24 * -0x2492492492492492;
    if (uVar34 < uVar10) {
      uVar34 = uVar10;
    }
    ppuStack_578 = (undefined8 **)(puVar16 + 0x11);
    if (0x249249249249248 < (ulong)(lVar24 * 0x6db6db6db6db6db7)) {
      uVar34 = 0x492492492492492;
    }
    pbStack_4d8 = (byte *)ppuStack_578;
    pbStack_4d0 = pbVar17;
    if (uVar34 == 0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      if (0x492492492492492 < uVar34) goto LAB_0d423d09;
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar34 * 0x38);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar34 * 0x38,0);
        puVar20 = (undefined8 *)0x0;
      }
    }
    pbVar17 = (byte *)((long)puVar20 + (long)pbVar28);
    bStack_588 = (byte)pbVar17;
    uStack_587 = (undefined4)((ulong)pbVar17 >> 8);
    uStack_583._0_3_ = (undefined3)((ulong)pbVar17 >> 0x28);
    uStack_58b = (undefined1)((ulong)pbVar17 >> 0x28);
    uStack_58a = (undefined2)((ulong)pbVar17 >> 0x30);
    puVar27 = puVar20 + uVar34 * 7;
    uStack_583._3_1_ = SUB81(puVar27,0);
    uStack_57f = (undefined1)((ulong)puVar27 >> 8);
    uStack_57e = (undefined6)((ulong)puVar27 >> 0x10);
    pbVar21 = (byte *)((long)(puVar20 + 2) + (long)pbVar28);
    pbVar21[0] = 0;
    pbVar21[1] = 0;
    pbVar21[2] = 0;
    pbVar21[3] = 0;
    pbVar21[4] = 0;
    pbVar21[5] = 0;
    pbVar21[6] = 0;
    pbVar21[7] = 0;
    pbVar21[8] = 0;
    pbVar21[9] = 0;
    pbVar21[10] = 0;
    pbVar21[0xb] = 0;
    pbVar21[0xc] = 0;
    pbVar21[0xd] = 0;
    pbVar21[0xe] = 0;
    pbVar21[0xf] = 0;
    pbVar21 = (byte *)((long)puVar20 + (long)pbVar28);
    pbVar21[0] = 0;
    pbVar21[1] = 0;
    pbVar21[2] = 0;
    pbVar21[3] = 0;
    pbVar21[4] = 0;
    pbVar21[5] = 0;
    pbVar21[6] = 0;
    pbVar21[7] = 0;
    pbVar21[8] = 0;
    pbVar21[9] = 0;
    pbVar21[10] = 0;
    pbVar21[0xb] = 0;
    pbVar21[0xc] = 0;
    pbVar21[0xd] = 0;
    pbVar21[0xe] = 0;
    pbVar21[0xf] = 0;
    pbVar21 = (byte *)((long)(puVar20 + 4) + (long)pbVar28);
    pbVar21[0] = 0;
    pbVar21[1] = 0;
    pbVar21[2] = 0;
    pbVar21[3] = 0;
    pbVar21[4] = 0;
    pbVar21[5] = 0;
    pbVar21[6] = 0;
    pbVar21[7] = 0;
    pbVar21 = pbVar17;
    pbVar32 = pbVar17;
    puStack_598 = puVar20;
    bStack_590 = bStack_588;
    uStack_58f = uStack_587;
    if (pbVar17 != pbVar30) {
      pbVar28 = pbVar28 + (long)puVar20;
      if ((pbVar18[0x90] & 1) == 0) {
        *(long *)(pbVar28 + 0x18) = *(long *)(pbVar18 + 0xa0);
        uVar11 = *(undefined4 *)(pbVar18 + 0x94);
        uVar12 = *(undefined4 *)(pbVar18 + 0x98);
        uVar13 = *(undefined4 *)(pbVar18 + 0x9c);
        *(undefined4 *)(pbVar28 + 8) = *(undefined4 *)(pbVar18 + 0x90);
        *(undefined4 *)(pbVar28 + 0xc) = uVar11;
        *(undefined4 *)(pbVar28 + 0x10) = uVar12;
        *(undefined4 *)(pbVar28 + 0x14) = uVar13;
      }
      else {
        func_0x04885070(pbVar28 + 8,*(long *)(pbVar18 + 0xa0),*(long *)(pbVar18 + 0x98));
        pbVar21 = (byte *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
        pbVar32 = (byte *)CONCAT35((undefined3)uStack_583,CONCAT41(uStack_587,bStack_588));
      }
    }
    *(long *)pbVar17 = *(long *)pbVar30;
    *(byte **)(pbVar17 + 0x28) = pbStack_4d0;
    *(long **)(pbVar17 + 0x30) = plStack_5a0;
    LOCK();
    plStack_5a0[1] = plStack_5a0[1] + 1;
    UNLOCK();
    pbVar28 = pbVar32 + 0x38;
    bStack_588 = (byte)pbVar28;
    uStack_587 = (undefined4)((ulong)pbVar28 >> 8);
    uStack_583._0_3_ = (undefined3)((ulong)pbVar28 >> 0x28);
    plVar15 = (long *)puVar16[0x11];
    plVar19 = (long *)puVar16[0x12];
    pbVar21 = pbVar21 + ((long)plVar15 - (long)plVar19);
    pbVar17 = pbVar21;
    plVar25 = plVar15;
    if ((long)plVar15 - (long)plVar19 != 0) {
      do {
        pbVar17[0x10] = 0;
        pbVar17[0x11] = 0;
        pbVar17[0x12] = 0;
        pbVar17[0x13] = 0;
        pbVar17[0x14] = 0;
        pbVar17[0x15] = 0;
        pbVar17[0x16] = 0;
        pbVar17[0x17] = 0;
        pbVar17[0x18] = 0;
        pbVar17[0x19] = 0;
        pbVar17[0x1a] = 0;
        pbVar17[0x1b] = 0;
        pbVar17[0x1c] = 0;
        pbVar17[0x1d] = 0;
        pbVar17[0x1e] = 0;
        pbVar17[0x1f] = 0;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        pbVar17[8] = 0;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0xc] = 0;
        pbVar17[0xd] = 0;
        pbVar17[0xe] = 0;
        pbVar17[0xf] = 0;
        pbVar17[0x20] = 0;
        pbVar17[0x21] = 0;
        pbVar17[0x22] = 0;
        pbVar17[0x23] = 0;
        pbVar17[0x24] = 0;
        pbVar17[0x25] = 0;
        pbVar17[0x26] = 0;
        pbVar17[0x27] = 0;
        *(long *)(pbVar17 + 0x18) = plVar25[3];
        lVar24 = plVar25[2];
        *(long *)(pbVar17 + 8) = plVar25[1];
        *(long *)(pbVar17 + 0x10) = lVar24;
        *(undefined2 *)(plVar25 + 1) = 0;
        *(long *)pbVar17 = *plVar25;
        lVar24 = plVar25[6];
        *(long *)(pbVar17 + 0x28) = plVar25[5];
        *(long *)(pbVar17 + 0x30) = lVar24;
        plVar25[5] = 0;
        plVar25[6] = 0;
        plVar25 = plVar25 + 7;
        pbVar17 = pbVar17 + 0x38;
        pbStack_4d0 = pbVar21;
      } while (plVar25 != plVar19);
      do {
        plVar25 = (long *)plVar15[6];
        if (plVar25 == (long *)0x0) {
LAB_0d421ab4:
          bVar7 = *(byte *)(plVar15 + 1);
        }
        else {
          LOCK();
          plVar23 = plVar25 + 1;
          lVar24 = *plVar23;
          *plVar23 = *plVar23 + -1;
          UNLOCK();
          if (lVar24 != 0) goto LAB_0d421ab4;
          (**(code **)(*plVar25 + 0x10))(plVar25);
          func_0x0412c2d0(plVar25);
          bVar7 = *(byte *)(plVar15 + 1);
        }
        if ((bVar7 & 1) != 0) {
          func_0x0412a280(plVar15[3],plVar15[1] & 0xfffffffffffffffe);
        }
        plVar15 = plVar15 + 7;
      } while (plVar15 != plVar19);
      plVar15 = *(long **)pbStack_4d8;
      pbVar28 = (byte *)CONCAT35((undefined3)uStack_583,CONCAT41(uStack_587,bStack_588));
      pbVar21 = pbStack_4d0;
    }
    pbVar17 = pbStack_370;
    plVar19 = plStack_5a0;
    puVar16[0x11] = pbVar21;
    puVar16[0x12] = pbVar28;
    lVar24 = puVar16[0x13];
    puVar16[0x13] = CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_));
    if (plVar15 != (long *)0x0) {
      func_0x0412a280(plVar15,lVar24 - (long)plVar15);
    }
  }
  puVar16[0x12] = pbVar28;
  uVar11 = *(undefined4 *)puVar16;
  uVar12 = *(undefined4 *)((long)puVar16 + 4);
  uVar13 = *(undefined4 *)(puVar16 + 1);
  uVar14 = *(undefined4 *)((long)puVar16 + 0xc);
  if (puVar16[1] != 0) {
    LOCK();
    plVar15 = (long *)(puVar16[1] + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = *(long **)(pbVar18 + 0x78);
  *(undefined4 *)(pbVar18 + 0x70) = uVar11;
  *(undefined4 *)(pbVar18 + 0x74) = uVar12;
  *(undefined4 *)(pbVar18 + 0x78) = uVar13;
  *(undefined4 *)(pbVar18 + 0x7c) = uVar14;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar25 = plVar15 + 1;
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  pbVar18[0x80] = *(byte *)((long)puVar16 + 0xa1);
  LOCK();
  lVar24 = *(long *)puStack_550;
  *(long *)puStack_550 = *(long *)puStack_550 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    func_0x0412c2d0(plVar19);
    LOCK();
    lVar24 = *(long *)puStack_520;
    *(long *)puStack_520 = *(long *)puStack_520 + -1;
    UNLOCK();
    if (lVar24 == 0) goto LAB_0d421e2c;
LAB_0d421bd1:
    LOCK();
    lVar24 = *(long *)puStack_520;
    *(long *)puStack_520 = *(long *)puStack_520 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *(long *)puStack_520;
    *(long *)puStack_520 = *(long *)puStack_520 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_0d421bd1;
LAB_0d421e2c:
    puVar2 = puStack_520;
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    func_0x0412c2d0(pbVar18);
    LOCK();
    lVar24 = *(long *)puVar2;
    *(long *)puVar2 = *(long *)puVar2 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*(long *)pbVar18 + 0x10))(pbVar18);
    func_0x0412c2d0(pbVar18);
  }
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  (**(code **)(*(long *)pbVar17 + 0x10))(pbVar17,&uStack_388);
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  if (lStack_a8 != 0) {
    (**(code **)(lStack_a8 + 8))(&lStack_a8);
  }
  if (puStack_368 != (undefined8 *)0x0) {
    (*(code *)puStack_368[1])(&puStack_368);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  uStack_533 = 0;
  uStack_531 = 0;
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540 = 0x6f726718;
  uStack_53c = 0x75;
  uStack_53b = 0x646e;
  uStack_539 = 0x5f;
  uStack_538 = 0x636f6c62;
  uStack_534 = 0x6b;
  uStack_548 = 0xf2baa18d2d0942de;
  uStack_e0 = 0;
  uStack_510 = 0;
  lStack_e8 = 0;
  puStack_518 = (undefined8 *)&UNK_0f472048;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  puStack_598 = puStack_518;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46c278;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5a1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46c2c8;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (puStack_598 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_598)(&puStack_598,plVar15 + 0x2e);
    puVar16 = puStack_598;
  }
  plVar19 = plVar15 + 1;
  plVar15[0x2e] = (long)puVar16;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plStack_5a0 = plVar19;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar19 = plVar15 + 4;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46c3a8;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46c3f8;
  puVar16[0xe] = plVar19;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  puVar22 = (undefined4 *)func_0x0508c8e0(param_1,&uStack_548,1);
  plVar25 = plVar15 + 0x11;
  plVar23 = *(long **)(puVar22 + 0x24);
  if (plVar23 < *(long **)(puVar22 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 == plVar25) {
LAB_0d421f62:
      *plVar23 = *plVar25;
      plVar23[5] = (long)(puVar16 + 4);
      plVar23[6] = (long)puVar16;
LAB_0d421fcf:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*(byte *)(plVar15 + 0x12) & 1) == 0) {
        plVar23[3] = plVar15[0x14];
        lVar24 = plVar15[0x13];
        plVar23[1] = plVar15[0x12];
        plVar23[2] = lVar24;
        goto LAB_0d421f62;
      }
      func_0x04885070(plVar23 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar23 = *plVar25;
      puVar16 = (undefined8 *)
                CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      plVar23[5] = (long)puStack_598;
      plVar23[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d421fcf;
    }
    plVar23 = plVar23 + 7;
    *(long **)(puVar22 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x0508ffe0(puVar22 + 0x22,plVar25,&puStack_598);
  }
  plVar25 = plStack_5a0;
  *(long **)(puVar22 + 0x24) = plVar23;
  uVar11 = *puVar22;
  uVar12 = puVar22[1];
  uVar13 = puVar22[2];
  uVar14 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar23 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar23 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar1 = plVar23 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  plVar23 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar23 != (long *)0x0) {
    LOCK();
    plVar1 = plVar23 + 1;
    lVar24 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      func_0x0412c2d0(plVar23);
    }
  }
  LOCK();
  lVar24 = *plVar25;
  *plVar25 = *plVar25 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_3a8);
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  if (lStack_e8 != 0) {
    (**(code **)(lStack_e8 + 8))(&lStack_e8);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540._1_3_ = (undefined3)_DAT_014a6872;
  uStack_540 = CONCAT31(uStack_540._1_3_,0x24);
  uStack_53c = (undefined1)((uint)_DAT_014a6872 >> 0x18);
  uStack_53b = (undefined2)_UNK_014a6876;
  uStack_539 = (undefined1)((uint)_UNK_014a6876 >> 0x10);
  uStack_538._1_3_ = (undefined3)_UNK_014a687a;
  uStack_538 = CONCAT31(uStack_538._1_3_,(char)((uint)_UNK_014a6876 >> 0x18));
  uStack_534 = (undefined1)((uint)_UNK_014a687a >> 0x18);
  uStack_533 = (undefined2)_UNK_014a687e;
  uStack_531 = (undefined1)((uint)_UNK_014a687e >> 0x10);
  uStack_530 = (undefined1)((uint)_UNK_014a687e >> 0x18);
  uStack_52f = 0x6572;
  uStack_548 = 0x135fac2591fd6672;
  uStack_120 = 0;
  uStack_510 = 0;
  lStack_128 = 0;
  puStack_518 = (undefined8 *)&UNK_0f472060;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  puStack_598 = puStack_518;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46c458;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5a1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46c4a8;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  if (puStack_598 == (undefined8 *)0x0) {
    plVar15[0x3a] = 0;
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_598)(&puStack_598,plVar15 + 0x2e);
    puVar16 = puStack_598;
    puStack_598 = (undefined8 *)0x0;
    plVar15[0x2e] = (long)puVar16;
    plVar15[0x3a] = 0;
    if ((*(byte *)(plVar15 + 0x12) & 1) == 0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      func_0x0412a280(plVar15[0x14],plVar15[0x12] & 0xfffffffffffffffe);
      puVar16 = puStack_598;
    }
  }
  pbVar17 = (byte *)(plVar15 + 0x12);
  pbVar17[0] = 0x22;
  uVar13 = _UNK_01207d03;
  uVar12 = _UNK_01207cff;
  uVar11 = _UNK_01207cfb;
  pbVar17[1] = 0x66;
  *(undefined4 *)((long)plVar15 + 0x92) = _DAT_01207cf7;
  *(undefined4 *)((long)plVar15 + 0x96) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x9a) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x9e) = uVar13;
  *(undefined4 *)((long)plVar15 + 0xa2) = 0;
  *(undefined2 *)((long)plVar15 + 0xa6) = 0;
  plVar15[0x11] = 0xf6c39062bb9edf3;
  plVar15[0x15] = 0;
  if (puVar16 != (undefined8 *)0x0) {
    (*(code *)puVar16[1])(&puStack_598);
  }
  plVar19 = plVar15 + 1;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plStack_5a0 = plVar19;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_550 = (uint *)(plVar15 + 4);
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46c588;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46c5d8;
  puVar16[0xe] = puStack_550;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  puVar22 = (undefined4 *)func_0x0508c8e0(param_1,&uStack_548,1);
  plVar25 = plVar15 + 0x11;
  plVar19 = *(long **)(puVar22 + 0x24);
  if (plVar19 < *(long **)(puVar22 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 == plVar25) {
LAB_0d42246c:
      *plVar19 = *plVar25;
      plVar19[5] = (long)(puVar16 + 4);
      plVar19[6] = (long)puVar16;
LAB_0d4224d9:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*pbVar17 & 1) == 0) {
        plVar19[3] = plVar15[0x14];
        lVar24 = plVar15[0x13];
        plVar19[1] = *(long *)pbVar17;
        plVar19[2] = lVar24;
        goto LAB_0d42246c;
      }
      func_0x04885070(plVar19 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar19 = *plVar25;
      puVar16 = (undefined8 *)
                CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      plVar19[5] = (long)puStack_598;
      plVar19[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d4224d9;
    }
    plVar19 = plVar19 + 7;
    *(long **)(puVar22 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x0508ffe0(puVar22 + 0x22,plVar25,&puStack_598);
  }
  *(long **)(puVar22 + 0x24) = plVar19;
  uVar11 = *puVar22;
  uVar12 = puVar22[1];
  uVar13 = puVar22[2];
  uVar14 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar19 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar19 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar25 = plVar19 + 1;
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  plVar19 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar25 = plVar19 + 1;
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  plVar19 = plStack_5a0;
  LOCK();
  lVar24 = *plStack_5a0;
  *plStack_5a0 = *plStack_5a0 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plStack_5a0;
    *plStack_5a0 = *plStack_5a0 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  lVar24 = (**(code **)(*(long *)puStack_550 + 0x10))(puStack_550,&uStack_3c8);
  apuStack_68[0] = &UNK_0f472088;
  ppuStack_48 = apuStack_68;
  ppuVar3 = (undefined8 **)(lVar24 + 400);
  ppuStack_578 = &puStack_598;
  puStack_598 = (undefined8 *)&UNK_0f472088;
  lVar33 = 0x20;
  if (ppuVar3 == &puStack_598) {
LAB_0d422703:
    (**(code **)((long)*ppuStack_578 + lVar33))(ppuStack_578);
  }
  else {
    ppuVar8 = *(undefined8 ***)(lVar24 + 0x1b0);
    if (ppuVar8 == ppuVar3) {
      puStack_518 = (undefined8 *)&UNK_0f472088;
      ppuStack_578 = (undefined8 **)0x0;
      (*(code *)(*ppuVar8)[3])(ppuVar8,&puStack_598);
      (**(code **)(**(long **)(lVar24 + 0x1b0) + 0x20))();
      *(undefined8 *)(lVar24 + 0x1b0) = 0;
      ppuStack_578 = &puStack_598;
      (*(code *)puStack_518[3])(&puStack_518,ppuVar3);
      (*(code *)puStack_518[4])(&puStack_518);
      *(undefined8 ***)(lVar24 + 0x1b0) = ppuVar3;
      if (ppuStack_578 != &puStack_598) goto LAB_0d4226f8;
      goto LAB_0d422703;
    }
    *(undefined **)(lVar24 + 400) = &UNK_0f472088;
    ppuStack_578 = ppuVar8;
    *(undefined8 ***)(lVar24 + 0x1b0) = ppuVar3;
    if (ppuVar8 == &puStack_598) goto LAB_0d422703;
LAB_0d4226f8:
    lVar33 = 0x28;
    if (ppuStack_578 != (undefined8 **)0x0) goto LAB_0d422703;
  }
  if (ppuStack_48 == apuStack_68) {
    lVar24 = 0x20;
LAB_0d42293c:
    (**(code **)(*ppuStack_48 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0d42293c;
  }
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  if (lStack_128 != 0) {
    (**(code **)(lStack_128 + 8))(&lStack_128);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  uStack_538 = 0;
  uStack_534 = 0;
  uStack_533 = 0;
  uStack_531 = 0;
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540 = 0x7275730e;
  uStack_53c = 0x66;
  uStack_53b = 0x6361;
  uStack_539 = 0x65;
  uStack_548 = 0x50ad7e315f216d3e;
  uStack_160 = 0;
  uStack_510 = 0;
  lStack_168 = 0;
  puStack_518 = (undefined8 *)&UNK_0f472108;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  puStack_598 = puStack_518;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46c638;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5a1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar19 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46c688;
  plVar15[0x2e] = 0;
  plVar15[0x2f] = 0;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  plVar15[0x32] = 0;
  plVar15[0x33] = 0;
  plVar15[0x34] = 0;
  *(undefined4 *)(plVar15 + 0x35) = 0x3f800000;
  plVar15[0x36] = 0;
  plVar15[0x37] = 0;
  if (puStack_598 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_598)(&puStack_598,plVar15 + 0x36);
    puVar16 = puStack_598;
  }
  puStack_598 = (undefined8 *)0x0;
  plVar15[0x36] = (long)puVar16;
  *(undefined1 *)(plVar15 + 0x3e) = 0;
  puStack_550 = (uint *)(plVar15 + 0x12);
  if (plVar19 != (long *)&DAT_0f552138) {
    if ((*puStack_550 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552150;
        uVar13 = uRam000000000f55214c;
        uVar12 = _DAT_0f552148;
        uVar11 = uRam000000000f552144;
        *puStack_550 = _DAT_0f552140;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puStack_550,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar35 = (_DAT_0f552140 & 1) != 0;
      lVar24 = 0xf552141;
      if (bVar35) {
        lVar24 = _DAT_0f552150;
      }
      uVar34 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar35) {
        uVar34 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_550,lVar24,uVar34);
    }
  }
  plVar15[0x11] = _DAT_0f552138;
  plVar15[0x15] = 0;
  plStack_5a0 = plVar19;
  if (puStack_598 != (undefined8 *)0x0) {
    (*(code *)puStack_598[1])(&puStack_598);
  }
  plVar19 = plVar15 + 1;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46c768;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46c7b8;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  puStack_520 = (uint *)(plVar15 + 4);
  puVar22 = (undefined4 *)func_0x0508c8e0(param_1,&uStack_548,0);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (plVar25 < *(long **)(puVar22 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if (plVar25 == plStack_5a0) {
LAB_0d422b19:
      *plVar25 = *plStack_5a0;
      plVar25[5] = (long)(puVar16 + 4);
      plVar25[6] = (long)puVar16;
LAB_0d422b82:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_550 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_550 + 4);
        lVar24 = *(long *)(puStack_550 + 2);
        plVar25[1] = *(long *)puStack_550;
        plVar25[2] = lVar24;
        goto LAB_0d422b19;
      }
      func_0x04885070(plVar25 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar25 = *plStack_5a0;
      puVar16 = (undefined8 *)
                CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      plVar25[5] = (long)puStack_598;
      plVar25[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d422b82;
    }
    plVar25 = plVar25 + 7;
    *(long **)(puVar22 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x0508ffe0(puVar22 + 0x22,plStack_5a0,&puStack_598);
  }
  puVar2 = puStack_520;
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar11 = *puVar22;
  uVar12 = puVar22[1];
  uVar13 = puVar22[2];
  uVar14 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar24 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2,&uStack_3e8);
  if ((uStack_3e8 & 1) != 0) {
    func_0x0412a280(uStack_3d8,uStack_3e8 & 0xfffffffffffffffe);
  }
  if (lStack_168 != 0) {
    (**(code **)(lStack_168 + 8))(&lStack_168);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  uStack_58a = 0;
  bStack_588 = 0;
  uStack_587 = 0;
  uStack_583 = 0;
  uStack_57f = 0;
  uStack_57e = 0;
  ppuStack_578 = (undefined8 **)0x0;
  bStack_590 = 10;
  uStack_58f = 0x74706564;
  uStack_58b = 0x68;
  puStack_598 = (undefined8 *)0x6aec1bac77dfca88;
  uStack_220 = 0;
  puStack_228 = &UNK_0f472120;
  plVar15 = (long *)func_0x0d424910(param_1,&puStack_598,&puStack_228);
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_408);
  if ((uStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,uStack_408 & 0xfffffffffffffffe);
  }
  if (puStack_228 != (undefined *)0x0) {
    (**(code **)(puStack_228 + 8))(&puStack_228);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_)),
                    CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))) &
                    0xfffffffffffffffe);
  }
  bStack_588 = 0;
  uStack_587 = 0;
  uStack_583 = 0;
  uStack_57f = 0;
  uStack_57e = 0;
  puStack_598 = (undefined8 *)0x0;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  ppuStack_578 = (undefined8 **)0x0;
  FUN_0412f5e0(&bStack_590,&UNK_012cf7cc,0x17);
  puStack_598 = (undefined8 *)0xb48b5c7afe64e4d3;
  uStack_260 = 0;
  puStack_268 = &UNK_0f472138;
  plVar15 = (long *)func_0x0d424eb0(param_1,&puStack_598,&puStack_268);
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_418 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_428);
  if ((uStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,uStack_428 & 0xfffffffffffffffe);
  }
  if (puStack_268 != (undefined *)0x0) {
    (**(code **)(puStack_268 + 8))(&puStack_268);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_)),
                    CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))) &
                    0xfffffffffffffffe);
  }
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540 = 0x7265761c;
  uStack_53c = 0x74;
  uStack_53b = 0x6369;
  uStack_539 = 0x61;
  uStack_538 = 0x61725f6c;
  uStack_534 = 0x6e;
  uStack_533 = 0x6567;
  uStack_531 = 0;
  uStack_548 = 0x7562c1ec0bff91bd;
  uStack_1a0 = 0;
  uStack_510 = 0;
  lStack_1a8 = 0;
  puStack_518 = (undefined8 *)&UNK_0f472150;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_598 = puStack_518;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46cbd8;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5a1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46cc28;
  plVar15[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_598 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_598)(&puStack_598,plVar15 + 0x30);
    puVar16 = puStack_598;
  }
  puStack_598 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar16;
  puVar2 = (uint *)(plVar15 + 0x12);
  if (plVar15 + 0x11 == (long *)&DAT_0f552078) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552090;
        uVar13 = uRam000000000f55208c;
        uVar12 = _DAT_0f552088;
        uVar11 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar35 = (_DAT_0f552080 & 1) != 0;
      lVar24 = 0xf552081;
      if (bVar35) {
        lVar24 = _DAT_0f552090;
      }
      uVar34 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar35) {
        uVar34 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar2,lVar24,uVar34);
    }
    plVar15[0x11] = _DAT_0f552078;
    plVar15[0x15] = 0;
    if (puStack_598 != (undefined8 *)0x0) {
      (*(code *)puStack_598[1])(&puStack_598);
    }
  }
  plVar19 = plVar15 + 1;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  plStack_5a0 = plVar15 + 0x11;
  puStack_520 = puVar2;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46cd08;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46cd58;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  puStack_550 = (uint *)(plVar15 + 4);
  puVar22 = (undefined4 *)func_0x0508c8e0(param_1,&uStack_548,1);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (plVar25 < *(long **)(puVar22 + 0x26)) {
    plVar25[2] = 0;
    plVar25[3] = 0;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[4] = 0;
    if (plVar25 == plStack_5a0) {
LAB_0d42322d:
      *plVar25 = *plStack_5a0;
      plVar25[5] = (long)(puVar16 + 4);
      plVar25[6] = (long)puVar16;
LAB_0d4232a9:
      LOCK();
      puVar16[1] = puVar16[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_520 & 1) == 0) {
        plVar25[3] = *(long *)(puStack_520 + 4);
        lVar24 = *(long *)(puStack_520 + 2);
        plVar25[1] = *(long *)puStack_520;
        plVar25[2] = lVar24;
        goto LAB_0d42322d;
      }
      func_0x04885070(plVar25 + 1,plVar15[0x14],plVar15[0x13]);
      *plVar25 = *plStack_5a0;
      puVar16 = (undefined8 *)
                CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      plVar25[5] = (long)puStack_598;
      plVar25[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
      if (puVar16 != (undefined8 *)0x0) goto LAB_0d4232a9;
    }
    plVar25 = plVar25 + 7;
    *(long **)(puVar22 + 0x24) = plVar25;
  }
  else {
    plVar25 = (long *)func_0x0508ffe0(puVar22 + 0x22,plStack_5a0,&puStack_598);
  }
  puVar2 = puStack_550;
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar11 = *puVar22;
  uVar12 = puVar22[1];
  uVar13 = puVar22[2];
  uVar14 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar24 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_438 = 0;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2,&uStack_448);
  if ((uStack_448 & 1) != 0) {
    func_0x0412a280(uStack_438,uStack_448 & 0xfffffffffffffffe);
  }
  if (lStack_1a8 != 0) {
    (**(code **)(lStack_1a8 + 8))(&lStack_1a8);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  uStack_57e = 0;
  ppuStack_578 = (undefined8 **)0x0;
  bStack_590 = 0x22;
  uStack_58f = _DAT_01234c9c;
  uStack_58b = (undefined1)_UNK_01234ca0;
  uStack_58a = (undefined2)((uint)_UNK_01234ca0 >> 8);
  bStack_588 = (byte)((uint)_UNK_01234ca0 >> 0x18);
  uStack_587 = _UNK_01234ca4;
  uStack_583 = _UNK_01234ca8;
  uStack_57f = 0x65;
  puStack_598 = (undefined8 *)0xc7e284b8c3f63d8c;
  uStack_2a0 = 0;
  puStack_2a8 = &UNK_0f472168;
  plVar15 = (long *)func_0x0d424eb0(param_1,&puStack_598,&puStack_2a8);
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_458 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_468);
  if ((uStack_468 & 1) != 0) {
    func_0x0412a280(uStack_458,uStack_468 & 0xfffffffffffffffe);
  }
  if (puStack_2a8 != (undefined *)0x0) {
    (**(code **)(puStack_2a8 + 8))(&puStack_2a8);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_)),
                    CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))) &
                    0xfffffffffffffffe);
  }
  uStack_57e = 0;
  ppuStack_578 = (undefined8 **)0x0;
  bStack_590 = 0x22;
  uStack_58f = _DAT_01440041;
  uStack_58b = (undefined1)_UNK_01440045;
  uStack_58a = (undefined2)((uint)_UNK_01440045 >> 8);
  bStack_588 = (byte)((uint)_UNK_01440045 >> 0x18);
  uStack_587 = _UNK_01440049;
  uStack_583 = _UNK_0144004d;
  uStack_57f = 0x73;
  puStack_598 = (undefined8 *)0x52fec595cf187392;
  uStack_2e0 = 0;
  puStack_2e8 = &UNK_0f472180;
  plVar15 = (long *)func_0x0d424910(param_1,&puStack_598,&puStack_2e8);
  uStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_488);
  if ((uStack_488 & 1) != 0) {
    func_0x0412a280(uStack_478,uStack_488 & 0xfffffffffffffffe);
  }
  if (puStack_2e8 != (undefined *)0x0) {
    (**(code **)(puStack_2e8 + 8))(&puStack_2e8);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_)),
                    CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))) &
                    0xfffffffffffffffe);
  }
  bStack_588 = 0;
  uStack_587 = 0;
  uStack_583 = 0;
  uStack_57f = 0;
  uStack_57e = 0;
  puStack_598 = (undefined8 *)0x0;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  ppuStack_578 = (undefined8 **)0x0;
  FUN_0412f5e0(&bStack_590,&UNK_011b03fc,0x18);
  puStack_598 = (undefined8 *)0x5c114625e686b4b3;
  uStack_320 = 0;
  puStack_328 = &UNK_0f472198;
  plVar15 = (long *)func_0x0d424eb0(param_1,&puStack_598,&puStack_328);
  *(undefined4 *)(plVar15 + 0x2a) = 0;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  uStack_498 = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_4a8);
  if ((uStack_4a8 & 1) != 0) {
    func_0x0412a280(uStack_498,uStack_4a8 & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined *)0x0) {
    (**(code **)(puStack_328 + 8))(&puStack_328);
  }
  if ((bStack_590 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_57e,CONCAT11(uStack_57f,uStack_583._3_1_)),
                    CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590))) &
                    0xfffffffffffffffe);
  }
  uStack_534 = 0;
  uStack_533 = 0;
  uStack_531 = 0;
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_528 = 0;
  uStack_540 = 0x74617716;
  uStack_53c = 0x65;
  uStack_53b = 0x6c72;
  uStack_539 = 0x6f;
  uStack_538 = 0x64656767;
  uStack_548 = 0x9c2b005d60c9f950;
  uStack_1e0 = 0;
  uStack_510 = 0;
  lStack_1e8 = 0;
  puStack_518 = (undefined8 *)&UNK_0f4721b0;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  puStack_598 = puStack_518;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f46cdb8;
  bStack_590 = 0;
  uStack_58f = 0;
  uStack_58b = 0;
  uStack_58a = 0;
  puStack_518 = (undefined8 *)0x0;
  plVar15[4] = (long)&UNK_0f2ccd78;
  plVar15[5] = 0;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = 0;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  *(undefined1 *)(plVar15 + 0xd) = 0;
  func_0x04aa75f0(plVar15 + 0xe,&uStack_5a1,&UNK_01254d89);
  *(undefined1 *)(plVar15 + 0x10) = 0;
  plVar19 = plVar15 + 0x11;
  plVar15[0x11] = 0;
  plVar15[0x12] = 0;
  plVar15[0x13] = 0;
  plVar15[0x14] = 0;
  plVar15[0x15] = 0;
  plVar15[0x16] = 0;
  plVar15[0x17] = 0xffffffff;
  plVar15[0x26] = 0;
  plVar15[0x27] = 0;
  plVar15[0x18] = 0;
  plVar15[0x19] = 0;
  plVar15[0x1a] = 0;
  plVar15[0x1b] = 0;
  plVar15[0x1c] = 0;
  plVar15[0x1d] = 0;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[4] = (long)&UNK_0f46ce08;
  plVar15[0x2f] = 0;
  plVar15[0x30] = 0;
  plVar15[0x2e] = (long)(plVar15 + 0x2f);
  ppuVar3 = (undefined8 **)(plVar15 + 0x32);
  plVar15[0x32] = 0;
  plVar15[0x33] = 0;
  if (ppuVar3 != &puStack_598) {
    if (puStack_598 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_598)(&puStack_598,ppuVar3);
      puVar16 = puStack_598;
    }
    puStack_598 = (undefined8 *)0x0;
    *ppuVar3 = puVar16;
  }
  puStack_550 = (uint *)(plVar15 + 0x12);
  if (plVar19 != (long *)&DAT_0f551f88) {
    if ((*puStack_550 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar15[0x14] = _DAT_0f551fa0;
        uVar13 = uRam000000000f551f9c;
        uVar12 = _DAT_0f551f98;
        uVar11 = uRam000000000f551f94;
        *puStack_550 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar11;
        *(undefined4 *)(plVar15 + 0x13) = uVar12;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar13;
      }
      else {
        func_0x04885070(puStack_550,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar35 = (_DAT_0f551f90 & 1) != 0;
      lVar24 = 0xf551f91;
      if (bVar35) {
        lVar24 = _DAT_0f551fa0;
      }
      uVar34 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar35) {
        uVar34 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puStack_550,lVar24,uVar34);
    }
  }
  plVar15[0x11] = _DAT_0f551f88;
  plVar15[0x15] = 0;
  plStack_5a0 = plVar19;
  if (puStack_598 != (undefined8 *)0x0) {
    (*(code *)puStack_598[1])(&puStack_598);
  }
  plVar19 = plVar15 + 1;
  if (puStack_518 != (undefined8 *)0x0) {
    (*(code *)puStack_518[1])(&puStack_518);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar16[1] = 0;
  puVar16[2] = 0;
  *puVar16 = &UNK_0f46cee8;
  puVar16[6] = 0;
  puVar16[7] = 0;
  puVar16[4] = &UNK_0f46cf38;
  puVar16[0xe] = plVar15 + 4;
  puVar16[0xf] = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  bStack_590 = (byte)puVar16;
  uStack_58f = (undefined4)((ulong)puVar16 >> 8);
  uStack_58b = (undefined1)((ulong)puVar16 >> 0x28);
  uStack_58a = (undefined2)((ulong)puVar16 >> 0x30);
  puStack_598 = puVar16 + 4;
  puStack_520 = (uint *)(plVar15 + 4);
  puVar22 = (undefined4 *)func_0x0508c8e0(param_1,&uStack_548,0);
  plVar25 = *(long **)(puVar22 + 0x24);
  if (*(long **)(puVar22 + 0x26) <= plVar25) {
    plVar25 = (long *)func_0x0508ffe0(puVar22 + 0x22,plStack_5a0,&puStack_598);
    goto LAB_0d423a98;
  }
  plVar25[2] = 0;
  plVar25[3] = 0;
  *plVar25 = 0;
  plVar25[1] = 0;
  plVar25[4] = 0;
  if (plVar25 == plStack_5a0) {
LAB_0d423a1f:
    *plVar25 = *plStack_5a0;
    plVar25[5] = (long)(puVar16 + 4);
    plVar25[6] = (long)puVar16;
LAB_0d423a88:
    LOCK();
    puVar16[1] = puVar16[1] + 1;
    UNLOCK();
  }
  else {
    if ((*puStack_550 & 1) == 0) {
      plVar25[3] = *(long *)(puStack_550 + 4);
      lVar24 = *(long *)(puStack_550 + 2);
      plVar25[1] = *(long *)puStack_550;
      plVar25[2] = lVar24;
      goto LAB_0d423a1f;
    }
    func_0x04885070(plVar25 + 1,plVar15[0x14],plVar15[0x13]);
    *plVar25 = *plStack_5a0;
    puVar16 = (undefined8 *)
              CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
    plVar25[5] = (long)puStack_598;
    plVar25[6] = CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
    if (puVar16 != (undefined8 *)0x0) goto LAB_0d423a88;
  }
  plVar25 = plVar25 + 7;
  *(long **)(puVar22 + 0x24) = plVar25;
LAB_0d423a98:
  puVar2 = puStack_520;
  *(long **)(puVar22 + 0x24) = plVar25;
  uVar11 = *puVar22;
  uVar12 = puVar22[1];
  uVar13 = puVar22[2];
  uVar14 = puVar22[3];
  if (*(long *)(puVar22 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar22 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar15[0xf];
  *(undefined4 *)(plVar15 + 0xe) = uVar11;
  *(undefined4 *)((long)plVar15 + 0x74) = uVar12;
  *(undefined4 *)(plVar15 + 0xf) = uVar13;
  *(undefined4 *)((long)plVar15 + 0x7c) = uVar14;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar22 + 0xa1);
  plVar25 = (long *)CONCAT26(uStack_58a,CONCAT15(uStack_58b,CONCAT41(uStack_58f,bStack_590)));
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar23 = plVar25 + 1;
    lVar24 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar24 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    func_0x0412c2d0(plVar15);
  }
  auStack_4c8[0] = 0;
  auStack_4c8[1] = 0;
  auStack_4c8[2] = 0;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2,auStack_4c8);
  if ((auStack_4c8[0] & 1) != 0) {
    func_0x0412a280(auStack_4c8[2],auStack_4c8[0] & 0xfffffffffffffffe);
  }
  if (lStack_1e8 != 0) {
    (**(code **)(lStack_1e8 + 8))(&lStack_1e8);
  }
  if ((uStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_52d,CONCAT21(uStack_52f,uStack_530)),
                    CONCAT17(uStack_539,CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1207cf7  eature_reference
 * 0x1234c9c  vegetation_chance
 * 0x129cd56  replaceable_blocks
 * 0x1440041  horizontal_radius
 * 0x1494d5d  <any array element>
 * 0x14a6872  vegetation_feature
 */
