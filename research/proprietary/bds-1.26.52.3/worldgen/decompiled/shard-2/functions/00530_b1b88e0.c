/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb2b88e0 (ELF vaddr 0xb1b88e0)
 * Label: caller-of-callee
 * Body:  [[0b2b88e0, 0b2b8d0d] [0b2b8d10, 0b2b8d7e] [0b2b8d80, 0b2b945d] [0b2b9460, 0b2b949d] [0b2b94a0, 0b2b9874] [0b2b998a, 0b2b99f2] [0b2b9a1c, 0b2b9a8a]]
 * Ghidra: FUN_0b2b88e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b2b88e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  uint *puVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  long *plVar28;
  byte *pbVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined8 **ppuVar33;
  bool bVar34;
  undefined1 uStack_1f9;
  long lStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long *plStack_1d8;
  long *plStack_1d0;
  byte *pbStack_1c8;
  long *plStack_1c0;
  undefined8 *puStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte *pbStack_170;
  long *plStack_168;
  ulong auStack_160 [2];
  undefined4 *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined4 *puStack_138;
  uint *puStack_130;
  ulong uStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  byte *pbStack_100;
  undefined8 *puStack_f8;
  long *plStack_f0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar15 = (long *)*param_1;
  puStack_138 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puStack_138 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  uVar18 = _UNK_012e55a5;
  uStack_148 = 0x41;
  uStack_140 = 0x3f;
  *(ulong *)((long)puStack_138 + 0x2f) = CONCAT71(_UNK_012e559e,DAT_012e559d);
  *(undefined8 *)((long)puStack_138 + 0x37) = uVar18;
  uVar18 = CONCAT17(DAT_012e559d,_UNK_012e5596);
  *(undefined8 *)(puStack_138 + 8) = _DAT_012e558e;
  *(undefined8 *)(puStack_138 + 10) = uVar18;
  uVar18 = _UNK_012e5586;
  *(undefined8 *)(puStack_138 + 4) = _DAT_012e557e;
  *(undefined8 *)(puStack_138 + 6) = uVar18;
  uVar8 = _UNK_012e557a;
  uVar7 = _UNK_012e5576;
  uVar6 = _UNK_012e5572;
  *puStack_138 = _DAT_012e556e;
  puStack_138[1] = uVar6;
  puStack_138[2] = uVar7;
  puStack_138[3] = uVar8;
  *(undefined1 *)((long)puStack_138 + 0x3f) = 0;
  (**(code **)(*plVar15 + 0x10))(plVar15,&uStack_148);
  if ((uStack_148 & 1) != 0) {
    func_0x0412a280(puStack_138,uStack_148 & 0xfffffffffffffffe);
  }
  lVar25 = *param_1;
  plStack_1d0 = (long *)param_1[1];
  if (plStack_1d0 != (long *)0x0) {
    LOCK();
    plStack_1d0[1] = plStack_1d0[1] + 1;
    UNLOCK();
    LOCK();
    plStack_1d0[1] = plStack_1d0[1] + 1;
    UNLOCK();
  }
  uStack_1dc = 0;
  plStack_1d8 = (long *)0x0;
  uStack_1f0 = CONCAT31((int3)_DAT_0127f2d0,0x26);
  uStack_1ec._1_3_ = (undefined3)_UNK_0127f2d4;
  uStack_1ec = CONCAT31(uStack_1ec._1_3_,(char)((uint)_DAT_0127f2d0 >> 0x18));
  uStack_1e8._1_3_ = (undefined3)_UNK_0127f2d8;
  uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(char)((uint)_UNK_0127f2d4 >> 0x18));
  uStack_1e4._1_3_ = (undefined3)_UNK_0127f2dc;
  uStack_1e4 = CONCAT31(uStack_1e4._1_3_,(char)((uint)_UNK_0127f2d8 >> 0x18));
  uStack_1e0 = 0x61696e6d;
  lStack_1f8 = -0x78fd731db911aecc;
  lStack_78 = 0;
  uStack_70 = 0;
  plStack_f0 = (long *)0x0;
  puStack_f8 = (undefined8 *)&UNK_0f29c110;
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  puStack_1b8 = puStack_f8;
  plVar15[1] = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&UNK_0f29bee8;
  puStack_f8 = (undefined8 *)0x0;
  plStack_1b0 = plStack_f0;
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
  func_0x04aa75f0(plVar15 + 0xe,&uStack_1f9,&UNK_01254d89);
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
  plVar15[4] = (long)&UNK_0f29bf38;
  plVar15[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar15 + 0x2f) = 1;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  if (puStack_1b8 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_1b8)(&puStack_1b8,plVar15 + 0x30);
    puVar16 = puStack_1b8;
  }
  plVar24 = plVar15 + 4;
  puStack_1b8 = (undefined8 *)0x0;
  plVar15[0x30] = (long)puVar16;
  puStack_130 = (uint *)(plVar15 + 0x12);
  if (plVar15 + 0x11 == (long *)&DAT_0f552018) {
    plVar15[0x15] = 0;
  }
  else {
    if ((*puStack_130 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar15[0x14] = _DAT_0f552030;
        uVar8 = uRam000000000f55202c;
        uVar7 = _DAT_0f552028;
        uVar6 = uRam000000000f552024;
        *puStack_130 = _DAT_0f552020;
        *(undefined4 *)((long)plVar15 + 0x94) = uVar6;
        *(undefined4 *)(plVar15 + 0x13) = uVar7;
        *(undefined4 *)((long)plVar15 + 0x9c) = uVar8;
      }
      else {
        func_0x04885070(puStack_130,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar34 = (_DAT_0f552020 & 1) != 0;
      lVar20 = 0xf552021;
      if (bVar34) {
        lVar20 = _DAT_0f552030;
      }
      uVar31 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar34) {
        uVar31 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puStack_130,lVar20,uVar31);
    }
    plVar15[0x11] = _DAT_0f552018;
    plVar15[0x15] = 0;
    if (puStack_1b8 != (undefined8 *)0x0) {
      (*(code *)puStack_1b8[1])(&puStack_1b8);
    }
  }
  plVar28 = plVar15 + 1;
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  LOCK();
  *plVar28 = *plVar28 + 1;
  UNLOCK();
  plStack_1c0 = plVar15 + 0x11;
  plStack_108 = plVar28;
  pbStack_1c8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbStack_1c8 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  lVar20 = lStack_1f8;
  pbStack_1c8[8] = 0;
  pbStack_1c8[9] = 0;
  pbStack_1c8[10] = 0;
  pbStack_1c8[0xb] = 0;
  pbStack_1c8[0xc] = 0;
  pbStack_1c8[0xd] = 0;
  pbStack_1c8[0xe] = 0;
  pbStack_1c8[0xf] = 0;
  pbStack_1c8[0x10] = 0;
  pbStack_1c8[0x11] = 0;
  pbStack_1c8[0x12] = 0;
  pbStack_1c8[0x13] = 0;
  pbStack_1c8[0x14] = 0;
  pbStack_1c8[0x15] = 0;
  pbStack_1c8[0x16] = 0;
  pbStack_1c8[0x17] = 0;
  *(undefined **)pbStack_1c8 = &UNK_0f29c018;
  pbStack_1c8[0x30] = 0;
  pbStack_1c8[0x31] = 0;
  pbStack_1c8[0x32] = 0;
  pbStack_1c8[0x33] = 0;
  pbStack_1c8[0x34] = 0;
  pbStack_1c8[0x35] = 0;
  pbStack_1c8[0x36] = 0;
  pbStack_1c8[0x37] = 0;
  pbStack_1c8[0x38] = 0;
  pbStack_1c8[0x39] = 0;
  pbStack_1c8[0x3a] = 0;
  pbStack_1c8[0x3b] = 0;
  pbStack_1c8[0x3c] = 0;
  pbStack_1c8[0x3d] = 0;
  pbStack_1c8[0x3e] = 0;
  pbStack_1c8[0x3f] = 0;
  *(undefined **)(pbStack_1c8 + 0x20) = &UNK_0f29c068;
  *(long **)(pbStack_1c8 + 0x70) = plVar24;
  *(long **)(pbStack_1c8 + 0x78) = plVar15;
  LOCK();
  plVar15[1] = plVar15[1] + 1;
  UNLOCK();
  pbStack_170 = pbStack_1c8 + 8;
  uStack_128 = *(ulong *)(lVar25 + 0xb8);
  uVar31 = *(ulong *)(lVar25 + 0xc0);
  pbVar22 = pbStack_1c8;
  plVar28 = plVar15;
  plStack_120 = plVar24;
  lStack_118 = lVar25;
  pbStack_100 = pbStack_1c8;
  if (uStack_128 != uVar31) {
    if ((uStack_1f0 & 1) == 0) {
      pbVar22 = (byte *)(ulong)((byte)uStack_1f0 >> 1);
      lStack_110 = (long)&uStack_1f0 + 1;
    }
    else {
      pbVar22 = (byte *)CONCAT44(uStack_1e4,uStack_1e8);
      lStack_110 = CONCAT44(uStack_1dc,uStack_1e0);
    }
    plStack_168 = plStack_1d8;
    plVar28 = &lStack_1f8;
    lVar25 = uStack_128 + 0x19;
    do {
      if (*(long *)(lVar25 + -9) == lVar20) {
        if ((*(long **)(lVar25 + 0x17) == plVar28) && ((long *)(lVar25 + -9) == plStack_168)) {
LAB_0b2b91bf:
          puVar27 = (undefined4 *)(lVar25 + -0x19);
          goto LAB_0b2b91c3;
        }
        bVar4 = *(byte *)(lVar25 + -1);
        if ((bVar4 & 1) == 0) {
          pbVar29 = (byte *)(ulong)(bVar4 >> 1);
        }
        else {
          pbVar29 = *(byte **)(lVar25 + 7);
        }
        if (pbVar29 == pbVar22) {
          lVar19 = lVar25;
          if ((bVar4 & 1) != 0) {
            lVar19 = *(long *)(lVar25 + 0xf);
          }
          iVar14 = func_0x0eee3000(lVar19,lStack_110,pbVar22);
          if (iVar14 == 0) {
            *(long **)(lVar25 + 0x17) = plVar28;
            plStack_1d8 = (long *)(lVar25 + -9);
            goto LAB_0b2b91bf;
          }
        }
      }
      *(undefined8 *)(lVar25 + 0x17) = 0;
      uVar26 = lVar25 + 0x8f;
      lVar25 = lVar25 + 0xa8;
    } while (uVar26 != uVar31);
  }
  lVar25 = lStack_118;
  if (uVar31 < *(ulong *)(lStack_118 + 200)) {
    func_0x0b2ed610(uVar31);
    plVar28 = (long *)(uVar31 + 0xa8);
    *(long **)(lVar25 + 0xc0) = plVar28;
LAB_0b2b9040:
    *(long **)(lVar25 + 0xc0) = plVar28;
    func_0x0b63b6d0(plVar28[-0x15],&lStack_1f8);
    lVar20 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar20 + -7) = *(undefined1 *)(lVar25 + 0x60);
    if ((long *)(lVar20 + -0x98) != &lStack_1f8) {
      puVar23 = (uint *)(lVar20 + -0x90);
      if ((*(byte *)puVar23 & 1) == 0) {
        if ((uStack_1f0 & 1) == 0) {
          *(ulong *)(lVar20 + -0x80) = CONCAT44(uStack_1dc,uStack_1e0);
          *puVar23 = uStack_1f0;
          *(undefined4 *)(lVar20 + -0x8c) = uStack_1ec;
          *(undefined4 *)(lVar20 + -0x88) = uStack_1e8;
          *(undefined4 *)(lVar20 + -0x84) = uStack_1e4;
        }
        else {
          func_0x04885070(puVar23,CONCAT44(uStack_1dc,uStack_1e0),CONCAT44(uStack_1e4,uStack_1e8));
        }
      }
      else {
        bVar34 = (uStack_1f0 & 1) != 0;
        lVar19 = (long)&uStack_1f0 + 1;
        if (bVar34) {
          lVar19 = CONCAT44(uStack_1dc,uStack_1e0);
        }
        uVar31 = (ulong)((byte)uStack_1f0 >> 1);
        if (bVar34) {
          uVar31 = CONCAT44(uStack_1e4,uStack_1e8);
        }
        func_0x04885120(puVar23,lVar19,uVar31);
      }
    }
    *(long *)(lVar20 + -0x98) = lStack_1f8;
    *(undefined8 *)(lVar20 + -0x78) = 0;
    FUN_04aa9390(&puStack_1b8,&uStack_1f0,*(undefined1 *)(lVar25 + 0x60));
    lVar20 = *(long *)(lVar25 + 0xc0);
    func_0x04167a70(lVar20 + -0x70,&puStack_1b8);
    *(long **)(lVar20 + -0x68) = plStack_1b0;
    *(long **)(lVar20 + -0x60) = plStack_1a8;
    *(undefined8 **)(lVar20 + -0x58) = puStack_1a0;
    *(long **)(lVar20 + -0x50) = plStack_198;
    uVar6 = (undefined4)uStack_190;
    uVar7 = uStack_190._4_4_;
    uVar8 = (undefined4)uStack_188;
    uVar12 = uStack_188._4_4_;
    uStack_190 = 0;
    uStack_188 = (byte *)0x0;
    plVar24 = *(long **)(lVar20 + -0x40);
    *(undefined4 *)(lVar20 + -0x48) = uVar6;
    *(undefined4 *)(lVar20 + -0x44) = uVar7;
    *(undefined4 *)(lVar20 + -0x40) = uVar8;
    *(undefined4 *)(lVar20 + -0x3c) = uVar12;
    if (plVar24 != (long *)0x0) {
      LOCK();
      plVar28 = plVar24 + 1;
      lVar19 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        FUN_0412c2d0(plVar24);
      }
    }
    pbVar22 = uStack_188;
    *(undefined8 *)(lVar20 + -0x38) = uStack_180;
    if (uStack_188 != (byte *)0x0) {
      LOCK();
      pbVar29 = uStack_188 + 8;
      lVar20 = *(long *)pbVar29;
      *(long *)pbVar29 = *(long *)pbVar29 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)uStack_188 + 0x10))(uStack_188);
        FUN_0412c2d0(pbVar22);
      }
    }
    FUN_04167a40(&puStack_1b8);
    lVar25 = *(long *)(lVar25 + 0xc0);
    *(undefined1 *)(lVar25 + -8) = 0;
    puVar27 = (undefined4 *)(lVar25 + -0xa8);
