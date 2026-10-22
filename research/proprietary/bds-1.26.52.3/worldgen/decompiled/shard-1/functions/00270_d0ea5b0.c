/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1ea5b0 (ELF vaddr 0xd0ea5b0)
 * Label: callee-of:0xc95fb20
 * Body:  [[0d1ea5b0, 0d1ea6fb] [0d1ea700, 0d1ea734] [0d1ea740, 0d1ea79b] [0d1ea7a0, 0d1ea7b8] [0d1ea7c0, 0d1eaa47] [0d1eaa50, 0d1ead11] [0d1ead20, 0d1eadd4]]
 * Ghidra: FUN_0d1ea5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d1ea5b0(long *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong unaff_R13;
  bool bVar18;
  float fVar19;
  float fVar20;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  pbVar1 = param_2 + 1;
  bVar18 = (*param_2 & 1) == 0;
  pbVar12 = *(byte **)(param_2 + 0x10);
  if (bVar18) {
    pbVar12 = pbVar1;
  }
  uVar15 = (ulong)(*param_2 >> 1);
  if (!bVar18) {
    uVar15 = *(ulong *)(param_2 + 8);
  }
  uVar6 = func_0x04883620(&plStack_50,pbVar12,uVar15);
  uVar15 = param_1[1];
  puStack_38 = param_4;
  if (uVar15 != 0) {
    uVar7 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      unaff_R13 = uVar15 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_R13 * 8);
    }
    else {
      unaff_R13 = uVar6;
      if (uVar15 <= uVar6) {
        if ((uVar6 | uVar15) >> 0x20 == 0) {
          unaff_R13 = (uVar6 & 0xffffffff) % (uVar15 & 0xffffffff);
          plVar8 = *(long **)(*param_1 + unaff_R13 * 8);
          goto joined_r0x0d1ea6b5;
        }
        unaff_R13 = uVar6 % uVar15;
      }
      plVar8 = *(long **)(*param_1 + unaff_R13 * 8);
    }
