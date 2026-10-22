/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4e71cc0 (ELF vaddr 0x4d71cc0)
 * Label: caller-of-callee
 * Body:  [[04e71cc0, 04e72b85] [04e72b90, 04e73155] [04e73160, 04e7319e] [04e731a0, 04e74f4a] [04e7565e, 04e75691] [04e75759, 04e75772] [04e75adf, 04e75b40] [04e75bf8, 04e75c0b]]
 * Ghidra: FUN_04e71cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04e71cc0(long param_1,long *param_2)

{
  long *plVar1;
  long **pplVar2;
  uint *puVar3;
  undefined8 **ppuVar4;
  long lVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined4 *puVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  long *plVar32;
  undefined8 *puVar33;
  byte *pbVar34;
  long lVar35;
  ulong uVar36;
  undefined *puVar37;
  undefined8 *puVar38;
  long lVar39;
  bool bVar40;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long **pplStack_4a8;
  byte *pbStack_480;
  long lStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long *plStack_448;
  byte bStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined1 uStack_437;
  undefined6 uStack_436;
  undefined8 uStack_430;
  long **pplStack_428;
  long *plStack_408;
  undefined8 uStack_400;
  byte bStack_3f8;
  undefined4 uStack_3f7;
  undefined2 uStack_3f3;
  undefined1 uStack_3f1;
  undefined1 uStack_3f0;
  undefined4 uStack_3ef;
  undefined2 uStack_3eb;
  undefined1 uStack_3e9;
  undefined1 uStack_3e8;
  undefined1 uStack_3e7;
  undefined6 uStack_3e6;
  undefined8 uStack_3e0;
  uint *puStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  uint *puStack_2e8;
  byte bStack_2e0;
  undefined1 uStack_2df;
  undefined1 uStack_2de;
  undefined5 uStack_2dd;
  undefined8 uStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [4];
  long *plStack_298;
  long *plStack_288;
  undefined8 uStack_280;
  long alStack_278 [4];
  long *plStack_258;
  long *plStack_248;
  undefined8 uStack_240;
  long *aplStack_238 [4];
  long **pplStack_218;
  long *plStack_208;
  undefined8 uStack_200;
  long alStack_1f8 [4];
  long *plStack_1d8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 uStack_1b0;
  undefined4 uStack_1af;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  long *aplStack_188 [4];
  long **pplStack_168;
  undefined *puStack_158;
  undefined8 uStack_150;
  long *aplStack_148 [4];
  long **pplStack_128;
  undefined1 uStack_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  long *plStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_3e6 = 0;
  uStack_3e0 = 0;
  bStack_3f8 = 0x22;
  uStack_3f7 = _DAT_014c903f;
  uStack_3f3 = (undefined2)_UNK_014c9043;
  uStack_3f1 = (undefined1)((uint)_UNK_014c9043 >> 0x10);
  uStack_3f0 = (undefined1)((uint)_UNK_014c9043 >> 0x18);
  uStack_3ef = _UNK_014c9047;
  uStack_3eb = (undefined2)_UNK_014c904b;
  uStack_3e9 = (undefined1)((uint)_UNK_014c904b >> 0x10);
  uStack_3e8 = (undefined1)((uint)_UNK_014c904b >> 0x18);
  uStack_3e7 = 0x65;
  uStack_400 = 0x46798423f7810f9e;
  plVar25 = (long *)param_2[4];
  if (plVar25 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e71db4:
    plStack_1d8 = (long *)0x0;
LAB_04e71dc0:
    uStack_200 = 0;
    plStack_208 = (long *)&UNK_0ef86ea0;
LAB_04e71dcf:
    uStack_43f = 0;
    bStack_440 = 0;
    plStack_448 = (long *)0x0;
    (*(code *)*plStack_208)(&plStack_208,&plStack_448);
    plVar25 = plStack_208;
  }
  else {
    if (plVar25 == param_2) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar25 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar25 + 0x10))();
    }
    plStack_1d8 = plStack_458;
    uStack_200 = 0;
    plStack_208 = (long *)&UNK_0ef86ea0;
    if (plStack_458 == (long *)0x0) goto LAB_04e71db4;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e71dc0;
    }
    plStack_1d8 = alStack_1f8;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    bStack_440 = 0;
    uStack_43f = 0;
    if (plStack_208 != (long *)0x0) goto LAB_04e71dcf;
    plVar25 = (long *)0x0;
  }
  plStack_208 = (long *)0x0;
  plStack_448 = plVar25;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef86cd0;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar25 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar25)(&plStack_448,&plStack_4c8);
    plStack_4c8 = plStack_448;
  }
  plStack_448 = (long *)0x0;
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&uStack_1b0,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0ef86d20;
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar21[0x36] = 0;
    plVar21[0x37] = 0;
    pbStack_480 = (byte *)(plVar21 + 0x12);
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar21 + 0x2e);
    plVar25 = plStack_4c8;
    pbStack_480 = (byte *)(plVar21 + 0x12);
    plStack_4c8 = (long *)0x0;
    plVar21[0x2e] = (long)plVar25;
    plVar21[0x36] = 0;
    plVar21[0x37] = 0;
    if ((*(byte *)(plVar21 + 0x12) & 1) != 0) {
      func_0x0412a280(plVar21[0x14],plVar21[0x12] & 0xfffffffffffffffe);
    }
  }
  plVar25 = plVar21 + 4;
  *(undefined2 *)(plVar21 + 0x12) = 0x6324;
  uVar15 = _UNK_012a3e21;
  uVar14 = _UNK_012a3e1d;
  uVar13 = _UNK_012a3e19;
  *(undefined4 *)((long)plVar21 + 0x92) = _DAT_012a3e15;
  *(undefined4 *)((long)plVar21 + 0x96) = uVar13;
  *(undefined4 *)((long)plVar21 + 0x9a) = uVar14;
  *(undefined4 *)((long)plVar21 + 0x9e) = uVar15;
  *(undefined2 *)((long)plVar21 + 0xa2) = 0x6e;
  *(undefined4 *)((long)plVar21 + 0xa4) = 0;
  plVar21[0x11] = 0x601977ec4d12d34a;
  plVar21[0x15] = 0;
  plStack_408 = param_2;
  if ((DAT_0f6b5120 == '\0') && (iVar20 = func_0x04108328(&DAT_0f6b5120), iVar20 != 0)) {
    func_0x0b6924c0();
    func_0x0eee2f40(&SUB_04b21360,&DAT_0f6b5110,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5120);
  }
  lVar9 = _DAT_0f6b5118;
  lVar24 = _DAT_0f6b5110;
  if (_DAT_0f6b5118 != 0) {
    LOCK();
    *(long *)(_DAT_0f6b5118 + 8) = *(long *)(_DAT_0f6b5118 + 8) + 1;
    UNLOCK();
  }
  plVar21[0x36] = lVar24;
  plVar31 = (long *)plVar21[0x37];
  plVar21[0x37] = lVar9;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar22 = plVar31 + 1;
    lVar24 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  plVar31 = plVar21 + 1;
  if (plStack_448 != (long *)0x0) {
    (*(code *)plStack_448[1])(&plStack_448);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0ef86e00;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0ef86e50;
  plVar22[0xe] = (long)plVar25;
  plVar22[0xf] = (long)plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar22 + 4;
  plStack_4c0 = plVar22;
  puVar23 = (undefined4 *)func_0x04e7aec0(param_1,&uStack_400,1);
  pbVar26 = (byte *)(plVar21 + 0x11);
  pbVar34 = *(byte **)(puVar23 + 0x24);
  if (pbVar34 < *(byte **)(puVar23 + 0x26)) {
    pbVar34[0x10] = 0;
    pbVar34[0x11] = 0;
    pbVar34[0x12] = 0;
    pbVar34[0x13] = 0;
    pbVar34[0x14] = 0;
    pbVar34[0x15] = 0;
    pbVar34[0x16] = 0;
    pbVar34[0x17] = 0;
    pbVar34[0x18] = 0;
    pbVar34[0x19] = 0;
    pbVar34[0x1a] = 0;
    pbVar34[0x1b] = 0;
    pbVar34[0x1c] = 0;
    pbVar34[0x1d] = 0;
    pbVar34[0x1e] = 0;
    pbVar34[0x1f] = 0;
    pbVar34[0] = 0;
    pbVar34[1] = 0;
    pbVar34[2] = 0;
    pbVar34[3] = 0;
    pbVar34[4] = 0;
    pbVar34[5] = 0;
    pbVar34[6] = 0;
    pbVar34[7] = 0;
    pbVar34[8] = 0;
    pbVar34[9] = 0;
    pbVar34[10] = 0;
    pbVar34[0xb] = 0;
    pbVar34[0xc] = 0;
    pbVar34[0xd] = 0;
    pbVar34[0xe] = 0;
    pbVar34[0xf] = 0;
    pbVar34[0x20] = 0;
    pbVar34[0x21] = 0;
    pbVar34[0x22] = 0;
    pbVar34[0x23] = 0;
    pbVar34[0x24] = 0;
    pbVar34[0x25] = 0;
    pbVar34[0x26] = 0;
    pbVar34[0x27] = 0;
    if (pbVar34 != pbVar26) {
      if ((*pbStack_480 & 1) == 0) {
        *(undefined8 *)(pbVar34 + 0x18) = *(undefined8 *)(pbStack_480 + 0x10);
        uVar28 = *(undefined8 *)(pbStack_480 + 8);
        *(undefined8 *)(pbVar34 + 8) = *(undefined8 *)pbStack_480;
        *(undefined8 *)(pbVar34 + 0x10) = uVar28;
      }
      else {
        pbStack_480 = pbVar26;
        func_0x04885070(pbVar34 + 8,plVar21[0x14],plVar21[0x13]);
        pbVar26 = pbStack_480;
      }
    }
    *(undefined8 *)pbVar34 = *(undefined8 *)pbVar26;
    *(long **)(pbVar34 + 0x28) = plVar22 + 4;
    *(long **)(pbVar34 + 0x30) = plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    pbVar34 = pbVar34 + 0x38;
    *(byte **)(puVar23 + 0x24) = pbVar34;
  }
  else {
    pbVar34 = (byte *)func_0x04e7ccf0(puVar23 + 0x22,pbVar26,&plStack_4c8);
  }
  *(byte **)(puVar23 + 0x24) = pbVar34;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar14;
  *(undefined4 *)(plVar21 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar16;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar32 = plVar22 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  plVar22 = plStack_4c0;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4c0 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar24 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  uStack_308 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0;
  (**(code **)(*plVar25 + 0x10))(plVar25,&uStack_308);
  if ((uStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
  }
  if (plStack_208 != (long *)0x0) {
    (*(code *)plStack_208[1])(&plStack_208);
  }
  if (plStack_458 == &lStack_478) {
    lVar24 = 0x20;
LAB_04e723fa:
    (**(code **)(*plStack_458 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (plStack_458 != (long *)0x0) goto LAB_04e723fa;
  }
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_3e6,CONCAT11(uStack_3e7,uStack_3e8)),
                    CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT41(uStack_3f7,bStack_3f8))) &
                    0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  lStack_478 = 0;
  uStack_470 = 0;
  plStack_458 = (long *)0x0;
  FUN_0412f5e0(&uStack_470,&UNK_0135b9d9,0x1a);
  lStack_478 = 0x11d992ee132cac2c;
  plStack_f8 = (long *)0x0;
  uStack_f0 = 0;
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0ef86ec8;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plStack_f8 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_f8)(&plStack_f8,&plStack_4c8);
    plStack_4c8 = plStack_f8;
  }
  plStack_f8 = (long *)0x0;
  plVar25[4] = (long)&UNK_0f2ccd78;
  plVar25[5] = 0;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[10] = 0;
  plVar25[0xb] = 0;
  plVar25[0xc] = 0;
  *(undefined1 *)(plVar25 + 0xd) = 0;
  func_0x04aa75f0(plVar25 + 0xe,&plStack_448,&UNK_01254d89);
  *(undefined1 *)(plVar25 + 0x10) = 0;
  plVar21 = plVar25 + 0x11;
  plVar25[0x11] = 0;
  plVar25[0x12] = 0;
  plVar25[0x13] = 0;
  plVar25[0x14] = 0;
  plVar25[0x15] = 0;
  plVar25[0x16] = 0;
  plVar25[0x17] = 0xffffffff;
  plVar25[0x26] = 0;
  plVar25[0x27] = 0;
  plVar25[0x18] = 0;
  plVar25[0x19] = 0;
  plVar25[0x1a] = 0;
  plVar25[0x1b] = 0;
  plVar25[0x1c] = 0;
  plVar25[0x1d] = 0;
  plVar25[0x1e] = 0;
  plVar25[0x1f] = 0;
  plVar25[4] = (long)&UNK_0ef86f18;
  pplVar2 = (long **)(plVar25 + 0x2e);
  plVar25[0x2e] = 0;
  plVar25[0x2f] = 0;
  if (pplVar2 != &plStack_4c8) {
    if (plStack_4c8 == (long *)0x0) {
      plVar31 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_4c8)(&plStack_4c8,pplVar2);
      plVar31 = plStack_4c8;
    }
    plStack_4c8 = (long *)0x0;
    *pplVar2 = plVar31;
  }
  puVar3 = (uint *)(plVar25 + 0x12);
  if (plVar21 != (long *)&DAT_0f551f58) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar25[0x14] = _DAT_0f551f70;
        uVar15 = uRam000000000f551f6c;
        uVar14 = _DAT_0f551f68;
        uVar13 = uRam000000000f551f64;
        *puVar3 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar25 + 0x94) = uVar13;
        *(undefined4 *)(plVar25 + 0x13) = uVar14;
        *(undefined4 *)((long)plVar25 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar40 = (_DAT_0f551f60 & 1) != 0;
      lVar24 = 0xf551f61;
      if (bVar40) {
        lVar24 = _DAT_0f551f70;
      }
      uVar36 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar40) {
        uVar36 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar3,lVar24,uVar36);
    }
  }
  plVar31 = plVar25 + 1;
  plVar25[0x11] = _DAT_0f551f58;
  plVar25[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0ef87010;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0ef87060;
  plVar22[0xe] = (long)(plVar25 + 4);
  plVar22[0xf] = (long)plVar25;
  LOCK();
  plVar25[1] = plVar25[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar22 + 4;
  plStack_4c0 = plVar22;
  puVar23 = (undefined4 *)func_0x04e7aec0(param_1,&lStack_478,0);
  plVar32 = *(long **)(puVar23 + 0x24);
  if (plVar32 < *(long **)(puVar23 + 0x26)) {
    plVar32[2] = 0;
    plVar32[3] = 0;
    *plVar32 = 0;
    plVar32[1] = 0;
    plVar32[4] = 0;
    if (plVar32 != plVar21) {
      if ((*puVar3 & 1) == 0) {
        plVar32[3] = plVar25[0x14];
        lVar24 = plVar25[0x13];
        plVar32[1] = *(long *)puVar3;
        plVar32[2] = lVar24;
      }
      else {
        func_0x04885070(plVar32 + 1,plVar25[0x14],plVar25[0x13]);
      }
    }
    *plVar32 = *plVar21;
    plVar32[5] = (long)(plVar22 + 4);
    plVar32[6] = (long)plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    plVar32 = plVar32 + 7;
    *(long **)(puVar23 + 0x24) = plVar32;
  }
  else {
    plVar32 = (long *)func_0x04e7ccf0(puVar23 + 0x22,plVar21,&plStack_4c8);
  }
  plVar21 = plStack_408;
  *(long **)(puVar23 + 0x24) = plVar32;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar22 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar22 = *plVar22 + 1;
    UNLOCK();
  }
  plVar22 = (long *)plVar25[0xf];
  *(undefined4 *)(plVar25 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar25 + 0x74) = uVar14;
  *(undefined4 *)(plVar25 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar25 + 0x7c) = uVar16;
  if (plVar22 != (long *)0x0) {
    LOCK();
    plVar32 = plVar22 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      func_0x0412c2d0(plVar22);
    }
  }
  plVar22 = plStack_4c0;
  *(undefined1 *)(plVar25 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4c0 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar22);
    }
  }
  LOCK();
  lVar24 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar24 == 0) goto LAB_04e727d2;
