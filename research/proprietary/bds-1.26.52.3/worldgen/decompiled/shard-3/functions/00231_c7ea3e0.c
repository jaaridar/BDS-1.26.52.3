/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ea3e0 (ELF vaddr 0xc7ea3e0)
 * Label: callee-of:0xc7e3540
 * Body:  [[0c8ea3e0, 0c8ea564] [0c8ea570, 0c8ea5cb] [0c8ea5d0, 0c8ea5e8] [0c8ea5f0, 0c8ea87b] [0c8ea880, 0c8eab39] [0c8eab40, 0c8eabf4]]
 * Ghidra: FUN_0c8ea3e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c8ea3e0(long *param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *unaff_RBP;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  byte *pbStack_38;
  
  pbVar1 = param_2 + 1;
  bVar18 = (*param_2 & 1) == 0;
  pbVar13 = *(byte **)(param_2 + 0x10);
  if (bVar18) {
    pbVar13 = pbVar1;
  }
  uVar7 = (ulong)(*param_2 >> 1);
  if (!bVar18) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  pbStack_38 = param_3;
  plVar6 = (long *)FUN_04883620(&plStack_58,pbVar13,uVar7);
  plVar14 = (long *)param_1[1];
  plStack_40 = param_4;
  if (plVar14 != (long *)0x0) {
    uVar7 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      unaff_RBP = (long *)((long)plVar14 - 1U & (ulong)plVar6);
      plVar8 = *(long **)(*param_1 + (long)unaff_RBP * 8);
    }
    else {
      unaff_RBP = plVar6;
      if (plVar14 <= plVar6) {
        if (((ulong)plVar6 | (ulong)plVar14) >> 0x20 == 0) {
          unaff_RBP = (long *)(((ulong)plVar6 & 0xffffffff) % ((ulong)plVar14 & 0xffffffff));
          plVar8 = *(long **)(*param_1 + (long)unaff_RBP * 8);
          goto joined_r0x0c8ea4e9;
        }
        unaff_RBP = (long *)((ulong)plVar6 % (ulong)plVar14);
      }
      plVar8 = *(long **)(*param_1 + (long)unaff_RBP * 8);
    }
joined_r0x0c8ea4e9:
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
          if ((long *)plVar8[1] == plVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            if ((bVar2 & 1) == 0) {
              uVar7 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar16) {
              if ((bVar2 & 1) == 0) {
                lVar15 = (long)plVar8 + 0x11;
              }
              else {
                lVar15 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar15,pbVar1,uVar16);
              if (iVar5 == 0) {
                return 0;
              }
            }
          }
          else if ((long *)((ulong)plVar8[1] & (long)plVar14 - 1U) != unaff_RBP) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          plVar9 = (long *)plVar8[1];
          if (plVar9 == plVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            if ((bVar2 & 1) == 0) {
              uVar7 = (ulong)(bVar2 >> 1);
            }
            else {
              uVar7 = plVar8[3];
            }
            if (uVar7 == uVar16) {
              if ((bVar2 & 1) == 0) {
                lVar15 = (long)plVar8 + 0x11;
              }
              else {
                lVar15 = plVar8[4];
              }
              iVar5 = func_0x0eee3000(lVar15,pbVar1,uVar16);
              if (iVar5 == 0) {
                return 0;
              }
            }
          }
          else {
            if (plVar14 <= plVar9) {
              if (((ulong)plVar9 | (ulong)plVar14) >> 0x20 == 0) {
                plVar9 = (long *)(((ulong)plVar9 & 0xffffffff) % ((ulong)plVar14 & 0xffffffff));
              }
              else {
                plVar9 = (long *)((ulong)plVar9 % (ulong)plVar14);
              }
            }
            if (plVar9 != unaff_RBP) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar8 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  uStack_48 = 0;
  *plVar8 = 0;
  plVar8[1] = (long)plVar6;
  plStack_58 = plVar8;
  plStack_50 = param_1;
  if ((*pbStack_38 & 1) == 0) {
    plVar8[4] = *(long *)(pbStack_38 + 0x10);
    lVar15 = *(long *)(pbStack_38 + 8);
    plVar8[2] = *(long *)pbStack_38;
    plVar8[3] = lVar15;
  }
  else {
    func_0x0412e5e0(plVar8 + 2,*(undefined8 *)(pbStack_38 + 0x10),*(undefined8 *)(pbStack_38 + 8));
  }
  lVar15 = *plStack_40;
  *plStack_40 = 0;
  plVar8[5] = lVar15;
  uStack_48 = CONCAT71(uStack_48._1_7_,1);
  if ((long)plVar14 < 0) {
    fVar20 = (float)plVar14;
    fVar19 = *(float *)(param_1 + 4);
    if (plVar14 != (long *)0x0) goto LAB_0c8ea70a;
LAB_0c8ea766:
    uVar7 = 1;
    if ((long *)0x2 < plVar14) {
      uVar7 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar14 * 2;
    fVar19 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar19);
    uVar16 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
    if (uVar16 < uVar7) {
      uVar16 = uVar7;
    }
    uVar7 = 2;
    if ((uVar16 == 1) || (uVar7 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      uVar16 = param_1[1];
      bVar18 = uVar7 < uVar16;
      if (uVar7 <= uVar16) goto LAB_0c8ea8e4;
LAB_0c8ea7e6:
      if (uVar7 >> 0x3d != 0) {
        uVar12 = func_0x04882eb0();
        func_0x0c8eac00(&plStack_58);
        uVar12 = func_0x0eee2d70(uVar12);
        func_0x04882e20(uVar12);
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return uVar12;
      }
      lVar15 = uVar7 * 8;
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
      if (lVar10 == 0) {
        FUN_0eec74c0(lVar15,0);
      }
      lVar3 = *param_1;
      *param_1 = lVar10;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,param_1[1] << 3);
        lVar10 = *param_1;
      }
      param_1[1] = uVar7;
      func_0x0eee2dd0(lVar10,0,lVar15);
      plVar14 = (long *)param_1[2];
      if (plVar14 != (long *)0x0) {
        uVar17 = plVar14[1];
        uVar16 = uVar7 - 1;
        if ((uVar7 & uVar16) == 0) {
          *(long **)(lVar10 + (uVar17 & uVar16) * 8) = param_1 + 2;
          uVar7 = uVar17 & uVar16;
          while (plVar9 = plVar14, plVar14 = (long *)*plVar9, plVar14 != (long *)0x0) {
            uVar17 = plVar14[1] & uVar16;
            if (uVar17 != uVar7) {
              if (*(long *)(lVar10 + uVar17 * 8) == 0) {
                *(long **)(lVar10 + uVar17 * 8) = plVar9;
                uVar7 = uVar17;
              }
              else {
                *plVar9 = *plVar14;
                *plVar14 = **(undefined8 **)(lVar10 + uVar17 * 8);
                **(long **)(lVar10 + uVar17 * 8) = (long)plVar14;
                plVar14 = plVar9;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar17) {
            if ((uVar17 | uVar7) >> 0x20 == 0) {
              uVar17 = (uVar17 & 0xffffffff) % (uVar7 & 0xffffffff);
            }
            else {
              uVar17 = uVar17 % uVar7;
            }
          }
          *(long **)(lVar10 + uVar17 * 8) = param_1 + 2;
          plVar9 = (long *)*plVar14;
          while (plVar9 != (long *)0x0) {
            uVar16 = plVar9[1];
            if (uVar7 <= uVar16) {
              if ((uVar16 | uVar7) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar16 = uVar16 % uVar7;
              }
            }
            if (uVar16 != uVar17) {
              if (*(long *)(lVar10 + uVar16 * 8) == 0) {
                *(long **)(lVar10 + uVar16 * 8) = plVar14;
                uVar17 = uVar16;
              }
              else {
                *plVar14 = *plVar9;
                *plVar9 = **(long **)(lVar10 + uVar16 * 8);
                **(undefined8 **)(lVar10 + uVar16 * 8) = plVar9;
                plVar9 = plVar14;
              }
            }
            plVar14 = plVar9;
            plVar9 = (long *)*plVar14;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      uVar16 = param_1[1];
      bVar18 = uVar7 < uVar16;
      if (uVar16 < uVar7) goto LAB_0c8ea7e6;
LAB_0c8ea8e4:
      if (bVar18) {
        fVar19 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar17 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
        if ((uVar16 < 3) ||
           (uVar11 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
           1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar17 = func_0x0412c3f0(uVar17);
          if (uVar17 < uVar7) {
            uVar17 = uVar7;
          }
        }
        else {
          if (1 < uVar17) {
            lVar15 = 0x3f;
            if (uVar17 - 1 != 0) {
              for (; uVar17 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar17 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
          }
          if (uVar17 < uVar7) {
            uVar17 = uVar7;
          }
        }
        uVar7 = uVar17;
        if (uVar7 < uVar16) {
          if (uVar7 != 0) goto LAB_0c8ea7e6;
          lVar15 = *param_1;
          *param_1 = 0;
          if (lVar15 != 0) {
            func_0x0412a280(lVar15,param_1[1] << 3);
          }
          param_1[1] = 0;
        }
      }
    }
    plVar14 = (long *)param_1[1];
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar14 - 1U);
      lVar15 = *param_1;
      plVar9 = *(long **)(lVar15 + (long)plVar6 * 8);
    }
    else {
      if (plVar14 <= plVar6) {
        if (((ulong)plVar6 | (ulong)plVar14) >> 0x20 == 0) {
          plVar6 = (long *)(((ulong)plVar6 & 0xffffffff) % ((ulong)plVar14 & 0xffffffff));
          lVar15 = *param_1;
          plVar9 = *(long **)(lVar15 + (long)plVar6 * 8);
          goto joined_r0x0c8eab14;
        }
        plVar6 = (long *)((ulong)plVar6 % (ulong)plVar14);
      }
      lVar15 = *param_1;
      plVar9 = *(long **)(lVar15 + (long)plVar6 * 8);
    }
  }
  else {
    fVar20 = (float)(long)plVar14;
    fVar19 = *(float *)(param_1 + 4);
    if (plVar14 == (long *)0x0) goto LAB_0c8ea766;
LAB_0c8ea70a:
    if (fVar20 * fVar19 < (float)(param_1[3] + 1)) goto LAB_0c8ea766;
    lVar15 = *param_1;
    plVar9 = *(long **)(lVar15 + (long)unaff_RBP * 8);
    plVar6 = unaff_RBP;
  }
joined_r0x0c8eab14:
  if (plVar9 == (long *)0x0) {
    *plVar8 = param_1[2];
    param_1[2] = (long)plVar8;
    *(long **)(lVar15 + (long)plVar6 * 8) = param_1 + 2;
    plVar9 = (long *)0x0;
    if (*plVar8 != 0) {
      plVar9 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar14 - 1U);
        *(long **)(lVar15 + (long)plVar9 * 8) = plVar8;
      }
      else {
        if (plVar14 <= plVar9) {
          if (((ulong)plVar9 | (ulong)plVar14) >> 0x20 == 0) {
            plVar9 = (long *)(((ulong)plVar9 & 0xffffffff) % ((ulong)plVar14 & 0xffffffff));
            *(long **)(lVar15 + (long)plVar9 * 8) = plVar8;
            goto LAB_0c8eaaca;
          }
          plVar9 = (long *)((ulong)plVar9 % (ulong)plVar14);
        }
        *(long **)(lVar15 + (long)plVar9 * 8) = plVar8;
      }
    }
  }
  else {
    *plVar8 = *plVar9;
    *plVar9 = (long)plVar8;
  }
LAB_0c8eaaca:
  param_1[3] = param_1[3] + 1;
  return CONCAT71((int7)((ulong)plVar9 >> 8),1);
}


