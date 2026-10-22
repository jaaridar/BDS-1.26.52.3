/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd094690 (ELF vaddr 0xcf94690)
 * Label: caller-of-callee
 * Body:  [[0d094690, 0d095007] [0d095010, 0d095070] [0d095080, 0d09577a] [0d095780, 0d0957c1] [0d0957d0, 0d095c45] [0d095f25, 0d095fa9]]
 * Ghidra: FUN_0d094690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d094690(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  long **pplVar2;
  uint *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined4 *puVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  long *plVar32;
  byte *pbVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  long lVar37;
  uint *puVar38;
  bool bVar39;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_270;
  uint *puStack_268;
  long lStack_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined2 uStack_253;
  undefined1 uStack_251;
  undefined8 uStack_250;
  long lStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  long *plStack_230;
  ulong uStack_228;
  byte *pbStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong auStack_1f8 [4];
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint *puStack_198;
  byte *pbStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined1 uStack_178;
  undefined4 uStack_177;
  undefined2 uStack_173;
  undefined1 uStack_171;
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  undefined1 uStack_148;
  undefined4 uStack_147;
  undefined3 uStack_143;
  undefined1 uStack_140;
  undefined1 uStack_130;
  undefined4 uStack_12f;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined1 uStack_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined1 uStack_100;
  undefined4 uStack_ff;
  undefined1 uStack_fb;
  undefined1 uStack_e8;
  undefined4 uStack_e7;
  undefined2 uStack_e3;
  undefined1 uStack_d0;
  undefined4 uStack_cf;
  undefined1 uStack_cb;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  plVar36 = (long *)0xcbf29ce484222325;
  uVar25 = *param_2;
  plStack_1d8 = (long *)0x0;
  uStack_1d0 = _DAT_01d8fc48;
  uStack_1c8 = _UNK_01d8fc50;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  pbVar33 = (byte *)((long)&uStack_1d0 + 1);
  uVar18 = strlen(pbVar33);
  if (uVar18 != 0) {
    uVar28 = (ulong)((uint)uVar18 & 7);
    if (7 < uVar18) {
      uVar18 = uVar18 & 0xfffffffffffffff8;
      do {
        plVar36 = (long *)(((((((((long)plVar36 * 0x100000001b3 ^ (ulong)*pbVar33) * 0x100000001b3 ^
                                (ulong)pbVar33[1]) * 0x100000001b3 ^ (ulong)pbVar33[2]) *
                               0x100000001b3 ^ (ulong)pbVar33[3]) * 0x100000001b3 ^
                             (ulong)pbVar33[4]) * 0x100000001b3 ^ (ulong)pbVar33[5]) * 0x100000001b3
                           ^ (ulong)pbVar33[6]) * 0x100000001b3 ^ (ulong)pbVar33[7]);
        pbVar33 = pbVar33 + 8;
        uVar18 = uVar18 - 8;
      } while (uVar18 != 0);
    }
    if (uVar28 != 0) {
      uVar18 = 0;
      do {
        plVar36 = (long *)((long)plVar36 * 0x100000001b3 ^ (ulong)pbVar33[uVar18]);
        uVar18 = uVar18 + 1;
      } while (uVar28 != uVar18);
    }
  }
  plStack_b8 = (long *)&UNK_0f450440;
  plStack_1d8 = plVar36;
  uStack_b0 = param_3;
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar36 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar36[1] = 0;
  plVar36[2] = 0;
  *plVar36 = (long)&UNK_0f450258;
  plStack_2b8 = (long *)0x0;
  plStack_2b0 = (long *)0x0;
  if (plStack_b8 == (long *)0x0) {
    plStack_2b8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_b8)(&plStack_b8,&plStack_2b8);
    plStack_2b8 = plStack_b8;
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
  func_0x04aa75f0(plVar36 + 0xe,&lStack_78,&UNK_01254d89);
  *(undefined1 *)(plVar36 + 0x10) = 0;
  plVar32 = plVar36 + 0x11;
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
  plVar36[4] = (long)&UNK_0f4502a8;
  pplVar2 = (long **)(plVar36 + 0x2e);
  plVar36[0x2e] = 0;
  plVar36[0x2f] = 0;
  *(undefined1 *)(plVar36 + 0x36) = 0;
  if (pplVar2 != &plStack_2b8) {
    if (plStack_2b8 == (long *)0x0) {
      plVar19 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_2b8)(&plStack_2b8,pplVar2);
      plVar19 = plStack_2b8;
    }
    plStack_2b8 = (long *)0x0;
    *pplVar2 = plVar19;
  }
  plVar19 = plVar36 + 4;
  puVar38 = (uint *)(plVar36 + 0x12);
  if (plVar32 != (long *)&DAT_0f552108) {
    if ((*puVar38 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar36[0x14] = _DAT_0f552120;
        uVar12 = uRam000000000f55211c;
        uVar11 = _DAT_0f552118;
        uVar10 = uRam000000000f552114;
        *puVar38 = _DAT_0f552110;
        *(undefined4 *)((long)plVar36 + 0x94) = uVar10;
        *(undefined4 *)(plVar36 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar36 + 0x9c) = uVar12;
      }
      else {
        FUN_04885070(puVar38,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar39 = (_DAT_0f552110 & 1) != 0;
      lVar23 = 0xf552111;
      if (bVar39) {
        lVar23 = _DAT_0f552120;
      }
      uVar18 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar39) {
        uVar18 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar38,lVar23,uVar18);
    }
  }
  plVar34 = plVar36 + 1;
  plVar36[0x11] = _DAT_0f552108;
  plVar36[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  LOCK();
  *plVar34 = *plVar34 + 1;
  UNLOCK();
  puStack_268 = puVar38;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f4503a0;
  plVar20[6] = 0;
  plVar20[7] = 0;
  plVar20[4] = (long)&UNK_0f4503f0;
  plVar20[0xe] = (long)plVar19;
  plVar20[0xf] = (long)plVar36;
  LOCK();
  plVar36[1] = plVar36[1] + 1;
  UNLOCK();
  plStack_2b8 = plVar20 + 4;
  plStack_2b0 = plVar20;
  puVar21 = (undefined4 *)func_0x0cd30730(uVar25,&plStack_1d8,0);
  plVar22 = *(long **)(puVar21 + 0x24);
  if (plVar22 < *(long **)(puVar21 + 0x26)) {
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 == plVar32) {
LAB_0d094a8f:
      *plVar22 = *plVar32;
      plVar22[5] = (long)(plVar20 + 4);
      plVar22[6] = (long)plVar20;
LAB_0d094af9:
      LOCK();
      plVar20[1] = plVar20[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_268 & 1) == 0) {
        plVar22[3] = *(long *)(puStack_268 + 4);
        lVar23 = *(long *)(puStack_268 + 2);
        plVar22[1] = *(long *)puStack_268;
        plVar22[2] = lVar23;
        goto LAB_0d094a8f;
      }
      FUN_04885070(plVar22 + 1,plVar36[0x14],plVar36[0x13]);
      *plVar22 = *plVar32;
      plVar22[5] = (long)plStack_2b8;
      plVar22[6] = (long)plStack_2b0;
      plVar20 = plStack_2b0;
      if (plStack_2b0 != (long *)0x0) goto LAB_0d094af9;
    }
    plVar22 = plVar22 + 7;
    *(long **)(puVar21 + 0x24) = plVar22;
  }
  else {
    plVar22 = (long *)func_0x0cd33e60(puVar21 + 0x22,plVar32,&plStack_2b8);
  }
  *(long **)(puVar21 + 0x24) = plVar22;
  uVar10 = *puVar21;
  uVar11 = puVar21[1];
  uVar12 = puVar21[2];
  uVar13 = puVar21[3];
  if (*(long *)(puVar21 + 2) != 0) {
    LOCK();
    plVar32 = (long *)(*(long *)(puVar21 + 2) + 8);
    *plVar32 = *plVar32 + 1;
    UNLOCK();
  }
  plVar32 = (long *)plVar36[0xf];
  *(undefined4 *)(plVar36 + 0xe) = uVar10;
  *(undefined4 *)((long)plVar36 + 0x74) = uVar11;
  *(undefined4 *)(plVar36 + 0xf) = uVar12;
  *(undefined4 *)((long)plVar36 + 0x7c) = uVar13;
  if (plVar32 != (long *)0x0) {
    LOCK();
    plVar20 = plVar32 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
      func_0x0412c2d0(plVar32);
    }
  }
  plVar32 = plStack_2b0;
  *(undefined1 *)(plVar36 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plVar20 = plStack_2b0 + 1;
    lVar23 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      func_0x0412c2d0(plVar32);
    }
  }
  LOCK();
  lVar23 = *plVar34;
  *plVar34 = *plVar34 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    func_0x0412c2d0(plVar36);
    LOCK();
    lVar23 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar23 = *plVar34;
    *plVar34 = *plVar34 + -1;
    UNLOCK();
  }
  if (lVar23 == 0) {
    (**(code **)(*plVar36 + 0x10))(plVar36);
    func_0x0412c2d0(plVar36);
  }
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  lVar23 = (**(code **)(*plVar19 + 0x10))(plVar19,&uStack_218);
  if ((uStack_218 & 1) != 0) {
    func_0x0412a280(uStack_208,uStack_218 & 0xfffffffffffffffe);
  }
  if (plStack_b8 != (long *)0x0) {
    (*(code *)plStack_b8[1])(&plStack_b8);
  }
  if ((uStack_1d0 & 1) != 0) {
    func_0x0412a280(uStack_1c0,uStack_1d0 & 0xfffffffffffffffe);
  }
  uStack_250 = 0;
  lStack_248 = 0;
  pbStack_240 = (byte *)0x0;
  uStack_258 = 0x7261740c;
  uStack_254 = 0x67;
  uStack_253 = 0x7465;
  uStack_251 = 0;
  lStack_260 = 0x13733a6fd152dff6;
  uStack_70 = 0;
  uStack_1d0 = 0;
  lStack_78 = 0;
  plStack_1d8 = (long *)&UNK_0f450690;
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar36 == (long *)0x0) {
    FUN_0eec74c0(0x1e0,0);
  }
  plStack_2b8 = plStack_1d8;
  plVar36[1] = 0;
  plVar36[2] = 0;
  *plVar36 = (long)&UNK_0f450468;
  plStack_2b0 = (long *)0x0;
  plStack_1d8 = (long *)0x0;
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
  plStack_270 = plVar36;
  puStack_268 = (uint *)lVar23;
  func_0x04aa75f0(plVar36 + 0xe,&uStack_178,&UNK_01254d89);
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
  plVar36[4] = (long)&UNK_0f4504b8;
  plVar36[0x2e] = 0;
  plVar36[0x2f] = 0;
  if (plStack_2b8 == (long *)0x0) {
    plVar32 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_2b8)(&plStack_2b8,plVar36 + 0x2e);
    plVar32 = plStack_2b8;
  }
  plVar19 = plVar36 + 4;
  plStack_2b8 = (long *)0x0;
  plVar36[0x2e] = (long)plVar32;
  plVar36[0x36] = 0;
  plVar36[0x37] = 0;
  plVar36[0x38] = 0;
  plVar36[0x39] = 0;
  *(undefined4 *)(plVar36 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar36 + 0x3b) = 0;
  puStack_198 = (uint *)(plVar36 + 0x12);
  if (plVar36 + 0x11 != (long *)&DAT_0f551fe8) {
    if ((*puStack_198 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar36[0x14] = _DAT_0f552000;
        uVar12 = uRam000000000f551ffc;
        uVar11 = _DAT_0f551ff8;
        uVar10 = uRam000000000f551ff4;
        *puStack_198 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar36 + 0x94) = uVar10;
        *(undefined4 *)(plVar36 + 0x13) = uVar11;
        *(undefined4 *)((long)plVar36 + 0x9c) = uVar12;
      }
      else {
        FUN_04885070(puStack_198,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar39 = (_DAT_0f551ff0 & 1) != 0;
      lVar23 = 0xf551ff1;
      if (bVar39) {
        lVar23 = _DAT_0f552000;
      }
      uVar18 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar39) {
        uVar18 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puStack_198,lVar23,uVar18);
    }
  }
  plVar36[0x11] = _DAT_0f551fe8;
  plVar36[0x15] = 0;
  if (plStack_2b8 != (long *)0x0) {
    (*(code *)plStack_2b8[1])(&plStack_2b8);
  }
  plVar32 = plVar36 + 1;
  if (plStack_1d8 != (long *)0x0) {
    (*(code *)plStack_1d8[1])(&plStack_1d8);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  plStack_230 = plVar36 + 0x11;
  plStack_180 = plVar32;
  pbVar33 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar33 == (byte *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  pbVar30 = pbStack_240;
  lVar23 = lStack_260;
  pbVar33[8] = 0;
  pbVar33[9] = 0;
  pbVar33[10] = 0;
  pbVar33[0xb] = 0;
  pbVar33[0xc] = 0;
  pbVar33[0xd] = 0;
  pbVar33[0xe] = 0;
  pbVar33[0xf] = 0;
  pbVar33[0x10] = 0;
  pbVar33[0x11] = 0;
  pbVar33[0x12] = 0;
  pbVar33[0x13] = 0;
  pbVar33[0x14] = 0;
  pbVar33[0x15] = 0;
  pbVar33[0x16] = 0;
  pbVar33[0x17] = 0;
  *(undefined **)pbVar33 = &UNK_0f450598;
  pbVar33[0x30] = 0;
  pbVar33[0x31] = 0;
  pbVar33[0x32] = 0;
  pbVar33[0x33] = 0;
  pbVar33[0x34] = 0;
  pbVar33[0x35] = 0;
  pbVar33[0x36] = 0;
  pbVar33[0x37] = 0;
  pbVar33[0x38] = 0;
  pbVar33[0x39] = 0;
  pbVar33[0x3a] = 0;
  pbVar33[0x3b] = 0;
  pbVar33[0x3c] = 0;
  pbVar33[0x3d] = 0;
  pbVar33[0x3e] = 0;
  pbVar33[0x3f] = 0;
  *(undefined **)(pbVar33 + 0x20) = &UNK_0f4505e8;
  *(long **)(pbVar33 + 0x70) = plVar19;
  *(long **)(pbVar33 + 0x78) = plVar36;
  LOCK();
  plVar36[1] = plVar36[1] + 1;
  UNLOCK();
  pbStack_190 = pbVar33 + 8;
  uStack_228 = *(ulong *)((long)puStack_268 + 0xb8);
  uVar18 = *(ulong *)((long)puStack_268 + 0xc0);
  pbStack_238 = pbVar33;
  pbStack_220 = pbVar33;
  plStack_188 = plVar19;
  if (uStack_228 != uVar18) {
    lVar26 = lStack_248;
    uVar28 = uStack_250;
    if ((uStack_258 & 1) == 0) {
      lVar26 = (long)&uStack_258 + 1;
      uVar28 = (ulong)((byte)uStack_258 >> 1);
    }
    plVar19 = &lStack_260;
    lVar37 = uStack_228 + 0x19;
    do {
      if (*(long *)(lVar37 + -9) == lVar23) {
        pbVar33 = (byte *)(lVar37 + -9);
        if ((*(long **)(lVar37 + 0x17) == plVar19) && (pbVar33 == pbVar30)) {
LAB_0d0954d6:
          puVar21 = (undefined4 *)(lVar37 + -0x19);
          pbVar30 = pbStack_220;
          goto LAB_0d0954ea;
        }
        bVar7 = *(byte *)(lVar37 + -1);
        if ((bVar7 & 1) == 0) {
          uVar35 = (ulong)(bVar7 >> 1);
        }
        else {
          uVar35 = *(ulong *)(lVar37 + 7);
        }
        if (uVar35 == uVar28) {
          lVar29 = lVar37;
          if ((bVar7 & 1) != 0) {
            lVar29 = *(long *)(lVar37 + 0xf);
          }
          iVar17 = func_0x0eee3000(lVar29,lVar26,uVar28);
          if (iVar17 == 0) {
            *(long **)(lVar37 + 0x17) = plVar19;
            pbStack_240 = pbVar33;
            goto LAB_0d0954d6;
          }
        }
      }
      *(undefined8 *)(lVar37 + 0x17) = 0;
      uVar35 = lVar37 + 0x8f;
      lVar37 = lVar37 + 0xa8;
    } while (uVar35 != uVar18);
  }
  puVar38 = puStack_268;
  if (uVar18 < *(ulong *)((long)puStack_268 + 200)) {
    func_0x0d1062d0(uVar18);
    plVar32 = (long *)(uVar18 + 0xa8);
    *(long **)((long)puVar38 + 0xc0) = plVar32;
LAB_0d095341:
    *(long **)((long)puVar38 + 0xc0) = plVar32;
    func_0x0b63b6d0(plVar32[-0x15],&lStack_260);
    lVar23 = *(long *)((long)puVar38 + 0xc0);
    *(undefined1 *)(lVar23 + -7) = *(undefined1 *)((long)puVar38 + 0x60);
    if ((long *)(lVar23 + -0x98) != &lStack_260) {
      puVar3 = (uint *)(lVar23 + -0x90);
      if ((*(byte *)puVar3 & 1) == 0) {
        if ((uStack_258 & 1) == 0) {
          *(long *)(lVar23 + -0x80) = lStack_248;
          *puVar3 = uStack_258;
          *(uint *)(lVar23 + -0x8c) = CONCAT13(uStack_251,CONCAT21(uStack_253,uStack_254));
          *(undefined4 *)(lVar23 + -0x88) = (undefined4)uStack_250;
          *(undefined4 *)(lVar23 + -0x84) = uStack_250._4_4_;
        }
        else {
          FUN_04885070(puVar3,lStack_248,uStack_250);
        }
      }
      else {
        uVar18 = (ulong)((byte)uStack_258 >> 1);
        lVar26 = (long)&uStack_258 + 1;
        if ((uStack_258 & 1) != 0) {
          uVar18 = uStack_250;
          lVar26 = lStack_248;
        }
        func_0x04885120(puVar3,lVar26,uVar18);
      }
    }
    *(long *)(lVar23 + -0x98) = lStack_260;
    *(undefined8 *)(lVar23 + -0x78) = 0;
    func_0x04aa9390(&plStack_2b8,&uStack_258,*(undefined1 *)((long)puVar38 + 0x60));
    lVar23 = *(long *)((long)puVar38 + 0xc0);
    func_0x04167a70(lVar23 + -0x70,&plStack_2b8);
    *(long **)(lVar23 + -0x68) = plStack_2b0;
    *(long **)(lVar23 + -0x60) = plStack_2a8;
    *(long **)(lVar23 + -0x58) = plStack_2a0;
    *(long **)(lVar23 + -0x50) = plStack_298;
    uVar10 = (undefined4)uStack_290;
    uVar11 = uStack_290._4_4_;
    uVar12 = (undefined4)uStack_288;
    uVar13 = uStack_288._4_4_;
    uStack_290 = 0;
    uStack_288 = (byte *)0x0;
    plVar36 = *(long **)(lVar23 + -0x40);
    *(undefined4 *)(lVar23 + -0x48) = uVar10;
    *(undefined4 *)(lVar23 + -0x44) = uVar11;
    *(undefined4 *)(lVar23 + -0x40) = uVar12;
    *(undefined4 *)(lVar23 + -0x3c) = uVar13;
    if (plVar36 != (long *)0x0) {
      LOCK();
      plVar32 = plVar36 + 1;
      lVar26 = *plVar32;
      *plVar32 = *plVar32 + -1;
      UNLOCK();
      if (lVar26 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
        func_0x0412c2d0(plVar36);
      }
    }
    pbVar30 = pbStack_220;
    pbVar33 = uStack_288;
    *(undefined8 *)(lVar23 + -0x38) = uStack_280;
    if (uStack_288 != (byte *)0x0) {
      LOCK();
      pbVar1 = uStack_288 + 8;
      lVar23 = *(long *)pbVar1;
      *(long *)pbVar1 = *(long *)pbVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)uStack_288 + 0x10))(uStack_288);
        func_0x0412c2d0(pbVar33);
      }
    }
    func_0x04167a40(&plStack_2b8);
    lVar23 = *(long *)((long)puVar38 + 0xc0);
    *(undefined1 *)(lVar23 + -8) = 0;
    puVar21 = (undefined4 *)(lVar23 + -0xa8);
