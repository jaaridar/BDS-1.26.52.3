/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c8290 (ELF vaddr 0xd1c8290)
 * Label: caller-of-callee
 * Body:  [[0d2c8290, 0d2c836d] [0d2c8370, 0d2c83b6] [0d2c83c0, 0d2c83d2] [0d2c83e0, 0d2c858c] [0d2c8590, 0d2c864c] [0d2c8650, 0d2c8685] [0d2c8690, 0d2c8702] [0d2c8710, 0d2c872a] [0d2c8730, 0d2c8775] [0d2c8780, 0d2c87d0] [0d2c87e0, 0d2c8814] [0d2c8820, 0d2c8858] [0d2c8860, 0d2c8880] [0d2c8890, 0d2c8a99] [0d2c8aa0, 0d2c8b41] [0d2c8b50, 0d2c8d8e] [0d2c8df4, 0d2c8e38]]
 * Ghidra: FUN_0d2c8290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2c8290(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  ulong uStack_98;
  byte ***pppbStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_50;
  ulong uStack_48;
  ulong *puStack_40;
  byte **ppbStack_38;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  fVar24 = (float)(ulong)((param_2[1] - *param_2 >> 4) * -0x5555555555555555);
  uVar8 = (ulong)fVar24;
  uVar8 = (long)(fVar24 - _DAT_01198778) & (long)uVar8 >> 0x3f | uVar8;
  uVar21 = 2;
  if (uVar8 != 1) {
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar14 = 0;
      bVar23 = false;
      uVar21 = uVar8;
      if (uVar8 == 0) {
LAB_0d2c8c6f:
        if (!bVar23) goto LAB_0d2c8346;
        fVar24 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar8 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
        if ((uVar14 < 3) ||
           (uVar11 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
           1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar8 = func_0x0412c3f0(uVar8);
          if (uVar8 < uVar21) {
            uVar8 = uVar21;
          }
        }
        else {
          if (1 < uVar8) {
            lVar17 = 0x3f;
            if (uVar8 - 1 != 0) {
              for (; uVar8 - 1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar8 = 1L << (-((byte)lVar17 ^ 0x3f) & 0x3f);
          }
          if (uVar8 < uVar21) {
            uVar8 = uVar21;
          }
        }
        uVar21 = uVar8;
        if (uVar14 <= uVar8) goto LAB_0d2c8346;
      }
    }
    else {
      uVar21 = func_0x0412c3f0(uVar8,2);
      uVar14 = param_1[1];
      bVar23 = uVar21 < uVar14;
      if (uVar21 <= uVar14) goto LAB_0d2c8c6f;
    }
  }
  func_0x0d2e9120(param_1,uVar21);
LAB_0d2c8346:
  puVar22 = (ulong *)*param_2;
  puVar16 = (ulong *)param_2[1];
  if (puVar22 == puVar16) {
    return param_1;
  }
  plStack_50 = param_1 + 2;
  puStack_40 = puVar16;
LAB_0d2c8385:
  cVar6 = func_0x0b5f94a0(puVar22,0x1f,1,0);
  if (cVar6 != '\0') {
    if ((*puVar22 & 1) == 0) {
      uStack_78 = puVar22[2];
      uStack_88 = *puVar22;
      uStack_80 = puVar22[1];
    }
    else {
      FUN_0412e5e0(&uStack_88,puVar22[2],puVar22[1]);
    }
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_60 = 0;
    func_0x08490b70();
    pbStack_b8 = (byte *)0x0;
    pbStack_b0 = (byte *)0x0;
    pbStack_a8 = (byte *)0x0;
    lVar17 = lStack_68;
    lVar18 = lStack_70;
    if (lStack_68 - lStack_70 != 0) {
      uVar21 = lStack_68 - lStack_70 >> 6;
      if (uVar21 >> 0x3c != 0) {
LAB_0d2c8d88:
        uVar12 = func_0x0d2d9fd0();
        func_0x0d2c8ef0(param_1);
        uVar12 = func_0x0eee2d70(uVar12);
        uVar12 = FUN_04882e20(uVar12);
        func_0x051922d0(&pbStack_b8);
        func_0x0d2c8e40(&uStack_88);
        func_0x0d2c8ef0(param_1);
        func_0x0eee2d70(uVar12);
        pcVar5 = (code *)swi(3);
        plVar10 = (long *)(*pcVar5)();
        return plVar10;
      }
      lVar17 = lStack_68 - lStack_70 >> 2;
      pbVar9 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar17);
      if (pbVar9 == (byte *)0x0) {
        func_0x0eec74c0(lVar17,0);
      }
      pbStack_a8 = pbVar9 + uVar21 * 0x10;
      lVar17 = lStack_68;
      lVar18 = lStack_70;
      pbStack_b8 = pbVar9;
      pbStack_b0 = pbVar9;
    }
    for (; lVar18 != lVar17; lVar18 = lVar18 + 0x40) {
      ppbStack_38 = &pbStack_b8;
      if ((ulong)*(uint *)(lVar18 + 0x38) == 0xffffffff) {
        func_0x04931450();
        goto LAB_0d2c8d88;
      }
      pppbStack_90 = &ppbStack_38;
      (**(code **)(&UNK_0f45eaf8 + (ulong)*(uint *)(lVar18 + 0x38) * 8))(&pppbStack_90,lVar18 + 8);
    }
    pbVar9 = (byte *)((long)puVar22 + 1);
    bVar23 = ((byte)*puVar22 & 1) == 0;
    pbVar19 = (byte *)puVar22[2];
    if (bVar23) {
      pbVar19 = pbVar9;
    }
    uVar21 = (ulong)(byte)((byte)*puVar22 >> 1);
    if (!bVar23) {
      uVar21 = puVar22[1];
    }
    uVar8 = func_0x04883620(&pppbStack_90,pbVar19,uVar21);
    uVar21 = param_1[1];
    if (uVar21 != 0) {
      uVar14 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
      uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar14 >> 0x38 < 2) {
        uVar11 = uVar21 - 1 & uVar8;
      }
      else {
        uVar11 = uVar8;
        if (uVar21 <= uVar8) {
          if ((uVar8 | uVar21) >> 0x20 == 0) {
            uVar11 = (uVar8 & 0xffffffff) % (uVar21 & 0xffffffff);
          }
          else {
            uVar11 = uVar8 % uVar21;
          }
        }
      }
      puVar3 = *(undefined8 **)(*param_1 + uVar11 * 8);
      uStack_98 = uVar11;
      if ((puVar3 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar3, plVar10 != (long *)0x0)) {
        if (((byte)*puVar22 & 1) == 0) {
          uVar15 = (ulong)(byte)((byte)*puVar22 >> 1);
        }
        else {
          uVar15 = puVar22[1];
          pbVar9 = (byte *)puVar22[2];
        }
        if ((byte)(uVar14 >> 0x38) < 2) {
          uVar14 = uVar21 - 1;
          uStack_48 = uVar14;
          do {
            if (plVar10[1] == uVar8) {
              bVar2 = *(byte *)(plVar10 + 2);
              if ((bVar2 & 1) == 0) {
                uVar13 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar13 = plVar10[3];
              }
              if (uVar13 == uVar15) {
                if ((bVar2 & 1) == 0) {
                  lVar17 = (long)plVar10 + 0x11;
                }
                else {
                  lVar17 = plVar10[4];
                }
                iVar7 = func_0x0eee3000(lVar17,pbVar9,uVar15);
                uVar14 = uStack_48;
                uVar11 = uStack_98;
                if (iVar7 == 0) goto LAB_0d2c875f;
              }
            }
            else if ((plVar10[1] & uVar14) != uVar11) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar14 = plVar10[1];
            if (uVar14 == uVar8) {
              bVar2 = *(byte *)(plVar10 + 2);
              if ((bVar2 & 1) == 0) {
                uVar14 = (ulong)(bVar2 >> 1);
              }
              else {
                uVar14 = plVar10[3];
              }
              if (uVar14 == uVar15) {
                if ((bVar2 & 1) == 0) {
                  lVar17 = (long)plVar10 + 0x11;
                }
                else {
                  lVar17 = plVar10[4];
                }
                iVar7 = func_0x0eee3000(lVar17,pbVar9,uVar15);
                uVar11 = uStack_98;
                if (iVar7 == 0) goto LAB_0d2c875f;
              }
            }
            else {
              if (uVar21 <= uVar14) {
                if ((uVar14 | uVar21) >> 0x20 == 0) {
                  uVar14 = (uVar14 & 0xffffffff) % (uVar21 & 0xffffffff);
                }
                else {
                  uVar14 = uVar14 % uVar21;
                }
              }
              if (uVar14 != uVar11) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    *plVar10 = 0;
    plVar10[1] = uVar8;
    if ((*puVar22 & 1) == 0) {
      plVar10[4] = puVar22[2];
      uVar14 = puVar22[1];
      plVar10[2] = *puVar22;
      plVar10[3] = uVar14;
    }
    else {
      FUN_0412e5e0(plVar10 + 2,puVar22[2],puVar22[1]);
    }
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    if ((long)uVar21 < 0) {
      fVar25 = (float)uVar21;
      fVar24 = *(float *)(param_1 + 4);
      if (uVar21 != 0) goto LAB_0d2c8870;
LAB_0d2c8890:
      uVar14 = 1;
      if (2 < uVar21) {
        uVar14 = (ulong)((uVar21 & uVar21 - 1) != 0);
      }
      uVar14 = uVar21 * 2 | uVar14;
      fVar24 = (float)ceilf((float)(param_1[3] + 1) / fVar24);
      uVar21 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
      if (uVar21 < uVar14) {
        uVar21 = uVar14;
      }
      uVar14 = 2;
      if ((uVar21 == 1) || (uVar14 = uVar21, (uVar21 & uVar21 - 1) == 0)) {
        uVar21 = param_1[1];
        bVar23 = uVar14 < uVar21;
        if (uVar14 <= uVar21) goto LAB_0d2c891d;
LAB_0d2c88fc:
        func_0x0d2e9120(param_1,uVar14);
      }
      else {
        uVar14 = func_0x0412c3f0();
        uVar21 = param_1[1];
        bVar23 = uVar14 < uVar21;
        if (uVar21 < uVar14) goto LAB_0d2c88fc;
LAB_0d2c891d:
        if (bVar23) {
          fVar24 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          uVar11 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
          if ((uVar21 < 3) ||
             (uVar15 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
             uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
             1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar11 = func_0x0412c3f0(uVar11);
          }
          else if (1 < uVar11) {
            lVar17 = 0x3f;
            if (uVar11 - 1 != 0) {
              for (; uVar11 - 1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar11 = 1L << (-((byte)lVar17 ^ 0x3f) & 0x3f);
          }
          if (uVar14 <= uVar11) {
            uVar14 = uVar11;
          }
          if (uVar14 < uVar21) goto LAB_0d2c88fc;
        }
      }
      uVar21 = param_1[1];
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar14 = uVar8 & uVar21 - 1;
      }
      else {
        uVar14 = uVar8;
        if (uVar21 <= uVar8) {
          if ((uVar8 | uVar21) >> 0x20 == 0) {
            uVar14 = (uVar8 & 0xffffffff) % (uVar21 & 0xffffffff);
          }
          else {
            uVar14 = uVar8 % uVar21;
          }
        }
      }
    }
    else {
      fVar25 = (float)(long)uVar21;
      fVar24 = *(float *)(param_1 + 4);
      if (uVar21 == 0) goto LAB_0d2c8890;
LAB_0d2c8870:
      uVar14 = uStack_98;
      if (fVar25 * fVar24 < (float)(param_1[3] + 1)) goto LAB_0d2c8890;
    }
    lVar17 = *param_1;
    plVar4 = *(long **)(lVar17 + uVar14 * 8);
    if (plVar4 == (long *)0x0) {
      *plVar10 = *plStack_50;
      *plStack_50 = (long)plVar10;
      *(long **)(lVar17 + uVar14 * 8) = plStack_50;
      if (*plVar10 != 0) {
        uVar8 = *(ulong *)(*plVar10 + 8);
        if ((uVar21 & uVar21 - 1) == 0) {
          *(long **)(lVar17 + (uVar8 & uVar21 - 1) * 8) = plVar10;
        }
        else {
          if (uVar21 <= uVar8) {
            if ((uVar8 | uVar21) >> 0x20 == 0) {
              *(long **)(lVar17 + ((uVar8 & 0xffffffff) % (uVar21 & 0xffffffff)) * 8) = plVar10;
              goto LAB_0d2c8a7b;
            }
            uVar8 = uVar8 % uVar21;
          }
          *(long **)(lVar17 + uVar8 * 8) = plVar10;
        }
      }
    }
    else {
      *plVar10 = *plVar4;
      *plVar4 = (long)plVar10;
    }
LAB_0d2c8a7b:
    param_1[3] = param_1[3] + 1;
    lVar17 = plVar10[5];
    goto joined_r0x0d2c876b;
  }
  if ((*puVar22 & 1) == 0) {
    pbStack_b8 = (byte *)((long)puVar22 + 1);
  }
  else {
    pbStack_b8 = (byte *)puVar22[2];
  }
  func_0x0b5c5fe0(1,3,0x1f,&UNK_01234903,&pbStack_b8);
  goto LAB_0d2c8378;
LAB_0d2c875f:
  lVar17 = plVar10[5];
joined_r0x0d2c876b:
  if (lVar17 != 0) {
    lVar18 = plVar10[6];
    lVar20 = lVar17;
    if (lVar17 != lVar18) {
      do {
        plVar4 = *(long **)(lVar18 + -8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar20 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            func_0x0412c2d0(plVar4);
          }
        }
        lVar18 = lVar18 + -0x10;
      } while (lVar18 != lVar17);
      lVar20 = plVar10[5];
    }
    plVar10[6] = lVar17;
    thunk_FUN_0ee326a0(lVar20,plVar10[7] - lVar20);
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
  }
  lVar18 = lStack_70;
  plVar10[5] = (long)pbStack_b8;
  plVar10[6] = (long)pbStack_b0;
  plVar10[7] = (long)pbStack_a8;
  pbStack_b8 = (byte *)0x0;
  pbStack_b0 = (byte *)0x0;
  pbStack_a8 = (byte *)0x0;
  lVar17 = lStack_68;
  if (lStack_70 != 0) {
    for (; lVar18 != lVar17; lVar17 = lVar17 + -0x40) {
      if ((ulong)*(uint *)(lVar17 + -8) != 0xffffffff) {
        (**(code **)(&UNK_0f45ee08 + (ulong)*(uint *)(lVar17 + -8) * 8))
                  (&pppbStack_90,lVar17 + -0x38);
      }
      *(undefined4 *)(lVar17 + -8) = 0xffffffff;
    }
    lStack_68 = lVar18;
    thunk_FUN_0ee326a0(lStack_70,lStack_60 - lStack_70);
  }
  puVar16 = puStack_40;
  if ((uStack_88 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_78,uStack_88 & 0xfffffffffffffffe);
    puVar16 = puStack_40;
  }
LAB_0d2c8378:
  puVar22 = puVar22 + 6;
  if (puVar22 == puVar16) {
    return param_1;
  }
  goto LAB_0d2c8385;
}


