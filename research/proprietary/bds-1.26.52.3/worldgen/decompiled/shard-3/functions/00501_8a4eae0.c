/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b4eae0 (ELF vaddr 0x8a4eae0)
 * Label: caller-of-callee
 * Body:  [[08b4eae0, 08b4fdb6] [08b4fdf4, 08b4fe05] [08b4ffb3, 08b4ffbf] [08b5007a, 08b500fe]]
 * Ghidra: FUN_08b4eae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08b4eae0(long *param_1,undefined *param_2,byte *param_3,undefined2 param_4,long *param_5,
                 ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  long lStack_3a8;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long **pplStack_378;
  long *plStack_358;
  long *plStack_350;
  undefined *puStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  ulong uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined *puStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  undefined2 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  ulong uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined2 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((((*(int *)(param_2 + 8) == 1) || (*(char **)(param_2 + 0x88) == (char *)0x0)) ||
      (**(char **)(param_2 + 0x88) != '\x01')) ||
     (lVar14 = *param_5, (ulong)((param_5[1] - lVar14 >> 3) * -0x5555555555555555) <= param_6)) {
    lVar14 = func_0x0412dc70();
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar11 == (long *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0f148120;
    plVar11[3] = (long)&UNK_0f148170;
    *(undefined4 *)(plVar11 + 6) = 0x7d;
    plVar11[7] = lVar14;
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
    plVar11[4] = (long)(plVar11 + 4);
    plVar11[5] = (long)plVar11;
    LOCK();
    plVar8 = plVar11 + 1;
    lVar14 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
    *param_1 = (long)(plVar11 + 3);
    param_1[1] = (long)plVar11;
    return;
  }
  bVar3 = *(byte *)(lVar14 + param_6 * 0x18);
  if ((bVar3 & 1) == 0) {
    uVar17 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar17 = *(ulong *)(lVar14 + 8 + param_6 * 0x18);
  }
  uVar1 = uVar17 + 8;
  puStack_340 = param_2;
  if (0xfffffffffffffff7 < uVar1) goto LAB_08b4fdad;
  uStack_2d8 = param_6;
  plStack_2d0 = param_5;
  plStack_180 = param_1;
  if (uVar1 < 0x17) {
    uStack_3b0 = 0;
    lStack_3a8 = 0;
    uStack_3b8 = (ulong)(byte)((char)uVar1 * '\x02');
    lVar7 = (long)&uStack_3b8 + 1;
    if (uVar17 != 0) {
      lVar14 = param_6 * 0x18 + lVar14;
      if ((bVar3 & 1) == 0) goto LAB_08b4ecde;
LAB_08b4ec71:
      lVar14 = *(long *)(lVar14 + 0x10);
      goto LAB_08b4ece1;
    }
  }
  else {
    uVar15 = 0x1a;
    if ((uVar1 | 7) != 0x17) {
      uVar15 = (uVar1 | 7) + 1;
    }
    lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
    if (lVar7 == 0) {
      FUN_0eec74c0(uVar15,0);
    }
    uStack_3b8 = uVar15 | 1;
    lVar14 = param_6 * 0x18 + lVar14;
    uStack_3b0 = uVar1;
    lStack_3a8 = lVar7;
    if ((bVar3 & 1) != 0) goto LAB_08b4ec71;
LAB_08b4ecde:
    lVar14 = lVar14 + 1;
LAB_08b4ece1:
    func_0x0eee2ee0(lVar7,lVar14,uVar17);
  }
  *(undefined8 *)(lVar7 + uVar17) = 0x6e696f6a2f31762f;
  *(undefined1 *)(lVar7 + 8 + uVar17) = 0;
  func_0x0d78ad90(auStack_128);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0x3f800000;
  func_0x0d78b7e0(auStack_128,&uStack_3b8);
  puVar16 = puStack_340;
  uStack_110 = 0x200000000;
  if ((*(long *)(puStack_340 + 0x88) == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_013e6449),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(puVar16 + 0x88) == '\0') &&
     (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_013e6449),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  plVar11 = *(long **)(puVar16 + 0x98);
  uStack_e8 = uStack_48;
  func_0x06042fb0(auStack_108,uStack_58,0);
  (**(code **)(*plVar11 + 0x10))(&plStack_1d8,plVar11,auStack_128);
  plVar10 = plStack_1d0;
  plVar8 = plStack_1d8;
  plStack_338 = plStack_1d8;
  plStack_330 = plStack_1d0;
  plStack_1d8 = (long *)0x0;
  plStack_1d0 = (long *)0x0;
  plVar11 = (long *)(puVar16 + 0x200);
  puStack_2b8 = &UNK_013b3ef6;
  plStack_2b0 = (long *)0x19;
  plStack_2a8 = _DAT_0f778528;
  lStack_2a0 = -0xffffffff;
  uStack_298 = uStack_298 & 0xffffffffffffff00;
  lStack_290 = 0;
  lStack_290 = func_0x0417cc60();
  lStack_290 = lStack_290 + 3000000000;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar10[1] = plVar10[1] + 1;
    UNLOCK();
  }
  uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
  plStack_1c8 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  plStack_358 = (long *)0x0;
  plStack_350 = (long *)0x0;
  puStack_248 = &UNK_0f1475e0;
  plStack_240 = plVar8;
  plStack_238 = plVar10;
  func_0x0488fb40(&plStack_318,plVar11,&puStack_2b8,&plStack_1c8,uVar6,&puStack_248);
  if (puStack_248 != (undefined *)0x0) {
    (**(code **)(puStack_248 + 8))(&puStack_248);
  }
  plVar8 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_1c0 + 1;
    lVar14 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar8);
    }
  }
  plStack_178 = plStack_318;
  plStack_170 = plStack_310;
  if (plStack_310 != (long *)0x0) {
    LOCK();
    plStack_310[1] = plStack_310[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(puVar16 + 0x280);
  if (iVar4 != 1) {
    if (iVar4 == 3) {
      *(undefined4 *)(plStack_318 + 6) = 0;
    }
    else if (iVar4 == 2) {
      (**(code **)(*plStack_318 + 0x10))();
      goto LAB_08b4f036;
    }
    plStack_398 = plStack_318;
    plStack_390 = plStack_310;
    if (plStack_310 != (long *)0x0) {
      LOCK();
      plStack_310[1] = plStack_310[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,&plStack_398,0);
    plVar8 = plStack_390;
    if (plStack_390 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_390 + 1;
      lVar14 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_390 + 0x10))(plStack_390);
        func_0x0412c2d0(plVar8);
      }
    }
  }