LAB_0d0954ea:
    plVar32 = plStack_230;
    plVar36 = *(long **)(puVar21 + 0x24);
    if (plVar36 < *(long **)(puVar21 + 0x26)) {
      plVar36[2] = 0;
      plVar36[3] = 0;
      *plVar36 = 0;
      plVar36[1] = 0;
      plVar36[4] = 0;
      if (plVar36 != plStack_230) {
        if ((*puStack_198 & 1) == 0) {
          plVar36[3] = *(long *)(puStack_198 + 4);
          lVar23 = *(long *)(puStack_198 + 2);
          plVar36[1] = *(long *)puStack_198;
          plVar36[2] = lVar23;
        }
        else {
          FUN_04885070(plVar36 + 1,plStack_270[0x14],plStack_270[0x13]);
        }
      }
      *plVar36 = *plVar32;
      plVar36[5] = (long)(pbVar30 + 0x20);
      plVar36[6] = (long)pbStack_238;
      LOCK();
      *(long *)(pbStack_238 + 8) = *(long *)(pbStack_238 + 8) + 1;
      UNLOCK();
      plVar36 = plVar36 + 7;
      *(long **)(puVar21 + 0x24) = plVar36;
      goto LAB_0d095824;
    }
    lVar23 = (long)plVar36 - *(long *)(puVar21 + 0x22);
    uVar18 = (lVar23 >> 3) * 0x6db6db6db6db6db7 + 1;
    plVar19 = plStack_230;
    if (uVar18 < 0x492492492492493) {
      lVar26 = (long)*(long **)(puVar21 + 0x26) - *(long *)(puVar21 + 0x22) >> 3;
      uVar28 = lVar26 * -0x2492492492492492;
      if (uVar18 < uVar28) {
        uVar18 = uVar28;
      }
      plVar36 = (long *)(puVar21 + 0x22);
      if (0x249249249249248 < (ulong)(lVar26 * 0x6db6db6db6db6db7)) {
        uVar18 = 0x492492492492492;
      }
      plStack_298 = plVar36;
      if (uVar18 == 0) {
        plVar32 = (long *)0x0;
      }
      else {
        if (0x492492492492492 < uVar18) goto LAB_0d095c0e;
        plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x38);
        if (plVar32 == (long *)0x0) {
          FUN_0eec74c0(uVar18 * 0x38,0);
          plVar32 = (long *)0x0;
        }
      }
      plVar34 = plStack_230;
      plVar19 = (long *)((long)plVar32 + lVar23);
      plStack_2a0 = plVar32 + uVar18 * 7;
      puVar6 = (undefined8 *)((long)plVar32 + lVar23 + 0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)((long)plVar32 + lVar23) = 0;
      ((undefined8 *)((long)plVar32 + lVar23))[1] = 0;
      *(undefined8 *)((long)plVar32 + lVar23 + 0x20) = 0;
      plStack_2a8 = plVar19;
      plStack_2b8 = plVar32;
      plStack_2b0 = plVar19;
      if (plVar19 != plStack_230) {
        puVar38 = (uint *)((long)plVar32 + lVar23 + 8);
        if ((*puStack_198 & 1) == 0) {
          *(undefined8 *)((long)plVar32 + lVar23 + 0x18) = *(undefined8 *)(puStack_198 + 4);
          uVar14 = puStack_198[1];
          uVar15 = puStack_198[2];
          uVar16 = puStack_198[3];
          *puVar38 = *puStack_198;
          *(uint *)((long)plVar32 + lVar23 + 0xc) = uVar14;
          *(uint *)((long)plVar32 + lVar23 + 0x10) = uVar15;
          *(uint *)((long)plVar32 + lVar23 + 0x14) = uVar16;
        }
        else {
          FUN_04885070(puVar38,plStack_270[0x14],plStack_270[0x13]);
        }
      }
      *plVar19 = *plVar34;
      plVar19[5] = (long)(pbVar30 + 0x20);
      plVar19[6] = (long)pbStack_238;
      LOCK();
      *(long *)(pbStack_238 + 8) = *(long *)(pbStack_238 + 8) + 1;
      UNLOCK();
      plStack_2a8 = plStack_2a8 + 7;
      puVar31 = *(undefined8 **)(puVar21 + 0x22);
      puVar8 = *(undefined8 **)(puVar21 + 0x24);
      puVar6 = (undefined8 *)((long)plStack_2b0 + ((long)puVar31 - (long)puVar8));
      puVar24 = puVar6;
      puVar27 = puVar31;
      if ((long)puVar31 - (long)puVar8 != 0) {
        do {
          puVar24[2] = 0;
          puVar24[3] = 0;
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[4] = 0;
          puVar24[3] = puVar27[3];
          uVar25 = puVar27[2];
          puVar24[1] = puVar27[1];
          puVar24[2] = uVar25;
          *(undefined2 *)(puVar27 + 1) = 0;
          *puVar24 = *puVar27;
          uVar25 = puVar27[6];
          puVar24[5] = puVar27[5];
          puVar24[6] = uVar25;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27 = puVar27 + 7;
          puVar24 = puVar24 + 7;
        } while (puVar27 != puVar8);
        do {
          plVar32 = (long *)puVar31[6];
          if (plVar32 == (long *)0x0) {
LAB_0d0957a5:
            bVar7 = *(byte *)(puVar31 + 1);
          }
          else {
            LOCK();
            plVar19 = plVar32 + 1;
            lVar23 = *plVar19;
            *plVar19 = *plVar19 + -1;
            UNLOCK();
            if (lVar23 != 0) goto LAB_0d0957a5;
            (**(code **)(*plVar32 + 0x10))(plVar32);
            func_0x0412c2d0(plVar32);
            bVar7 = *(byte *)(puVar31 + 1);
          }
          if ((bVar7 & 1) != 0) {
            func_0x0412a280(puVar31[3],puVar31[1] & 0xfffffffffffffffe);
          }
          puVar31 = puVar31 + 7;
        } while (puVar31 != puVar8);
        puVar31 = (undefined8 *)*plVar36;
      }
      plVar36 = plStack_2a8;
      *(undefined8 **)(puVar21 + 0x22) = puVar6;
      *(long **)(puVar21 + 0x24) = plStack_2a8;
      lVar23 = *(long *)(puVar21 + 0x26);
      *(long **)(puVar21 + 0x26) = plStack_2a0;
      if (puVar31 != (undefined8 *)0x0) {
        func_0x0412a280(puVar31,lVar23 - (long)puVar31);
      }
