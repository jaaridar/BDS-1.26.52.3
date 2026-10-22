/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x91e0e90 (ELF vaddr 0x90e0e90)
 * Label: caller-of-callee
 * Body:  [[091e0e90, 091e0ec7] [091e1a4b, 091e1a52] [091e1bb7, 091e1bc8]]
 * Ghidra: FUN_091e0e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_091e0e90(undefined4 param_1,long *param_2,long *param_3)

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
  ulong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 uStack_69;
  ulong uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (*(char *)((long)param_2 + 0x24) != '\x02') {
    param_2 = (long *)*param_2;
  }
  plStack_48 = param_3;
  switch(param_1) {
  case 0:
    param_3 = (long *)0xf6155e0;
    if ((cRam000000000f6155f8 == '\0') && (iVar8 = func_0x04108328(0xf6155f8), iVar8 != 0)) {
      func_0x091e0ca0();
      func_0x0410844d(0xf6155f8);
    }
    break;
  case 1:
    if (param_2[3] != 0) {
      puVar18 = (undefined8 *)param_2[2];
      while (puVar18 != (undefined8 *)0x0) {
        puVar21 = (undefined8 *)*puVar18;
        plVar9 = (long *)puVar18[5];
        if ((plVar9 != (long *)0x0) && (*plVar9 != 0 && (int)plVar9[1] == *(int *)(puVar18 + 6))) {
          func_0x0d8569b0(*plVar9,puVar18[7],*(undefined4 *)(puVar18 + 8));
        }
        if ((*(byte *)(puVar18 + 2) & 1) != 0) {
          func_0x0412a280(puVar18[4],puVar18[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar18,0x48);
        puVar18 = puVar21;
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
      uVar20 = *(ulong *)(lVar19 + 8);
      uVar10 = param_2[1];
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar20 = uVar20 & uVar10 - 1;
      }
      else if (uVar10 <= uVar20) {
        if ((uVar20 | uVar10) >> 0x20 == 0) {
          uVar20 = (uVar20 & 0xffffffff) % (uVar10 & 0xffffffff);
        }
        else {
          uVar20 = uVar20 % uVar10;
        }
      }
      *(long **)(*param_2 + uVar20 * 8) = param_2 + 2;
      param_3[2] = 0;
      param_3[3] = 0;
    }
    break;
  case 2:
    if (param_2 != param_3) {
      *(int *)(param_2 + 4) = (int)param_3[4];
      puVar18 = (undefined8 *)param_3[2];
      if (param_2[1] != 0) {
        func_0x0eee2dd0(*param_2,0,param_2[1] << 3);
        puVar21 = (undefined8 *)param_2[2];
        param_2[2] = 0;
        param_2[3] = 0;
        while (puVar21 != (undefined8 *)0x0) {
          if (puVar18 == (undefined8 *)0x0) {
            do {
              puVar18 = (undefined8 *)*puVar21;
              plVar9 = (long *)puVar21[5];
              if ((plVar9 != (long *)0x0) &&
                 (*plVar9 != 0 && (int)plVar9[1] == *(int *)(puVar21 + 6))) {
                func_0x0d8569b0(*plVar9,puVar21[7],*(undefined4 *)(puVar21 + 8));
              }
              if ((*(byte *)(puVar21 + 2) & 1) != 0) {
                func_0x0412a280(puVar21[4],puVar21[2] & 0xfffffffffffffffe);
              }
              func_0x0412a280(puVar21,0x48);
              puVar21 = puVar18;
            } while (puVar18 != (undefined8 *)0x0);
            return param_3;
          }
          if (puVar21 != puVar18) {
            pbVar1 = (byte *)(puVar21 + 2);
            bVar2 = *(byte *)(puVar18 + 2);
            if ((*pbVar1 & 1) == 0) {
              if ((bVar2 & 1) == 0) {
                puVar21[4] = puVar18[4];
                uVar5 = *(undefined4 *)((long)puVar18 + 0x14);
                uVar6 = *(undefined4 *)(puVar18 + 3);
                uVar7 = *(undefined4 *)((long)puVar18 + 0x1c);
                *(undefined4 *)pbVar1 = *(undefined4 *)(puVar18 + 2);
                *(undefined4 *)((long)puVar21 + 0x14) = uVar5;
                *(undefined4 *)(puVar21 + 3) = uVar6;
                *(undefined4 *)((long)puVar21 + 0x1c) = uVar7;
              }
              else {
                FUN_04885070(pbVar1,puVar18[4],puVar18[3]);
              }
            }
            else {
              bVar22 = (bVar2 & 1) != 0;
              lVar13 = (long)puVar18 + 0x11;
              if (bVar22) {
                lVar13 = puVar18[4];
              }
              uVar20 = (ulong)(bVar2 >> 1);
              if (bVar22) {
                uVar20 = puVar18[3];
              }
              func_0x04885120(pbVar1,lVar13,uVar20);
            }
          }
          plVar9 = (long *)puVar21[5];
          if ((plVar9 != (long *)0x0) && (*plVar9 != 0 && (int)plVar9[1] == *(int *)(puVar21 + 6)))
          {
            func_0x0d8569b0(*plVar9,puVar21[7],*(undefined4 *)(puVar21 + 8));
          }
          plVar9 = (long *)puVar18[5];
          puVar21[5] = plVar9;
          iVar8 = *(int *)(puVar18 + 6);
          *(int *)(puVar21 + 6) = iVar8;
          puVar21[7] = puVar18[7];
          *(undefined1 *)(puVar21 + 8) = *(undefined1 *)(puVar18 + 8);
          if ((plVar9 != (long *)0x0) && (*plVar9 != 0 && (int)plVar9[1] == iVar8)) {
            func_0x0d8568b0(*plVar9,puVar21[7]);
          }
          puVar4 = (undefined8 *)*puVar21;
          func_0x091e1da0(param_2,puVar21);
          puVar18 = (undefined8 *)*puVar18;
          puVar21 = puVar4;
        }
      }
      if (puVar18 != (undefined8 *)0x0) {
        do {
          plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
          if (plVar9 == (long *)0x0) {
            FUN_0eec74c0(0x48,0);
          }
          uStack_50 = 0;
          *plVar9 = 0;
          plVar9[1] = 0;
          plStack_60 = plVar9;
          plStack_58 = param_2;
          if ((*(byte *)(puVar18 + 2) & 1) == 0) {
            plVar9[4] = puVar18[4];
            lVar13 = puVar18[3];
            plVar9[2] = puVar18[2];
            plVar9[3] = lVar13;
          }
          else {
            func_0x0412e5e0(plVar9 + 2,puVar18[4],puVar18[3]);
          }
          plVar17 = (long *)puVar18[5];
          plVar9[5] = (long)plVar17;
          iVar8 = *(int *)(puVar18 + 6);
          *(int *)(plVar9 + 6) = iVar8;
          uVar5 = *(undefined4 *)((long)puVar18 + 0x3c);
          uVar6 = *(undefined4 *)(puVar18 + 8);
          uVar7 = *(undefined4 *)((long)puVar18 + 0x44);
          *(undefined4 *)(plVar9 + 7) = *(undefined4 *)(puVar18 + 7);
          *(undefined4 *)((long)plVar9 + 0x3c) = uVar5;
          *(undefined4 *)(plVar9 + 8) = uVar6;
          *(undefined4 *)((long)plVar9 + 0x44) = uVar7;
          if ((plVar17 != (long *)0x0) && (*plVar17 != 0 && (int)plVar17[1] == iVar8)) {
            func_0x0d8568b0(*plVar17,plVar9[7]);
          }
          uStack_50 = CONCAT71(uStack_50._1_7_,1);
          bVar22 = (*(byte *)(plVar9 + 2) & 1) != 0;
          lVar13 = (long)plVar9 + 0x11;
          if (bVar22) {
            lVar13 = plVar9[4];
          }
          uVar20 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
          if (bVar22) {
            uVar20 = plVar9[3];
          }
          lVar13 = FUN_04883620(&uStack_69,lVar13,uVar20);
          plVar9[1] = lVar13;
          func_0x091e1da0(param_2,plVar9);
          puVar18 = (undefined8 *)*puVar18;
          param_3 = plStack_48;
        } while (puVar18 != (undefined8 *)0x0);
      }
    }
    break;
  case 3:
    if (param_2 != param_3) {
      param_3 = (long *)0x0;
    }
    break;
  case 4:
    param_3[2] = (long)FUN_091e0e90;
    *(undefined4 *)(param_3 + 4) = 0xb6481650;
    param_3[3] = (long)&UNK_091e1cd0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar9 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(plVar9 + 4) = (int)param_2[4];
    uVar20 = param_2[1];
    uVar10 = 2;
    if (uVar20 == 1) {
code_r0x091e0f8e:
      func_0x091e2760(plVar9,uVar10);
    }
    else {
      if ((uVar20 & uVar20 - 1) != 0) {
        uVar10 = func_0x0412c3f0(uVar20,2);
        uVar15 = plVar9[1];
        bVar22 = uVar10 < uVar15;
        if (uVar10 <= uVar15) goto code_r0x091e1a9f;
        goto code_r0x091e0f8e;
      }
      uVar15 = 0;
      bVar22 = false;
      uVar10 = uVar20;
      if (uVar20 != 0) goto code_r0x091e0f8e;
code_r0x091e1a9f:
      if (bVar22) {
        fVar23 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
        uVar20 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
        if ((uVar15 < 3) ||
           (uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
           1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar20 = func_0x0412c3f0(uVar20);
        }
        else if (1 < uVar20) {
          lVar13 = 0x3f;
          if (uVar20 - 1 != 0) {
            for (; uVar20 - 1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar20 = 1L << (-((byte)lVar13 ^ 0x3f) & 0x3f);
        }
        if (uVar20 < uVar10) {
          uVar20 = uVar10;
        }
        uVar10 = uVar20;
        if (uVar20 < uVar15) goto code_r0x091e0f8e;
      }
    }
    plVar17 = (long *)param_2[2];
    if (plVar17 != (long *)0x0) {
      plStack_40 = plVar9 + 2;
code_r0x091e0fc0:
      do {
        lVar13 = (long)plVar17 + 0x11;
        bVar22 = (*(byte *)(plVar17 + 2) & 1) == 0;
        lVar19 = plVar17[4];
        if (bVar22) {
          lVar19 = lVar13;
        }
        uVar20 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
        if (!bVar22) {
          uVar20 = plVar17[3];
        }
        uVar10 = FUN_04883620(&plStack_60,lVar19,uVar20);
        uVar20 = plVar9[1];
        if (uVar20 != 0) {
          uVar15 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar15 >> 0x38 < 2) {
            uVar12 = uVar20 - 1 & uVar10;
          }
          else {
            uVar12 = uVar10;
            if (uVar20 <= uVar10) {
              if ((uVar10 | uVar20) >> 0x20 == 0) {
                uVar12 = (uVar10 & 0xffffffff) % (uVar20 & 0xffffffff);
              }
              else {
                uVar12 = uVar10 % uVar20;
              }
            }
          }
          plVar11 = *(long **)(*plVar9 + uVar12 * 8);
          uStack_68 = uVar12;
          if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
            if ((*(byte *)(plVar17 + 2) & 1) == 0) {
              uVar16 = (ulong)(*(byte *)(plVar17 + 2) >> 1);
            }
            else {
              uVar16 = plVar17[3];
              lVar13 = plVar17[4];
            }
            if ((byte)(uVar15 >> 0x38) < 2) {
              uVar15 = uVar20 - 1;
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
                    uVar12 = uStack_68;
                    if (iVar8 == 0) goto code_r0x091e1220;
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
                    uVar12 = uStack_68;
                    if (iVar8 == 0) goto code_r0x091e1220;
                  }
                }
                else {
                  if (uVar20 <= uVar15) {
                    if ((uVar15 | uVar20) >> 0x20 == 0) {
                      uVar15 = (uVar15 & 0xffffffff) % (uVar20 & 0xffffffff);
                    }
                    else {
                      uVar15 = uVar15 % uVar20;
                    }
                  }
                  if (uVar15 != uVar12) break;
                }
                plVar11 = (long *)*plVar11;
              } while (plVar11 != (long *)0x0);
            }
          }
        }
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (plVar11 == (long *)0x0) {
          FUN_0eec74c0(0x48,0);
        }
        uStack_50 = 0;
        *plVar11 = 0;
        plVar11[1] = uVar10;
        plStack_60 = plVar11;
        plStack_58 = plVar9;
        if ((*(byte *)(plVar17 + 2) & 1) == 0) {
          plVar11[4] = plVar17[4];
          lVar13 = plVar17[3];
          plVar11[2] = plVar17[2];
          plVar11[3] = lVar13;
        }
        else {
          func_0x0412e5e0(plVar11 + 2,plVar17[4],plVar17[3]);
        }
        plVar3 = (long *)plVar17[5];
        plVar11[5] = (long)plVar3;
        lVar13 = plVar17[6];
        *(int *)(plVar11 + 6) = (int)lVar13;
        uVar5 = *(undefined4 *)((long)plVar17 + 0x3c);
        lVar19 = plVar17[8];
        uVar6 = *(undefined4 *)((long)plVar17 + 0x44);
        *(int *)(plVar11 + 7) = (int)plVar17[7];
        *(undefined4 *)((long)plVar11 + 0x3c) = uVar5;
        *(int *)(plVar11 + 8) = (int)lVar19;
        *(undefined4 *)((long)plVar11 + 0x44) = uVar6;
        if ((plVar3 != (long *)0x0) && (*plVar3 != 0 && (int)plVar3[1] == (int)lVar13)) {
          func_0x0d8568b0(*plVar3,plVar11[7]);
        }
        uStack_50 = CONCAT71(uStack_50._1_7_,1);
        if ((long)uVar20 < 0) {
          fVar24 = (float)uVar20;
          fVar23 = *(float *)(plVar9 + 4);
          if (uVar20 != 0) goto code_r0x091e1382;
code_r0x091e13a0:
          uVar15 = 1;
          if (2 < uVar20) {
            uVar15 = (ulong)((uVar20 & uVar20 - 1) != 0);
          }
          uVar15 = uVar20 * 2 | uVar15;
          fVar23 = (float)func_0x0eee3ab0((float)(plVar9[3] + 1) / fVar23);
          uVar20 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
          if (uVar20 < uVar15) {
            uVar20 = uVar15;
          }
          uVar15 = 2;
          if ((uVar20 == 1) || (uVar15 = uVar20, (uVar20 & uVar20 - 1) == 0)) {
            uVar20 = plVar9[1];
            bVar22 = uVar15 < uVar20;
            if (uVar15 <= uVar20) goto code_r0x091e1430;
code_r0x091e140e:
            func_0x091e2760(plVar9,uVar15);
          }
          else {
            uVar15 = func_0x0412c3f0();
            uVar20 = plVar9[1];
            bVar22 = uVar15 < uVar20;
            if (uVar20 < uVar15) goto code_r0x091e140e;
code_r0x091e1430:
            if (bVar22) {
              fVar23 = (float)func_0x0eee3ab0((float)(ulong)plVar9[3] / *(float *)(plVar9 + 4));
              uVar12 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
              if ((uVar20 < 3) ||
                 (uVar16 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
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
              if (uVar15 < uVar20) goto code_r0x091e140e;
            }
          }
          uVar20 = plVar9[1];
          if ((uVar20 & uVar20 - 1) == 0) {
            uVar15 = uVar10 & uVar20 - 1;
          }
          else {
            uVar15 = uVar10;
            if (uVar20 <= uVar10) {
              if ((uVar10 | uVar20) >> 0x20 == 0) {
                uVar15 = (uVar10 & 0xffffffff) % (uVar20 & 0xffffffff);
              }
              else {
                uVar15 = uVar10 % uVar20;
              }
            }
          }
        }
        else {
          fVar24 = (float)(long)uVar20;
          fVar23 = *(float *)(plVar9 + 4);
          if (uVar20 == 0) goto code_r0x091e13a0;
code_r0x091e1382:
          uVar15 = uStack_68;
          if (fVar24 * fVar23 < (float)(plVar9[3] + 1)) goto code_r0x091e13a0;
        }
        lVar13 = *plVar9;
        plVar3 = *(long **)(lVar13 + uVar15 * 8);
        if (plVar3 == (long *)0x0) {
          *plVar11 = *plStack_40;
          *plStack_40 = (long)plVar11;
          *(long **)(lVar13 + uVar15 * 8) = plStack_40;
          if (*plVar11 != 0) {
            uVar10 = *(ulong *)(*plVar11 + 8);
            if ((uVar20 & uVar20 - 1) == 0) {
              *(long **)(lVar13 + (uVar10 & uVar20 - 1) * 8) = plVar11;
            }
            else {
              if (uVar20 <= uVar10) {
                if ((uVar10 | uVar20) >> 0x20 == 0) {
                  *(long **)(lVar13 + ((uVar10 & 0xffffffff) % (uVar20 & 0xffffffff)) * 8) = plVar11
                  ;
                  goto code_r0x091e1597;
                }
                uVar10 = uVar10 % uVar20;
              }
              *(long **)(lVar13 + uVar10 * 8) = plVar11;
            }
          }
        }
        else {
          *plVar11 = *plVar3;
          *plVar3 = (long)plVar11;
        }
code_r0x091e1597:
        plVar9[3] = plVar9[3] + 1;
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
code_r0x091e1a43:
    *plStack_48 = (long)plVar9;
  default:
    param_3 = (long *)0x0;
  }
  return param_3;
code_r0x091e1220:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto code_r0x091e1a43;
  goto code_r0x091e0fc0;
}


