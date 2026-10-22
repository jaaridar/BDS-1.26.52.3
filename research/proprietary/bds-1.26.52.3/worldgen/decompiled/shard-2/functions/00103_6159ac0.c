/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6159ac0
 * Label: string:terrainStrength
 * Body:  [[06159ac0, 06159bdb] [06159be0, 06159c14] [06159c20, 06159c7b] [06159c80, 06159c98] [06159ca0, 0615a1f1] [0615a200, 0615a2b4]]
 * Ghidra: FUN_06159ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_06159ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *unaff_RBP;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *unaff_R12;
  ulong unaff_R13;
  undefined8 *unaff_R15;
  bool bVar17;
  bool in_ZF;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (!in_ZF) {
    param_3 = *(undefined8 *)(unaff_RBP + 8);
  }
  uVar6 = func_0x04883620(&stack0x00000018,param_2,param_3);
  uVar14 = unaff_R12[1];
  if (uVar14 != 0) {
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      unaff_R13 = uVar14 - 1 & uVar6;
      plVar8 = *(long **)(*unaff_R12 + unaff_R13 * 8);
    }
    else {
      unaff_R13 = uVar6;
      if (uVar14 <= uVar6) {
        if ((uVar6 | uVar14) >> 0x20 == 0) {
          unaff_R13 = (uVar6 & 0xffffffff) % (uVar14 & 0xffffffff);
          plVar8 = *(long **)(*unaff_R12 + unaff_R13 * 8);
          goto joined_r0x06159b95;
        }
        unaff_R13 = uVar6 % uVar14;
      }
      plVar8 = *(long **)(*unaff_R12 + unaff_R13 * 8);
    }
