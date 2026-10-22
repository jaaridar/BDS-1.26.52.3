/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4bdc290 (ELF vaddr 0x4adc290)
 * Label: caller-of-callee
 * Body:  [[04bdc290, 04bddfcc] [04bddfd0, 04bdea75]]
 * Ghidra: FUN_04bdc290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04bdc290(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 **ppuVar22;
  undefined8 *puVar23;
  long **pplVar24;
  bool bVar25;
  long *plStack_5b8;
  byte bStack_5b0;
  undefined2 uStack_5af;
  undefined1 uStack_5ad;
  undefined1 uStack_5ac;
  undefined1 uStack_5ab;
  undefined2 uStack_5aa;
  undefined1 uStack_5a8;
  undefined4 uStack_5a7;
  undefined1 uStack_5a3;
  undefined2 uStack_5a2;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  uint *puStack_570;
  uint *puStack_568;
  long *plStack_560;
  long *plStack_558;
  byte bStack_550;
  undefined4 uStack_54f;
  undefined4 uStack_54b;
  undefined4 uStack_547;
  undefined4 uStack_543;
  undefined1 uStack_53f;
  undefined6 uStack_53e;
  long **pplStack_538;
  long *plStack_510;
  ulong auStack_508 [4];
  undefined *puStack_4e8;
  byte bStack_4e0;
  undefined7 uStack_4df;
  undefined1 uStack_4d8;
  undefined2 uStack_4d7;
  undefined5 uStack_4d5;
  undefined8 uStack_4d0;
  undefined **ppuStack_4c8;
  ulong auStack_4b8 [4];
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_378;
  undefined8 uStack_370;
  uint uStack_368;
  uint uStack_364;
  byte *pbStack_360;
  undefined8 uStack_358;
  long *plStack_338;
  byte bStack_330;
  undefined4 uStack_32f;
  uint uStack_32b;
  undefined4 uStack_327;
  undefined4 uStack_323;
  undefined7 uStack_31f;
  undefined8 uStack_318;
  long lStack_2f8;
  byte bStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined1 uStack_2e7;
  undefined6 uStack_2e6;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2b8;
  byte bStack_2b0;
  undefined4 uStack_2af;
  uint uStack_2ab;
  undefined4 uStack_2a7;
  undefined4 uStack_2a3;
  undefined7 uStack_29f;
  undefined8 uStack_298;
  long *plStack_278;
  undefined8 uStack_270;
  long *aplStack_268 [4];
  long **pplStack_248;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_378 = 0;
  if ((*param_1 & 1) == 0) {
    pbStack_360 = (byte *)param_1[2];
    uStack_370 = *param_1;
    uStack_368 = (uint)param_1[1];
    uStack_364 = *(uint *)((long)param_1 + 0xc);
    uStack_358 = 0;
    uVar10 = (ulong)(uint)*param_1 & 0xff;
    if (((uint)*param_1 & 1) != 0) goto LAB_04bdc31c;
LAB_04bdc2e9:
    if (uVar10 >> 1 != 0) goto LAB_04bdc32d;
LAB_04bdc441:
    uStack_358 = 0;
    uStack_378 = 0;
    plVar11 = (long *)param_3[4];
joined_r0x04bdc423:
    if (plVar11 != (long *)0x0) goto LAB_04bdc425;
LAB_04bdc455:
    pplStack_538 = (long **)0x0;
    uStack_270 = 0;
    plStack_278 = (long *)&UNK_0ef651a0;
    pplStack_248 = (long **)0x0;
  }
  else {
    FUN_0412e5e0(&uStack_370,param_1[2],param_1[1]);
    uStack_358 = 0;
    uVar10 = uStack_370 & 0xff;
    if ((uStack_370 & 1) == 0) goto LAB_04bdc2e9;
LAB_04bdc31c:
    if (CONCAT44(uStack_364,uStack_368) == 0) goto LAB_04bdc441;
LAB_04bdc32d:
    uStack_358 = 0;
    if ((uVar10 & 1) != 0) {
      pbVar18 = pbStack_360;
      if (pbStack_360 == (byte *)0x0) goto LAB_04bdc49d;
LAB_04bdc346:
      if (*pbVar18 == 0) goto LAB_04bdc441;
      uVar21 = 0xcbf29ce484222325;
      uVar10 = func_0x0eee2e90(pbVar18);
      if (uVar10 != 0) {
        uVar20 = (ulong)((uint)uVar10 & 7);
        if (7 < uVar10) {
          uVar10 = uVar10 & 0xfffffffffffffff8;
          do {
            uVar21 = (((((((uVar21 * 0x100000001b3 ^ (ulong)*pbVar18) * 0x100000001b3 ^
                          (ulong)pbVar18[1]) * 0x100000001b3 ^ (ulong)pbVar18[2]) * 0x100000001b3 ^
                        (ulong)pbVar18[3]) * 0x100000001b3 ^ (ulong)pbVar18[4]) * 0x100000001b3 ^
                      (ulong)pbVar18[5]) * 0x100000001b3 ^ (ulong)pbVar18[6]) * 0x100000001b3 ^
                     (ulong)pbVar18[7];
            pbVar18 = pbVar18 + 8;
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
        }
        if (uVar20 != 0) {
          uVar10 = 0;
          do {
            uVar21 = uVar21 * 0x100000001b3 ^ (ulong)pbVar18[uVar10];
            uVar10 = uVar10 + 1;
          } while (uVar20 != uVar10);
        }
      }
      plVar11 = (long *)param_3[4];
      uStack_378 = uVar21;
      goto joined_r0x04bdc423;
    }
    pbVar18 = (byte *)((long)&uStack_370 + 1);
    if (pbVar18 != (byte *)0x0) goto LAB_04bdc346;
LAB_04bdc49d:
    uStack_378 = 0;
    plVar11 = (long *)param_3[4];
    if (plVar11 == (long *)0x0) goto LAB_04bdc455;
LAB_04bdc425:
    if (plVar11 == param_3) {
      pplStack_538 = &plStack_558;
      (**(code **)(*plVar11 + 0x18))();
    }
    else {
      pplStack_538 = (long **)(**(code **)(*plVar11 + 0x10))();
    }
    pplStack_248 = pplStack_538;
    uStack_270 = 0;
    plStack_278 = (long *)&UNK_0ef651a0;
    if (pplStack_538 == (long **)0x0) {
      pplStack_248 = (long **)0x0;
    }
    else if (pplStack_538 == &plStack_558) {
      pplStack_248 = aplStack_268;
      (*(code *)(*pplStack_538)[3])(pplStack_538);
    }
    else {
      pplStack_538 = (long **)0x0;
    }
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef64fb8;
  plStack_5b8 = (long *)0x0;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  if (plStack_278 == (long *)0x0) {
    plStack_5b8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_278)(&plStack_278,&plStack_5b8);
    plStack_5b8 = plStack_278;
  }
  plStack_278 = (long *)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  plStack_510 = plVar11;
  FUN_04aa75f0(plVar11 + 0xe,&puStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar17 = plVar11 + 0x11;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef65008;
  pplVar24 = (long **)(plVar11 + 0x2e);
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  *(undefined1 *)(plVar11 + 0x36) = 0;
  if (pplVar24 != &plStack_5b8) {
    if (plStack_5b8 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_5b8)(&plStack_5b8,pplVar24);
      plVar16 = plStack_5b8;
    }
    plStack_5b8 = (long *)0x0;
    *pplVar24 = plVar16;
  }
  plStack_560 = plVar11 + 4;
  puVar2 = (uint *)(plVar11 + 0x12);
  if (plVar17 != (long *)&DAT_0f552108) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar11[0x14] = _DAT_0f552120;
        uVar6 = uRam000000000f55211c;
        uVar5 = _DAT_0f552118;
        uVar4 = uRam000000000f552114;
        *puVar2 = _DAT_0f552110;
        *(undefined4 *)((long)plVar11 + 0x94) = uVar4;
        *(undefined4 *)(plVar11 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar11 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar25 = (_DAT_0f552110 & 1) != 0;
      lVar14 = 0xf552111;
      if (bVar25) {
        lVar14 = _DAT_0f552120;
      }
      uVar10 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar25) {
        uVar10 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar2,lVar14,uVar10);
    }
  }
  plVar16 = plVar11 + 1;
  plVar11[0x11] = _DAT_0f552108;
  plVar11[0x15] = 0;
  if (plStack_5b8 != (long *)0x0) {
    (*(code *)plStack_5b8[1])(&plStack_5b8);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puStack_570 = puVar2;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef65100;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65150;
  puVar12[0xe] = plStack_560;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  plStack_5b8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x04bf2650(param_2,&uStack_378);
  plVar19 = *(long **)(puVar13 + 0x24);
  if (plVar19 < *(long **)(puVar13 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 != plVar17) {
      if ((*puStack_570 & 1) == 0) {
        plVar19[3] = *(long *)(puStack_570 + 4);
        lVar14 = *(long *)(puStack_570 + 2);
        plVar19[1] = *(long *)puStack_570;
        plVar19[2] = lVar14;
      }
      else {
        func_0x04885070(plVar19 + 1,plStack_510[0x14],plStack_510[0x13]);
      }
    }
    *plVar19 = *plVar17;
    plVar19[5] = (long)(puVar12 + 4);
    plVar19[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar19 = plVar19 + 7;
    *(long **)(puVar13 + 0x24) = plVar19;
    plVar11 = plStack_510;
  }
  else {
    plVar19 = (long *)func_0x04bea400(puVar13 + 0x22,plVar17,&plStack_5b8);
  }
  *(long **)(puVar13 + 0x24) = plVar19;
  uVar4 = *puVar13;
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar5;
  *(undefined4 *)(plVar11 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar17 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar14 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  if (plStack_278 != (long *)0x0) {
    (*(code *)plStack_278[1])(&plStack_278);
  }
  if (pplStack_538 == &plStack_558) {
    lVar14 = 0x20;
LAB_04bdccd4:
    (**(code **)((long)*pplStack_538 + lVar14))();
  }
  else {
    lVar14 = 0x28;
    if (pplStack_538 != (long **)0x0) goto LAB_04bdccd4;
  }
  if ((uStack_370 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 0x1a;
  uStack_5af = 0x6163;
  uStack_5ad = 0x6e;
  uStack_5ac = 0x6f;
  uStack_5ab = 0x70;
  uStack_5aa = 0x5f79;
  uStack_5a8 = 0x6f;
  uStack_5a7 = 0x65736666;
  uStack_5a3 = 0x74;
  plStack_5b8 = (long *)0x274d370d3fc65521;
  uStack_378 = 0;
  uStack_370 = 0;
  plVar11 = (long *)func_0x04bfe140(plStack_560,&plStack_5b8,1,&uStack_378);
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  lVar14 = (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_398);
  if ((uStack_398 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  if (uStack_378 != 0) {
    (**(code **)(uStack_378 + 8))(&uStack_378);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  uStack_5a8 = 0;
  uStack_5a7 = 0;
  uStack_5a3 = 0;
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 6;
  uStack_5af = 0x696d;
  uStack_5ad = 0x6e;
  plStack_5b8 = (long *)0xd8b3cd186b8cadc3;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0ef65640;
  plVar11 = (long *)func_0x04bfe670(lVar14,&plStack_5b8,1,&puStack_1f8);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_3b8);
  if ((uStack_3b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  uStack_5a8 = 0;
  uStack_5a7 = 0;
  uStack_5a3 = 0;
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 6;
  uStack_5af = 0x616d;
  uStack_5ad = 0x78;
  plStack_5b8 = (long *)0xd8b3c5186b8ca06d;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0ef65658;
  plVar11 = (long *)func_0x04bfe670(lVar14,&plStack_5b8,1,&puStack_f8);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_3d8);
  if ((uStack_3d8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_130 = 0;
  puStack_138 = (undefined8 *)&UNK_0ef65670;
  ppuVar22 = (undefined8 **)(lVar14 + 0xd0);
  if (ppuVar22 != &puStack_138) {
    if ((*ppuVar22 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar22)[1])(ppuVar22), puStack_138 != (undefined8 *)0x0)) {
      (*(code *)*puStack_138)(&puStack_138,ppuVar22);
      puVar12 = puStack_138;
    }
    else {
      puVar12 = (undefined8 *)0x0;
    }
    puStack_138 = (undefined8 *)0x0;
    *ppuVar22 = puVar12;
  }
  uStack_2e6 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  bStack_2f0 = 0x12;
  uStack_2ef = 0x6469775f6e696d;
  uStack_2e8 = 0x74;
  uStack_2e7 = 0x68;
  lStack_2f8 = -0x1b90c325ed38e126;
  uStack_70 = 0;
  bStack_550 = 0;
  uStack_54f = 0;
  uStack_54b = (uint)uStack_54b._3_1_ << 0x18;
  lStack_78 = 0;
  plStack_558 = (long *)&UNK_0ef65868;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5b8 = plStack_558;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef65698;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  plStack_558 = (long *)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  FUN_04aa75f0(plVar11 + 0xe,&puStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar17 = plVar11 + 0x11;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef656e8;
  plVar11[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar11 + 0x2f) = 1;
  plVar11[0x30] = 0;
  plVar11[0x31] = 0;
  if (plStack_5b8 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_5b8)(&plStack_5b8,plVar11 + 0x30);
    plVar16 = plStack_5b8;
  }
  plStack_5b8 = (long *)0x0;
  plVar11[0x30] = (long)plVar16;
  puVar2 = (uint *)(plVar11 + 0x12);
  if (plVar17 == (long *)&DAT_0f552078) {
    plVar11[0x15] = 0;
  }
  else {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar11[0x14] = _DAT_0f552090;
        uVar6 = uRam000000000f55208c;
        uVar5 = _DAT_0f552088;
        uVar4 = uRam000000000f552084;
        *puVar2 = _DAT_0f552080;
        *(undefined4 *)((long)plVar11 + 0x94) = uVar4;
        *(undefined4 *)(plVar11 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar11 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar25 = (_DAT_0f552080 & 1) != 0;
      lVar14 = 0xf552081;
      if (bVar25) {
        lVar14 = _DAT_0f552090;
      }
      uVar10 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar25) {
        uVar10 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar2,lVar14,uVar10);
    }
    plVar11[0x11] = _DAT_0f552078;
    plVar11[0x15] = 0;
    if (plStack_5b8 != (long *)0x0) {
      (*(code *)plStack_5b8[1])(&plStack_5b8);
    }
  }
  plVar16 = plVar11 + 1;
  puStack_568 = puVar2;
  if (plStack_558 != (long *)0x0) {
    (*(code *)plStack_558[1])(&plStack_558);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef657c8;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65818;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  plStack_5b8 = puVar12 + 4;
  puStack_570 = (uint *)(plVar11 + 4);
  puVar13 = (undefined4 *)func_0x04c02900(plStack_560,&lStack_2f8,0);
  plVar19 = *(long **)(puVar13 + 0x24);
  if (plVar19 < *(long **)(puVar13 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 != plVar17) {
      puVar2 = (uint *)(plVar19 + 1);
      if ((*puStack_568 & 1) == 0) {
        plVar19[3] = *(long *)(puStack_568 + 4);
        lVar14 = *(long *)(puStack_568 + 2);
        *(undefined8 *)puVar2 = *(undefined8 *)puStack_568;
        plVar19[2] = lVar14;
      }
      else {
        puStack_568 = puVar2;
        func_0x04885070(puVar2,plVar11[0x14],plVar11[0x13]);
      }
    }
    *plVar19 = *plVar17;
    plVar19[5] = (long)(puVar12 + 4);
    plVar19[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar19 = plVar19 + 7;
    *(long **)(puVar13 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x04c06050(puVar13 + 0x22,plVar17,&plStack_5b8);
  }
  *(long **)(puVar13 + 0x24) = plVar19;
  uVar4 = *puVar13;
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar5;
  *(undefined4 *)(plVar11 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar17 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  puVar2 = puStack_570;
  LOCK();
  lVar14 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  *(undefined4 *)(plVar11 + 0x2e) = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  (**(code **)(plVar11[4] + 0x10))(puVar2,&uStack_3f8);
  if ((uStack_3f8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_2f0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
  }
  uStack_5a3 = 0;
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 0x18;
  uStack_5af = 0x6163;
  uStack_5ad = 0x6e;
  uStack_5ac = 0x6f;
  uStack_5ab = 0x70;
  uStack_5aa = 0x5f79;
  uStack_5a8 = 0x73;
  uStack_5a7 = 0x65706f6c;
  plStack_5b8 = (long *)0xc610105d0970a4f5;
  lStack_2f8 = 0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  plVar11 = (long *)func_0x04bfe140(plStack_560,&plStack_5b8,0,&lStack_2f8);
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uVar15 = (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_418);
  if ((uStack_418 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  if (lStack_2f8 != 0) {
    (**(code **)(lStack_2f8 + 8))(&lStack_2f8);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_5ab = 0;
  uStack_5aa = 0;
  uStack_5a8 = 0;
  uStack_5a7 = 0;
  uStack_5a3 = 0;
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 8;
  uStack_5af = 0x6972;
  uStack_5ad = 0x73;
  uStack_5ac = 0x65;
  plStack_5b8 = (long *)0x9adc897ea77c9d2e;
  uStack_230 = 0;
  puStack_238 = &UNK_0ef65880;
  plVar11 = (long *)func_0x04bfe670(uVar15,&plStack_5b8,0,&puStack_238);
  *(undefined4 *)(plVar11 + 0x2a) = 1;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_238 != (undefined *)0x0) {
    (**(code **)(puStack_238 + 8))(&puStack_238);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  uStack_5a8 = 0;
  uStack_5a7 = 0;
  uStack_5a3 = 0;
  uStack_5a2 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  bStack_5b0 = 6;
  uStack_5af = 0x7572;
  uStack_5ad = 0x6e;
  plStack_5b8 = (long *)0xd8a2b1186b7e0a88;
  uStack_170 = 0;
  puStack_178 = &UNK_0ef65898;
  plVar11 = (long *)func_0x04bfe670(uVar15,&plStack_5b8,0,&puStack_178);
  *(undefined4 *)(plVar11 + 0x2a) = 1;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(*plVar11 + 0x10))(plVar11,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (puStack_178 != (undefined *)0x0) {
    (**(code **)(puStack_178 + 8))(&puStack_178);
  }
  if ((bStack_5b0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_5a0,
                       CONCAT26(uStack_5aa,
                                CONCAT15(uStack_5ab,
                                         CONCAT14(uStack_5ac,
                                                  CONCAT13(uStack_5ad,
                                                           CONCAT21(uStack_5af,bStack_5b0))))) &
                       0xfffffffffffffffe);
  }
  uStack_31f = 0;
  uStack_318 = 0;
  bStack_330 = 0x20;
  uStack_32f = _DAT_01325292;
  uStack_32b = _UNK_01325296;
  uStack_327 = _UNK_0132529a;
  uStack_323 = _UNK_0132529e;
  plStack_338 = (long *)0x9ae3e42108956397;
  uStack_b0 = 0;
  bStack_550 = 0;
  uStack_54f = 0;
  uStack_54b = uStack_54b & 0xff000000;
  lStack_b8 = 0;
  plStack_558 = (long *)&UNK_0ef65a90;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5b8 = plStack_558;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef658c0;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  plStack_558 = (long *)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  FUN_04aa75f0(plVar11 + 0xe,&lStack_1b8,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef65910;
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (plStack_5b8 == (long *)0x0) {
    plVar11[0x36] = 0;
    plVar11[0x37] = 0;
    puStack_568 = (uint *)(plVar11 + 0x12);
  }
  else {
    (*(code *)*plStack_5b8)(&plStack_5b8,plVar11 + 0x2e);
    plVar17 = plStack_5b8;
    puStack_568 = (uint *)(plVar11 + 0x12);
    plStack_5b8 = (long *)0x0;
    plVar11[0x2e] = (long)plVar17;
    plVar11[0x36] = 0;
    plVar11[0x37] = 0;
    if ((*(byte *)(plVar11 + 0x12) & 1) != 0) {
      thunk_FUN_0ee326a0(plVar11[0x14],plVar11[0x12] & 0xfffffffffffffffe);
    }
  }
  *(undefined2 *)(plVar11 + 0x12) = 0x6324;
  uVar6 = _UNK_012a3e21;
  uVar5 = _UNK_012a3e1d;
  uVar4 = _UNK_012a3e19;
  *(undefined4 *)((long)plVar11 + 0x92) = _DAT_012a3e15;
  *(undefined4 *)((long)plVar11 + 0x96) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x9a) = uVar5;
  *(undefined4 *)((long)plVar11 + 0x9e) = uVar6;
  *(undefined2 *)((long)plVar11 + 0xa2) = 0x6e;
  *(undefined4 *)((long)plVar11 + 0xa4) = 0;
  plVar11[0x11] = 0x601977ec4d12d34a;
  plVar11[0x15] = 0;
  if ((DAT_0f6b5120 == '\0') && (iVar9 = func_0x04108328(&DAT_0f6b5120), iVar9 != 0)) {
    func_0x0b6924c0();
    func_0x0eee2f40(&SUB_04b21360,&DAT_0f6b5110,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5120);
  }
  lVar8 = _DAT_0f6b5118;
  lVar14 = _DAT_0f6b5110;
  if (_DAT_0f6b5118 != 0) {
    LOCK();
    *(long *)(_DAT_0f6b5118 + 8) = *(long *)(_DAT_0f6b5118 + 8) + 1;
    UNLOCK();
  }
  plVar11[0x36] = lVar14;
  plVar17 = (long *)plVar11[0x37];
  plVar11[0x37] = lVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  if (plStack_5b8 != (long *)0x0) {
    (*(code *)plStack_5b8[1])(&plStack_5b8);
  }
  plVar17 = plVar11 + 1;
  if (plStack_558 != (long *)0x0) {
    (*(code *)plStack_558[1])(&plStack_558);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef659f0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65a40;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  plStack_5b8 = puVar12 + 4;
  puStack_570 = (uint *)(plVar11 + 4);
  puVar13 = (undefined4 *)func_0x04c02900(plStack_560,&plStack_338,0);
  plVar19 = plVar11 + 0x11;
  plVar16 = *(long **)(puVar13 + 0x24);
  if (plVar16 < *(long **)(puVar13 + 0x26)) {
    plVar16[2] = 0;
    plVar16[3] = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[4] = 0;
    if (plVar16 != plVar19) {
      pbVar18 = (byte *)(plVar16 + 1);
      if ((*puStack_568 & 1) == 0) {
        plVar16[3] = *(long *)((long)puStack_568 + 0x10);
        lVar14 = *(long *)((long)puStack_568 + 8);
        *(undefined8 *)pbVar18 = *(undefined8 *)puStack_568;
        plVar16[2] = lVar14;
      }
      else {
        puStack_568 = (uint *)pbVar18;
        func_0x04885070(pbVar18,plVar11[0x14],plVar11[0x13]);
      }
    }
    *plVar16 = *plVar19;
    plVar16[5] = (long)(puVar12 + 4);
    plVar16[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar16 = plVar16 + 7;
    *(long **)(puVar13 + 0x24) = plVar16;
  }
  else {
    plVar16 = (long *)func_0x04c06050(puVar13 + 0x22,plVar19,&plStack_5b8);
  }
  puVar2 = puStack_570;
  *(long **)(puVar13 + 0x24) = plVar16;
  uVar4 = *puVar13;
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar5;
  *(undefined4 *)(plVar11 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar7;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar19 = plVar16 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar16 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar19 = plVar16 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar14 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2,&uStack_478);
  if ((uStack_478 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_468,uStack_478 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_330 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_31f,uStack_323._3_1_),
                       CONCAT35((undefined3)uStack_32b,CONCAT41(uStack_32f,bStack_330)) &
                       0xfffffffffffffffe);
  }
  uStack_29f = 0;
  uStack_298 = 0;
  bStack_2b0 = 0x20;
  uStack_2af = _DAT_01325292;
  uStack_2ab = _UNK_01325296;
  uStack_2a7 = _UNK_0132529a;
  uStack_2a3 = _UNK_0132529e;
  lStack_2b8 = -0x651c1bdef76a9c69;
  plStack_338 = (long *)0x0;
  bStack_330 = 0;
  uStack_32f = 0;
  uStack_32b = uStack_32b & 0xff000000;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef65ab8;
  plStack_5b8 = (long *)0x0;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  if (plStack_338 == (long *)0x0) {
    plStack_5b8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_338)(&plStack_338,&plStack_5b8);
    plStack_5b8 = plStack_338;
  }
  plStack_338 = (long *)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  FUN_04aa75f0(plVar11 + 0xe,&plStack_558,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar17 = plVar11 + 0x11;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef65b08;
  pplVar24 = (long **)(plVar11 + 0x2e);
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (pplVar24 != &plStack_5b8) {
    if (plStack_5b8 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_5b8)(&plStack_5b8,pplVar24);
      plVar16 = plStack_5b8;
    }
    plStack_5b8 = (long *)0x0;
    *pplVar24 = plVar16;
  }
  puVar2 = (uint *)(plVar11 + 0x12);
  if (plVar17 != (long *)&DAT_0f551f58) {
    if ((*puVar2 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar11[0x14] = _DAT_0f551f70;
        uVar6 = uRam000000000f551f6c;
        uVar5 = _DAT_0f551f68;
        uVar4 = uRam000000000f551f64;
        *puVar2 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar11 + 0x94) = uVar4;
        *(undefined4 *)(plVar11 + 0x13) = uVar5;
        *(undefined4 *)((long)plVar11 + 0x9c) = uVar6;
      }
      else {
        func_0x04885070(puVar2,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar25 = (_DAT_0f551f60 & 1) != 0;
      lVar14 = 0xf551f61;
      if (bVar25) {
        lVar14 = _DAT_0f551f70;
      }
      uVar10 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar25) {
        uVar10 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar2,lVar14,uVar10);
    }
  }
  plVar16 = plVar11 + 1;
  plVar11[0x11] = _DAT_0f551f58;
  plVar11[0x15] = 0;
  if (plStack_5b8 != (long *)0x0) {
    (*(code *)plStack_5b8[1])(&plStack_5b8);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puStack_570 = puVar2;
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef65310;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65360;
  puVar12[0xe] = plVar11 + 4;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  plStack_5b8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x04c02900(plStack_560,&lStack_2b8,0);
  plVar19 = *(long **)(puVar13 + 0x24);
  if (plVar19 < *(long **)(puVar13 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 != plVar17) {
      puVar2 = (uint *)(plVar19 + 1);
      if ((*puStack_570 & 1) == 0) {
        plVar19[3] = *(long *)(puStack_570 + 4);
        lVar14 = *(long *)(puStack_570 + 2);
        *(undefined8 *)puVar2 = *(undefined8 *)puStack_570;
        plVar19[2] = lVar14;
      }
      else {
        puStack_570 = puVar2;
        func_0x04885070(puVar2,plVar11[0x14],plVar11[0x13]);
      }
    }
    *plVar19 = *plVar17;
    plVar19[5] = (long)(puVar12 + 4);
    plVar19[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar19 = plVar19 + 7;
    *(long **)(puVar13 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x04c06050(puVar13 + 0x22,plVar17,&plStack_5b8);
  }
  *(long **)(puVar13 + 0x24) = plVar19;
  uVar4 = *puVar13;
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar5;
  *(undefined4 *)(plVar11 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar17 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar14 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  uStack_1b0 = 0;
  bStack_550 = 0;
  uStack_54f = 0;
  uStack_54b = uStack_54b & 0xff000000;
  lStack_1b8 = 0;
  plStack_558 = (long *)&UNK_0ef65d48;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar17 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5b8 = plStack_558;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0ef65b78;
  plVar16 = plVar17 + 4;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  plStack_558 = (long *)0x0;
  func_0x04c0bf00(plVar16,&plStack_5b8);
  if (plStack_5b8 != (long *)0x0) {
    (*(code *)plStack_5b8[1])(&plStack_5b8);
  }
  plVar19 = plVar17 + 1;
  if (plStack_558 != (long *)0x0) {
    (*(code *)plStack_558[1])(&plStack_558);
  }
  LOCK();
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef65ca8;
  plStack_5b8 = puVar12 + 4;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65cf8;
  puVar12[0xe] = plVar16;
  puVar12[0xf] = plVar17;
  LOCK();
  plVar17[1] = plVar17[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  puVar3 = (undefined8 *)plVar11[0x1c];
  for (puVar23 = (undefined8 *)plVar11[0x1b]; puStack_570 = (uint *)plVar16,
      puStack_568 = (uint *)plStack_5b8, puVar23 != puVar3; puVar23 = puVar23 + 0x15) {
    if ((puVar23[0xf] == 0) && (puVar23[0x10] == -1)) {
      plVar11 = (long *)puVar23[0x12];
      if ((long *)puVar23[0x13] <= plVar11) goto LAB_04bde11b;
      goto LAB_04bde008;
    }
  }
  if (puVar3 < (undefined8 *)plVar11[0x1d]) {
    func_0x04c08060(puVar3);
    plVar11[0x1c] = (long)(puVar3 + 0x15);
    plVar11[0x1c] = (long)(puVar3 + 0x15);
    pbVar18 = (byte *)*puVar3;
    if ((*pbVar18 & 1) == 0) goto LAB_04bde0b6;
LAB_04bde082:
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
  else {
    lVar14 = func_0x04c07dd0(plVar11 + 0x1b);
    plVar11[0x1c] = lVar14;
    pbVar18 = *(byte **)(lVar14 + -0xa8);
    if ((*pbVar18 & 1) != 0) goto LAB_04bde082;
LAB_04bde0b6:
    *pbVar18 = 0x26;
    pbVar18 = pbVar18 + 1;
  }
  uVar6 = _UNK_01494d69;
  uVar5 = _UNK_01494d65;
  uVar4 = _UNK_01494d61;
  *(undefined4 *)pbVar18 = _DAT_01494d5d;
  *(undefined4 *)(pbVar18 + 4) = uVar4;
  *(undefined4 *)(pbVar18 + 8) = uVar5;
  *(undefined4 *)(pbVar18 + 0xc) = uVar6;
  pbVar18[0xf] = 0x65;
  pbVar18[0x10] = 0x6e;
  pbVar18[0x11] = 0x74;
  pbVar18[0x12] = 0x3e;
  pbVar18[0x13] = 0;
  lVar14 = plVar11[0x1c];
  puVar23 = (undefined8 *)(lVar14 + -0xa8);
  *(char *)(lVar14 + -7) = (char)plVar11[0x10];
  *(undefined8 *)(lVar14 + -0x30) = 0;
  *(undefined8 *)(lVar14 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar14 + -8) = 0;
  plVar11 = *(long **)(lVar14 + -0x18);
  if (plVar11 < *(long **)(lVar14 + -0x10)) {
LAB_04bde008:
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[4] = 0;
    if (plVar11 != plVar17 + 0x11) {
      if ((*(byte *)(plVar17 + 0x12) & 1) == 0) {
        plVar11[3] = plVar17[0x14];
        lVar14 = plVar17[0x13];
        plVar11[1] = plVar17[0x12];
        plVar11[2] = lVar14;
      }
      else {
        func_0x04885070(plVar11 + 1,plVar17[0x14],plVar17[0x13]);
      }
    }
    *plVar11 = plVar17[0x11];
    plVar11[5] = (long)puStack_568;
    plVar11[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar11 = plVar11 + 7;
    puVar23[0x12] = plVar11;
  }
  else {
LAB_04bde11b:
    plVar11 = (long *)func_0x04c081e0(puVar23 + 0x11,plVar17 + 0x11,&plStack_5b8);
  }
  puVar23[0x12] = plVar11;
  uVar4 = *(undefined4 *)puVar23;
  uVar5 = *(undefined4 *)((long)puVar23 + 4);
  uVar6 = *(undefined4 *)(puVar23 + 1);
  uVar7 = *(undefined4 *)((long)puVar23 + 0xc);
  if (puVar23[1] != 0) {
    LOCK();
    plVar11 = (long *)(puVar23[1] + 8);
    *plVar11 = *plVar11 + 1;
    UNLOCK();
  }
  plVar11 = (long *)plVar17[0xf];
  *(undefined4 *)(plVar17 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar17 + 0x74) = uVar5;
  *(undefined4 *)(plVar17 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar17 + 0x7c) = uVar7;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  *(undefined1 *)(plVar17 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  plVar11 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar16 = plVar11 + 1;
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  puVar2 = puStack_570;
  LOCK();
  lVar14 = *plVar19;
  *plVar19 = *plVar19 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
    func_0x0412c2d0(plVar17);
  }
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  (**(code **)(*(long *)puVar2 + 0x10))(puVar2,&uStack_498);
  if ((uStack_498 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if (lStack_1b8 != 0) {
    (**(code **)(lStack_1b8 + 8))(&lStack_1b8);
  }
  if (plStack_338 != (long *)0x0) {
    (*(code *)plStack_338[1])(&plStack_338);
  }
  if ((bStack_2b0 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT71(uStack_29f,uStack_2a3._3_1_),
                       CONCAT35((undefined3)uStack_2ab,CONCAT41(uStack_2af,bStack_2b0)) &
                       0xfffffffffffffffe);
  }
  uStack_4d5 = 0;
  uStack_4d0 = 0;
  ppuStack_4c8 = (undefined **)0x0;
  puStack_4e8 = (undefined *)0x3a4ad5b186795d27;
  bStack_4e0 = 0x14;
  uStack_4df = 0x6c625f6661656c;
  uStack_4d8 = 0x6f;
  uStack_4d7 = 0x6b63;
  bStack_2b0 = 0;
  uStack_2af = 0;
  uStack_2ab = uStack_2ab & 0xff000000;
  bStack_550 = 0;
  uStack_54f = 0;
  uStack_54b = uStack_54b & 0xff000000;
  lStack_2b8 = 0;
  plStack_558 = (long *)&UNK_0ef65f40;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_5b8 = plStack_558;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef65d70;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  plStack_558 = (long *)0x0;
  plVar11[4] = (long)&UNK_0f2ccd78;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined1 *)(plVar11 + 0xd) = 0;
  FUN_04aa75f0(plVar11 + 0xe,auStack_508,&UNK_01254d89);
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0xffffffff;
  plVar11[0x26] = 0;
  plVar11[0x27] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0;
  plVar11[0x1c] = 0;
  plVar11[0x1d] = 0;
  plVar11[0x1e] = 0;
  plVar11[0x1f] = 0;
  plVar11[4] = (long)&UNK_0ef65dc0;
  plVar11[0x2e] = 0;
  plVar11[0x2f] = 0;
  if (plStack_5b8 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_5b8)(&plStack_5b8,plVar11 + 0x2e);
    plVar17 = plStack_5b8;
  }
  plVar16 = plVar11 + 1;
  plVar11[0x2e] = (long)plVar17;
  if (plStack_558 != (long *)0x0) {
    (*(code *)plStack_558[1])(&plStack_558);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_570 = (uint *)(plVar11 + 4);
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0ef65ea0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[4] = &UNK_0ef65ef0;
  puVar12[0xe] = puStack_570;
  puVar12[0xf] = plVar11;
  LOCK();
  plVar11[1] = plVar11[1] + 1;
  UNLOCK();
  bStack_5b0 = (byte)puVar12;
  uStack_5af = (undefined2)((ulong)puVar12 >> 8);
  uStack_5ad = (undefined1)((ulong)puVar12 >> 0x18);
  uStack_5ac = (undefined1)((ulong)puVar12 >> 0x20);
  uStack_5ab = (undefined1)((ulong)puVar12 >> 0x28);
  uStack_5aa = (undefined2)((ulong)puVar12 >> 0x30);
  plStack_5b8 = puVar12 + 4;
  puVar13 = (undefined4 *)func_0x04c02900(plStack_560,&puStack_4e8,1);
  plVar17 = plVar11 + 0x11;
  plVar19 = *(long **)(puVar13 + 0x24);
  if (plVar19 < *(long **)(puVar13 + 0x26)) {
    plVar19[2] = 0;
    plVar19[3] = 0;
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar19[4] = 0;
    if (plVar19 != plVar17) {
      plVar1 = plVar19 + 1;
      if ((*(byte *)(plVar11 + 0x12) & 1) == 0) {
        plVar19[3] = plVar11[0x14];
        lVar14 = plVar11[0x13];
        *plVar1 = plVar11[0x12];
        plVar19[2] = lVar14;
      }
      else {
        puStack_568 = (uint *)plVar1;
        func_0x04885070(plVar1,plVar11[0x14],plVar11[0x13]);
      }
    }
    *plVar19 = *plVar17;
    plVar19[5] = (long)(puVar12 + 4);
    plVar19[6] = (long)puVar12;
    LOCK();
    puVar12[1] = puVar12[1] + 1;
    UNLOCK();
    plVar19 = plVar19 + 7;
    *(long **)(puVar13 + 0x24) = plVar19;
  }
  else {
    plVar19 = (long *)func_0x04c06050(puVar13 + 0x22,plVar17,&plStack_5b8);
  }
  *(long **)(puVar13 + 0x24) = plVar19;
  uVar4 = *puVar13;
  uVar5 = puVar13[1];
  uVar6 = puVar13[2];
  uVar7 = puVar13[3];
  if (*(long *)(puVar13 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar13 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar11[0xf];
  *(undefined4 *)(plVar11 + 0xe) = uVar4;
  *(undefined4 *)((long)plVar11 + 0x74) = uVar5;
  *(undefined4 *)(plVar11 + 0xf) = uVar6;
  *(undefined4 *)((long)plVar11 + 0x7c) = uVar7;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)((long)puVar13 + 0xa1);
  plVar17 = (long *)CONCAT26(uStack_5aa,
                             CONCAT15(uStack_5ab,
                                      CONCAT14(uStack_5ac,
                                               CONCAT13(uStack_5ad,CONCAT21(uStack_5af,bStack_5b0)))
                                     ));
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar14 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_510;
  LOCK();
  lVar14 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar14 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar14 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    func_0x0412c2d0(plVar11);
  }
  auStack_508[0] = 0;
  auStack_508[1] = 0;
  auStack_508[2] = 0;
  (**(code **)(*(long *)puStack_570 + 0x10))(puStack_570,auStack_508);
  if ((auStack_508[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_508[2],auStack_508[0] & 0xfffffffffffffffe);
  }
  if (lStack_2b8 != 0) {
    (**(code **)(lStack_2b8 + 8))(&lStack_2b8);
  }
  if ((bStack_4e0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_4d0,CONCAT71(uStack_4df,bStack_4e0) & 0xfffffffffffffffe);
  }
  uStack_53e = 0;
  pplStack_538 = (long **)0x0;
  bStack_550 = 0x22;
  uStack_54f = _DAT_0144756d;
  uStack_54b = _UNK_01447571;
  uStack_547 = _UNK_01447575;
  uStack_543 = _UNK_01447579;
  uStack_53f = 0x6e;
  plStack_558 = (long *)0xeb39c99c74d7c18a;
  plStack_5b8 = (long *)0x0;
  bStack_5b0 = 0;
  uStack_5af = 0;
  uStack_5ad = 0;
  uStack_5ac = 0;
  uStack_5ab = 0;
  uStack_5aa = 0;
  plVar11 = (long *)func_0x04bfe140(plStack_560,&plStack_558,0,&plStack_5b8);
  auStack_4b8[0] = 0;
  auStack_4b8[1] = 0;
  auStack_4b8[2] = 0;
  uVar15 = (**(code **)(*plVar11 + 0x10))(plVar11,auStack_4b8);
  if ((auStack_4b8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_4b8[2],auStack_4b8[0] & 0xfffffffffffffffe);
  }
  if (plStack_5b8 != (long *)0x0) {
    (*(code *)plStack_5b8[1])(&plStack_5b8);
  }
  if ((bStack_550 & 1) != 0) {
    thunk_FUN_0ee326a0(CONCAT62(uStack_53e,CONCAT11(uStack_53f,uStack_543._3_1_)),
                       CONCAT35((undefined3)uStack_54b,CONCAT41(uStack_54f,bStack_550)) &
                       0xfffffffffffffffe);
  }
  plStack_558 = (long *)&UNK_0ef65f68;
  puStack_4e8 = &UNK_0ef65f68;
  pplStack_538 = &plStack_558;
  ppuStack_4c8 = &puStack_4e8;
  func_0x04bfec10(uVar15,&puStack_4e8);
  if (ppuStack_4c8 == &puStack_4e8) {
    lVar14 = 0x20;
LAB_04bde8e8:
    (**(code **)(*ppuStack_4c8 + lVar14))();
    if (pplStack_538 != &plStack_558) goto LAB_04bde8a0;
LAB_04bde8fb:
    lVar14 = 0x20;
  }
  else {
    lVar14 = 0x28;
    if (ppuStack_4c8 != (undefined **)0x0) goto LAB_04bde8e8;
    if (pplStack_538 == &plStack_558) goto LAB_04bde8fb;
LAB_04bde8a0:
    lVar14 = 0x28;
    if (pplStack_538 == (long **)0x0) goto LAB_04bde906;
  }
  (**(code **)((long)*pplStack_538 + lVar14))();
LAB_04bde906:
  bStack_550 = 0;
  uStack_54f = 0;
  uStack_54b = uStack_54b & 0xff000000;
  plStack_558 = (long *)&UNK_0ef66cb8;
  pplVar24 = (long **)(plVar17 + 0x1e);
  if (pplVar24 != &plStack_558) {
    if ((*pplVar24 == (long *)0x0) ||
       ((*(code *)(*pplVar24)[1])(pplVar24), plStack_558 != (long *)0x0)) {
      (*(code *)*plStack_558)(&plStack_558,pplVar24);
    }
    else {
      plStack_558 = (long *)0x0;
    }
    *pplVar24 = plStack_558;
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a3e15  hance_information
 * 0x1325292  variation_chance
 * 0x144756d  canopy_decoration
 * 0x1494d5d  <any array element>
 */
