/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca67b50 (ELF vaddr 0xc967b50)
 * Label: Dimension::vslot34
 * Body:  [[0ca67b50, 0ca67c55] [0ca67c60, 0ca67cd9] [0ca67ce0, 0ca67d13] [0ca67d20, 0ca67e24] [0ca67e30, 0ca67e8e] [0ca67e90, 0ca67ea8] [0ca67eb0, 0ca67f37] [0ca67f40, 0ca67f80] [0ca67f90, 0ca682ae] [0ca682b0, 0ca682f3] [0ca68300, 0ca68380] [0ca68390, 0ca6843e] [0ca68440, 0ca684a3] [0ca684b0, 0ca68566] [0ca68570, 0ca686d7] [0ca686e0, 0ca68726] [0ca68730, 0ca687a8] [0ca687c0, 0ca687d6]]
 * Ghidra: wg_Dimension__vslot34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot34(long *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  long lStack_38;
  
  cVar2 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
  if (cVar2 == '\0') {
    plStack_88 = param_1 + 0x5b;
    if (param_1[0x5e] != 0) {
      puVar22 = (undefined8 *)param_1[0x5d];
      while (puVar22 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)*puVar22;
        lVar14 = puVar22[3];
        if (lVar14 != 0) {
          lVar21 = puVar22[4];
          lVar18 = lVar14;
          if (lVar14 != lVar21) {
            do {
              plVar8 = *(long **)(lVar21 + -8);
              *(undefined8 *)(lVar21 + -8) = 0;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 8))();
              }
              lVar21 = lVar21 + -8;
            } while (lVar21 != lVar14);
            lVar18 = puVar22[3];
          }
          puVar22[4] = lVar14;
          func_0x0412a280(lVar18,puVar22[5] - lVar18);
        }
        func_0x0412a280(puVar22,0x30);
        puVar22 = puVar16;
      }
      param_1[0x5d] = 0;
      if (param_1[0x5c] != 0) {
        func_0x0eee2dd0(*plStack_88,0,param_1[0x5c] << 3);
      }
      param_1[0x5e] = 0;
    }
    plStack_a0 = (long *)&UNK_0128229f;
    plStack_98 = (long *)0xd;
    puStack_48 = (undefined8 *)func_0x0d6c97a0(param_2 + 8);
    puVar22 = (undefined8 *)(param_2 + 0x10);
    if (((puStack_48 != puVar22) && (*(int *)(puStack_48 + 0xc) == 9)) &&
       (lVar14 = puStack_48[8], 0 < (int)((ulong)(puStack_48[9] - lVar14) >> 3))) {
      plStack_50 = param_1 + 0x5d;
      lStack_40 = 0;
LAB_0ca67c88:
      plVar8 = *(long **)(lVar14 + lStack_40 * 8);
      cVar2 = (**(code **)(*plVar8 + 0x30))(plVar8);
      if (cVar2 == '\n') {
        plStack_a0 = (long *)&UNK_013374f6;
        plStack_98 = (long *)0x6;
        plVar7 = plVar8 + 1;
        plVar6 = (long *)func_0x0d6c97a0(plVar7,&plStack_a0);
        plVar8 = plVar8 + 2;
        if ((plVar6 == plVar8) || ((int)plVar6[0xc] != 3)) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)plVar6[8];
        }
        plStack_a0 = (long *)&UNK_013a24c5;
        plStack_98 = (long *)0x6;
        plVar6 = (long *)func_0x0d6c97a0(plVar7,&plStack_a0);
        if ((plVar6 == plVar8) || ((int)plVar6[0xc] != 3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)plVar6[8];
        }
        lStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        lVar14 = CONCAT44(iVar3,iVar5);
        uVar10 = (long)iVar5 + 0x9e3779b9;
        puVar23 = (undefined8 *)(uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + (long)iVar3 ^ uVar10);
        puVar16 = (undefined8 *)param_1[0x5c];
        if (puVar16 != (undefined8 *)0x0) {
          uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
          uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
          uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar10 >> 0x38 < 2) {
            puVar22 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar23);
          }
          else {
            puVar22 = puVar23;
            if (puVar16 <= puVar23) {
              puVar22 = (undefined8 *)((ulong)puVar23 % (ulong)puVar16);
            }
          }
          lVar21 = *plStack_88;
          plVar6 = *(long **)(lVar21 + (long)puVar22 * 8);
          if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
            if ((byte)(uVar10 >> 0x38) < 2) {
              do {
                if ((undefined8 *)plVar6[1] == puVar23) {
                  if (plVar6[2] == lVar14) goto LAB_0ca67e4f;
                }
                else if ((undefined8 *)((ulong)plVar6[1] & (long)puVar16 - 1U) != puVar22) break;
                plVar6 = (long *)*plVar6;
              } while (plVar6 != (long *)0x0);
            }
            else {
              do {
                puVar12 = (undefined8 *)plVar6[1];
                if (puVar12 == puVar23) {
                  if (plVar6[2] == lVar14) goto LAB_0ca67e4f;
                }
                else {
                  if (puVar16 <= puVar12) {
                    if (((ulong)puVar12 | (ulong)puVar16) >> 0x20 == 0) {
                      puVar12 = (undefined8 *)
                                (((ulong)puVar12 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
                    }
                    else {
                      puVar12 = (undefined8 *)((ulong)puVar12 % (ulong)puVar16);
                    }
                  }
                  if (puVar12 != puVar22) break;
                }
                plVar6 = (long *)*plVar6;
              } while (plVar6 != (long *)0x0);
            }
          }
        }
        plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (plVar6 == (long *)0x0) {
          func_0x0eec74c0(0x30,0);
        }
        plStack_98 = plStack_88;
        uStack_90 = 1;
        *plVar6 = 0;
        plVar6[1] = (long)puVar23;
        plVar6[2] = lVar14;
        plVar6[3] = 0;
        plVar6[4] = 0;
        plVar6[5] = 0;
        lStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        if ((long)puVar16 < 0) {
          fVar26 = (float)puVar16;
          fVar25 = *(float *)(param_1 + 0x5f);
          if (puVar16 != (undefined8 *)0x0) goto LAB_0ca67fa8;
LAB_0ca67fb5:
          uVar10 = 1;
          if ((undefined8 *)0x2 < puVar16) {
            uVar10 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
          }
          uVar10 = (long)puVar16 * 2 | uVar10;
          plStack_a0 = plVar6;
          fVar25 = (float)ceilf((float)(param_1[0x5e] + 1) / fVar25);
          uVar19 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
          if (uVar19 < uVar10) {
            uVar19 = uVar10;
          }
          uVar10 = 2;
          if ((uVar19 == 1) || (uVar10 = uVar19, (uVar19 & uVar19 - 1) == 0)) {
            uVar19 = param_1[0x5c];
            bVar24 = uVar10 < uVar19;
            if (uVar10 <= uVar19) goto LAB_0ca68055;
LAB_0ca6802a:
            func_0x0ca7d420(plStack_88,uVar10);
          }
          else {
            uVar10 = func_0x0412c3f0();
            uVar19 = param_1[0x5c];
            bVar24 = uVar10 < uVar19;
            if (uVar19 < uVar10) goto LAB_0ca6802a;
LAB_0ca68055:
            if (bVar24) {
              fVar25 = (float)ceilf((float)(ulong)param_1[0x5e] / *(float *)(param_1 + 0x5f));
              uVar15 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
              if ((uVar19 < 3) ||
                 (uVar11 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
                 uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
                 1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                uVar15 = func_0x0412c3f0(uVar15);
              }
              else if (1 < uVar15) {
                lVar21 = 0x3f;
                if (uVar15 - 1 != 0) {
                  for (; uVar15 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                uVar15 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
              }
              if (uVar10 <= uVar15) {
                uVar10 = uVar15;
              }
              if (uVar10 < uVar19) goto LAB_0ca6802a;
            }
          }
          puVar16 = (undefined8 *)param_1[0x5c];
          if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
            puVar22 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar23);
          }
          else {
            puVar22 = puVar23;
            if (puVar16 <= puVar23) {
              puVar22 = (undefined8 *)((ulong)puVar23 % (ulong)puVar16);
            }
          }
        }
        else {
          fVar26 = (float)(long)puVar16;
          fVar25 = *(float *)(param_1 + 0x5f);
          if (puVar16 == (undefined8 *)0x0) goto LAB_0ca67fb5;
LAB_0ca67fa8:
          if (fVar26 * fVar25 < (float)(param_1[0x5e] + 1)) goto LAB_0ca67fb5;
        }
        lVar21 = *plStack_88;
        plVar20 = *(long **)(lVar21 + (long)puVar22 * 8);
        if (plVar20 == (long *)0x0) {
          *plVar6 = *plStack_50;
          *plStack_50 = (long)plVar6;
          *(long **)(lVar21 + (long)puVar22 * 8) = plStack_50;
          if (*plVar6 != 0) {
            puVar22 = *(undefined8 **)(*plVar6 + 8);
            if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
              *(long **)(lVar21 + ((ulong)puVar22 & (long)puVar16 - 1U) * 8) = plVar6;
            }
            else {
              if (puVar16 <= puVar22) {
                if (((ulong)puVar22 | (ulong)puVar16) >> 0x20 == 0) {
                  *(long **)(lVar21 + (((ulong)puVar22 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)
                                      ) * 8) = plVar6;
                  goto LAB_0ca681af;
                }
                puVar22 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
              }
              *(long **)(lVar21 + (long)puVar22 * 8) = plVar6;
            }
          }
        }
        else {
          *plVar6 = *plVar20;
          *plVar20 = (long)plVar6;
        }