LAB_04e72791:
    plVar31 = (long *)plVar21[4];
    if (plVar31 != (long *)0x0) goto LAB_04e7279a;
LAB_04e727ed:
    pplStack_428 = (long **)0x0;
    uStack_240 = 0;
    plStack_248 = (long *)&UNK_0ef87300;
    pplStack_218 = (long **)0x0;
  }
  else {
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_04e72791;
LAB_04e727d2:
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
    plVar31 = (long *)plVar21[4];
    if (plVar31 == (long *)0x0) goto LAB_04e727ed;
LAB_04e7279a:
    if (plVar31 == plVar21) {
      pplStack_428 = &plStack_448;
      (**(code **)(*plVar31 + 0x18))(plVar31,&plStack_448);
    }
    else {
      pplStack_428 = (long **)(**(code **)(*plVar31 + 0x10))();
    }
    pplStack_218 = pplStack_428;
    uStack_240 = 0;
    plStack_248 = (long *)&UNK_0ef87300;
    if (pplStack_428 == (long **)0x0) {
      pplStack_218 = (long **)0x0;
    }
    else if (pplStack_428 == &plStack_448) {
      pplStack_218 = aplStack_238;
      (*(code *)(*pplStack_428)[3])(pplStack_428);
    }
    else {
      pplStack_428 = (long **)0x0;
    }
  }
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef870c0;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plStack_248 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_248)(&plStack_248,&plStack_4c8);
    plStack_4c8 = plStack_248;
  }
  plStack_248 = (long *)0x0;
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&uStack_400,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar31 = plVar21 + 0x11;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0ef87110;
  pplVar2 = (long **)(plVar21 + 0x2e);
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  *(undefined1 *)(plVar21 + 0x36) = 0;
  if (pplVar2 != &plStack_4c8) {
    if (plStack_4c8 == (long *)0x0) {
      plVar22 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_4c8)(&plStack_4c8,pplVar2);
      plVar22 = plStack_4c8;
    }
    plStack_4c8 = (long *)0x0;
    *pplVar2 = plVar22;
  }
  plVar22 = plVar21 + 4;
  puStack_2e8 = (uint *)(plVar21 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puStack_2e8 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar21[0x14] = _DAT_0f552120;
        uVar15 = uRam000000000f55211c;
        uVar14 = _DAT_0f552118;
        uVar13 = uRam000000000f552114;
        *puStack_2e8 = _DAT_0f552110;
        *(undefined4 *)((long)plVar21 + 0x94) = uVar13;
        *(undefined4 *)(plVar21 + 0x13) = uVar14;
        *(undefined4 *)((long)plVar21 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(puStack_2e8,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar40 = (_DAT_0f552110 & 1) != 0;
      lVar24 = 0xf552111;
      if (bVar40) {
        lVar24 = _DAT_0f552120;
      }
      uVar36 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar40) {
        uVar36 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puStack_2e8,lVar24,uVar36);
    }
  }
  plVar32 = plVar21 + 1;
  plVar21[0x11] = _DAT_0f552108;
  plVar21[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  LOCK();
  *plVar32 = *plVar32 + 1;
  UNLOCK();
  plStack_1b8 = plVar32;
  pbVar34 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (pbVar34 == (byte *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  *(long *)((long)pbVar34 + 8) = 0;
  *(long *)((long)pbVar34 + 0x10) = 0;
  *(undefined **)pbVar34 = &UNK_0ef87208;
  *(long *)((long)pbVar34 + 0x30) = 0;
  *(long *)((long)pbVar34 + 0x38) = 0;
  *(undefined **)((long)pbVar34 + 0x20) = &UNK_0ef87258;
  *(long **)((long)pbVar34 + 0x70) = plVar22;
  *(long **)((long)pbVar34 + 0x78) = plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  puStack_3d8 = (uint *)((long)pbVar34 + 8);
  puVar8 = (undefined4 *)plVar25[0x1c];
  puVar7 = (undefined4 *)plVar25[0x1b];
  for (puVar23 = puVar7; pbStack_480 = pbVar34, plStack_1c0 = plVar22, puVar23 != puVar8;
      puVar23 = puVar23 + 0x2a) {
    if ((*(long *)(puVar23 + 0x1e) == 0) &&
       (plVar32 = (long *)pbVar34, *(long *)(puVar23 + 0x20) == -1)) goto LAB_04e72ecc;
  }
  if ((undefined4 *)plVar25[0x1d] <= puVar8) {
    plVar22 = (long *)((long)puVar8 - (long)puVar7);
    puVar23 = (undefined4 *)(((long)plVar22 >> 3) * -0x30c30c30c30c30c3 + 1);
    if ((undefined4 *)0x186186186186186 < puVar23) goto LAB_04e74f11;
    plVar32 = plVar25 + 0x1b;
    lVar24 = plVar25[0x1d] - (long)puVar7 >> 3;
    puVar7 = (undefined4 *)(lVar24 * -0x6186186186186186);
    if (puVar23 < puVar7) {
      puVar23 = puVar7;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar24 * -0x30c30c30c30c30c3)) {
      puVar23 = (undefined4 *)0x186186186186186;
    }
    pplStack_4a8 = (long **)plVar32;
    if (puVar23 == (undefined4 *)0x0) {
      plVar29 = (long *)0x0;
LAB_04e72c80:
      plStack_4c0 = (long *)((long)plVar22 + (long)plVar29);
      plStack_4b0 = plVar29 + (long)puVar23 * 0x15;
      plStack_4c8 = plVar29;
      plStack_4b8 = plStack_4c0;
      plStack_3d0 = plVar32;
      func_0x04e86cb0(plStack_4c0);
      plVar22 = plStack_4b8 + 0x15;
      lVar24 = plVar25[0x1b];
      lVar9 = plVar25[0x1c];
      lVar39 = (lVar24 - lVar9) + (long)plStack_4c0;
      if (lVar24 != lVar9) {
        lVar35 = 0;
        do {
          uVar28 = ((undefined8 *)(lVar24 + lVar35))[1];
          *(undefined8 *)(lVar39 + lVar35) = *(undefined8 *)(lVar24 + lVar35);
          ((undefined8 *)(lVar39 + lVar35))[1] = uVar28;
          *(undefined8 *)(lVar24 + lVar35) = 0;
          ((undefined8 *)(lVar24 + lVar35))[1] = 0;
          puVar30 = (undefined8 *)(lVar39 + 0x20 + lVar35);
          *puVar30 = 0;
          puVar30[1] = 0;
          puVar30 = (undefined8 *)(lVar39 + 0x10 + lVar35);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar39 + 0x30 + lVar35) = 0;
          *(undefined8 *)(lVar39 + 0x28 + lVar35) = *(undefined8 *)(lVar24 + 0x28 + lVar35);
          puVar23 = (undefined4 *)(lVar24 + 0x18 + lVar35);
          uVar13 = puVar23[1];
          uVar14 = puVar23[2];
          uVar15 = puVar23[3];
          puVar7 = (undefined4 *)(lVar39 + 0x18 + lVar35);
          *puVar7 = *puVar23;
          puVar7[1] = uVar13;
          puVar7[2] = uVar14;
          puVar7[3] = uVar15;
          *(undefined2 *)(lVar24 + 0x18 + lVar35) = 0;
          *(undefined8 *)(lVar39 + 0x10 + lVar35) = *(undefined8 *)(lVar24 + 0x10 + lVar35);
          func_0x04167a20(lVar39 + lVar35 + 0x38,lVar24 + lVar35 + 0x38);
          puVar30 = (undefined8 *)(lVar24 + 0x40 + lVar35);
          uVar28 = puVar30[1];
          puVar38 = (undefined8 *)(lVar39 + 0x40 + lVar35);
          *puVar38 = *puVar30;
          puVar38[1] = uVar28;
          puVar30 = (undefined8 *)(lVar24 + 0x50 + lVar35);
          uVar28 = puVar30[1];
          puVar38 = (undefined8 *)(lVar39 + 0x50 + lVar35);
          *puVar38 = *puVar30;
          puVar38[1] = uVar28;
          puVar30 = (undefined8 *)(lVar24 + 0x60 + lVar35);
          uVar28 = puVar30[1];
          puVar38 = (undefined8 *)(lVar39 + 0x60 + lVar35);
          *puVar38 = *puVar30;
          puVar38[1] = uVar28;
          puVar30 = (undefined8 *)(lVar24 + 0x60 + lVar35);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar39 + 0x70 + lVar35) = *(undefined8 *)(lVar24 + 0x70 + lVar35);
          puVar30 = (undefined8 *)(lVar24 + 0x78 + lVar35);
          uVar28 = puVar30[1];
          puVar38 = (undefined8 *)(lVar39 + 0x78 + lVar35);
          *puVar38 = *puVar30;
          puVar38[1] = uVar28;
          puVar30 = (undefined8 *)(lVar39 + 0x88 + lVar35);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar39 + 0x98 + lVar35) = 0;
          puVar23 = (undefined4 *)(lVar24 + 0x88 + lVar35);
          uVar13 = puVar23[1];
          uVar14 = puVar23[2];
          uVar15 = puVar23[3];
          puVar7 = (undefined4 *)(lVar39 + 0x88 + lVar35);
          *puVar7 = *puVar23;
          puVar7[1] = uVar13;
          puVar7[2] = uVar14;
          puVar7[3] = uVar15;
          *(undefined8 *)(lVar39 + 0x98 + lVar35) = *(undefined8 *)(lVar24 + 0x98 + lVar35);
          puVar30 = (undefined8 *)(lVar24 + 0x88 + lVar35);
          *puVar30 = 0;
          puVar30[1] = 0;
          *(undefined8 *)(lVar24 + 0x98 + lVar35) = 0;
          *(undefined2 *)(lVar39 + 0xa0 + lVar35) = *(undefined2 *)(lVar24 + 0xa0 + lVar35);
          lVar5 = lVar24 + lVar35;
          lVar35 = lVar35 + 0xa8;
        } while (lVar5 + 0xa8 != lVar9);
        do {
          func_0x04e82800(lVar24);
          lVar24 = lVar24 + 0xa8;
        } while (lVar24 != lVar9);
        lVar24 = *plStack_3d0;
      }
      pbVar34 = pbStack_480;
      plVar25[0x1b] = lVar39;
      plVar25[0x1c] = (long)plVar22;
      lVar9 = plVar25[0x1d];
      plVar25[0x1d] = (long)plStack_4b0;
      if (lVar24 != 0) {
        func_0x0412a280(lVar24,lVar9 - lVar24);
      }
      goto LAB_04e72e5d;
    }
    plVar29 = plVar21;
    if (puVar23 < (undefined4 *)0x186186186186187) {
      plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar23 * 0xa8);
      if (plVar29 == (long *)0x0) {
        func_0x0eec74c0((long)puVar23 * 0xa8,0);
        plVar29 = (long *)0x0;
      }
      goto LAB_04e72c80;
    }
