/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x69bfdf0 (ELF vaddr 0x68bfdf0)
 * Label: caller-of-callee
 * Body:  [[069bfdf0, 069bfe27] [069c098e, 069c09a1]]
 * Ghidra: FUN_069bfdf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_069bfdf0(undefined4 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_71 [9];
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
    if (cRam000000000f58f418 != '\0') {
      return (long *)0xf58f400;
    }
    iVar10 = FUN_04108328(0xf58f418);
    if (iVar10 != 0) {
      func_0x069bfb40();
      func_0x0410844d(0xf58f418);
      return (long *)0xf58f400;
    }
    return (long *)0xf58f400;
  case 1:
    if (param_2[3] != 0) {
      puVar19 = (undefined8 *)param_2[2];
      while (puVar19 != (undefined8 *)0x0) {
        puVar24 = (undefined8 *)*puVar19;
        if ((*(byte *)(puVar19 + 2) & 1) != 0) {
          func_0x0412a280(puVar19[4],puVar19[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar19,0x38);
        puVar19 = puVar24;
      }
      param_2[2] = 0;
      if (param_2[1] != 0) {
        memset(*param_2,0,param_2[1] << 3);
      }
      param_2[3] = 0;
    }
    lVar15 = *param_3;
    *param_3 = 0;
    lVar20 = *param_2;
    *param_2 = lVar15;
    if (lVar20 != 0) {
      func_0x0412a280(lVar20,param_2[1] << 3);
    }
    param_2[1] = param_3[1];
    param_3[1] = 0;
    lVar15 = param_3[3];
    param_2[3] = lVar15;
    *(int *)(param_2 + 4) = (int)param_3[4];
    lVar20 = param_3[2];
    param_2[2] = lVar20;
    if (lVar15 != 0) {
      uVar22 = *(ulong *)(lVar20 + 8);
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
      return param_3;
    }
    return param_3;
  case 2:
    if (param_2 == param_3) {
      return param_3;
    }
    *(int *)(param_2 + 4) = (int)param_3[4];
    puVar19 = (undefined8 *)param_3[2];
    if (param_2[1] != 0) {
      memset(*param_2,0,param_2[1] << 3);
      puVar24 = (undefined8 *)param_2[2];
      param_2[2] = 0;
      param_2[3] = 0;
      while (puVar24 != (undefined8 *)0x0) {
        if (puVar19 == (undefined8 *)0x0) {
          do {
            puVar19 = (undefined8 *)*puVar24;
            if ((*(byte *)(puVar24 + 2) & 1) != 0) {
              func_0x0412a280(puVar24[4],puVar24[2] & 0xfffffffffffffffe);
            }
            func_0x0412a280(puVar24,0x38);
            puVar24 = puVar19;
          } while (puVar19 != (undefined8 *)0x0);
          return param_3;
        }
        if (puVar24 != puVar19) {
          pbVar1 = (byte *)(puVar24 + 2);
          bVar2 = *(byte *)(puVar19 + 2);
          if ((*pbVar1 & 1) == 0) {
            if ((bVar2 & 1) == 0) {
              puVar24[4] = puVar19[4];
              uVar6 = *(undefined4 *)((long)puVar19 + 0x14);
              uVar7 = *(undefined4 *)(puVar19 + 3);
              uVar8 = *(undefined4 *)((long)puVar19 + 0x1c);
              *(undefined4 *)pbVar1 = *(undefined4 *)(puVar19 + 2);
              *(undefined4 *)((long)puVar24 + 0x14) = uVar6;
              *(undefined4 *)(puVar24 + 3) = uVar7;
              *(undefined4 *)((long)puVar24 + 0x1c) = uVar8;
            }
            else {
              func_0x04885070(pbVar1,puVar19[4],puVar19[3]);
            }
          }
          else {
            bVar25 = (bVar2 & 1) != 0;
            lVar15 = (long)puVar19 + 0x11;
            if (bVar25) {
              lVar15 = puVar19[4];
            }
            uVar22 = (ulong)(bVar2 >> 1);
            if (bVar25) {
              uVar22 = puVar19[3];
            }
            FUN_04885120(pbVar1,lVar15,uVar22);
          }
        }
        *(undefined1 *)(puVar24 + 6) = *(undefined1 *)(puVar19 + 6);
        puVar24[5] = puVar19[5];
        puVar5 = (undefined8 *)*puVar24;
        func_0x069c0c90(param_2,puVar24);
        puVar19 = (undefined8 *)*puVar19;
        puVar24 = puVar5;
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      do {
        plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar14 == (long *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uStack_58 = 0;
        *plVar14 = 0;
        plVar14[1] = 0;
        plStack_68 = plVar14;
        plStack_60 = param_2;
        if ((*(byte *)(puVar19 + 2) & 1) == 0) {
          plVar14[4] = puVar19[4];
          uVar6 = *(undefined4 *)((long)puVar19 + 0x14);
          uVar7 = *(undefined4 *)(puVar19 + 3);
          uVar8 = *(undefined4 *)((long)puVar19 + 0x1c);
          *(undefined4 *)(plVar14 + 2) = *(undefined4 *)(puVar19 + 2);
          *(undefined4 *)((long)plVar14 + 0x14) = uVar6;
          *(undefined4 *)(plVar14 + 3) = uVar7;
          *(undefined4 *)((long)plVar14 + 0x1c) = uVar8;
        }
        else {
          func_0x0412e5e0(plVar14 + 2,puVar19[4],puVar19[3]);
        }
        *(undefined4 *)(plVar14 + 6) = *(undefined4 *)(puVar19 + 6);
        plVar14[5] = puVar19[5];
        uStack_58 = CONCAT71(uStack_58._1_7_,1);
        bVar25 = (*(byte *)(plVar14 + 2) & 1) != 0;
        lVar15 = (long)plVar14 + 0x11;
        if (bVar25) {
          lVar15 = plVar14[4];
        }
        uVar22 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
        if (bVar25) {
          uVar22 = plVar14[3];
        }
        lVar15 = func_0x04883620(auStack_71,lVar15,uVar22);
        plVar14[1] = lVar15;
        func_0x069c0c90(param_2,plVar14);
        puVar19 = (undefined8 *)*puVar19;
      } while (puVar19 != (undefined8 *)0x0);
      return param_3;
    }
    return param_3;
  case 3:
    if (param_2[3] == param_3[3]) {
      plVar14 = (long *)param_2[2];
      if (plVar14 == (long *)0x0) {
        return param_3;
      }
      while (lVar15 = func_0x069c4c10(param_3,plVar14 + 2), lVar15 != 0) {
        bVar2 = *(byte *)(plVar14 + 2);
        if ((bVar2 & 1) == 0) {
          uVar22 = (ulong)(bVar2 >> 1);
          uVar11 = (ulong)*(byte *)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x10) & 1) != 0) goto code_r0x069c0806;
code_r0x069c07f2:
          uVar17 = uVar11 >> 1;
        }
        else {
          uVar22 = plVar14[3];
          uVar11 = (ulong)*(byte *)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x10) & 1) == 0) goto code_r0x069c07f2;
code_r0x069c0806:
          uVar17 = *(ulong *)(lVar15 + 0x18);
        }
        if (uVar22 != uVar17) {
          return (long *)0x0;
        }
        if ((bVar2 & 1) == 0) {
          lVar20 = (long)plVar14 + 0x11;
          if ((uVar11 & 1) != 0) goto code_r0x069c082f;
code_r0x069c0820:
          lVar21 = lVar15 + 0x11;
        }
        else {
          lVar20 = plVar14[4];
          if ((uVar11 & 1) == 0) goto code_r0x069c0820;
code_r0x069c082f:
          lVar21 = *(long *)(lVar15 + 0x20);
        }
        iVar10 = bcmp(lVar20,lVar21);
        if (iVar10 != 0) {
          return (long *)0x0;
        }
        bVar25 = *(byte *)(plVar14 + 6) == *(byte *)(lVar15 + 0x30);
        if ((*(byte *)(plVar14 + 6) & bVar25) == 1) {
          uVar3 = *(uint *)((long)plVar14 + 0x2c);
          bVar25 = *(uint *)(lVar15 + 0x2c) == uVar3;
          if (!bVar25 || uVar3 == 0xffffffff) goto code_r0x069c07b0;
          plStack_68 = (long *)auStack_71;
          cVar9 = (**(code **)(&UNK_0f061990 + (ulong)uVar3 * 8))
                            (&plStack_68,plVar14 + 5,lVar15 + 0x28);
          if (cVar9 == '\0') {
            return (long *)0x0;
          }
        }
        else {
code_r0x069c07b0:
          if (!bVar25) {
            return (long *)0x0;
          }
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          return param_3;
        }
      }
    }
    break;
  case 4:
    param_3[2] = (long)FUN_069bfdf0;
    *(undefined4 *)(param_3 + 4) = 0x7f12e86;
    param_3[3] = (long)&UNK_069c0bb0;
    *(undefined1 *)((long)param_3 + 0x24) = 1;
    auStack_71._1_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if ((long *)auStack_71._1_8_ == (long *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(long *)(auStack_71._1_8_ + 0x10) = 0;
    *(long *)(auStack_71._1_8_ + 0x18) = 0;
    *(long *)auStack_71._1_8_ = 0;
    *(long *)(auStack_71._1_8_ + 8) = 0;
    *(int *)(auStack_71._1_8_ + 0x20) = (int)param_2[4];
    uVar22 = param_2[1];
    uVar11 = 2;
    if (uVar22 == 1) {
code_r0x069bfeed:
      func_0x069c16b0(auStack_71._1_8_,uVar11);
    }
    else {
      if ((uVar22 & uVar22 - 1) != 0) {
        uVar11 = func_0x0412c3f0(uVar22,2);
        uVar17 = *(ulong *)(auStack_71._1_8_ + 8);
        bVar25 = uVar11 < uVar17;
        if (uVar11 <= uVar17) goto code_r0x069c09e5;
        goto code_r0x069bfeed;
      }
      uVar17 = 0;
      bVar25 = false;
      uVar11 = uVar22;
      if (uVar22 != 0) goto code_r0x069bfeed;
code_r0x069c09e5:
      if (bVar25) {
        fVar26 = (float)func_0x0eee3ab0((float)*(ulong *)(auStack_71._1_8_ + 0x18) /
                                        *(float *)(auStack_71._1_8_ + 0x20));
        uVar22 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
        if ((uVar17 < 3) ||
           (uVar13 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
           uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333),
           1 < (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar22 = func_0x0412c3f0(uVar22);
        }
        else if (1 < uVar22) {
          lVar15 = 0x3f;
          if (uVar22 - 1 != 0) {
            for (; uVar22 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar22 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
        }
        if (uVar22 < uVar11) {
          uVar22 = uVar11;
        }
        uVar11 = uVar22;
        if (uVar22 < uVar17) goto code_r0x069bfeed;
      }
    }
    plVar14 = (long *)param_2[2];
    plStack_48 = param_3;
    if (plVar14 != (long *)0x0) {
      plStack_40 = (long *)(auStack_71._1_8_ + 0x10);
code_r0x069bff20:
      do {
        plVar23 = (long *)auStack_71._1_8_;
        lVar15 = (long)plVar14 + 0x11;
        bVar25 = (*(byte *)(plVar14 + 2) & 1) == 0;
        lVar20 = plVar14[4];
        if (bVar25) {
          lVar20 = lVar15;
        }
        uVar22 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
        if (!bVar25) {
          uVar22 = plVar14[3];
        }
        uVar11 = func_0x04883620(&plStack_68,lVar20,uVar22);
        uVar22 = *(ulong *)((undefined8)plVar23 + 1);
        if (uVar22 != 0) {
          uVar17 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
          uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar17 >> 0x38 < 2) {
            uVar13 = uVar22 - 1 & uVar11;
          }
          else {
            uVar13 = uVar11;
            if (uVar22 <= uVar11) {
              if ((uVar11 | uVar22) >> 0x20 == 0) {
                uVar13 = (uVar11 & 0xffffffff) % (uVar22 & 0xffffffff);
              }
              else {
                uVar13 = uVar11 % uVar22;
              }
            }
          }
          plVar12 = *(long **)(*plVar23 + uVar13 * 8);
          uStack_50 = uVar13;
          if ((plVar12 != (long *)0x0) &&
             (plVar12 = (long *)*plVar12, plVar23 = (long *)auStack_71._1_8_, plVar12 != (long *)0x0
             )) {
            if ((*(byte *)(plVar14 + 2) & 1) == 0) {
              uVar18 = (ulong)(*(byte *)(plVar14 + 2) >> 1);
            }
            else {
              uVar18 = plVar14[3];
              lVar15 = plVar14[4];
            }
            if ((byte)(uVar17 >> 0x38) < 2) {
              uVar17 = uVar22 - 1;
              uStack_38 = uVar17;
              do {
                if (plVar12[1] == uVar11) {
                  bVar2 = *(byte *)(plVar12 + 2);
                  if ((bVar2 & 1) == 0) {
                    uVar16 = (ulong)(bVar2 >> 1);
                  }
                  else {
                    uVar16 = plVar12[3];
                  }
                  if (uVar16 == uVar18) {
                    if ((bVar2 & 1) == 0) {
                      lVar20 = (long)plVar12 + 0x11;
                    }
                    else {
                      lVar20 = plVar12[4];
                    }
                    iVar10 = bcmp(lVar20,lVar15,uVar18);
                    uVar17 = uStack_38;
                    uVar13 = uStack_50;
                    if (iVar10 == 0) goto code_r0x069c0180;
                  }
                }
                else {
                  plVar23 = (long *)auStack_71._1_8_;
                  if ((plVar12[1] & uVar17) != uVar13) break;
                }
                plVar12 = (long *)*plVar12;
                plVar23 = (long *)auStack_71._1_8_;
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
                  if (uVar17 == uVar18) {
                    if ((bVar2 & 1) == 0) {
                      lVar20 = (long)plVar12 + 0x11;
                    }
                    else {
                      lVar20 = plVar12[4];
                    }
                    iVar10 = bcmp(lVar20,lVar15,uVar18);
                    uVar13 = uStack_50;
                    if (iVar10 == 0) goto code_r0x069c0180;
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
                  plVar23 = (long *)auStack_71._1_8_;
                  if (uVar17 != uVar13) break;
                }
                plVar12 = (long *)*plVar12;
                plVar23 = (long *)auStack_71._1_8_;
              } while (plVar12 != (long *)0x0);
            }
          }
        }
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0x38,0);
        }
        uStack_58 = 0;
        *plVar12 = 0;
        plVar12[1] = uVar11;
        plStack_68 = plVar12;
        plStack_60 = plVar23;
        if ((*(byte *)(plVar14 + 2) & 1) == 0) {
          plVar12[4] = plVar14[4];
          lVar15 = plVar14[3];
          plVar12[2] = plVar14[2];
          plVar12[3] = lVar15;
        }
        else {
          func_0x0412e5e0(plVar12 + 2,plVar14[4],plVar14[3]);
        }
        *(int *)(plVar12 + 6) = (int)plVar14[6];
        plVar12[5] = plVar14[5];
        uStack_58 = CONCAT71(uStack_58._1_7_,1);
        if ((long)uVar22 < 0) {
          fVar27 = (float)uVar22;
          fVar26 = *(float *)(plVar23 + 4);
          if (uVar22 != 0) goto code_r0x069c02a2;
code_r0x069c02c0:
          uVar17 = 1;
          if (2 < uVar22) {
            uVar17 = (ulong)((uVar22 & uVar22 - 1) != 0);
          }
          uVar17 = uVar22 * 2 | uVar17;
          fVar26 = (float)func_0x0eee3ab0((float)(plVar23[3] + 1) / fVar26);
          uVar22 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
          if (uVar22 < uVar17) {
            uVar22 = uVar17;
          }
          uVar17 = 2;
          if ((uVar22 == 1) || (uVar17 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
            uVar22 = plVar23[1];
            bVar25 = uVar17 < uVar22;
            if (uVar17 <= uVar22) goto code_r0x069c0350;
code_r0x069c032e:
            func_0x069c16b0(plVar23,uVar17);
          }
          else {
            uVar17 = func_0x0412c3f0();
            uVar22 = plVar23[1];
            bVar25 = uVar17 < uVar22;
            if (uVar22 < uVar17) goto code_r0x069c032e;
code_r0x069c0350:
            if (bVar25) {
              fVar26 = (float)func_0x0eee3ab0((float)(ulong)plVar23[3] / *(float *)(plVar23 + 4));
              uVar13 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
              if ((uVar22 < 3) ||
                 (uVar18 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
                 uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333),
                 1 < (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar13 = func_0x0412c3f0(uVar13);
              }
              else if (1 < uVar13) {
                lVar15 = 0x3f;
                if (uVar13 - 1 != 0) {
                  for (; uVar13 - 1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                uVar13 = 1L << (-((byte)lVar15 ^ 0x3f) & 0x3f);
              }
              if (uVar17 <= uVar13) {
                uVar17 = uVar13;
              }
              if (uVar17 < uVar22) goto code_r0x069c032e;
            }
          }
          uVar22 = plVar23[1];
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
          fVar26 = *(float *)(plVar23 + 4);
          if (uVar22 == 0) goto code_r0x069c02c0;
code_r0x069c02a2:
          uVar17 = uStack_50;
          if (fVar27 * fVar26 < (float)(plVar23[3] + 1)) goto code_r0x069c02c0;
        }
        lVar15 = *plVar23;
        plVar4 = *(long **)(lVar15 + uVar17 * 8);
        if (plVar4 == (long *)0x0) {
          *plVar12 = *plStack_40;
          *plStack_40 = (long)plVar12;
          *(long **)(lVar15 + uVar17 * 8) = plStack_40;
          if (*plVar12 != 0) {
            uVar11 = *(ulong *)(*plVar12 + 8);
            if ((uVar22 & uVar22 - 1) == 0) {
              *(long **)(lVar15 + (uVar11 & uVar22 - 1) * 8) = plVar12;
            }
            else {
              if (uVar22 <= uVar11) {
                if ((uVar11 | uVar22) >> 0x20 == 0) {
                  *(long **)(lVar15 + ((uVar11 & 0xffffffff) % (uVar22 & 0xffffffff)) * 8) = plVar12
                  ;
                  goto code_r0x069c04b7;
                }
                uVar11 = uVar11 % uVar22;
              }
              *(long **)(lVar15 + uVar11 * 8) = plVar12;
            }
          }
        }
        else {
          *plVar12 = *plVar4;
          *plVar4 = (long)plVar12;
        }
code_r0x069c04b7:
        plVar23[3] = plVar23[3] + 1;
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
code_r0x069c0986:
    *plStack_48 = auStack_71._1_8_;
  }
  return (long *)0x0;
code_r0x069c0180:
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) goto code_r0x069c0986;
  goto code_r0x069bff20;
}


