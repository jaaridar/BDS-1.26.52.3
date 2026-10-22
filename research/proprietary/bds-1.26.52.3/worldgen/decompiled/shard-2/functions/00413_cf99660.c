/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd099660 (ELF vaddr 0xcf99660)
 * Label: caller-of-callee
 * Body:  [[0d099660, 0d09a0b1] [0d09a0c0, 0d09a123] [0d09a130, 0d09a839] [0d09a840, 0d09a87e] [0d09a880, 0d09aaec] [0d09adb9, 0d09ae3e]]
 * Ghidra: FUN_0d099660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d099660(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long **pplVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined4 *puVar20;
  long *plVar21;
  long lVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  byte *pbVar32;
  long *plVar33;
  byte *pbVar34;
  long lVar35;
  byte *pbVar36;
  uint *puVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long *plVar40;
  bool bVar41;
  long lStack_1f8;
  undefined1 uStack_1c9;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  ulong uStack_158;
  byte *pbStack_150;
  ulong auStack_148 [4];
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *puStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar31 = 0xcbf29ce484222325;
  uVar25 = *param_2;
  plStack_108 = (long *)0x0;
  uStack_100 = _DAT_01d8fb70;
  uStack_f8 = _UNK_01d8fb78;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pbVar23 = (byte *)((long)&uStack_100 + 1);
  uVar17 = func_0x0eee2e90(pbVar23);
  plStack_108 = (long *)0xcbf29ce484222325;
  if (uVar17 != 0) {
    uVar26 = (ulong)((uint)uVar17 & 7);
    if (uVar17 < 8) {
      plStack_108 = (long *)0xcbf29ce484222325;
    }
    else {
      uVar17 = uVar17 & 0xfffffffffffffff8;
      plStack_108 = (long *)0xcbf29ce484222325;
      do {
        plStack_108 = (long *)(((((((((long)plStack_108 * 0x100000001b3 ^ (ulong)*pbVar23) *
                                     0x100000001b3 ^ (ulong)pbVar23[1]) * 0x100000001b3 ^
                                   (ulong)pbVar23[2]) * 0x100000001b3 ^ (ulong)pbVar23[3]) *
                                  0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                                (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) *
                               0x100000001b3 ^ (ulong)pbVar23[7]);
        pbVar23 = pbVar23 + 8;
        uVar17 = uVar17 - 8;
      } while (uVar17 != 0);
    }
    if (uVar26 != 0) {
      uVar17 = 0;
      do {
        plStack_108 = (long *)((long)plStack_108 * 0x100000001b3 ^ (ulong)pbVar23[uVar17]);
        uVar17 = uVar17 + 1;
      } while (uVar26 != uVar17);
    }
  }
  plStack_b8 = (long *)&UNK_0f450d98;
  uStack_b0 = param_3;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f450bb0;
  plStack_1c8 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_1c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_1c8);
    plStack_1c8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
  plVar18[4] = (long)&UNK_0f2ccd78;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  *(undefined1 *)(plVar18 + 0xd) = 0;
  func_0x04aa75f0(plVar18 + 0xe,&uStack_188,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar1 = plVar18 + 0x11;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0xffffffff;
  plVar18[0x26] = 0;
  plVar18[0x27] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0;
  plVar18[4] = (long)&UNK_0f450c00;
  pplVar2 = (long **)(plVar18 + 0x2e);
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  *(undefined1 *)(plVar18 + 0x36) = 0;
  if (pplVar2 != &plStack_1c8) {
    if (plStack_1c8 == (long *)0x0) {
      plVar40 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1c8)(&plStack_1c8,pplVar2);
      plVar40 = plStack_1c8;
    }
    plStack_1c8 = (long *)0x0;
    *pplVar2 = plVar40;
  }
  plVar40 = plVar18 + 4;
  puVar37 = (uint *)(plVar18 + 0x12);
  if (plVar1 != (long *)&DAT_0f552108) {
    if ((*puVar37 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552120;
        uVar11 = uRam000000000f55211c;
        uVar10 = _DAT_0f552118;
        uVar9 = uRam000000000f552114;
        *puVar37 = _DAT_0f552110;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar9;
        *(undefined4 *)(plVar18 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puVar37,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar41 = (_DAT_0f552110 & 1) != 0;
      lVar22 = 0xf552111;
      if (bVar41) {
        lVar22 = _DAT_0f552120;
      }
      uVar17 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar41) {
        uVar17 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar37,lVar22,uVar17);
    }
  }
  plVar33 = plVar18 + 1;
  plVar18[0x11] = _DAT_0f552108;
  plVar18[0x15] = 0;
  if (plStack_1c8 != (long *)0x0) {
    (*(code *)plStack_1c8[1])(&plStack_1c8);
  }
  LOCK();
  *plVar33 = *plVar33 + 1;
  UNLOCK();
  plVar19 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar19 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar19[1] = 0;
  plVar19[2] = 0;
  *plVar19 = (long)&UNK_0f450cf8;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[4] = (long)&UNK_0f450d48;
  plVar19[0xe] = (long)plVar40;
  plVar19[0xf] = (long)plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  plStack_1c8 = plVar19 + 4;
  plStack_1c0 = plVar19;
  puVar20 = (undefined4 *)func_0x0d106550(uVar25,&plStack_108,0);
  plVar21 = *(long **)(puVar20 + 0x24);
  if (plVar21 < *(long **)(puVar20 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 == plVar1) {
LAB_0d099a77:
      *plVar21 = *plVar1;
      plVar21[5] = (long)(plVar19 + 4);
      plVar21[6] = (long)plVar19;
LAB_0d099ae8:
      LOCK();
      plVar19[1] = plVar19[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar37 & 1) == 0) {
        plVar21[3] = plVar18[0x14];
        lVar22 = plVar18[0x13];
        plVar21[1] = *(long *)puVar37;
        plVar21[2] = lVar22;
        goto LAB_0d099a77;
      }
      func_0x04885070(plVar21 + 1,plVar18[0x14],plVar18[0x13]);
      *plVar21 = *plVar1;
      plVar21[5] = (long)plStack_1c8;
      plVar21[6] = (long)plStack_1c0;
      plVar19 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) goto LAB_0d099ae8;
    }
    plVar21 = plVar21 + 7;
    *(long **)(puVar20 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0d109c80(puVar20 + 0x22,plVar1,&plStack_1c8);
  }
  *(long **)(puVar20 + 0x24) = plVar21;
  uVar9 = *puVar20;
  uVar10 = puVar20[1];
  uVar11 = puVar20[2];
  uVar12 = puVar20[3];
  if (*(long *)(puVar20 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar20 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = (long *)plVar18[0xf];
  *(undefined4 *)(plVar18 + 0xe) = uVar9;
  *(undefined4 *)((long)plVar18 + 0x74) = uVar10;
  *(undefined4 *)(plVar18 + 0xf) = uVar11;
  *(undefined4 *)((long)plVar18 + 0x7c) = uVar12;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar19 = plVar1 + 1;
    lVar22 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_0412c2d0(plVar1);
    }
  }
  plVar1 = plStack_1c0;
  *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_1c0 + 1;
    lVar22 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      FUN_0412c2d0(plVar1);
    }
  }
  LOCK();
  lVar22 = *plVar33;
  *plVar33 = *plVar33 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0412c2d0(plVar18);
    LOCK();
    lVar22 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar22 = *plVar33;
    *plVar33 = *plVar33 + -1;
    UNLOCK();
  }
  if (lVar22 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
    FUN_0412c2d0(plVar18);
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lVar22 = (**(code **)(*plVar40 + 0x10))(plVar40,&uStack_128);
  if ((uStack_128 & 1) != 0) {
    func_0x0412a280(uStack_118,uStack_128 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  uStack_188 = 0;
  uStack_180 = _DAT_01d84828;
  uStack_178 = _UNK_01d84830;
  lStack_170 = 0;
  pbStack_168 = (byte *)0x0;
  pbVar23 = (byte *)((long)&uStack_180 + 1);
  uVar17 = func_0x0eee2e90(pbVar23);
  if (uVar17 != 0) {
    uVar26 = (ulong)((uint)uVar17 & 7);
    if (7 < uVar17) {
      uVar17 = uVar17 & 0xfffffffffffffff8;
      do {
        uVar31 = (((((((uVar31 * 0x100000001b3 ^ (ulong)*pbVar23) * 0x100000001b3 ^
                      (ulong)pbVar23[1]) * 0x100000001b3 ^ (ulong)pbVar23[2]) * 0x100000001b3 ^
                    (ulong)pbVar23[3]) * 0x100000001b3 ^ (ulong)pbVar23[4]) * 0x100000001b3 ^
                  (ulong)pbVar23[5]) * 0x100000001b3 ^ (ulong)pbVar23[6]) * 0x100000001b3 ^
                 (ulong)pbVar23[7];
        pbVar23 = pbVar23 + 8;
        uVar17 = uVar17 - 8;
      } while (uVar17 != 0);
    }
    if (uVar26 != 0) {
      uVar17 = 0;
      do {
        uVar31 = uVar31 * 0x100000001b3 ^ (ulong)pbVar23[uVar17];
        uVar17 = uVar17 + 1;
      } while (uVar26 != uVar17);
    }
  }
  uStack_70 = 0;
  uStack_100 = 0;
  lStack_78 = 0;
  plStack_108 = (long *)&UNK_0f450db0;
  uStack_188 = uVar31;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_1c8 = plStack_108;
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f44ced0;
  plStack_1c0 = (long *)0x0;
  plStack_108 = (long *)0x0;
  plVar18[4] = (long)&UNK_0f2ccd78;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  *(undefined1 *)(plVar18 + 0xd) = 0;
  func_0x04aa75f0(plVar18 + 0xe,&uStack_1c9,&UNK_01254d89);
  *(undefined1 *)(plVar18 + 0x10) = 0;
  plVar1 = plVar18 + 0x11;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0xffffffff;
  plVar18[0x26] = 0;
  plVar18[0x27] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0;
  plVar18[4] = (long)&UNK_0f44cf20;
  plVar18[0x2e] = 0;
  plVar18[0x2f] = 0;
  plVar18[0x30] = 0;
  plVar18[0x31] = 0;
  plVar18[0x32] = 0;
  plVar18[0x33] = 0;
  plVar18[0x34] = 0;
  *(undefined4 *)(plVar18 + 0x35) = 0x3f800000;
  plVar18[0x36] = 0;
  plVar18[0x37] = 0;
  if (plStack_1c8 == (long *)0x0) {
    plVar40 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1c8)(&plStack_1c8,plVar18 + 0x36);
    plVar40 = plStack_1c8;
  }
  plVar33 = plVar18 + 4;
  plStack_1c8 = (long *)0x0;
  plVar18[0x36] = (long)plVar40;
  *(undefined1 *)(plVar18 + 0x3e) = 0;
  puStack_110 = (uint *)(plVar18 + 0x12);
  if (plVar1 != (long *)&DAT_0f552138) {
    if ((*puStack_110 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar18[0x14] = _DAT_0f552150;
        uVar11 = uRam000000000f55214c;
        uVar10 = _DAT_0f552148;
        uVar9 = uRam000000000f552144;
        *puStack_110 = _DAT_0f552140;
        *(undefined4 *)((long)plVar18 + 0x94) = uVar9;
        *(undefined4 *)(plVar18 + 0x13) = uVar10;
        *(undefined4 *)((long)plVar18 + 0x9c) = uVar11;
      }
      else {
        func_0x04885070(puStack_110,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar41 = (_DAT_0f552140 & 1) != 0;
      lVar28 = 0xf552141;
      if (bVar41) {
        lVar28 = _DAT_0f552150;
      }
      uVar17 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar41) {
        uVar17 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_110,lVar28,uVar17);
    }
  }
  plVar18[0x11] = _DAT_0f552138;
  plVar18[0x15] = 0;
  if (plStack_1c8 != (long *)0x0) {
    (*(code *)plStack_1c8[1])(&plStack_1c8);
  }
  plVar40 = plVar18 + 1;
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  LOCK();
  *plVar40 = *plVar40 + 1;
  UNLOCK();
  plStack_c0 = plVar40;
  pbVar23 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar23 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar36 = pbStack_168;
  uVar31 = uStack_188;
  pbVar23[8] = 0;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  pbVar23[0x10] = 0;
  pbVar23[0x11] = 0;
  pbVar23[0x12] = 0;
  pbVar23[0x13] = 0;
  pbVar23[0x14] = 0;
  pbVar23[0x15] = 0;
  pbVar23[0x16] = 0;
  pbVar23[0x17] = 0;
  *(undefined **)pbVar23 = &UNK_0f44d000;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x38] = 0;
  pbVar23[0x39] = 0;
  pbVar23[0x3a] = 0;
  pbVar23[0x3b] = 0;
  pbVar23[0x3c] = 0;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  *(undefined **)(pbVar23 + 0x20) = &UNK_0f44d050;
  *(long **)(pbVar23 + 0x70) = plVar33;
  *(long **)(pbVar23 + 0x78) = plVar18;
  LOCK();
  plVar18[1] = plVar18[1] + 1;
  UNLOCK();
  pbStack_150 = pbVar23 + 8;
  uStack_158 = *(ulong *)(lVar22 + 0xb8);
  uVar17 = *(ulong *)(lVar22 + 0xc0);
  pbVar34 = pbVar23;
  pbStack_160 = pbVar23;
  plStack_c8 = plVar33;
  if (uStack_158 != uVar17) {
    if ((uStack_180 & 1) == 0) {
      lStack_1f8 = (long)&uStack_180 + 1;
      uVar26 = uStack_180 >> 1 & 0x7f;
    }
    else {
      lStack_1f8 = lStack_170;
      uVar26 = uStack_178;
    }
    lVar28 = uStack_158 + 0x19;
    do {
      if (*(ulong *)(lVar28 + -9) == uVar31) {
        if ((*(ulong **)(lVar28 + 0x17) == &uStack_188) && ((byte *)(lVar28 + -9) == pbVar36)) {
LAB_0d09a591:
          puVar20 = (undefined4 *)(lVar28 + -0x19);
          goto LAB_0d09a5a4;
        }
        bVar6 = *(byte *)(lVar28 + -1);
        if ((bVar6 & 1) == 0) {
          uVar39 = (ulong)(bVar6 >> 1);
        }
        else {
          uVar39 = *(ulong *)(lVar28 + 7);
        }
        if (uVar39 == uVar26) {
          lVar27 = lVar28;
          if ((bVar6 & 1) != 0) {
            lVar27 = *(long *)(lVar28 + 0xf);
          }
          iVar16 = func_0x0eee3000(lVar27,lStack_1f8,uVar26);
          if (iVar16 == 0) {
            *(ulong **)(lVar28 + 0x17) = &uStack_188;
            pbStack_168 = (byte *)(lVar28 + -9);
            goto LAB_0d09a591;
          }
        }
      }
      *(undefined8 *)(lVar28 + 0x17) = 0;
      uVar39 = lVar28 + 0x8f;
      pbVar34 = pbVar36;
      lVar28 = lVar28 + 0xa8;
    } while (uVar39 != uVar17);
  }
  if (uVar17 < *(ulong *)(lVar22 + 200)) {
    func_0x0d0cb370(uVar17);
    plVar33 = (long *)(uVar17 + 0xa8);
    *(long **)(lVar22 + 0xc0) = plVar33;
LAB_0d09a3f1:
    *(long **)(lVar22 + 0xc0) = plVar33;
    func_0x0b63b6d0(plVar33[-0x15],&uStack_188);
    lVar28 = *(long *)(lVar22 + 0xc0);
    *(undefined1 *)(lVar28 + -7) = *(undefined1 *)(lVar22 + 0x60);
    if ((ulong *)(lVar28 + -0x98) != &uStack_188) {
      pbVar36 = (byte *)(lVar28 + -0x90);
      if ((*pbVar36 & 1) == 0) {
        if ((uStack_180 & 1) == 0) {
          *(long *)(lVar28 + -0x80) = lStack_170;
          *(undefined4 *)pbVar36 = (undefined4)uStack_180;
          *(undefined4 *)(lVar28 + -0x8c) = uStack_180._4_4_;
          *(undefined4 *)(lVar28 + -0x88) = (undefined4)uStack_178;
          *(undefined4 *)(lVar28 + -0x84) = uStack_178._4_4_;
        }
        else {
          func_0x04885070(pbVar36,lStack_170,uStack_178);
        }
      }
      else {
        uVar17 = uStack_180 >> 1 & 0x7f;
        lVar27 = (long)&uStack_180 + 1;
        if ((uStack_180 & 1) != 0) {
          uVar17 = uStack_178;
          lVar27 = lStack_170;
        }
        func_0x04885120(pbVar36,lVar27,uVar17);
      }
    }
    *(ulong *)(lVar28 + -0x98) = uStack_188;
    *(undefined8 *)(lVar28 + -0x78) = 0;
    FUN_04aa9390(&plStack_1c8,&uStack_180,*(undefined1 *)(lVar22 + 0x60));
    lVar28 = *(long *)(lVar22 + 0xc0);
    func_0x04167a70(lVar28 + -0x70,&plStack_1c8);
    *(long **)(lVar28 + -0x68) = plStack_1c0;
    *(long **)(lVar28 + -0x60) = plStack_1b8;
    *(long **)(lVar28 + -0x58) = plStack_1b0;
    *(long **)(lVar28 + -0x50) = plStack_1a8;
    uVar9 = (undefined4)uStack_1a0;
    uVar10 = uStack_1a0._4_4_;
    uVar11 = (undefined4)uStack_198;
    uVar12 = uStack_198._4_4_;
    uStack_1a0 = 0;
    uStack_198 = (byte *)0x0;
    plVar40 = *(long **)(lVar28 + -0x40);
    *(undefined4 *)(lVar28 + -0x48) = uVar9;
    *(undefined4 *)(lVar28 + -0x44) = uVar10;
    *(undefined4 *)(lVar28 + -0x40) = uVar11;
    *(undefined4 *)(lVar28 + -0x3c) = uVar12;
    if (plVar40 != (long *)0x0) {
      LOCK();
      plVar33 = plVar40 + 1;
      lVar27 = *plVar33;
      *plVar33 = *plVar33 + -1;
      UNLOCK();
      if (lVar27 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
        FUN_0412c2d0(plVar40);
      }
    }
    pbVar36 = uStack_198;
    *(undefined8 *)(lVar28 + -0x38) = uStack_190;
    if (uStack_198 != (byte *)0x0) {
      LOCK();
      pbVar34 = uStack_198 + 8;
      lVar28 = *(long *)pbVar34;
      *(long *)pbVar34 = *(long *)pbVar34 + -1;
      UNLOCK();
      if (lVar28 == 0) {
        (**(code **)(*(long *)uStack_198 + 0x10))(uStack_198);
        FUN_0412c2d0(pbVar36);
      }
    }
    FUN_04167a40(&plStack_1c8);
    lVar22 = *(long *)(lVar22 + 0xc0);
    *(undefined1 *)(lVar22 + -8) = 1;
    puVar20 = (undefined4 *)(lVar22 + -0xa8);
LAB_0d09a5a4:
    pbVar32 = pbVar23 + 0x20;
    plVar40 = *(long **)(puVar20 + 0x24);
    if (plVar40 < *(long **)(puVar20 + 0x26)) {
      plVar40[2] = 0;
      plVar40[3] = 0;
      *plVar40 = 0;
      plVar40[1] = 0;
      plVar40[4] = 0;
      if (plVar40 != plVar1) {
        if ((*puStack_110 & 1) == 0) {
          plVar40[3] = *(long *)(puStack_110 + 4);
          lVar22 = *(long *)(puStack_110 + 2);
          plVar40[1] = *(long *)puStack_110;
          plVar40[2] = lVar22;
        }
        else {
          func_0x04885070(plVar40 + 1,plVar18[0x14],plVar18[0x13]);
        }
      }
      *plVar40 = *plVar1;
      plVar40[5] = (long)pbVar32;
      plVar40[6] = (long)pbStack_160;
      LOCK();
      *(long *)(pbStack_160 + 8) = *(long *)(pbStack_160 + 8) + 1;
      UNLOCK();
      plVar40 = plVar40 + 7;
      *(long **)(puVar20 + 0x24) = plVar40;
      pbVar23 = pbStack_150;
      goto LAB_0d09a8e1;
    }
    lVar22 = (long)plVar40 - *(long *)(puVar20 + 0x22);
    uVar17 = (lVar22 >> 3) * 0x6db6db6db6db6db7 + 1;
    pbVar34 = pbVar36;
    if (uVar17 < 0x492492492492493) {
      lVar28 = (long)*(long **)(puVar20 + 0x26) - *(long *)(puVar20 + 0x22) >> 3;
      uVar31 = lVar28 * -0x2492492492492492;
      if (uVar17 < uVar31) {
        uVar17 = uVar31;
      }
      plVar40 = (long *)(puVar20 + 0x22);
      if (0x249249249249248 < (ulong)(lVar28 * 0x6db6db6db6db6db7)) {
        uVar17 = 0x492492492492492;
      }
      plStack_1a8 = plVar40;
      if (uVar17 == 0) {
        plVar33 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar17) goto LAB_0d09aab4;
        plVar33 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 0x38);
        if (plVar33 == (long *)0x0) {
          func_0x0eec74c0(uVar17 * 0x38,0);
          plVar33 = (long *)0x0;
        }
      }
      plVar19 = (long *)((long)plVar33 + lVar22);
      plStack_1b0 = plVar33 + uVar17 * 7;
      puVar5 = (undefined8 *)((long)plVar33 + lVar22 + 0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined8 *)((long)plVar33 + lVar22) = 0;
      ((undefined8 *)((long)plVar33 + lVar22))[1] = 0;
      *(undefined8 *)((long)plVar33 + lVar22 + 0x20) = 0;
      plStack_1b8 = plVar19;
      plStack_1c8 = plVar33;
      plStack_1c0 = plVar19;
      if (plVar19 != plVar1) {
        puVar37 = (uint *)((long)plVar33 + lVar22 + 8);
        if ((*puStack_110 & 1) == 0) {
          *(undefined8 *)((long)plVar33 + lVar22 + 0x18) = *(undefined8 *)(puStack_110 + 4);
          uVar13 = puStack_110[1];
          uVar14 = puStack_110[2];
          uVar15 = puStack_110[3];
          *puVar37 = *puStack_110;
          *(uint *)((long)plVar33 + lVar22 + 0xc) = uVar13;
          *(uint *)((long)plVar33 + lVar22 + 0x10) = uVar14;
          *(uint *)((long)plVar33 + lVar22 + 0x14) = uVar15;
        }
        else {
          func_0x04885070(puVar37,plVar18[0x14],plVar18[0x13]);
        }
      }
      *plVar19 = *plVar1;
      plVar19[5] = (long)pbVar32;
      plVar19[6] = (long)pbStack_160;
      LOCK();
      *(long *)(pbStack_160 + 8) = *(long *)(pbStack_160 + 8) + 1;
      UNLOCK();
      plStack_1b8 = plStack_1b8 + 7;
      puVar38 = *(undefined8 **)(puVar20 + 0x22);
      puVar7 = *(undefined8 **)(puVar20 + 0x24);
      puVar5 = (undefined8 *)((long)plStack_1c0 + ((long)puVar38 - (long)puVar7));
      puVar24 = puVar5;
      puVar29 = puVar38;
      if ((long)puVar38 - (long)puVar7 != 0) {
        do {
          puVar24[2] = 0;
          puVar24[3] = 0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[4] = 0;
          puVar24[3] = puVar29[3];
          uVar25 = puVar29[2];
          puVar24[1] = puVar29[1];
          puVar24[2] = uVar25;
          *(undefined2 *)(puVar29 + 1) = 0;
          *puVar24 = *puVar29;
          uVar25 = puVar29[6];
          puVar24[5] = puVar29[5];
          puVar24[6] = uVar25;
          puVar29[5] = 0;
          puVar29[6] = 0;
          puVar29 = puVar29 + 7;
          puVar24 = puVar24 + 7;
        } while (puVar29 != puVar7);
        do {
          plVar1 = (long *)puVar38[6];
          if (plVar1 == (long *)0x0) {
LAB_0d09a865:
            bVar6 = *(byte *)(puVar38 + 1);
          }
          else {
            LOCK();
            plVar33 = plVar1 + 1;
            lVar22 = *plVar33;
            *plVar33 = *plVar33 + -1;
            UNLOCK();
            if (lVar22 != 0) goto LAB_0d09a865;
            (**(code **)(*plVar1 + 0x10))(plVar1);
            FUN_0412c2d0(plVar1);
            bVar6 = *(byte *)(puVar38 + 1);
          }
          if ((bVar6 & 1) != 0) {
            func_0x0412a280(puVar38[3],puVar38[1] & 0xfffffffffffffffe);
          }
          puVar38 = puVar38 + 7;
        } while (puVar38 != puVar7);
        puVar38 = (undefined8 *)*plVar40;
      }
      pbVar23 = pbStack_150;
      plVar40 = plStack_1b8;
      *(undefined8 **)(puVar20 + 0x22) = puVar5;
      *(long **)(puVar20 + 0x24) = plStack_1b8;
      lVar22 = *(long *)(puVar20 + 0x26);
      *(long **)(puVar20 + 0x26) = plStack_1b0;
      if (puVar38 != (undefined8 *)0x0) {
        func_0x0412a280(puVar38,lVar22 - (long)puVar38);
      }
LAB_0d09a8e1:
      *(long **)(puVar20 + 0x24) = plVar40;
      uVar9 = *puVar20;
      uVar10 = puVar20[1];
      uVar11 = puVar20[2];
      uVar12 = puVar20[3];
      if (*(long *)(puVar20 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(puVar20 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = (long *)plVar18[0xf];
      *(undefined4 *)(plVar18 + 0xe) = uVar9;
      *(undefined4 *)((long)plVar18 + 0x74) = uVar10;
      *(undefined4 *)(plVar18 + 0xf) = uVar11;
      *(undefined4 *)((long)plVar18 + 0x7c) = uVar12;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar40 = plVar1 + 1;
        lVar22 = *plVar40;
        *plVar40 = *plVar40 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          FUN_0412c2d0(plVar1);
        }
      }
      pbVar36 = pbStack_160;
      *(undefined1 *)(plVar18 + 0x10) = *(undefined1 *)((long)puVar20 + 0xa1);
      LOCK();
      lVar22 = *(long *)pbVar23;
      *(long *)pbVar23 = *(long *)pbVar23 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
        FUN_0412c2d0(pbVar36);
        LOCK();
        lVar22 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar1 = plStack_c0;
      }
      else {
        LOCK();
        lVar22 = *plStack_c0;
        *plStack_c0 = *plStack_c0 + -1;
        UNLOCK();
        plVar1 = plStack_c0;
      }
      plStack_c0 = plVar1;
      if (lVar22 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        FUN_0412c2d0(plVar18);
      }
      plVar40 = plStack_c8;
      LOCK();
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        FUN_0412c2d0(plVar18);
      }
      auStack_148[0] = 0;
      auStack_148[1] = 0;
      auStack_148[2] = 0;
      (**(code **)(*plVar40 + 0x10))(plVar40,auStack_148);
      if ((auStack_148[0] & 1) != 0) {
        func_0x0412a280(auStack_148[2],auStack_148[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_180 & 1) != 0) {
        func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar28 = uVar17 - uStack_158;
    pbVar32 = (byte *)((lVar28 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((byte *)0x186186186186186 < pbVar32) goto LAB_0d09aabe;
    plVar40 = (long *)(lVar22 + 0xb8);
    lVar27 = (long)(*(ulong *)(lVar22 + 200) - uStack_158) >> 3;
    pbVar36 = (byte *)(lVar27 * -0x6186186186186186);
    if (pbVar32 < pbVar36) {
      pbVar32 = pbVar36;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar27 * -0x30c30c30c30c30c3)) {
      pbVar32 = (byte *)0x186186186186186;
    }
    plStack_1a8 = plVar40;
    if (pbVar32 == (byte *)0x0) {
      plVar33 = (long *)0x0;
LAB_0d09a221:
      plStack_1c0 = (long *)(lVar28 + (long)plVar33);
      plStack_1b0 = plVar33 + (long)pbVar32 * 0x15;
      plStack_1c8 = plVar33;
      plStack_1b8 = plStack_1c0;
      func_0x0d0cb370(plStack_1c0);
      plVar33 = plStack_1b8 + 0x15;
      lVar28 = *(long *)(lVar22 + 0xb8);
      lVar27 = *(long *)(lVar22 + 0xc0);
      lVar35 = (lVar28 - lVar27) + (long)plStack_1c0;
      if (lVar28 != lVar27) {
        lVar30 = 0;
        do {
          uVar25 = ((undefined8 *)(lVar28 + lVar30))[1];
          *(undefined8 *)(lVar35 + lVar30) = *(undefined8 *)(lVar28 + lVar30);
          ((undefined8 *)(lVar35 + lVar30))[1] = uVar25;
          *(undefined8 *)(lVar28 + lVar30) = 0;
          ((undefined8 *)(lVar28 + lVar30))[1] = 0;
          puVar5 = (undefined8 *)(lVar35 + 0x20 + lVar30);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5 = (undefined8 *)(lVar35 + 0x10 + lVar30);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar35 + 0x30 + lVar30) = 0;
          *(undefined8 *)(lVar35 + 0x28 + lVar30) = *(undefined8 *)(lVar28 + 0x28 + lVar30);
          puVar20 = (undefined4 *)(lVar28 + 0x18 + lVar30);
          uVar9 = puVar20[1];
          uVar10 = puVar20[2];
          uVar11 = puVar20[3];
          puVar4 = (undefined4 *)(lVar35 + 0x18 + lVar30);
          *puVar4 = *puVar20;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined2 *)(lVar28 + 0x18 + lVar30) = 0;
          *(undefined8 *)(lVar35 + 0x10 + lVar30) = *(undefined8 *)(lVar28 + 0x10 + lVar30);
          func_0x04167a20(lVar35 + lVar30 + 0x38,lVar30 + lVar28 + 0x38);
          puVar5 = (undefined8 *)(lVar28 + 0x40 + lVar30);
          uVar25 = puVar5[1];
          puVar38 = (undefined8 *)(lVar35 + 0x40 + lVar30);
          *puVar38 = *puVar5;
          puVar38[1] = uVar25;
          puVar5 = (undefined8 *)(lVar28 + 0x50 + lVar30);
          uVar25 = puVar5[1];
          puVar38 = (undefined8 *)(lVar35 + 0x50 + lVar30);
          *puVar38 = *puVar5;
          puVar38[1] = uVar25;
          puVar5 = (undefined8 *)(lVar28 + 0x60 + lVar30);
          uVar25 = puVar5[1];
          puVar38 = (undefined8 *)(lVar35 + 0x60 + lVar30);
          *puVar38 = *puVar5;
          puVar38[1] = uVar25;
          puVar5 = (undefined8 *)(lVar28 + 0x60 + lVar30);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar35 + 0x70 + lVar30) = *(undefined8 *)(lVar28 + 0x70 + lVar30);
          puVar5 = (undefined8 *)(lVar28 + 0x78 + lVar30);
          uVar25 = puVar5[1];
          puVar38 = (undefined8 *)(lVar35 + 0x78 + lVar30);
          *puVar38 = *puVar5;
          puVar38[1] = uVar25;
          puVar5 = (undefined8 *)(lVar35 + 0x88 + lVar30);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar35 + 0x98 + lVar30) = 0;
          puVar20 = (undefined4 *)(lVar28 + 0x88 + lVar30);
          uVar9 = puVar20[1];
          uVar10 = puVar20[2];
          uVar11 = puVar20[3];
          puVar4 = (undefined4 *)(lVar35 + 0x88 + lVar30);
          *puVar4 = *puVar20;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(undefined8 *)(lVar35 + 0x98 + lVar30) = *(undefined8 *)(lVar28 + 0x98 + lVar30);
          puVar5 = (undefined8 *)(lVar28 + 0x88 + lVar30);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar28 + 0x98 + lVar30) = 0;
          *(undefined2 *)(lVar35 + 0xa0 + lVar30) = *(undefined2 *)(lVar28 + 0xa0 + lVar30);
          lVar3 = lVar30 + lVar28;
          lVar30 = lVar30 + 0xa8;
        } while (lVar3 + 0xa8 != lVar27);
        do {
          func_0x0d0cb4f0(lVar28);
          lVar28 = lVar28 + 0xa8;
        } while (lVar28 != lVar27);
        lVar28 = *plVar40;
      }
      *(long *)(lVar22 + 0xb8) = lVar35;
      *(long **)(lVar22 + 0xc0) = plVar33;
      lVar27 = *(long *)(lVar22 + 200);
      *(long **)(lVar22 + 200) = plStack_1b0;
      if (lVar28 != 0) {
        func_0x0412a280(lVar28,lVar27 - lVar28);
      }
      goto LAB_0d09a3f1;
    }
    if (pbVar32 < (byte *)0x186186186186187) {
      plVar33 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pbVar32 * 0xa8);
      if (plVar33 == (long *)0x0) {
        func_0x0eec74c0((long)pbVar32 * 0xa8,0);
        plVar33 = (long *)0x0;
      }
      goto LAB_0d09a221;
    }
LAB_0d09aab4:
    func_0x04882eb0();
  }
  func_0x0d0cb710();
LAB_0d09aabe:
  uVar25 = func_0x0d0cb4e0();
  if ((*pbVar34 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar32 + 0x18),*(ulong *)(pbVar32 + 8) & 0xfffffffffffffffe);
  }
  func_0x0d0cb650(&plStack_1c8);
  pbVar23 = pbStack_160;
  LOCK();
  lVar22 = *(long *)pbStack_150;
  *(long *)pbStack_150 = *(long *)pbStack_150 + -1;
  UNLOCK();
  if (lVar22 == 0) {
    (**(code **)(*(long *)pbStack_160 + 0x10))(pbStack_160);
    FUN_0412c2d0(pbVar23);
  }
  func_0x0d0c9180(plVar18);
  func_0x0d0c91b0(plVar18);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_180 & 1) != 0) {
    func_0x0412a280(lStack_170,uStack_180 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar25);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


