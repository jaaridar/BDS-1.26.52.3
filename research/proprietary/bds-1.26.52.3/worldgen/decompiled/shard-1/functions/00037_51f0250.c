/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f0250 (ELF vaddr 0x51f0250)
 * Label: VanillaSurfaceBuilders::LegacyMesaSurfaceBuilder::vslot5
 * Body:  [[052f0250, 052f0bfa]]
 * Ghidra: wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot5
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__LegacyMesaSurfaceBuilder__vslot5
               (long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long lStack_f8;
  long alStack_b0 [16];
  
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    if ((DAT_0f5573f8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f5573f8), iVar11 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573f0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573f8);
    }
    psVar12 = (short *)*puVar2;
    if (psVar12 == (short *)puVar2[1]) {
      param_3 = (undefined8 *)*param_3;
    }
    else {
      do {
        if (*psVar12 == _DAT_0f5573f0) {
          lVar3 = *(long *)(psVar12 + 4);
          param_3 = (undefined8 *)*param_3;
          goto joined_r0x052f02e8;
        }
        psVar12 = psVar12 + 8;
      } while (psVar12 != (short *)puVar2[1]);
      param_3 = (undefined8 *)*param_3;
    }
    lVar3 = 0;
joined_r0x052f02e8:
    if ((DAT_0f557388 == '\0') && (iVar11 = func_0x04108328(&DAT_0f557388), iVar11 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f557380 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557388);
    }
    for (psVar12 = (short *)*param_3; psVar12 != (short *)param_3[1]; psVar12 = psVar12 + 8) {
      if (*psVar12 == _DAT_0f557380) {
        if (lVar3 == 0) {
          return;
        }
        lVar4 = *(long *)(psVar12 + 4);
        if (lVar4 == 0) {
          return;
        }
        iVar11 = -0x23;
        if (*(char *)(lVar4 + 0x18) == '\x01') {
          fVar29 = (float)(*(uint *)(param_4 + 2) & _DAT_014e7ba0);
          piVar5 = *(int **)(param_1 + 0x48);
          fVar30 = (float)*(int *)param_4[1];
          fVar34 = (float)((int *)param_4[1])[2];
          fVar36 = 0.0;
          if (0 < *piVar5) {
            fVar31 = _DAT_014ea8c0 * fVar30;
            fVar35 = _UNK_014ea8c4 * fVar34;
            lVar26 = 0;
            lVar21 = 0;
            fVar33 = _DAT_011983f0;
            do {
              alStack_b0[0] = CONCAT44(fVar33 * fVar35,fVar33 * fVar31);
              fVar32 = (float)func_0x0d2eb5d0(*(long *)(piVar5 + 2) + lVar26,alStack_b0);
              fVar36 = fVar36 + fVar32 / fVar33;
              fVar33 = fVar33 * _DAT_011986e0;
              lVar21 = lVar21 + 1;
              lVar26 = lVar26 + 0x80c;
            } while (lVar21 < *piVar5);
          }
          if (fVar36 <= fVar29) {
            fVar29 = fVar36;
          }
          if (_DAT_011983fc < fVar29) {
            piVar5 = *(int **)(param_1 + 0x50);
            if (*piVar5 < 1) {
              fVar36 = 0.0;
            }
            else {
              fVar30 = fVar30 * _DAT_014e7d20;
              fVar34 = fVar34 * _UNK_014e7d24;
              fVar36 = 0.0;
              lVar26 = 0;
              lVar21 = 0;
              fVar33 = _DAT_011983f0;
              do {
                alStack_b0[0] = CONCAT44(fVar33 * fVar34,fVar33 * fVar30);
                fVar31 = (float)func_0x0d2eb5d0(*(long *)(piVar5 + 2) + lVar26,alStack_b0);
                fVar36 = fVar36 + fVar31 / fVar33;
                fVar33 = fVar33 * _DAT_011986e0;
                lVar21 = lVar21 + 1;
                lVar26 = lVar26 + 0x80c;
              } while (lVar21 < *piVar5);
            }
            fVar34 = (float)((uint)fVar36 & _DAT_014e7ba0) * _DAT_01198690;
            fVar30 = fVar29 * fVar29 * _DAT_0119845c;
            fVar29 = (float)(int)((int)fVar34 + (uint)((float)(int)fVar34 < fVar34)) + _DAT_01198364
            ;
            if (fVar30 <= fVar29) {
              fVar29 = fVar30;
            }
            iVar11 = (int)(fVar29 + _DAT_0119834c) + -0x23;
          }
        }
        uVar19 = *(uint *)param_4[1];
        uVar28 = ((uint *)param_4[1])[2];
        lVar21 = *(long *)(lVar4 + 8);
        if (lVar21 == 0) {
          lVar21 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
        }
        func_0x05355710(alStack_b0,lVar21);
        lVar26 = *(long *)(lVar4 + 0x10);
        if (lVar26 == 0) {
          lVar26 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
        }
        lStack_f8 = *(long *)(lVar3 + 0x10);
        if (lStack_f8 == 0) {
          lStack_f8 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
        }
        lVar13 = FUN_0cc41df0(&DAT_0f6ff9e0,&DAT_0f71bd88,1);
        lVar14 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf7194a0,1);
        fVar29 = *(float *)(param_4 + 2);
        fVar30 = (float)(**(code **)(*(long *)*param_2 + 0x30))();
        fVar34 = (float)func_0x0eee3810((*(float *)(param_4 + 2) / _DAT_01198af0) * _DAT_01198b3c);
        iVar20 = *(int *)(*param_4 + 0x14);
        lVar15 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf718af0,1);
        iVar20 = iVar20 + -1;
        iVar10 = *(int *)((long)param_4 + 0x14);
        if (iVar20 <= iVar10) {
          return;
        }
        uVar19 = uVar19 & 0xf;
        uVar28 = uVar28 & 0xf;
        iVar8 = (int)(fVar30 * _DAT_01198630 + fVar29 / _DAT_01198af0 + _DAT_01198af0);
        plVar22 = (long *)*param_4;
        lVar23 = *plVar22;
        iVar24 = -1;
        bVar6 = false;
        iVar25 = 0;
        fVar29 = _DAT_01198994;
        do {
          uVar16 = (ulong)(((int)plVar22[3] * uVar19 + uVar28) * *(int *)((long)plVar22 + 0x14) +
                          iVar20);
          lVar17 = *(long *)(lVar23 + uVar16 * 8);
          if (*(long *)(*(long *)(lVar17 + 0x68) + 200) == _DAT_0f713fc8) {
            return;
          }
          cVar1 = **(char **)(*(long *)(lVar17 + 0x68) + 0x20);
          iVar27 = 1;
          if (((cVar1 == '\x05') || (cVar1 == '\0')) && (iVar20 < iVar11 + iVar10)) {
            *(long *)(lVar23 + uVar16 * 8) = lVar13;
            iVar27 = 0;
            lVar17 = lVar13;
          }
          if (iVar25 < 0xf) {
            lVar17 = *(long *)(*(long *)(lVar17 + 0x68) + 200);
            if (lVar17 == _DAT_0f6eaec0) {
              iVar24 = -1;
            }
            else if (lVar17 == _DAT_0f71bd88) {
              if (iVar24 == -1) {
                if (iVar8 < 1) {
                  lStack_f8 = *(long *)(lVar3 + 0x20);
LAB_052f08ce:
                  if (lStack_f8 == 0) {
                    lStack_f8 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
                    fVar29 = _DAT_01198994;
                  }
                }
                else if (iVar20 <= *(short *)((long)param_2 + 0x14) + 1 &&
                         *(short *)((long)param_2 + 0x14) + -4 <= iVar20) {
                  lStack_f8 = *(long *)(lVar3 + 0x10);
                  goto LAB_052f08ce;
                }
                iVar10 = (int)*(short *)((long)param_2 + 0x14);
                iVar24 = iVar20 - iVar10;
                if (iVar24 < 1) {
                  iVar24 = 0;
                }
                iVar24 = iVar24 + iVar8;
                if (iVar20 < iVar10 + -1) {
                  plVar22 = (long *)*param_4;
                  uVar16 = (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                   *(int *)((long)plVar22 + 0x14) + iVar20);
                  lVar23 = *plVar22;
                  lVar17 = lStack_f8;
                  if (lStack_f8 == lVar21) {
                    lVar17 = alStack_b0[1];
                  }
LAB_052f0acd:
                  *(long *)(lVar23 + uVar16 * 8) = lVar17;
                }
                else {
                  if ((*(char *)(lVar4 + 0x19) == '\x01') && (iVar8 * 2 + 0x17 + iVar10 < iVar20)) {
                    plVar22 = (long *)*param_4;
                    uVar16 = (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                     *(int *)((long)plVar22 + 0x14) + iVar20);
                    lVar23 = *plVar22;
                    lVar17 = lVar15;
                    if (_DAT_011983fc < fVar34) {
                      lVar17 = lVar14;
                    }
                    goto LAB_052f0acd;
                  }
                  if (iVar20 <= iVar8 + 3 + iVar10) {
                    lVar17 = *(long *)(lVar3 + 8);
                    if (lVar17 == 0) {
                      lVar17 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
                      fVar29 = _DAT_01198994;
                    }
                    plVar22 = (long *)*param_4;
                    lVar23 = *plVar22;
                    *(long *)(lVar23 + (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                               *(int *)((long)plVar22 + 0x14) + iVar20) * 8) =
                         lVar17;
                    bVar6 = true;
                    goto LAB_052f0ad3;
                  }
                  bVar6 = iVar20 <= iVar10 + 0x40;
                  bVar7 = 0x10;
                  if (!bVar6 || iVar10 >= iVar20) {
                    bVar7 = 1;
                  }
                  if ((fVar34 <= _DAT_011983fc) && (bVar6 && iVar10 < iVar20)) {
                    bVar7 = func_0x052f0c00(param_1,*(undefined4 *)param_4[1],iVar20,
                                            ((undefined4 *)param_4[1])[2],
                                            *(undefined8 *)(param_1 + 0x58));
                    fVar29 = _DAT_01198994;
                  }
                  if (bVar7 < 0x10) {
                    lVar17 = alStack_b0[bVar7];
                  }
                  else {
                    lVar17 = *(long *)(lVar4 + 0x10);
                    if (lVar17 == 0) {
                      lVar17 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae50,1);
                      fVar29 = _DAT_01198994;
                    }
                  }
                  plVar22 = (long *)*param_4;
                  lVar23 = *plVar22;
                  *(long *)(lVar23 + (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                             *(int *)((long)plVar22 + 0x14) + iVar20) * 8) = lVar17;
                }
                bVar6 = false;
              }
              else if (0 < iVar24) {
                iVar24 = iVar24 + -1;
                if (bVar6) {
                  *(long *)(lVar23 + uVar16 * 8) = alStack_b0[1];
                  bVar6 = true;
                }
                else {
                  fVar29 = (float)func_0x0d343da0((float)*(int *)param_4[1] * fVar29,
                                                  (float)((int *)param_4[1])[2] * fVar29,
                                                  *(undefined8 *)(param_1 + 0x58));
                  fVar29 = (float)func_0x0eee43a0(fVar29 + fVar29);
                  uVar18 = (int)fVar29 + iVar20 + 0x40;
                  uVar9 = (int)fVar29 + iVar20 + 0x7f;
                  if (-1 < (int)uVar18) {
                    uVar9 = uVar18;
                  }
                  uVar16 = (ulong)*(byte *)(param_1 + 8 + (long)(int)(uVar18 - (uVar9 & 0xffffffc0))
                                           );
                  if (uVar16 < 0x10) {
                    plVar22 = (long *)*param_4;
                    lVar23 = *plVar22;
                    *(long *)(lVar23 + (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                               *(int *)((long)plVar22 + 0x14) + iVar20) * 8) =
                         alStack_b0[uVar16];
                  }
                  else {
                    plVar22 = (long *)*param_4;
                    lVar23 = *plVar22;
                    *(long *)(lVar23 + (ulong)(((int)plVar22[3] * uVar19 + uVar28) *
                                               *(int *)((long)plVar22 + 0x14) + iVar20) * 8) =
                         lVar26;
                  }
                  bVar6 = false;
                  fVar29 = _DAT_01198994;
                }
              }
LAB_052f0ad3:
              iVar25 = iVar25 + iVar27;
              iVar10 = *(int *)((long)param_4 + 0x14);
            }
          }
          iVar20 = iVar20 + -1;
          if (iVar20 <= iVar10) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