LAB_04e74f07:
    func_0x04882eb0();
LAB_04e74f0c:
    func_0x04e86ef0();
    pbVar34 = (byte *)plVar32;
    plVar21 = plVar29;
LAB_04e74f11:
    uVar28 = func_0x04e86e20();
    FUN_041084d6(&DAT_0f6b5120);
    func_0x04b21360(plVar21);
    if (*plVar22 != 0) {
      (**(code **)(*plVar22 + 8))(plVar22);
    }
    func_0x04e80d60(puVar23);
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
    func_0x0412c1f0(pbVar34);
    func_0x0412a280(pbVar34,0x1c0);
    if (plStack_448 != (long *)0x0) {
      (*(code *)plStack_448[1])(&plStack_448);
    }
    if (plStack_208 != (long *)0x0) {
      (*(code *)plStack_208[1])(&plStack_208);
    }
    lVar24 = 0x20;
    if ((plStack_458 == &lStack_478) || (lVar24 = 0x28, plStack_458 != (long *)0x0)) {
      (**(code **)(*plStack_458 + lVar24))();
    }
    if ((bStack_3f8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_3e6,CONCAT11(uStack_3e7,uStack_3e8)),
                      CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT41(uStack_3f7,bStack_3f8))) &
                      0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar28);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  func_0x04e86cb0(puVar8);
  plVar22 = (long *)(puVar8 + 0x2a);
  plVar25[0x1c] = (long)plVar22;
