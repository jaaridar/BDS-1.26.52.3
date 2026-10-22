/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7039990 (ELF vaddr 0x6f39990)
 * Label: caller-of-callee
 * Body:  [[07039990, 0703acbb] [0703acc0, 0703ad2c] [0703ad30, 0703b767] [0703b770, 0703bd65] [0703bd70, 0703bdad] [0703bdb0, 0703c01c] [0703c46a, 0703c50f] [0703c7ca, 0703c8e2]]
 * Ghidra: FUN_07039990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07039990(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 **ppuVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined4 *puVar19;
  long *plVar20;
  byte *pbVar21;
  long *plVar22;
  long *plVar23;
  byte *pbVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  ulong uVar29;
  byte *pbVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  undefined8 *puVar39;
  long **pplVar40;
  bool bVar41;
  undefined8 uStack_278;
  long *plStack_260;
  long *plStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  uint uStack_210;
  undefined1 uStack_20c;
  undefined2 uStack_20b;
  undefined1 uStack_209;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [4];
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined2 uStack_1ba;
  undefined4 uStack_1b8;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  uint *puStack_1b0;
  long lStack_1a8;
  uint *puStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_160;
  long *plStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long *plStack_118;
  uint *puStack_110;
  long *plStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*param_2)(param_2,&puStack_b8);
    puVar17 = (undefined8 *)*param_2;
  }
  *param_2 = 0;
  puStack_b8 = puVar17;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0a7388;
  puStack_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  if (puVar17 == (undefined8 *)0x0) {
    puStack_f8 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puVar17)(&puStack_b8,&puStack_f8);
    puStack_f8 = puStack_b8;
  }
  puStack_b8 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  plVar16[4] = (long)&UNK_0f2ccd78;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  plStack_1d0 = plVar16;
  func_0x04aa75f0(plVar16 + 0xe,&plStack_258,&UNK_01254d89);
  *(undefined1 *)(plVar16 + 0x10) = 0;
  plVar1 = plVar16 + 0x11;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0xffffffff;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = 0;
  plVar16[0x1e] = 0;
  plVar16[0x1f] = 0;
  plVar16[4] = (long)&UNK_0f0a7490;
  ppuVar2 = (undefined8 **)(plVar16 + 0x2e);
  plVar16[0x2e] = 0;
  plVar16[0x2f] = 0;
  *(undefined1 *)(plVar16 + 0x36) = 0;
  if (ppuVar2 != &puStack_78) {
    if (puStack_78 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_78)(&puStack_78,ppuVar2);
      puVar17 = puStack_78;
    }
    puStack_78 = (undefined8 *)0x0;
    *ppuVar2 = puVar17;
  }
  plVar25 = plVar16 + 4;
  puVar31 = (uint *)(plVar16 + 0x12);
  if (plVar1 != (long *)&DAT_0f552108) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar16[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar31 = _DAT_0f552110;
        *(undefined4 *)((long)plVar16 + 0x94) = uVar7;
        *(undefined4 *)(plVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar16 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar41 = (_DAT_0f552110 & 1) != 0;
      lVar37 = 0xf552111;
      if (bVar41) {
        lVar37 = _DAT_0f552120;
      }
      uVar36 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar41) {
        uVar36 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar31,lVar37,uVar36);
    }
  }
  plVar16[0x11] = _DAT_0f552108;
  plVar16[0x15] = 0;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  plVar16[4] = (long)&UNK_0f0a73d8;
  plVar20 = plVar16 + 0x38;
  plVar16[0x38] = 0;
  plVar16[0x39] = 0;
  if (puStack_f8 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_f8)(&puStack_f8,plVar20);
    puVar17 = puStack_f8;
  }
  puStack_f8 = (undefined8 *)0x0;
  *plVar20 = (long)puVar17;
  uStack_1bb = 0;
  uStack_1ba = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b2 = 0;
  puStack_1b0 = (uint *)0x0;
  lStack_1a8 = 0;
  auStack_1c0 = (undefined1  [4])0x6f6c7308;
  uStack_1bc = 0x74;
  lStack_1c8 = -0x6cfd93815cbb251f;
  plStack_158 = (long *)0x0;
  puStack_150 = (undefined *)0x0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_20b = 0;
  uStack_209 = 0;
  plStack_218 = (long *)&UNK_0f0a7768;
  plStack_118 = plVar20;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plStack_258 = plStack_218;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0a7540;
  plStack_218 = (long *)0x0;
  uStack_250 = (long *)CONCAT44(CONCAT13(uStack_209,CONCAT21(uStack_20b,uStack_20c)),uStack_210);
  plVar16[4] = (long)&UNK_0f2ccd78;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  func_0x04aa75f0(plVar16 + 0xe,&plStack_178,&UNK_01254d89);
  *(undefined1 *)(plVar16 + 0x10) = 0;
  plVar20 = plVar16 + 0x11;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0xffffffff;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = 0;
  plVar16[0x1e] = 0;
  plVar16[0x1f] = 0;
  plVar16[4] = (long)&UNK_0f0a7590;
  plVar16[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar16 + 0x2f) = 1;
  plVar16[0x30] = 0;
  plVar16[0x31] = 0;
  puStack_110 = puVar31;
  lStack_100 = param_1;
  if (plStack_258 == (long *)0x0) {
    plVar38 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_258)(&plStack_258,plVar16 + 0x30);
    plVar38 = plStack_258;
  }
  plStack_258 = (long *)0x0;
  plVar16[0x30] = (long)plVar38;
  puVar31 = (uint *)(plVar16 + 0x12);
  if (plVar20 == (long *)&DAT_0f552078) {
    plVar16[0x15] = 0;
  }
  else {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar16[0x14] = _DAT_0f552090;
        uVar9 = uRam000000000f55208c;
        uVar8 = _DAT_0f552088;
        uVar7 = uRam000000000f552084;
        *puVar31 = _DAT_0f552080;
        *(undefined4 *)((long)plVar16 + 0x94) = uVar7;
        *(undefined4 *)(plVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar16 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar41 = (_DAT_0f552080 & 1) != 0;
      lVar37 = 0xf552081;
      if (bVar41) {
        lVar37 = _DAT_0f552090;
      }
      uVar36 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar41) {
        uVar36 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar31,lVar37,uVar36);
    }
    plVar16[0x11] = _DAT_0f552078;
    plVar16[0x15] = 0;
    if (plStack_258 != (long *)0x0) {
      (*(code *)plStack_258[1])(&plStack_258);
    }
  }
  plVar38 = plVar16 + 1;
  puStack_180 = puVar31;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0a7670;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[4] = (long)&UNK_0f0a76c0;
  plVar18[0xe] = (long)(plVar16 + 4);
  plVar18[0xf] = (long)plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  plStack_258 = plVar18 + 4;
  uStack_250 = plVar18;
  puVar19 = (undefined4 *)func_0x070410f0(plVar25,&lStack_1c8);
  plVar23 = *(long **)(puVar19 + 0x24);
  if (plVar23 < *(long **)(puVar19 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar20) {
      if ((*puStack_180 & 1) == 0) {
        plVar23[3] = *(long *)(puStack_180 + 4);
        lVar37 = *(long *)(puStack_180 + 2);
        plVar23[1] = *(long *)puStack_180;
        plVar23[2] = lVar37;
      }
      else {
        FUN_04885070(plVar23 + 1,plVar16[0x14],plVar16[0x13]);
      }
    }
    *plVar23 = *plVar20;
    plVar23[5] = (long)(plVar18 + 4);
    plVar23[6] = (long)plVar18;
    LOCK();
    plVar18[1] = plVar18[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar19 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x07042eb0(puVar19 + 0x22,plVar20,&plStack_258);
  }
  *(long **)(puVar19 + 0x24) = plVar23;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar16[0xf];
  *(undefined4 *)(plVar16 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar16 + 0x74) = uVar8;
  *(undefined4 *)(plVar16 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar16 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar18 = plVar20 + 1;
    lVar37 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = uStack_250;
  *(undefined1 *)(plVar16 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_250 + 1;
    lVar37 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar37 = *plVar38;
  *plVar38 = *plVar38 + -1;
  UNLOCK();
  if (lVar37 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  if (lVar37 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
  }
  if (plStack_158 != (long *)0x0) {
    (*(code *)plStack_158[1])(&plStack_158);
  }
  pplVar40 = (long **)(plVar16 + 0x26);
  if (((uint)auStack_1c0 & 1) != 0) {
    func_0x0412a280(puStack_1b0,
                    CONCAT26(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,auStack_1c0))) &
                    0xfffffffffffffffe);
  }
  plStack_258 = (long *)&UNK_0f0a7780;
  uStack_250 = (long *)0x0;
  uStack_248 = (long *)((ulong)uStack_248._4_4_ << 0x20);
  if (pplVar40 != &plStack_258) {
    if ((*pplVar40 == (long *)0x0) ||
       ((*(code *)(*pplVar40)[1])(pplVar40), plStack_258 != (long *)0x0)) {
      (*(code *)*plStack_258)(&plStack_258,pplVar40);
    }
    else {
      plStack_258 = (long *)0x0;
    }
    *pplVar40 = plStack_258;
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0x6363611c;
  uStack_20c = 0x65;
  uStack_20b = 0x7470;
  uStack_209 = 0x65;
  uStack_208 = 0x74695f64;
  uStack_204 = 0x736d65;
  plStack_218 = (long *)0x5607ed679823feb3;
  plStack_258 = (long *)&UNK_0f0a7978;
  uStack_250 = (long *)&UNK_0700c2a0;
  uStack_248 = (long *)0x0;
  func_0x070432a0(plVar25,&plStack_218,&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  if ((uStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT17(uStack_209,CONCAT25(uStack_20b,CONCAT14(uStack_20c,uStack_210))) &
                    0xfffffffffffffffe);
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0x6363611c;
  uStack_20c = 0x65;
  uStack_20b = 0x7470;
  uStack_209 = 0x65;
  uStack_208 = 0x74695f64;
  uStack_204 = 0x736d65;
  plStack_218 = (long *)0x5607ed679823feb3;
  plStack_158 = (long *)&UNK_0f0a7b88;
  puStack_150 = (undefined *)0x8;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0a79a0;
  plStack_258 = (long *)0x0;
  uStack_250 = (long *)0x0;
  if (plStack_158 == (long *)0x0) {
    plStack_258 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_158)(&plStack_158,&plStack_258);
    plStack_258 = plStack_158;
  }
  plStack_158 = (long *)0x0;
  plVar16[4] = (long)&UNK_0f2ccd78;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  plStack_1d8 = plVar16;
  func_0x04aa75f0(plVar16 + 0xe,&lStack_1c8,&UNK_01254d89);
  *(undefined1 *)(plVar16 + 0x10) = 0;
  plVar20 = plVar16 + 0x11;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0xffffffff;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = 0;
  plVar16[0x1e] = 0;
  plVar16[0x1f] = 0;
  plVar16[4] = (long)&UNK_0f0a79f0;
  pplVar40 = (long **)(plVar16 + 0x2e);
  plVar16[0x2e] = 0;
  plVar16[0x2f] = 0;
  if (pplVar40 != &plStack_258) {
    if (plStack_258 == (long *)0x0) {
      plVar38 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_258)(&plStack_258,pplVar40);
      plVar38 = plStack_258;
    }
    plStack_258 = (long *)0x0;
    *pplVar40 = plVar38;
  }
  puVar31 = (uint *)(plVar16 + 0x12);
  if (plVar20 != (long *)&DAT_0f551f58) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar16[0x14] = _DAT_0f551f70;
        uVar9 = uRam000000000f551f6c;
        uVar8 = _DAT_0f551f68;
        uVar7 = uRam000000000f551f64;
        *puVar31 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar16 + 0x94) = uVar7;
        *(undefined4 *)(plVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar16 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar41 = (_DAT_0f551f60 & 1) != 0;
      lVar37 = 0xf551f61;
      if (bVar41) {
        lVar37 = _DAT_0f551f70;
      }
      uVar36 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar41) {
        uVar36 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar31,lVar37,uVar36);
    }
  }
  plVar38 = plVar16 + 1;
  plVar16[0x11] = _DAT_0f551f58;
  plVar16[0x15] = 0;
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0a7ae8;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[4] = (long)&UNK_0f0a7b38;
  plVar18[0xe] = (long)(plVar16 + 4);
  plVar18[0xf] = (long)plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  plStack_258 = plVar18 + 4;
  uStack_250 = plVar18;
  puVar19 = (undefined4 *)func_0x070410f0(plVar25,&plStack_218);
  plVar23 = *(long **)(puVar19 + 0x24);
  if (plVar23 < *(long **)(puVar19 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar20) {
      if ((*puVar31 & 1) == 0) {
        plVar23[3] = plVar16[0x14];
        lVar37 = plVar16[0x13];
        plVar23[1] = *(long *)puVar31;
        plVar23[2] = lVar37;
      }
      else {
        FUN_04885070(plVar23 + 1,plStack_1d8[0x14],plStack_1d8[0x13]);
      }
    }
    *plVar23 = *plVar20;
    plVar23[5] = (long)(plVar18 + 4);
    plVar23[6] = (long)plVar18;
    LOCK();
    plVar18[1] = plVar18[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar19 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x07042eb0(puVar19 + 0x22,plVar20,&plStack_258);
  }
  plVar16 = plStack_1d8;
  *(long **)(puVar19 + 0x24) = plVar23;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plStack_1d8[0xf];
  *(undefined4 *)(plStack_1d8 + 0xe) = uVar7;
  *(undefined4 *)((long)plStack_1d8 + 0x74) = uVar8;
  *(undefined4 *)(plStack_1d8 + 0xf) = uVar9;
  *(undefined4 *)((long)plStack_1d8 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar18 = plVar20 + 1;
    lVar37 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = uStack_250;
  *(undefined1 *)(plVar16 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_250 + 1;
    lVar37 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar20);
    }
  }
  LOCK();
  lVar37 = *plVar38;
  *plVar38 = *plVar38 + -1;
  UNLOCK();
  if (lVar37 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  if (lVar37 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
  }
  if (plStack_158 != (long *)0x0) {
    (*(code *)plStack_158[1])(&plStack_158);
  }
  if ((uStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT17(uStack_209,CONCAT25(uStack_20b,CONCAT14(uStack_20c,uStack_210))) &
                    0xfffffffffffffffe);
  }
  auStack_1c0 = (undefined1  [4])0x8;
  uStack_1bc = 0;
  uStack_1bb = 0;
  uStack_1ba = 0;
  uStack_210 = 8;
  uStack_20c = 0;
  uStack_20b = 0;
  uStack_209 = 0;
  lStack_1c8 = 0;
  plStack_218 = (long *)&UNK_0f0a7dd8;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plStack_258 = plStack_218;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f0a7bb0;
  plStack_218 = (long *)0x0;
  uStack_250 = (long *)CONCAT44(CONCAT13(uStack_209,CONCAT21(uStack_20b,uStack_20c)),uStack_210);
  func_0x07046ff0(plVar20 + 4,&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  plVar38 = plVar20 + 1;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0a7ce0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[4] = (long)&UNK_0f0a7d30;
  plVar18[0xe] = (long)(plVar20 + 4);
  plVar18[0xf] = (long)plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  plVar23 = plVar18 + 4;
  plStack_108 = plVar16 + 0x1b;
  puVar39 = (undefined8 *)plVar16[0x1c];
  for (puVar17 = (undefined8 *)plVar16[0x1b]; plStack_258 = plVar23, uStack_250 = plVar18,
      puVar17 != puVar39; puVar17 = puVar17 + 0x15) {
    if ((puVar17[0xf] == 0) && (puVar17[0x10] == -1)) {
      plVar22 = (long *)puVar17[0x12];
      if ((long *)puVar17[0x13] <= plVar22) goto LAB_0703a901;
      goto LAB_0703a7f8;
    }
  }
  if (puVar39 < (undefined8 *)plVar16[0x1d]) {
    func_0x07048cb0(puVar39);
    plVar16[0x1c] = (long)(puVar39 + 0x15);
    plVar16[0x1c] = (long)(puVar39 + 0x15);
    pbVar21 = (byte *)*puVar39;
    if ((*pbVar21 & 1) == 0) goto LAB_0703a89f;
LAB_0703a86e:
    pbVar21[8] = 0x13;
    pbVar21[9] = 0;
    pbVar21[10] = 0;
    pbVar21[0xb] = 0;
    pbVar21[0xc] = 0;
    pbVar21[0xd] = 0;
    pbVar21[0xe] = 0;
    pbVar21[0xf] = 0;
    pbVar21 = *(byte **)(pbVar21 + 0x10);
  }
  else {
    lVar37 = func_0x07048a20(plStack_108);
    plVar16[0x1c] = lVar37;
    pbVar21 = *(byte **)(lVar37 + -0xa8);
    if ((*pbVar21 & 1) != 0) goto LAB_0703a86e;
LAB_0703a89f:
    *pbVar21 = 0x26;
    pbVar21 = pbVar21 + 1;
  }
  uVar9 = _UNK_01494d69;
  uVar8 = _UNK_01494d65;
  uVar7 = _UNK_01494d61;
  *(undefined4 *)pbVar21 = _DAT_01494d5d;
  *(undefined4 *)(pbVar21 + 4) = uVar7;
  *(undefined4 *)(pbVar21 + 8) = uVar8;
  *(undefined4 *)(pbVar21 + 0xc) = uVar9;
  pbVar21[0xf] = 0x65;
  pbVar21[0x10] = 0x6e;
  pbVar21[0x11] = 0x74;
  pbVar21[0x12] = 0x3e;
  pbVar21[0x13] = 0;
  lVar37 = plVar16[0x1c];
  puVar17 = (undefined8 *)(lVar37 + -0xa8);
  *(char *)(lVar37 + -7) = (char)plVar16[0x10];
  *(undefined8 *)(lVar37 + -0x30) = 0;
  *(undefined8 *)(lVar37 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar37 + -8) = 0;
  plVar22 = *(long **)(lVar37 + -0x18);
  if (plVar22 < *(long **)(lVar37 + -0x10)) {
LAB_0703a7f8:
    plVar22[2] = 0;
    plVar22[3] = 0;
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[4] = 0;
    if (plVar22 != plVar20 + 0x11) {
      if ((*(byte *)(plVar20 + 0x12) & 1) == 0) {
        plVar22[3] = plVar20[0x14];
        lVar37 = plVar20[0x13];
        plVar22[1] = plVar20[0x12];
        plVar22[2] = lVar37;
      }
      else {
        puStack_180 = (uint *)(plVar18 + 1);
        FUN_04885070(plVar22 + 1,plVar20[0x14],plVar20[0x13]);
        plVar16 = plStack_1d8;
      }
    }
    *plVar22 = plVar20[0x11];
    plVar22[5] = (long)plVar23;
    plVar22[6] = (long)plVar18;
    LOCK();
    plVar18[1] = plVar18[1] + 1;
    UNLOCK();
    plVar22 = plVar22 + 7;
    puVar17[0x12] = plVar22;
  }
  else {
LAB_0703a901:
    plVar22 = (long *)func_0x07048e30(puVar17 + 0x11,plVar20 + 0x11,&plStack_258);
  }
  puVar17[0x12] = plVar22;
  uVar7 = *(undefined4 *)puVar17;
  uVar8 = *(undefined4 *)((long)puVar17 + 4);
  uVar9 = *(undefined4 *)(puVar17 + 1);
  uVar10 = *(undefined4 *)((long)puVar17 + 0xc);
  if (puVar17[1] != 0) {
    LOCK();
    plVar18 = (long *)(puVar17[1] + 8);
    *plVar18 = *plVar18 + 1;
    UNLOCK();
  }
  plVar18 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar8;
  *(undefined4 *)(plVar20 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar10;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar23 = plVar18 + 1;
    lVar37 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      func_0x0412c2d0(plVar18);
    }
  }
  plVar18 = uStack_250;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar17 + 0xa1);
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar23 = uStack_250 + 1;
    lVar37 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar18);
    }
  }
  LOCK();
  lVar37 = *plVar38;
  *plVar38 = *plVar38 + -1;
  UNLOCK();
  if (lVar37 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  if (lVar37 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (lStack_1c8 != 0) {
    (**(code **)(lStack_1c8 + 8))(&lStack_1c8);
  }
  uStack_1bb = 0;
  uStack_1ba = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b2 = 0;
  puStack_1b0 = (uint *)0x0;
  lStack_1a8 = 0;
  auStack_1c0 = (undefined1  [4])0x65746908;
  uStack_1bc = 0x6d;
  lStack_1c8 = -0x16281f812b7c8958;
  puStack_150 = &UNK_0700c2a0;
  uStack_148 = 0;
  uStack_210 = 0x700c2a0;
  uStack_20c = 0;
  uStack_20b = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  plStack_158 = (long *)0x0;
  plStack_218 = (long *)&UNK_0f0a7df0;
  plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar20 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  plStack_258 = plStack_218;
  plVar20[1] = 0;
  plVar20[2] = 0;
  *plVar20 = (long)&UNK_0f0a7bb0;
  uStack_250 = (long *)CONCAT44(CONCAT13(uStack_209,CONCAT21(uStack_20b,uStack_20c)),uStack_210);
  uStack_248 = (long *)CONCAT44(uStack_204,uStack_208);
  plStack_218 = (long *)0x0;
  func_0x07046ff0(plVar20 + 4,&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  plVar38 = plVar20 + 1;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plStack_160 = plVar38;
  plStack_170 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plStack_170 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  lVar27 = lStack_1a8;
  lVar37 = lStack_1c8;
  plStack_170[1] = 0;
  plStack_170[2] = 0;
  *plStack_170 = (long)&UNK_0f0a7ce0;
  plStack_178 = plStack_170 + 4;
  plStack_170[6] = 0;
  plStack_170[7] = 0;
  plStack_170[4] = (long)&UNK_0f0a7d30;
  plStack_170[0xe] = (long)(plVar20 + 4);
  plStack_170[0xf] = (long)plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  uVar36 = plVar16[0x1c];
  if (plVar16[0x1b] != uVar36) {
    if (((uint)auStack_1c0 & 1) == 0) {
      uVar29 = (ulong)(auStack_1c0[0] >> 1);
      puStack_180 = (uint *)(auStack_1c0 + 1);
    }
    else {
      uVar29 = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,uStack_1b8));
      puStack_180 = puStack_1b0;
    }
    lVar35 = plVar16[0x1b] + 0x19;
    do {
      if (*(long *)(lVar35 + -9) == lVar37) {
        if ((*(long **)(lVar35 + 0x17) == &lStack_1c8) && (lVar35 + -9 == lVar27)) {
LAB_0703af31:
          puVar19 = (undefined4 *)(lVar35 + -0x19);
          goto LAB_0703af3a;
        }
        bVar3 = *(byte *)(lVar35 + -1);
        if ((bVar3 & 1) == 0) {
          uVar34 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar34 = *(ulong *)(lVar35 + 7);
        }
        if (uVar34 == uVar29) {
          lVar33 = lVar35;
          if ((bVar3 & 1) != 0) {
            lVar33 = *(long *)(lVar35 + 0xf);
          }
          iVar15 = func_0x0eee3000(lVar33,puStack_180,uVar29);
          if (iVar15 == 0) {
            *(long **)(lVar35 + 0x17) = &lStack_1c8;
            lStack_1a8 = lVar35 + -9;
            goto LAB_0703af31;
          }
        }
      }
      *(undefined8 *)(lVar35 + 0x17) = 0;
      uVar34 = lVar35 + 0x8f;
      lVar35 = lVar35 + 0xa8;
    } while (uVar34 != uVar36);
  }
  plVar16 = plStack_1d8;
  if (uVar36 < (ulong)plStack_1d8[0x1d]) {
    func_0x07048cb0(uVar36);
    lVar37 = uVar36 + 0xa8;
    plVar16[0x1c] = lVar37;
  }
  else {
    lVar37 = func_0x07048a20(plStack_108);
  }
  plVar16[0x1c] = lVar37;
  func_0x0b63b6d0(*(undefined8 *)(lVar37 + -0xa8),&lStack_1c8);
  lVar37 = plVar16[0x1c];
  *(char *)(lVar37 + -7) = (char)plVar16[0x10];
  if ((long *)(lVar37 + -0x98) != &lStack_1c8) {
    puVar31 = (uint *)(lVar37 + -0x90);
    if ((*(byte *)puVar31 & 1) == 0) {
      if (((uint)auStack_1c0 & 1) == 0) {
        *(uint **)(lVar37 + -0x80) = puStack_1b0;
        *puVar31 = (uint)auStack_1c0;
        *(uint *)(lVar37 + -0x8c) = CONCAT22(uStack_1ba,CONCAT11(uStack_1bb,uStack_1bc));
        *(undefined4 *)(lVar37 + -0x88) = uStack_1b8;
        *(uint *)(lVar37 + -0x84) = CONCAT22(uStack_1b2,uStack_1b4);
      }
      else {
        FUN_04885070(puVar31,puStack_1b0,CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,uStack_1b8)));
      }
    }
    else {
      bVar41 = ((uint)auStack_1c0 & 1) != 0;
      puVar32 = (uint *)(auStack_1c0 + 1);
      if (bVar41) {
        puVar32 = puStack_1b0;
      }
      uVar36 = (ulong)(auStack_1c0[0] >> 1);
      if (bVar41) {
        uVar36 = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,uStack_1b8));
      }
      func_0x04885120(puVar31,puVar32,uVar36);
    }
  }
  *(long *)(lVar37 + -0x98) = lStack_1c8;
  *(undefined8 *)(lVar37 + -0x78) = 0;
  func_0x04aa9390(&plStack_258,auStack_1c0,(char)plVar16[0x10]);
  lVar37 = plVar16[0x1c];
  func_0x04167a70(lVar37 + -0x70,&plStack_258);
  *(long **)(lVar37 + -0x68) = uStack_250;
  *(long **)(lVar37 + -0x60) = uStack_248;
  *(long **)(lVar37 + -0x58) = plStack_240;
  *(long **)(lVar37 + -0x50) = plStack_238;
  uVar7 = (undefined4)uStack_230;
  uVar8 = uStack_230._4_4_;
  uVar9 = (undefined4)uStack_228;
  uVar10 = uStack_228._4_4_;
  uStack_230 = 0;
  uStack_228 = (long *)0x0;
  plVar38 = *(long **)(lVar37 + -0x40);
  *(undefined4 *)(lVar37 + -0x48) = uVar7;
  *(undefined4 *)(lVar37 + -0x44) = uVar8;
  *(undefined4 *)(lVar37 + -0x40) = uVar9;
  *(undefined4 *)(lVar37 + -0x3c) = uVar10;
  if (plVar38 != (long *)0x0) {
    LOCK();
    plVar18 = plVar38 + 1;
    lVar27 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar38 + 0x10))(plVar38);
      func_0x0412c2d0(plVar38);
    }
  }
  plVar38 = uStack_228;
  *(undefined8 *)(lVar37 + -0x38) = uStack_220;
  if (uStack_228 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_228 + 1;
    lVar37 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*uStack_228 + 0x10))(uStack_228);
      func_0x0412c2d0(plVar38);
    }
  }
  func_0x04167a40(&plStack_258);
  lVar37 = plVar16[0x1c];
  *(undefined1 *)(lVar37 + -8) = 0;
  puVar19 = (undefined4 *)(lVar37 + -0xa8);
