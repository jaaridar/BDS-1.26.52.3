/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd79ef80 (ELF vaddr 0xd69ef80)
 * Label: caller-of-callee
 * Body:  [[0d79ef80, 0d79f0bd] [0d79f0c0, 0d79f0f2] [0d79f100, 0d79fed0] [0d79ff12, 0d79ff23] [0d79ffb1, 0d79ffba] [0d7a0037, 0d7a009d]]
 * Ghidra: FUN_0d79ef80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d79ef80(undefined8 *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  long *plStack_190;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined4 uStack_15c;
  long *plStack_158;
  long *plStack_148;
  long *plStack_120;
  long *plStack_118;
  byte *pbStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  iVar7 = func_0x045fe9f4(&plStack_120);
  plVar14 = plStack_120;
  uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
  if (iVar7 < 0) goto LAB_0d79f262;
  if (plStack_120 == (long *)0x0) {
    iVar7 = -0x7fffbffb;
    uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    goto LAB_0d79f262;
  }
  iVar7 = func_0x045ffcbb(plStack_120,0);
  uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
  if (iVar7 < 0) goto LAB_0d79f262;
  plStack_108 = *(long **)(param_3 + 0x18);
  if ((ulong)plStack_108 >> 0x20 == 0xffffffff) {
    func_0x04931450();
    goto LAB_0d79fec7;
  }
  uStack_168 = &plStack_a8;
  pbVar10 = (byte *)(**(code **)(&UNK_0f484640 + ((ulong)plStack_108 >> 0x20) * 8))
                              (&uStack_168,&plStack_108);
  if ((*pbVar10 & 1) == 0) {
    pbVar10 = pbVar10 + 1;
    if ((*param_3 & 1) == 0) goto LAB_0d79f01b;
LAB_0d79f036:
    pbVar21 = *(byte **)(param_3 + 0x10);
  }
  else {
    pbVar10 = *(byte **)(pbVar10 + 0x10);
    if ((*param_3 & 1) != 0) goto LAB_0d79f036;
LAB_0d79f01b:
    pbVar21 = param_3 + 1;
  }
  iVar7 = func_0x045fed10(plVar14,pbVar10,pbVar21);
  if (iVar7 < 0) goto LAB_0d79f262;
  uStack_168._0_4_ = 0x65735514;
  uStack_168._4_4_ = 0x67412d72;
  uStack_160 = 0x65;
  uStack_15f = 0x746e;
  uStack_15d = 0;
  pbVar10 = (byte *)func_0x0d79d970(param_3 + 0x20,&uStack_168);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 >> 1 == 0) goto LAB_0d79f097;
  }
  else if (*(long *)(pbVar10 + 8) == 0) {
LAB_0d79f097:
    iVar7 = func_0x045ff993(plVar14,&UNK_014105e2,&UNK_014c1c59,0);
    uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    if (iVar7 < 0) goto LAB_0d79f262;
  }
  pbVar10 = param_3 + 0x30;
  do {
    pbVar10 = *(byte **)pbVar10;
    if (pbVar10 == (byte *)0x0) {
      iVar7 = func_0x045ffed3(plVar14,*(undefined4 *)(param_3 + 0x70));
      uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
      if (-1 < iVar7) {
        plVar2 = *(long **)(param_3 + 0x48);
        plVar15 = *(long **)(param_3 + 0x50);
        uStack_168._0_4_ = SUB84(plVar2,0);
        uStack_168._4_4_ = (undefined4)((ulong)plVar2 >> 0x20);
        uStack_160 = SUB81(plVar15,0);
        uStack_15f = (undefined2)((ulong)plVar15 >> 8);
        uStack_15d = (undefined1)((ulong)plVar15 >> 0x18);
        uStack_15c = (undefined4)((ulong)plVar15 >> 0x20);
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar15[1] = plVar15[1] + 1;
          UNLOCK();
        }
        uVar11 = (**(code **)(*plVar2 + 0x18))();
        if (plVar15 != (long *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar18 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            func_0x0412c2d0(plVar15);
          }
        }
        iVar7 = func_0x045ff269(plVar14,&UNK_0d7a00d0,uVar11,0);
        uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        if (-1 < iVar7) {
          iVar7 = func_0x04600958(plVar14,&UNK_0d7a02d0,0);
          plVar2 = plStack_120;
          uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
          if (-1 < iVar7) {
            if (plStack_120 == (long *)0x0) {
              func_0x04890760();
              goto LAB_0d79fe61;
            }
            uVar12 = func_0x045fec3b();
            func_0x0412d680(param_2 + 0x70);
            plVar14 = (long *)(param_2 + 0x48);
            uVar23 = *(ulong *)(param_2 + 0x50);
            if (uVar23 == 0) goto LAB_0d79f3db;
            uVar13 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
            uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
            uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar13 >> 0x38 < 2) {
              uStack_170 = uVar23 - 1 & uVar12;
            }
            else {
              uStack_170 = uVar12;
              if (uVar23 <= uVar12) {
                if ((uVar12 | uVar23) >> 0x20 == 0) {
                  uStack_170 = (uVar12 & 0xffffffff) % (uVar23 & 0xffffffff);
                }
                else {
                  uStack_170 = uVar12 % uVar23;
                }
              }
            }
            plVar15 = *(long **)(*plVar14 + uStack_170 * 8);
            if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
            goto LAB_0d79f3db;
            if (1 < (byte)(uVar13 >> 0x38)) goto LAB_0d79f387;
            goto LAB_0d79f3ca;
          }
        }
      }
      break;
    }
    if ((pbVar10[0x10] & 1) == 0) {
      pbVar21 = pbVar10 + 0x11;
      if ((pbVar10[0x28] & 1) == 0) goto LAB_0d79f10b;
LAB_0d79f0c0:
      pbVar22 = *(byte **)(pbVar10 + 0x38);
    }
    else {
      pbVar21 = *(byte **)(pbVar10 + 0x20);
      if ((pbVar10[0x28] & 1) != 0) goto LAB_0d79f0c0;
LAB_0d79f10b:
      pbVar22 = pbVar10 + 0x29;
    }
    iVar7 = func_0x045ff993(plVar14,pbVar21,pbVar22);
    uStack_168 = (long **)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
  } while (-1 < iVar7);
