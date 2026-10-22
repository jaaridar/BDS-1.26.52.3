/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2b40a0 (ELF vaddr 0xd1b40a0)
 * Label: caller-of-callee
 * Body:  [[0d2b40a0, 0d2b40ce] [0d2b4b17, 0d2b4b1e] [0d2b4c77, 0d2b4c88]]
 * Ghidra: FUN_0d2b40a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2b40a0(uint param_1,undefined8 *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 uStack_69;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (param_1 < 5) {
    plVar16 = (long *)*param_2;
    plStack_50 = param_3;
    switch(param_1) {
    case 0:
      param_3 = (long *)0xf707bf8;
      if ((cRam000000000f707c10 == '\0') && (iVar7 = func_0x04108328(0xf707c10), iVar7 != 0)) {
        func_0x0ce749f0(0xf707bf8);
        func_0x0410844d(0xf707c10);
        param_3 = (long *)0xf707bf8;
      }
      break;
    case 1:
      if (plVar16[3] != 0) {
        puVar17 = (undefined8 *)plVar16[2];
        while (puVar17 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)*puVar17;
          func_0x0c8f6c60(puVar17 + 5);
          if ((*(byte *)(puVar17 + 2) & 1) != 0) {
            func_0x0412a280(puVar17[4],puVar17[2] & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar17,0xa8);
          puVar17 = puVar20;
        }
        plVar16[2] = 0;
        if (plVar16[1] != 0) {
          func_0x0eee2dd0(*plVar16,0,plVar16[1] << 3);
        }
        plVar16[3] = 0;
      }
      lVar12 = *param_3;
      *param_3 = 0;
      lVar18 = *plVar16;
      *plVar16 = lVar12;
      if (lVar18 != 0) {
        func_0x0412a280(lVar18,plVar16[1] << 3);
      }
      plVar16[1] = param_3[1];
      param_3[1] = 0;
      lVar12 = param_3[3];
      plVar16[3] = lVar12;
      *(int *)(plVar16 + 4) = (int)param_3[4];
      lVar18 = param_3[2];
      plVar16[2] = lVar18;
      if (lVar12 != 0) {
        uVar19 = *(ulong *)(lVar18 + 8);
        uVar9 = plVar16[1];
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar19 = uVar19 & uVar9 - 1;
        }
        else if (uVar9 <= uVar19) {
          if ((uVar19 | uVar9) >> 0x20 == 0) {
            uVar19 = (uVar19 & 0xffffffff) % (uVar9 & 0xffffffff);
          }
          else {
            uVar19 = uVar19 % uVar9;
          }
        }
        *(long **)(*plVar16 + uVar19 * 8) = plVar16 + 2;
        param_3[2] = 0;
        param_3[3] = 0;
      }
      break;
    case 2:
      if (plVar16 != param_3) {
        *(int *)(plVar16 + 4) = (int)param_3[4];
        puVar17 = (undefined8 *)param_3[2];
        if (plVar16[1] != 0) {
          func_0x0eee2dd0(*plVar16,0,plVar16[1] << 3);
          puVar20 = (undefined8 *)plVar16[2];
          plVar16[2] = 0;
          plVar16[3] = 0;
          while (puVar20 != (undefined8 *)0x0) {
            if (puVar17 == (undefined8 *)0x0) {
              do {
                puVar17 = (undefined8 *)*puVar20;
                func_0x0c8f6c60(puVar20 + 5);
                if ((*(byte *)(puVar20 + 2) & 1) != 0) {
                  func_0x0412a280(puVar20[4],puVar20[2] & 0xfffffffffffffffe);
                }
                func_0x0412a280(puVar20,0xa8);
                puVar20 = puVar17;
              } while (puVar17 != (undefined8 *)0x0);
              return param_3;
            }
            if (puVar20 != puVar17) {
              pbVar1 = (byte *)(puVar20 + 2);
              bVar2 = *(byte *)(puVar17 + 2);
              if ((*pbVar1 & 1) == 0) {
                if ((bVar2 & 1) == 0) {
                  puVar20[4] = puVar17[4];
                  uVar4 = *(undefined4 *)((long)puVar17 + 0x14);
                  uVar5 = *(undefined4 *)(puVar17 + 3);
                  uVar6 = *(undefined4 *)((long)puVar17 + 0x1c);
                  *(undefined4 *)pbVar1 = *(undefined4 *)(puVar17 + 2);
                  *(undefined4 *)((long)puVar20 + 0x14) = uVar4;
                  *(undefined4 *)(puVar20 + 3) = uVar5;
                  *(undefined4 *)((long)puVar20 + 0x1c) = uVar6;
                }
                else {
                  func_0x04885070(pbVar1,puVar17[4],puVar17[3]);
                }
              }
              else {
                bVar21 = (bVar2 & 1) != 0;
                lVar12 = (long)puVar17 + 0x11;
                if (bVar21) {
                  lVar12 = puVar17[4];
                }
                uVar19 = (ulong)(bVar2 >> 1);
                if (bVar21) {
                  uVar19 = puVar17[3];
                }
                func_0x04885120(pbVar1,lVar12,uVar19);
              }
            }
            func_0x0c8fa570(puVar20 + 5,puVar17 + 5);
            puVar3 = (undefined8 *)*puVar20;
            func_0x0d2b4e80(plVar16,puVar20);
            puVar17 = (undefined8 *)*puVar17;
            puVar20 = puVar3;
          }
        }
        if (puVar17 != (undefined8 *)0x0) {
          do {
            plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
            if (plVar8 == (long *)0x0) {
              func_0x0eec74c0(0xa8,0);
            }
            uStack_58 = 0;
            *plVar8 = 0;
            plVar8[1] = 0;
            plStack_68 = plVar8;
            plStack_60 = plVar16;
            if ((*(byte *)(puVar17 + 2) & 1) == 0) {
              plVar8[4] = puVar17[4];
              uVar4 = *(undefined4 *)((long)puVar17 + 0x14);
              uVar5 = *(undefined4 *)(puVar17 + 3);
              uVar6 = *(undefined4 *)((long)puVar17 + 0x1c);
              *(undefined4 *)(plVar8 + 2) = *(undefined4 *)(puVar17 + 2);
              *(undefined4 *)((long)plVar8 + 0x14) = uVar4;
              *(undefined4 *)(plVar8 + 3) = uVar5;
              *(undefined4 *)((long)plVar8 + 0x1c) = uVar6;
            }
            else {
              func_0x0412e5e0(plVar8 + 2,puVar17[4],puVar17[3]);
            }
            func_0x0d2b57d0(plVar8 + 5,puVar17 + 5);
            uStack_58 = CONCAT71(uStack_58._1_7_,1);
            bVar21 = (*(byte *)(plVar8 + 2) & 1) != 0;
            lVar12 = (long)plVar8 + 0x11;
            if (bVar21) {
              lVar12 = plVar8[4];
            }
            uVar19 = (ulong)(*(byte *)(plVar8 + 2) >> 1);
            if (bVar21) {
              uVar19 = plVar8[3];
            }
            lVar12 = func_0x04883620(&uStack_69,lVar12,uVar19);
            plVar8[1] = lVar12;
            func_0x0d2b4e80(plVar16,plStack_68);
            puVar17 = (undefined8 *)*puVar17;
            param_3 = plStack_50;
          } while (puVar17 != (undefined8 *)0x0);
        }
      }
      break;
    case 3:
      if (plVar16 != param_3) {
        param_3 = (long *)0x0;
      }
      break;
    case 4:
      param_3[1] = (long)FUN_0d2b40a0;
      *(undefined4 *)(param_3 + 3) = 0xb90fe384;
      param_3[2] = (long)&UNK_0d2b4d80;
      *(undefined1 *)((long)param_3 + 0x1c) = 1;
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      plVar8[2] = 0;
      plVar8[3] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      *(int *)(plVar8 + 4) = (int)plVar16[4];
      uVar19 = plVar16[1];
      uVar9 = 2;
      if (uVar19 == 1) {
code_r0x0d2b41a3:
        func_0x0cbae640(plVar8,uVar9);
      }
      else {
        if ((uVar19 & uVar19 - 1) != 0) {
          uVar9 = func_0x0412c3f0(uVar19,2);
          uVar14 = plVar8[1];
          bVar21 = uVar9 < uVar14;
          if (uVar9 <= uVar14) goto code_r0x0d2b4b67;
          goto code_r0x0d2b41a3;
        }
        uVar14 = 0;
        bVar21 = false;
        uVar9 = uVar19;
        if (uVar19 != 0) goto code_r0x0d2b41a3;
code_r0x0d2b4b67:
        if (bVar21) {
          fVar22 = (float)func_0x0eee3ab0((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
          uVar19 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
          if ((uVar14 < 3) ||
             (uVar11 = uVar14 - (uVar14 >> 1 & 0x5555555555555555),
             uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
             1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar19 = func_0x0412c3f0(uVar19);
          }
          else if (1 < uVar19) {
            lVar12 = 0x3f;
            if (uVar19 - 1 != 0) {
              for (; uVar19 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar19 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
          }
          if (uVar19 < uVar9) {
            uVar19 = uVar9;
          }
          uVar9 = uVar19;
          if (uVar19 < uVar14) goto code_r0x0d2b41a3;
        }
      }
      plVar16 = (long *)plVar16[2];
      if (plVar16 != (long *)0x0) {
        plStack_40 = plVar8 + 2;
code_r0x0d2b41d0:
        do {
          lVar12 = (long)plVar16 + 0x11;
          bVar21 = (*(byte *)(plVar16 + 2) & 1) == 0;
          lVar18 = plVar16[4];
          if (bVar21) {
            lVar18 = lVar12;
          }
          uVar19 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
          if (!bVar21) {
            uVar19 = plVar16[3];
          }
          uVar9 = func_0x04883620(&plStack_68,lVar18,uVar19);
          uVar19 = plVar8[1];
          if (uVar19 != 0) {
            uVar14 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
            uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar14 >> 0x38 < 2) {
              uVar11 = uVar19 - 1 & uVar9;
            }
            else {
              uVar11 = uVar9;
              if (uVar19 <= uVar9) {
                if ((uVar9 | uVar19) >> 0x20 == 0) {
                  uVar11 = (uVar9 & 0xffffffff) % (uVar19 & 0xffffffff);
                }
                else {
                  uVar11 = uVar9 % uVar19;
                }
              }
            }
            plVar10 = *(long **)(*plVar8 + uVar11 * 8);
            uStack_48 = uVar11;
            if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
              if ((*(byte *)(plVar16 + 2) & 1) == 0) {
                uVar15 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
              }
              else {
                uVar15 = plVar16[3];
                lVar12 = plVar16[4];
              }
              if ((byte)(uVar14 >> 0x38) < 2) {
                uVar14 = uVar19 - 1;
                uStack_38 = uVar14;
                do {
                  if (plVar10[1] == uVar9) {
                    bVar2 = *(byte *)(plVar10 + 2);
                    if ((bVar2 & 1) == 0) {
                      uVar13 = (ulong)(bVar2 >> 1);
                    }
                    else {
                      uVar13 = plVar10[3];
                    }
                    if (uVar13 == uVar15) {
                      if ((bVar2 & 1) == 0) {
                        lVar18 = (long)plVar10 + 0x11;
                      }
                      else {
                        lVar18 = plVar10[4];
                      }
                      iVar7 = func_0x0eee3000(lVar18,lVar12,uVar15);
                      uVar14 = uStack_38;
                      uVar11 = uStack_48;
                      if (iVar7 == 0) goto code_r0x0d2b4400;
                    }
                  }
                  else if ((plVar10[1] & uVar14) != uVar11) break;
                  plVar10 = (long *)*plVar10;
                } while (plVar10 != (long *)0x0);
              }
              else {
                do {
                  uVar14 = plVar10[1];
                  if (uVar14 == uVar9) {
                    bVar2 = *(byte *)(plVar10 + 2);
                    if ((bVar2 & 1) == 0) {
                      uVar14 = (ulong)(bVar2 >> 1);
                    }
                    else {
                      uVar14 = plVar10[3];
                    }
                    if (uVar14 == uVar15) {
                      if ((bVar2 & 1) == 0) {
                        lVar18 = (long)plVar10 + 0x11;
                      }
                      else {
                        lVar18 = plVar10[4];
                      }
                      iVar7 = func_0x0eee3000(lVar18,lVar12,uVar15);
                      uVar11 = uStack_48;
                      if (iVar7 == 0) goto code_r0x0d2b4400;
                    }
                  }
                  else {
                    if (uVar19 <= uVar14) {
                      if ((uVar14 | uVar19) >> 0x20 == 0) {
                        uVar14 = (uVar14 & 0xffffffff) % (uVar19 & 0xffffffff);
                      }
                      else {
                        uVar14 = uVar14 % uVar19;
                      }
                    }
                    if (uVar14 != uVar11) break;
                  }
                  plVar10 = (long *)*plVar10;
                } while (plVar10 != (long *)0x0);
              }
            }
          }
          plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
          if (plVar10 == (long *)0x0) {
            func_0x0eec74c0(0xa8,0);
          }
          uStack_58 = 0;
          *plVar10 = 0;
          plVar10[1] = uVar9;
          plStack_68 = plVar10;
          plStack_60 = plVar8;
          if ((*(byte *)(plVar16 + 2) & 1) == 0) {
            plVar10[4] = plVar16[4];
            uVar4 = *(undefined4 *)((long)plVar16 + 0x14);
            lVar12 = plVar16[3];
            uVar5 = *(undefined4 *)((long)plVar16 + 0x1c);
            *(undefined4 *)(plVar10 + 2) = *(undefined4 *)(plVar16 + 2);
            *(undefined4 *)((long)plVar10 + 0x14) = uVar4;
            *(int *)(plVar10 + 3) = (int)lVar12;
            *(undefined4 *)((long)plVar10 + 0x1c) = uVar5;
          }
          else {
            func_0x0412e5e0(plVar10 + 2,plVar16[4],plVar16[3]);
          }
          func_0x0d2b57d0(plVar10 + 5,plVar16 + 5);
          uStack_58 = CONCAT71(uStack_58._1_7_,1);
          if ((long)uVar19 < 0) {
            fVar23 = (float)uVar19;
            fVar22 = *(float *)(plVar8 + 4);
            if (uVar19 != 0) goto code_r0x0d2b4520;
code_r0x0d2b4540:
            uVar14 = 1;
            if (2 < uVar19) {
              uVar14 = (ulong)((uVar19 & uVar19 - 1) != 0);
            }
            uVar14 = uVar19 * 2 | uVar14;
            fVar22 = (float)func_0x0eee3ab0((float)(plVar8[3] + 1) / fVar22);
            uVar19 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
            if (uVar19 < uVar14) {
              uVar19 = uVar14;
            }
            uVar14 = 2;
            if ((uVar19 == 1) || (uVar14 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
              uVar19 = plVar8[1];
              bVar21 = uVar14 < uVar19;
              if (uVar14 <= uVar19) goto code_r0x0d2b45ce;
code_r0x0d2b45ad:
              func_0x0cbae640(plVar8,uVar14);
            }
            else {
              uVar14 = func_0x0412c3f0();
              uVar19 = plVar8[1];
              bVar21 = uVar14 < uVar19;
              if (uVar19 < uVar14) goto code_r0x0d2b45ad;
code_r0x0d2b45ce:
              if (bVar21) {
                fVar22 = (float)func_0x0eee3ab0((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
                uVar11 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
                if ((uVar19 < 3) ||
                   (uVar15 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
                   uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
                   1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar11 = func_0x0412c3f0(uVar11);
                }
                else if (1 < uVar11) {
                  lVar12 = 0x3f;
                  if (uVar11 - 1 != 0) {
                    for (; uVar11 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                    }
                  }
                  uVar11 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
                }
                if (uVar14 <= uVar11) {
                  uVar14 = uVar11;
                }
                if (uVar14 < uVar19) goto code_r0x0d2b45ad;
              }
            }
            uVar19 = plVar8[1];
            if ((uVar19 & uVar19 - 1) == 0) {
              uVar14 = uVar9 & uVar19 - 1;
            }
            else {
              uVar14 = uVar9;
              if (uVar19 <= uVar9) {
                if ((uVar9 | uVar19) >> 0x20 == 0) {
                  uVar14 = (uVar9 & 0xffffffff) % (uVar19 & 0xffffffff);
                }
                else {
                  uVar14 = uVar9 % uVar19;
                }
              }
            }
          }
          else {
            fVar23 = (float)(long)uVar19;
            fVar22 = *(float *)(plVar8 + 4);
            if (uVar19 == 0) goto code_r0x0d2b4540;
code_r0x0d2b4520:
            uVar14 = uStack_48;
            if (fVar23 * fVar22 < (float)(plVar8[3] + 1)) goto code_r0x0d2b4540;
          }
          lVar12 = *plVar8;
          plVar10 = *(long **)(lVar12 + uVar14 * 8);
          if (plVar10 == (long *)0x0) {
            *plStack_68 = *plStack_40;
            *plStack_40 = (long)plStack_68;
            *(long **)(lVar12 + uVar14 * 8) = plStack_40;
            if (*plStack_68 != 0) {
              uVar9 = *(ulong *)(*plStack_68 + 8);
              if ((uVar19 & uVar19 - 1) == 0) {
                *(long **)(lVar12 + (uVar9 & uVar19 - 1) * 8) = plStack_68;
              }
              else {
                if (uVar19 <= uVar9) {
                  if ((uVar9 | uVar19) >> 0x20 == 0) {
                    *(long **)(lVar12 + ((uVar9 & 0xffffffff) % (uVar19 & 0xffffffff)) * 8) =
                         plStack_68;
                    goto code_r0x0d2b473b;
                  }
                  uVar9 = uVar9 % uVar19;
                }
                *(long **)(lVar12 + uVar9 * 8) = plStack_68;
              }
            }
          }
          else {
            *plStack_68 = *plVar10;
            *plVar10 = (long)plStack_68;
          }
code_r0x0d2b473b:
          plVar8[3] = plVar8[3] + 1;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
code_r0x0d2b4b0f:
      *plStack_50 = (long)plVar8;
      goto LAB_0d2b4b17;
    }
  }
  else {
LAB_0d2b4b17:
    param_3 = (long *)0x0;
  }
  return param_3;
code_r0x0d2b4400:
  plVar16 = (long *)*plVar16;
  if (plVar16 == (long *)0x0) goto code_r0x0d2b4b0f;
  goto code_r0x0d2b41d0;
}