LAB_0b2b91c3:
    plVar28 = plStack_1c0;
    pbVar29 = pbStack_100 + 0x20;
    plVar24 = *(long **)(puVar27 + 0x24);
    if (plVar24 < *(long **)(puVar27 + 0x26)) {
      plVar24[2] = 0;
      plVar24[3] = 0;
      *plVar24 = 0;
      plVar24[1] = 0;
      plVar24[4] = 0;
      if (plVar24 != plStack_1c0) {
        if ((*puStack_130 & 1) == 0) {
          plVar24[3] = *(long *)(puStack_130 + 4);
          lVar25 = *(long *)(puStack_130 + 2);
          plVar24[1] = *(long *)puStack_130;
          plVar24[2] = lVar25;
        }
        else {
          func_0x04885070(plVar24 + 1,plVar15[0x14],plVar15[0x13]);
        }
      }
      *plVar24 = *plVar28;
      plVar24[5] = (long)pbVar29;
      plVar24[6] = (long)pbStack_1c8;
      LOCK();
      *(long *)(pbStack_1c8 + 8) = *(long *)(pbStack_1c8 + 8) + 1;
      UNLOCK();
      plVar24 = plVar24 + 7;
      *(long **)(puVar27 + 0x24) = plVar24;
      goto LAB_0b2b94f7;
    }
    lVar25 = (long)plVar24 - *(long *)(puVar27 + 0x22);
    uVar31 = (lVar25 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar31 < 0x492492492492493) {
      lVar20 = (long)*(long **)(puVar27 + 0x26) - *(long *)(puVar27 + 0x22) >> 3;
      uVar26 = lVar20 * -0x2492492492492492;
      if (uVar31 < uVar26) {
        uVar31 = uVar26;
      }
      plStack_198 = (long *)(puVar27 + 0x22);
      if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
        uVar31 = 0x492492492492492;
      }
      plStack_168 = plStack_198;
      if (uVar31 == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      else {
        if (0x492492492492492 < uVar31) goto LAB_0b2b983e;
        puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0x38);
        if (puVar16 == (undefined8 *)0x0) {
          func_0x0eec74c0(uVar31 * 0x38,0);
          puVar16 = (undefined8 *)0x0;
        }
      }
      plVar28 = plStack_1c0;
      plVar24 = (long *)((long)puVar16 + lVar25);
      puStack_1a0 = puVar16 + uVar31 * 7;
      puVar32 = (undefined8 *)((long)puVar16 + lVar25 + 0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined8 *)((long)puVar16 + lVar25) = 0;
      ((undefined8 *)((long)puVar16 + lVar25))[1] = 0;
      *(undefined8 *)((long)puVar16 + lVar25 + 0x20) = 0;
      plStack_1a8 = plVar24;
      puStack_1b8 = puVar16;
      plStack_1b0 = plVar24;
      if (plVar24 != plStack_1c0) {
        puVar23 = (uint *)((long)puVar16 + lVar25 + 8);
        if ((*puStack_130 & 1) == 0) {
          *(undefined8 *)((long)puVar16 + lVar25 + 0x18) = *(undefined8 *)(puStack_130 + 4);
          uVar9 = puStack_130[1];
          uVar10 = puStack_130[2];
          uVar11 = puStack_130[3];
          *puVar23 = *puStack_130;
          *(uint *)((long)puVar16 + lVar25 + 0xc) = uVar9;
          *(uint *)((long)puVar16 + lVar25 + 0x10) = uVar10;
          *(uint *)((long)puVar16 + lVar25 + 0x14) = uVar11;
        }
        else {
          func_0x04885070(puVar23,plVar15[0x14],plVar15[0x13]);
        }
      }
      plVar13 = plStack_168;
      *plVar24 = *plVar28;
      plVar24[5] = (long)pbVar29;
      plVar24[6] = (long)pbStack_1c8;
      LOCK();
      *(long *)(pbStack_1c8 + 8) = *(long *)(pbStack_1c8 + 8) + 1;
      UNLOCK();
      plStack_1a8 = plStack_1a8 + 7;
      puVar32 = *(undefined8 **)(puVar27 + 0x22);
      puVar5 = *(undefined8 **)(puVar27 + 0x24);
      puVar16 = (undefined8 *)((long)plStack_1b0 + ((long)puVar32 - (long)puVar5));
      puVar17 = puVar16;
      puVar21 = puVar32;
      if ((long)puVar32 - (long)puVar5 != 0) {
        do {
          puVar17[2] = 0;
          puVar17[3] = 0;
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[4] = 0;
          puVar17[3] = puVar21[3];
          uVar18 = puVar21[2];
          puVar17[1] = puVar21[1];
          puVar17[2] = uVar18;
          *(undefined2 *)(puVar21 + 1) = 0;
          *puVar17 = *puVar21;
          uVar18 = puVar21[6];
          puVar17[5] = puVar21[5];
          puVar17[6] = uVar18;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21 = puVar21 + 7;
          puVar17 = puVar17 + 7;
        } while (puVar21 != puVar5);
        do {
          plVar24 = (long *)puVar32[6];
          if (plVar24 == (long *)0x0) {
LAB_0b2b9484:
            bVar4 = *(byte *)(puVar32 + 1);
          }
          else {
            LOCK();
            plVar28 = plVar24 + 1;
            lVar25 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar25 != 0) goto LAB_0b2b9484;
            (**(code **)(*plVar24 + 0x10))(plVar24);
            FUN_0412c2d0(plVar24);
            bVar4 = *(byte *)(puVar32 + 1);
          }
          if ((bVar4 & 1) != 0) {
            func_0x0412a280(puVar32[3],puVar32[1] & 0xfffffffffffffffe);
          }
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar5);
        puVar32 = (undefined8 *)*plVar13;
      }
      plVar24 = plStack_1a8;
      *(undefined8 **)(puVar27 + 0x22) = puVar16;
      *(long **)(puVar27 + 0x24) = plStack_1a8;
      lVar25 = *(long *)(puVar27 + 0x26);
      *(undefined8 **)(puVar27 + 0x26) = puStack_1a0;
      if (puVar32 != (undefined8 *)0x0) {
        func_0x0412a280(puVar32,lVar25 - (long)puVar32);
      }
