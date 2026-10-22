/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc421b30 (ELF vaddr 0xc321b30)
 * Label: caller-of-callee
 * Body:  [[0c421b30, 0c421b68] [0c422895, 0c42289c] [0c422b50, 0c422b61]]
 * Ghidra: FUN_0c421b30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0c421b30(undefined4 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 uStack_91;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long **pplStack_58;
  long *plStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  plStack_90 = param_3;
  plStack_88 = param_2;
  switch(param_1) {
  case 0:
    param_3 = (long *)0xf6e2b08;
    if ((DAT_0f6e2b20 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6e2b20), iVar8 != 0)) {
      func_0x0c424020(0xf6e2b08);
      FUN_0410844d(&DAT_0f6e2b20);
      param_3 = (long *)0xf6e2b08;
    }
    break;
  case 1:
    if (param_2[3] != 0) {
      puVar7 = (undefined8 *)param_2[2];
      while (puVar7 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar7;
        func_0x0a738f50(puVar7 + 6);
        if ((*(byte *)(puVar7 + 2) & 1) != 0) {
          func_0x0412a280(puVar7[4],puVar7[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar7,0xe0);
        puVar7 = puVar4;
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
      uVar18 = *(ulong *)(lVar19 + 8);
      uVar10 = param_2[1];
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar18 = uVar18 & uVar10 - 1;
      }
      else if (uVar10 <= uVar18) {
        if ((uVar18 | uVar10) >> 0x20 == 0) {
          uVar18 = (uVar18 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar18 = uVar18 % uVar10;
        }
      }
      *(long **)(*param_2 + uVar18 * 8) = param_2 + 2;
      param_3[2] = 0;
      param_3[3] = 0;
    }
    param_2[5] = param_3[5];
    lVar13 = param_2[6];
    param_2[6] = param_3[6];
    param_3[6] = lVar13;
    lVar13 = param_2[7];
    param_2[7] = param_3[7];
    param_3[7] = lVar13;
    break;
  case 2:
    if (param_2 != param_3) {
      *(int *)(param_2 + 4) = (int)param_3[4];
      plVar9 = (long *)param_3[2];
      if (param_2[1] != 0) {
        func_0x0eee2dd0(*param_2,0,param_2[1] << 3);
        plVar14 = (long *)param_2[2];
        param_2[2] = 0;
        param_2[3] = 0;
        if (plVar14 != (long *)0x0) {
          do {
            if (plVar9 == (long *)0x0) goto code_r0x0c422599;
            if (plVar14 == plVar9) {
              plVar14[6] = plVar9[6];
              func_0x0c24ba30(plVar14 + 10,plVar9 + 10);
              func_0x0c24ba30(plVar14 + 0xe,plVar9 + 0xe);
            }
            else {
              pbVar1 = (byte *)(plVar14 + 2);
              bVar2 = *(byte *)(plVar9 + 2);
              if ((*pbVar1 & 1) == 0) {
                if ((bVar2 & 1) == 0) {
                  plVar14[4] = plVar9[4];
                  uVar5 = *(undefined4 *)((long)plVar9 + 0x14);
                  lVar13 = plVar9[3];
                  uVar6 = *(undefined4 *)((long)plVar9 + 0x1c);
                  *(undefined4 *)pbVar1 = *(undefined4 *)(plVar9 + 2);
                  *(undefined4 *)((long)plVar14 + 0x14) = uVar5;
                  *(int *)(plVar14 + 3) = (int)lVar13;
                  *(undefined4 *)((long)plVar14 + 0x1c) = uVar6;
                }
                else {
                  func_0x04885070(pbVar1,plVar9[4],plVar9[3]);
                }
              }
              else {
                bVar20 = (bVar2 & 1) != 0;
                lVar13 = (long)plVar9 + 0x11;
                if (bVar20) {
                  lVar13 = plVar9[4];
                }
                uVar18 = (ulong)(bVar2 >> 1);
                if (bVar20) {
                  uVar18 = plVar9[3];
                }
                func_0x04885120(pbVar1,lVar13,uVar18);
              }
              plVar14[6] = plVar9[6];
              func_0x0c24b8c0(plVar14 + 7,plVar9[7],plVar9[8],plVar9[8] - plVar9[7] >> 3);
              func_0x0c24ba30(plVar14 + 10,plVar9 + 10);
              func_0x0c24ba30(plVar14 + 0xe,plVar9 + 0xe);
              func_0x0b6c9770(plVar14 + 0x12,plVar9[0x12],plVar9[0x13],
                              plVar9[0x13] - plVar9[0x12] >> 4);
            }
            plVar11 = (long *)plVar9[0x1a];
            if (plVar11 == (long *)0x0) {
              pplStack_58 = (long **)0x0;
            }
            else if (plVar11 == plVar9 + 0x16) {
              pplStack_58 = &plStack_78;
              (**(code **)(*plVar11 + 0x18))(plVar11,&plStack_78);
            }
            else {
              pplStack_58 = (long **)(**(code **)(*plVar11 + 0x10))();
            }
            func_0x0c24be50(&plStack_78,plVar14 + 0x16);
            if (pplStack_58 == &plStack_78) {
              lVar13 = 0x20;
code_r0x0c422465:
              (**(code **)((long)*pplStack_58 + lVar13))();
            }
            else {
              lVar13 = 0x28;
              if (pplStack_58 != (long **)0x0) goto code_r0x0c422465;
            }
            plVar11 = (long *)*plVar14;
            func_0x0c422e50(param_2,plVar14);
            plVar9 = (long *)*plVar9;
            plVar14 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      if (plVar9 != (long *)0x0) {
        do {
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
          if (plVar14 == (long *)0x0) {
            func_0x0eec74c0(0xe0,0);
          }
          uStack_68 = 0;
          *plVar14 = 0;
          plVar14[1] = 0;
          plStack_78 = plVar14;
          plStack_70 = param_2;
          if ((*(byte *)(plVar9 + 2) & 1) == 0) {
            plVar14[4] = plVar9[4];
            uVar5 = *(undefined4 *)((long)plVar9 + 0x14);
            lVar13 = plVar9[3];
            uVar6 = *(undefined4 *)((long)plVar9 + 0x1c);
            *(undefined4 *)(plVar14 + 2) = *(undefined4 *)(plVar9 + 2);
            *(undefined4 *)((long)plVar14 + 0x14) = uVar5;
            *(int *)(plVar14 + 3) = (int)lVar13;
            *(undefined4 *)((long)plVar14 + 0x1c) = uVar6;
          }
          else {
            func_0x0412e5e0(plVar14 + 2,plVar9[4],plVar9[3]);
          }
          func_0x0c4237a0(plVar14 + 6,plVar9 + 6);
          uStack_68 = CONCAT71(uStack_68._1_7_,1);
          bVar20 = (*(byte *)(plVar14 + 2) & 1) != 0;
          lVar13 = (long)plVar14 + 0x11;
          if (bVar20) {
            lVar13 = plVar14[4];
          }
          uVar18 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
          if (bVar20) {
            uVar18 = plVar14[3];
          }
          lVar13 = func_0x04883620(&uStack_91,lVar13,uVar18);
          plVar14[1] = lVar13;
          func_0x0c422e50(param_2,plVar14);
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
    goto code_r0x0c4226ce;
  case 3:
    if (param_2 != param_3) {
      param_3 = (long *)0x0;
    }
    break;
  case 4:
    param_3[2] = (long)FUN_0c421b30;
    *(undefined4 *)(param_3 + 4) = 0x22d35115;
    param_3[3] = (long)&UNK_0c422cc0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar9 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(plVar9 + 4) = (int)param_2[4];
    uVar18 = param_2[1];
    uVar10 = 2;
    if (uVar18 == 1) {
code_r0x0c421c42:
      func_0x0c421540(plVar9,uVar10);
    }
    else {
      if ((uVar18 & uVar18 - 1) != 0) {
        uVar18 = func_0x0412c3f0(uVar18,2);
        uVar16 = plVar9[1];
        bVar20 = uVar18 < uVar16;
        uVar10 = uVar18;
        if (uVar18 <= uVar16) goto code_r0x0c422a14;
        goto code_r0x0c421c42;
      }
      uVar16 = 0;
      bVar20 = false;
      uVar10 = uVar18;
      if (uVar18 != 0) goto code_r0x0c421c42;
code_r0x0c422a14:
      if (bVar20) {
        fVar21 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
        uVar10 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
        if ((uVar16 < 3) ||
           (uVar12 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
           1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar10 = func_0x0412c3f0(uVar10);
        }
        else if (1 < uVar10) {
          lVar13 = 0x3f;
          if (uVar10 - 1 != 0) {
            for (; uVar10 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar10 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
        }
        if (uVar10 < uVar18) {
          uVar10 = uVar18;
        }
        if (uVar10 < uVar16) goto code_r0x0c421c42;
      }
    }
    plVar14 = (long *)param_2[2];
    if (plVar14 != (long *)0x0) {
      plStack_40 = plVar9 + 2;
code_r0x0c421c70:
      do {
        lVar13 = (long)plVar14 + 0x11;
        bVar20 = (*(byte *)(plVar14 + 2) & 1) == 0;
        lVar19 = plVar14[4];
        if (bVar20) {
          lVar19 = lVar13;
        }
        uVar18 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
        if (!bVar20) {
          uVar18 = plVar14[3];
        }
        uVar10 = func_0x04883620(&plStack_78,lVar19,uVar18);
        uVar18 = plVar9[1];
        if (uVar18 != 0) {
          uVar16 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
          uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar16 >> 0x38 < 2) {
            uVar12 = uVar18 - 1 & uVar10;
          }
          else {
            uVar12 = uVar10;
            if (uVar18 <= uVar10) {
              if ((uVar10 | uVar18) >> 0x20 == 0) {
                uVar12 = (uVar10 & 0xffffffff) % (uVar18 & 0xffffffff);
              }
              else {
                uVar12 = uVar10 % uVar18;
              }
            }
          }
          plVar11 = *(long **)(*plVar9 + uVar12 * 8);
          uStack_80 = uVar12;
          if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
            if ((*(byte *)(plVar14 + 2) & 1) == 0) {
              uVar17 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            }
            else {
              uVar17 = plVar14[3];
              lVar13 = plVar14[4];
            }
            if ((byte)(uVar16 >> 0x38) < 2) {
              uVar16 = uVar18 - 1;
              uStack_38 = uVar16;
              do {
                if (plVar11[1] == uVar10) {
                  bVar2 = *(byte *)(plVar11 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar15 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar15 = plVar11[3];
                  }
                  if (uVar15 == uVar17) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar19 = plVar11[4];
                    }
                    iVar8 = func_0x0eee3000(lVar19,lVar13,uVar17);
                    uVar16 = uStack_38;
                    uVar12 = uStack_80;
                    if (iVar8 == 0) goto code_r0x0c421ed0;
                  }
                }
                else if ((plVar11[1] & uVar16) != uVar12) break;
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
            else {
              do {
                uVar16 = plVar11[1];
                if (uVar16 == uVar10) {
                  bVar2 = *(byte *)(plVar11 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar16 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar16 = plVar11[3];
                  }
                  if (uVar16 == uVar17) {
                    if ((bVar2 & 1) == 0) {
                      lVar19 = (long)plVar11 + 0x11;
                    }
                    else {
                      lVar19 = plVar11[4];
                    }
                    iVar8 = func_0x0eee3000(lVar19,lVar13,uVar17);
                    uVar12 = uStack_80;
                    if (iVar8 == 0) goto code_r0x0c421ed0;
                  }
                }
                else {
                  if (uVar18 <= uVar16) {
                    if ((uVar16 | uVar18) >> 0x20 == 0) {
                      uVar16 = (uVar16 & 0xffffffff) % (uVar18 & 0xffffffff);
                    }
                    else {
                      uVar16 = uVar16 % uVar18;
                    }
                  }
                  if (uVar16 != uVar12) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
        }
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(0xe0,0);
        }
        uStack_68 = 0;
        *plVar11 = 0;
        plVar11[1] = uVar10;
        plStack_78 = plVar11;
        plStack_70 = plVar9;
        if ((*(byte *)(plVar14 + 2) & 1) == 0) {
          plVar11[4] = plVar14[4];
          uVar5 = *(undefined4 *)((long)plVar14 + 0x14);
          lVar13 = plVar14[3];
          uVar6 = *(undefined4 *)((long)plVar14 + 0x1c);
          *(undefined4 *)(plVar11 + 2) = *(undefined4 *)(plVar14 + 2);
          *(undefined4 *)((long)plVar11 + 0x14) = uVar5;
          *(int *)(plVar11 + 3) = (int)lVar13;
          *(undefined4 *)((long)plVar11 + 0x1c) = uVar6;
        }
        else {
          func_0x0412e5e0(plVar11 + 2,plVar14[4],plVar14[3]);
        }
        func_0x0c4237a0(plVar11 + 6,plVar14 + 6);
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        if ((long)uVar18 < 0) {
          fVar22 = (float)uVar18;
          fVar21 = *(float *)(plVar9 + 4);
          if (uVar18 != 0) goto code_r0x0c421ff2;
code_r0x0c422010:
          uVar16 = 1;
          if (2 < uVar18) {
            uVar16 = (ulong)((uVar18 & uVar18 - 1) != 0);
          }
          uVar16 = uVar18 * 2 | uVar16;
          fVar21 = (float)func_0x0eee3ab0((float)(plVar9[3] + 1) / fVar21);
          uVar18 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
          if (uVar18 < uVar16) {
            uVar18 = uVar16;
          }
          uVar16 = 2;
          if ((uVar18 == 1) || (uVar16 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
            uVar18 = plVar9[1];
            bVar20 = uVar16 < uVar18;
            if (uVar16 <= uVar18) goto code_r0x0c42209f;
code_r0x0c42207d:
            func_0x0c421540(plVar9,uVar16);
          }
          else {
            uVar16 = func_0x0412c3f0();
            uVar18 = plVar9[1];
            bVar20 = uVar16 < uVar18;
            if (uVar18 < uVar16) goto code_r0x0c42207d;
code_r0x0c42209f:
            if (bVar20) {
              fVar21 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
              uVar12 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
              if ((uVar18 < 3) ||
                 (uVar17 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
                 uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
                 1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
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
              if (uVar16 <= uVar12) {
                uVar16 = uVar12;
              }
              if (uVar16 < uVar18) goto code_r0x0c42207d;
            }
          }
          uVar18 = plVar9[1];
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar16 = uVar10 & uVar18 - 1;
          }
          else {
            uVar16 = uVar10;
            if (uVar18 <= uVar10) {
              if ((uVar10 | uVar18) >> 0x20 == 0) {
                uVar16 = (uVar10 & 0xffffffff) % (uVar18 & 0xffffffff);
              }
              else {
                uVar16 = uVar10 % uVar18;
              }
            }
          }
        }
        else {
          fVar22 = (float)(long)uVar18;
          fVar21 = *(float *)(plVar9 + 4);
          if (uVar18 == 0) goto code_r0x0c422010;
code_r0x0c421ff2:
          uVar16 = uStack_80;
          if (fVar22 * fVar21 < (float)(plVar9[3] + 1)) goto code_r0x0c422010;
        }
        lVar13 = *plVar9;
        plVar3 = *(long **)(lVar13 + uVar16 * 8);
        if (plVar3 == (long *)0x0) {
          *plVar11 = *plStack_40;
          *plStack_40 = (long)plVar11;
          *(long **)(lVar13 + uVar16 * 8) = plStack_40;
          if (*plVar11 != 0) {
            uVar10 = *(ulong *)(*plVar11 + 8);
            if ((uVar18 & uVar18 - 1) == 0) {
              *(long **)(lVar13 + (uVar10 & uVar18 - 1) * 8) = plVar11;
            }
            else {
              if (uVar18 <= uVar10) {
                if ((uVar10 | uVar18) >> 0x20 == 0) {
                  *(long **)(lVar13 + ((uVar10 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) = plVar11
                  ;
                  goto code_r0x0c422207;
                }
                uVar10 = uVar10 % uVar18;
              }
              *(long **)(lVar13 + uVar10 * 8) = plVar11;
            }
          }
        }
        else {
          *plVar11 = *plVar3;
          *plVar3 = (long)plVar11;
        }
code_r0x0c422207:
        plVar9[3] = plVar9[3] + 1;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
code_r0x0c422757:
    plVar9[5] = plStack_88[5];
    plVar9[6] = 0;
    uVar18 = plStack_88[6];
    if ((uVar18 >> 0x37 & 1) != 0) {
      lVar19 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar14 = lVar19;
      func_0x0eee2f00(plVar14 + 1,uVar18 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar14 + lVar19 + 8) = 0;
      uVar18 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar9[6] = uVar18;
    plVar9[7] = 0;
    uVar18 = plStack_88[7];
    if ((uVar18 & 0x80000000000000) != 0) {
      lVar19 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
      lVar13 = lVar19 + 9;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
      if (lVar13 != 0 && plVar14 == (long *)0x0) {
        func_0x0eec74c0(lVar13,8);
      }
      *plVar14 = lVar19;
      func_0x0eee2f00(plVar14 + 1,uVar18 & 0xff00ffffffffffff,lVar19);
      *(undefined1 *)((long)plVar14 + lVar19 + 8) = 0;
      uVar18 = (ulong)(plVar14 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    plVar9[7] = uVar18;
    *plStack_90 = (long)plVar9;
  default:
    param_3 = (long *)0x0;
  }
  return param_3;
code_r0x0c421ed0:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto code_r0x0c422757;
  goto code_r0x0c421c70;
code_r0x0c422599:
  do {
    plVar9 = (long *)*plVar14;
    func_0x0a738f50(plVar14 + 6);
    if ((*(byte *)(plVar14 + 2) & 1) != 0) {
      func_0x0412a280(plVar14[4],plVar14[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar14,0xe0);
    plVar14 = plVar9;
  } while (plVar9 != (long *)0x0);
code_r0x0c4226ce:
  plVar9 = plStack_90;
  param_2[5] = plStack_90[5];
  if (((ulong)param_2[6] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_2[6] & 0xff00ffffffffffffU) - 8);
  }
  param_2[6] = 0;
  uVar18 = plVar9[6];
  if ((uVar18 & 0x80000000000000) == 0) {
    param_2[6] = uVar18;
    uVar18 = param_2[7];
  }
  else {
    lVar13 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
    lVar19 = lVar13 + 9;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (plVar9 == (long *)0x0 && lVar19 != 0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar9 = lVar13;
    func_0x0eee2f00(plVar9 + 1,uVar18 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar9 + lVar13 + 8) = 0;
    plStack_88[6] = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    uVar18 = plStack_88[7];
    plVar9 = plStack_90;
    param_2 = plStack_88;
  }
  plStack_88 = param_2;
  if ((uVar18 & 0x80000000000000) == 0) {
    param_2[7] = 0;
    uVar18 = plVar9[7];
  }
  else {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar18 & 0xff00ffffffffffff) - 8);
    param_2[7] = 0;
    uVar18 = plVar9[7];
  }
  if ((uVar18 & 0x80000000000000) != 0) {
    lVar13 = *(long *)((uVar18 & 0xff00ffffffffffff) - 8);
    lVar19 = lVar13 + 9;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (plVar9 == (long *)0x0 && lVar19 != 0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar9 = lVar13;
    func_0x0eee2f00(plVar9 + 1,uVar18 & 0xff00ffffffffffff,lVar13);
    *(undefined1 *)((long)plVar9 + lVar13 + 8) = 0;
    uVar18 = (ulong)(plVar9 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    param_2 = plStack_88;
    plVar9 = plStack_90;
  }
  param_2[7] = uVar18;
  return plVar9;
}