joined_r0x06159b95:
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((*unaff_RBP & 1) == 0) {
        uVar15 = (ulong)(*unaff_RBP >> 1);
      }
      else {
        uVar15 = *(ulong *)(unaff_RBP + 8);
        in_stack_00000010 = *(undefined8 *)(unaff_RBP + 0x10);
      }
      if ((byte)(uVar7 >> 0x38) < 2) {
        do {
          if (plVar8[1] == uVar6) {
            bVar1 = *(byte *)(plVar8 + 2);
            if ((bVar1 & 1) == 0) {
              uVar7 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar15) {
              if ((bVar1 & 1) == 0) {
                lVar13 = (long)plVar8 + 0x11;
              }
              else {
                lVar13 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar13,in_stack_00000010,uVar15);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else if ((plVar8[1] & uVar14 - 1) != unaff_R13) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar6) {
            bVar1 = *(byte *)(plVar8 + 2);
            if ((bVar1 & 1) == 0) {
              uVar7 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar15) {
              if ((bVar1 & 1) == 0) {
                lVar13 = (long)plVar8 + 0x11;
              }
              else {
                lVar13 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar13,in_stack_00000010,uVar15);
              if (iVar5 == 0) {
                return plVar8;
              }
            }
          }
          else {
            if (uVar14 <= uVar7) {
              if ((uVar7 | uVar14) >> 0x20 == 0) {
                uVar7 = (uVar7 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar7 = uVar7 % uVar14;
              }
            }
            if (uVar7 != unaff_R13) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  in_stack_00000028 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  pbVar2 = (byte *)*unaff_R15;
  in_stack_00000018 = plVar8;
  if ((*pbVar2 & 1) == 0) {
    plVar8[4] = *(long *)(pbVar2 + 0x10);
    lVar13 = *(long *)(pbVar2 + 8);
    plVar8[2] = *(long *)pbVar2;
    plVar8[3] = lVar13;
  }
  else {
    func_0x0412e5e0(plVar8 + 2,*(undefined8 *)(pbVar2 + 0x10),*(undefined8 *)(pbVar2 + 8));
  }
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  in_stack_00000028 = CONCAT71(in_stack_00000028._1_7_,1);
  if ((long)uVar14 < 0) {
    fVar19 = (float)uVar14;
    fVar18 = *(float *)(unaff_R12 + 4);
    if (uVar14 != 0) goto LAB_06159dbb;
LAB_06159e17:
    uVar7 = 1;
    if (2 < uVar14) {
      uVar7 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar7 = uVar7 | uVar14 * 2;
    fVar18 = (float)func_0x0eee3ab0((float)(unaff_R12[3] + 1) / fVar18);
    uVar14 = (long)(fVar18 - _DAT_01198778) & (long)fVar18 >> 0x3f | (long)fVar18;
    if (uVar14 < uVar7) {
      uVar14 = uVar7;
    }
    uVar7 = 2;
    if ((uVar14 == 1) || (uVar7 = uVar14, (uVar14 & uVar14 - 1) == 0)) {
      uVar14 = unaff_R12[1];
      bVar17 = uVar7 < uVar14;
      if (uVar7 <= uVar14) goto LAB_06159f95;
LAB_06159e98:
      if (uVar7 >> 0x3d != 0) {
        uVar11 = func_0x04882eb0();
        func_0x0615a2c0(&stack0x00000018);
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x04882e20(uVar11);
        pcVar4 = (code *)swi(3);
        plVar8 = (long *)(*pcVar4)();
        return plVar8;
      }
      lVar13 = uVar7 * 8;
      lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
      if (lVar9 == 0) {
        func_0x0eec74c0(lVar13,0);
      }
      lVar3 = *unaff_R12;
      *unaff_R12 = lVar9;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,unaff_R12[1] << 3);
        lVar9 = *unaff_R12;
      }
      unaff_R12[1] = uVar7;
      func_0x0eee2dd0(lVar9,0,lVar13);
      plVar12 = (long *)unaff_R12[2];
      if (plVar12 != (long *)0x0) {
        uVar15 = plVar12[1];
        uVar14 = uVar7 - 1;
        if ((uVar7 & uVar14) == 0) {
          *(long **)(lVar9 + (uVar15 & uVar14) * 8) = unaff_R12 + 2;
          uVar7 = uVar15 & uVar14;
          while (plVar16 = plVar12, plVar12 = (long *)*plVar16, plVar12 != (long *)0x0) {
            uVar15 = plVar12[1] & uVar14;
            if (uVar15 != uVar7) {
              if (*(long *)(lVar9 + uVar15 * 8) == 0) {
                *(long **)(lVar9 + uVar15 * 8) = plVar16;
                uVar7 = uVar15;
              }
              else {
                *plVar16 = *plVar12;
                *plVar12 = **(undefined8 **)(lVar9 + uVar15 * 8);
                **(long **)(lVar9 + uVar15 * 8) = (long)plVar12;
                plVar12 = plVar16;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar15) {
            if ((uVar15 | uVar7) >> 0x20 == 0) {
              uVar15 = (uVar15 & 0xffffffff) % (uVar7 & 0xffffffff);
            }
            else {
              uVar15 = uVar15 % uVar7;
            }
          }
          *(long **)(lVar9 + uVar15 * 8) = unaff_R12 + 2;
          plVar16 = (long *)*plVar12;
          while (plVar16 != (long *)0x0) {
            uVar14 = plVar16[1];
            if (uVar7 <= uVar14) {
              if ((uVar14 | uVar7) >> 0x20 == 0) {
                uVar14 = (uVar14 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar14 = uVar14 % uVar7;
              }
            }
            if (uVar14 != uVar15) {
              if (*(long *)(lVar9 + uVar14 * 8) == 0) {
                *(long **)(lVar9 + uVar14 * 8) = plVar12;
                uVar15 = uVar14;
              }
              else {
                *plVar12 = *plVar16;
                *plVar16 = **(long **)(lVar9 + uVar14 * 8);
                **(undefined8 **)(lVar9 + uVar14 * 8) = plVar16;
                plVar16 = plVar12;
              }
            }
            plVar12 = plVar16;
            plVar16 = (long *)*plVar12;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      uVar14 = unaff_R12[1];
      bVar17 = uVar7 < uVar14;
      if (uVar14 < uVar7) goto LAB_06159e98;
LAB_06159f95:
      if (bVar17) {
        fVar18 = (float)func_0x0eee3ab0((float)(ulong)unaff_R12[3] / *(float *)(unaff_R12 + 4));
        uVar15 = (long)(fVar18 - _DAT_01198778) & (long)fVar18 >> 0x3f | (long)fVar18;
        if ((uVar14 < 3) ||
           (uVar10 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
           uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
           1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar15 = func_0x0412c3f0(uVar15);
          if (uVar15 < uVar7) {
            uVar15 = uVar7;
          }
        }
        else {
          if (1 < uVar15) {
            lVar13 = 0x3f;
            if (uVar15 - 1 != 0) {
              for (; uVar15 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar15 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
          }
          if (uVar15 < uVar7) {
            uVar15 = uVar7;
          }
        }
        uVar7 = uVar15;
        if (uVar7 < uVar14) {
          if (uVar7 != 0) goto LAB_06159e98;
          lVar13 = *unaff_R12;
          *unaff_R12 = 0;
          if (lVar13 != 0) {
            func_0x0412a280(lVar13,unaff_R12[1] << 3);
          }
          unaff_R12[1] = 0;
        }
      }
    }
    uVar14 = unaff_R12[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar6 & uVar14 - 1;
      lVar13 = *unaff_R12;
      plVar12 = *(long **)(lVar13 + uVar6 * 8);
    }
    else {
      if (uVar14 <= uVar6) {
        if ((uVar6 | uVar14) >> 0x20 == 0) {
          uVar6 = (uVar6 & 0xffffffff) % (uVar14 & 0xffffffff);
          lVar13 = *unaff_R12;
          plVar12 = *(long **)(lVar13 + uVar6 * 8);
          goto joined_r0x0615a141;
        }
        uVar6 = uVar6 % uVar14;
      }
      lVar13 = *unaff_R12;
      plVar12 = *(long **)(lVar13 + uVar6 * 8);
    }
  }
  else {
    fVar19 = (float)(long)uVar14;
    fVar18 = *(float *)(unaff_R12 + 4);
    if (uVar14 == 0) goto LAB_06159e17;
LAB_06159dbb:
    if (fVar19 * fVar18 < (float)(unaff_R12[3] + 1)) goto LAB_06159e17;
    lVar13 = *unaff_R12;
    plVar12 = *(long **)(lVar13 + unaff_R13 * 8);
    uVar6 = unaff_R13;
  }
joined_r0x0615a141:
  if (plVar12 == (long *)0x0) {
    *plVar8 = unaff_R12[2];
    unaff_R12[2] = (long)plVar8;
    *(long **)(lVar13 + uVar6 * 8) = unaff_R12 + 2;
    if (*plVar8 != 0) {
      uVar6 = *(ulong *)(*plVar8 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        *(long **)(lVar13 + (uVar6 & uVar14 - 1) * 8) = plVar8;
      }
      else {
        if (uVar14 <= uVar6) {
          if ((uVar6 | uVar14) >> 0x20 == 0) {
            *(long **)(lVar13 + ((uVar6 & 0xffffffff) % (uVar14 & 0xffffffff)) * 8) = plVar8;
            goto LAB_0615a17e;
          }
          uVar6 = uVar6 % uVar14;
        }
        *(long **)(lVar13 + uVar6 * 8) = plVar8;
      }
    }
  }
  else {
    *plVar8 = *plVar12;
    *plVar12 = (long)plVar8;
  }
LAB_0615a17e:
  unaff_R12[3] = unaff_R12[3] + 1;
  return plVar8;
}