LAB_0b2b94f7:
      plVar13 = plStack_120;
      pbVar22 = pbStack_170;
      plVar28 = plStack_1d0;
      *(long **)(puVar27 + 0x24) = plVar24;
      uVar6 = *puVar27;
      uVar7 = puVar27[1];
      uVar8 = puVar27[2];
      uVar12 = puVar27[3];
      if (*(long *)(puVar27 + 2) != 0) {
        LOCK();
        plVar24 = (long *)(*(long *)(puVar27 + 2) + 8);
        *plVar24 = *plVar24 + 1;
        UNLOCK();
      }
      plVar24 = (long *)plVar15[0xf];
      *(undefined4 *)(plVar15 + 0xe) = uVar6;
      *(undefined4 *)((long)plVar15 + 0x74) = uVar7;
      *(undefined4 *)(plVar15 + 0xf) = uVar8;
      *(undefined4 *)((long)plVar15 + 0x7c) = uVar12;
      if (plVar24 != (long *)0x0) {
        LOCK();
        plVar1 = plVar24 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0412c2d0(plVar24);
        }
      }
      pbVar29 = pbStack_1c8;
      *(undefined1 *)(plVar15 + 0x10) = *(undefined1 *)((long)puVar27 + 0xa1);
      LOCK();
      lVar25 = *(long *)pbVar22;
      *(long *)pbVar22 = *(long *)pbVar22 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*(long *)pbStack_1c8 + 0x10))(pbStack_1c8);
        FUN_0412c2d0(pbVar29);
        LOCK();
        lVar25 = *plStack_108;
        *plStack_108 = *plStack_108 + -1;
        UNLOCK();
        plVar24 = plStack_108;
      }
      else {
        LOCK();
        lVar25 = *plStack_108;
        *plStack_108 = *plStack_108 + -1;
        UNLOCK();
        plVar24 = plStack_108;
      }
      plStack_108 = plVar24;
      if (lVar25 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_0412c2d0(plVar15);
        LOCK();
        lVar25 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar25 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
      }
      if (lVar25 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        FUN_0412c2d0(plVar15);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_1f0 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_1dc,uStack_1e0),
                        CONCAT44(uStack_1ec,uStack_1f0) & 0xfffffffffffffffe);
      }
      ppuVar33 = (undefined8 **)(plVar15 + 0x26);
      if (plVar28 != (long *)0x0) {
        LOCK();
        plVar15 = plVar28 + 1;
        lVar25 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          FUN_0412c2d0(plVar28);
        }
      }
      puStack_b8 = (undefined8 *)&UNK_0f29c128;
      uStack_b0 = 0;
      uStack_a8 = 0x40400000;
      if (ppuVar33 != &puStack_b8) {
        if ((*ppuVar33 == (undefined8 *)0x0) ||
           ((*(code *)(*ppuVar33)[1])(ppuVar33), puStack_b8 != (undefined8 *)0x0)) {
          (*(code *)*puStack_b8)(&puStack_b8,ppuVar33);
          puVar16 = puStack_b8;
        }
        else {
          puVar16 = (undefined8 *)0x0;
        }
        *ppuVar33 = puVar16;
      }
      puStack_150 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
      if (puStack_150 == (undefined4 *)0x0) {
        func_0x0eec74c0(0x48,0);
      }
      uVar18 = _UNK_01454d2b;
      auStack_160[0] = 0x49;
      auStack_160[1] = 0x47;
      *(undefined8 *)(puStack_150 + 0xc) = _DAT_01454d23;
      *(undefined8 *)(puStack_150 + 0xe) = uVar18;
      uVar18 = _UNK_01454d1b;
      *(undefined8 *)(puStack_150 + 8) = _DAT_01454d13;
      *(undefined8 *)(puStack_150 + 10) = uVar18;
      uVar18 = _UNK_01454d0b;
      *(undefined8 *)(puStack_150 + 4) = _DAT_01454d03;
      *(undefined8 *)(puStack_150 + 6) = uVar18;
      uVar8 = _UNK_01454cff;
      uVar7 = _UNK_01454cfb;
      uVar6 = _UNK_01454cf7;
      *puStack_150 = _DAT_01454cf3;
      puStack_150[1] = uVar6;
      puStack_150[2] = uVar7;
      puStack_150[3] = uVar8;
      *(undefined8 *)((long)puStack_150 + 0x3f) = 0x2e736e6967656220;
      *(undefined1 *)((long)puStack_150 + 0x47) = 0;
      (**(code **)(*plVar13 + 0x10))(plVar13,auStack_160);
      if ((auStack_160[0] & 1) != 0) {
        func_0x0412a280(puStack_150,auStack_160[0] & 0xfffffffffffffffe);
      }
      if (plVar28 != (long *)0x0) {
        LOCK();
        plVar15 = plVar28 + 1;
        lVar25 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          FUN_0412c2d0(plVar28);
        }
      }
      return;
    }
  }
  else {
    lVar20 = uVar31 - uStack_128;
    uVar31 = (lVar20 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar31) goto LAB_0b2b9848;
    lVar19 = (long)(*(ulong *)(lStack_118 + 200) - uStack_128) >> 3;
    uVar26 = lVar19 * -0x6186186186186186;
    if (uVar31 < uVar26) {
      uVar31 = uVar26;
    }
    plVar24 = (long *)(lStack_118 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar19 * -0x30c30c30c30c30c3)) {
      uVar31 = 0x186186186186186;
    }
    plStack_198 = plVar24;
    if (uVar31 == 0) {
      puVar16 = (undefined8 *)0x0;
LAB_0b2b8e70:
      plStack_1b0 = (long *)(lVar20 + (long)puVar16);
      puStack_1a0 = puVar16 + uVar31 * 0x15;
      puStack_1b8 = puVar16;
      plStack_1a8 = plStack_1b0;
      func_0x0b2ed610(plStack_1b0);
      plVar28 = plStack_1a8 + 0x15;
      lVar20 = *(long *)(lVar25 + 0xb8);
      lVar25 = *(long *)(lVar25 + 0xc0);
      lVar19 = (lVar20 - lVar25) + (long)plStack_1b0;
      if (lVar20 != lVar25) {
        lVar30 = 0;
        do {
          uVar18 = ((undefined8 *)(lVar20 + lVar30))[1];
          *(undefined8 *)(lVar19 + lVar30) = *(undefined8 *)(lVar20 + lVar30);
          ((undefined8 *)(lVar19 + lVar30))[1] = uVar18;
          *(undefined8 *)(lVar20 + lVar30) = 0;
          ((undefined8 *)(lVar20 + lVar30))[1] = 0;
          puVar16 = (undefined8 *)(lVar19 + 0x20 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16 = (undefined8 *)(lVar19 + 0x10 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar19 + 0x30 + lVar30) = 0;
          *(undefined8 *)(lVar19 + 0x28 + lVar30) = *(undefined8 *)(lVar20 + 0x28 + lVar30);
          puVar27 = (undefined4 *)(lVar20 + 0x18 + lVar30);
          uVar6 = puVar27[1];
          uVar7 = puVar27[2];
          uVar8 = puVar27[3];
          puVar3 = (undefined4 *)(lVar19 + 0x18 + lVar30);
          *puVar3 = *puVar27;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined2 *)(lVar20 + 0x18 + lVar30) = 0;
          *(undefined8 *)(lVar19 + 0x10 + lVar30) = *(undefined8 *)(lVar20 + 0x10 + lVar30);
          func_0x04167a20(lVar19 + lVar30 + 0x38,lVar20 + lVar30 + 0x38);
          puVar16 = (undefined8 *)(lVar20 + 0x40 + lVar30);
          uVar18 = puVar16[1];
          puVar32 = (undefined8 *)(lVar19 + 0x40 + lVar30);
          *puVar32 = *puVar16;
          puVar32[1] = uVar18;
          puVar16 = (undefined8 *)(lVar20 + 0x50 + lVar30);
          uVar18 = puVar16[1];
          puVar32 = (undefined8 *)(lVar19 + 0x50 + lVar30);
          *puVar32 = *puVar16;
          puVar32[1] = uVar18;
          puVar16 = (undefined8 *)(lVar20 + 0x60 + lVar30);
          uVar18 = puVar16[1];
          puVar32 = (undefined8 *)(lVar19 + 0x60 + lVar30);
          *puVar32 = *puVar16;
          puVar32[1] = uVar18;
          puVar16 = (undefined8 *)(lVar20 + 0x60 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar19 + 0x70 + lVar30) = *(undefined8 *)(lVar20 + 0x70 + lVar30);
          puVar16 = (undefined8 *)(lVar20 + 0x78 + lVar30);
          uVar18 = puVar16[1];
          puVar32 = (undefined8 *)(lVar19 + 0x78 + lVar30);
          *puVar32 = *puVar16;
          puVar32[1] = uVar18;
          puVar16 = (undefined8 *)(lVar19 + 0x88 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar19 + 0x98 + lVar30) = 0;
          puVar27 = (undefined4 *)(lVar20 + 0x88 + lVar30);
          uVar6 = puVar27[1];
          uVar7 = puVar27[2];
          uVar8 = puVar27[3];
          puVar3 = (undefined4 *)(lVar19 + 0x88 + lVar30);
          *puVar3 = *puVar27;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(lVar19 + 0x98 + lVar30) = *(undefined8 *)(lVar20 + 0x98 + lVar30);
          puVar16 = (undefined8 *)(lVar20 + 0x88 + lVar30);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined8 *)(lVar20 + 0x98 + lVar30) = 0;
          *(undefined2 *)(lVar19 + 0xa0 + lVar30) = *(undefined2 *)(lVar20 + 0xa0 + lVar30);
          lVar2 = lVar20 + lVar30;
          lVar30 = lVar30 + 0xa8;
        } while (lVar2 + 0xa8 != lVar25);
        do {
          func_0x0b1ea500(lVar20);
          lVar20 = lVar20 + 0xa8;
        } while (lVar20 != lVar25);
        lVar20 = *plVar24;
      }
      lVar25 = lStack_118;
      *(long *)(lStack_118 + 0xb8) = lVar19;
      *(long **)(lStack_118 + 0xc0) = plVar28;
      lVar19 = *(long *)(lStack_118 + 200);
      *(undefined8 **)(lStack_118 + 200) = puStack_1a0;
      if (lVar20 != 0) {
        func_0x0412a280(lVar20,lVar19 - lVar20);
      }
      goto LAB_0b2b9040;
    }
    if (uVar31 < 0x186186186186187) {
      puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31 * 0xa8);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x0eec74c0(uVar31 * 0xa8,0);
        puVar16 = (undefined8 *)0x0;
      }
      goto LAB_0b2b8e70;
    }
