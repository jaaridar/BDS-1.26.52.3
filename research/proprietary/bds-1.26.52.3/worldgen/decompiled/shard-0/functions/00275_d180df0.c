/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd280df0 (ELF vaddr 0xd180df0)
 * Label: callee-of:0xc961580
 * Body:  [[0d280df0, 0d2810f6] [0d281100, 0d281134] [0d281140, 0d2811ae] [0d2811b0, 0d2811c9] [0d2811d0, 0d281b29] [0d281b30, 0d281b76] [0d281b80, 0d282051]]
 * Ghidra: FUN_0d280df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d280df0(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  ulong uStack_4b0;
  undefined1 uStack_4a1;
  long *plStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  undefined8 *puStack_488;
  ulong uStack_480;
  float fStack_478;
  undefined *puStack_468;
  ulong uStack_460;
  long lStack_458;
  undefined8 uStack_448;
  ulong uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  long *plStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  code *pcStack_3d0;
  undefined4 uStack_3c8;
  undefined1 uStack_3c4;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  long lStack_3a0;
  int iStack_394;
  long *plStack_390;
  undefined *puStack_388;
  undefined8 auStack_380 [2];
  undefined *puStack_370;
  code *pcStack_368;
  undefined4 uStack_360;
  undefined1 uStack_35c;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined2 uStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_328 [8];
  long *plStack_320;
  undefined1 auStack_318 [8];
  long *plStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [256];
  undefined1 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [384];
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  puStack_468 = (undefined *)0x0;
  uStack_460 = 0;
  lStack_458 = 0;
  bVar21 = (*(byte *)(param_1 + 0xa8) & 1) != 0;
  lVar15 = param_1 + 0xa9;
  if (bVar21) {
    lVar15 = *(long *)(param_1 + 0xb8);
  }
  uVar16 = (ulong)(*(byte *)(param_1 + 0xa8) >> 1);
  if (bVar21) {
    uVar16 = *(ulong *)(param_1 + 0xb0);
  }
  iStack_394 = param_3;
  plStack_390 = param_2;
  func_0x0412f8c0(&puStack_468,lVar15,uVar16);
  func_0x0412f8c0(&puStack_468,&UNK_01254f0f,1);
  func_0x04134310(&uStack_308,(int)(short)param_3);
  uVar16 = (ulong)uStack_308 >> 1 & 0x7f;
  lVar15 = (long)&uStack_308 + 1;
  lVar6 = lVar15;
  if (((ulong)uStack_308 & 1) != 0) {
    uVar16 = uStack_300;
    lVar6 = lStack_2f8;
  }
  func_0x0412f8c0(&puStack_468,lVar6,uVar16);
  if (((ulong)uStack_308 & 1) != 0) {
    func_0x0412a280(lStack_2f8,(ulong)uStack_308 & 0xfffffffffffffffe);
  }
  func_0x0412f8c0(&puStack_468,&UNK_01254f0f,1);
  func_0x04134310(&uStack_308,param_3 >> 0x10);
  uVar16 = (ulong)uStack_308 >> 1 & 0x7f;
  lVar6 = lVar15;
  if (((ulong)uStack_308 & 1) != 0) {
    uVar16 = uStack_300;
    lVar6 = lStack_2f8;
  }
  func_0x0412f8c0(&puStack_468,lVar6,uVar16);
  if (((ulong)uStack_308 & 1) != 0) {
    func_0x0412a280(lStack_2f8,(ulong)uStack_308 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_468 & 1) == 0) {
    lStack_2f8 = lStack_458;
    uStack_308 = puStack_468;
    uStack_300 = uStack_460;
  }
  else {
    FUN_0412e5e0(&uStack_308,lStack_458,uStack_460);
  }
  uStack_2f0 = (undefined1 *)CONCAT44(param_3 >> 0x10,(int)(short)param_3);
  uVar16 = (ulong)uStack_308 >> 1 & 0x7f;
  lVar6 = lVar15;
  if (((ulong)uStack_308 & 1) != 0) {
    uVar16 = uStack_300;
    lVar6 = lStack_2f8;
  }
  uVar12 = func_0x04883620(&uStack_430,lVar6,uVar16);
  plVar17 = (long *)(param_1 + 0x130);
  uVar16 = *(ulong *)(param_1 + 0x138);
  plStack_4a0 = plVar17;
  if (uVar16 != 0) {
    uVar13 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 >> 0x38 < 2) {
      uStack_4b0 = uVar16 - 1 & uVar12;
    }
    else {
      uStack_4b0 = uVar12;
      if (uVar16 <= uVar12) {
        if ((uVar12 | uVar16) >> 0x20 == 0) {
          uStack_4b0 = (uVar12 & 0xffffffff) % (uVar16 & 0xffffffff);
        }
        else {
          uStack_4b0 = uVar12 % uVar16;
        }
      }
    }
    plVar14 = *(long **)(*plVar17 + uStack_4b0 * 8);
    if ((plVar14 != (long *)0x0) &&
       (plVar14 = (long *)*plVar14, lStack_3a0 = lVar15, plVar14 != (long *)0x0)) {
      bVar7 = (byte)uStack_308;
      lStack_3a0 = lStack_2f8;
      uVar19 = uStack_300;
      if (((ulong)uStack_308 & 1) == 0) {
        lStack_3a0 = lVar15;
        uVar19 = (ulong)((byte)uStack_308 >> 1);
      }
      if ((byte)(uVar13 >> 0x38) < 2) {
        do {
          if (plVar14[1] == uVar12) {
            bVar1 = *(byte *)(plVar14 + 2);
            if ((bVar1 & 1) == 0) {
              uVar13 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar13 = plVar14[3];
            }
            if (uVar13 == uVar19) {
              if ((bVar1 & 1) == 0) {
                lVar15 = (long)plVar14 + 0x11;
              }
              else {
                lVar15 = plVar14[4];
              }
              iVar11 = func_0x0eee3000(lVar15,lStack_3a0,uVar19);
              if (iVar11 == 0) goto LAB_0d281204;
            }
          }
          else {
            plVar17 = plStack_4a0;
            if ((plVar14[1] & uVar16 - 1) != uStack_4b0) break;
          }
          plVar14 = (long *)*plVar14;
          plVar17 = plStack_4a0;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar14[1];
          if (uVar13 == uVar12) {
            bVar1 = *(byte *)(plVar14 + 2);
            if ((bVar1 & 1) == 0) {
              uVar13 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar13 = plVar14[3];
            }
            if (uVar13 == uVar19) {
              if ((bVar1 & 1) == 0) {
                lVar15 = (long)plVar14 + 0x11;
              }
              else {
                lVar15 = plVar14[4];
              }
              iVar11 = func_0x0eee3000(lVar15,lStack_3a0,uVar19);
              if (iVar11 == 0) goto LAB_0d281204;
            }
          }
          else {
            if (uVar16 <= uVar13) {
              if ((uVar13 | uVar16) >> 0x20 == 0) {
                uVar13 = (uVar13 & 0xffffffff) % (uVar16 & 0xffffffff);
              }
              else {
                uVar13 = uVar13 % uVar16;
              }
            }
            if (uVar13 != uStack_4b0) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_420 = 1;
  *plVar14 = 0;
  plVar14[1] = uVar12;
  plVar14[4] = lStack_2f8;
  plVar14[2] = (long)uStack_308;
  plVar14[3] = uStack_300;
  uStack_308 = (undefined *)0x0;
  uStack_300 = 0;
  lStack_2f8 = 0;
  plVar14[5] = (long)uStack_2f0;
  fVar22 = (float)(*(long *)(param_1 + 0x148) + 1);
  uStack_430 = plVar14;
  plStack_428 = plVar17;
  if ((long)uVar16 < 0) {
    fVar24 = (float)uVar16;
    fVar23 = *(float *)(param_1 + 0x150);
    if (uVar16 != 0) goto LAB_0d281310;
LAB_0d281321:
    uVar13 = 1;
    if (2 < uVar16) {
      uVar13 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar13 = uVar13 | uVar16 * 2;
    fVar22 = (float)func_0x0eee3ab0(fVar22 / fVar23);
    uVar16 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
    if (uVar16 < uVar13) {
      uVar16 = uVar13;
    }
    uVar13 = 2;
    if ((uVar16 == 1) || (uVar13 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      uVar16 = *(ulong *)(param_1 + 0x138);
      bVar21 = uVar13 < uVar16;
      if (uVar13 <= uVar16) goto LAB_0d2813bc;
LAB_0d281396:
      func_0x0d294870(plStack_4a0,uVar13);
    }
    else {
      uVar13 = func_0x0412c3f0();
      uVar16 = *(ulong *)(param_1 + 0x138);
      bVar21 = uVar13 < uVar16;
      if (uVar16 < uVar13) goto LAB_0d281396;
LAB_0d2813bc:
      if (bVar21) {
        fVar22 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x148) /
                                        *(float *)(param_1 + 0x150));
        uVar19 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
        if ((uVar16 < 3) ||
           (uVar18 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
           1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar19 = func_0x0412c3f0(uVar19);
        }
        else if (1 < uVar19) {
          lVar15 = 0x3f;
          if (uVar19 - 1 != 0) {
            for (; uVar19 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar19 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
        }
        if (uVar13 <= uVar19) {
          uVar13 = uVar19;
        }
        if (uVar13 < uVar16) goto LAB_0d281396;
      }
    }
    uVar16 = *(ulong *)(param_1 + 0x138);
    plVar17 = plStack_4a0;
    if ((uVar16 & uVar16 - 1) == 0) {
      uStack_4b0 = uVar12 & uVar16 - 1;
    }
    else {
      uStack_4b0 = uVar12;
      if (uVar16 <= uVar12) {
        if ((uVar12 | uVar16) >> 0x20 == 0) {
          uStack_4b0 = (uVar12 & 0xffffffff) % (uVar16 & 0xffffffff);
        }
        else {
          uStack_4b0 = uVar12 % uVar16;
        }
      }
    }
  }
  else {
    fVar24 = (float)(long)uVar16;
    fVar23 = *(float *)(param_1 + 0x150);
    if (uVar16 == 0) goto LAB_0d281321;
LAB_0d281310:
    if (fVar24 * fVar23 < fVar22) goto LAB_0d281321;
  }
  lVar15 = *plVar17;
  plVar17 = *(long **)(lVar15 + uStack_4b0 * 8);
  if (plVar17 == (long *)0x0) {
    *plVar14 = *(long *)(param_1 + 0x140);
    *(long **)(param_1 + 0x140) = plVar14;
    *(long *)(lVar15 + uStack_4b0 * 8) = param_1 + 0x140;
    if (*plVar14 != 0) {
      uVar12 = *(ulong *)(*plVar14 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        *(long **)(lVar15 + (uVar12 & uVar16 - 1) * 8) = plVar14;
      }
      else {
        if (uVar16 <= uVar12) {
          if ((uVar12 | uVar16) >> 0x20 == 0) {
            *(long **)(lVar15 + ((uVar12 & 0xffffffff) % (uVar16 & 0xffffffff)) * 8) = plVar14;
            goto LAB_0d28151b;
          }
          uVar12 = uVar12 % uVar16;
        }
        *(long **)(lVar15 + uVar12 * 8) = plVar14;
      }
    }
  }
  else {
    *plVar14 = *plVar17;
    *plVar17 = (long)plVar14;
  }
LAB_0d28151b:
  *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 1;
  bVar21 = true;
  bVar7 = (byte)uStack_308;
LAB_0d281535:
  if ((bVar7 & 1) != 0) {
    func_0x0412a280(lStack_2f8,(ulong)uStack_308 & 0xfffffffffffffffe);
  }
  if (bVar21) {
    uStack_498 = 0;
    uStack_490 = 0;
    puStack_488 = (undefined8 *)0x0;
    lStack_410 = (long)&uStack_498 + 1;
    plStack_428 = (long *)((ulong)plStack_428 & 0xffffffffffff0000);
    uStack_408 = 0;
    uStack_400 = 0;
    uStack_3f8 = 0;
    uStack_430 = (long *)&UNK_0f533820;
    puStack_3f0 = &uStack_498;
    uStack_440 = uStack_440 & 0xffffffffffff0000;
    uStack_448 = &UNK_0f4e3390;
    puStack_438 = &uStack_430;
    uStack_300 = param_1 + 0xc0;
    uStack_308 = &UNK_0ef474c0;
    lStack_2f8 = CONCAT44(lStack_2f8._4_4_,0xffffffff);
    uStack_2f0 = auStack_2e0;
    uStack_2e8 = 0x800000000;
    puStack_1e0 = auStack_1d0;
    uStack_1d8 = 0x800000000;
    uStack_50 = 0xfffc;
    uStack_4e = 1;
    uStack_4c = 0xffffffff00000000;
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_340 = &UNK_0f45d2c0;
    lStack_358 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (lStack_358 == 0) {
      func_0x048b0de0(&uStack_3e8,&puStack_388);
      _DAT_0f54fd90 = (undefined4)uStack_3e8;
      uRam000000000f54fd94 = uStack_3e8._4_4_;
      uVar9 = (undefined4)uStack_3e0;
      uVar10 = uStack_3e0._4_4_;
      uStack_3e8 = (long *)0x0;
      uStack_3e0 = (long *)0x0;
      plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar9;
      uRam000000000f54fd9c = uVar10;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar14 = plVar17 + 1;
        lVar15 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
      }
      plVar17 = uStack_3e0;
      if (uStack_3e0 != (long *)0x0) {
        LOCK();
        plVar14 = uStack_3e0 + 1;
        lVar15 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*uStack_3e0 + 0x10))(uStack_3e0);
          func_0x0412c2d0(plVar17);
        }
      }
      lStack_358 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    lStack_3c0 = param_1 + 0xd8;
    puStack_370 = &UNK_0d294cb0;
    uStack_360 = 0xb22a4da2;
    pcStack_368 = (code *)0x0;
    uStack_35c = 4;
    uStack_350 = 0;
    uStack_348 = 0;
    puStack_3d8 = &UNK_0d294cb0;
    pcStack_3d0 = (code *)0x0;
    uStack_3c8 = 0xb22a4da2;
    uStack_3c4 = 4;
    auStack_380[0] = 0;
    uStack_3e8 = plStack_4a0;
    uStack_3b8 = 0;
    puStack_3b0 = &UNK_0d294c90;
    FUN_0ed6b850(&uStack_308,&uStack_448,&uStack_3e8,&puStack_340);
    if ((pcStack_3d0 != (code *)0x0) && ((*pcStack_3d0)(&uStack_3e8), pcStack_368 != (code *)0x0)) {
      (*pcStack_368)(auStack_380);
    }
    (**(code **)(*plStack_390 + 0x58))(auStack_318,plStack_390,param_1 + 0xa8,&uStack_498,0xc);
    if (plStack_310 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_310 + 1;
      lVar15 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_310 + 0x10))(plStack_310);
        func_0x0412c2d0(plStack_310);
      }
    }
    func_0x048ffe50(&uStack_308);
    uStack_430 = (long *)&UNK_0f534730;
    if (((ulong)plStack_428 & 1) != 0) {
      func_0x0412a280(uStack_418,(ulong)plStack_428 & 0xfffffffffffffffe);
    }
    if ((uStack_498 & 1) != 0) {
      func_0x0412a280(puStack_488,uStack_498 & 0xfffffffffffffffe);
    }
  }
  puStack_488 = (undefined8 *)0x0;
  uStack_480 = 0;
  uStack_498 = 0;
  uStack_490 = 0;
  fStack_478 = 1.0;
  lVar15 = func_0x0d29b5b0(param_1,&iStack_394);
  lVar15 = *(long *)(lVar15 + 0x10);
  puVar8 = puStack_488;
  if (uStack_480 != 0) {
    while (puVar8 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar8;
      func_0x0412a280(puVar8,0x18);
      puVar8 = puVar4;
    }
    puStack_488 = (undefined8 *)0x0;
    if (uStack_490 != 0) {
      func_0x0eee2dd0(uStack_498,0,uStack_490 << 3);
    }
    uStack_480 = 0;
  }
  fVar22 = (float)func_0x0eee3ab0(_DAT_01198344 / fStack_478);
  uVar12 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
  uVar16 = 2;
  if ((uVar12 == 1) || (uVar16 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
    bVar21 = uVar16 < uStack_490;
    if (uVar16 <= uStack_490) goto LAB_0d281a14;
  }
  else {
    uVar16 = func_0x0412c3f0();
    bVar21 = uVar16 < uStack_490;
    if (uVar16 <= uStack_490) {
LAB_0d281a14:
      uVar12 = uStack_490;
      if (!bVar21) goto LAB_0d281b0b;
      fVar22 = (float)func_0x0eee3ab0((float)uStack_480 / fStack_478);
      uVar13 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
      if ((uVar12 < 3) ||
         (uVar19 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
         1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar13 = func_0x0412c3f0(uVar13);
      }
      else if (1 < uVar13) {
        lVar6 = 0x3f;
        if (uVar13 - 1 != 0) {
          for (; uVar13 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar13 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
      }
      if (uVar16 <= uVar13) {
        uVar16 = uVar13;
      }
      if (uVar12 <= uVar16) goto LAB_0d281b0b;
    }
  }
  func_0x0d296740(&uStack_498,uVar16);
LAB_0d281b0b:
  plVar17 = *(long **)(lVar15 + 0x10);
  if (plVar17 != (long *)0x0) {
    do {
      puVar20 = *(uint **)(plVar17[3] + 0x48);
      puVar5 = *(uint **)(plVar17[3] + 0x50);
      if (puVar20 != puVar5) {
        uVar2 = *(ushort *)(plVar17 + 2);
        do {
          uVar3 = *puVar20;
          uStack_308 = (undefined *)
                       CONCAT44(uStack_308._4_4_,
                                uVar3 + (uVar2 & 0x3e0) * 0x20000 & 0x7fc0000 |
                                uVar3 + (uVar2 & 0xfff) * 0x10 & 0x1ff | uVar3 & 0x3fe00);
          uStack_430 = (long *)CONCAT53(uStack_430._3_5_,(int3)puVar20[1]);
          auVar25 = func_0x0d296920(&uStack_498,&uStack_308,&uStack_308,&uStack_430);
          if ((auVar25._8_8_ & 1) == 0) {
            *(undefined1 *)(auVar25._0_8_ + 0x16) = uStack_430._2_1_;
            *(undefined2 *)(auVar25._0_8_ + 0x14) = (undefined2)uStack_430;
          }
          puVar20 = puVar20 + 2;
        } while (puVar20 != puVar5);
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  uStack_448 = (undefined *)0x0;
  uStack_440 = 0;
  puStack_438 = (undefined8 *)0x0;
  lStack_410 = (long)&uStack_448 + 1;
  plStack_428 = (long *)((ulong)plStack_428 & 0xffffffffffff0000);
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_430 = (long *)&UNK_0f533820;
  puStack_3f0 = &uStack_448;
  uStack_338 = 0;
  puStack_340 = &UNK_0f4e3390;
  puStack_330 = &uStack_430;
  uStack_300 = param_1 + 0xc0;
  uStack_308 = &UNK_0ef474c0;
  lStack_2f8 = CONCAT44(lStack_2f8._4_4_,0xffffffff);
  uStack_2f0 = auStack_2e0;
  uStack_2e8 = 0x800000000;
  puStack_1e0 = auStack_1d0;
  uStack_1d8 = 0x800000000;
  uStack_50 = 0xfffc;
  uStack_4e = 1;
  uStack_4c = 0xffffffff00000000;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_388 = &UNK_0f45d338;
  lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar15 == 0) {
    func_0x048b0de0(&uStack_3e8,&uStack_4a1);
    _DAT_0f54fd90 = (undefined4)uStack_3e8;
    uRam000000000f54fd94 = uStack_3e8._4_4_;
    uVar9 = (undefined4)uStack_3e0;
    uVar10 = uStack_3e0._4_4_;
    uStack_3e8 = (long *)0x0;
    uStack_3e0 = (long *)0x0;
    plVar17 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar10;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar14 = plVar17 + 1;
      lVar15 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = uStack_3e0;
    if (uStack_3e0 != (long *)0x0) {
      LOCK();
      plVar14 = uStack_3e0 + 1;
      lVar15 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*uStack_3e0 + 0x10))(uStack_3e0);
        func_0x0412c2d0(plVar17);
      }
    }
    lVar15 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  lStack_3c0 = param_1 + 0xd8;
  puStack_370 = &UNK_0d296fd0;
  uStack_360 = 0x33ebd5b1;
  pcStack_368 = (code *)0x0;
  uStack_35c = 4;
  uStack_350 = 0;
  uStack_348 = 0;
  puStack_3d8 = &UNK_0d296fd0;
  pcStack_3d0 = (code *)0x0;
  uStack_3c8 = 0x33ebd5b1;
  uStack_3c4 = 4;
  auStack_380[0] = 0;
  uStack_3e8 = &uStack_498;
  uStack_3b8 = 0;
  puStack_3b0 = &UNK_0d296fb0;
  lStack_358 = lVar15;
  FUN_0ed6b850(&uStack_308,&puStack_340,&uStack_3e8,&puStack_388);
  if ((pcStack_3d0 != (code *)0x0) && ((*pcStack_3d0)(&uStack_3e8), pcStack_368 != (code *)0x0)) {
    (*pcStack_368)(auStack_380);
  }
  (**(code **)(*plStack_390 + 0x58))(auStack_328,plStack_390,&puStack_468,&uStack_448,0xc);
  if (plStack_320 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_320 + 1;
    lVar15 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_320 + 0x10))(plStack_320);
      func_0x0412c2d0(plStack_320);
    }
  }
  func_0x048ffe50(&uStack_308);
  uStack_430 = (long *)&UNK_0f534730;
  if (((ulong)plStack_428 & 1) != 0) {
    func_0x0412a280(uStack_418,(ulong)plStack_428 & 0xfffffffffffffffe);
  }
  lVar15 = uStack_498;
  puVar8 = puStack_488;
  if (((ulong)uStack_448 & 1) != 0) {
    func_0x0412a280(puStack_438,(ulong)uStack_448 & 0xfffffffffffffffe);
    lVar15 = uStack_498;
    puVar8 = puStack_488;
  }
  while (puVar8 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar8;
    uStack_498 = lVar15;
    func_0x0412a280(puVar8,0x18);
    lVar15 = uStack_498;
    puVar8 = puVar4;
  }
  uStack_498 = 0;
  if (lVar15 != 0) {
    func_0x0412a280(lVar15,uStack_490 << 3);
  }
  if (((ulong)puStack_468 & 1) != 0) {
    func_0x0412a280(lStack_458,(ulong)puStack_468 & 0xfffffffffffffffe);
  }
  return;
LAB_0d281204:
  bVar21 = false;
  goto LAB_0d281535;
}


