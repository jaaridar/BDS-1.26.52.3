/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ad80a0 (ELF vaddr 0x49d80a0)
 * Label: caller-of-callee
 * Body:  [[04ad80a0, 04ad9e17] [04ad9e20, 04ada8c2]]
 * Ghidra: FUN_04ad80a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04ad80a0(ulong *param_1,undefined8 param_2,long *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 **ppuVar22;
  undefined8 *puVar23;
  long **pplVar24;
  bool bVar25;
  long *plStack_5a8;
  byte bStack_5a0;
  undefined2 uStack_59f;
  undefined1 uStack_59d;
  undefined1 uStack_59c;
  undefined1 uStack_59b;
  undefined2 uStack_59a;
  undefined1 uStack_598;
  undefined4 uStack_597;
  undefined1 uStack_593;
  undefined2 uStack_592;
  undefined8 uStack_590;
  undefined8 uStack_588;
  uint *puStack_568;
  uint *puStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  byte bStack_540;
  undefined4 uStack_53f;
  undefined4 uStack_53b;
  undefined4 uStack_537;
  undefined4 uStack_533;
  undefined1 uStack_52f;
  undefined6 uStack_52e;
  long **pplStack_528;
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
    uVar9 = (ulong)(uint)*param_1 & 0xff;
    if (((uint)*param_1 & 1) != 0) goto LAB_04ad812c;
LAB_04ad80f9:
    if (uVar9 >> 1 != 0) goto LAB_04ad813d;
LAB_04ad8251:
    uStack_358 = 0;
    uStack_378 = 0;
    plVar10 = (long *)param_3[4];
joined_r0x04ad8233:
    if (plVar10 != (long *)0x0) goto LAB_04ad8235;
LAB_04ad8265:
    pplStack_528 = (long **)0x0;
    uStack_270 = 0;
    plStack_278 = (long *)&UNK_0ef59408;
    pplStack_248 = (long **)0x0;
  }
  else {
    func_0x0412e5e0(&uStack_370,param_1[2],param_1[1]);
    uStack_358 = 0;
    uVar9 = uStack_370 & 0xff;
    if ((uStack_370 & 1) == 0) goto LAB_04ad80f9;
LAB_04ad812c:
    if (CONCAT44(uStack_364,uStack_368) == 0) goto LAB_04ad8251;
LAB_04ad813d:
    uStack_358 = 0;
    if ((uVar9 & 1) != 0) {
      pbVar17 = pbStack_360;
      if (pbStack_360 == (byte *)0x0) goto LAB_04ad82ad;
LAB_04ad8156:
      if (*pbVar17 == 0) goto LAB_04ad8251;
      uVar20 = 0xcbf29ce484222325;
      uVar9 = func_0x0eee2e90(pbVar17);
      if (uVar9 != 0) {
        uVar19 = (ulong)((uint)uVar9 & 7);
        if (7 < uVar9) {
          uVar9 = uVar9 & 0xfffffffffffffff8;
          do {
            uVar20 = (((((((uVar20 * 0x100000001b3 ^ (ulong)*pbVar17) * 0x100000001b3 ^
                          (ulong)pbVar17[1]) * 0x100000001b3 ^ (ulong)pbVar17[2]) * 0x100000001b3 ^
                        (ulong)pbVar17[3]) * 0x100000001b3 ^ (ulong)pbVar17[4]) * 0x100000001b3 ^
                      (ulong)pbVar17[5]) * 0x100000001b3 ^ (ulong)pbVar17[6]) * 0x100000001b3 ^
                     (ulong)pbVar17[7];
            pbVar17 = pbVar17 + 8;
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
        }
        if (uVar19 != 0) {
          uVar9 = 0;
          do {
            uVar20 = uVar20 * 0x100000001b3 ^ (ulong)pbVar17[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar19 != uVar9);
        }
      }
      plVar10 = (long *)param_3[4];
      uStack_378 = uVar20;
      goto joined_r0x04ad8233;
    }
    pbVar17 = (byte *)((long)&uStack_370 + 1);
    if (pbVar17 != (byte *)0x0) goto LAB_04ad8156;
LAB_04ad82ad:
    uStack_378 = 0;
    plVar10 = (long *)param_3[4];
    if (plVar10 == (long *)0x0) goto LAB_04ad8265;
LAB_04ad8235:
    if (plVar10 == param_3) {
      pplStack_528 = &plStack_548;
      (**(code **)(*plVar10 + 0x18))();
    }
    else {
      pplStack_528 = (long **)(**(code **)(*plVar10 + 0x10))();
    }
    pplStack_248 = pplStack_528;
    uStack_270 = 0;
    plStack_278 = (long *)&UNK_0ef59408;
    if (pplStack_528 == (long **)0x0) {
      pplStack_248 = (long **)0x0;
    }
    else if (pplStack_528 == &plStack_548) {
      pplStack_248 = aplStack_268;
      (*(code *)(*pplStack_528)[3])(pplStack_528);
    }
    else {
      pplStack_528 = (long **)0x0;
    }
  }
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef59220;
  plStack_5a8 = (long *)0x0;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  if (plStack_278 == (long *)0x0) {
    plStack_5a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_278)(&plStack_278,&plStack_5a8);
    plStack_5a8 = plStack_278;
  }
  plStack_278 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  plStack_550 = plVar10;
  func_0x04aa75f0(plVar10 + 0xe,&puStack_1f8,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar16 = plVar10 + 0x11;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0ef59270;
  pplVar24 = (long **)(plVar10 + 0x2e);
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  *(undefined1 *)(plVar10 + 0x36) = 0;
  if (pplVar24 != &plStack_5a8) {
    if (plStack_5a8 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_5a8)(&plStack_5a8,pplVar24);
      plVar15 = plStack_5a8;
    }
    plStack_5a8 = (long *)0x0;
    *pplVar24 = plVar15;
  }
  plStack_558 = plVar10 + 4;
  puVar1 = (uint *)(plVar10 + 0x12);
  if (plVar16 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552120;
        uVar5 = uRam000000000f55211c;
        uVar4 = _DAT_0f552118;
        uVar3 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar10 + 0x94) = uVar3;
        *(undefined4 *)(plVar10 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar10 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar25 = (_DAT_0f552110 & 1) != 0;
      lVar13 = 0xf552111;
      if (bVar25) {
        lVar13 = _DAT_0f552120;
      }
      uVar9 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar25) {
        uVar9 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar13,uVar9);
    }
  }
  plVar15 = plVar10 + 1;
  plVar10[0x11] = _DAT_0f552108;
  plVar10[0x15] = 0;
  if (plStack_5a8 != (long *)0x0) {
    (*(code *)plStack_5a8[1])(&plStack_5a8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef59368;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef593b8;
  puVar11[0xe] = plStack_558;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  plStack_5a8 = puVar11 + 4;
  puVar12 = (undefined4 *)func_0x04b081a0(param_2,&uStack_378,0);
  plVar21 = plStack_550;
  plVar18 = *(long **)(puVar12 + 0x24);
  if (plVar18 < *(long **)(puVar12 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 == plVar16) {
LAB_04ad8644:
      *plVar18 = *plVar16;
      plVar18[5] = (long)(puVar11 + 4);
      plVar18[6] = (long)puVar11;
LAB_04ad86ae:
      LOCK();
      puVar11[1] = puVar11[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puVar1 & 1) == 0) {
        plVar18[3] = plVar10[0x14];
        lVar13 = plVar10[0x13];
        plVar18[1] = *(long *)puVar1;
        plVar18[2] = lVar13;
        goto LAB_04ad8644;
      }
      func_0x04885070(plVar18 + 1,plStack_550[0x14],plStack_550[0x13]);
      *plVar18 = *plVar16;
      puVar11 = (undefined8 *)
                CONCAT26(uStack_59a,
                         CONCAT15(uStack_59b,
                                  CONCAT14(uStack_59c,
                                           CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))));
      plVar18[5] = (long)plStack_5a8;
      plVar18[6] = CONCAT26(uStack_59a,
                            CONCAT15(uStack_59b,
                                     CONCAT14(uStack_59c,
                                              CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0))))
                           );
      if (puVar11 != (undefined8 *)0x0) goto LAB_04ad86ae;
    }
    plVar18 = plVar18 + 7;
    *(long **)(puVar12 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x04b0c1b0(puVar12 + 0x22,plVar16,&plStack_5a8);
    plVar21 = plStack_550;
  }
  *(long **)(puVar12 + 0x24) = plVar18;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar21[0xf];
  *(undefined4 *)(plVar21 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar21 + 0x74) = uVar4;
  *(undefined4 *)(plVar21 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar21 + 0x7c) = uVar6;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar16 = plVar10 + 1;
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(plVar21 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar10 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar16 = plVar10 + 1;
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  LOCK();
  lVar13 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar21 + 0x10))(plVar21);
    func_0x0412c2d0(plVar21);
  }
  if (plStack_278 != (long *)0x0) {
    (*(code *)plStack_278[1])(&plStack_278);
  }
  if (pplStack_528 == &plStack_548) {
    lVar13 = 0x20;
LAB_04ad8b1f:
    (**(code **)((long)*pplStack_528 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (pplStack_528 != (long **)0x0) goto LAB_04ad8b1f;
  }
  if ((uStack_370 & 1) != 0) {
    func_0x0412a280(pbStack_360,uStack_370 & 0xfffffffffffffffe);
  }
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 0x1a;
  uStack_59f = 0x6163;
  uStack_59d = 0x6e;
  uStack_59c = 0x6f;
  uStack_59b = 0x70;
  uStack_59a = 0x5f79;
  uStack_598 = 0x6f;
  uStack_597 = 0x65736666;
  uStack_593 = 0x74;
  plStack_5a8 = (long *)0x274d370d3fc65521;
  uStack_378 = 0;
  uStack_370 = 0;
  plVar10 = (long *)func_0x04b15390(plStack_558,&plStack_5a8,1,&uStack_378);
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  lVar13 = (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_398);
  if ((uStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  if (uStack_378 != 0) {
    (**(code **)(uStack_378 + 8))(&uStack_378);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  uStack_598 = 0;
  uStack_597 = 0;
  uStack_593 = 0;
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 6;
  uStack_59f = 0x696d;
  uStack_59d = 0x6e;
  plStack_5a8 = (long *)0xd8b3cd186b8cadc3;
  uStack_1f0 = 0;
  puStack_1f8 = &UNK_0ef598a8;
  plVar10 = (long *)func_0x04b158c0(lVar13,&plStack_5a8,1,&puStack_1f8);
  uStack_3b8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_3b8);
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  if (puStack_1f8 != (undefined *)0x0) {
    (**(code **)(puStack_1f8 + 8))(&puStack_1f8);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  uStack_598 = 0;
  uStack_597 = 0;
  uStack_593 = 0;
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 6;
  uStack_59f = 0x616d;
  uStack_59d = 0x78;
  plStack_5a8 = (long *)0xd8b3c5186b8ca06d;
  uStack_f0 = 0;
  puStack_f8 = &UNK_0ef598c0;
  plVar10 = (long *)func_0x04b158c0(lVar13,&plStack_5a8,1,&puStack_f8);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_3d8);
  if ((uStack_3d8 & 1) != 0) {
    func_0x0412a280(uStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
  }
  if (puStack_f8 != (undefined *)0x0) {
    (**(code **)(puStack_f8 + 8))(&puStack_f8);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_130 = 0;
  puStack_138 = (undefined8 *)&UNK_0ef598d8;
  ppuVar22 = (undefined8 **)(lVar13 + 0xd0);
  if (ppuVar22 != &puStack_138) {
    if ((*ppuVar22 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar22)[1])(ppuVar22), puStack_138 != (undefined8 *)0x0)) {
      (*(code *)*puStack_138)(&puStack_138,ppuVar22);
      puVar11 = puStack_138;
    }
    else {
      puVar11 = (undefined8 *)0x0;
    }
    puStack_138 = (undefined8 *)0x0;
    *ppuVar22 = puVar11;
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
  bStack_540 = 0;
  uStack_53f = 0;
  uStack_53b = (uint)uStack_53b._3_1_ << 0x18;
  lStack_78 = 0;
  plStack_548 = (long *)&UNK_0ef59ad0;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5a8 = plStack_548;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef59900;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  plStack_548 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,&puStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar16 = plVar10 + 0x11;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0ef59950;
  plVar10[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar10 + 0x2f) = 1;
  plVar10[0x30] = 0;
  plVar10[0x31] = 0;
  if (plStack_5a8 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_5a8)(&plStack_5a8,plVar10 + 0x30);
    plVar15 = plStack_5a8;
  }
  plStack_5a8 = (long *)0x0;
  plVar10[0x30] = (long)plVar15;
  puVar1 = (uint *)(plVar10 + 0x12);
  if (plVar16 == (long *)&DAT_0f552078) {
    plVar10[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar10[0x14] = _DAT_0f552090;
        uVar5 = uRam000000000f55208c;
        uVar4 = _DAT_0f552088;
        uVar3 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar10 + 0x94) = uVar3;
        *(undefined4 *)(plVar10 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar10 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar25 = (_DAT_0f552080 & 1) != 0;
      lVar13 = 0xf552081;
      if (bVar25) {
        lVar13 = _DAT_0f552090;
      }
      uVar9 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar25) {
        uVar9 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar13,uVar9);
    }
    plVar10[0x11] = _DAT_0f552078;
    plVar10[0x15] = 0;
    if (plStack_5a8 != (long *)0x0) {
      (*(code *)plStack_5a8[1])(&plStack_5a8);
    }
  }
  plVar15 = plVar10 + 1;
  puStack_568 = puVar1;
  if (plStack_548 != (long *)0x0) {
    (*(code *)plStack_548[1])(&plStack_548);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef59a30;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef59a80;
  puVar11[0xe] = plVar10 + 4;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  plStack_5a8 = puVar11 + 4;
  puStack_560 = (uint *)(plVar10 + 4);
  puVar12 = (undefined4 *)func_0x04b19b50(plStack_558,&lStack_2f8,0);
  plVar18 = *(long **)(puVar12 + 0x24);
  if (plVar18 < *(long **)(puVar12 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar16) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_568 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_568 + 4);
        lVar13 = *(long *)(puStack_568 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_568;
        plVar18[2] = lVar13;
      }
      else {
        puStack_568 = puVar1;
        func_0x04885070(puVar1,plVar10[0x14],plVar10[0x13]);
      }
    }
    *plVar18 = *plVar16;
    plVar18[5] = (long)(puVar11 + 4);
    plVar18[6] = (long)puVar11;
    LOCK();
    puVar11[1] = puVar11[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar12 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x04b1d2a0(puVar12 + 0x22,plVar16,&plStack_5a8);
  }
  *(long **)(puVar12 + 0x24) = plVar18;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar4;
  *(undefined4 *)(plVar10 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar16 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  puVar1 = puStack_560;
  LOCK();
  lVar13 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  *(undefined4 *)(plVar10 + 0x2e) = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  (**(code **)(plVar10[4] + 0x10))(puVar1,&uStack_3f8);
  if ((uStack_3f8 & 1) != 0) {
    func_0x0412a280(uStack_3e8,uStack_3f8 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_2f0 & 1) != 0) {
    func_0x0412a280(uStack_2e0,CONCAT71(uStack_2ef,bStack_2f0) & 0xfffffffffffffffe);
  }
  uStack_593 = 0;
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 0x18;
  uStack_59f = 0x6163;
  uStack_59d = 0x6e;
  uStack_59c = 0x6f;
  uStack_59b = 0x70;
  uStack_59a = 0x5f79;
  uStack_598 = 0x73;
  uStack_597 = 0x65706f6c;
  plStack_5a8 = (long *)0xc610105d0970a4f5;
  lStack_2f8 = 0;
  bStack_2f0 = 0;
  uStack_2ef = 0;
  plVar10 = (long *)func_0x04b15390(plStack_558,&plStack_5a8,0,&lStack_2f8);
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uVar14 = (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_418);
  if ((uStack_418 & 1) != 0) {
    func_0x0412a280(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  if (lStack_2f8 != 0) {
    (**(code **)(lStack_2f8 + 8))(&lStack_2f8);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_59b = 0;
  uStack_59a = 0;
  uStack_598 = 0;
  uStack_597 = 0;
  uStack_593 = 0;
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 8;
  uStack_59f = 0x6972;
  uStack_59d = 0x73;
  uStack_59c = 0x65;
  plStack_5a8 = (long *)0x9adc897ea77c9d2e;
  uStack_230 = 0;
  puStack_238 = &UNK_0ef59ae8;
  plVar10 = (long *)func_0x04b158c0(uVar14,&plStack_5a8,0,&puStack_238);
  *(undefined4 *)(plVar10 + 0x2a) = 1;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_438);
  if ((uStack_438 & 1) != 0) {
    func_0x0412a280(uStack_428,uStack_438 & 0xfffffffffffffffe);
  }
  if (puStack_238 != (undefined *)0x0) {
    (**(code **)(puStack_238 + 8))(&puStack_238);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  uStack_598 = 0;
  uStack_597 = 0;
  uStack_593 = 0;
  uStack_592 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  bStack_5a0 = 6;
  uStack_59f = 0x7572;
  uStack_59d = 0x6e;
  plStack_5a8 = (long *)0xd8a2b1186b7e0a88;
  uStack_170 = 0;
  puStack_178 = &UNK_0ef59b00;
  plVar10 = (long *)func_0x04b158c0(uVar14,&plStack_5a8,0,&puStack_178);
  *(undefined4 *)(plVar10 + 0x2a) = 1;
  uStack_458 = 0;
  uStack_450 = 0;
  uStack_448 = 0;
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_458);
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if (puStack_178 != (undefined *)0x0) {
    (**(code **)(puStack_178 + 8))(&puStack_178);
  }
  if ((bStack_5a0 & 1) != 0) {
    func_0x0412a280(uStack_590,
                    CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     )) & 0xfffffffffffffffe);
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
  bStack_540 = 0;
  uStack_53f = 0;
  uStack_53b = uStack_53b & 0xff000000;
  lStack_b8 = 0;
  plStack_548 = (long *)&UNK_0ef59cf8;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5a8 = plStack_548;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef59b28;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  plStack_548 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,&lStack_1b8,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0ef59b78;
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  if (plStack_5a8 == (long *)0x0) {
    plVar10[0x36] = 0;
    plVar10[0x37] = 0;
    puStack_568 = (uint *)(plVar10 + 0x12);
  }
  else {
    (*(code *)*plStack_5a8)(&plStack_5a8,plVar10 + 0x2e);
    plVar16 = plStack_5a8;
    puStack_568 = (uint *)(plVar10 + 0x12);
    plStack_5a8 = (long *)0x0;
    plVar10[0x2e] = (long)plVar16;
    plVar10[0x36] = 0;
    plVar10[0x37] = 0;
    if ((*(byte *)(plVar10 + 0x12) & 1) != 0) {
      func_0x0412a280(plVar10[0x14],plVar10[0x12] & 0xfffffffffffffffe);
    }
  }
  *(undefined2 *)(plVar10 + 0x12) = 0x6324;
  uVar5 = _UNK_012a3e21;
  uVar4 = _UNK_012a3e1d;
  uVar3 = _UNK_012a3e19;
  *(undefined4 *)((long)plVar10 + 0x92) = _DAT_012a3e15;
  *(undefined4 *)((long)plVar10 + 0x96) = uVar3;
  *(undefined4 *)((long)plVar10 + 0x9a) = uVar4;
  *(undefined4 *)((long)plVar10 + 0x9e) = uVar5;
  *(undefined2 *)((long)plVar10 + 0xa2) = 0x6e;
  *(undefined4 *)((long)plVar10 + 0xa4) = 0;
  plVar10[0x11] = 0x601977ec4d12d34a;
  plVar10[0x15] = 0;
  if ((DAT_0f6b5120 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6b5120), iVar8 != 0)) {
    func_0x0b6924c0();
    func_0x0eee2f40(&SUB_04b21360,&DAT_0f6b5110,0xf53dab8);
    func_0x0410844d(&DAT_0f6b5120);
  }
  lVar7 = _DAT_0f6b5118;
  lVar13 = _DAT_0f6b5110;
  if (_DAT_0f6b5118 != 0) {
    LOCK();
    *(long *)(_DAT_0f6b5118 + 8) = *(long *)(_DAT_0f6b5118 + 8) + 1;
    UNLOCK();
  }
  plVar10[0x36] = lVar13;
  plVar16 = (long *)plVar10[0x37];
  plVar10[0x37] = lVar7;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar15 = plVar16 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  if (plStack_5a8 != (long *)0x0) {
    (*(code *)plStack_5a8[1])(&plStack_5a8);
  }
  plVar16 = plVar10 + 1;
  if (plStack_548 != (long *)0x0) {
    (*(code *)plStack_548[1])(&plStack_548);
  }
  LOCK();
  *plVar16 = *plVar16 + 1;
  UNLOCK();
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef59c58;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef59ca8;
  puVar11[0xe] = plVar10 + 4;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  plStack_5a8 = puVar11 + 4;
  puStack_560 = (uint *)(plVar10 + 4);
  puVar12 = (undefined4 *)func_0x04b19b50(plStack_558,&plStack_338,0);
  plVar18 = plVar10 + 0x11;
  plVar15 = *(long **)(puVar12 + 0x24);
  if (plVar15 < *(long **)(puVar12 + 0x26)) {
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = 0;
    plVar15[1] = 0;
    plVar15[4] = 0;
    if (plVar15 != plVar18) {
      pbVar17 = (byte *)(plVar15 + 1);
      if ((*puStack_568 & 1) == 0) {
        plVar15[3] = *(long *)((long)puStack_568 + 0x10);
        lVar13 = *(long *)((long)puStack_568 + 8);
        *(undefined8 *)pbVar17 = *(undefined8 *)puStack_568;
        plVar15[2] = lVar13;
      }
      else {
        puStack_568 = (uint *)pbVar17;
        func_0x04885070(pbVar17,plVar10[0x14],plVar10[0x13]);
      }
    }
    *plVar15 = *plVar18;
    plVar15[5] = (long)(puVar11 + 4);
    plVar15[6] = (long)puVar11;
    LOCK();
    puVar11[1] = puVar11[1] + 1;
    UNLOCK();
    plVar15 = plVar15 + 7;
    *(long **)(puVar12 + 0x24) = plVar15;
  }
  else {
    plVar15 = (long *)func_0x04b1d2a0(puVar12 + 0x22,plVar18,&plStack_5a8);
  }
  puVar1 = puStack_560;
  *(long **)(puVar12 + 0x24) = plVar15;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  plVar15 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar4;
  *(undefined4 *)(plVar10 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar6;
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar15 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar18 = plVar15 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      func_0x0412c2d0(plVar15);
    }
  }
  LOCK();
  lVar13 = *plVar16;
  *plVar16 = *plVar16 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1,&uStack_478);
  if ((uStack_478 & 1) != 0) {
    func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_330 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_31f,uStack_323._3_1_),
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
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef59d20;
  plStack_5a8 = (long *)0x0;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  if (plStack_338 == (long *)0x0) {
    plStack_5a8 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_338)(&plStack_338,&plStack_5a8);
    plStack_5a8 = plStack_338;
  }
  plStack_338 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,&plStack_548,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar16 = plVar10 + 0x11;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0ef59d70;
  pplVar24 = (long **)(plVar10 + 0x2e);
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  if (pplVar24 != &plStack_5a8) {
    if (plStack_5a8 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      (*(code *)*plStack_5a8)(&plStack_5a8,pplVar24);
      plVar15 = plStack_5a8;
    }
    plStack_5a8 = (long *)0x0;
    *pplVar24 = plVar15;
  }
  puVar1 = (uint *)(plVar10 + 0x12);
  if (plVar16 != (long *)&DAT_0f551f58) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f60 & 1) == 0) {
        plVar10[0x14] = _DAT_0f551f70;
        uVar5 = uRam000000000f551f6c;
        uVar4 = _DAT_0f551f68;
        uVar3 = uRam000000000f551f64;
        *puVar1 = _DAT_0f551f60;
        *(undefined4 *)((long)plVar10 + 0x94) = uVar3;
        *(undefined4 *)(plVar10 + 0x13) = uVar4;
        *(undefined4 *)((long)plVar10 + 0x9c) = uVar5;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f551f70,CONCAT44(uRam000000000f551f6c,_DAT_0f551f68));
      }
    }
    else {
      bVar25 = (_DAT_0f551f60 & 1) != 0;
      lVar13 = 0xf551f61;
      if (bVar25) {
        lVar13 = _DAT_0f551f70;
      }
      uVar9 = (ulong)((_DAT_0f551f60 & 0xff) >> 1);
      if (bVar25) {
        uVar9 = CONCAT44(uRam000000000f551f6c,_DAT_0f551f68);
      }
      func_0x04885120(puVar1,lVar13,uVar9);
    }
  }
  plVar15 = plVar10 + 1;
  plVar10[0x11] = _DAT_0f551f58;
  plVar10[0x15] = 0;
  if (plStack_5a8 != (long *)0x0) {
    (*(code *)plStack_5a8[1])(&plStack_5a8);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puStack_560 = puVar1;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef59578;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef595c8;
  puVar11[0xe] = plVar10 + 4;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  plStack_5a8 = puVar11 + 4;
  puVar12 = (undefined4 *)func_0x04b19b50(plStack_558,&lStack_2b8,0);
  plVar18 = *(long **)(puVar12 + 0x24);
  if (plVar18 < *(long **)(puVar12 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar16) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_560 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_560 + 4);
        lVar13 = *(long *)(puStack_560 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_560;
        plVar18[2] = lVar13;
      }
      else {
        puStack_560 = puVar1;
        func_0x04885070(puVar1,plVar10[0x14],plVar10[0x13]);
      }
    }
    *plVar18 = *plVar16;
    plVar18[5] = (long)(puVar11 + 4);
    plVar18[6] = (long)puVar11;
    LOCK();
    puVar11[1] = puVar11[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar12 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x04b1d2a0(puVar12 + 0x22,plVar16,&plStack_5a8);
  }
  *(long **)(puVar12 + 0x24) = plVar18;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar4;
  *(undefined4 *)(plVar10 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar16 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar13 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  uStack_1b0 = 0;
  bStack_540 = 0;
  uStack_53f = 0;
  uStack_53b = uStack_53b & 0xff000000;
  lStack_1b8 = 0;
  plStack_548 = (long *)&UNK_0ef59fb0;
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar16 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_5a8 = plStack_548;
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0ef59de0;
  plVar15 = plVar16 + 4;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  plStack_548 = (long *)0x0;
  func_0x04b24340(plVar15,&plStack_5a8);
  if (plStack_5a8 != (long *)0x0) {
    (*(code *)plStack_5a8[1])(&plStack_5a8);
  }
  plVar18 = plVar16 + 1;
  if (plStack_548 != (long *)0x0) {
    (*(code *)plStack_548[1])(&plStack_548);
  }
  LOCK();
  *plVar18 = *plVar18 + 1;
  UNLOCK();
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef59f10;
  plStack_5a8 = puVar11 + 4;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef59f60;
  puVar11[0xe] = plVar15;
  puVar11[0xf] = plVar16;
  LOCK();
  plVar16[1] = plVar16[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  puVar2 = (undefined8 *)plVar10[0x1c];
  for (puVar23 = (undefined8 *)plVar10[0x1b]; puStack_568 = (uint *)plStack_5a8,
      puStack_560 = (uint *)plVar15, puVar23 != puVar2; puVar23 = puVar23 + 0x15) {
    if ((puVar23[0xf] == 0) && (puVar23[0x10] == -1)) {
      plVar10 = (long *)puVar23[0x12];
      if ((long *)puVar23[0x13] <= plVar10) goto LAB_04ad9f6b;
      goto LAB_04ad9e58;
    }
  }
  if (puVar2 < (undefined8 *)plVar10[0x1d]) {
    func_0x04b1f2b0(puVar2);
    plVar10[0x1c] = (long)(puVar2 + 0x15);
    plVar10[0x1c] = (long)(puVar2 + 0x15);
    pbVar17 = (byte *)*puVar2;
    if ((*pbVar17 & 1) == 0) goto LAB_04ad9f06;
LAB_04ad9ed2:
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
  else {
    lVar13 = func_0x04b1f020(plVar10 + 0x1b);
    plVar10[0x1c] = lVar13;
    pbVar17 = *(byte **)(lVar13 + -0xa8);
    if ((*pbVar17 & 1) != 0) goto LAB_04ad9ed2;
LAB_04ad9f06:
    *pbVar17 = 0x26;
    pbVar17 = pbVar17 + 1;
  }
  uVar5 = _UNK_01494d69;
  uVar4 = _UNK_01494d65;
  uVar3 = _UNK_01494d61;
  *(undefined4 *)pbVar17 = _DAT_01494d5d;
  *(undefined4 *)(pbVar17 + 4) = uVar3;
  *(undefined4 *)(pbVar17 + 8) = uVar4;
  *(undefined4 *)(pbVar17 + 0xc) = uVar5;
  pbVar17[0xf] = 0x65;
  pbVar17[0x10] = 0x6e;
  pbVar17[0x11] = 0x74;
  pbVar17[0x12] = 0x3e;
  pbVar17[0x13] = 0;
  lVar13 = plVar10[0x1c];
  puVar23 = (undefined8 *)(lVar13 + -0xa8);
  *(char *)(lVar13 + -7) = (char)plVar10[0x10];
  *(undefined8 *)(lVar13 + -0x30) = 0;
  *(undefined8 *)(lVar13 + -0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar13 + -8) = 0;
  plVar10 = *(long **)(lVar13 + -0x18);
  if (plVar10 < *(long **)(lVar13 + -0x10)) {
LAB_04ad9e58:
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 != plVar16 + 0x11) {
      if ((*(byte *)(plVar16 + 0x12) & 1) == 0) {
        plVar10[3] = plVar16[0x14];
        lVar13 = plVar16[0x13];
        plVar10[1] = plVar16[0x12];
        plVar10[2] = lVar13;
      }
      else {
        func_0x04885070(plVar10 + 1,plVar16[0x14],plVar16[0x13]);
      }
    }
    *plVar10 = plVar16[0x11];
    plVar10[5] = (long)puStack_568;
    plVar10[6] = (long)puVar11;
    LOCK();
    puVar11[1] = puVar11[1] + 1;
    UNLOCK();
    plVar10 = plVar10 + 7;
    puVar23[0x12] = plVar10;
  }
  else {
LAB_04ad9f6b:
    plVar10 = (long *)func_0x04b1f430(puVar23 + 0x11,plVar16 + 0x11,&plStack_5a8);
  }
  puVar23[0x12] = plVar10;
  uVar3 = *(undefined4 *)puVar23;
  uVar4 = *(undefined4 *)((long)puVar23 + 4);
  uVar5 = *(undefined4 *)(puVar23 + 1);
  uVar6 = *(undefined4 *)((long)puVar23 + 0xc);
  if (puVar23[1] != 0) {
    LOCK();
    plVar10 = (long *)(puVar23[1] + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar16[0xf];
  *(undefined4 *)(plVar16 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar16 + 0x74) = uVar4;
  *(undefined4 *)(plVar16 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar16 + 0x7c) = uVar6;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar15 = plVar10 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  *(undefined1 *)(plVar16 + 0x10) = *(undefined1 *)((long)puVar23 + 0xa1);
  plVar10 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar15 = plVar10 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  puVar1 = puStack_560;
  LOCK();
  lVar13 = *plVar18;
  *plVar18 = *plVar18 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
    LOCK();
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
  }
  uStack_498 = 0;
  uStack_490 = 0;
  uStack_488 = 0;
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1,&uStack_498);
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  if (lStack_1b8 != 0) {
    (**(code **)(lStack_1b8 + 8))(&lStack_1b8);
  }
  if (plStack_338 != (long *)0x0) {
    (*(code *)plStack_338[1])(&plStack_338);
  }
  if ((bStack_2b0 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_29f,uStack_2a3._3_1_),
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
  bStack_540 = 0;
  uStack_53f = 0;
  uStack_53b = uStack_53b & 0xff000000;
  lStack_2b8 = 0;
  plStack_548 = (long *)&UNK_0ef5a1a8;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_5a8 = plStack_548;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef59fd8;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  plStack_548 = (long *)0x0;
  plVar10[4] = (long)&UNK_0f2ccd78;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  func_0x04aa75f0(plVar10 + 0xe,auStack_508,&UNK_01254d89);
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  plVar10[0x12] = 0;
  plVar10[0x13] = 0;
  plVar10[0x14] = 0;
  plVar10[0x15] = 0;
  plVar10[0x16] = 0;
  plVar10[0x17] = 0xffffffff;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  plVar10[0x18] = 0;
  plVar10[0x19] = 0;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[0x1e] = 0;
  plVar10[0x1f] = 0;
  plVar10[4] = (long)&UNK_0ef5a028;
  plVar10[0x2e] = 0;
  plVar10[0x2f] = 0;
  if (plStack_5a8 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_5a8)(&plStack_5a8,plVar10 + 0x2e);
    plVar16 = plStack_5a8;
  }
  plVar15 = plVar10 + 1;
  plVar10[0x2e] = (long)plVar16;
  if (plStack_548 != (long *)0x0) {
    (*(code *)plStack_548[1])(&plStack_548);
  }
  LOCK();
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  puStack_560 = (uint *)(plVar10 + 4);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = &UNK_0ef5a108;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[4] = &UNK_0ef5a158;
  puVar11[0xe] = puStack_560;
  puVar11[0xf] = plVar10;
  LOCK();
  plVar10[1] = plVar10[1] + 1;
  UNLOCK();
  bStack_5a0 = (byte)puVar11;
  uStack_59f = (undefined2)((ulong)puVar11 >> 8);
  uStack_59d = (undefined1)((ulong)puVar11 >> 0x18);
  uStack_59c = (undefined1)((ulong)puVar11 >> 0x20);
  uStack_59b = (undefined1)((ulong)puVar11 >> 0x28);
  uStack_59a = (undefined2)((ulong)puVar11 >> 0x30);
  plStack_5a8 = puVar11 + 4;
  puVar12 = (undefined4 *)func_0x04b19b50(plStack_558,&puStack_4e8,1);
  plVar16 = plVar10 + 0x11;
  plVar18 = *(long **)(puVar12 + 0x24);
  if (plVar18 < *(long **)(puVar12 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar16) {
      plVar21 = plVar18 + 1;
      if ((*(byte *)(plVar10 + 0x12) & 1) == 0) {
        plVar18[3] = plVar10[0x14];
        lVar13 = plVar10[0x13];
        *plVar21 = plVar10[0x12];
        plVar18[2] = lVar13;
      }
      else {
        puStack_568 = (uint *)plVar21;
        func_0x04885070(plVar21,plVar10[0x14],plVar10[0x13]);
      }
    }
    *plVar18 = *plVar16;
    plVar18[5] = (long)(puVar11 + 4);
    plVar18[6] = (long)puVar11;
    LOCK();
    puVar11[1] = puVar11[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar12 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x04b1d2a0(puVar12 + 0x22,plVar16,&plStack_5a8);
  }
  *(long **)(puVar12 + 0x24) = plVar18;
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  if (*(long *)(puVar12 + 2) != 0) {
    LOCK();
    plVar16 = (long *)(*(long *)(puVar12 + 2) + 8);
    *plVar16 = *plVar16 + 1;
    UNLOCK();
  }
  plVar16 = (long *)plVar10[0xf];
  *(undefined4 *)(plVar10 + 0xe) = uVar3;
  *(undefined4 *)((long)plVar10 + 0x74) = uVar4;
  *(undefined4 *)(plVar10 + 0xf) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x7c) = uVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  *(undefined1 *)(plVar10 + 0x10) = *(undefined1 *)((long)puVar12 + 0xa1);
  plVar16 = (long *)CONCAT26(uStack_59a,
                             CONCAT15(uStack_59b,
                                      CONCAT14(uStack_59c,
                                               CONCAT13(uStack_59d,CONCAT21(uStack_59f,bStack_5a0)))
                                     ));
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar13 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
    }
  }
  LOCK();
  lVar13 = *plVar15;
  *plVar15 = *plVar15 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    func_0x0412c2d0(plVar10);
  }
  auStack_508[0] = 0;
  auStack_508[1] = 0;
  auStack_508[2] = 0;
  (**(code **)(*(long *)puStack_560 + 0x10))(puStack_560,auStack_508);
  plVar10 = plStack_550;
  if ((auStack_508[0] & 1) != 0) {
    func_0x0412a280(auStack_508[2],auStack_508[0] & 0xfffffffffffffffe);
  }
  if (lStack_2b8 != 0) {
    (**(code **)(lStack_2b8 + 8))(&lStack_2b8);
  }
  if ((bStack_4e0 & 1) != 0) {
    func_0x0412a280(uStack_4d0,CONCAT71(uStack_4df,bStack_4e0) & 0xfffffffffffffffe);
  }
  uStack_52e = 0;
  pplStack_528 = (long **)0x0;
  bStack_540 = 0x22;
  uStack_53f = _DAT_0144756d;
  uStack_53b = _UNK_01447571;
  uStack_537 = _UNK_01447575;
  uStack_533 = _UNK_01447579;
  uStack_52f = 0x6e;
  plStack_548 = (long *)0xeb39c99c74d7c18a;
  plStack_5a8 = (long *)0x0;
  bStack_5a0 = 0;
  uStack_59f = 0;
  uStack_59d = 0;
  uStack_59c = 0;
  uStack_59b = 0;
  uStack_59a = 0;
  plVar16 = (long *)func_0x04b15390(plStack_558,&plStack_548,0,&plStack_5a8);
  auStack_4b8[0] = 0;
  auStack_4b8[1] = 0;
  auStack_4b8[2] = 0;
  uVar14 = (**(code **)(*plVar16 + 0x10))(plVar16,auStack_4b8);
  if ((auStack_4b8[0] & 1) != 0) {
    func_0x0412a280(auStack_4b8[2],auStack_4b8[0] & 0xfffffffffffffffe);
  }
  if (plStack_5a8 != (long *)0x0) {
    (*(code *)plStack_5a8[1])(&plStack_5a8);
  }
  if ((bStack_540 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_52e,CONCAT11(uStack_52f,uStack_533._3_1_)),
                    CONCAT35((undefined3)uStack_53b,CONCAT41(uStack_53f,bStack_540)) &
                    0xfffffffffffffffe);
  }
  plStack_548 = (long *)&UNK_0ef5a1d0;
  puStack_4e8 = &UNK_0ef5a1d0;
  pplStack_528 = &plStack_548;
  ppuStack_4c8 = &puStack_4e8;
  func_0x04b15e60(uVar14,&puStack_4e8);
  if (ppuStack_4c8 == &puStack_4e8) {
    lVar13 = 0x20;
LAB_04ada735:
    (**(code **)(*ppuStack_4c8 + lVar13))();
    if (pplStack_528 != &plStack_548) goto LAB_04ada6ed;
LAB_04ada748:
    lVar13 = 0x20;
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_4c8 != (undefined **)0x0) goto LAB_04ada735;
    if (pplStack_528 == &plStack_548) goto LAB_04ada748;
LAB_04ada6ed:
    lVar13 = 0x28;
    if (pplStack_528 == (long **)0x0) goto LAB_04ada753;
  }
  (**(code **)((long)*pplStack_528 + lVar13))();
LAB_04ada753:
  bStack_540 = 0;
  uStack_53f = 0;
  uStack_53b = uStack_53b & 0xff000000;
  plStack_548 = (long *)&UNK_0ef5af40;
  pplVar24 = (long **)(plVar10 + 0x1e);
  if (pplVar24 != &plStack_548) {
    if ((*pplVar24 == (long *)0x0) ||
       ((*(code *)(*pplVar24)[1])(pplVar24), plStack_548 != (long *)0x0)) {
      (*(code *)*plStack_548)(&plStack_548,pplVar24);
    }
    else {
      plStack_548 = (long *)0x0;
    }
    *pplVar24 = plStack_548;
  }
  return;
}



/* ---- referenced strings ----
 * 0x12a3e15  hance_information
 * 0x1325292  variation_chance
 * 0x144756d  canopy_decoration
 * 0x1494d5d  <any array element>
 */