LAB_04e72e5d:
  plVar25[0x1c] = (long)plVar22;
  pbVar26 = (byte *)plVar22[-0x15];
  if ((*pbVar26 & 1) == 0) {
    *pbVar26 = 0x26;
    pbVar26 = pbVar26 + 1;
  }
  else {
    pbVar26[8] = 0x13;
    pbVar26[9] = 0;
    pbVar26[10] = 0;
    pbVar26[0xb] = 0;
    pbVar26[0xc] = 0;
    pbVar26[0xd] = 0;
    pbVar26[0xe] = 0;
    pbVar26[0xf] = 0;
    pbVar26 = *(byte **)(pbVar26 + 0x10);
  }
  uVar15 = _UNK_01494d69;
  uVar14 = _UNK_01494d65;
  uVar13 = _UNK_01494d61;
  *(undefined4 *)pbVar26 = _DAT_01494d5d;
  *(undefined4 *)(pbVar26 + 4) = uVar13;
  *(undefined4 *)(pbVar26 + 8) = uVar14;
  *(undefined4 *)(pbVar26 + 0xc) = uVar15;
  pbVar26[0xf] = 0x65;
  pbVar26[0x10] = 0x6e;
  pbVar26[0x11] = 0x74;
  pbVar26[0x12] = 0x3e;
  pbVar26[0x13] = 0;
  lVar24 = plVar25[0x1c];
  puVar23 = (undefined4 *)(lVar24 - 0xa8);
  *(char *)(lVar24 + -7) = (char)plVar25[0x10];
  *(undefined8 *)(lVar24 + -0x30) = 0;
  *(undefined8 *)(lVar24 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar24 + -8) = 0;
  plVar32 = (long *)pbVar34;