LAB_0b2b983e:
    func_0x04882eb0();
  }
  func_0x0b2ed850();
LAB_0b2b9848:
  uVar18 = func_0x0b2ed780();
  if ((*pbVar22 & 1) != 0) {
    func_0x0412a280(plVar28[3],plVar28[1] & 0xfffffffffffffffe);
  }
  func_0x0b2ed790(&puStack_1b8);
  pbVar22 = pbStack_1c8;
  LOCK();
  lVar25 = *(long *)pbStack_170;
  *(long *)pbStack_170 = *(long *)pbStack_170 + -1;
  UNLOCK();
  if (lVar25 == 0) {
    (**(code **)(*(long *)pbStack_1c8 + 0x10))(pbStack_1c8);
    FUN_0412c2d0(pbVar22);
  }
  func_0x0b2ebee0(plVar15);
  func_0x0b2ebf10(plVar15);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_1f0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_1dc,uStack_1e0),
                    CONCAT44(uStack_1ec,uStack_1f0) & 0xfffffffffffffffe);
  }
  func_0x0b2b9a90(plStack_1d0);
  do {
    func_0x0b2b9a90(plStack_1d0);
    do {
      uVar18 = func_0x0eee2d70(uVar18);
    } while ((uStack_148 & 1) == 0);
    func_0x0412a280(puStack_138,uStack_148 & 0xfffffffffffffffe);
    uVar18 = func_0x0eee2d70(uVar18);
  } while( true );
}



/* ---- referenced strings ----
 * 0x127f2d0  days_until_insomnia
 * 0x12e556e  Adds a timer since last rested to see if phantoms should spawn.
 * 0x12e557e  ce last rested to see if phantoms should spawn.
 * 0x12e558e  o see if phantoms should spawn.
 * 0x12e559d  ms should spawn.
 * 0x1454cf3  Number of days the mob has to stay up until the insomnia effect begins.
 * 0x1454d03  he mob has to stay up until the insomnia effect begins.
 * 0x1454d13  ay up until the insomnia effect begins.
 * 0x1454d23  insomnia effect begins.
 */
