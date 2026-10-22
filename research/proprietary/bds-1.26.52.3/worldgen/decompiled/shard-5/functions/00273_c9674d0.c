/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca674d0 (ELF vaddr 0xc9674d0)
 * Label: callee-of:0xc967370
 * Body:  [[0ca674d0, 0ca675c8] [0ca675d0, 0ca675f8] [0ca67600, 0ca676f4] [0ca67700, 0ca67732] [0ca67740, 0ca677c1] [0ca677d0, 0ca67aaf]]
 * Ghidra: FUN_0ca674d0
 */


/* WARNING: Removing unreachable block (ram,0x0ca676ed) */
/* WARNING: Removing unreachable block (ram,0x0ca6770d) */
/* WARNING: Removing unreachable block (ram,0x0ca67724) */
/* WARNING: Removing unreachable block (ram,0x0ca67700) */
/* WARNING: Removing unreachable block (ram,0x0ca6777b) */

void FUN_0ca674d0(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar2 = *(ulong *)(param_1 + 0x2e0);
  if (uVar2 == 0) {
    return;
  }
  uVar8 = (long)(int)*param_2 + 0x9e3779b9;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + (long)*(int *)((long)param_2 + 4) ^ uVar8;
  uVar10 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
  uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if (uVar10 >> 0x38 < 2) {
    uVar11 = uVar2 - 1 & uVar8;
  }
  else {
    uVar11 = uVar8;
    if (uVar2 <= uVar8) {
      uVar11 = uVar8 % uVar2;
    }
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x2d8) + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (1 < (byte)(uVar10 >> 0x38)) {
    do {
      uVar10 = plVar9[1];
      if (uVar10 == uVar8) {
        if (plVar9[2] == *param_2) goto LAB_0ca6764f;
      }
      else {
        if (uVar2 <= uVar10) {
          if ((uVar10 | uVar2) >> 0x20 == 0) {
            if ((uVar10 & 0xffffffff) % (uVar2 & 0xffffffff) != uVar11) {
              return;
            }
            goto LAB_0ca67606;
          }
          uVar10 = uVar10 % uVar2;
        }
        if (uVar10 != uVar11) {
          return;
        }
      }
LAB_0ca67606:
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar9[1] == uVar8) {
      if (plVar9[2] == *param_2) break;
    }
    else if ((plVar9[1] & uVar2 - 1) != uVar11) {
      return;
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_0ca6764f:
  puStack_50 = &UNK_0f087d20;
  uStack_40 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x908))();
  ppuStack_38 = &puStack_50;
  plVar14 = (long *)plVar9[3];
  plVar16 = (long *)plVar9[4];
  lStack_48 = param_1;
  if (plVar14 != plVar16) {
    do {
      cVar7 = func_0x0ca75470(&lStack_48,*plVar14);
      if (cVar7 != '\0') break;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar16);
  }
  plVar12 = plVar14 + 1;
  if (plVar12 != plVar16 && plVar14 != plVar16) {
    do {
      cVar7 = func_0x0ca75470(&lStack_48,*plVar12);
      if (cVar7 == '\0') {
        lVar4 = *plVar12;
        *plVar12 = 0;
        plVar3 = (long *)*plVar14;
        *plVar14 = lVar4;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar14 = plVar14 + 1;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar16);
  }
  plVar16 = (long *)plVar9[4];
  if (plVar14 == plVar16) {
    plVar9 = (long *)plVar9[3];
  }
  else {
    for (; plVar14 != plVar16; plVar16 = plVar16 + -1) {
      plVar12 = (long *)plVar16[-1];
      plVar16[-1] = 0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
    }
    plVar9[4] = (long)plVar14;
    plVar9 = (long *)plVar9[3];
  }
  if ((plVar9 == plVar14) && (uVar2 = *(ulong *)(param_1 + 0x2e0), uVar2 != 0)) {
    uVar8 = (long)(int)*param_2 + 0x9e3779b9;
    uVar8 = (long)*(int *)((long)param_2 + 4) + 0x9e3779b9 + uVar8 * 0x40 + (uVar8 >> 2) ^ uVar8;
    uVar10 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      uVar11 = uVar2 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar2 <= uVar8) {
        uVar11 = uVar8 % uVar2;
      }
    }
    lVar4 = *(long *)(param_1 + 0x2d8);
    puVar5 = *(undefined8 **)(lVar4 + uVar11 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar5, plVar9 != (long *)0x0)) {
      uVar1 = uVar2 - 1;
      bVar6 = (byte)(uVar10 >> 0x38);
      if (bVar6 < 2) {
        do {
          if (plVar9[1] == uVar8) {
            if (plVar9[2] == *param_2) goto LAB_0ca67945;
          }
          else if ((plVar9[1] & uVar1) != uVar11) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar8) {
            if (plVar9[2] == *param_2) goto LAB_0ca67945;
          }
          else {
            if (uVar2 <= uVar10) {
              if ((uVar10 | uVar2) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar2 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar2;
              }
            }
            if (uVar10 != uVar11) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  goto LAB_0ca677ad;
LAB_0ca67945:
  if (bVar6 < 2) {
    uVar8 = uVar8 & uVar1;
  }
  else if (uVar2 <= uVar8) {
    uVar8 = uVar8 % uVar2;
  }
  plVar14 = *(long **)(lVar4 + uVar8 * 8);
  do {
    plVar16 = plVar14;
    plVar14 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar9);
  if (plVar16 == (long *)(param_1 + 0x2e8)) {
LAB_0ca679b1:
    if (*plVar9 != 0) {
      uVar10 = *(ulong *)(*plVar9 + 8);
      if (bVar6 < 2) {
        uVar10 = uVar10 & uVar1;
      }
      else if (uVar2 <= uVar10) {
        if ((uVar10 | uVar2) >> 0x20 == 0) {
          uVar10 = (uVar10 & 0xffffffff) % (uVar2 & 0xffffffff);
        }
        else {
          uVar10 = uVar10 % uVar2;
        }
      }
      if (uVar10 == uVar8) goto LAB_0ca679f6;
    }
    *(undefined8 *)(lVar4 + uVar8 * 8) = 0;
  }
  else {
    uVar10 = plVar16[1];
    if (bVar6 < 2) {
      uVar10 = uVar10 & uVar1;
    }
    else if (uVar2 <= uVar10) {
      if ((uVar10 | uVar2) >> 0x20 == 0) {
        uVar10 = (uVar10 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar10 = uVar10 % uVar2;
      }
    }
    if (uVar10 != uVar8) goto LAB_0ca679b1;
  }
LAB_0ca679f6:
  lVar15 = *plVar9;
  if (lVar15 == 0) {
    lVar15 = 0;
  }
  else {
    uVar10 = *(ulong *)(lVar15 + 8);
    if (bVar6 < 2) {
      uVar10 = uVar10 & uVar1;
    }
    else if (uVar2 <= uVar10) {
      if ((uVar10 | uVar2) >> 0x20 == 0) {
        uVar10 = (uVar10 & 0xffffffff) % (uVar2 & 0xffffffff);
      }
      else {
        uVar10 = uVar10 % uVar2;
      }
    }
    if (uVar10 != uVar8) {
      *(long **)(lVar4 + uVar10 * 8) = plVar16;
      lVar15 = *plVar9;
    }
  }
  *plVar16 = lVar15;
  *plVar9 = 0;
  *(long *)(param_1 + 0x2f0) = *(long *)(param_1 + 0x2f0) + -1;
  lVar4 = plVar9[3];
  if (lVar4 != 0) {
    lVar15 = plVar9[4];
    lVar13 = lVar4;
    if (lVar4 != lVar15) {
      do {
        plVar14 = *(long **)(lVar15 + -8);
        *(undefined8 *)(lVar15 + -8) = 0;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        lVar15 = lVar15 + -8;
      } while (lVar15 != lVar4);
      lVar13 = plVar9[3];
    }
    plVar9[4] = lVar4;
    FUN_0412a280(lVar13,plVar9[5] - lVar13);
  }
  FUN_0412a280(plVar9,0x30);
LAB_0ca677ad:
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