LAB_04e72ecc:
  plVar22 = plVar32 + 4;
  plVar29 = *(long **)(puVar23 + 0x24);
  if (plVar29 < *(long **)(puVar23 + 0x26)) {
    plVar29[2] = 0;
    plVar29[3] = 0;
    *plVar29 = 0;
    plVar29[1] = 0;
    plVar29[4] = 0;
    if (plVar29 != plVar31) {
      if ((*puStack_2e8 & 1) == 0) {
        plVar29[3] = *(long *)(puStack_2e8 + 4);
        lVar24 = *(long *)(puStack_2e8 + 2);
        plVar29[1] = *(long *)puStack_2e8;
        plVar29[2] = lVar24;
      }
      else {
        func_0x04885070(plVar29 + 1,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar29 = *plVar31;
    plVar29[5] = (long)plVar22;
    plVar29[6] = (long)plVar32;
    LOCK();
    plVar32[1] = plVar32[1] + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    *(long **)(puVar23 + 0x24) = plVar29;
  }
  else {
    plVar29 = (long *)((long)plVar29 - *(long *)(puVar23 + 0x22));
    uVar36 = ((long)plVar29 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar36) goto LAB_04e74f0c;
    lVar24 = (long)*(long **)(puVar23 + 0x26) - *(long *)(puVar23 + 0x22) >> 3;
    uVar12 = lVar24 * -0x2492492492492492;
    if (uVar36 < uVar12) {
      uVar36 = uVar12;
    }
    plVar25 = (long *)(puVar23 + 0x22);
    if (0x249249249249248 < (ulong)(lVar24 * 0x6db6db6db6db6db7)) {
      uVar36 = 0x492492492492492;
    }
    pplStack_4a8 = (long **)plVar25;
    plStack_3d0 = plVar22;
    if (uVar36 == 0) {
      plVar22 = (long *)0x0;
    }
    else {
      if (0x492492492492492 < uVar36) goto LAB_04e74f07;
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar36 * 0x38);
      if (plVar22 == (long *)0x0) {
        func_0x0eec74c0(uVar36 * 0x38,0);
        plVar22 = (long *)0x0;
      }
    }
    plVar32 = (long *)((long)plVar22 + (long)plVar29);
    plStack_4b0 = plVar22 + uVar36 * 7;
    *(undefined8 *)((long)(plVar22 + 2) + (long)plVar29) = 0;
    ((undefined8 *)((long)(plVar22 + 2) + (long)plVar29))[1] = 0;
    *(undefined8 *)((long)plVar22 + (long)plVar29) = 0;
    ((undefined8 *)((long)plVar22 + (long)plVar29))[1] = 0;
    *(undefined8 *)((long)(plVar22 + 4) + (long)plVar29) = 0;
    plStack_4b8 = plVar32;
    plStack_4c8 = plVar22;
    plStack_4c0 = plVar32;
    if (plVar32 != plVar31) {
      puVar37 = (undefined *)((long)plVar29 + (long)plVar22);
      if ((*puStack_2e8 & 1) == 0) {
        *(undefined8 *)(puVar37 + 0x18) = *(undefined8 *)(puStack_2e8 + 4);
        uVar17 = puStack_2e8[1];
        uVar18 = puStack_2e8[2];
        uVar19 = puStack_2e8[3];
        *(uint *)(puVar37 + 8) = *puStack_2e8;
        *(uint *)(puVar37 + 0xc) = uVar17;
        *(uint *)(puVar37 + 0x10) = uVar18;
        *(uint *)(puVar37 + 0x14) = uVar19;
      }
      else {
        func_0x04885070(puVar37 + 8,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar32 = *plVar31;
    plVar32[5] = (long)plStack_3d0;
    plVar32[6] = (long)pbStack_480;
    LOCK();
    *(long *)((long)pbStack_480 + 8) = *(long *)((long)pbStack_480 + 8) + 1;
    UNLOCK();
    plStack_4b8 = plStack_4b8 + 7;
    puVar38 = *(undefined8 **)(puVar23 + 0x22);
    puVar10 = *(undefined8 **)(puVar23 + 0x24);
    puVar30 = (undefined8 *)((long)plStack_4c0 + ((long)puVar38 - (long)puVar10));
    puVar27 = puVar30;
    puVar33 = puVar38;
    if ((long)puVar38 - (long)puVar10 != 0) {
      do {
        puVar27[2] = 0;
        puVar27[3] = 0;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27[4] = 0;
        puVar27[3] = puVar33[3];
        uVar28 = puVar33[2];
        puVar27[1] = puVar33[1];
        puVar27[2] = uVar28;
        *(undefined2 *)(puVar33 + 1) = 0;
        *puVar27 = *puVar33;
        uVar28 = puVar33[6];
        puVar27[5] = puVar33[5];
        puVar27[6] = uVar28;
        puVar33[5] = 0;
        puVar33[6] = 0;
        puVar33 = puVar33 + 7;
        puVar27 = puVar27 + 7;
      } while (puVar33 != puVar10);
      do {
        plVar31 = (long *)puVar38[6];
        if (plVar31 == (long *)0x0) {
LAB_04e73185:
          bVar6 = *(byte *)(puVar38 + 1);
        }
        else {
          LOCK();
          plVar22 = plVar31 + 1;
          lVar24 = *plVar22;
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (lVar24 != 0) goto LAB_04e73185;
          (**(code **)(*plVar31 + 0x10))(plVar31);
          func_0x0412c2d0(plVar31);
          bVar6 = *(byte *)(puVar38 + 1);
        }
        if ((bVar6 & 1) != 0) {
          func_0x0412a280(puVar38[3],puVar38[1] & 0xfffffffffffffffe);
        }
        puVar38 = puVar38 + 7;
      } while (puVar38 != puVar10);
      puVar38 = (undefined8 *)*plVar25;
    }
    plVar29 = plStack_4b8;
    *(undefined8 **)(puVar23 + 0x22) = puVar30;
    *(long **)(puVar23 + 0x24) = plStack_4b8;
    lVar24 = *(long *)(puVar23 + 0x26);
    *(long **)(puVar23 + 0x26) = plStack_4b0;
    if (puVar38 != (undefined8 *)0x0) {
      func_0x0412a280(puVar38,lVar24 - (long)puVar38);
    }
  }
  *(long **)(puVar23 + 0x24) = plVar29;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar14;
  *(undefined4 *)(plVar21 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar16;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar31 = plVar25 + 1;
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  pbVar34 = pbStack_480;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  LOCK();
  lVar24 = *(long *)puStack_3d8;
  *(long *)puStack_3d8 = *(long *)puStack_3d8 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*(long *)pbStack_480 + 0x10))(pbStack_480);
    func_0x0412c2d0(pbVar34);
    LOCK();
    lVar24 = *plStack_1b8;
    *plStack_1b8 = *plStack_1b8 + -1;
    UNLOCK();
    if (lVar24 == 0) goto LAB_04e73515;
LAB_04e73298:
    LOCK();
    lVar24 = *plStack_1b8;
    *plStack_1b8 = *plStack_1b8 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plStack_1b8;
    *plStack_1b8 = *plStack_1b8 + -1;
    UNLOCK();
    if (lVar24 != 0) goto LAB_04e73298;
LAB_04e73515:
    plVar25 = plStack_1b8;
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar24 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uVar28 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0,&uStack_328);
  if ((uStack_328 & 1) != 0) {
    func_0x0412a280(uStack_318,uStack_328 & 0xfffffffffffffffe);
  }
  if (plStack_248 != (long *)0x0) {
    (*(code *)plStack_248[1])(&plStack_248);
  }
  if (pplStack_428 == &plStack_448) {
    lVar24 = 0x20;
LAB_04e73558:
    (**(code **)((long)*pplStack_428 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (pplStack_428 != (long **)0x0) goto LAB_04e73558;
  }
  if (plStack_f8 != (long *)0x0) {
    (*(code *)plStack_f8[1])(&plStack_f8);
  }
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_470 = 0x6b636f6c620a;
  lStack_478 = -0x23d3b0419e479d70;
  uStack_70 = 0;
  bStack_440 = 0;
  uStack_43f = 0;
  lStack_78 = 0;
  plStack_448 = (long *)&UNK_0ef87550;
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_4c8 = plStack_448;
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0ef87328;
  plStack_4c0 = (long *)0x0;
  plStack_448 = (long *)0x0;
  plVar25[4] = (long)&UNK_0f2ccd78;
  plVar25[5] = 0;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[10] = 0;
  plVar25[0xb] = 0;
  plVar25[0xc] = 0;
  *(undefined1 *)(plVar25 + 0xd) = 0;
  func_0x04aa75f0(plVar25 + 0xe,&uStack_400,&UNK_01254d89);
  *(undefined1 *)(plVar25 + 0x10) = 0;
  plVar25[0x11] = 0;
  plVar25[0x12] = 0;
  plVar25[0x13] = 0;
  plVar25[0x14] = 0;
  plVar25[0x15] = 0;
  plVar25[0x16] = 0;
  plVar25[0x17] = 0xffffffff;
  plVar25[0x26] = 0;
  plVar25[0x27] = 0;
  plVar25[0x18] = 0;
  plVar25[0x19] = 0;
  plVar25[0x1a] = 0;
  plVar25[0x1b] = 0;
  plVar25[0x1c] = 0;
  plVar25[0x1d] = 0;
  plVar25[0x1e] = 0;
  plVar25[0x1f] = 0;
  plVar25[4] = (long)&UNK_0ef87378;
  plVar25[0x2e] = 0;
  plVar25[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar25 + 0x2e);
    plVar21 = plStack_4c8;
  }
  plVar31 = plVar25 + 1;
  plVar25[0x2e] = (long)plVar21;
  if (plStack_448 != (long *)0x0) {
    (*(code *)plStack_448[1])(&plStack_448);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar22 = plVar25 + 4;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef87458;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[4] = (long)&UNK_0ef874a8;
  plVar21[0xe] = (long)plVar22;
  plVar21[0xf] = (long)plVar25;
  LOCK();
  plVar25[1] = plVar25[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar21 + 4;
  plStack_4c0 = plVar21;
  puVar23 = (undefined4 *)func_0x04e87210(uVar28,&lStack_478,1);
  pbVar34 = (byte *)(plVar25 + 0x11);
  plVar32 = *(long **)(puVar23 + 0x24);
  if (plVar32 < *(long **)(puVar23 + 0x26)) {
    plVar32[2] = 0;
    plVar32[3] = 0;
    *plVar32 = 0;
    plVar32[1] = 0;
    plVar32[4] = 0;
    if ((byte *)plVar32 != pbVar34) {
      plVar29 = plVar32 + 1;
      if ((*(byte *)(plVar25 + 0x12) & 1) == 0) {
        plVar32[3] = plVar25[0x14];
        lVar24 = plVar25[0x13];
        *plVar29 = plVar25[0x12];
        plVar32[2] = lVar24;
      }
      else {
        pbStack_480 = pbVar34;
        puStack_3d8 = (uint *)plVar29;
        func_0x04885070(plVar29,plVar25[0x14],plVar25[0x13]);
        pbVar34 = pbStack_480;
      }
    }
    *plVar32 = *(long *)pbVar34;
    plVar32[5] = (long)(plVar21 + 4);
    plVar32[6] = (long)plVar21;
    LOCK();
    plVar21[1] = plVar21[1] + 1;
    UNLOCK();
    plVar32 = plVar32 + 7;
    *(long **)(puVar23 + 0x24) = plVar32;
  }
  else {
    plVar32 = (long *)func_0x04e89260(puVar23 + 0x22,pbVar34,&plStack_4c8);
  }
  *(long **)(puVar23 + 0x24) = plVar32;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar25[0xf];
  *(undefined4 *)(plVar25 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar25 + 0x74) = uVar14;
  *(undefined4 *)(plVar25 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar25 + 0x7c) = uVar16;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar32 = plVar21 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = plStack_4c0;
  *(undefined1 *)(plVar25 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4c0 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar24 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
  }
  uStack_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  (**(code **)(*plVar22 + 0x10))(plVar22,&uStack_348);
  if ((uStack_348 & 1) != 0) {
    func_0x0412a280(uStack_338,uStack_348 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_468 = 0;
  uStack_460 = 0;
  plStack_458 = (long *)0x0;
  uStack_470 = 0x746e756f630a;
  lStack_478 = 0x184efb3a64c90e2;
  uStack_b0 = 0;
  bStack_440 = 0;
  uStack_43f = 0;
  lStack_b8 = 0;
  plStack_448 = (long *)&UNK_0ef87748;
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_4c8 = plStack_448;
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0ef87578;
  plStack_4c0 = (long *)0x0;
  plStack_448 = (long *)0x0;
  plVar25[4] = (long)&UNK_0f2ccd78;
  plVar25[5] = 0;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[8] = 0;
  plVar25[9] = 0;
  plVar25[10] = 0;
  plVar25[0xb] = 0;
  plVar25[0xc] = 0;
  *(undefined1 *)(plVar25 + 0xd) = 0;
  func_0x04aa75f0(plVar25 + 0xe,&uStack_400,&UNK_01254d89);
  *(undefined1 *)(plVar25 + 0x10) = 0;
  plVar21 = plVar25 + 0x11;
  plVar25[0x11] = 0;
  plVar25[0x12] = 0;
  plVar25[0x13] = 0;
  plVar25[0x14] = 0;
  plVar25[0x15] = 0;
  plVar25[0x16] = 0;
  plVar25[0x17] = 0xffffffff;
  plVar25[0x26] = 0;
  plVar25[0x27] = 0;
  plVar25[0x18] = 0;
  plVar25[0x19] = 0;
  plVar25[0x1a] = 0;
  plVar25[0x1b] = 0;
  plVar25[0x1c] = 0;
  plVar25[0x1d] = 0;
  plVar25[0x1e] = 0;
  plVar25[0x1f] = 0;
  plVar25[4] = (long)&UNK_0ef875c8;
  plVar25[0x2e] = 0x7fffffff80000000;
  plVar25[0x30] = 0;
  plVar25[0x31] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar25 + 0x30);
    plVar31 = plStack_4c8;
  }
  plStack_4c8 = (long *)0x0;
  plVar25[0x30] = (long)plVar31;
  puVar3 = (uint *)(plVar25 + 0x12);
  if (plVar21 == (long *)&DAT_0f5520a8) {
    plVar25[0x15] = 0;
  }
  else {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f5520b0 & 1) == 0) {
        plVar25[0x14] = _DAT_0f5520c0;
        uVar15 = uRam000000000f5520bc;
        uVar14 = _DAT_0f5520b8;
        uVar13 = uRam000000000f5520b4;
        *puVar3 = _DAT_0f5520b0;
        *(undefined4 *)((long)plVar25 + 0x94) = uVar13;
        *(undefined4 *)(plVar25 + 0x13) = uVar14;
        *(undefined4 *)((long)plVar25 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f5520c0,CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8));
      }
    }
    else {
      bVar40 = (_DAT_0f5520b0 & 1) != 0;
      lVar24 = 0xf5520b1;
      if (bVar40) {
        lVar24 = _DAT_0f5520c0;
      }
      uVar36 = (ulong)((_DAT_0f5520b0 & 0xff) >> 1);
      if (bVar40) {
        uVar36 = CONCAT44(uRam000000000f5520bc,_DAT_0f5520b8);
      }
      func_0x04885120(puVar3,lVar24,uVar36);
    }
    plVar25[0x11] = _DAT_0f5520a8;
    plVar25[0x15] = 0;
    if (plStack_4c8 != (long *)0x0) {
      (*(code *)plStack_4c8[1])(&plStack_4c8);
    }
  }
  plVar31 = plVar25 + 1;
  if (plStack_448 != (long *)0x0) {
    (*(code *)plStack_448[1])(&plStack_448);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puStack_3d8 = puVar3;
  plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar22 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar22[1] = 0;
  plVar22[2] = 0;
  *plVar22 = (long)&UNK_0ef876a8;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[4] = (long)&UNK_0ef876f8;
  plVar22[0xe] = (long)(plVar25 + 4);
  plVar22[0xf] = (long)plVar25;
  LOCK();
  plVar25[1] = plVar25[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar22 + 4;
  plStack_4c0 = plVar22;
  pbStack_480 = (byte *)(plVar25 + 4);
  puVar23 = (undefined4 *)func_0x04e87210(uVar28,&lStack_478,0);
  plVar32 = *(long **)(puVar23 + 0x24);
  if (plVar32 < *(long **)(puVar23 + 0x26)) {
    plVar32[2] = 0;
    plVar32[3] = 0;
    *plVar32 = 0;
    plVar32[1] = 0;
    plVar32[4] = 0;
    if (plVar32 != plVar21) {
      if ((*puStack_3d8 & 1) == 0) {
        plVar32[3] = *(long *)(puStack_3d8 + 4);
        lVar24 = *(long *)(puStack_3d8 + 2);
        plVar32[1] = *(long *)puStack_3d8;
        plVar32[2] = lVar24;
      }
      else {
        func_0x04885070(plVar32 + 1,plVar25[0x14],plVar25[0x13]);
      }
    }
    *plVar32 = *plVar21;
    plVar32[5] = (long)(plVar22 + 4);
    plVar32[6] = (long)plVar22;
    LOCK();
    plVar22[1] = plVar22[1] + 1;
    UNLOCK();
    plVar32 = plVar32 + 7;
    *(long **)(puVar23 + 0x24) = plVar32;
  }
  else {
    plVar32 = (long *)func_0x04e89260(puVar23 + 0x22,plVar21,&plStack_4c8);
  }
  pbVar34 = pbStack_480;
  *(long **)(puVar23 + 0x24) = plVar32;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar25[0xf];
  *(undefined4 *)(plVar25 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar25 + 0x74) = uVar14;
  *(undefined4 *)(plVar25 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar25 + 0x7c) = uVar16;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar22 = plVar21 + 1;
    lVar24 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  plVar21 = plStack_4c0;
  *(undefined1 *)(plVar25 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar22 = plStack_4c0 + 1;
    lVar24 = *plVar22;
    *plVar22 = *plVar22 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar24 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
    func_0x0412c2d0(plVar25);
  }
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  bStack_2e0 = 2;
  uStack_2df = 0x31;
  uStack_2de = 0;
  (**(code **)(*(long *)pbVar34 + 0x18))(pbVar34,&uStack_368,&bStack_2e0);
  plVar25 = plStack_408;
  if ((bStack_2e0 & 1) != 0) {
    func_0x0412a280(uStack_2d0,
                    CONCAT53(uStack_2dd,CONCAT12(uStack_2de,CONCAT11(uStack_2df,bStack_2e0))) &
                    0xfffffffffffffffe);
  }
  if ((uStack_368 & 1) != 0) {
    func_0x0412a280(uStack_358,uStack_368 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((uStack_470 & 1) != 0) {
    func_0x0412a280(uStack_460,uStack_470 & 0xfffffffffffffffe);
  }
  uStack_3e7 = 0;
  uStack_3e6 = 0;
  uStack_3e0 = 0;
  uStack_400 = 0xc6a3fd8f2a49fe2d;
  bStack_3f8 = 0x20;
  uStack_3f7 = _DAT_0144759f;
  uStack_3f3 = (undefined2)_UNK_014475a3;
  uStack_3f1 = (undefined1)((uint)_UNK_014475a3 >> 0x10);
  uStack_3f0 = (undefined1)((uint)_UNK_014475a3 >> 0x18);
  uStack_3ef = _UNK_014475a7;
  uStack_3eb = (undefined2)_UNK_014475ab;
  uStack_3e9 = (undefined1)((uint)_UNK_014475ab >> 0x10);
  uStack_3e8 = (undefined1)((uint)_UNK_014475ab >> 0x18);
  plVar21 = (long *)plVar25[4];
  if (plVar21 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e73ea2:
    plStack_258 = (long *)0x0;
LAB_04e73eae:
    uStack_280 = 0;
    plStack_288 = (long *)&UNK_0ef87940;
LAB_04e73ebd:
    uStack_43f = 0;
    bStack_440 = 0;
    plStack_448 = (long *)0x0;
    (*(code *)*plStack_288)(&plStack_288,&plStack_448);
    plVar25 = plStack_288;
  }
  else {
    if (plVar21 == plVar25) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar21 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar21 + 0x10))();
    }
    plStack_258 = plStack_458;
    uStack_280 = 0;
    plStack_288 = (long *)&UNK_0ef87940;
    if (plStack_458 == (long *)0x0) goto LAB_04e73ea2;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e73eae;
    }
    plStack_258 = alStack_278;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    bStack_440 = 0;
    uStack_43f = 0;
    if (plStack_288 != (long *)0x0) goto LAB_04e73ebd;
    plVar25 = (long *)0x0;
  }
  plStack_288 = (long *)0x0;
  plStack_448 = plVar25;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef87770;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar25 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar25)(&plStack_448,&plStack_4c8);
    plStack_4c8 = plStack_448;
  }
  plStack_448 = (long *)0x0;
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&uStack_1b0,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0ef877c0;
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar25 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar21 + 0x2e);
    plVar25 = plStack_4c8;
  }
  plVar31 = plVar21 + 1;
  plVar21[0x2e] = (long)plVar25;
  if (plStack_448 != (long *)0x0) {
    (*(code *)plStack_448[1])(&plStack_448);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar25 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar22 = plVar21 + 4;
  plVar25[1] = 0;
  plVar25[2] = 0;
  *plVar25 = (long)&UNK_0ef878a0;
  plVar25[6] = 0;
  plVar25[7] = 0;
  plVar25[4] = (long)&UNK_0ef878f0;
  plVar25[0xe] = (long)plVar22;
  plVar25[0xf] = (long)plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar25 + 4;
  plStack_4c0 = plVar25;
  puVar23 = (undefined4 *)func_0x04e7aec0(param_1,&uStack_400,0);
  plVar32 = plVar21 + 0x11;
  plVar29 = *(long **)(puVar23 + 0x24);
  if (plVar29 < *(long **)(puVar23 + 0x26)) {
    plVar29[2] = 0;
    plVar29[3] = 0;
    *plVar29 = 0;
    plVar29[1] = 0;
    plVar29[4] = 0;
    if (plVar29 != plVar32) {
      plVar1 = plVar29 + 1;
      if ((*(byte *)(plVar21 + 0x12) & 1) == 0) {
        plVar29[3] = plVar21[0x14];
        lVar24 = plVar21[0x13];
        *plVar1 = plVar21[0x12];
        plVar29[2] = lVar24;
      }
      else {
        pbStack_480 = (byte *)plVar1;
        func_0x04885070(plVar1,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar29 = *plVar32;
    plVar29[5] = (long)(plVar25 + 4);
    plVar29[6] = (long)plVar25;
    LOCK();
    plVar25[1] = plVar25[1] + 1;
    UNLOCK();
    plVar29 = plVar29 + 7;
    *(long **)(puVar23 + 0x24) = plVar29;
  }
  else {
    plVar29 = (long *)func_0x04e7ccf0(puVar23 + 0x22,plVar32,&plStack_4c8);
  }
  *(long **)(puVar23 + 0x24) = plVar29;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar25 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  plVar25 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar14;
  *(undefined4 *)(plVar21 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar16;
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar32 = plVar25 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      func_0x0412c2d0(plVar25);
    }
  }
  plVar25 = plStack_4c0;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4c0 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar25);
    }
  }
  LOCK();
  lVar24 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar24 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  (**(code **)(*plVar22 + 0x10))(plVar22,&uStack_388);
  plVar25 = plStack_408;
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  if (plStack_288 != (long *)0x0) {
    (*(code *)plStack_288[1])(&plStack_288);
  }
  if (plStack_458 == &lStack_478) {
    lVar24 = 0x20;
LAB_04e74383:
    (**(code **)(*plStack_458 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (plStack_458 != (long *)0x0) goto LAB_04e74383;
  }
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_3e6,CONCAT11(uStack_3e7,uStack_3e8)),
                    CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT41(uStack_3f7,bStack_3f8))) &
                    0xfffffffffffffffe);
  }
  uStack_436 = 0;
  uStack_430 = 0;
  pplStack_428 = (long **)0x0;
  bStack_440 = 0x12;
  uStack_43f = 0x6574735f6d756e;
  uStack_438 = 0x70;
  uStack_437 = 0x73;
  plStack_448 = (long *)0x4db8600f62e783c7;
  plVar21 = (long *)plVar25[4];
  if (plVar21 == (long *)0x0) {
    pplStack_4a8 = (long **)0x0;
    uStack_150 = 0;
    puStack_158 = &UNK_0ef87958;
    pplStack_128 = (long **)0x0;
  }
  else {
    if (plVar21 == plVar25) {
      pplStack_4a8 = &plStack_4c8;
      (**(code **)(*plVar21 + 0x18))(plVar21,&plStack_4c8);
    }
    else {
      pplStack_4a8 = (long **)(**(code **)(*plVar21 + 0x10))();
    }
    pplStack_128 = pplStack_4a8;
    uStack_150 = 0;
    puStack_158 = &UNK_0ef87958;
    if (pplStack_4a8 == (long **)0x0) {
      pplStack_128 = (long **)0x0;
    }
    else if (pplStack_4a8 == &plStack_4c8) {
      pplStack_128 = aplStack_148;
      (*(code *)(*pplStack_4a8)[3])(pplStack_4a8);
    }
    else {
      pplStack_4a8 = (long **)0x0;
    }
  }
  plVar21 = (long *)func_0x04e71720(param_1,&plStack_448,0,&puStack_158);
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_398 = 0;
  (**(code **)(*plVar21 + 0x10))(plVar21,&uStack_3a8);
  if ((uStack_3a8 & 1) != 0) {
    func_0x0412a280(uStack_398,uStack_3a8 & 0xfffffffffffffffe);
  }
  if (puStack_158 != (undefined *)0x0) {
    (**(code **)(puStack_158 + 8))(&puStack_158);
  }
  if (pplStack_4a8 == &plStack_4c8) {
    lVar24 = 0x20;
LAB_04e7454f:
    (**(code **)((long)*pplStack_4a8 + lVar24))();
  }
  else {
    lVar24 = 0x28;
    if (pplStack_4a8 != (long **)0x0) goto LAB_04e7454f;
  }
  if ((bStack_440 & 1) != 0) {
    func_0x0412a280(uStack_430,CONCAT71(uStack_43f,bStack_440) & 0xfffffffffffffffe);
  }
  plVar21 = (long *)plVar25[4];
  if (plVar21 == (long *)0x0) {
    pplStack_4a8 = (long **)0x0;
    uStack_190 = 0;
    puStack_198 = (undefined8 *)&UNK_0ef87970;
    pplStack_168 = (long **)0x0;
  }
  else {
    if (plVar21 == plVar25) {
      pplStack_4a8 = &plStack_4c8;
      (**(code **)(*plVar21 + 0x18))(plVar21,&plStack_4c8);
    }
    else {
      pplStack_4a8 = (long **)(**(code **)(*plVar21 + 0x10))();
    }
    pplStack_168 = pplStack_4a8;
    uStack_190 = 0;
    puStack_198 = (undefined8 *)&UNK_0ef87970;
    if (pplStack_4a8 == (long **)0x0) {
      pplStack_168 = (long **)0x0;
    }
    else if (pplStack_4a8 == &plStack_4c8) {
      pplStack_168 = aplStack_188;
      (*(code *)(*pplStack_4a8)[3])(pplStack_4a8);
    }
    else {
      pplStack_4a8 = (long **)0x0;
    }
  }
  ppuVar4 = (undefined8 **)(param_1 + 0xd0);
  if (ppuVar4 == &puStack_198) {
    if (puStack_198 != (undefined8 *)0x0) {
      (*(code *)puStack_198[1])(&puStack_198);
    }
    if (pplStack_4a8 != &plStack_4c8) goto LAB_04e7466b;
LAB_04e74692:
    lVar24 = 0x20;
LAB_04e74697:
    (**(code **)((long)*pplStack_4a8 + lVar24))();
  }
  else {
    if (*ppuVar4 != (undefined8 *)0x0) {
      (*(code *)(*ppuVar4)[1])(ppuVar4);
    }
    if (puStack_198 == (undefined8 *)0x0) {
      puVar30 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_198)(&puStack_198,ppuVar4);
      puVar30 = puStack_198;
    }
    puStack_198 = (undefined8 *)0x0;
    *ppuVar4 = puVar30;
    if (pplStack_4a8 == &plStack_4c8) goto LAB_04e74692;