LAB_0ca681af:
        param_1[0x5e] = param_1[0x5e] + 1;
        puVar16 = (undefined8 *)param_1[0x5c];
        goto joined_r0x0ca67e5e;
      }
      goto LAB_0ca67c60;
    }
  }
  return;
LAB_0ca67e4f:
  puVar16 = (undefined8 *)param_1[0x5c];
joined_r0x0ca67e5e:
  if (puVar16 != (undefined8 *)0x0) {
    uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      puVar12 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar23);
    }
    else {
      puVar12 = puVar23;
      if (puVar16 <= puVar23) {
        puVar12 = (undefined8 *)((ulong)puVar23 % (ulong)puVar16);
      }
    }
    puVar22 = *(undefined8 **)(lVar21 + (long)puVar12 * 8);
    if ((puVar22 != (undefined8 *)0x0) &&
       (puVar22 = (undefined8 *)*puVar22, puVar22 != (undefined8 *)0x0)) {
      if ((byte)(uVar10 >> 0x38) < 2) {
        do {
          if ((undefined8 *)puVar22[1] == puVar23) {
            if (puVar22[2] == lVar14) goto LAB_0ca68323;
          }
          else if ((undefined8 *)((ulong)puVar22[1] & (long)puVar16 - 1U) != puVar12) break;
          puVar22 = (undefined8 *)*puVar22;
        } while (puVar22 != (undefined8 *)0x0);
      }
      else {
        do {
          puVar13 = (undefined8 *)puVar22[1];
          if (puVar13 == puVar23) {
            if (puVar22[2] == lVar14) goto LAB_0ca68323;
          }
          else {
            if (puVar16 <= puVar13) {
              if (((ulong)puVar13 | (ulong)puVar16) >> 0x20 == 0) {
                if ((undefined8 *)(((ulong)puVar13 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) ==
                    puVar12) goto LAB_0ca682b6;
                break;
              }
              puVar13 = (undefined8 *)((ulong)puVar13 % (ulong)puVar16);
            }
            if (puVar13 != puVar12) break;
          }
LAB_0ca682b6:
          puVar22 = (undefined8 *)*puVar22;
        } while (puVar22 != (undefined8 *)0x0);
      }
    }
  }
  puVar22 = (undefined8 *)0x0;