LAB_0d79f262:
  if (DAT_0f727f28 == '\0') {
    iVar9 = func_0x04108328(&DAT_0f727f28);
    if (iVar9 != 0) {
      func_0x0eee2f40(&UNK_041369a0,0xf5460c8,0xf53dab8);
      FUN_0410844d(&DAT_0f727f28);
    }
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f484b70;
  plVar14[3] = (long)&UNK_0f484bc0;
  *(int *)(plVar14 + 6) = iVar7;
  plVar14[7] = 0xf5460c8;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  LOCK();
  plVar14[2] = plVar14[2] + 1;
  UNLOCK();
  plVar14[4] = (long)(plVar14 + 4);
  plVar14[5] = (long)plVar14;
  LOCK();
  plVar2 = plVar14 + 1;
  lVar18 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (lVar18 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  *param_1 = plVar14 + 3;
  param_1[1] = plVar14;
  return param_1;
LAB_0d79f387:
  do {
    uVar13 = plVar15[1];
    if (uVar13 == uVar12) {
      if (plVar15[2] == uVar12) goto LAB_0d79f686;
    }
    else {
      if (uVar23 <= uVar13) {
        if ((uVar13 | uVar23) >> 0x20 == 0) {
          uVar13 = (uVar13 & 0xffffffff) % (uVar23 & 0xffffffff);
        }
        else {
          uVar13 = uVar13 % uVar23;
        }
      }
      if (uVar13 != uStack_170) break;
    }
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
  goto LAB_0d79f3db;
LAB_0d79f3ca:
  do {
    if (plVar15[1] == uVar12) {
      if (plVar15[2] == uVar12) goto LAB_0d79f686;
    }
    else if ((plVar15[1] & uVar23 - 1) != uStack_170) break;
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
LAB_0d79f3db:
  plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
  if (plVar15 == (long *)0x0) {
    func_0x0eec74c0(0xe0,0);
  }
  uStack_168._0_4_ = SUB84(plVar15,0);
  uStack_168._4_4_ = (undefined4)((ulong)plVar15 >> 0x20);
  uStack_160 = SUB81(plVar14,0);
  uStack_15f = (undefined2)((ulong)plVar14 >> 8);
  uStack_15d = (undefined1)((ulong)plVar14 >> 0x18);
  uStack_15c = (undefined4)((ulong)plVar14 >> 0x20);
  plStack_158 = (long *)0x0;
  *plVar15 = 0;
  plVar15[1] = uVar12;
  plVar15[2] = uVar12;
  func_0x0488b090(plVar15 + 4,param_3);
  plStack_158 = (long *)CONCAT71(plStack_158._1_7_,1);
  fVar25 = (float)(*(long *)(param_2 + 0x60) + 1);
  if ((uVar23 == 0) || ((float)uVar23 * *(float *)(param_2 + 0x68) < fVar25)) {
    uVar13 = 1;
    if (2 < uVar23) {
      uVar13 = (ulong)((uVar23 & uVar23 - 1) != 0);
    }
    uVar13 = uVar13 | uVar23 * 2;
    fVar25 = (float)func_0x0eee3ab0(fVar25 / *(float *)(param_2 + 0x68));
    uVar23 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
    if (uVar23 < uVar13) {
      uVar23 = uVar13;
    }
    uVar13 = 2;
    if ((uVar23 != 1) && (uVar13 = uVar23, (uVar23 & uVar23 - 1) != 0)) {
      uVar13 = func_0x0412c3f0();
    }
    uVar23 = *(ulong *)(param_2 + 0x50);
    if (uVar23 < uVar13) {
LAB_0d79f51d:
      func_0x0d7a61d0(plVar14,uVar13);
    }
    else if (uVar13 < uVar23) {
      fVar25 = (float)func_0x0eee3ab0((float)*(ulong *)(param_2 + 0x60) / *(float *)(param_2 + 0x68)
                                     );
      uVar16 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
      if ((uVar23 < 3) ||
         (uVar20 = uVar23 - (uVar23 >> 1 & 0x5555555555555555),
         uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333),
         1 < (byte)(((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar16 = func_0x0412c3f0(uVar16);
      }
      else if (1 < uVar16) {
        lVar18 = 0x3f;
        if (uVar16 - 1 != 0) {
          for (; uVar16 - 1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar16 = 1L << (-((byte)lVar18 ^ 0x3f) & 0x3f);
      }
      if (uVar13 <= uVar16) {
        uVar13 = uVar16;
      }
      if (uVar13 < uVar23) goto LAB_0d79f51d;
    }
    uVar23 = *(ulong *)(param_2 + 0x50);
    if ((uVar23 & uVar23 - 1) == 0) {
      uStack_170 = uVar12 & uVar23 - 1;
    }
    else {
      uStack_170 = uVar12;
      if (uVar23 <= uVar12) {
        if ((uVar12 | uVar23) >> 0x20 == 0) {
          uStack_170 = (uVar12 & 0xffffffff) % (uVar23 & 0xffffffff);
        }
        else {
          uStack_170 = uVar12 % uVar23;
        }
      }
    }
  }
  lVar18 = *plVar14;
  plVar14 = *(long **)(lVar18 + uStack_170 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar15 = *(long *)(param_2 + 0x58);
    *(long **)(param_2 + 0x58) = plVar15;
    *(long *)(lVar18 + uStack_170 * 8) = param_2 + 0x58;
    if (*plVar15 != 0) {
      uVar12 = *(ulong *)(*plVar15 + 8);
      if ((uVar23 & uVar23 - 1) == 0) {
        *(long **)(lVar18 + (uVar12 & uVar23 - 1) * 8) = plVar15;
      }
      else {
        if (uVar23 <= uVar12) {
          if ((uVar12 | uVar23) >> 0x20 == 0) {
            *(long **)(lVar18 + ((uVar12 & 0xffffffff) % (uVar23 & 0xffffffff)) * 8) = plVar15;
            goto LAB_0d79f67d;
          }
          uVar12 = uVar12 % uVar23;
        }
        *(long **)(lVar18 + uVar12 * 8) = plVar15;
      }
    }
  }
  else {
    *plVar15 = *plVar14;
    *plVar14 = (long)plVar15;
  }
LAB_0d79f67d:
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_0d79f686:
  pthread_mutex_unlock(param_2 + 0x70);
  uStack_168._0_4_ = (undefined4)*(undefined8 *)(param_2 + 400);
  uStack_168._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_2 + 400) >> 0x20);
  func_0x0ee31710(&plStack_118,&plStack_108,&uStack_168);
  plVar14 = plStack_118;
  uVar11 = func_0x0ee258e0(plStack_118);
  uVar8 = func_0x045feb46(plStack_120,uVar11);
  func_0x0ee25a40(plVar14,uVar8);
  param_3 = pbStack_110;
  puStack_60 = &UNK_013d8379;
  uStack_58 = 0xf;
  uStack_50 = _DAT_0f778528;
  uStack_48 = 0xffffffff00000001;
  uStack_40 = 0;
  uStack_38 = 0;
  plStack_190 = plStack_118;
  if (pbStack_110 != (byte *)0x0) {
    LOCK();
    *(long *)(pbStack_110 + 8) = *(long *)(pbStack_110 + 8) + 1;
    UNLOCK();
  }
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  plStack_98 = plVar2;
  plStack_a8 = (long *)&UNK_0f484880;
  lStack_a0 = param_2;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x180);
  if (plVar14 == (long *)0x0) {
LAB_0d79fe61:
    func_0x0eec74c0(0x180,0);
  }
  plVar15 = (long *)(param_2 + 0x98);
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f484680;
  plVar2 = plVar14 + 4;
  plStack_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  if (plStack_a8 == (long *)0x0) {
    plStack_108 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_a8)(&plStack_a8,&plStack_108);
    plStack_108 = plStack_a8;
  }
  plStack_a8 = (long *)0x0;
  func_0x0ee25c30(plVar2,plVar15,&puStack_60,1);
  uStack_168._0_4_ = 0;
  uStack_168._4_4_ = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15d = 0;
  uStack_15c = 0;
  if (plStack_108 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_108)(&plStack_108,&uStack_168);
    plVar17 = plStack_108;
  }
  plStack_108 = (long *)0x0;
  uStack_168._0_4_ = SUB84(plVar17,0);
  uStack_168._4_4_ = (undefined4)((ulong)plVar17 >> 0x20);
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x12] = (long)&UNK_0f4847b8;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0;
  if (plVar17 == (long *)0x0) {
    lVar18 = 0;
  }
  else {
    (*(code *)*plVar17)(&uStack_168,plVar14 + 0x16);
    lVar18 = CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
  }
  uStack_168._0_4_ = 0;
  uStack_168._4_4_ = 0;
  plVar14[0x16] = lVar18;
  plVar14[0x1e] = 0;
  *(undefined1 *)(plVar14 + 0x1f) = 1;
  *(undefined1 *)(plVar14 + 0x20) = 0;
  *(undefined1 *)(plVar14 + 0x22) = 0;
  plVar14[4] = (long)&UNK_0f4846d0;
  plVar14[0x12] = (long)&UNK_0f484720;
  plVar14[0x23] = 0;
  plVar14[0x24] = 0;
  plVar14[0x25] = 0;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  *(undefined4 *)(plVar14 + 0x28) = 1;
  plVar14[0x2d] = 0;
  plVar14[0x2e] = 0;
  plVar14[0x29] = 0;
  plVar14[0x2a] = 0;
  *(undefined8 *)((long)plVar14 + 0x151) = 0;
  *(undefined8 *)((long)plVar14 + 0x159) = 0;
  if ((lVar18 == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_013be72d),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (plStack_108 != (long *)0x0) {
    (*(code *)plStack_108[1])(&plStack_108);
  }
  if (plVar14[0x14] == 0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar14[2] = plVar14[2] + 1;
    UNLOCK();
    plVar14[0x13] = (long)(plVar14 + 0x13);
    plVar14[0x14] = (long)plVar14;
LAB_0d79f9ef:
    plVar17 = plVar14 + 1;
    LOCK();
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  else if (*(long *)(plVar14[0x14] + 8) == -1) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar14[2] = plVar14[2] + 1;
    UNLOCK();
    plVar14[0x13] = (long)(plVar14 + 0x13);
    plVar14[0x14] = (long)plVar14;
    func_0x0412c2d0();
    goto LAB_0d79f9ef;
  }
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  plStack_108 = plVar2;
  plStack_100 = plVar14;
  (**(code **)(*plVar15 + 0x20))(plVar15,&plStack_108);
  plVar17 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      func_0x0412c2d0(plVar17);
    }
  }
  if (plStack_190 != (long *)0x0) {
    func_0x0d7a0cd0(plVar2,0,0,0);
    uVar5 = uStack_40;
    func_0x0412d680(plVar14 + 0x23);
    *(undefined1 *)(plVar14 + 0x2c) = uVar5;
    if (param_3 != (byte *)0x0) {
      LOCK();
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      UNLOCK();
    }
    plVar14[0x2d] = (long)plStack_190;
    plVar17 = (long *)plVar14[0x2e];
    plVar14[0x2e] = (long)param_3;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar1 = plVar17 + 1;
      lVar18 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    pthread_mutex_unlock(plVar14 + 0x23);
    if (plVar14[0x14] == 0) {
LAB_0d79fec7:
      uVar11 = func_0x04891290();
      func_0x0488fce0(&plStack_108);
      func_0x0d7a0ca0(plVar14);
      func_0x0d7a0c70(0);
      func_0x0d7a00a0(&uStack_b8);
      func_0x0d7a00a0(&plStack_118);
      uVar11 = func_0x0eee2d70(uVar11);
      uVar11 = func_0x04882e20(uVar11);
      func_0x0d7a00a0(&plStack_118);
      uVar11 = func_0x0eee2d70(uVar11);
      func_0x048a6900(&uStack_168);
      uVar11 = func_0x0eee2d70(uVar11);
      func_0x04882e20(uVar11);
      pcVar3 = (code *)swi(3);
      puVar19 = (undefined8 *)(*pcVar3)();
      return puVar19;
    }
    lVar18 = plVar14[0x13];
    plVar17 = (long *)func_0x0412c300();
    if (plVar17 == (long *)0x0) goto LAB_0d79fec7;
    lVar24 = lVar18 + -0x78;
    if (lVar18 == 0) {
      lVar24 = 0;
    }
    LOCK();
    plVar17[2] = plVar17[2] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar17 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
    uStack_168._0_4_ = 0xf484800;
    uStack_168._4_4_ = 0;
    uStack_160 = (undefined1)lVar24;
    uStack_15f = (undefined2)((ulong)lVar24 >> 8);
    uStack_15d = (undefined1)((ulong)lVar24 >> 0x18);
    uStack_15c = (undefined4)((ulong)lVar24 >> 0x20);
    plStack_158 = plVar17;
    plStack_148 = &uStack_168;
    (**(code **)(*plStack_190 + 0x30))(plStack_190,&uStack_168);
    if (plStack_148 == &uStack_168) {
      lVar18 = 0x20;
LAB_0d79fc00:
      (**(code **)(*plStack_148 + lVar18))();
    }
    else {
      lVar18 = 0x28;
      if (plStack_148 != (long *)0x0) goto LAB_0d79fc00;
    }
    if (param_3 != (byte *)0x0) {
      LOCK();
      pbVar10 = param_3 + 8;
      lVar18 = *(long *)pbVar10;
      *(long *)pbVar10 = *(long *)pbVar10 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)param_3 + 0x10))(param_3);
        func_0x0412c2d0(param_3);
      }
    }
    param_3 = (byte *)0x0;
  }
  if (plStack_a8 != (long *)0x0) {
    (*(code *)plStack_a8[1])(&plStack_a8);
  }
  if (param_3 != (byte *)0x0) {
    LOCK();
    pbVar10 = param_3 + 8;
    lVar18 = *(long *)pbVar10;
    *(long *)pbVar10 = *(long *)pbVar10 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)param_3 + 0x10))(param_3);
      func_0x0412c2d0(param_3);
    }
  }
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  iVar7 = *(int *)(param_2 + 0x118);
  plStack_108 = plVar2;
  plStack_100 = plVar14;
  if (iVar7 != 1) {
    if (iVar7 == 3) {
      *(undefined4 *)(plVar14 + 10) = 0;
    }
    else if (iVar7 == 2) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      goto LAB_0d79fd02;
    }
    uStack_160 = SUB81(plVar14,0);
    uStack_15f = (undefined2)((ulong)plVar14 >> 8);
    uStack_15d = (undefined1)((ulong)plVar14 >> 0x18);
    uStack_15c = (undefined4)((ulong)plVar14 >> 0x20);
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    uStack_168 = (long **)plVar2;
    (**(code **)(*plVar15 + 0x28))(plVar15,&uStack_168,0);
    plVar2 = (long *)CONCAT44(uStack_15c,CONCAT13(uStack_15d,CONCAT21(uStack_15f,uStack_160)));
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar15 = plVar2 + 1;
      lVar18 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
  }