LAB_08b4f036:
  plVar8 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_170 + 1;
    lVar14 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_350;
  if (plStack_350 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_350 + 1;
    lVar14 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_350 + 0x10))(plStack_350);
      func_0x0412c2d0(plVar8);
    }
  }
  if (plStack_310 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_310 + 1;
    lVar14 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_310 + 0x10))(plStack_310);
      func_0x0412c2d0(plStack_310);
    }
  }
  puStack_2b8 = puVar16;
  if ((*param_3 & 1) == 0) {
    lStack_2a0 = *(long *)(param_3 + 0x10);
    plStack_2b0 = *(long **)param_3;
    plStack_2a8 = *(long **)(param_3 + 8);
  }
  else {
    func_0x0412e5e0(&plStack_2b0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  uStack_298 = *(ulong *)(param_3 + 0x18);
  lStack_290 = *(long *)(param_3 + 0x20);
  if (*(long *)(param_3 + 0x20) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(param_3 + 0x20) + 8);
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  lStack_288 = *(long *)(param_3 + 0x28);
  lStack_280 = *(long *)(param_3 + 0x30);
  if (*(long *)(param_3 + 0x30) != 0) {
    LOCK();
    plVar8 = (long *)(*(long *)(param_3 + 0x30) + 8);
    *plVar8 = *plVar8 + 1;
    UNLOCK();
  }
  lStack_270 = *plStack_2d0;
  lStack_268 = plStack_2d0[1];
  lStack_260 = plStack_2d0[2];
  *plStack_2d0 = 0;
  plStack_2d0[1] = 0;
  plStack_2d0[2] = 0;
  uStack_258 = uStack_2d8;
  uStack_278 = param_4;
  uStack_250 = func_0x0417cc60();
  plStack_320 = plStack_330;
  plStack_328 = plStack_338;
  plStack_178 = (long *)&UNK_01347bdd;
  plStack_170 = (long *)0xa9;
  plStack_168 = _DAT_0f778528;
  uStack_160 = 0xffffffff00000001;
  uStack_158 = 0;
  uStack_150 = 0;
  plStack_338 = (long *)0x0;
  plStack_330 = (long *)0x0;
  plStack_2c8 = plStack_328;
  plStack_2c0 = plStack_320;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  puStack_248 = puStack_2b8;
  if (((ulong)plStack_2b0 & 1) == 0) {
    lStack_230 = lStack_2a0;
    plStack_240 = plStack_2b0;
    plStack_238 = plStack_2a8;
  }
  else {
    func_0x0412e5e0(&plStack_240,lStack_2a0,plStack_2a8);
  }
  uStack_228 = uStack_298;
  lStack_220 = lStack_290;
  if (lStack_290 != 0) {
    LOCK();
    *(long *)(lStack_290 + 8) = *(long *)(lStack_290 + 8) + 1;
    UNLOCK();
  }
  lStack_218 = lStack_288;
  lStack_210 = lStack_280;
  if (lStack_280 != 0) {
    LOCK();
    *(long *)(lStack_280 + 8) = *(long *)(lStack_280 + 8) + 1;
    UNLOCK();
  }
  uStack_208 = uStack_278;
  lStack_200 = lStack_270;
  lStack_1f8 = lStack_268;
  lStack_1f0 = lStack_260;
  lStack_270 = 0;
  lStack_268 = 0;
  lStack_260 = 0;
  uStack_1e8 = (undefined4)uStack_258;
  uStack_1e4 = uStack_258._4_4_;
  uStack_1e0 = (undefined4)uStack_250;
  uStack_1dc = uStack_250._4_4_;
  plStack_2c8 = (long *)0x0;
  plStack_2c0 = (long *)0x0;
  plStack_1c0 = (long *)0x0;
  plStack_1c8 = (long *)&UNK_0f147848;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x70,0);
  }
  puVar16 = puStack_340;
  *plVar8 = (long)puStack_248;
  if (((ulong)plStack_240 & 1) == 0) {
    plVar8[3] = lStack_230;
    plVar8[1] = (long)plStack_240;
    plVar8[2] = (long)plStack_238;
  }
  else {
    func_0x0412e5e0(plVar8 + 1,lStack_230,plStack_238);
  }
  plVar8[4] = uStack_228;
  plVar8[5] = lStack_220;
  if (lStack_220 != 0) {
    LOCK();
    *(long *)(lStack_220 + 8) = *(long *)(lStack_220 + 8) + 1;
    UNLOCK();
  }
  plVar8[6] = lStack_218;
  plVar8[7] = lStack_210;
  if (lStack_210 != 0) {
    LOCK();
    *(long *)(lStack_210 + 8) = *(long *)(lStack_210 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(plVar8 + 8) = uStack_208;
  plVar8[9] = lStack_200;
  plVar8[10] = lStack_1f8;
  plVar8[0xb] = lStack_1f0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  lStack_1f0 = 0;
  *(undefined4 *)(plVar8 + 0xc) = uStack_1e8;
  *(undefined4 *)((long)plVar8 + 100) = uStack_1e4;
  *(undefined4 *)(plVar8 + 0xd) = uStack_1e0;
  *(undefined4 *)((long)plVar8 + 0x6c) = uStack_1dc;
  plStack_1c0 = plVar8;
  param_1 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (param_1 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&UNK_0f147608;
  plVar8 = param_1 + 4;
  plStack_318 = (long *)0x0;
  plStack_310 = (long *)0x0;
  if (plStack_1c8 == (long *)0x0) {
    plStack_318 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1c8)(&plStack_1c8,&plStack_318);
    plStack_318 = plStack_1c8;
  }
  plStack_1c8 = (long *)0x0;
  func_0x0ee25c30(plVar8,plVar11,&plStack_178,1);
  plStack_398 = (long *)0x0;
  plStack_390 = (long *)0x0;
  if (plStack_318 == (long *)0x0) {
    plStack_398 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_318)(&plStack_318,&plStack_398);
    plStack_398 = plStack_318;
  }
  plStack_318 = (long *)0x0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = (long)&UNK_0f147790;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (plStack_398 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_398)(&plStack_398,param_1 + 0x16);
    plVar10 = plStack_398;
  }
  plStack_398 = (long *)0x0;
  param_1[0x16] = (long)plVar10;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x40,0);
  }
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &UNK_0f4848c0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined1 *)(puVar9 + 7) = 1;
  puVar9[3] = &UNK_0f484910;
  param_1[0x23] = (long)(puVar9 + 3);
  param_1[0x24] = (long)puVar9;
  *(undefined4 *)(param_1 + 0x25) = 400;
  *(undefined4 *)(param_1 + 0x26) = 0;
  lVar14 = func_0x0412dd40();
  param_1[0x27] = lVar14;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  if (plStack_398 != (long *)0x0) {
    (*(code *)plStack_398[1])(&plStack_398);
  }
  param_1[4] = (long)&UNK_0f147658;
  param_1[0x12] = (long)&UNK_0f1476a8;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  if ((param_1[0x16] == 0) &&
     (cVar5 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_012450e8),
     cVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (plStack_318 != (long *)0x0) {
    (*(code *)plStack_318[1])(&plStack_318);
  }
  if (param_1[0x14] == 0) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    LOCK();
    param_1[2] = param_1[2] + 1;
    UNLOCK();
    param_1[0x13] = (long)(param_1 + 0x13);
    param_1[0x14] = (long)param_1;
LAB_08b4f790:
    plVar10 = param_1 + 1;
    LOCK();
    lVar14 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
      func_0x0412c2d0(param_1);
    }
  }
  else if (*(long *)(param_1[0x14] + 8) == -1) {
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    LOCK();
    param_1[2] = param_1[2] + 1;
    UNLOCK();
    param_1[0x13] = (long)(param_1 + 0x13);
    param_1[0x14] = (long)param_1;
    func_0x0412c2d0();
    goto LAB_08b4f790;
  }
  LOCK();
  param_1[1] = param_1[1] + 1;
  UNLOCK();
  plStack_318 = plVar8;
  plStack_310 = param_1;
  (**(code **)(*plVar11 + 0x20))(plVar11,&plStack_318);
  plVar10 = plStack_310;
  if (plStack_310 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_310 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_310 + 0x10))(plStack_310);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_328;
  if (plStack_328 == (long *)0x0) {
LAB_08b4f9f2:
    if (plStack_1c8 != (long *)0x0) {
      (*(code *)plStack_1c8[1])(&plStack_1c8);
    }
    plVar10 = plStack_320;
    if (plStack_320 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_320 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_320 + 0x10))(plStack_320);
        func_0x0412c2d0(plVar10);
      }
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    iVar4 = *(int *)(puVar16 + 0x280);
    plStack_318 = plVar8;
    plStack_310 = param_1;
    if (iVar4 != 1) {
      if (iVar4 == 3) {
        *(undefined4 *)(param_1 + 10) = 0;
      }
      else if (iVar4 == 2) {
        (**(code **)(*plVar8 + 0x10))();
        goto LAB_08b4fad8;
      }
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      plStack_398 = plVar8;
      plStack_390 = param_1;
      (**(code **)(*plVar11 + 0x28))(plVar11,&plStack_398,0);
      plVar11 = plStack_390;
      if (plStack_390 != (long *)0x0) {
        LOCK();
        plVar8 = plStack_390 + 1;
        lVar14 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plStack_390 + 0x10))(plStack_390);
          func_0x0412c2d0(plVar11);
        }
      }
    }