LAB_0ca68323:
  plStack_a0 = (long *)&UNK_011ca5f4;
  plStack_98 = (long *)0xd;
  plVar7 = (long *)func_0x0d6c9880(plVar7,&plStack_a0);
  if (((plVar7 != plVar8) && ((int)plVar7[0xc] == 9)) &&
     (lVar14 = plVar7[8], 0 < (int)((ulong)(plVar7[9] - lVar14) >> 3))) {
    lVar21 = 0;
    plStack_80 = plVar7;
    puStack_70 = puVar22;
    do {
      uVar9 = *(undefined8 *)(lVar14 + lVar21 * 8);
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar8 = (long)&UNK_0f47e0b0;
      plVar7 = plVar8 + 2;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[1] = (long)plVar7;
      func_0x0d6bd5f0(plVar8,uVar9);
      plVar6 = (long *)*plVar7;
      lStack_78 = lVar21;
      if (plVar6 == (long *)0x0) {
LAB_0ca68570:
        cVar2 = '\0';
LAB_0ca68572:
        (**(code **)(*param_1 + 0x180))(param_1,plVar8,(int)cVar2);
      }
      else {
        plVar20 = plVar7;
        do {
          bVar24 = (*(byte *)(plVar6 + 4) & 1) != 0;
          lVar14 = (long)plVar6 + 0x21;
          if (bVar24) {
            lVar14 = plVar6[6];
          }
          uVar10 = (ulong)(*(byte *)(plVar6 + 4) >> 1);
          if (bVar24) {
            uVar10 = plVar6[5];
          }
          uVar19 = 0xc;
          if (uVar10 < 0xc) {
            uVar19 = uVar10;
          }
          uVar4 = func_0x0eee2ff0(&UNK_0142378f,lVar14,uVar19);
          if ((uVar4 == 0) && (uVar4 = 0, uVar10 != 0xc)) {
            uVar4 = (uVar10 < 0xd) - 1 | 1;
          }
          if ((int)uVar4 < 1) {
            plVar20 = plVar6;
          }
          plVar6 = (long *)plVar6[0 < (int)uVar4];
        } while (plVar6 != (long *)0x0);
        if (plVar20 == plVar7) goto LAB_0ca68570;
        bVar24 = (*(byte *)(plVar20 + 4) & 1) != 0;
        lVar14 = (long)plVar20 + 0x21;
        if (bVar24) {
          lVar14 = plVar20[6];
        }
        uVar10 = (ulong)(*(byte *)(plVar20 + 4) >> 1);
        if (bVar24) {
          uVar10 = plVar20[5];
        }
        uVar19 = 0xc;
        if (uVar10 < 0xc) {
          uVar19 = uVar10;
        }
        iVar5 = func_0x0eee2ff0(&UNK_0142378f,lVar14,uVar19);
        if (iVar5 == 0) {
          if (uVar10 < 0xd) goto LAB_0ca684f9;
          goto LAB_0ca68570;
        }
        if (iVar5 < 0) goto LAB_0ca68570;
LAB_0ca684f9:
        if ((ulong)*(uint *)(plVar20 + 0xc) == 0xffffffff) goto LAB_0ca6876e;
        plStack_a0 = &lStack_68;
        lVar14 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(plVar20 + 0xc) * 8))
                           (&plStack_a0,plVar20 + 7);
        if (lVar14 == 0) goto LAB_0ca68570;
        plStack_a0 = (long *)&UNK_0142378f;
        plStack_98 = (long *)0xc;
        plVar6 = (long *)func_0x0d6c97a0(plVar8 + 1,&plStack_a0);
        if ((plVar6 == plVar7) || ((int)plVar6[0xc] != 1)) goto LAB_0ca68570;
        cVar2 = (char)plVar6[8];
        if (cVar2 < '\x02') goto LAB_0ca68572;
      }
      puVar22 = (undefined8 *)puStack_70[4];
      if ((undefined8 *)puStack_70[5] <= puVar22) {
        lVar14 = puStack_70[3];
        lVar21 = (long)puVar22 - lVar14;
        uVar10 = (lVar21 >> 3) + 1;
        if (uVar10 < 0x2000000000000000) {
          uVar15 = (long)puStack_70[5] - lVar14;
          uVar19 = (long)uVar15 >> 2;
          if ((ulong)((long)uVar15 >> 2) <= uVar10) {
            uVar19 = uVar10;
          }
          if (0x7ffffffffffffff7 < uVar15) {
            uVar19 = 0x1fffffffffffffff;
          }
          lStack_38 = lVar14;
          if (uVar19 < 0x2000000000000000) {
            lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19 * 8);
            if (lVar14 == 0) {
              func_0x0eec74c0(uVar19 * 8,0);
            }
            lVar18 = lStack_38;
            *(long **)(lVar14 + lVar21) = plVar8;
            puVar22 = (undefined8 *)(lVar14 + lVar21 + 8);
            lVar17 = lVar14 + lVar21 + (lVar21 >> 3) * -8;
            func_0x0eee2f00(lVar17,lStack_38,lVar21);
            puStack_70[3] = lVar17;
            puStack_70[4] = puVar22;
            puStack_70[5] = lVar14 + uVar19 * 8;
            if (lVar18 != 0) {
              func_0x0412a280(lVar18,uVar15);
            }
            goto LAB_0ca683a0;
          }
          func_0x04882eb0();
        }
        FUN_05344850();
LAB_0ca6876e:
        uVar9 = func_0x04931450();
        func_0x0ca7d390(&plStack_a0);
        func_0x05334490(&lStack_68);
        uVar9 = _Unwind_Resume(uVar9);
        func_0x05334490(&lStack_68);
        uVar9 = _Unwind_Resume(uVar9);
        (**(code **)(*plVar8 + 8))();
        _Unwind_Resume(uVar9);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *puVar22 = plVar8;
      puVar22 = puVar22 + 1;
LAB_0ca683a0:
      puStack_70[4] = puVar22;
      lVar21 = lStack_78 + 1;
      lVar14 = plStack_80[8];
    } while (lVar21 < (int)((ulong)(plStack_80[9] - lVar14) >> 3));
  }
LAB_0ca67c60:
  lStack_40 = lStack_40 + 1;
  lVar14 = puStack_48[8];
  if ((int)((ulong)(puStack_48[9] - lVar14) >> 3) <= lStack_40) {
    return;
  }
  goto LAB_0ca67c88;
}