LAB_0d79fd02:
  plVar2 = plStack_100;
  if (plStack_100 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_100 + 1;
    lVar18 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_100 + 0x10))(plStack_100);
      func_0x0412c2d0(plVar2);
    }
  }
  plStack_c8 = plVar14 + 0x12;
  plStack_c0 = plVar14;
  func_0x048a8a80(&uStack_168,&plStack_c8);
  plVar2 = plStack_c0;
  uVar4 = uStack_15c;
  plVar14 = (long *)uStack_168;
  uVar8 = CONCAT13(uStack_15d,CONCAT21(uStack_15f,uStack_160));
  uStack_168._0_4_ = 0;
  uStack_168._4_4_ = 0;
  uStack_160 = 0;
  uStack_15f = 0;
  uStack_15d = 0;
  uStack_15c = 0;
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_c0 + 1;
    lVar18 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x0412c2d0(plVar2);
    }
  }
  plVar2 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar15 = plStack_b0 + 1;
    lVar18 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x0412c2d0(plVar2);
    }
  }
  *param_1 = plVar14;
  *(undefined4 *)(param_1 + 1) = uVar8;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  if (pbStack_110 != (byte *)0x0) {
    LOCK();
    pbVar10 = pbStack_110 + 8;
    lVar18 = *(long *)pbVar10;
    *(long *)pbVar10 = *(long *)pbVar10 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)pbStack_110 + 0x10))(pbStack_110);
      func_0x0412c2d0(pbStack_110);
    }
  }
  return param_1;
}