joined_r0x0d1ea6b5:
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((*param_2 & 1) == 0) {
        uVar16 = (ulong)(*param_2 >> 1);
      }
      else {
        uVar16 = *(ulong *)(param_2 + 8);
        pbVar1 = *(byte **)(param_2 + 0x10);
      }
      if ((byte)(uVar7 >> 0x38) < 2) {
        do {
          if (plVar8[1] == uVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            if ((bVar2 & 1) == 0) {
              uVar7 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar16) {
              if ((bVar2 & 1) == 0) {
                lVar14 = (long)plVar8 + 0x11;
              }
              else {
                lVar14 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar14,pbVar1,uVar16);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else if ((plVar8[1] & uVar15 - 1) != unaff_R13) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            if ((bVar2 & 1) == 0) {
              uVar7 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar16) {
              if ((bVar2 & 1) == 0) {
                lVar14 = (long)plVar8 + 0x11;
              }
              else {
                lVar14 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar14,pbVar1,uVar16);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else {
            if (uVar15 <= uVar7) {
              if ((uVar7 | uVar15) >> 0x20 == 0) {
                uVar7 = (uVar7 & 0xffffffff) % (uVar15 & 0xffffffff);
              }
              else {
                uVar7 = uVar7 % uVar15;
              }
            }
            if (uVar7 != unaff_R13) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_40 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  pbVar1 = (byte *)*puStack_38;
  plStack_50 = plVar8;
  plStack_48 = param_1;
  if ((*pbVar1 & 1) == 0) {
    plVar8[4] = *(long *)(pbVar1 + 0x10);
    lVar14 = *(long *)(pbVar1 + 8);
    plVar8[2] = *(long *)pbVar1;
    plVar8[3] = lVar14;
  }
  else {
    func_0x0412e5e0(plVar8 + 2,*(undefined8 *)(pbVar1 + 0x10),*(undefined8 *)(pbVar1 + 8));
  }
  plVar8[5] = 0;
  uStack_40 = CONCAT71(uStack_40._1_7_,1);
  if ((long)uVar15 < 0) {
    fVar20 = (float)uVar15;
    fVar19 = *(float *)(param_1 + 4);
    if (uVar15 != 0) goto LAB_0d1ea8d3;
LAB_0d1ea92f:
    uVar7 = 1;
    if (2 < uVar15) {
      uVar7 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar7 = uVar7 | uVar15 * 2;
    fVar19 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar19);
    uVar15 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
    if (uVar15 < uVar7) {
      uVar15 = uVar7;
    }
    uVar7 = 2;
    if ((uVar15 == 1) || (uVar7 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
      uVar15 = param_1[1];
      bVar18 = uVar7 < uVar15;
      if (uVar7 <= uVar15) goto LAB_0d1eaab5;
LAB_0d1ea9b0:
      if (uVar7 >> 0x3d != 0) {
        uVar11 = func_0x04882eb0();
        func_0x0d1eade0(&plStack_50);
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x04882e20(uVar11);
        pcVar4 = (code *)swi(3);
        plVar8 = (long *)(*pcVar4)();
        return plVar8;
      }
      lVar14 = uVar7 * 8;
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar14);
      if (lVar9 == 0) {
        func_0x0eec74c0(lVar14,0);
      }
      lVar3 = *param_1;
      *param_1 = lVar9;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,param_1[1] << 3);
        lVar9 = *param_1;
      }
      param_1[1] = uVar7;
      memset(lVar9,0,lVar14);
      plVar13 = (long *)param_1[2];
      if (plVar13 != (long *)0x0) {
        uVar16 = plVar13[1];
        uVar15 = uVar7 - 1;
        if ((uVar7 & uVar15) == 0) {
          *(long **)(lVar9 + (uVar16 & uVar15) * 8) = param_1 + 2;
          uVar7 = uVar16 & uVar15;
          while (plVar17 = plVar13, plVar13 = (long *)*plVar17, plVar13 != (long *)0x0) {
            uVar16 = plVar13[1] & uVar15;
            if (uVar16 != uVar7) {
              if (*(long *)(lVar9 + uVar16 * 8) == 0) {
                *(long **)(lVar9 + uVar16 * 8) = plVar17;
                uVar7 = uVar16;
              }
              else {
                *plVar17 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar9 + uVar16 * 8);
                **(long **)(lVar9 + uVar16 * 8) = (long)plVar13;
                plVar13 = plVar17;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar16) {
            if ((uVar16 | uVar7) >> 0x20 == 0) {
              uVar16 = (uVar16 & 0xffffffff) % (uVar7 & 0xffffffff);
            }
            else {
              uVar16 = uVar16 % uVar7;
            }
          }
          *(long **)(lVar9 + uVar16 * 8) = param_1 + 2;
          plVar17 = (long *)*plVar13;
          while (plVar17 != (long *)0x0) {
            uVar15 = plVar17[1];
            if (uVar7 <= uVar15) {
              if ((uVar15 | uVar7) >> 0x20 == 0) {
                uVar15 = (uVar15 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar15 = uVar15 % uVar7;
              }
            }
            if (uVar15 != uVar16) {
              if (*(long *)(lVar9 + uVar15 * 8) == 0) {
                *(long **)(lVar9 + uVar15 * 8) = plVar13;
                uVar16 = uVar15;
              }
              else {
                *plVar13 = *plVar17;
                *plVar17 = **(long **)(lVar9 + uVar15 * 8);
                **(undefined8 **)(lVar9 + uVar15 * 8) = plVar17;
                plVar17 = plVar13;
              }
            }
            plVar13 = plVar17;
            plVar17 = (long *)*plVar13;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      uVar15 = param_1[1];
      bVar18 = uVar7 < uVar15;
      if (uVar15 < uVar7) goto LAB_0d1ea9b0;
LAB_0d1eaab5:
      if (bVar18) {
        fVar19 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar16 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
        if ((uVar15 < 3) ||
           (uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
           1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar16 = func_0x0412c3f0(uVar16);
          if (uVar16 < uVar7) {
            uVar16 = uVar7;
          }
        }
        else {
          if (1 < uVar16) {
            lVar14 = 0x3f;
            if (uVar16 - 1 != 0) {
              for (; uVar16 - 1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar16 = 1L << (-((byte)lVar14 ^ 0x3f) & 0x3f);
          }
          if (uVar16 < uVar7) {
            uVar16 = uVar7;
          }
        }
        uVar7 = uVar16;
        if (uVar7 < uVar15) {
          if (uVar7 != 0) goto LAB_0d1ea9b0;
          lVar14 = *param_1;
          *param_1 = 0;
          if (lVar14 != 0) {
            func_0x0412a280(lVar14,param_1[1] << 3);
          }
          param_1[1] = 0;
        }
      }
    }
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar6 = uVar6 & uVar15 - 1;
      lVar14 = *param_1;
      plVar13 = *(long **)(lVar14 + uVar6 * 8);
    }
    else {
      if (uVar15 <= uVar6) {
        if ((uVar6 | uVar15) >> 0x20 == 0) {
          uVar6 = (uVar6 & 0xffffffff) % (uVar15 & 0xffffffff);
          lVar14 = *param_1;
          plVar13 = *(long **)(lVar14 + uVar6 * 8);
          goto joined_r0x0d1eac61;
        }
        uVar6 = uVar6 % uVar15;
      }
      lVar14 = *param_1;
      plVar13 = *(long **)(lVar14 + uVar6 * 8);
    }
  }
  else {
    fVar20 = (float)(long)uVar15;
    fVar19 = *(float *)(param_1 + 4);
    if (uVar15 == 0) goto LAB_0d1ea92f;
LAB_0d1ea8d3:
    if (fVar20 * fVar19 < (float)(param_1[3] + 1)) goto LAB_0d1ea92f;
    lVar14 = *param_1;
    plVar13 = *(long **)(lVar14 + unaff_R13 * 8);
    uVar6 = unaff_R13;
  }
joined_r0x0d1eac61:
  if (plVar13 == (long *)0x0) {
    *plVar8 = param_1[2];
    param_1[2] = (long)plVar8;
    *(long **)(lVar14 + uVar6 * 8) = param_1 + 2;
    if (*plVar8 != 0) {
      uVar6 = *(ulong *)(*plVar8 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        *(long **)(lVar14 + (uVar6 & uVar15 - 1) * 8) = plVar8;
      }
      else {
        if (uVar15 <= uVar6) {
          if ((uVar6 | uVar15) >> 0x20 == 0) {
            *(long **)(lVar14 + ((uVar6 & 0xffffffff) % (uVar15 & 0xffffffff)) * 8) = plVar8;
            goto LAB_0d1eac9e;
          }
          uVar6 = uVar6 % uVar15;
        }
        *(long **)(lVar14 + uVar6 * 8) = plVar8;
      }
    }
  }
  else {
    *plVar8 = *plVar13;
    *plVar13 = (long)plVar8;
  }
LAB_0d1eac9e:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}


