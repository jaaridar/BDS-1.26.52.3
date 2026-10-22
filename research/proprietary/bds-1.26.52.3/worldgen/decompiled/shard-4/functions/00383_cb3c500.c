/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc3c500 (ELF vaddr 0xcb3c500)
 * Label: caller-of-callee
 * Body:  [[0cc3c500, 0cc3cef5] [0cc3cf00, 0cc3cf64] [0cc3cf70, 0cc3d675] [0cc3d680, 0cc3d6be] [0cc3d6c0, 0cc3d949] [0cc3dbf3, 0cc3dc7d]]
 * Ghidra: FUN_0cc3c500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc3c500(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long **pplVar2;
  long lVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined4 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  byte *pbVar31;
  long *plVar32;
  long lVar33;
  uint *puVar34;
  undefined8 *puVar35;
  long *plVar36;
  ulong uVar37;
  long *plVar38;
  bool bVar39;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint *puStack_1b0;
  byte *pbStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined7 uStack_187;
  byte *pbStack_180;
  byte *pbStack_178;
  ulong uStack_170;
  ulong auStack_168 [4];
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint *puStack_128;
  byte *pbStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar36 = (long *)0xcbf29ce484222325;
  uVar24 = *param_2;
  plStack_118 = (long *)0x0;
  uStack_110 = _DAT_01d4b528;
  uStack_108 = _UNK_01d4b530;
  uStack_100 = 0;
  uStack_f8 = 0;
  pbVar31 = (byte *)((long)&uStack_110 + 1);
  uVar16 = func_0x0eee2e90(pbVar31);
  if (uVar16 != 0) {
    uVar28 = (ulong)((uint)uVar16 & 7);
    if (7 < uVar16) {
      uVar16 = uVar16 & 0xfffffffffffffff8;
      do {
        plVar36 = (long *)(((((((((long)plVar36 * 0x100000001b3 ^ (ulong)*pbVar31) * 0x100000001b3 ^
                                (ulong)pbVar31[1]) * 0x100000001b3 ^ (ulong)pbVar31[2]) *
                               0x100000001b3 ^ (ulong)pbVar31[3]) * 0x100000001b3 ^
                             (ulong)pbVar31[4]) * 0x100000001b3 ^ (ulong)pbVar31[5]) * 0x100000001b3
                           ^ (ulong)pbVar31[6]) * 0x100000001b3 ^ (ulong)pbVar31[7]);
        pbVar31 = pbVar31 + 8;
        uVar16 = uVar16 - 8;
      } while (uVar16 != 0);
    }
    if (uVar28 != 0) {
      uVar16 = 0;
      do {
        plVar36 = (long *)((long)plVar36 * 0x100000001b3 ^ (ulong)pbVar31[uVar16]);
        uVar16 = uVar16 + 1;
      } while (uVar28 != uVar16);
    }
  }
  plStack_b8 = (long *)&UNK_0f3fa6c0;
  plStack_118 = plVar36;
  uStack_b0 = param_3;
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar36[1] = 0;
  plVar36[2] = 0;
  *plVar36 = (long)&UNK_0f3fa4d8;
  plStack_1f8 = (long *)0x0;
  plStack_1f0 = (long *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_1f8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_1f8);
    plStack_1f8 = plStack_b8;
  }
  plStack_b8 = (long *)0x0;
  plVar36[4] = (long)&UNK_0f2ccd78;
  plVar36[5] = 0;
  plVar36[6] = 0;
  plVar36[7] = 0;
  plVar36[8] = 0;
  plVar36[9] = 0;
  plVar36[10] = 0;
  plVar36[0xb] = 0;
  plVar36[0xc] = 0;
  *(undefined1 *)(plVar36 + 0xd) = 0;
  func_0x04aa75f0(plVar36 + 0xe,&lStack_1a0,&UNK_01254d89);
  *(undefined1 *)(plVar36 + 0x10) = 0;
  plVar38 = plVar36 + 0x11;
  plVar36[0x11] = 0;
  plVar36[0x12] = 0;
  plVar36[0x13] = 0;
  plVar36[0x14] = 0;
  plVar36[0x15] = 0;
  plVar36[0x16] = 0;
  plVar36[0x17] = 0xffffffff;
  plVar36[0x26] = 0;
  plVar36[0x27] = 0;
  plVar36[0x18] = 0;
  plVar36[0x19] = 0;
  plVar36[0x1a] = 0;
  plVar36[0x1b] = 0;
  plVar36[0x1c] = 0;
  plVar36[0x1d] = 0;
  plVar36[0x1e] = 0;
  plVar36[0x1f] = 0;
  plVar36[4] = (long)&UNK_0f3fa528;
  pplVar2 = (long **)(plVar36 + 0x2e);
  plVar36[0x2e] = 0;
  plVar36[0x2f] = 0;
  *(undefined1 *)(plVar36 + 0x36) = 0;
  if (pplVar2 != &plStack_1f8) {
    if (plStack_1f8 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_1f8)(&plStack_1f8,pplVar2);
      plVar30 = plStack_1f8;
    }
    plStack_1f8 = (long *)0x0;
    *pplVar2 = plVar30;
  }
  plVar30 = plVar36 + 4;
  puVar34 = (uint *)(plVar36 + 0x12);
  if (plVar38 != (long *)&DAT_0f552108) {
    if ((*puVar34 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar36[0x14] = _DAT_0f552120;
        uVar10 = uRam000000000f55211c;
        uVar9 = _DAT_0f552118;
        uVar8 = uRam000000000f552114;
        *puVar34 = _DAT_0f552110;
        *(undefined4 *)((long)plVar36 + 0x94) = uVar8;
        *(undefined4 *)(plVar36 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar36 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puVar34,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar39 = (_DAT_0f552110 & 1) != 0;
      lVar20 = 0xf552111;
      if (bVar39) {
        lVar20 = _DAT_0f552120;
      }
      uVar16 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar39) {
        uVar16 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      FUN_04885120(puVar34,lVar20,uVar16);
    }
  }
  plVar32 = plVar36 + 1;
  plVar36[0x11] = _DAT_0f552108;
  plVar36[0x15] = 0;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  puStack_1b0 = puVar34;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f3fa620;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[4] = (long)&UNK_0f3fa670;
  plVar17[0xe] = (long)plVar30;
  plVar17[0xf] = (long)plVar36;
  LOCK();
  plVar36[1] = plVar36[1] + 1;
  UNLOCK();
  plStack_1f8 = plVar17 + 4;
  plStack_1f0 = plVar17;
  puVar18 = (undefined4 *)func_0x0cd30730(uVar24,&plStack_118,0);
  plVar19 = *(long **)(puVar18 + 0x24);
  if (plVar19 < *(long **)(puVar18 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 == plVar38) {
LAB_0cc3c8fe:
      *plVar19 = *plVar38;
      plVar19[5] = (long)(plVar17 + 4);
      plVar19[6] = (long)plVar17;
LAB_0cc3c96b:
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_1b0 & 1) == 0) {
        plVar19[3] = *(long *)(puStack_1b0 + 4);
        lVar20 = *(long *)(puStack_1b0 + 2);
        plVar19[1] = *(long *)puStack_1b0;
        plVar19[2] = lVar20;
        goto LAB_0cc3c8fe;
      }
      func_0x04885070(plVar19 + 1,plVar36[0x14],plVar36[0x13]);
      *plVar19 = *plVar38;
      plVar19[5] = (long)plStack_1f8;
      plVar19[6] = (long)plStack_1f0;
      plVar17 = plStack_1f0;
      if (plStack_1f0 != (long *)0x0) goto LAB_0cc3c96b;
    }
    plVar19 = plVar19 + 7;
    *(long **)(puVar18 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x0cd33e60(puVar18 + 0x22,plVar38,&plStack_1f8);
  }
  *(long **)(puVar18 + 0x24) = plVar19;
  uVar8 = *puVar18;
  uVar9 = puVar18[1];
  uVar10 = puVar18[2];
  uVar11 = puVar18[3];
  if (*(long *)(puVar18 + 2) != 0) {
    LOCK();
    plVar38 = (long *)(*(long *)(puVar18 + 2) + 8);
    *plVar38 = *plVar38 + 1;
    UNLOCK();
  }
  plVar38 = (long *)plVar36[0xf];
  *(undefined4 *)(plVar36 + 0xe) = uVar8;
  *(undefined4 *)((long)plVar36 + 0x74) = uVar9;
  *(undefined4 *)(plVar36 + 0xf) = uVar10;
  *(undefined4 *)((long)plVar36 + 0x7c) = uVar11;
  if (plVar38 != (long *)0x0) {
    LOCK();
    plVar17 = plVar38 + 1;
    lVar20 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar38 + 0x10))(plVar38);
      func_0x0412c2d0(plVar38);
    }
  }
  plVar38 = plStack_1f0;
  *(undefined1 *)(plVar36 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
  if (plStack_1f0 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_1f0 + 1;
    lVar20 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_1f0 + 0x10))(plStack_1f0);
      func_0x0412c2d0(plVar38);
    }
  }
  LOCK();
  lVar20 = *plVar32;
  *plVar32 = *plVar32 + -1;
  UNLOCK();
  if (lVar20 == 0) {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    func_0x0412c2d0(plVar36);
    LOCK();
    lVar20 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar20 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
  }
  if (lVar20 == 0) {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    func_0x0412c2d0(plVar36);
  }
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  lVar20 = (**(code **)(*plVar30 + 0x10))(plVar30,&uStack_148);
  if ((uStack_148 & 1) != 0) {
    func_0x0412a280(uStack_138,uStack_148 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_110 & 1) != 0) {
    func_0x0412a280(uStack_100,uStack_110 & 0xfffffffffffffffe);
  }
  uStack_187 = 0;
  pbStack_180 = (byte *)0x0;
  uStack_198 = CONCAT31((int3)_DAT_0147c4a4,0x20);
  uStack_194._1_3_ = (undefined3)_UNK_0147c4a8;
  uStack_194 = CONCAT31(uStack_194._1_3_,(char)((uint)_DAT_0147c4a4 >> 0x18));
  uStack_190._1_3_ = (undefined3)_UNK_0147c4ac;
  uStack_190 = CONCAT31(uStack_190._1_3_,(char)((uint)_UNK_0147c4a8 >> 0x18));
  uStack_18c._1_3_ = (undefined3)_UNK_0147c4b0;
  uStack_18c = CONCAT31(uStack_18c._1_3_,(char)((uint)_UNK_0147c4ac >> 0x18));
  uStack_188 = (undefined1)((uint)_UNK_0147c4b0 >> 0x18);
  lStack_1a0 = 0x442724424c86d8ea;
  uStack_70 = 0;
  uStack_110 = 0;
  lStack_78 = 0;
  plStack_118 = (long *)&UNK_0f3fa6d8;
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x1d0,0);
  }
  plStack_1f8 = plStack_118;
  plVar36[1] = 0;
  plVar36[2] = 0;
  *plVar36 = (long)&UNK_0f3f7370;
  plStack_1f0 = (long *)0x0;
  plStack_118 = (long *)0x0;
  plVar36[4] = (long)&UNK_0f2ccd78;
  plVar36[5] = 0;
  plVar36[6] = 0;
  plVar36[7] = 0;
  plVar36[8] = 0;
  plVar36[9] = 0;
  plVar36[10] = 0;
  plVar36[0xb] = 0;
  plVar36[0xc] = 0;
  *(undefined1 *)(plVar36 + 0xd) = 0;
  func_0x04aa75f0(plVar36 + 0xe,&plStack_c8,&UNK_01254d89);
  *(undefined1 *)(plVar36 + 0x10) = 0;
  plVar36[0x11] = 0;
  plVar36[0x12] = 0;
  plVar36[0x13] = 0;
  plVar36[0x14] = 0;
  plVar36[0x15] = 0;
  plVar36[0x16] = 0;
  plVar36[0x17] = 0xffffffff;
  plVar36[0x26] = 0;
  plVar36[0x27] = 0;
  plVar36[0x18] = 0;
  plVar36[0x19] = 0;
  plVar36[0x1a] = 0;
  plVar36[0x1b] = 0;
  plVar36[0x1c] = 0;
  plVar36[0x1d] = 0;
  plVar36[0x1e] = 0;
  plVar36[0x1f] = 0;
  plVar36[4] = (long)&UNK_0f3f73c0;
  plVar36[0x2e] = 0;
  plVar36[0x2f] = 0;
  if (plStack_1f8 == (long *)0x0) {
    plVar38 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1f8)(&plStack_1f8,plVar36 + 0x2e);
    plVar38 = plStack_1f8;
  }
  pbVar31 = (byte *)(plVar36 + 4);
  plStack_1f8 = (long *)0x0;
  plVar36[0x2e] = (long)plVar38;
  plStack_c8 = plVar36 + 0x36;
  plVar36[0x36] = 0;
  plVar36[0x37] = 0;
  plVar36[0x38] = 0;
  uStack_c0 = 0;
  puVar21 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  puStack_1b0 = (uint *)(plVar36 + 0x11);
  plVar36[0x36] = (long)puVar21;
  plVar36[0x38] = (long)(puVar21 + 5);
  puVar21[4] = 0;
  puVar21[1] = 0x746c75616665640e;
  puVar21[2] = 0;
  puVar21[3] = 0;
  *puVar21 = 0xdead4915c9c6c0d8;
  plVar36[0x37] = (long)(puVar21 + 5);
  puStack_128 = (uint *)(plVar36 + 0x12);
  if (puStack_1b0 != (uint *)&DAT_0f5520d8) {
    if ((*puStack_128 & 1) == 0) {
      if ((_DAT_0f5520e0 & 1) == 0) {
        plVar36[0x14] = _DAT_0f5520f0;
        uVar10 = uRam000000000f5520ec;
        uVar9 = _DAT_0f5520e8;
        uVar8 = uRam000000000f5520e4;
        *puStack_128 = _DAT_0f5520e0;
        *(undefined4 *)((long)plVar36 + 0x94) = uVar8;
        *(undefined4 *)(plVar36 + 0x13) = uVar9;
        *(undefined4 *)((long)plVar36 + 0x9c) = uVar10;
      }
      else {
        func_0x04885070(puStack_128,_DAT_0f5520f0,CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8));
      }
    }
    else {
      bVar39 = (_DAT_0f5520e0 & 1) != 0;
      lVar26 = 0xf5520e1;
      if (bVar39) {
        lVar26 = _DAT_0f5520f0;
      }
      uVar16 = (ulong)((_DAT_0f5520e0 & 0xff) >> 1);
      if (bVar39) {
        uVar16 = CONCAT44(uRam000000000f5520ec,_DAT_0f5520e8);
      }
      FUN_04885120(puStack_128,lVar26,uVar16);
    }
  }
  plVar36[0x11] = _DAT_0f5520d8;
  plVar36[0x15] = 0;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  plVar38 = plVar36 + 1;
  if (plStack_118 != (long *)0x0) {
    (*(code *)plStack_118[1])(&plStack_118);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plStack_d0 = plVar38;
  pbVar22 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar22 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  pbVar1 = pbStack_180;
  lVar26 = lStack_1a0;
  pbVar22[8] = 0;
  pbVar22[9] = 0;
  pbVar22[10] = 0;
  pbVar22[0xb] = 0;
  pbVar22[0xc] = 0;
  pbVar22[0xd] = 0;
  pbVar22[0xe] = 0;
  pbVar22[0xf] = 0;
  pbVar22[0x10] = 0;
  pbVar22[0x11] = 0;
  pbVar22[0x12] = 0;
  pbVar22[0x13] = 0;
  pbVar22[0x14] = 0;
  pbVar22[0x15] = 0;
  pbVar22[0x16] = 0;
  pbVar22[0x17] = 0;
  *(undefined **)pbVar22 = &UNK_0f3f74a0;
  pbVar22[0x30] = 0;
  pbVar22[0x31] = 0;
  pbVar22[0x32] = 0;
  pbVar22[0x33] = 0;
  pbVar22[0x34] = 0;
  pbVar22[0x35] = 0;
  pbVar22[0x36] = 0;
  pbVar22[0x37] = 0;
  pbVar22[0x38] = 0;
  pbVar22[0x39] = 0;
  pbVar22[0x3a] = 0;
  pbVar22[0x3b] = 0;
  pbVar22[0x3c] = 0;
  pbVar22[0x3d] = 0;
  pbVar22[0x3e] = 0;
  pbVar22[0x3f] = 0;
  *(undefined **)(pbVar22 + 0x20) = &UNK_0f3f74f0;
  *(byte **)(pbVar22 + 0x70) = pbVar31;
  *(long **)(pbVar22 + 0x78) = plVar36;
  LOCK();
  plVar36[1] = plVar36[1] + 1;
  UNLOCK();
  pbStack_120 = pbVar22 + 8;
  uStack_170 = *(ulong *)(lVar20 + 0xb8);
  uVar16 = *(ulong *)(lVar20 + 0xc0);
  pbStack_1a8 = pbVar22;
  pbStack_178 = pbVar22;
  pbStack_d8 = pbVar31;
  if (uStack_170 != uVar16) {
    if ((uStack_198 & 1) == 0) {
      uVar28 = (ulong)((byte)uStack_198 >> 1);
      lVar25 = (long)&uStack_198 + 1;
    }
    else {
      uVar28 = CONCAT44(uStack_18c,uStack_190);
      lVar25 = CONCAT71(uStack_187,uStack_188);
    }
    lVar33 = uStack_170 + 0x19;
    do {
      if (*(long *)(lVar33 + -9) == lVar26) {
        pbVar22 = (byte *)(lVar33 + -9);
        if ((*(long **)(lVar33 + 0x17) == &lStack_1a0) && (pbVar22 == pbVar1)) {
LAB_0cc3d3cf:
          puVar18 = (undefined4 *)(lVar33 + -0x19);
          pbVar31 = pbStack_1a8;
          goto LAB_0cc3d3d8;
        }
        bVar5 = *(byte *)(lVar33 + -1);
        if ((bVar5 & 1) == 0) {
          uVar37 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar37 = *(ulong *)(lVar33 + 7);
        }
        if (uVar37 == uVar28) {
          lVar29 = lVar33;
          if ((bVar5 & 1) != 0) {
            lVar29 = *(long *)(lVar33 + 0xf);
          }
          iVar15 = bcmp(lVar29,lVar25,uVar28);
          if (iVar15 == 0) {
            *(long **)(lVar33 + 0x17) = &lStack_1a0;
            pbStack_180 = pbVar22;
            goto LAB_0cc3d3cf;
          }
        }
      }
      *(undefined8 *)(lVar33 + 0x17) = 0;
      uVar37 = lVar33 + 0x8f;
      pbVar31 = pbVar1;
      lVar33 = lVar33 + 0xa8;
    } while (uVar37 != uVar16);
  }
  if (uVar16 < *(ulong *)(lVar20 + 200)) {
    func_0x0ccadca0(uVar16);
    plVar30 = (long *)(uVar16 + 0xa8);
    *(long **)(lVar20 + 0xc0) = plVar30;
LAB_0cc3d231:
    *(long **)(lVar20 + 0xc0) = plVar30;
    func_0x0b63b6d0(plVar30[-0x15],&lStack_1a0);
    lVar26 = *(long *)(lVar20 + 0xc0);
    *(undefined1 *)(lVar26 + -7) = *(undefined1 *)(lVar20 + 0x60);
    if ((long *)(lVar26 + -0x98) != &lStack_1a0) {
      puVar34 = (uint *)(lVar26 + -0x90);
      if ((*(byte *)puVar34 & 1) == 0) {
        if ((uStack_198 & 1) == 0) {
          *(ulong *)(lVar26 + -0x80) = CONCAT71(uStack_187,uStack_188);
          *puVar34 = uStack_198;
          *(undefined4 *)(lVar26 + -0x8c) = uStack_194;
          *(undefined4 *)(lVar26 + -0x88) = uStack_190;
          *(undefined4 *)(lVar26 + -0x84) = uStack_18c;
        }
        else {
          func_0x04885070(puVar34,CONCAT71(uStack_187,uStack_188),CONCAT44(uStack_18c,uStack_190));
        }
      }
      else {
        bVar39 = (uStack_198 & 1) != 0;
        lVar25 = (long)&uStack_198 + 1;
        if (bVar39) {
          lVar25 = CONCAT71(uStack_187,uStack_188);
        }
        uVar16 = (ulong)((byte)uStack_198 >> 1);
        if (bVar39) {
          uVar16 = CONCAT44(uStack_18c,uStack_190);
        }
        FUN_04885120(puVar34,lVar25,uVar16);
      }
    }
    *(long *)(lVar26 + -0x98) = lStack_1a0;
    *(undefined8 *)(lVar26 + -0x78) = 0;
    func_0x04aa9390(&plStack_1f8,&uStack_198,*(undefined1 *)(lVar20 + 0x60));
    lVar26 = *(long *)(lVar20 + 0xc0);
    func_0x04167a70(lVar26 + -0x70,&plStack_1f8);
    *(long **)(lVar26 + -0x68) = plStack_1f0;
    *(long **)(lVar26 + -0x60) = plStack_1e8;
    *(long **)(lVar26 + -0x58) = plStack_1e0;
    *(long **)(lVar26 + -0x50) = plStack_1d8;
    uVar8 = (undefined4)uStack_1d0;
    uVar9 = uStack_1d0._4_4_;
    uVar10 = (undefined4)uStack_1c8;
    uVar11 = uStack_1c8._4_4_;
    uStack_1d0 = 0;
    uStack_1c8 = (byte *)0x0;
    plVar38 = *(long **)(lVar26 + -0x40);
    *(undefined4 *)(lVar26 + -0x48) = uVar8;
    *(undefined4 *)(lVar26 + -0x44) = uVar9;
    *(undefined4 *)(lVar26 + -0x40) = uVar10;
    *(undefined4 *)(lVar26 + -0x3c) = uVar11;
    if (plVar38 != (long *)0x0) {
      LOCK();
      plVar30 = plVar38 + 1;
      lVar25 = *plVar30;
      *plVar30 = *plVar30 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*plVar38 + 0x10))(plVar38);
        func_0x0412c2d0(plVar38);
      }
    }
    pbVar31 = pbStack_1a8;
    pbVar22 = uStack_1c8;
    *(undefined8 *)(lVar26 + -0x38) = uStack_1c0;
    if (uStack_1c8 != (byte *)0x0) {
      LOCK();
      pbVar1 = uStack_1c8 + 8;
      lVar26 = *(long *)pbVar1;
      *(long *)pbVar1 = *(long *)pbVar1 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*(long *)uStack_1c8 + 0x10))(uStack_1c8);
        func_0x0412c2d0(pbVar22);
      }
    }
    func_0x04167a40(&plStack_1f8);
    lVar20 = *(long *)(lVar20 + 0xc0);
    *(undefined1 *)(lVar20 + -8) = 0;
    puVar18 = (undefined4 *)(lVar20 + -0xa8);