LAB_04e7466b:
    lVar24 = 0x28;
    if (pplStack_4a8 != (long **)0x0) goto LAB_04e74697;
  }
  uStack_3e8 = 0;
  uStack_3e7 = 0;
  uStack_3e6 = 0;
  uStack_3e0 = 0;
  bStack_3f8 = 0x1c;
  uStack_3f7 = 0x70657473;
  uStack_3f3 = 0x645f;
  uStack_3f1 = 0x69;
  uStack_3f0 = 0x72;
  uStack_3ef = 0x69746365;
  uStack_3eb = 0x6e6f;
  uStack_3e9 = 0;
  uStack_400 = 0x9657edf9d6cf7589;
  plVar21 = (long *)plVar25[4];
  if (plVar21 == (long *)0x0) {
    plStack_458 = (long *)0x0;
LAB_04e7478f:
    plStack_298 = (long *)0x0;
LAB_04e7479b:
    uStack_2c0 = 0;
    plStack_2c8 = (long *)&UNK_0ef87b68;
LAB_04e747aa:
    uStack_43f = 0;
    bStack_440 = 0;
    plStack_448 = (long *)0x0;
    (*(code *)*plStack_2c8)(&plStack_2c8,&plStack_448);
    plVar25 = plStack_2c8;
  }
  else {
    if (plVar21 == plVar25) {
      plStack_458 = &lStack_478;
      (**(code **)(*plVar21 + 0x18))();
    }
    else {
      plStack_458 = (long *)(**(code **)(*plVar21 + 0x10))();
    }
    plStack_298 = plStack_458;
    uStack_2c0 = 0;
    plStack_2c8 = (long *)&UNK_0ef87b68;
    if (plStack_458 == (long *)0x0) goto LAB_04e7478f;
    if (plStack_458 != &lStack_478) {
      plStack_458 = (long *)0x0;
      goto LAB_04e7479b;
    }
    plStack_298 = alStack_2b8;
    (**(code **)(*plStack_458 + 0x18))(plStack_458);
    bStack_440 = 0;
    uStack_43f = 0;
    if (plStack_2c8 != (long *)0x0) goto LAB_04e747aa;
    plVar25 = (long *)0x0;
  }
  plStack_2c8 = (long *)0x0;
  plStack_448 = plVar25;
  plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1e0);
  if (plVar21 == (long *)0x0) {
    func_0x0eec74c0(0x1e0,0);
  }
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = (long)&UNK_0ef87998;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = (long *)0x0;
  if (plVar25 == (long *)0x0) {
    plStack_4c8 = (long *)0x0;
  }
  else {
    (*(code *)*plVar25)(&plStack_448,&plStack_4c8);
    plStack_4c8 = plStack_448;
  }
  plStack_448 = (long *)0x0;
  plVar21[4] = (long)&UNK_0f2ccd78;
  plVar21[5] = 0;
  plVar21[6] = 0;
  plVar21[7] = 0;
  plVar21[8] = 0;
  plVar21[9] = 0;
  plVar21[10] = 0;
  plVar21[0xb] = 0;
  plVar21[0xc] = 0;
  *(undefined1 *)(plVar21 + 0xd) = 0;
  func_0x04aa75f0(plVar21 + 0xe,&uStack_1b0,&UNK_01254d89);
  *(undefined1 *)(plVar21 + 0x10) = 0;
  plVar25 = plVar21 + 0x11;
  plVar21[0x11] = 0;
  plVar21[0x12] = 0;
  plVar21[0x13] = 0;
  plVar21[0x14] = 0;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  plVar21[0x17] = 0xffffffff;
  plVar21[0x26] = 0;
  plVar21[0x27] = 0;
  plVar21[0x18] = 0;
  plVar21[0x19] = 0;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = 0;
  plVar21[0x1c] = 0;
  plVar21[0x1d] = 0;
  plVar21[0x1e] = 0;
  plVar21[0x1f] = 0;
  plVar21[4] = (long)&UNK_0ef879e8;
  plVar21[0x2e] = 0;
  plVar21[0x2f] = 0;
  if (plStack_4c8 == (long *)0x0) {
    plVar31 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_4c8)(&plStack_4c8,plVar21 + 0x2e);
    plVar31 = plStack_4c8;
  }
  plVar22 = plVar21 + 4;
  plStack_4c8 = (long *)0x0;
  plVar21[0x2e] = (long)plVar31;
  plVar21[0x36] = 0;
  plVar21[0x37] = 0;
  plVar21[0x38] = 0;
  plVar21[0x39] = 0;
  *(undefined4 *)(plVar21 + 0x3a) = 0x3f800000;
  *(undefined1 *)(plVar21 + 0x3b) = 0;
  puVar3 = (uint *)(plVar21 + 0x12);
  if (plVar25 != (long *)&DAT_0f551fe8) {
    if ((*puVar3 & 1) == 0) {
      if ((_DAT_0f551ff0 & 1) == 0) {
        plVar21[0x14] = _DAT_0f552000;
        uVar15 = uRam000000000f551ffc;
        uVar14 = _DAT_0f551ff8;
        uVar13 = uRam000000000f551ff4;
        *puVar3 = _DAT_0f551ff0;
        *(undefined4 *)((long)plVar21 + 0x94) = uVar13;
        *(undefined4 *)(plVar21 + 0x13) = uVar14;
        *(undefined4 *)((long)plVar21 + 0x9c) = uVar15;
      }
      else {
        func_0x04885070(puVar3,_DAT_0f552000,CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8));
      }
    }
    else {
      bVar40 = (_DAT_0f551ff0 & 1) != 0;
      lVar24 = 0xf551ff1;
      if (bVar40) {
        lVar24 = _DAT_0f552000;
      }
      uVar36 = (ulong)((_DAT_0f551ff0 & 0xff) >> 1);
      if (bVar40) {
        uVar36 = CONCAT44(uRam000000000f551ffc,_DAT_0f551ff8);
      }
      func_0x04885120(puVar3,lVar24,uVar36);
    }
  }
  plVar21[0x11] = _DAT_0f551fe8;
  plVar21[0x15] = 0;
  if (plStack_4c8 != (long *)0x0) {
    (*(code *)plStack_4c8[1])(&plStack_4c8);
  }
  plVar31 = plVar21 + 1;
  if (plStack_448 != (long *)0x0) {
    (*(code *)plStack_448[1])(&plStack_448);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  plStack_408 = plVar31;
  plVar31 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar31 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar31[1] = 0;
  plVar31[2] = 0;
  *plVar31 = (long)&UNK_0ef87ac8;
  plVar31[6] = 0;
  plVar31[7] = 0;
  plVar31[4] = (long)&UNK_0ef87b18;
  plVar31[0xe] = (long)plVar22;
  plVar31[0xf] = (long)plVar21;
  LOCK();
  plVar21[1] = plVar21[1] + 1;
  UNLOCK();
  plStack_4c8 = plVar31 + 4;
  plStack_4c0 = plVar31;
  puVar23 = (undefined4 *)func_0x04e7aec0(param_1,&uStack_400,0);
  plVar32 = *(long **)(puVar23 + 0x24);
  if (plVar32 < *(long **)(puVar23 + 0x26)) {
    plVar32[2] = 0;
    plVar32[3] = 0;
    *plVar32 = 0;
    plVar32[1] = 0;
    plVar32[4] = 0;
    if (plVar32 != plVar25) {
      if ((*puVar3 & 1) == 0) {
        plVar32[3] = plVar21[0x14];
        lVar24 = plVar21[0x13];
        plVar32[1] = *(long *)puVar3;
        plVar32[2] = lVar24;
      }
      else {
        func_0x04885070(plVar32 + 1,plVar21[0x14],plVar21[0x13]);
      }
    }
    *plVar32 = *plVar25;
    plVar32[5] = (long)(plVar31 + 4);
    plVar32[6] = (long)plVar31;
    LOCK();
    plVar31[1] = plVar31[1] + 1;
    UNLOCK();
    plVar32 = plVar32 + 7;
    *(long **)(puVar23 + 0x24) = plVar32;
  }
  else {
    plVar32 = (long *)func_0x04e7ccf0(puVar23 + 0x22,plVar25,&plStack_4c8);
  }
  plVar25 = plStack_408;
  *(long **)(puVar23 + 0x24) = plVar32;
  uVar13 = *puVar23;
  uVar14 = puVar23[1];
  uVar15 = puVar23[2];
  uVar16 = puVar23[3];
  if (*(long *)(puVar23 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar23 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar13;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar14;
  *(undefined4 *)(plVar21 + 0xf) = uVar15;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar16;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar32 = plVar31 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  plVar31 = plStack_4c0;
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  if (plStack_4c0 != (long *)0x0) {
    LOCK();
    plVar32 = plStack_4c0 + 1;
    lVar24 = *plVar32;
    *plVar32 = *plVar32 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar24 = *plVar25;
  *plVar25 = *plVar25 + -1;
  UNLOCK();
  if (lVar24 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
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
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  plStack_4c8 = (long *)CONCAT26(plStack_4c8._6_2_,0x6e776f6408);
  func_0x04e801e0(plVar22,&plStack_4c8,0);
  plStack_448 = (long *)CONCAT44(plStack_448._4_4_,0x707504);
  func_0x04e801e0(plVar22,&plStack_448,1);
  uStack_1b0 = 6;
  uStack_1af = 0x74756f;
  func_0x04e801e0(plVar22,&uStack_1b0,2);
  uStack_110 = 8;
  uStack_10f = 0x79617761;
  uStack_10b = 0;
  func_0x04e801e0(plVar22,&uStack_110,2);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  (**(code **)(*plVar22 + 0x10))(plVar22,&uStack_3c8);
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(uStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  if (plStack_2c8 != (long *)0x0) {
    (*(code *)plStack_2c8[1])(&plStack_2c8);
  }
  if (plStack_458 == &lStack_478) {
    lVar24 = 0x20;
  }
  else {
    lVar24 = 0x28;
    if (plStack_458 == (long *)0x0) goto joined_r0x04e74d8e;
  }
  (**(code **)(*plStack_458 + lVar24))();
joined_r0x04e74d8e:
  if ((bStack_3f8 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_3e6,CONCAT11(uStack_3e7,uStack_3e8)),
                    CONCAT17(uStack_3f1,CONCAT25(uStack_3f3,CONCAT41(uStack_3f7,bStack_3f8))) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a3e15  hance_information
 * 0x144759f  decoration_block
 * 0x1494d5d  <any array element>
 * 0x14c903f  decoration_chance
 */
