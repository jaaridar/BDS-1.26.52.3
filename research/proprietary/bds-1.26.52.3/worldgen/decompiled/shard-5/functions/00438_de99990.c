/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdf99990 (ELF vaddr 0xde99990)
 * Label: caller-of-callee
 * Body:  [[0df99990, 0df999c7] [0df9a40b, 0df9a41f]]
 * Ghidra: FUN_0df99990
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0df99990(undefined4 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  ulong uVar11;
  long ******pppppplVar12;
  long lVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  long *******ppppppplStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long ******pppppplStack_58;
  long *******ppppppplStack_50;
  long *plStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  plStack_60 = param_3;
  switch(param_1) {
  case 0:
    if (cRam000000000f741768 != '\0') {
      return (long *)0xf741750;
    }
    iVar7 = func_0x04108328(0xf741768);
    if (iVar7 != 0) {
      func_0x0df996e0();
      FUN_0410844d(0xf741768);
      return (long *)0xf741750;
    }
    return (long *)0xf741750;
  case 1:
    func_0x0df9a800(param_2);
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
      uVar14 = *(ulong *)(lVar19 + 8);
      uVar21 = param_2[1];
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar14 = uVar14 & uVar21 - 1;
      }
      else if (uVar21 <= uVar14) {
        if ((uVar14 | uVar21) >> 0x20 == 0) {
          uVar14 = (uVar14 & 0xffffffff) % (uVar21 & 0xffffffff);
        }
        else {
          uVar14 = uVar14 % uVar21;
        }
      }
      *(long **)(*param_2 + uVar14 * 8) = param_2 + 2;
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
    plVar8 = (long *)param_3[2];
    if (param_2[1] != 0) {
      func_0x0eee2dd0(*param_2,0,param_2[1] << 3);
      plVar22 = (long *)param_2[2];
      param_2[2] = 0;
      param_2[3] = 0;
      if (plVar22 != (long *)0x0) {
        do {
          if (plVar8 == (long *)0x0) {
            do {
              plVar8 = (long *)*plVar22;
              if ((ulong)*(uint *)(plVar22 + 10) != 0xffffffff) {
                (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar22 + 10) * 8))
                          (&ppppppplStack_78,plVar22 + 6);
              }
              *(undefined4 *)(plVar22 + 10) = 0xffffffff;
              if ((*(byte *)(plVar22 + 2) & 1) != 0) {
                func_0x0412a280(plVar22[4],plVar22[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(plVar22,0x58);
              plVar22 = plVar8;
            } while (plVar8 != (long *)0x0);
            return plStack_60;
          }
          if (plVar22 != plVar8) {
            pbVar1 = (byte *)(plVar22 + 2);
            bVar2 = *(byte *)(plVar8 + 2);
            if ((*pbVar1 & 1) == 0) {
              if ((bVar2 & 1) == 0) {
                plVar22[4] = plVar8[4];
                uVar4 = *(undefined4 *)((long)plVar8 + 0x14);
                lVar13 = plVar8[3];
                uVar5 = *(undefined4 *)((long)plVar8 + 0x1c);
                *(undefined4 *)pbVar1 = *(undefined4 *)(plVar8 + 2);
                *(undefined4 *)((long)plVar22 + 0x14) = uVar4;
                *(int *)(plVar22 + 3) = (int)lVar13;
                *(undefined4 *)((long)plVar22 + 0x1c) = uVar5;
              }
              else {
                func_0x04885070(pbVar1,plVar8[4],plVar8[3]);
              }
            }
            else {
              bVar23 = (bVar2 & 1) != 0;
              lVar13 = (long)plVar8 + 0x11;
              if (bVar23) {
                lVar13 = plVar8[4];
              }
              uVar14 = (ulong)(bVar2 >> 1);
              if (bVar23) {
                uVar14 = plVar8[3];
              }
              func_0x04885120(pbVar1,lVar13,uVar14);
            }
          }
          uVar3 = *(uint *)(plVar8 + 10);
          if ((ulong)*(uint *)(plVar22 + 10) == 0xffffffff) {
            if (uVar3 != 0xffffffff) goto code_r0x0df9a1f5;
          }
          else if (uVar3 == 0xffffffff) {
            (**(code **)(&UNK_0f4a8018 + (ulong)*(uint *)(plVar22 + 10) * 8))(&ppppppplStack_78);
            *(undefined4 *)(plVar22 + 10) = 0xffffffff;
          }
          else {
code_r0x0df9a1f5:
            ppppppplStack_78 = (long *******)(plVar22 + 6);
            (**(code **)(&UNK_0f4a8098 + (ulong)uVar3 * 8))
                      (&ppppppplStack_78,plVar22 + 6,plVar8 + 6);
          }
          plVar18 = (long *)*plVar22;
          func_0x0df9a8d0(param_2,plVar22);
          plVar8 = (long *)*plVar8;
          plVar22 = plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      ppppppplVar10 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
      if (ppppppplVar10 == (long *******)0x0) {
        func_0x0eec74c0(0x58,0);
      }
      uStack_68 = 0;
      *ppppppplVar10 = (long ******)0x0;
      ppppppplVar10[1] = (long ******)0x0;
      ppppppplStack_78 = ppppppplVar10;
      plStack_70 = param_2;
      if ((*(byte *)(plVar8 + 2) & 1) == 0) {
        ppppppplVar10[4] = (long ******)plVar8[4];
        uVar4 = *(undefined4 *)((long)plVar8 + 0x14);
        lVar13 = plVar8[3];
        uVar5 = *(undefined4 *)((long)plVar8 + 0x1c);
        *(undefined4 *)(ppppppplVar10 + 2) = *(undefined4 *)(plVar8 + 2);
        *(undefined4 *)((long)ppppppplVar10 + 0x14) = uVar4;
        *(int *)(ppppppplVar10 + 3) = (int)lVar13;
        *(undefined4 *)((long)ppppppplVar10 + 0x1c) = uVar5;
      }
      else {
        func_0x0412e5e0(ppppppplVar10 + 2,plVar8[4],plVar8[3]);
      }
      *(undefined1 *)(ppppppplVar10 + 6) = 0;
      *(undefined4 *)(ppppppplVar10 + 10) = 0xffffffff;
      uVar3 = *(uint *)(plVar8 + 10);
      if ((ulong)uVar3 != 0xffffffff) {
        ppppppplStack_50 = ppppppplVar10 + 6;
        (**(code **)(&UNK_0f4a8038 + (ulong)uVar3 * 8))(&ppppppplStack_50,plVar8 + 6);
        *(uint *)(ppppppplVar10 + 10) = uVar3;
      }
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      bVar23 = (*(byte *)(ppppppplVar10 + 2) & 1) != 0;
      pppppplVar12 = (long ******)((long)ppppppplVar10 + 0x11);
      if (bVar23) {
        pppppplVar12 = ppppppplVar10[4];
      }
      pppppplVar9 = (long ******)(ulong)(*(byte *)(ppppppplVar10 + 2) >> 1);
      if (bVar23) {
        pppppplVar9 = ppppppplVar10[3];
      }
      pppppplVar12 = (long ******)func_0x04883620(&ppppppplStack_50,pppppplVar12,pppppplVar9);
      ppppppplVar10[1] = pppppplVar12;
      func_0x0df9a8d0(param_2,ppppppplStack_78);
    }
    return plStack_60;
  case 3:
    if (param_2[3] == param_3[3]) {
      plVar8 = (long *)param_2[2];
      if (plVar8 == (long *)0x0) {
        return param_3;
      }
      while (lVar13 = func_0x0df9b690(param_3,plVar8 + 2), lVar13 != 0) {
        bVar2 = *(byte *)(plVar8 + 2);
        if ((bVar2 & 1) == 0) {
          uVar14 = (ulong)(bVar2 >> 1);
          uVar21 = (ulong)*(byte *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x10) & 1) != 0) goto code_r0x0df9a46e;
code_r0x0df9a45a:
          uVar11 = uVar21 >> 1;
        }
        else {
          uVar14 = plVar8[3];
          uVar21 = (ulong)*(byte *)(lVar13 + 0x10);
          if ((*(byte *)(lVar13 + 0x10) & 1) == 0) goto code_r0x0df9a45a;
code_r0x0df9a46e:
          uVar11 = *(ulong *)(lVar13 + 0x18);
        }
        if (uVar14 != uVar11) {
          return (long *)0x0;
        }
        if ((bVar2 & 1) == 0) {
          lVar19 = (long)plVar8 + 0x11;
          if ((uVar21 & 1) != 0) goto code_r0x0df9a493;
code_r0x0df9a484:
          lVar20 = lVar13 + 0x11;
        }
        else {
          lVar19 = plVar8[4];
          if ((uVar21 & 1) == 0) goto code_r0x0df9a484;
code_r0x0df9a493:
          lVar20 = *(long *)(lVar13 + 0x20);
        }
        iVar7 = func_0x0eee3000(lVar19,lVar20);
        if (iVar7 != 0) {
          return (long *)0x0;
        }
        uVar3 = *(uint *)(plVar8 + 10);
        if (*(uint *)(lVar13 + 0x50) == uVar3 && uVar3 != 0xffffffff) {
          ppppppplStack_78 = (long *******)&ppppppplStack_50;
          cVar6 = (**(code **)(&UNK_0f4a80d8 + (ulong)uVar3 * 8))
                            (&ppppppplStack_78,plVar8 + 6,lVar13 + 0x30);
          if (cVar6 == '\0') {
            return (long *)0x0;
          }
        }
        else if (*(uint *)(lVar13 + 0x50) != uVar3) {
          return (long *)0x0;
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return param_3;
        }
      }
    }
    break;
  case 4:
    param_3[2] = (long)FUN_0df99990;
    *(undefined4 *)(param_3 + 4) = 0x8a65180f;
    param_3[3] = (long)&UNK_0df9a7d0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(plVar8 + 4) = (int)param_2[4];
    uVar14 = param_2[1];
    uVar21 = 2;
    plStack_48 = plVar8;
    if (uVar14 == 1) {
code_r0x0df99a93:
      func_0x0df97940(plVar8,uVar21);
    }
    else {
      if ((uVar14 & uVar14 - 1) != 0) {
        uVar21 = func_0x0412c3f0(uVar14,2);
        uVar11 = plVar8[1];
        bVar23 = uVar21 < uVar11;
        if (uVar21 <= uVar11) goto code_r0x0df9a523;
        goto code_r0x0df99a93;
      }
      uVar11 = 0;
      bVar23 = false;
      uVar21 = uVar14;
      if (uVar14 != 0) goto code_r0x0df99a93;
code_r0x0df9a523:
      if (bVar23) {
        fVar24 = (float)func_0x0eee3ab0((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
        uVar14 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
        if ((uVar11 < 3) ||
           (uVar17 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
           uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
           1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar14 = func_0x0412c3f0(uVar14);
        }
        else if (1 < uVar14) {
          lVar13 = 0x3f;
          if (uVar14 - 1 != 0) {
            for (; uVar14 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar14 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
        }
        if (uVar14 < uVar21) {
          uVar14 = uVar21;
        }
        uVar21 = uVar14;
        if (uVar14 < uVar11) goto code_r0x0df99a93;
      }
    }
    plVar22 = (long *)param_2[2];
    if (plVar22 != (long *)0x0) {
      plStack_40 = plVar8 + 2;
code_r0x0df99ad1:
      do {
        lVar13 = (long)plVar22 + 0x11;
        bVar23 = (*(byte *)(plVar22 + 2) & 1) == 0;
        lVar19 = plVar22[4];
        if (bVar23) {
          lVar19 = lVar13;
        }
        uVar14 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
        if (!bVar23) {
          uVar14 = plVar22[3];
        }
        pppppplVar9 = (long ******)func_0x04883620(&ppppppplStack_78,lVar19,uVar14);
        pppppplVar12 = (long ******)plVar8[1];
        if (pppppplVar12 != (long ******)0x0) {
          uVar14 = (long)pppppplVar12 - ((ulong)pppppplVar12 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
          uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar14 >> 0x38 < 2) {
            pppppplVar15 = (long ******)((long)pppppplVar12 - 1U & (ulong)pppppplVar9);
          }
          else {
            pppppplVar15 = pppppplVar9;
            if (pppppplVar12 <= pppppplVar9) {
              if (((ulong)pppppplVar9 | (ulong)pppppplVar12) >> 0x20 == 0) {
                pppppplVar15 = (long ******)
                               (((ulong)pppppplVar9 & 0xffffffff) %
                               ((ulong)pppppplVar12 & 0xffffffff));
              }
              else {
                pppppplVar15 = (long ******)((ulong)pppppplVar9 % (ulong)pppppplVar12);
              }
            }
          }
          plVar18 = *(long **)(*plVar8 + (long)pppppplVar15 * 8);
          pppppplStack_58 = pppppplVar15;
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if ((*(byte *)(plVar22 + 2) & 1) == 0) {
              uVar21 = (ulong)(*(byte *)(plVar22 + 2) >> 1);
            }
            else {
              uVar21 = plVar22[3];
              lVar13 = plVar22[4];
            }
            if ((byte)(uVar14 >> 0x38) < 2) {
              uVar14 = (long)pppppplVar12 - 1;
              uStack_38 = uVar14;
              do {
                if ((long ******)plVar18[1] == pppppplVar9) {
                  bVar2 = *(byte *)(plVar18 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar11 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar11 = plVar18[3];
                  }
                  if (uVar11 == uVar21) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar18 + 0x11;
                    }
                    else {
                      lVar19 = plVar18[4];
                    }
                    iVar7 = func_0x0eee3000(lVar19,lVar13,uVar21);
                    uVar14 = uStack_38;
                    pppppplVar15 = pppppplStack_58;
                    if (iVar7 == 0) goto code_r0x0df99ac0;
                  }
                }
                else if ((long ******)((ulong)plVar18[1] & uVar14) != pppppplVar15) break;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                pppppplVar16 = (long ******)plVar18[1];
                if (pppppplVar16 == pppppplVar9) {
                  bVar2 = *(byte *)(plVar18 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar14 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar14 = plVar18[3];
                  }
                  if (uVar14 == uVar21) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar18 + 0x11;
                    }
                    else {
                      lVar19 = plVar18[4];
                    }
                    iVar7 = func_0x0eee3000(lVar19,lVar13,uVar21);
                    pppppplVar15 = pppppplStack_58;
                    if (iVar7 == 0) goto code_r0x0df99ac0;
                  }
                }
                else {
                  if (pppppplVar12 <= pppppplVar16) {
                    if (((ulong)pppppplVar16 | (ulong)pppppplVar12) >> 0x20 == 0) {
                      pppppplVar16 = (long ******)
                                     (((ulong)pppppplVar16 & 0xffffffff) %
                                     ((ulong)pppppplVar12 & 0xffffffff));
                    }
                    else {
                      pppppplVar16 = (long ******)((ulong)pppppplVar16 % (ulong)pppppplVar12);
                    }
                  }
                  if (pppppplVar16 != pppppplVar15) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
        ppppppplVar10 = (long *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
        if (ppppppplVar10 == (long *******)0x0) {
          func_0x0eec74c0(0x58,0);
        }
        uStack_68 = 0;
        *ppppppplVar10 = (long ******)0x0;
        ppppppplVar10[1] = pppppplVar9;
        ppppppplStack_78 = ppppppplVar10;
        plStack_70 = plVar8;
        if ((*(byte *)(plVar22 + 2) & 1) == 0) {
          ppppppplVar10[4] = (long ******)plVar22[4];
          uVar4 = *(undefined4 *)((long)plVar22 + 0x14);
          lVar13 = plVar22[3];
          uVar5 = *(undefined4 *)((long)plVar22 + 0x1c);
          *(undefined4 *)(ppppppplVar10 + 2) = *(undefined4 *)(plVar22 + 2);
          *(undefined4 *)((long)ppppppplVar10 + 0x14) = uVar4;
          *(int *)(ppppppplVar10 + 3) = (int)lVar13;
          *(undefined4 *)((long)ppppppplVar10 + 0x1c) = uVar5;
        }
        else {
          func_0x0412e5e0(ppppppplVar10 + 2,plVar22[4],plVar22[3]);
        }
        *(undefined1 *)(ppppppplVar10 + 6) = 0;
        *(undefined4 *)(ppppppplVar10 + 10) = 0xffffffff;
        uVar3 = *(uint *)(plVar22 + 10);
        if ((ulong)uVar3 != 0xffffffff) {
          ppppppplStack_50 = ppppppplVar10 + 6;
          (**(code **)(&UNK_0f4a8038 + (ulong)uVar3 * 8))(&ppppppplStack_50,plVar22 + 6);
          *(uint *)(ppppppplVar10 + 10) = uVar3;
        }
        plVar8 = plStack_48;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        if ((long)pppppplVar12 < 0) {
          fVar25 = (float)pppppplVar12;
          fVar24 = *(float *)(plStack_48 + 4);
          if (pppppplVar12 != (long ******)0x0) goto code_r0x0df99e50;
code_r0x0df99e70:
          uVar14 = 1;
          if ((long ******)0x2 < pppppplVar12) {
            uVar14 = (ulong)(((ulong)pppppplVar12 & (long)pppppplVar12 - 1U) != 0);
          }
          uVar14 = (long)pppppplVar12 * 2 | uVar14;
          fVar24 = (float)func_0x0eee3ab0((float)(plStack_48[3] + 1) / fVar24);
          uVar21 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
          if (uVar21 < uVar14) {
            uVar21 = uVar14;
          }
          uVar14 = 2;
          if ((uVar21 == 1) || (uVar14 = uVar21, (uVar21 & uVar21 - 1) == 0)) {
            uVar21 = plVar8[1];
            bVar23 = uVar14 < uVar21;
            if (uVar14 <= uVar21) goto code_r0x0df99eff;
code_r0x0df99ede:
            func_0x0df97940(plVar8,uVar14);
          }
          else {
            uVar14 = func_0x0412c3f0();
            uVar21 = plVar8[1];
            bVar23 = uVar14 < uVar21;
            if (uVar21 < uVar14) goto code_r0x0df99ede;
code_r0x0df99eff:
            if (bVar23) {
              fVar24 = (float)func_0x0eee3ab0((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
              uVar11 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
              if ((uVar21 < 3) ||
                 (uVar17 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
                 uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
                 1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar11 = func_0x0412c3f0(uVar11);
              }
              else if (1 < uVar11) {
                lVar13 = 0x3f;
                if (uVar11 - 1 != 0) {
                  for (; uVar11 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar11 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
              }
              if (uVar14 <= uVar11) {
                uVar14 = uVar11;
              }
              if (uVar14 < uVar21) goto code_r0x0df99ede;
            }
          }
          pppppplVar12 = (long ******)plVar8[1];
          if (((ulong)pppppplVar12 & (long)pppppplVar12 - 1U) == 0) {
            pppppplVar15 = (long ******)((ulong)pppppplVar9 & (long)pppppplVar12 - 1U);
          }
          else {
            pppppplVar15 = pppppplVar9;
            if (pppppplVar12 <= pppppplVar9) {
              if (((ulong)pppppplVar9 | (ulong)pppppplVar12) >> 0x20 == 0) {
                pppppplVar15 = (long ******)
                               (((ulong)pppppplVar9 & 0xffffffff) %
                               ((ulong)pppppplVar12 & 0xffffffff));
              }
              else {
                pppppplVar15 = (long ******)((ulong)pppppplVar9 % (ulong)pppppplVar12);
              }
            }
          }
        }
        else {
          fVar25 = (float)(long)pppppplVar12;
          fVar24 = *(float *)(plStack_48 + 4);
          if (pppppplVar12 == (long ******)0x0) goto code_r0x0df99e70;
code_r0x0df99e50:
          pppppplVar15 = pppppplStack_58;
          if (fVar25 * fVar24 < (float)(plStack_48[3] + 1)) goto code_r0x0df99e70;
        }
        lVar13 = *plVar8;
        plVar18 = *(long **)(lVar13 + (long)pppppplVar15 * 8);
        if (plVar18 == (long *)0x0) {
          *ppppppplVar10 = (long ******)*plStack_40;
          *plStack_40 = (long)ppppppplVar10;
          *(long **)(lVar13 + (long)pppppplVar15 * 8) = plStack_40;
          if (*ppppppplVar10 != (long ******)0x0) {
            pppppplVar9 = (long ******)(*ppppppplVar10)[1];
            if (((ulong)pppppplVar12 & (long)pppppplVar12 - 1U) == 0) {
              *(long ********)(lVar13 + ((ulong)pppppplVar9 & (long)pppppplVar12 - 1U) * 8) =
                   ppppppplVar10;
            }
            else {
              if (pppppplVar12 <= pppppplVar9) {
                if (((ulong)pppppplVar9 | (ulong)pppppplVar12) >> 0x20 == 0) {
                  *(long ********)
                   (lVar13 + (((ulong)pppppplVar9 & 0xffffffff) % ((ulong)pppppplVar12 & 0xffffffff)
                             ) * 8) = ppppppplVar10;
                  goto code_r0x0df9a066;
                }
                pppppplVar9 = (long ******)((ulong)pppppplVar9 % (ulong)pppppplVar12);
              }
              *(long ********)(lVar13 + (long)pppppplVar9 * 8) = ppppppplVar10;
            }
          }
        }
        else {
          *ppppppplVar10 = (long ******)*plVar18;
          *plVar18 = (long)ppppppplVar10;
        }
code_r0x0df9a066:
        plVar8[3] = plVar8[3] + 1;
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
code_r0x0df9a403:
    *plStack_60 = (long)plVar8;
  }
  return (long *)0x0;
code_r0x0df99ac0:
  plVar22 = (long *)*plVar22;
  if (plVar22 == (long *)0x0) goto code_r0x0df9a403;
  goto code_r0x0df99ad1;
}