LAB_0cc3d3d8:
    pbVar31 = pbVar31 + 0x20;
    plVar38 = *(long **)(puVar18 + 0x24);
    if (plVar38 < *(long **)(puVar18 + 0x26)) {
      plVar38[2] = 0;
      plVar38[3] = 0;
      *plVar38 = 0;
      plVar38[1] = 0;
      plVar38[4] = 0;
      if ((uint *)plVar38 != puStack_1b0) {
        if ((*puStack_128 & 1) == 0) {
          plVar38[3] = *(long *)(puStack_128 + 4);
          lVar20 = *(long *)(puStack_128 + 2);
          plVar38[1] = *(long *)puStack_128;
          plVar38[2] = lVar20;
        }
        else {
          func_0x04885070(plVar38 + 1,plVar36[0x14],plVar36[0x13]);
        }
      }
      *plVar38 = *(long *)puStack_1b0;
      plVar38[5] = (long)pbVar31;
      plVar38[6] = (long)pbStack_178;
      LOCK();
      *(long *)(pbStack_178 + 8) = *(long *)(pbStack_178 + 8) + 1;
      UNLOCK();
      plVar38 = plVar38 + 7;
      *(long **)(puVar18 + 0x24) = plVar38;
      goto LAB_0cc3d71e;
    }
    lVar20 = (long)plVar38 - *(long *)(puVar18 + 0x22);
    uVar16 = (lVar20 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar16 < 0x492492492492493) {
      lVar26 = (long)*(long **)(puVar18 + 0x26) - *(long *)(puVar18 + 0x22) >> 3;
      uVar28 = lVar26 * -0x2492492492492492;
      if (uVar16 < uVar28) {
        uVar16 = uVar28;
      }
      plVar38 = (long *)(puVar18 + 0x22);
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        uVar16 = 0x492492492492492;
      }
      plStack_1d8 = plVar38;
      pbStack_1a8 = pbVar31;
      if (uVar16 == 0) {
        plVar30 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar16) goto LAB_0cc3d912;
        plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0x38);
        if (plVar30 == (long *)0x0) {
          func_0x0eec74c0(uVar16 * 0x38,0);
          plVar30 = (long *)0x0;
        }
      }
      plVar32 = (long *)((long)plVar30 + lVar20);
      plStack_1e0 = plVar30 + uVar16 * 7;
      puVar21 = (undefined8 *)((long)plVar30 + lVar20 + 0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      *(undefined8 *)((long)plVar30 + lVar20) = 0;
      ((undefined8 *)((long)plVar30 + lVar20))[1] = 0;
      *(undefined8 *)((long)plVar30 + lVar20 + 0x20) = 0;
      plStack_1e8 = plVar32;
      plStack_1f8 = plVar30;
      plStack_1f0 = plVar32;
      if ((uint *)plVar32 != puStack_1b0) {
        puVar34 = (uint *)((long)plVar30 + lVar20 + 8);
        if ((*puStack_128 & 1) == 0) {
          *(undefined8 *)((long)plVar30 + lVar20 + 0x18) = *(undefined8 *)(puStack_128 + 4);
          uVar12 = puStack_128[1];
          uVar13 = puStack_128[2];
          uVar14 = puStack_128[3];
          *puVar34 = *puStack_128;
          *(uint *)((long)plVar30 + lVar20 + 0xc) = uVar12;
          *(uint *)((long)plVar30 + lVar20 + 0x10) = uVar13;
          *(uint *)((long)plVar30 + lVar20 + 0x14) = uVar14;
        }
        else {
          func_0x04885070(puVar34,plVar36[0x14],plVar36[0x13]);
        }
      }
      *plVar32 = *(long *)puStack_1b0;
      plVar32[5] = (long)pbStack_1a8;
      plVar32[6] = (long)pbStack_178;
      LOCK();
      *(long *)(pbStack_178 + 8) = *(long *)(pbStack_178 + 8) + 1;
      UNLOCK();
      plStack_1e8 = plStack_1e8 + 7;
      puVar35 = *(undefined8 **)(puVar18 + 0x22);
      puVar6 = *(undefined8 **)(puVar18 + 0x24);
      puVar21 = (undefined8 *)((long)plStack_1f0 + ((long)puVar35 - (long)puVar6));
      puVar23 = puVar21;
      puVar27 = puVar35;
      if ((long)puVar35 - (long)puVar6 != 0) {
        do {
          puVar23[2] = 0;
          puVar23[3] = 0;
          *puVar23 = 0;
          puVar23[1] = 0;
          puVar23[4] = 0;
          puVar23[3] = puVar27[3];
          uVar24 = puVar27[2];
          puVar23[1] = puVar27[1];
          puVar23[2] = uVar24;
          *(undefined2 *)(puVar27 + 1) = 0;
          *puVar23 = *puVar27;
          uVar24 = puVar27[6];
          puVar23[5] = puVar27[5];
          puVar23[6] = uVar24;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27 = puVar27 + 7;
          puVar23 = puVar23 + 7;
        } while (puVar27 != puVar6);
        do {
          plVar30 = (long *)puVar35[6];
          if (plVar30 == (long *)0x0) {
LAB_0cc3d6a5:
            bVar5 = *(byte *)(puVar35 + 1);
          }
          else {
            LOCK();
            plVar32 = plVar30 + 1;
            lVar20 = *plVar32;
            *plVar32 = *plVar32 + -1;
            UNLOCK();
            if (lVar20 != 0) goto LAB_0cc3d6a5;
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
            bVar5 = *(byte *)(puVar35 + 1);
          }
          if ((bVar5 & 1) != 0) {
            func_0x0412a280(puVar35[3],puVar35[1] & 0xfffffffffffffffe);
          }
          puVar35 = puVar35 + 7;
        } while (puVar35 != puVar6);
        puVar35 = (undefined8 *)*plVar38;
      }
      plVar38 = plStack_1e8;
      *(undefined8 **)(puVar18 + 0x22) = puVar21;
      *(long **)(puVar18 + 0x24) = plStack_1e8;
      lVar20 = *(long *)(puVar18 + 0x26);
      *(long **)(puVar18 + 0x26) = plStack_1e0;
      if (puVar35 != (undefined8 *)0x0) {
        func_0x0412a280(puVar35,lVar20 - (long)puVar35);
      }
LAB_0cc3d71e:
      *(long **)(puVar18 + 0x24) = plVar38;
      uVar8 = *puVar18;
      uVar9 = puVar18[1];
      uVar10 = puVar18[2];
      uVar11 = puVar18[3];
      if (*(long *)(puVar18 + 2) != 0) {
        LOCK();
        plVar38 = (long *)(*(long *)(puVar18 + 2) + 8);
        *plVar38 = *plVar38 + 1;
        UNLOCK();
      }
      plVar38 = (long *)plVar36[0xf];
      *(undefined4 *)(plVar36 + 0xe) = uVar8;
      *(undefined4 *)((long)plVar36 + 0x74) = uVar9;
      *(undefined4 *)(plVar36 + 0xf) = uVar10;
      *(undefined4 *)((long)plVar36 + 0x7c) = uVar11;
      if (plVar38 != (long *)0x0) {
        LOCK();
        plVar30 = plVar38 + 1;
        lVar20 = *plVar30;
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)(*plVar38 + 0x10))(plVar38);
          func_0x0412c2d0(plVar38);
        }
      }
      pbVar31 = pbStack_178;
      *(undefined1 *)(plVar36 + 0x10) = *(undefined1 *)((long)puVar18 + 0xa1);
      LOCK();
      lVar20 = *(long *)pbStack_120;
      *(long *)pbStack_120 = *(long *)pbStack_120 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*(long *)pbStack_178 + 0x10))(pbStack_178);
        func_0x0412c2d0(pbVar31);
        LOCK();
        lVar20 = *plStack_d0;
        *plStack_d0 = *plStack_d0 + -1;
        UNLOCK();
        plVar38 = plStack_d0;
      }
      else {
        LOCK();
        lVar20 = *plStack_d0;
        *plStack_d0 = *plStack_d0 + -1;
        UNLOCK();
        plVar38 = plStack_d0;
      }
      plStack_d0 = plVar38;
      if (lVar20 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        func_0x0412c2d0(plVar36);
      }
      pbVar31 = pbStack_d8;
      LOCK();
      lVar20 = *plVar38;
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        func_0x0412c2d0(plVar36);
      }
      auStack_168[0] = 0;
      auStack_168[1] = 0;
      auStack_168[2] = 0;
      (**(code **)(*(long *)pbVar31 + 0x10))(pbVar31,auStack_168);
      if ((auStack_168[0] & 1) != 0) {
        func_0x0412a280(auStack_168[2],auStack_168[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_198 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_187,uStack_188),
                        CONCAT44(uStack_194,uStack_198) & 0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar26 = uVar16 - uStack_170;
    uVar16 = (lVar26 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar16) goto LAB_0cc3d91c;
    plVar38 = (long *)(lVar20 + 0xb8);
    lVar25 = (long)(*(ulong *)(lVar20 + 200) - uStack_170) >> 3;
    uVar28 = lVar25 * -0x6186186186186186;
    if (uVar16 < uVar28) {
      uVar16 = uVar28;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar25 * -0x30c30c30c30c30c3)) {
      uVar16 = 0x186186186186186;
    }
    plStack_1d8 = plVar38;
    if (uVar16 == 0) {
      plVar30 = (long *)0x0;
LAB_0cc3d061:
      plStack_1f0 = (long *)(lVar26 + (long)plVar30);
      plStack_1e0 = plVar30 + uVar16 * 0x15;
      plStack_1f8 = plVar30;
      plStack_1e8 = plStack_1f0;
      func_0x0ccadca0(plStack_1f0);
      plVar30 = plStack_1e8 + 0x15;
      lVar26 = *(long *)(lVar20 + 0xb8);
      lVar25 = *(long *)(lVar20 + 0xc0);
      lVar33 = (lVar26 - lVar25) + (long)plStack_1f0;
      if (lVar26 != lVar25) {
        lVar29 = 0;
        do {
          uVar24 = ((undefined8 *)(lVar26 + lVar29))[1];
          *(undefined8 *)(lVar33 + lVar29) = *(undefined8 *)(lVar26 + lVar29);
          ((undefined8 *)(lVar33 + lVar29))[1] = uVar24;
          *(undefined8 *)(lVar26 + lVar29) = 0;
          ((undefined8 *)(lVar26 + lVar29))[1] = 0;
          puVar21 = (undefined8 *)(lVar33 + 0x20 + lVar29);
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21 = (undefined8 *)(lVar33 + 0x10 + lVar29);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar33 + 0x30 + lVar29) = 0;
          *(undefined8 *)(lVar33 + 0x28 + lVar29) = *(undefined8 *)(lVar26 + 0x28 + lVar29);
          puVar18 = (undefined4 *)(lVar26 + 0x18 + lVar29);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar4 = (undefined4 *)(lVar33 + 0x18 + lVar29);
          *puVar4 = *puVar18;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          *(undefined2 *)(lVar26 + 0x18 + lVar29) = 0;
          *(undefined8 *)(lVar33 + 0x10 + lVar29) = *(undefined8 *)(lVar26 + 0x10 + lVar29);
          FUN_04167a20(lVar33 + lVar29 + 0x38,lVar29 + lVar26 + 0x38);
          puVar21 = (undefined8 *)(lVar26 + 0x40 + lVar29);
          uVar24 = puVar21[1];
          puVar35 = (undefined8 *)(lVar33 + 0x40 + lVar29);
          *puVar35 = *puVar21;
          puVar35[1] = uVar24;
          puVar21 = (undefined8 *)(lVar26 + 0x50 + lVar29);
          uVar24 = puVar21[1];
          puVar35 = (undefined8 *)(lVar33 + 0x50 + lVar29);
          *puVar35 = *puVar21;
          puVar35[1] = uVar24;
          puVar21 = (undefined8 *)(lVar26 + 0x60 + lVar29);
          uVar24 = puVar21[1];
          puVar35 = (undefined8 *)(lVar33 + 0x60 + lVar29);
          *puVar35 = *puVar21;
          puVar35[1] = uVar24;
          puVar21 = (undefined8 *)(lVar26 + 0x60 + lVar29);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar33 + 0x70 + lVar29) = *(undefined8 *)(lVar26 + 0x70 + lVar29);
          puVar21 = (undefined8 *)(lVar26 + 0x78 + lVar29);
          uVar24 = puVar21[1];
          puVar35 = (undefined8 *)(lVar33 + 0x78 + lVar29);
          *puVar35 = *puVar21;
          puVar35[1] = uVar24;
          puVar21 = (undefined8 *)(lVar33 + 0x88 + lVar29);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar33 + 0x98 + lVar29) = 0;
          puVar18 = (undefined4 *)(lVar26 + 0x88 + lVar29);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar4 = (undefined4 *)(lVar33 + 0x88 + lVar29);
          *puVar4 = *puVar18;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          *(undefined8 *)(lVar33 + 0x98 + lVar29) = *(undefined8 *)(lVar26 + 0x98 + lVar29);
          puVar21 = (undefined8 *)(lVar26 + 0x88 + lVar29);
          *puVar21 = 0;
          puVar21[1] = 0;
          *(undefined8 *)(lVar26 + 0x98 + lVar29) = 0;
          *(undefined2 *)(lVar33 + 0xa0 + lVar29) = *(undefined2 *)(lVar26 + 0xa0 + lVar29);
          lVar3 = lVar29 + lVar26;
          lVar29 = lVar29 + 0xa8;
        } while (lVar3 + 0xa8 != lVar25);
        do {
          func_0x0ccade20(lVar26);
          lVar26 = lVar26 + 0xa8;
        } while (lVar26 != lVar25);
        lVar26 = *plVar38;
      }
      *(long *)(lVar20 + 0xb8) = lVar33;
      *(long **)(lVar20 + 0xc0) = plVar30;
      lVar25 = *(long *)(lVar20 + 200);
      *(long **)(lVar20 + 200) = plStack_1e0;
      if (lVar26 != 0) {
        func_0x0412a280(lVar26,lVar25 - lVar26);
      }
      goto LAB_0cc3d231;
    }
    if (uVar16 < 0x186186186186187) {
      plVar30 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16 * 0xa8);
      if (plVar30 == (long *)0x0) {
        func_0x0eec74c0(uVar16 * 0xa8,0);
        plVar30 = (long *)0x0;
      }
      goto LAB_0cc3d061;
    }
LAB_0cc3d912:
    func_0x04882eb0();
  }
  func_0x0ccae040();
LAB_0cc3d91c:
  uVar24 = func_0x0ccade10();
  if ((*pbVar22 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbVar31 + 0x18),*(ulong *)(pbVar31 + 8) & 0xfffffffffffffffe);
  }
  func_0x0ccadf80(&plStack_1f8);
  pbVar31 = pbStack_178;
  LOCK();
  lVar20 = *(long *)pbStack_120;
  *(long *)pbStack_120 = *(long *)pbStack_120 + -1;
  UNLOCK();
  if (lVar20 == 0) {
    (**(code **)(*(long *)pbStack_178 + 0x10))(pbStack_178);
    func_0x0412c2d0(pbVar31);
  }
  func_0x0ccac250(plVar36);
  func_0x0ccac280(plVar36);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_198 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_187,uStack_188),
                    CONCAT44(uStack_194,uStack_198) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar24);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x147c4a4  [a-zA-Z0-9_.:-]+
 */
