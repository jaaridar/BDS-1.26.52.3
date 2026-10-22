/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x69e3b00 (ELF vaddr 0x68e3b00)
 * Label: caller-of-callee
 * Body:  [[069e3b00, 069e3b37] [069e466e, 069e4681]]
 * Ghidra: FUN_069e3b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_069e3b00(undefined4 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 uStack_69;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long *plStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  switch(param_1) {
  case 0:
    if (cRam000000000f590958 != '\0') {
      return (long *)0xf590940;
    }
    iVar8 = func_0x04108328(0xf590958);
    if (iVar8 != 0) {
      func_0x069e3850();
      FUN_0410844d(0xf590958);
      return (long *)0xf590940;
    }
    return (long *)0xf590940;
  case 1:
    if (param_2[3] != 0) {
      puVar18 = (undefined8 *)param_2[2];
      while (puVar18 != (undefined8 *)0x0) {
        puVar22 = (undefined8 *)*puVar18;
        if ((*(byte *)(puVar18 + 2) & 1) != 0) {
          func_0x0412a280(puVar18[4],puVar18[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar18,0x38);
        puVar18 = puVar22;
      }
      param_2[2] = 0;
      if (param_2[1] != 0) {
        func_0x0eee2dd0(*param_2,0,param_2[1] << 3);
      }
      param_2[3] = 0;
    }
    lVar13 = *param_3;
    *param_3 = 0;
    lVar19 = *param_2;
    *param_2 = lVar13;
    if (lVar19 != 0) {
      func_0x0412a280(lVar19,param_2[1] << 3);
    }
    param_2[1] = param_3[1];
    param_3[1] = 0;
    lVar13 = param_3[3];
    param_2[3] = lVar13;
    *(int *)(param_2 + 4) = (int)param_3[4];
    lVar19 = param_3[2];
    param_2[2] = lVar19;
    if (lVar13 != 0) {
      uVar21 = *(ulong *)(lVar19 + 8);
      uVar10 = param_2[1];
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar21 = uVar21 & uVar10 - 1;
      }
      else if (uVar10 <= uVar21) {
        if ((uVar21 | uVar10) >> 0x20 == 0) {
          uVar21 = (uVar21 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar21 = uVar21 % uVar10;
        }
      }
      *(long **)(*param_2 + uVar21 * 8) = param_2 + 2;
      param_3[2] = 0;
      param_3[3] = 0;
      return param_3;
    }
    return param_3;
  case 2:
    if (param_2 == param_3) {
      return param_3;
    }
    *(int *)(param_2 + 4) = (int)param_3[4];
    puVar18 = (undefined8 *)param_3[2];
    if (param_2[1] != 0) {
      func_0x0eee2dd0(*param_2,0,param_2[1] << 3);
      puVar22 = (undefined8 *)param_2[2];
      param_2[2] = 0;
      param_2[3] = 0;
      while (puVar22 != (undefined8 *)0x0) {
        if (puVar18 == (undefined8 *)0x0) {
          do {
            puVar18 = (undefined8 *)*puVar22;
            if ((*(byte *)(puVar22 + 2) & 1) != 0) {
              func_0x0412a280(puVar22[4],puVar22[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar22,0x38);
            puVar22 = puVar18;
          } while (puVar18 != (undefined8 *)0x0);
          return param_3;
        }
        if (puVar22 != puVar18) {
          pbVar1 = (byte *)(puVar22 + 2);
          bVar2 = *(byte *)(puVar18 + 2);
          if ((*pbVar1 & 1) == 0) {
            if ((bVar2 & 1) == 0) {
              puVar22[4] = puVar18[4];
              uVar5 = *(undefined4 *)((long)puVar18 + 0x14);
              uVar6 = *(undefined4 *)(puVar18 + 3);
              uVar7 = *(undefined4 *)((long)puVar18 + 0x1c);
              *(undefined4 *)pbVar1 = *(undefined4 *)(puVar18 + 2);
              *(undefined4 *)((long)puVar22 + 0x14) = uVar5;
              *(undefined4 *)(puVar22 + 3) = uVar6;
              *(undefined4 *)((long)puVar22 + 0x1c) = uVar7;
            }
            else {
              func_0x04885070(pbVar1,puVar18[4],puVar18[3]);
            }
          }
          else {
            bVar23 = (bVar2 & 1) != 0;
            lVar13 = (long)puVar18 + 0x11;
            if (bVar23) {
              lVar13 = puVar18[4];
            }
            uVar21 = (ulong)(bVar2 >> 1);
            if (bVar23) {
              uVar21 = puVar18[3];
            }
            func_0x04885120(pbVar1,lVar13,uVar21);
          }
        }
        *(undefined1 *)(puVar22 + 6) = *(undefined1 *)(puVar18 + 6);
        puVar22[5] = puVar18[5];
        puVar4 = (undefined8 *)*puVar22;
        func_0x069e4970(param_2,puVar22);
        puVar18 = (undefined8 *)*puVar18;
        puVar22 = puVar4;
      }
    }
    if (puVar18 != (undefined8 *)0x0) {
      do {
        plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar9 == (long *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uStack_58 = 0;
        *plVar9 = 0;
        plVar9[1] = 0;
        plStack_68 = plVar9;
        plStack_60 = param_2;
        if ((*(byte *)(puVar18 + 2) & 1) == 0) {
          plVar9[4] = puVar18[4];
          uVar5 = *(undefined4 *)((long)puVar18 + 0x14);
          uVar6 = *(undefined4 *)(puVar18 + 3);
          uVar7 = *(undefined4 *)((long)puVar18 + 0x1c);
          *(undefined4 *)(plVar9 + 2) = *(undefined4 *)(puVar18 + 2);
          *(undefined4 *)((long)plVar9 + 0x14) = uVar5;
          *(undefined4 *)(plVar9 + 3) = uVar6;
          *(undefined4 *)((long)plVar9 + 0x1c) = uVar7;
        }
        else {
          func_0x0412e5e0(plVar9 + 2,puVar18[4],puVar18[3]);
        }
        *(undefined4 *)(plVar9 + 6) = *(undefined4 *)(puVar18 + 6);
        plVar9[5] = puVar18[5];
        uStack_58 = CONCAT71(uStack_58._1_7_,1);
        bVar23 = (*(byte *)(plVar9 + 2) & 1) != 0;
        lVar13 = (long)plVar9 + 0x11;
        if (bVar23) {
          lVar13 = plVar9[4];
        }
        uVar21 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
        if (bVar23) {
          uVar21 = plVar9[3];
        }
        lVar13 = func_0x04883620(&uStack_69,lVar13,uVar21);
        plVar9[1] = lVar13;
        func_0x069e4970(param_2,plVar9);
        puVar18 = (undefined8 *)*puVar18;
      } while (puVar18 != (undefined8 *)0x0);
      return param_3;
    }
    return param_3;
  case 3:
    if (param_2[3] == param_3[3]) {
      puVar18 = (undefined8 *)param_2[2];
      while( true ) {
        if (puVar18 == (undefined8 *)0x0) {
          return param_3;
        }
        lVar13 = func_0x069e8ab0(param_3,puVar18 + 2);
        if (lVar13 == 0) break;
        bVar2 = *(byte *)(puVar18 + 2);
        if ((bVar2 & 1) == 0) {
          uVar21 = (ulong)(bVar2 >> 1);
          uVar10 = (ulong)*(byte *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x10) & 1) != 0) goto code_r0x069e44e3;
code_r0x069e44cf:
          uVar15 = uVar10 >> 1;
        }
        else {
          uVar21 = puVar18[3];
          uVar10 = (ulong)*(byte *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x10) & 1) == 0) goto code_r0x069e44cf;
code_r0x069e44e3:
          uVar15 = *(ulong *)(lVar13 + 0x18);
        }
        if (uVar21 != uVar15) {
          return (long *)0x0;
        }
        if ((bVar2 & 1) == 0) {
          lVar19 = (long)puVar18 + 0x11;
          if ((uVar10 & 1) != 0) goto code_r0x069e450f;
code_r0x069e44fd:
          lVar20 = lVar13 + 0x11;
        }
        else {
          lVar19 = puVar18[4];
          if ((uVar10 & 1) == 0) goto code_r0x069e44fd;
code_r0x069e450f:
          lVar20 = *(long *)(lVar13 + 0x20);
        }
        iVar8 = func_0x0eee3000(lVar19,lVar20);
        if (iVar8 != 0) {
          return (long *)0x0;
        }
        bVar23 = *(byte *)(puVar18 + 6) == *(byte *)(lVar13 + 0x30);
        if (((*(byte *)(puVar18 + 6) & bVar23) == 1) &&
           (bVar23 = *(int *)(lVar13 + 0x2c) == *(int *)((long)puVar18 + 0x2c),
           bVar23 && *(int *)((long)puVar18 + 0x2c) != -1)) {
          if (*(float *)(puVar18 + 5) != *(float *)(lVar13 + 0x28)) {
            return (long *)0x0;
          }
          if (NAN(*(float *)(puVar18 + 5)) || NAN(*(float *)(lVar13 + 0x28))) {
            return (long *)0x0;
          }
        }
        else if (!bVar23) {
          return (long *)0x0;
        }
        puVar18 = (undefined8 *)*puVar18;
      }
    }
    break;
  case 4:
    param_3[2] = (long)FUN_069e3b00;
    *(undefined4 *)(param_3 + 4) = 0xdf0db402;
    param_3[3] = (long)&UNK_069e4890;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(plVar9 + 4) = (int)param_2[4];
    uVar21 = param_2[1];
    uVar10 = 2;
    if (uVar21 == 1) {
code_r0x069e3bfc:
      func_0x069e5390(plVar9,uVar10);
    }
    else {
      if ((uVar21 & uVar21 - 1) != 0) {
        uVar10 = func_0x0412c3f0(uVar21,2);
        uVar15 = plVar9[1];
        bVar23 = uVar10 < uVar15;
        if (uVar10 <= uVar15) goto code_r0x069e46c4;
        goto code_r0x069e3bfc;
      }
      uVar15 = 0;
      bVar23 = false;
      uVar10 = uVar21;
      if (uVar21 != 0) goto code_r0x069e3bfc;
code_r0x069e46c4:
      if (bVar23) {
        fVar24 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
        uVar21 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
        if ((uVar15 < 3) ||
           (uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
           1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar21 = func_0x0412c3f0(uVar21);
        }
        else if (1 < uVar21) {
          lVar13 = 0x3f;
          if (uVar21 - 1 != 0) {
            for (; uVar21 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar21 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
        }
        if (uVar21 < uVar10) {
          uVar21 = uVar10;
        }
        uVar10 = uVar21;
        if (uVar21 < uVar15) goto code_r0x069e3bfc;
      }
    }
    plVar17 = (long *)param_2[2];
    plStack_48 = param_3;
    if (plVar17 != (long *)0x0) {
      plStack_40 = plVar9 + 2;
code_r0x069e3c30:
      do {
        lVar13 = (long)plVar17 + 0x11;
        bVar23 = (*(byte *)(plVar17 + 2) & 1) == 0;
        lVar19 = plVar17[4];
        if (bVar23) {
          lVar19 = lVar13;
        }
        uVar21 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
        if (!bVar23) {
          uVar21 = plVar17[3];
        }
        uVar10 = func_0x04883620(&plStack_68,lVar19,uVar21);
        uVar21 = plVar9[1];
        if (uVar21 != 0) {
          uVar15 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar15 >> 0x38 < 2) {
            uVar12 = uVar21 - 1 & uVar10;
          }
          else {
            uVar12 = uVar10;
            if (uVar21 <= uVar10) {
              if ((uVar10 | uVar21) >> 0x20 == 0) {
                uVar12 = (uVar10 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar12 = uVar10 % uVar21;
              }
            }
          }
          plVar11 = *(long **)(*plVar9 + uVar12 * 8);
          uStack_50 = uVar12;
          if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
            if ((*(byte *)(plVar17 + 2) & 1) == 0) {
              uVar16 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            }
            else {
              uVar16 = plVar17[3];
              lVar13 = plVar17[4];
            }
            if ((byte)(uVar15 >> 0x38) < 2) {
              uVar15 = uVar21 - 1;
              uStack_38 = uVar15;
              do {
                if (plVar11[1] == uVar10) {
                  bVar2 = *(byte *)(plVar11 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar14 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar14 = plVar11[3];
                  }
                  if (uVar14 == uVar16) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar19 = plVar11[4];
                    }
                    iVar8 = func_0x0eee3000(lVar19,lVar13,uVar16);
                    uVar15 = uStack_38;
                    uVar12 = uStack_50;
                    if (iVar8 == 0) goto code_r0x069e3e90;
                  }
                }
                else if ((plVar11[1] & uVar15) != uVar12) break;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            else {
              do {
                uVar15 = plVar11[1];
                if (uVar15 == uVar10) {
                  bVar2 = *(byte *)(plVar11 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar15 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar15 = plVar11[3];
                  }
                  if (uVar15 == uVar16) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar19 = plVar11[4];
                    }
                    iVar8 = func_0x0eee3000(lVar19,lVar13,uVar16);
                    uVar12 = uStack_50;
                    if (iVar8 == 0) goto code_r0x069e3e90;
                  }
                }
                else {
                  if (uVar21 <= uVar15) {
                    if ((uVar15 | uVar21) >> 0x20 == 0) {
                      uVar15 = (uVar15 & 0xffffffff) % (uVar21 & 0xffffffff);
                    }
                    else {
                      uVar15 = uVar15 % uVar21;
                    }
                  }
                  if (uVar15 != uVar12) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
        }
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uStack_58 = 0;
        *plVar11 = 0;
        plVar11[1] = uVar10;
        plStack_68 = plVar11;
        plStack_60 = plVar9;
        if ((*(byte *)(plVar17 + 2) & 1) == 0) {
          plVar11[4] = plVar17[4];
          lVar13 = plVar17[3];
          plVar11[2] = plVar17[2];
          plVar11[3] = lVar13;
        }
        else {
          func_0x0412e5e0(plVar11 + 2,plVar17[4],plVar17[3]);
        }
        *(int *)(plVar11 + 6) = (int)plVar17[6];
        plVar11[5] = plVar17[5];
        uStack_58 = CONCAT71(uStack_58._1_7_,1);
        if ((long)uVar21 < 0) {
          fVar25 = (float)uVar21;
          fVar24 = *(float *)(plVar9 + 4);
          if (uVar21 != 0) goto code_r0x069e3fb2;
code_r0x069e3fd0:
          uVar15 = 1;
          if (2 < uVar21) {
            uVar15 = (ulong)((uVar21 & uVar21 - 1) != 0);
          }
          uVar15 = uVar21 * 2 | uVar15;
          fVar24 = (float)func_0x0eee3ab0((float)(plVar9[3] + 1) / fVar24);
          uVar21 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
          if (uVar21 < uVar15) {
            uVar21 = uVar15;
          }
          uVar15 = 2;
          if ((uVar21 == 1) || (uVar15 = uVar21, (uVar21 & uVar21 - 1) == 0)) {
            uVar21 = plVar9[1];
            bVar23 = uVar15 < uVar21;
            if (uVar15 <= uVar21) goto code_r0x069e4060;
code_r0x069e403e:
            func_0x069e5390(plVar9,uVar15);
          }
          else {
            uVar15 = func_0x0412c3f0();
            uVar21 = plVar9[1];
            bVar23 = uVar15 < uVar21;
            if (uVar21 < uVar15) goto code_r0x069e403e;
code_r0x069e4060:
            if (bVar23) {
              fVar24 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
              uVar12 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
              if ((uVar21 < 3) ||
                 (uVar16 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
                 uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
                 1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar12 = func_0x0412c3f0(uVar12);
              }
              else if (1 < uVar12) {
                lVar13 = 0x3f;
                if (uVar12 - 1 != 0) {
                  for (; uVar12 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar12 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
              }
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              if (uVar15 < uVar21) goto code_r0x069e403e;
            }
          }
          uVar21 = plVar9[1];
          if ((uVar21 & uVar21 - 1) == 0) {
            uVar15 = uVar10 & uVar21 - 1;
          }
          else {
            uVar15 = uVar10;
            if (uVar21 <= uVar10) {
              if ((uVar10 | uVar21) >> 0x20 == 0) {
                uVar15 = (uVar10 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar15 = uVar10 % uVar21;
              }
            }
          }
        }
        else {
          fVar25 = (float)(long)uVar21;
          fVar24 = *(float *)(plVar9 + 4);
          if (uVar21 == 0) goto code_r0x069e3fd0;
code_r0x069e3fb2:
          uVar15 = uStack_50;
          if (fVar25 * fVar24 < (float)(plVar9[3] + 1)) goto code_r0x069e3fd0;
        }
        lVar13 = *plVar9;
        plVar3 = *(long **)(lVar13 + uVar15 * 8);
        if (plVar3 == (long *)0x0) {
          *plVar11 = *plStack_40;
          *plStack_40 = (long)plVar11;
          *(long **)(lVar13 + uVar15 * 8) = plStack_40;
          if (*plVar11 != 0) {
            uVar10 = *(ulong *)(*plVar11 + 8);
            if ((uVar21 & uVar21 - 1) == 0) {
              *(long **)(lVar13 + (uVar10 & uVar21 - 1) * 8) = plVar11;
            }
            else {
              if (uVar21 <= uVar10) {
                if ((uVar10 | uVar21) >> 0x20 == 0) {
                  *(long **)(lVar13 + ((uVar10 & 0xffffffff) % (uVar21 & 0xffffffff)) * 8) = plVar11
                  ;
                  goto code_r0x069e41c7;
                }
                uVar10 = uVar10 % uVar21;
              }
              *(long **)(lVar13 + uVar10 * 8) = plVar11;
            }
          }
        }
        else {
          *plVar11 = *plVar3;
          *plVar3 = (long)plVar11;
        }
code_r0x069e41c7:
        plVar9[3] = plVar9[3] + 1;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
code_r0x069e4666:
    *plStack_48 = (long)plVar9;
  }
  return (long *)0x0;
code_r0x069e3e90:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto code_r0x069e4666;
  goto code_r0x069e3c30;
}