LAB_0703af3a:
  plVar16 = plVar20 + 0x11;
  plVar38 = *(long **)(puVar19 + 0x24);
  if (plVar38 < *(long **)(puVar19 + 0x26)) {
    plVar38[2] = 0;
    plVar38[3] = 0;
    *plVar38 = 0;
    plVar38[1] = 0;
    plVar38[4] = 0;
    if (plVar38 != plVar16) {
      if ((*(byte *)(plVar20 + 0x12) & 1) == 0) {
        plVar38[3] = plVar20[0x14];
        lVar37 = plVar20[0x13];
        plVar38[1] = plVar20[0x12];
        plVar38[2] = lVar37;
      }
      else {
        FUN_04885070(plVar38 + 1,plVar20[0x14],plVar20[0x13]);
      }
    }
    *plVar38 = *plVar16;
    plVar38[5] = (long)plStack_178;
    plVar38[6] = (long)plStack_170;
    if (plStack_170 != (long *)0x0) {
      LOCK();
      plStack_170[1] = plStack_170[1] + 1;
      UNLOCK();
    }
    plVar38 = plVar38 + 7;
    *(long **)(puVar19 + 0x24) = plVar38;
  }
  else {
    plVar38 = (long *)func_0x07048e30(puVar19 + 0x22,plVar16,&plStack_178);
  }
  *(long **)(puVar19 + 0x24) = plVar38;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar20[0xf];
  *(undefined4 *)(plVar20 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar20 + 0x74) = uVar8;
  *(undefined4 *)(plVar20 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar20 + 0x7c) = uVar10;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar38 = plVar16 + 1;
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_170;
  *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar38 = plStack_170 + 1;
    lVar37 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
    if (lVar37 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar16);
    }
  }
  plVar16 = plStack_160;
  LOCK();
  lVar37 = *plStack_160;
  *plStack_160 = *plStack_160 + -1;
  UNLOCK();
  if (lVar37 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
    LOCK();
    lVar37 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar37 = *plStack_160;
    *plStack_160 = *plStack_160 + -1;
    UNLOCK();
  }
  if (lVar37 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    func_0x0412c2d0(plVar20);
  }
  if (plStack_158 != (long *)0x0) {
    (*(code *)plStack_158[1])(&plStack_158);
  }
  if (((uint)auStack_1c0 & 1) != 0) {
    func_0x0412a280(puStack_1b0,
                    CONCAT26(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,auStack_1c0))) &
                    0xfffffffffffffffe);
  }
  uStack_20b = 0;
  uStack_209 = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0x65746908;
  uStack_20c = 0x6d;
  plStack_218 = (long *)0xe9d7e07ed48376a8;
  plStack_258 = (long *)&UNK_0f0a7e08;
  uStack_250 = (long *)0x20;
  func_0x070432a0(plVar25,&plStack_218,&plStack_258);
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  if ((uStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT17(uStack_209,CONCAT25(uStack_20b,CONCAT14(uStack_20c,uStack_210))) &
                    0xfffffffffffffffe);
  }
  uStack_1b2 = 0;
  puStack_1b0 = (uint *)0x0;
  lStack_1a8 = 0;
  auStack_1c0 = (undefined1  [4])0x746e691a;
  uStack_1bc = 0x65;
  uStack_1bb = 0x72;
  uStack_1ba = 0x6361;
  uStack_1b8 = 0x65745f74;
  uStack_1b4 = 0x7478;
  lStack_1c8 = 0x26926831390a45cf;
  puStack_150 = (undefined *)0x30;
  uStack_210 = 0x30;
  uStack_20c = 0;
  uStack_20b = 0;
  uStack_209 = 0;
  plStack_158 = (long *)0x0;
  plStack_218 = (long *)&UNK_0f0a8000;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  plStack_258 = plStack_218;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0a7e30;
  plStack_218 = (long *)0x0;
  uStack_250 = (long *)CONCAT44(CONCAT13(uStack_209,CONCAT21(uStack_20b,uStack_20c)),uStack_210);
  plVar16[4] = (long)&UNK_0f2ccd78;
  plVar16[5] = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  plVar16[10] = 0;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined1 *)(plVar16 + 0xd) = 0;
  func_0x04aa75f0(plVar16 + 0xe,&plStack_178,&UNK_01254d89);
  *(undefined1 *)(plVar16 + 0x10) = 0;
  plVar20 = plVar16 + 0x11;
  plVar16[0x11] = 0;
  plVar16[0x12] = 0;
  plVar16[0x13] = 0;
  plVar16[0x14] = 0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  plVar16[0x17] = 0xffffffff;
  plVar16[0x26] = 0;
  plVar16[0x27] = 0;
  plVar16[0x18] = 0;
  plVar16[0x19] = 0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = 0;
  plVar16[0x1c] = 0;
  plVar16[0x1d] = 0;
  plVar16[0x1e] = 0;
  plVar16[0x1f] = 0;
  plVar16[4] = (long)&UNK_0f0a7e80;
  plVar16[0x2e] = 0;
  plVar16[0x2f] = 0;
  plVar16[0x30] = 0;
  plVar16[0x31] = 0;
  plVar16[0x32] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  *(undefined4 *)(plVar16 + 0x35) = 0x3f800000;
  plVar16[0x36] = 0;
  plVar16[0x37] = 0;
  if (plStack_258 == (long *)0x0) {
    plVar38 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_258)(&plStack_258,plVar16 + 0x36);
    plVar38 = plStack_258;
  }
  plStack_258 = (long *)0x0;
  plVar16[0x36] = (long)plVar38;
  *(undefined1 *)(plVar16 + 0x3e) = 0;
  puVar31 = (uint *)(plVar16 + 0x12);
  if (plVar20 != (long *)&DAT_0f552138) {
    if ((*puVar31 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar16[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puVar31 = _DAT_0f552140;
        *(undefined4 *)((long)plVar16 + 0x94) = uVar7;
        *(undefined4 *)(plVar16 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar16 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar31,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar41 = (_DAT_0f552140 & 1) != 0;
      lVar37 = 0xf552141;
      if (bVar41) {
        lVar37 = _DAT_0f552150;
      }
      uVar36 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar41) {
        uVar36 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puVar31,lVar37,uVar36);
    }
  }
  plVar16[0x11] = _DAT_0f552138;
  plVar16[0x15] = 0;
  if (plStack_258 != (long *)0x0) {
    (*(code *)plStack_258[1])(&plStack_258);
  }
  plVar38 = plVar16 + 1;
  if (plStack_218 != (long *)0x0) {
    (*(code *)plStack_218[1])(&plStack_218);
  }
  LOCK();
  *plVar38 = *plVar38 + 1;
  UNLOCK();
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar18 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0a7f60;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[4] = (long)&UNK_0f0a7fb0;
  plVar18[0xe] = (long)(plVar16 + 4);
  plVar18[0xf] = (long)plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  plStack_258 = plVar18 + 4;
  uStack_250 = plVar18;
  puVar19 = (undefined4 *)func_0x070410f0(plVar25,&lStack_1c8);
  plVar23 = *(long **)(puVar19 + 0x24);
  if (plVar23 < *(long **)(puVar19 + 0x26)) {
    plVar23[2] = 0;
    plVar23[3] = 0;
    *plVar23 = 0;
    plVar23[1] = 0;
    plVar23[4] = 0;
    if (plVar23 != plVar20) {
      if ((*puVar31 & 1) == 0) {
        plVar23[3] = plVar16[0x14];
        lVar37 = plVar16[0x13];
        plVar23[1] = *(long *)puVar31;
        plVar23[2] = lVar37;
      }
      else {
        FUN_04885070(plVar23 + 1,plVar16[0x14],plVar16[0x13]);
      }
    }
    *plVar23 = *plVar20;
    plVar23[5] = (long)(plVar18 + 4);
    plVar23[6] = (long)plVar18;
    LOCK();
    plVar18[1] = plVar18[1] + 1;
    UNLOCK();
    plVar23 = plVar23 + 7;
    *(long **)(puVar19 + 0x24) = plVar23;
  }
  else {
    plVar23 = (long *)func_0x07042eb0(puVar19 + 0x22,plVar20,&plStack_258);
  }
  lVar37 = lStack_100;
  *(long **)(puVar19 + 0x24) = plVar23;
  uVar7 = *puVar19;
  uVar8 = puVar19[1];
  uVar9 = puVar19[2];
  uVar10 = puVar19[3];
  if (*(long *)(puVar19 + 2) != 0) {
    LOCK();
    plVar20 = (long *)(*(long *)(puVar19 + 2) + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  plVar20 = (long *)plVar16[0xf];
  *(undefined4 *)(plVar16 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar16 + 0x74) = uVar8;
  *(undefined4 *)(plVar16 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar16 + 0x7c) = uVar10;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar18 = plVar20 + 1;
    lVar27 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = uStack_250;
  *(undefined1 *)(plVar16 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_250 + 1;
    lVar27 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar20);
    }
  }
  plVar20 = plStack_1d0;
  LOCK();
  lVar27 = *plVar38;
  *plVar38 = *plVar38 + -1;
  UNLOCK();
  if (lVar27 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
    LOCK();
    lVar27 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar27 = *plVar38;
    *plVar38 = *plVar38 + -1;
    UNLOCK();
  }
  if (lVar27 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
  }
  if (plStack_158 != (long *)0x0) {
    (*(code *)plStack_158[1])(&plStack_158);
  }
  if (((uint)auStack_1c0 & 1) != 0) {
    func_0x0412a280(puStack_1b0,
                    CONCAT26(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,auStack_1c0))) &
                    0xfffffffffffffffe);
  }
  func_0x0703ec40(plVar25,0x48,&UNK_01416b6d);
  func_0x0703ec40(plVar25,0xa8,&UNK_01275cb6);
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  pbVar21 = (byte *)(plVar20 + 1);
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  LOCK();
  *(long *)pbVar21 = *(long *)pbVar21 + 1;
  UNLOCK();
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar16 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f0a8220;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[4] = (long)&UNK_0f0a8270;
  plVar16[0xe] = (long)plVar25;
  plVar16[0xf] = (long)plVar20;
  LOCK();
  plVar20[1] = plVar20[1] + 1;
  UNLOCK();
  puVar5 = *(undefined4 **)(lVar37 + 0xc0);
  puVar4 = *(undefined4 **)(lVar37 + 0xb8);
  for (puVar19 = puVar4; pbVar30 = pbVar21, plStack_260 = plVar25, puVar19 != puVar5;
      puVar19 = puVar19 + 0x2a) {
    if ((*(long *)(puVar19 + 0x1e) == 0) && (*(long *)(puVar19 + 0x20) == -1)) goto LAB_0703bae2;
  }
  if (puVar5 < *(undefined4 **)(lVar37 + 200)) {
    func_0x0704e790(puVar5);
    plVar25 = (long *)(puVar5 + 0x2a);
    *(long **)(lVar37 + 0xc0) = plVar25;
LAB_0703ba7d:
    *(long **)(lVar37 + 0xc0) = plVar25;
    pbVar24 = (byte *)plVar25[-0x15];
    if ((*pbVar24 & 1) == 0) {
      *pbVar24 = 0x26;
      pbVar24 = pbVar24 + 1;
    }
    else {
      pbVar24[8] = 0x13;
      pbVar24[9] = 0;
      pbVar24[10] = 0;
      pbVar24[0xb] = 0;
      pbVar24[0xc] = 0;
      pbVar24[0xd] = 0;
      pbVar24[0xe] = 0;
      pbVar24[0xf] = 0;
      pbVar24 = *(byte **)(pbVar24 + 0x10);
    }
    uVar9 = _UNK_01494d69;
    uVar8 = _UNK_01494d65;
    uVar7 = _UNK_01494d61;
    *(undefined4 *)pbVar24 = _DAT_01494d5d;
    *(undefined4 *)(pbVar24 + 4) = uVar7;
    *(undefined4 *)(pbVar24 + 8) = uVar8;
    *(undefined4 *)(pbVar24 + 0xc) = uVar9;
    pbVar24[0xf] = 0x65;
    pbVar24[0x10] = 0x6e;
    pbVar24[0x11] = 0x74;
    pbVar24[0x12] = 0x3e;
    pbVar24[0x13] = 0;
    lVar27 = *(long *)(lVar37 + 0xc0);
    puVar19 = (undefined4 *)(lVar27 - 0xa8);
    *(undefined1 *)(lVar27 + -7) = *(undefined1 *)(lVar37 + 0x60);
    *(undefined8 *)(lVar27 + -0x30) = 0;
    *(undefined8 *)(lVar27 + -0x28) = 0xffffffffffffffff;
    *(undefined1 *)(lVar27 + -8) = 0;
LAB_0703bae2:
    plVar38 = plVar16 + 4;
    plVar25 = *(long **)(puVar19 + 0x24);
    if (plVar25 < *(long **)(puVar19 + 0x26)) {
      plVar25[2] = 0;
      plVar25[3] = 0;
      *plVar25 = 0;
      plVar25[1] = 0;
      plVar25[4] = 0;
      if (plVar25 != plVar1) {
        if ((*puStack_110 & 1) == 0) {
          plVar25[3] = *(long *)(puStack_110 + 4);
          lVar37 = *(long *)(puStack_110 + 2);
          plVar25[1] = *(long *)puStack_110;
          plVar25[2] = lVar37;
        }
        else {
          FUN_04885070(plVar25 + 1,plVar20[0x14],plVar20[0x13]);
        }
      }
      *plVar25 = *plVar1;
      plVar25[5] = (long)plVar38;
      plVar25[6] = (long)plVar16;
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
      plVar25 = plVar25 + 7;
      *(long **)(puVar19 + 0x24) = plVar25;
      goto LAB_0703be14;
    }
    lVar37 = (long)plVar25 - *(long *)(puVar19 + 0x22);
    uVar36 = (lVar37 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (uVar36 < 0x492492492492493) {
      lVar27 = (long)*(long **)(puVar19 + 0x26) - *(long *)(puVar19 + 0x22) >> 3;
      uVar29 = lVar27 * -0x2492492492492492;
      if (uVar36 < uVar29) {
        uVar36 = uVar29;
      }
      plVar20 = (long *)(puVar19 + 0x22);
      if (0x249249249249248 < (ulong)(lVar27 * 0x6db6db6db6db6db7)) {
        uVar36 = 0x492492492492492;
      }
      plStack_238 = plVar20;
      if (uVar36 == 0) {
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = plVar38;
        if (0x492492492492492 < uVar36) goto LAB_0703bfe5;
        plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x38);
        if (plVar25 == (long *)0x0) {
          FUN_0eec74c0(uVar36 * 0x38,0);
          plVar25 = (long *)0x0;
        }
      }
      plVar18 = (long *)((long)plVar25 + lVar37);
      plStack_240 = plVar25 + uVar36 * 7;
      puVar17 = (undefined8 *)((long)plVar25 + lVar37 + 0x10);
      *puVar17 = 0;
      puVar17[1] = 0;
      *(undefined8 *)((long)plVar25 + lVar37) = 0;
      ((undefined8 *)((long)plVar25 + lVar37))[1] = 0;
      *(undefined8 *)((long)plVar25 + lVar37 + 0x20) = 0;
      uStack_248 = plVar18;
      plStack_258 = plVar25;
      uStack_250 = plVar18;
      if (plVar18 != plVar1) {
        puVar31 = (uint *)((long)plVar25 + lVar37 + 8);
        if ((*puStack_110 & 1) == 0) {
          *(undefined8 *)((long)plVar25 + lVar37 + 0x18) = *(undefined8 *)(puStack_110 + 4);
          uVar11 = puStack_110[1];
          uVar12 = puStack_110[2];
          uVar13 = puStack_110[3];
          *puVar31 = *puStack_110;
          *(uint *)((long)plVar25 + lVar37 + 0xc) = uVar11;
          *(uint *)((long)plVar25 + lVar37 + 0x10) = uVar12;
          *(uint *)((long)plVar25 + lVar37 + 0x14) = uVar13;
        }
        else {
          FUN_04885070(puVar31,plStack_1d0[0x14],plStack_1d0[0x13]);
        }
      }
      *plVar18 = *plVar1;
      plVar18[5] = (long)plVar38;
      plVar18[6] = (long)plVar16;
      LOCK();
      plVar16[1] = plVar16[1] + 1;
      UNLOCK();
      uStack_248 = uStack_248 + 7;
      puVar39 = *(undefined8 **)(puVar19 + 0x22);
      puVar6 = *(undefined8 **)(puVar19 + 0x24);
      puVar17 = (undefined8 *)((long)uStack_250 + ((long)puVar39 - (long)puVar6));
      puVar26 = puVar17;
      puVar28 = puVar39;
      if ((long)puVar39 - (long)puVar6 != 0) {
        do {
          puVar26[2] = 0;
          puVar26[3] = 0;
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[4] = 0;
          puVar26[3] = puVar28[3];
          uVar14 = puVar28[2];
          puVar26[1] = puVar28[1];
          puVar26[2] = uVar14;
          *(undefined2 *)(puVar28 + 1) = 0;
          *puVar26 = *puVar28;
          uVar14 = puVar28[6];
          puVar26[5] = puVar28[5];
          puVar26[6] = uVar14;
          puVar28[5] = 0;
          puVar28[6] = 0;
          puVar28 = puVar28 + 7;
          puVar26 = puVar26 + 7;
        } while (puVar28 != puVar6);
        do {
          plVar1 = (long *)puVar39[6];
          if (plVar1 == (long *)0x0) {
LAB_0703bd94:
            bVar3 = *(byte *)(puVar39 + 1);
          }
          else {
            LOCK();
            plVar25 = plVar1 + 1;
            lVar37 = *plVar25;
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (lVar37 != 0) goto LAB_0703bd94;
            (**(code **)(*plVar1 + 0x10))(plVar1);
            func_0x0412c2d0(plVar1);
            bVar3 = *(byte *)(puVar39 + 1);
          }
          if ((bVar3 & 1) != 0) {
            func_0x0412a280(puVar39[3],puVar39[1] & 0xfffffffffffffffe);
          }
          puVar39 = puVar39 + 7;
        } while (puVar39 != puVar6);
        puVar39 = (undefined8 *)*plVar20;
      }
      plVar20 = plStack_1d0;
      plVar25 = uStack_248;
      *(undefined8 **)(puVar19 + 0x22) = puVar17;
      *(long **)(puVar19 + 0x24) = uStack_248;
      lVar37 = *(long *)(puVar19 + 0x26);
      *(long **)(puVar19 + 0x26) = plStack_240;
      if (puVar39 != (undefined8 *)0x0) {
        func_0x0412a280(puVar39,lVar37 - (long)puVar39);
      }
LAB_0703be14:
      *(long **)(puVar19 + 0x24) = plVar25;
      uVar7 = *puVar19;
      uVar8 = puVar19[1];
      uVar9 = puVar19[2];
      uVar10 = puVar19[3];
      if (*(long *)(puVar19 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(puVar19 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar25 = plVar16 + 1;
      plVar1 = (long *)plVar20[0xf];
      *(undefined4 *)(plVar20 + 0xe) = uVar7;
      *(undefined4 *)((long)plVar20 + 0x74) = uVar8;
      *(undefined4 *)(plVar20 + 0xf) = uVar9;
      *(undefined4 *)((long)plVar20 + 0x7c) = uVar10;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar38 = plVar1 + 1;
        lVar37 = *plVar38;
        *plVar38 = *plVar38 + -1;
        UNLOCK();
        if (lVar37 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          func_0x0412c2d0(plVar1);
        }
      }
      *(undefined1 *)(plVar20 + 0x10) = *(undefined1 *)((long)puVar19 + 0xa1);
      LOCK();
      lVar37 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        func_0x0412c2d0(plVar16);
        LOCK();
        lVar37 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar37 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
      }
      if (lVar37 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
        LOCK();
        lVar37 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        lVar37 = *(long *)pbVar21;
        *(long *)pbVar21 = *(long *)pbVar21 + -1;
        UNLOCK();
      }
      if (lVar37 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
      }
      return;
    }
  }
  else {
    plVar38 = (long *)((long)puVar5 - (long)puVar4);
    uVar36 = ((long)plVar38 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar36) goto LAB_0703bfef;
    lVar27 = (long)*(undefined4 **)(lVar37 + 200) - (long)puVar4 >> 3;
    uVar29 = lVar27 * -0x6186186186186186;
    if (uVar36 < uVar29) {
      uVar36 = uVar29;
    }
    plStack_260 = (long *)(lVar37 + 0xb8);
    if (0xc30c30c30c30c2 < (ulong)(lVar27 * -0x30c30c30c30c30c3)) {
      uVar36 = 0x186186186186186;
    }
    plStack_238 = plStack_260;
    if (uVar36 == 0) {
      plVar25 = (long *)0x0;
LAB_0703b8a1:
      uStack_250 = (long *)((long)plVar38 + (long)plVar25);
      plStack_240 = plVar25 + uVar36 * 0x15;
      plStack_258 = plVar25;
      uStack_248 = uStack_250;
      func_0x0704e790(uStack_250);
      plVar25 = uStack_248 + 0x15;
      lVar27 = *(long *)(lVar37 + 0xb8);
      lVar35 = *(long *)(lVar37 + 0xc0);
      pbVar30 = (byte *)((lVar27 - lVar35) + (long)uStack_250);
      if (lVar27 != lVar35) {
        lVar37 = 0;
        do {
          uVar14 = ((undefined8 *)(lVar27 + lVar37))[1];
          *(undefined8 *)(pbVar30 + lVar37) = *(undefined8 *)(lVar27 + lVar37);
          *(undefined8 *)(pbVar30 + lVar37 + 8) = uVar14;
          *(undefined8 *)(lVar27 + lVar37) = 0;
          ((undefined8 *)(lVar27 + lVar37))[1] = 0;
          pbVar24 = pbVar30 + lVar37 + 0x20;
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
          pbVar24 = pbVar30 + lVar37 + 0x10;
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
          pbVar24 = pbVar30 + lVar37 + 0x30;
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          *(undefined8 *)(pbVar30 + lVar37 + 0x28) = *(undefined8 *)(lVar27 + 0x28 + lVar37);
          puVar19 = (undefined4 *)(lVar27 + 0x18 + lVar37);
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          pbVar24 = pbVar30 + lVar37 + 0x18;
          *(undefined4 *)pbVar24 = *puVar19;
          *(undefined4 *)(pbVar24 + 4) = uVar7;
          *(undefined4 *)(pbVar24 + 8) = uVar8;
          *(undefined4 *)(pbVar24 + 0xc) = uVar9;
          *(undefined2 *)(lVar27 + 0x18 + lVar37) = 0;
          *(undefined8 *)(pbVar30 + lVar37 + 0x10) = *(undefined8 *)(lVar27 + 0x10 + lVar37);
          func_0x04167a20(pbVar30 + lVar37 + 0x38,lVar27 + lVar37 + 0x38);
          puVar17 = (undefined8 *)(lVar27 + 0x40 + lVar37);
          uVar14 = puVar17[1];
          *(undefined8 *)(pbVar30 + lVar37 + 0x40) = *puVar17;
          *(undefined8 *)(pbVar30 + lVar37 + 0x40 + 8) = uVar14;
          puVar17 = (undefined8 *)(lVar27 + 0x50 + lVar37);
          uVar14 = puVar17[1];
          *(undefined8 *)(pbVar30 + lVar37 + 0x50) = *puVar17;
          *(undefined8 *)(pbVar30 + lVar37 + 0x50 + 8) = uVar14;
          puVar17 = (undefined8 *)(lVar27 + 0x60 + lVar37);
          uVar14 = puVar17[1];
          *(undefined8 *)(pbVar30 + lVar37 + 0x60) = *puVar17;
          *(undefined8 *)(pbVar30 + lVar37 + 0x60 + 8) = uVar14;
          puVar17 = (undefined8 *)(lVar27 + 0x60 + lVar37);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(pbVar30 + lVar37 + 0x70) = *(undefined8 *)(lVar27 + 0x70 + lVar37);
          puVar17 = (undefined8 *)(lVar27 + 0x78 + lVar37);
          uVar14 = puVar17[1];
          *(undefined8 *)(pbVar30 + lVar37 + 0x78) = *puVar17;
          *(undefined8 *)(pbVar30 + lVar37 + 0x78 + 8) = uVar14;
          pbVar24 = pbVar30 + lVar37 + 0x88;
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
          pbVar24 = pbVar30 + lVar37 + 0x98;
          pbVar24[0] = 0;
          pbVar24[1] = 0;
          pbVar24[2] = 0;
          pbVar24[3] = 0;
          pbVar24[4] = 0;
          pbVar24[5] = 0;
          pbVar24[6] = 0;
          pbVar24[7] = 0;
          puVar19 = (undefined4 *)(lVar27 + 0x88 + lVar37);
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          pbVar24 = pbVar30 + lVar37 + 0x88;
          *(undefined4 *)pbVar24 = *puVar19;
          *(undefined4 *)(pbVar24 + 4) = uVar7;
          *(undefined4 *)(pbVar24 + 8) = uVar8;
          *(undefined4 *)(pbVar24 + 0xc) = uVar9;
          *(undefined8 *)(pbVar30 + lVar37 + 0x98) = *(undefined8 *)(lVar27 + 0x98 + lVar37);
          puVar17 = (undefined8 *)(lVar27 + 0x88 + lVar37);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined8 *)(lVar27 + 0x98 + lVar37) = 0;
          *(undefined2 *)(pbVar30 + lVar37 + 0xa0) = *(undefined2 *)(lVar27 + 0xa0 + lVar37);
          lVar33 = lVar27 + lVar37;
          lVar37 = lVar37 + 0xa8;
        } while (lVar33 + 0xa8 != lVar35);
        do {
          func_0x0703d230(lVar27);
          lVar27 = lVar27 + 0xa8;
        } while (lVar27 != lVar35);
        lVar27 = *plStack_260;
        lVar37 = lStack_100;
      }
      plVar20 = plStack_1d0;
      *(byte **)(lVar37 + 0xb8) = pbVar30;
      *(long **)(lVar37 + 0xc0) = plVar25;
      lVar35 = *(long *)(lVar37 + 200);
      *(long **)(lVar37 + 200) = plStack_240;
      if (lVar27 != 0) {
        func_0x0412a280(lVar27,lVar35 - lVar27);
      }
      goto LAB_0703ba7d;
    }
    if (uVar36 < 0x186186186186187) {
      plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0xa8);
      if (plVar25 == (long *)0x0) {
        FUN_0eec74c0(uVar36 * 0xa8,0);
        plVar25 = (long *)0x0;
      }
      goto LAB_0703b8a1;
    }
