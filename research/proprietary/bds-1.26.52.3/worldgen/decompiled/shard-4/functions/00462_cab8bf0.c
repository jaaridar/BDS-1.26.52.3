/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbb8bf0 (ELF vaddr 0xcab8bf0)
 * Label: caller-of-callee
 * Body:  [[0cbb8bf0, 0cbb8c2a] [0cbb9e4f, 0cbb9e55] [0cbba5c4, 0cbba5d8]]
 * Ghidra: FUN_0cbb8bf0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbb8bf0(undefined4 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long **pplVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long **pplVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  ulong uStack_b8;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long **pplStack_88;
  ulong uStack_70;
  long *plStack_68;
  long *plStack_60;
  long alStack_58 [5];
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  switch(param_1) {
  case 0:
    param_3 = (long *)0xf6fbc60;
    if ((DAT_0f6fbc78 == '\0') && (iVar9 = FUN_04108328(&DAT_0f6fbc78), iVar9 != 0)) {
      func_0x0cbbc410(0xf6fbc60);
      func_0x0410844d(&DAT_0f6fbc78);
      param_3 = (long *)0xf6fbc60;
    }
    break;
  case 1:
    if (param_2[3] != 0) {
      puVar20 = (undefined8 *)param_2[2];
      while (puVar20 != (undefined8 *)0x0) {
        puVar24 = (undefined8 *)*puVar20;
        plVar10 = (long *)puVar20[10];
        if (plVar10 == puVar20 + 6) {
          lVar13 = 0x20;
code_r0x0cbb9775:
          (**(code **)(*plVar10 + lVar13))();
          bVar2 = *(byte *)(puVar20 + 2);
        }
        else {
          lVar13 = 0x28;
          if (plVar10 != (long *)0x0) goto code_r0x0cbb9775;
          bVar2 = *(byte *)(puVar20 + 2);
        }
        if ((bVar2 & 1) != 0) {
          func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar20,0x60);
        puVar20 = puVar24;
      }
      param_2[2] = 0;
      if (param_2[1] != 0) {
        memset(*param_2,0,param_2[1] << 3);
      }
      param_2[3] = 0;
    }
    lVar13 = *param_3;
    *param_3 = 0;
    lVar21 = *param_2;
    *param_2 = lVar13;
    if (lVar21 != 0) {
      func_0x0412a280(lVar21,param_2[1] << 3);
    }
    param_2[1] = param_3[1];
    param_3[1] = 0;
    lVar13 = param_3[3];
    param_2[3] = lVar13;
    *(int *)(param_2 + 4) = (int)param_3[4];
    lVar21 = param_3[2];
    param_2[2] = lVar21;
    if (lVar13 != 0) {
      uVar22 = *(ulong *)(lVar21 + 8);
      uVar11 = param_2[1];
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar22 = uVar22 & uVar11 - 1;
      }
      else if (uVar11 <= uVar22) {
        if ((uVar22 | uVar11) >> 0x20 == 0) {
          uVar22 = (uVar22 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar22 = uVar22 % uVar11;
        }
      }
      *(long **)(*param_2 + uVar22 * 8) = param_2 + 2;
      param_3[2] = 0;
      param_3[3] = 0;
    }
    plVar10 = param_2 + 5;
    if (param_2[8] != 0) {
      func_0x0cbba870(plVar10,param_2[7]);
      param_2[7] = 0;
      if (param_2[6] != 0) {
        memset(*plVar10,0,param_2[6] << 3);
      }
      param_2[8] = 0;
    }
    lVar13 = param_3[5];
    param_3[5] = 0;
    lVar21 = *plVar10;
    *plVar10 = lVar13;
    if (lVar21 != 0) {
      func_0x0412a280(lVar21,param_2[6] << 3);
    }
    param_2[6] = param_3[6];
    param_3[6] = 0;
    lVar13 = param_3[8];
    param_2[8] = lVar13;
    *(int *)(param_2 + 9) = (int)param_3[9];
    lVar21 = param_3[7];
    param_2[7] = lVar21;
    if (lVar13 != 0) {
      uVar22 = *(ulong *)(lVar21 + 8);
      uVar11 = param_2[6];
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar22 = uVar22 & uVar11 - 1;
      }
      else if (uVar11 <= uVar22) {
        if ((uVar22 | uVar11) >> 0x20 == 0) {
          uVar22 = (uVar22 & 0xffffffff) % (uVar11 & 0xffffffff);
        }
        else {
          uVar22 = uVar22 % uVar11;
        }
      }
      *(long **)(*plVar10 + uVar22 * 8) = param_2 + 7;
      param_3[7] = 0;
      param_3[8] = 0;
    }
    break;
  case 2:
    if (param_2 == param_3) {
      return param_3;
    }
    *(int *)(param_2 + 4) = (int)param_3[4];
    plVar10 = (long *)param_3[2];
    if (param_2[1] != 0) {
      memset(*param_2,0,param_2[1] << 3);
      plVar16 = (long *)param_2[2];
      param_2[2] = 0;
      param_2[3] = 0;
      if (plVar16 != (long *)0x0) {
        do {
          if (plVar10 == (long *)0x0) goto code_r0x0cbb9619;
          if (plVar16 != plVar10) {
            pbVar1 = (byte *)(plVar16 + 2);
            bVar2 = *(byte *)(plVar10 + 2);
            if ((*pbVar1 & 1) == 0) {
              if ((bVar2 & 1) == 0) {
                plVar16[4] = plVar10[4];
                uVar5 = *(undefined4 *)((long)plVar10 + 0x14);
                lVar13 = plVar10[3];
                uVar6 = *(undefined4 *)((long)plVar10 + 0x1c);
                *(undefined4 *)pbVar1 = *(undefined4 *)(plVar10 + 2);
                *(undefined4 *)((long)plVar16 + 0x14) = uVar5;
                *(int *)(plVar16 + 3) = (int)lVar13;
                *(undefined4 *)((long)plVar16 + 0x1c) = uVar6;
              }
              else {
                func_0x04885070(pbVar1,plVar10[4],plVar10[3]);
              }
            }
            else {
              bVar25 = (bVar2 & 1) != 0;
              lVar13 = (long)plVar10 + 0x11;
              if (bVar25) {
                lVar13 = plVar10[4];
              }
              uVar22 = (ulong)(bVar2 >> 1);
              if (bVar25) {
                uVar22 = plVar10[3];
              }
              FUN_04885120(pbVar1,lVar13,uVar22);
            }
          }
          plVar12 = (long *)plVar10[10];
          if (plVar12 == (long *)0x0) {
            pplStack_88 = (long **)0x0;
joined_r0x0cbb94f9:
            if ((long **)(plVar16 + 6) == &plStack_a8) goto joined_r0x0cbb952d;
code_r0x0cbb9486:
            pplVar8 = pplStack_88;
            pplVar23 = (long **)(plVar16 + 6);
            pplVar3 = (long **)plVar16[10];
            if (pplStack_88 == &plStack_a8) {
              if (pplVar3 == pplVar23) {
                (*(code *)(*pplStack_88)[3])(pplStack_88,alStack_58);
                (*(code *)(*pplStack_88)[4])();
                pplStack_88 = (long **)0x0;
                (**(code **)(*(long *)plVar16[10] + 0x18))((long *)plVar16[10],&plStack_a8);
                (**(code **)(*(long *)plVar16[10] + 0x20))();
                plVar16[10] = 0;
                pplStack_88 = &plStack_a8;
                (**(code **)(alStack_58[0] + 0x18))(alStack_58,pplVar23);
                (**(code **)(alStack_58[0] + 0x20))(alStack_58);
                plVar16[10] = (long)pplVar23;
              }
              else {
                (*(code *)(*pplStack_88)[3])(pplStack_88,pplVar23);
                (*(code *)(*pplStack_88)[4])();
                pplStack_88 = (long **)plVar16[10];
                plVar16[10] = (long)pplVar23;
              }
              goto joined_r0x0cbb952d;
            }
            if (pplVar3 != pplVar23) {
              pplStack_88 = pplVar3;
              plVar16[10] = (long)pplVar8;
              goto joined_r0x0cbb952d;
            }
            (*(code *)(*pplVar3)[3])(pplVar3,&plStack_a8);
            (**(code **)(*(long *)plVar16[10] + 0x20))();
            plVar16[10] = (long)pplStack_88;
            pplStack_88 = &plStack_a8;
            lVar13 = 0x20;
code_r0x0cbb9560:
            (**(code **)((long)*pplStack_88 + lVar13))();
          }
          else {
            if (plVar12 == plVar10 + 6) {
              pplStack_88 = &plStack_a8;
              (**(code **)(*plVar12 + 0x18))(plVar12,&plStack_a8);
              goto joined_r0x0cbb94f9;
            }
            pplStack_88 = (long **)(**(code **)(*plVar12 + 0x10))();
            if ((long **)(plVar16 + 6) != &plStack_a8) goto code_r0x0cbb9486;
joined_r0x0cbb952d:
            if (pplStack_88 == &plStack_a8) {
              lVar13 = 0x20;
              goto code_r0x0cbb9560;
            }
            lVar13 = 0x28;
            if (pplStack_88 != (long **)0x0) goto code_r0x0cbb9560;
          }
          plVar12 = (long *)*plVar16;
          func_0x0cbba970(param_2,plVar16);
          plVar10 = (long *)*plVar10;
          plVar16 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    if (plVar10 != (long *)0x0) {
      do {
        plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
        if (plVar16 == (long *)0x0) {
          func_0x0eec74c0(0x60,0);
        }
        uStack_98 = 0;
        *plVar16 = 0;
        plVar16[1] = 0;
        plStack_a8 = plVar16;
        plStack_a0 = param_2;
        if ((*(byte *)(plVar10 + 2) & 1) == 0) {
          plVar16[4] = plVar10[4];
          uVar5 = *(undefined4 *)((long)plVar10 + 0x14);
          lVar13 = plVar10[3];
          uVar6 = *(undefined4 *)((long)plVar10 + 0x1c);
          *(undefined4 *)(plVar16 + 2) = *(undefined4 *)(plVar10 + 2);
          *(undefined4 *)((long)plVar16 + 0x14) = uVar5;
          *(int *)(plVar16 + 3) = (int)lVar13;
          *(undefined4 *)((long)plVar16 + 0x1c) = uVar6;
        }
        else {
          func_0x0412e5e0(plVar16 + 2,plVar10[4],plVar10[3]);
        }
        plVar12 = (long *)plVar10[10];
        if (plVar12 == (long *)0x0) {
          plVar16[10] = 0;
        }
        else if (plVar12 == plVar10 + 6) {
          plVar16[10] = (long)(plVar16 + 6);
          (**(code **)(*plVar12 + 0x18))();
        }
        else {
          lVar13 = (**(code **)(*plVar12 + 0x10))();
          plVar16[10] = lVar13;
        }
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        bVar25 = (*(byte *)(plVar16 + 2) & 1) != 0;
        lVar13 = (long)plVar16 + 0x11;
        if (bVar25) {
          lVar13 = plVar16[4];
        }
        uVar22 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
        if (bVar25) {
          uVar22 = plVar16[3];
        }
        lVar13 = func_0x04883620(alStack_58,lVar13,uVar22);
        plVar16[1] = lVar13;
        func_0x0cbba970(param_2,plVar16);
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
    goto code_r0x0cbba01b;
  case 3:
    if (param_2 != param_3) {
      param_3 = (long *)0x0;
    }
    break;
  case 4:
    param_3[2] = (long)FUN_0cbb8bf0;
    *(undefined4 *)(param_3 + 4) = 0xed9c1da0;
    param_3[3] = (long)&UNK_0cbba7c0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    *(int *)(plVar10 + 4) = (int)param_2[4];
    uVar22 = param_2[1];
    uVar11 = 2;
    if (uVar22 == 1) {
code_r0x0cbb8d03:
      func_0x0cbbc040(plVar10,uVar11);
    }
    else {
      if ((uVar22 & uVar22 - 1) != 0) {
        uVar22 = func_0x0412c3f0(uVar22,2);
        uVar17 = plVar10[1];
        bVar25 = uVar22 < uVar17;
        uVar11 = uVar22;
        if (uVar22 <= uVar17) goto code_r0x0cbb9e95;
        goto code_r0x0cbb8d03;
      }
      uVar17 = 0;
      bVar25 = false;
      uVar11 = uVar22;
      if (uVar22 != 0) goto code_r0x0cbb8d03;
code_r0x0cbb9e95:
      if (bVar25) {
        fVar26 = (float)func_0x0eee3ab0((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
        uVar11 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
        if ((uVar17 < 3) ||
           (uVar15 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
           1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
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
        if (uVar11 < uVar22) {
          uVar11 = uVar22;
        }
        if (uVar11 < uVar17) goto code_r0x0cbb8d03;
      }
    }
    plVar16 = (long *)param_2[2];
    plStack_68 = param_2;
    if (plVar16 != (long *)0x0) {
      plStack_60 = plVar10 + 2;
code_r0x0cbb8d41:
      do {
        lVar13 = (long)plVar16 + 0x11;
        bVar25 = (*(byte *)(plVar16 + 2) & 1) == 0;
        lVar21 = plVar16[4];
        if (bVar25) {
          lVar21 = lVar13;
        }
        uVar22 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
        if (!bVar25) {
          uVar22 = plVar16[3];
        }
        uVar11 = func_0x04883620(&plStack_a8,lVar21,uVar22);
        uVar22 = plVar10[1];
        if (uVar22 != 0) {
          uVar17 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
          uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar17 >> 0x38 < 2) {
            uStack_b8 = uVar22 - 1 & uVar11;
          }
          else {
            uStack_b8 = uVar11;
            if (uVar22 <= uVar11) {
              if ((uVar11 | uVar22) >> 0x20 == 0) {
                uStack_b8 = (uVar11 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uStack_b8 = uVar11 % uVar22;
              }
            }
          }
          plVar12 = *(long **)(*plVar10 + uStack_b8 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            if ((*(byte *)(plVar16 + 2) & 1) == 0) {
              uVar15 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
            }
            else {
              uVar15 = plVar16[3];
              lVar13 = plVar16[4];
            }
            if ((byte)(uVar17 >> 0x38) < 2) {
              uVar17 = uVar22 - 1;
              uStack_70 = uVar17;
              do {
                if (plVar12[1] == uVar11) {
                  bVar2 = *(byte *)(plVar12 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar19 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar19 = plVar12[3];
                  }
                  if (uVar19 == uVar15) {
                    if ((bVar2 & 1) == 0) {
                      lVar21 = (long)plVar12 + 0x11;
                    }
                    else {
                      lVar21 = plVar12[4];
                    }
                    iVar9 = bcmp(lVar21,lVar13,uVar15);
                    uVar17 = uStack_70;
                    if (iVar9 == 0) goto code_r0x0cbb8d30;
                  }
                }
                else if ((plVar12[1] & uVar17) != uStack_b8) break;
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            else {
              do {
                uVar17 = plVar12[1];
                if (uVar17 == uVar11) {
                  bVar2 = *(byte *)(plVar12 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar17 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar17 = plVar12[3];
                  }
                  if (uVar17 == uVar15) {
                    if ((bVar2 & 1) == 0) {
                      lVar21 = (long)plVar12 + 0x11;
                    }
                    else {
                      lVar21 = plVar12[4];
                    }
                    iVar9 = bcmp(lVar21,lVar13,uVar15);
                    if (iVar9 == 0) goto code_r0x0cbb8d30;
                  }
                }
                else {
                  if (uVar22 <= uVar17) {
                    if ((uVar17 | uVar22) >> 0x20 == 0) {
                      uVar17 = (uVar17 & 0xffffffff) % (uVar22 & 0xffffffff);
                    }
                    else {
                      uVar17 = uVar17 % uVar22;
                    }
                  }
                  if (uVar17 != uStack_b8) break;
                }
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
          }
        }
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x60,0);
        }
        uStack_98 = 0;
        *plVar12 = 0;
        plVar12[1] = uVar11;
        plStack_a8 = plVar12;
        plStack_a0 = plVar10;
        if ((*(byte *)(plVar16 + 2) & 1) == 0) {
          plVar12[4] = plVar16[4];
          uVar5 = *(undefined4 *)((long)plVar16 + 0x14);
          lVar13 = plVar16[3];
          uVar6 = *(undefined4 *)((long)plVar16 + 0x1c);
          *(undefined4 *)(plVar12 + 2) = *(undefined4 *)(plVar16 + 2);
          *(undefined4 *)((long)plVar12 + 0x14) = uVar5;
          *(int *)(plVar12 + 3) = (int)lVar13;
          *(undefined4 *)((long)plVar12 + 0x1c) = uVar6;
        }
        else {
          func_0x0412e5e0(plVar12 + 2,plVar16[4],plVar16[3]);
        }
        plVar14 = (long *)plVar16[10];
        if (plVar14 == (long *)0x0) {
          plVar12[10] = 0;
        }
        else if (plVar14 == plVar16 + 6) {
          plVar12[10] = (long)(plVar12 + 6);
          (**(code **)(*plVar14 + 0x18))();
        }
        else {
          lVar13 = (**(code **)(*plVar14 + 0x10))();
          plVar12[10] = lVar13;
        }
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        if ((long)uVar22 < 0) {
          fVar27 = (float)uVar22;
          fVar26 = *(float *)(plVar10 + 4);
          if (uVar22 != 0) goto code_r0x0cbb90e2;
code_r0x0cbb9100:
          uVar17 = 1;
          if (2 < uVar22) {
            uVar17 = (ulong)((uVar22 & uVar22 - 1) != 0);
          }
          uVar17 = uVar22 * 2 | uVar17;
          fVar26 = (float)func_0x0eee3ab0((float)(plVar10[3] + 1) / fVar26);
          uVar22 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
          if (uVar22 < uVar17) {
            uVar22 = uVar17;
          }
          uVar17 = 2;
          if ((uVar22 == 1) || (uVar17 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
            uVar22 = plVar10[1];
            bVar25 = uVar17 < uVar22;
            if (uVar17 <= uVar22) goto code_r0x0cbb918f;
code_r0x0cbb916d:
            func_0x0cbbc040(plVar10,uVar17);
          }
          else {
            uVar17 = func_0x0412c3f0();
            uVar22 = plVar10[1];
            bVar25 = uVar17 < uVar22;
            if (uVar22 < uVar17) goto code_r0x0cbb916d;
code_r0x0cbb918f:
            if (bVar25) {
              fVar26 = (float)func_0x0eee3ab0((float)(ulong)plVar10[3] / *(float *)(plVar10 + 4));
              uVar15 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
              if ((uVar22 < 3) ||
                 (uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
                 uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
                 1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar15 = func_0x0412c3f0(uVar15);
              }
              else if (1 < uVar15) {
                lVar13 = 0x3f;
                if (uVar15 - 1 != 0) {
                  for (; uVar15 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar15 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
              }
              if (uVar17 <= uVar15) {
                uVar17 = uVar15;
              }
              if (uVar17 < uVar22) goto code_r0x0cbb916d;
            }
          }
          uVar22 = plVar10[1];
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar17 = uVar11 & uVar22 - 1;
          }
          else {
            uVar17 = uVar11;
            if (uVar22 <= uVar11) {
              if ((uVar11 | uVar22) >> 0x20 == 0) {
                uVar17 = (uVar11 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar17 = uVar11 % uVar22;
              }
            }
          }
        }
        else {
          fVar27 = (float)(long)uVar22;
          fVar26 = *(float *)(plVar10 + 4);
          if (uVar22 == 0) goto code_r0x0cbb9100;
code_r0x0cbb90e2:
          uVar17 = uStack_b8;
          if (fVar27 * fVar26 < (float)(plVar10[3] + 1)) goto code_r0x0cbb9100;
        }
        lVar13 = *plVar10;
        plVar14 = *(long **)(lVar13 + uVar17 * 8);
        if (plVar14 == (long *)0x0) {
          *plVar12 = *plStack_60;
          *plStack_60 = (long)plVar12;
          *(long **)(lVar13 + uVar17 * 8) = plStack_60;
          if (*plVar12 != 0) {
            uVar11 = *(ulong *)(*plVar12 + 8);
            if ((uVar22 & uVar22 - 1) == 0) {
              *(long **)(lVar13 + (uVar11 & uVar22 - 1) * 8) = plVar12;
            }
            else {
              if (uVar22 <= uVar11) {
                if ((uVar11 | uVar22) >> 0x20 == 0) {
                  *(long **)(lVar13 + ((uVar11 & 0xffffffff) % (uVar22 & 0xffffffff)) * 8) = plVar12
                  ;
                  goto code_r0x0cbb92f7;
                }
                uVar11 = uVar11 % uVar22;
              }
              *(long **)(lVar13 + uVar11 * 8) = plVar12;
            }
          }
        }
        else {
          *plVar12 = *plVar14;
          *plVar14 = (long)plVar12;
        }
code_r0x0cbb92f7:
        plVar10[3] = plVar10[3] + 1;
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
code_r0x0cbb9794:
    plVar12 = plStack_68;
    plVar16 = plVar10 + 5;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    *(int *)(plVar10 + 9) = (int)plStack_68[9];
    uVar22 = plStack_68[6];
    uVar11 = 2;
    if (uVar22 == 1) {
code_r0x0cbb97ea:
      func_0x0cbb80b0(plVar16,uVar11);
    }
    else {
      if ((uVar22 & uVar22 - 1) != 0) {
        uVar22 = func_0x0412c3f0(uVar22,2);
        uVar17 = plVar10[6];
        bVar25 = uVar22 < uVar17;
        uVar11 = uVar22;
        if (uVar22 <= uVar17) goto code_r0x0cbb9ecf;
        goto code_r0x0cbb97ea;
      }
      uVar17 = 0;
      bVar25 = false;
      uVar11 = uVar22;
      if (uVar22 != 0) goto code_r0x0cbb97ea;
code_r0x0cbb9ecf:
      if (bVar25) {
        fVar26 = (float)func_0x0eee3ab0((float)(ulong)plVar10[8] / *(float *)(plVar10 + 9));
        uVar11 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
        if ((uVar17 < 3) ||
           (uVar15 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
           1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
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
        if (uVar11 < uVar22) {
          uVar11 = uVar22;
        }
        if (uVar11 < uVar17) goto code_r0x0cbb97ea;
      }
    }
    plVar12 = (long *)plVar12[7];
    if (plVar12 != (long *)0x0) {
      plStack_68 = plVar10 + 7;
code_r0x0cbb982d:
      do {
        lVar13 = (long)plVar12 + 0x11;
        bVar25 = (*(byte *)(plVar12 + 2) & 1) == 0;
        lVar21 = plVar12[4];
        if (bVar25) {
          lVar21 = lVar13;
        }
        uVar22 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
        if (!bVar25) {
          uVar22 = plVar12[3];
        }
        uVar11 = func_0x04883620(&plStack_a8,lVar21,uVar22);
        uVar22 = plVar10[6];
        if (uVar22 != 0) {
          uVar17 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
          uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar17 >> 0x38 < 2) {
            uVar15 = uVar22 - 1 & uVar11;
          }
          else {
            uVar15 = uVar11;
            if (uVar22 <= uVar11) {
              if ((uVar11 | uVar22) >> 0x20 == 0) {
                uVar15 = (uVar11 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar15 = uVar11 % uVar22;
              }
            }
          }
          plVar14 = *(long **)(*plVar16 + uVar15 * 8);
          uStack_70 = uVar15;
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if ((*(byte *)(plVar12 + 2) & 1) == 0) {
              uVar19 = (ulong)(*(byte *)(plVar12 + 2) >> 1);
            }
            else {
              uVar19 = plVar12[3];
              lVar13 = plVar12[4];
            }
            if ((byte)(uVar17 >> 0x38) < 2) {
              plVar18 = (long *)(uVar22 - 1);
              plStack_60 = plVar18;
              do {
                if (plVar14[1] == uVar11) {
                  bVar2 = *(byte *)(plVar14 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar17 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar17 = plVar14[3];
                  }
                  if (uVar17 == uVar19) {
                    if ((bVar2 & 1) == 0) {
                      lVar21 = (long)plVar14 + 0x11;
                    }
                    else {
                      lVar21 = plVar14[4];
                    }
                    iVar9 = bcmp(lVar21,lVar13,uVar19);
                    plVar18 = plStack_60;
                    uVar15 = uStack_70;
                    if (iVar9 == 0) goto code_r0x0cbb9820;
                  }
                }
                else if ((plVar14[1] & (ulong)plVar18) != uVar15) break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                uVar17 = plVar14[1];
                if (uVar17 == uVar11) {
                  bVar2 = *(byte *)(plVar14 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar17 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar17 = plVar14[3];
                  }
                  if (uVar17 == uVar19) {
                    if ((bVar2 & 1) == 0) {
                      lVar21 = (long)plVar14 + 0x11;
                    }
                    else {
                      lVar21 = plVar14[4];
                    }
                    iVar9 = bcmp(lVar21,lVar13,uVar19);
                    uVar15 = uStack_70;
                    if (iVar9 == 0) goto code_r0x0cbb9820;
                  }
                }
                else {
                  if (uVar22 <= uVar17) {
                    if ((uVar17 | uVar22) >> 0x20 == 0) {
                      uVar17 = (uVar17 & 0xffffffff) % (uVar22 & 0xffffffff);
                    }
                    else {
                      uVar17 = uVar17 % uVar22;
                    }
                  }
                  if (uVar17 != uVar15) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
        plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
        if (plVar14 == (long *)0x0) {
          func_0x0eec74c0(0x68,0);
        }
        uStack_98 = 0;
        *plVar14 = 0;
        plVar14[1] = uVar11;
        plStack_a8 = plVar14;
        plStack_a0 = plVar16;
        if ((*(byte *)(plVar12 + 2) & 1) == 0) {
          plVar14[4] = plVar12[4];
          uVar5 = *(undefined4 *)((long)plVar12 + 0x14);
          lVar13 = plVar12[3];
          uVar6 = *(undefined4 *)((long)plVar12 + 0x1c);
          *(undefined4 *)(plVar14 + 2) = *(undefined4 *)(plVar12 + 2);
          *(undefined4 *)((long)plVar14 + 0x14) = uVar5;
          *(int *)(plVar14 + 3) = (int)lVar13;
          *(undefined4 *)((long)plVar14 + 0x1c) = uVar6;
        }
        else {
          func_0x0412e5e0(plVar14 + 2,plVar12[4],plVar12[3]);
        }
        func_0x0cbbbc80(plVar14 + 5,plVar12 + 5);
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        if ((long)uVar22 < 0) {
          fVar27 = (float)uVar22;
          fVar26 = *(float *)(plVar10 + 9);
          if (uVar22 != 0) goto code_r0x0cbb9b85;
code_r0x0cbb9ba0:
          uVar17 = 1;
          if (2 < uVar22) {
            uVar17 = (ulong)((uVar22 & uVar22 - 1) != 0);
          }
          uVar17 = uVar22 * 2 | uVar17;
          fVar26 = (float)func_0x0eee3ab0((float)(plVar10[8] + 1) / fVar26);
          uVar22 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
          if (uVar22 < uVar17) {
            uVar22 = uVar17;
          }
          uVar17 = 2;
          if ((uVar22 == 1) || (uVar17 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
            uVar22 = plVar10[6];
            bVar25 = uVar17 < uVar22;
            if (uVar17 <= uVar22) goto code_r0x0cbb9c39;
code_r0x0cbb9c11:
            func_0x0cbb80b0(plVar16,uVar17);
          }
          else {
            uVar17 = func_0x0412c3f0();
            uVar22 = plVar10[6];
            bVar25 = uVar17 < uVar22;
            if (uVar22 < uVar17) goto code_r0x0cbb9c11;
code_r0x0cbb9c39:
            if (bVar25) {
              fVar26 = (float)func_0x0eee3ab0((float)(ulong)plVar10[8] / *(float *)(plVar10 + 9));
              uVar15 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
              if ((uVar22 < 3) ||
                 (uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
                 uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333),
                 1 < (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar15 = func_0x0412c3f0(uVar15);
              }
              else if (1 < uVar15) {
                lVar13 = 0x3f;
                if (uVar15 - 1 != 0) {
                  for (; uVar15 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar15 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
              }
              if (uVar17 <= uVar15) {
                uVar17 = uVar15;
              }
              if (uVar17 < uVar22) goto code_r0x0cbb9c11;
            }
          }
          uVar22 = plVar10[6];
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar17 = uVar11 & uVar22 - 1;
          }
          else {
            uVar17 = uVar11;
            if (uVar22 <= uVar11) {
              if ((uVar11 | uVar22) >> 0x20 == 0) {
                uVar17 = (uVar11 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar17 = uVar11 % uVar22;
              }
            }
          }
        }
        else {
          fVar27 = (float)(long)uVar22;
          fVar26 = *(float *)(plVar10 + 9);
          if (uVar22 == 0) goto code_r0x0cbb9ba0;
code_r0x0cbb9b85:
          uVar17 = uStack_70;
          if (fVar27 * fVar26 < (float)(plVar10[8] + 1)) goto code_r0x0cbb9ba0;
        }
        lVar13 = *plVar16;
        plVar18 = *(long **)(lVar13 + uVar17 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar14 = *plStack_68;
          *plStack_68 = (long)plVar14;
          *(long **)(lVar13 + uVar17 * 8) = plStack_68;
          if (*plVar14 != 0) {
            uVar11 = *(ulong *)(*plVar14 + 8);
            if ((uVar22 & uVar22 - 1) == 0) {
              *(long **)(lVar13 + (uVar11 & uVar22 - 1) * 8) = plVar14;
            }
            else {
              if (uVar22 <= uVar11) {
                if ((uVar11 | uVar22) >> 0x20 == 0) {
                  *(long **)(lVar13 + ((uVar11 & 0xffffffff) % (uVar22 & 0xffffffff)) * 8) = plVar14
                  ;
                  goto code_r0x0cbb9dab;
                }
                uVar11 = uVar11 % uVar22;
              }
              *(long **)(lVar13 + uVar11 * 8) = plVar14;
            }
          }
        }
        else {
          *plVar14 = *plVar18;
          *plVar18 = (long)plVar14;
        }
code_r0x0cbb9dab:
        plVar10[8] = plVar10[8] + 1;
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
code_r0x0cbb9e42:
    *param_3 = (long)plVar10;
  default:
    param_3 = (long *)0x0;
  }
  return param_3;
code_r0x0cbb8d30:
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto code_r0x0cbb9794;
  goto code_r0x0cbb8d41;
code_r0x0cbb9820:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto code_r0x0cbb9e42;
  goto code_r0x0cbb982d;
  while( true ) {
    if ((bVar2 & 1) != 0) {
      func_0x0412a280(plVar16[4],plVar16[2] & 0xfffffffffffffffe);
    }
    func_0x0412a280(plVar16,0x60);
    plVar16 = plVar10;
    if (plVar10 == (long *)0x0) break;
code_r0x0cbb9619:
    plVar10 = (long *)*plVar16;
    plVar12 = (long *)plVar16[10];
    if (plVar12 == plVar16 + 6) {
      lVar13 = 0x20;
code_r0x0cbb9645:
      (**(code **)(*plVar12 + lVar13))();
      bVar2 = *(byte *)(plVar16 + 2);
    }
    else {
      lVar13 = 0x28;
      if (plVar12 != (long *)0x0) goto code_r0x0cbb9645;
      bVar2 = *(byte *)(plVar16 + 2);
    }
  }
code_r0x0cbba01b:
  plVar10 = param_2 + 5;
  *(int *)(param_2 + 9) = (int)param_3[9];
  puVar20 = (undefined8 *)param_3[7];
  if (param_2[6] != 0) {
    memset(param_2[5],0,param_2[6] << 3);
    puVar24 = (undefined8 *)param_2[7];
    param_2[7] = 0;
    param_2[8] = 0;
    while (puVar24 != (undefined8 *)0x0) {
      if (puVar20 == (undefined8 *)0x0) {
        do {
          puVar20 = (undefined8 *)*puVar24;
          if (*(char *)(puVar24 + 0xc) == '\x01') {
            if ((puVar24[0xb] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(puVar24[0xb] & 0xff00ffffffffffff) - 8);
            }
            puVar24[0xb] = 0;
            if ((puVar24[10] & 0x80000000000000) != 0) {
              (**(code **)(_DAT_0f5463b0 + 0x28))
                        (&DAT_0f5463b0,(puVar24[10] & 0xff00ffffffffffff) - 8);
            }
            puVar24[10] = 0;
          }
          lVar13 = puVar24[6];
          if (lVar13 != 0) {
            puVar24[7] = lVar13;
            func_0x0412a280(lVar13,puVar24[8] - lVar13);
          }
          if ((*(byte *)(puVar24 + 2) & 1) != 0) {
            func_0x0412a280(puVar24[4],puVar24[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar24,0x68);
          puVar24 = puVar20;
        } while (puVar20 != (undefined8 *)0x0);
        return param_3;
      }
      if (puVar24 == puVar20) {
        puVar24[5] = puVar20[5];
      }
      else {
        pbVar1 = (byte *)(puVar24 + 2);
        bVar2 = *(byte *)(puVar20 + 2);
        if ((*pbVar1 & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            puVar24[4] = puVar20[4];
            uVar5 = *(undefined4 *)((long)puVar20 + 0x14);
            uVar6 = *(undefined4 *)(puVar20 + 3);
            uVar7 = *(undefined4 *)((long)puVar20 + 0x1c);
            *(undefined4 *)pbVar1 = *(undefined4 *)(puVar20 + 2);
            *(undefined4 *)((long)puVar24 + 0x14) = uVar5;
            *(undefined4 *)(puVar24 + 3) = uVar6;
            *(undefined4 *)((long)puVar24 + 0x1c) = uVar7;
          }
          else {
            func_0x04885070(pbVar1,puVar20[4],puVar20[3]);
          }
        }
        else {
          bVar25 = (bVar2 & 1) != 0;
          lVar13 = (long)puVar20 + 0x11;
          if (bVar25) {
            lVar13 = puVar20[4];
          }
          uVar22 = (ulong)(bVar2 >> 1);
          if (bVar25) {
            uVar22 = puVar20[3];
          }
          FUN_04885120(pbVar1,lVar13,uVar22);
        }
        puVar24[5] = puVar20[5];
        func_0x0c24b8c0(puVar24 + 6,puVar20[6],puVar20[7],(long)(puVar20[7] - puVar20[6]) >> 3);
      }
      func_0x0c24ba30(puVar24 + 9,puVar20 + 9);
      puVar4 = (undefined8 *)*puVar24;
      func_0x0cbbb330(plVar10,puVar24);
      puVar20 = (undefined8 *)*puVar20;
      puVar24 = puVar4;
    }
  }
  if (puVar20 == (undefined8 *)0x0) {
    return param_3;
  }
  do {
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (plVar16 == (long *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    uStack_98 = 0;
    *plVar16 = 0;
    plVar16[1] = 0;
    plStack_a8 = plVar16;
    plStack_a0 = plVar10;
    if ((*(byte *)(puVar20 + 2) & 1) == 0) {
      plVar16[4] = puVar20[4];
      uVar5 = *(undefined4 *)((long)puVar20 + 0x14);
      uVar6 = *(undefined4 *)(puVar20 + 3);
      uVar7 = *(undefined4 *)((long)puVar20 + 0x1c);
      *(undefined4 *)(plVar16 + 2) = *(undefined4 *)(puVar20 + 2);
      *(undefined4 *)((long)plVar16 + 0x14) = uVar5;
      *(undefined4 *)(plVar16 + 3) = uVar6;
      *(undefined4 *)((long)plVar16 + 0x1c) = uVar7;
    }
    else {
      func_0x0412e5e0(plVar16 + 2,puVar20[4],puVar20[3]);
    }
    func_0x0cbbbc80(plVar16 + 5,puVar20 + 5);
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    bVar25 = (*(byte *)(plVar16 + 2) & 1) != 0;
    lVar13 = (long)plVar16 + 0x11;
    if (bVar25) {
      lVar13 = plVar16[4];
    }
    uVar22 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
    if (bVar25) {
      uVar22 = plVar16[3];
    }
    lVar13 = func_0x04883620(alStack_58,lVar13,uVar22);
    plVar16[1] = lVar13;
    func_0x0cbbb330(plVar10,plVar16);
    puVar20 = (undefined8 *)*puVar20;
  } while (puVar20 != (undefined8 *)0x0);
  return param_3;
}