LAB_0d095824:
      plVar32 = plStack_270;
      *(long **)(puVar21 + 0x24) = plVar36;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      if (*(long *)(puVar21 + 2) != 0) {
        LOCK();
        plVar36 = (long *)(*(long *)(puVar21 + 2) + 8);
        *plVar36 = *plVar36 + 1;
        UNLOCK();
      }
      plVar36 = (long *)plStack_270[0xf];
      *(undefined4 *)(plStack_270 + 0xe) = uVar10;
      *(undefined4 *)((long)plStack_270 + 0x74) = uVar11;
      *(undefined4 *)(plStack_270 + 0xf) = uVar12;
      *(undefined4 *)((long)plStack_270 + 0x7c) = uVar13;
      if (plVar36 != (long *)0x0) {
        LOCK();
        plVar19 = plVar36 + 1;
        lVar23 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar23 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
          func_0x0412c2d0(plVar36);
        }
      }
      pbVar33 = pbStack_238;
      *(undefined1 *)(plVar32 + 0x10) = *(undefined1 *)((long)puVar21 + 0xa1);
      LOCK();
      lVar23 = *(long *)pbStack_190;
      *(long *)pbStack_190 = *(long *)pbStack_190 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*(long *)pbStack_238 + 0x10))(pbStack_238);
        func_0x0412c2d0(pbVar33);
        LOCK();
        lVar23 = *plStack_180;
        *plStack_180 = *plStack_180 + -1;
        UNLOCK();
        plVar36 = plStack_180;
      }
      else {
        LOCK();
        lVar23 = *plStack_180;
        *plStack_180 = *plStack_180 + -1;
        UNLOCK();
        plVar36 = plStack_180;
      }
      plStack_180 = plVar36;
      if (lVar23 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
      }
      plVar19 = plStack_188;
      LOCK();
      lVar23 = *plVar36;
      *plVar36 = *plVar36 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
        func_0x0412c2d0(plVar32);
      }
      plStack_2b8 = (long *)CONCAT26(plStack_2b8._6_2_,0x666c657308);
      func_0x0d103be0(plVar19,&plStack_2b8,0);
      plStack_1d8 = (long *)CONCAT17(plStack_1d8._7_1_,0x726568746f0a);
      func_0x0d103be0(plVar19,&plStack_1d8,1);
      uStack_178 = 0xc;
      uStack_177 = 0x79616c70;
      uStack_173 = 0x7265;
      uStack_171 = 0;
      func_0x0d103be0(plVar19,&uStack_178,2);
      uStack_118 = 0xc;
      uStack_117 = 0x67726174;
      uStack_113 = 0x7465;
      uStack_111 = 0;
      func_0x0d103be0(plVar19,&uStack_118,3);
      uStack_130 = 0xc;
      uStack_12f = 0x65726170;
      uStack_12b = 0x746e;
      uStack_129 = 0;
      func_0x0d103be0(plVar19,&uStack_130,4);
      uStack_d0 = 8;
      uStack_cf = 0x79626162;
      uStack_cb = 0;
      func_0x0d103be0(plVar19,&uStack_d0,5);
      uStack_e8 = 10;
      uStack_e7 = 0x636f6c62;
      uStack_e3 = 0x6b;
      func_0x0d103be0(plVar19,&uStack_e8,6);
      uStack_148 = 0xe;
      uStack_147 = 0x616d6164;
      uStack_143 = 0x726567;
      uStack_140 = 0;
      func_0x0d103be0(plVar19,&uStack_148,7);
      uStack_160 = 0xc;
      uStack_15f = 0x646c6f68;
      uStack_15b = 0x7265;
      uStack_159 = 0;
      func_0x0d103be0(plVar19,&uStack_160,8);
      uStack_100 = 8;
      uStack_ff = 0x6d657469;
      uStack_fb = 0;
      func_0x0d103be0(plVar19,&uStack_100,9);
      auStack_1f8[0] = 0;
      auStack_1f8[1] = 0;
      auStack_1f8[2] = 0;
      (**(code **)(*plVar19 + 0x10))(plVar19,auStack_1f8);
      if ((auStack_1f8[0] & 1) != 0) {
        func_0x0412a280(auStack_1f8[2],auStack_1f8[0] & 0xfffffffffffffffe);
      }
      if (lStack_78 != 0) {
        (**(code **)(lStack_78 + 8))(&lStack_78);
      }
      if ((uStack_258 & 1) != 0) {
        func_0x0412a280(lStack_248,
                        CONCAT17(uStack_251,CONCAT25(uStack_253,CONCAT14(uStack_254,uStack_258))) &
                        0xfffffffffffffffe);
      }
      return;
    }
  }
  else {
    lVar23 = uVar18 - uStack_228;
    uVar18 = (lVar23 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar18) goto LAB_0d095c18;
    plVar36 = (long *)((long)puStack_268 + 0xb8);
    lVar26 = (long)(*(ulong *)((long)puStack_268 + 200) - uStack_228) >> 3;
    uVar28 = lVar26 * -0x6186186186186186;
    if (uVar18 < uVar28) {
      uVar18 = uVar28;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar26 * -0x30c30c30c30c30c3)) {
      uVar18 = 0x186186186186186;
    }
    plStack_298 = plVar36;
    if (uVar18 == 0) {
      plVar32 = (long *)0x0;
LAB_0d095171:
      plStack_2b0 = (long *)(lVar23 + (long)plVar32);
      plStack_2a0 = plVar32 + uVar18 * 0x15;
      plStack_2b8 = plVar32;
      plStack_2a8 = plStack_2b0;
      func_0x0d1062d0(plStack_2b0);
      plVar32 = plStack_2a8 + 0x15;
      lVar23 = *(long *)((long)puVar38 + 0xb8);
      lVar26 = *(long *)((long)puVar38 + 0xc0);
      lVar37 = (lVar23 - lVar26) + (long)plStack_2b0;
      if (lVar23 != lVar26) {
        lVar29 = 0;
        do {
          uVar25 = ((undefined8 *)(lVar23 + lVar29))[1];
          *(undefined8 *)(lVar37 + lVar29) = *(undefined8 *)(lVar23 + lVar29);
          ((undefined8 *)(lVar37 + lVar29))[1] = uVar25;
          *(undefined8 *)(lVar23 + lVar29) = 0;
          ((undefined8 *)(lVar23 + lVar29))[1] = 0;
          puVar6 = (undefined8 *)(lVar37 + 0x20 + lVar29);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6 = (undefined8 *)(lVar37 + 0x10 + lVar29);
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined8 *)(lVar37 + 0x30 + lVar29) = 0;
          *(undefined8 *)(lVar37 + 0x28 + lVar29) = *(undefined8 *)(lVar23 + 0x28 + lVar29);
          puVar21 = (undefined4 *)(lVar23 + 0x18 + lVar29);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          puVar5 = (undefined4 *)(lVar37 + 0x18 + lVar29);
          *puVar5 = *puVar21;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined2 *)(lVar23 + 0x18 + lVar29) = 0;
          *(undefined8 *)(lVar37 + 0x10 + lVar29) = *(undefined8 *)(lVar23 + 0x10 + lVar29);
          func_0x04167a20(lVar37 + lVar29 + 0x38,lVar29 + lVar23 + 0x38);
          puVar6 = (undefined8 *)(lVar23 + 0x40 + lVar29);
          uVar25 = puVar6[1];
          puVar31 = (undefined8 *)(lVar37 + 0x40 + lVar29);
          *puVar31 = *puVar6;
          puVar31[1] = uVar25;
          puVar6 = (undefined8 *)(lVar23 + 0x50 + lVar29);
          uVar25 = puVar6[1];
          puVar31 = (undefined8 *)(lVar37 + 0x50 + lVar29);
          *puVar31 = *puVar6;
          puVar31[1] = uVar25;
          puVar6 = (undefined8 *)(lVar23 + 0x60 + lVar29);
          uVar25 = puVar6[1];
          puVar31 = (undefined8 *)(lVar37 + 0x60 + lVar29);
          *puVar31 = *puVar6;
          puVar31[1] = uVar25;
          puVar6 = (undefined8 *)(lVar23 + 0x60 + lVar29);
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined8 *)(lVar37 + 0x70 + lVar29) = *(undefined8 *)(lVar23 + 0x70 + lVar29);
          puVar6 = (undefined8 *)(lVar23 + 0x78 + lVar29);
          uVar25 = puVar6[1];
          puVar31 = (undefined8 *)(lVar37 + 0x78 + lVar29);
          *puVar31 = *puVar6;
          puVar31[1] = uVar25;
          puVar6 = (undefined8 *)(lVar37 + 0x88 + lVar29);
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined8 *)(lVar37 + 0x98 + lVar29) = 0;
          puVar21 = (undefined4 *)(lVar23 + 0x88 + lVar29);
          uVar10 = puVar21[1];
          uVar11 = puVar21[2];
          uVar12 = puVar21[3];
          puVar5 = (undefined4 *)(lVar37 + 0x88 + lVar29);
          *puVar5 = *puVar21;
          puVar5[1] = uVar10;
          puVar5[2] = uVar11;
          puVar5[3] = uVar12;
          *(undefined8 *)(lVar37 + 0x98 + lVar29) = *(undefined8 *)(lVar23 + 0x98 + lVar29);
          puVar6 = (undefined8 *)(lVar23 + 0x88 + lVar29);
          *puVar6 = 0;
          puVar6[1] = 0;
          *(undefined8 *)(lVar23 + 0x98 + lVar29) = 0;
          *(undefined2 *)(lVar37 + 0xa0 + lVar29) = *(undefined2 *)(lVar23 + 0xa0 + lVar29);
          lVar4 = lVar29 + lVar23;
          lVar29 = lVar29 + 0xa8;
        } while (lVar4 + 0xa8 != lVar26);
        do {
          func_0x0d102430(lVar23);
          lVar23 = lVar23 + 0xa8;
        } while (lVar23 != lVar26);
        lVar23 = *plVar36;
      }
      puVar38 = puStack_268;
      *(long *)((long)puStack_268 + 0xb8) = lVar37;
      *(long **)((long)puStack_268 + 0xc0) = plVar32;
      lVar26 = *(long *)((long)puStack_268 + 200);
      *(long **)((long)puStack_268 + 200) = plStack_2a0;
      if (lVar23 != 0) {
        func_0x0412a280(lVar23,lVar26 - lVar23);
      }
      goto LAB_0d095341;
    }
    if (uVar18 < 0x186186186186187) {
      plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0xa8);
      if (plVar32 == (long *)0x0) {
        FUN_0eec74c0(uVar18 * 0xa8,0);
        plVar32 = (long *)0x0;
      }
      goto LAB_0d095171;
    }
LAB_0d095c0e:
    func_0x04882eb0();
  }
  func_0x0d106510();
LAB_0d095c18:
  uVar25 = func_0x0d106440();
  if ((*pbVar33 & 1) != 0) {
    func_0x0412a280(plVar19[3],plVar19[1] & 0xfffffffffffffffe);
  }
  func_0x0d106450(&plStack_2b8);
  pbVar33 = pbStack_238;
  LOCK();
  lVar23 = *(long *)pbStack_190;
  *(long *)pbStack_190 = *(long *)pbStack_190 + -1;
  UNLOCK();
  if (lVar23 == 0) {
    (**(code **)(*(long *)pbStack_238 + 0x10))(pbStack_238);
    func_0x0412c2d0(pbVar33);
  }
  plVar36 = plStack_270;
  func_0x0d104020(plStack_270);
  func_0x0d104050(plVar36);
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(lStack_248,
                    CONCAT17(uStack_251,CONCAT25(uStack_253,CONCAT14(uStack_254,uStack_258))) &
                    0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar25);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


