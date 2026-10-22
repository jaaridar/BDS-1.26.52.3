/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52c9e70 (ELF vaddr 0x51c9e70)
 * Label: callee-of:0x4de9260
 * Body:  [[052c9e70, 052ca4ff]]
 * Ghidra: FUN_052c9e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_052c9e70(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined1 uStack_219;
  undefined8 *puStack_218;
  byte bStack_210;
  undefined6 uStack_20f;
  undefined1 uStack_209;
  undefined1 uStack_208;
  undefined6 uStack_207;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1d0;
  ulong auStack_1c8 [4];
  ulong auStack_1a8 [4];
  ulong auStack_188 [4];
  byte bStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined4 uStack_15f;
  undefined3 uStack_15b;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_15b = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  bStack_168 = 0x18;
  uStack_167 = 0x5f736563616c70;
  uStack_160 = 0x62;
  uStack_15f = 0x6b636f6c;
  auStack_188[3] = 0xae8ea2e4ee1dc1c3;
  uStack_70 = 0;
  uStack_130 = 0;
  lStack_78 = 0;
  puStack_138 = (undefined8 *)&UNK_0efa1b78;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar9 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_218 = puStack_138;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0efa13a8;
  bStack_210 = 0;
  uStack_20f = 0;
  uStack_209 = 0;
  puStack_138 = (undefined8 *)0x0;
  plVar9[4] = (long)&UNK_0f2ccd78;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  func_0x04aa75f0(plVar9 + 0xe,&uStack_219,&UNK_01254d89);
  *(undefined1 *)(plVar9 + 0x10) = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0;
  plVar9[0x15] = 0;
  plVar9[0x16] = 0;
  plVar9[0x17] = 0xffffffff;
  plVar9[0x26] = 0;
  plVar9[0x27] = 0;
  plVar9[0x18] = 0;
  plVar9[0x19] = 0;
  plVar9[0x1a] = 0;
  plVar9[0x1b] = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[4] = (long)&UNK_0efa13f8;
  plVar9[0x2e] = 0;
  plVar9[0x2f] = 0;
  if (puStack_218 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_218)(&puStack_218,plVar9 + 0x2e);
    puVar10 = puStack_218;
  }
  plVar1 = plVar9 + 1;
  plVar9[0x2e] = (long)puVar10;
  if (puStack_138 != (undefined8 *)0x0) {
    (*(code *)puStack_138[1])(&puStack_138);
  }
  LOCK();
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  plStack_1d0 = plVar1;
  puVar10 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  plStack_148 = plVar9 + 4;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &UNK_0efa14d8;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[4] = &UNK_0efa1528;
  puVar10[0xe] = plStack_148;
  puVar10[0xf] = plVar9;
  LOCK();
  plVar9[1] = plVar9[1] + 1;
  UNLOCK();
  bStack_210 = (byte)puVar10;
  uStack_20f = (undefined6)((ulong)puVar10 >> 8);
  uStack_209 = (undefined1)((ulong)puVar10 >> 0x38);
  puStack_218 = puVar10 + 4;
  uStack_140 = param_1;
  puVar11 = (undefined4 *)func_0x0500ffa0(param_1,auStack_188 + 3,1);
  plVar1 = plVar9 + 0x11;
  plVar12 = *(long **)(puVar11 + 0x24);
  if (*(long **)(puVar11 + 0x26) <= plVar12) {
    plVar12 = (long *)func_0x050136a0(puVar11 + 0x22,plVar1,&puStack_218);
    goto LAB_052ca18a;
  }
  plVar12[2] = 0;
  plVar12[3] = 0;
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar12[4] = 0;
  if (plVar12 == plVar1) {
LAB_052ca11c:
    *plVar12 = *plVar1;
    plVar12[5] = (long)(puVar10 + 4);
    plVar12[6] = (long)puVar10;
LAB_052ca179:
    LOCK();
    puVar10[1] = puVar10[1] + 1;
    UNLOCK();
  }
  else {
    if ((*(byte *)(plVar9 + 0x12) & 1) == 0) {
      plVar12[3] = plVar9[0x14];
      lVar3 = plVar9[0x13];
      plVar12[1] = plVar9[0x12];
      plVar12[2] = lVar3;
      goto LAB_052ca11c;
    }
    FUN_04885070(plVar12 + 1,plVar9[0x14],plVar9[0x13]);
    *plVar12 = *plVar1;
    puVar10 = (undefined8 *)CONCAT17(uStack_209,CONCAT61(uStack_20f,bStack_210));
    plVar12[5] = (long)puStack_218;
    plVar12[6] = CONCAT17(uStack_209,CONCAT61(uStack_20f,bStack_210));
    if (puVar10 != (undefined8 *)0x0) goto LAB_052ca179;
  }
  plVar12 = plVar12 + 7;
  *(long **)(puVar11 + 0x24) = plVar12;