LAB_0703bfe5:
    plStack_260 = plVar25;
    func_0x04882eb0();
  }
  func_0x0704e9d0();
LAB_0703bfef:
  uStack_278 = func_0x0704e900();
  if ((*pbVar30 & 1) != 0) {
    func_0x0412a280(plVar38[3],plVar38[1] & 0xfffffffffffffffe);
  }
  func_0x0704e910(&plStack_258);
  func_0x0703d390(plVar16);
  plVar16 = plStack_1d0;
  func_0x0703eb80(plStack_1d0);
  func_0x0703ebb0(plVar16);
  do {
    uStack_278 = func_0x0eee2d70(uStack_278);
    func_0x07045b80(plStack_170);
    if (pbVar21 != (byte *)0x0) {
      LOCK();
      lVar37 = *plStack_160;
      *plStack_160 = *plStack_160 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
        func_0x0412c2d0(pbVar21);
      }
      LOCK();
      lVar37 = *plStack_160;
      *plStack_160 = *plStack_160 + -1;
      UNLOCK();
      if (lVar37 == 0) {
        (**(code **)(*(long *)pbVar21 + 0x10))(pbVar21);
        func_0x0412c2d0(pbVar21);
      }
    }
    if (plStack_158 != (long *)0x0) {
      (*(code *)plStack_158[1])(&plStack_158);
    }
    if (((uint)auStack_1c0 & 1) != 0) {
      func_0x0412a280(puStack_1b0,
                      CONCAT26(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,auStack_1c0))) &
                      0xfffffffffffffffe);
    }
    if (*plStack_118 != 0) {
      (**(code **)(*plStack_118 + 8))(plStack_118);
    }
    func_0x07040c10(plStack_260);
    while( true ) {
      if (puStack_f8 != (undefined8 *)0x0) {
        (*(code *)puStack_f8[1])(&puStack_f8);
      }
      plVar16 = plStack_1d0;
      func_0x0412c1f0(plStack_1d0);
      func_0x0412a280(plVar16,0x200);
      if (puStack_b8 == (undefined8 *)0x0) break;
      (*(code *)puStack_b8[1])(&puStack_b8);
      func_0x0eee2d70(uStack_278);
      func_0x0412a280(plStack_1d0[8],plStack_1d0[6] & 0xfffffffffffffffe);
      if (puStack_78 != (undefined8 *)0x0) {
        (*(code *)puStack_78[1])(&puStack_78);
      }
    }
  } while( true );
}



/* ---- referenced strings ----
 * 0x1494d5d  <any array element>
 */