LAB_08b4fad8:
    plVar11 = plStack_310;
    if (plStack_310 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_310 + 1;
      lVar14 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_310 + 0x10))(plStack_310);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plVar11 == (long *)0x0) {
      FUN_0eec74c0(0x98,0);
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *plVar11 = (long)&UNK_0f147870;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    *(undefined8 *)((long)plVar11 + 0x4a) = 0;
    *(undefined8 *)((long)plVar11 + 0x52) = 0;
    plVar11[0xc] = (long)(param_1 + 0x12);
    plVar11[0xd] = (long)param_1;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    plVar11[0x10] = 0;
    plVar11[0x11] = 0;
    plVar11[0x12] = 0;
    plVar11[3] = (long)&UNK_0f1478c0;
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
    plVar11[4] = (long)(plVar11 + 4);
    plVar11[5] = (long)plVar11;
    LOCK();
    plVar8 = plVar11 + 1;
    lVar14 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
    param_1 = (long *)plVar11[0xc];
    if (param_1 == (long *)0x0) {
      func_0x0412d680(plVar11 + 6);
      *(undefined1 *)((long)plVar11 + 0x59) = 1;
      func_0x0412d6b0(plVar11 + 6);
LAB_08b4fc4e:
      func_0x08b510e0(&puStack_248);
      plVar8 = plStack_2c0;
      if (plStack_2c0 != (long *)0x0) {
        LOCK();
        plVar10 = plStack_2c0 + 1;
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
          func_0x0412c2d0(plVar8);
        }
      }
      plVar8 = plStack_140;
      if (plStack_140 != (long *)0x0) {
        LOCK();
        plVar10 = plStack_140 + 1;
        lVar14 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          func_0x0412c2d0(plVar8);
        }
      }
      plVar8 = plStack_330;
      *plStack_180 = (long)(plVar11 + 3);
      plStack_180[1] = (long)plVar11;
      func_0x08b510e0(&puStack_2b8);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar11 = plVar8 + 1;
        lVar14 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x0488b200(auStack_128);
      if ((uStack_3b8 & 1) != 0) {
        func_0x0412a280(lStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
      }
      return;
    }
    if (plVar11[5] != 0) {
      lVar14 = plVar11[4];
      plVar8 = (long *)FUN_0412c300();
      if (plVar8 != (long *)0x0) {
        plStack_390 = (long *)(lVar14 + -8);
        if (lVar14 == 0) {
          plStack_390 = (long *)0x0;
        }
        plStack_398 = (long *)&UNK_0f1479d0;
        plStack_388 = plVar8;
        pplStack_378 = &plStack_398;
        (**(code **)(*param_1 + 0x30))(param_1,&plStack_398);
        if (pplStack_378 == &plStack_398) {
          lVar14 = 0x20;
        }
        else {
          lVar14 = 0x28;
          if (pplStack_378 == (long **)0x0) goto LAB_08b4fc4e;
        }
        (**(code **)((long)*pplStack_378 + lVar14))();
        goto LAB_08b4fc4e;
      }
    }
  }
  else {
    func_0x08b57530(plVar8,0,0,0);
    uVar6 = uStack_158;
    plVar13 = plStack_320;
    plStack_328 = (long *)0x0;
    plStack_320 = (long *)0x0;
    plStack_358 = plVar10;
    plStack_350 = plVar13;
    uStack_138 = 0;
    plStack_130 = (long *)0x0;
    func_0x0412d680(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x35) = uVar6;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar13[1] = plVar13[1] + 1;
      UNLOCK();
    }
    param_1[0x36] = (long)plVar10;
    plVar10 = (long *)param_1[0x37];
    param_1[0x37] = (long)plVar13;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar13 = plVar10 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0412d6b0(param_1 + 0x2c);
    if (param_1[0x14] != 0) {
      lVar14 = param_1[0x13];
      plVar10 = (long *)FUN_0412c300();
      if (plVar10 != (long *)0x0) {
        plVar13 = (long *)(lVar14 + -0x78);
        if (lVar14 == 0) {
          plVar13 = (long *)0x0;
        }
        LOCK();
        plVar10[2] = plVar10[2] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar10 + 1;
        lVar14 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          func_0x0412c2d0(plVar10);
        }
        plStack_398 = (long *)&UNK_0f1477d8;
        plStack_390 = plVar13;
        plStack_388 = plVar10;
        pplStack_378 = &plStack_398;
        (**(code **)(*plStack_358 + 0x30))(plStack_358,&plStack_398);
        puVar16 = puStack_340;
        if (pplStack_378 == &plStack_398) {
          lVar14 = 0x20;
LAB_08b4f98c:
          (**(code **)((long)*pplStack_378 + lVar14))();
        }
        else {
          lVar14 = 0x28;
          if (pplStack_378 != (long **)0x0) goto LAB_08b4f98c;
        }
        plVar10 = plStack_350;
        if (plStack_350 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_350 + 1;
          lVar14 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plStack_350 + 0x10))(plStack_350);
            func_0x0412c2d0(plVar10);
          }
        }
        plVar10 = plStack_130;
        if (plStack_130 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_130 + 1;
          lVar14 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*plStack_130 + 0x10))(plStack_130);
            func_0x0412c2d0(plVar10);
          }
        }
        goto LAB_08b4f9f2;
      }
    }
    func_0x04891290();
  }
  func_0x04891290();
LAB_08b4fdad:
  uVar12 = func_0x04882e30();
  func_0x0488fce0(&plStack_318);
  func_0x08b57500(param_1);
  func_0x08b510e0(&puStack_248);
  func_0x0488b3b0(&plStack_2c8);
  func_0x0488b3b0(&uStack_148);
  func_0x08b510e0(&puStack_2b8);
  func_0x0488b3b0(&plStack_338);
  do {
    func_0x0488b200(auStack_128);
    if ((uStack_3b8 & 1) != 0) {
      func_0x0412a280(lStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
    }
    uVar12 = func_0x0eee2d70(uVar12);
    uVar12 = func_0x04882e20(uVar12);
    uVar12 = func_0x04882e20(uVar12);
  } while( true );
}