LAB_052ca18a:
  plVar1 = plStack_1d0;
  *(long **)(puVar11 + 0x24) = plVar12;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar11[2];
  uVar7 = puVar11[3];
  if (*(long *)(puVar11 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(puVar11 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = (long *)plVar9[0xf];
  *(undefined4 *)(plVar9 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x74) = uVar5;
  *(undefined4 *)(plVar9 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar9 + 0x7c) = uVar7;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  *(undefined1 *)(plVar9 + 0x10) = *(undefined1 *)((long)puVar11 + 0xa1);
  plVar12 = (long *)CONCAT17(uStack_209,CONCAT61(uStack_20f,bStack_210));
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  uVar8 = uStack_140;
  LOCK();
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    func_0x0412c2d0(plVar9);
  }
  auStack_188[0] = 0;
  auStack_188[1] = 0;
  auStack_188[2] = 0;
  (**(code **)(*plStack_148 + 0x10))(plStack_148,auStack_188);
  if ((auStack_188[0] & 1) != 0) {
    func_0x0412a280(auStack_188[2],auStack_188[0] & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_168 & 1) != 0) {
    func_0x0412a280(uStack_158,CONCAT71(uStack_167,bStack_168) & 0xfffffffffffffffe);
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  bStack_210 = 0x1c;
  uStack_20f = 0x5f776f6c6c61;
  uStack_209 = 0x61;
  uStack_208 = 100;
  uStack_207 = 0x746e6563616a;
  uStack_201 = 0;
  puStack_218 = (undefined8 *)0x93e7859748f02f85;
  uStack_b0 = 0;
  puStack_b8 = &UNK_0efa1b90;
  plVar9 = (long *)func_0x052ca710(uVar8,&puStack_218,&puStack_b8);
  auStack_1a8[0] = 0;
  auStack_1a8[1] = 0;
  auStack_1a8[2] = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,auStack_1a8);
  if ((auStack_1a8[0] & 1) != 0) {
    func_0x0412a280(auStack_1a8[2],auStack_1a8[0] & 0xfffffffffffffffe);
  }
  if (puStack_b8 != (undefined *)0x0) {
    (**(code **)(puStack_b8 + 8))(&puStack_b8);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT17(uStack_209,CONCAT61(uStack_20f,bStack_210)) & 0xfffffffffffffffe);
  }
  uStack_200 = 0;
  uStack_1f8 = 0;
  bStack_210 = 0x1c;
  uStack_20f = 0x735f6b726162;
  uStack_209 = 0x69;
  uStack_208 = 100;
  uStack_207 = 0x796c6e6f5f65;
  uStack_201 = 0;
  puStack_218 = (undefined8 *)0x5a8a409d35bd59ec;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0efa1ba8;
  plVar9 = (long *)func_0x052ca710(uVar8,&puStack_218,&puStack_f8);
  auStack_1c8[0] = 0;
  auStack_1c8[1] = 0;
  auStack_1c8[2] = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,auStack_1c8);
  if ((auStack_1c8[0] & 1) != 0) {
    func_0x0412a280(auStack_1c8[2],auStack_1c8[0] & 0xfffffffffffffffe);
  }
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_210 & 1) != 0) {
    func_0x0412a280(uStack_200,
                    CONCAT17(uStack_209,CONCAT61(uStack_20f,bStack_210)) & 0xfffffffffffffffe);
  }
  return;
}


