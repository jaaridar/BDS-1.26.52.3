/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7ba90 (ELF vaddr 0xc97ba90)
 * Label: _GLOBAL__N_1::WorldGeneratorAnon::StructureAccess::vslot3
 * Body:  [[0ca7ba90, 0ca7ba9f] [0d2d33e0, 0d2d37cb] [0d2d37d0, 0d2d3820] [0d2d3830, 0d2d3e9a] [0d2d3ea0, 0d2d3f33] [0d2d3f40, 0d2d3ffe] [0d2d401e, 0d2d4062]]
 * Ghidra: wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg__GLOBAL__N_1__WorldGeneratorAnon__StructureAccess__vslot3
                (long param_1,long param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined7 uVar18;
  long *plVar17;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  undefined4 *puStack_78;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  byte bStack_40;
  long lStack_38;
  
  plVar23 = *(long **)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  plVar26 = plVar23 + 0x1d;
  plStack_58 = (long *)CONCAT71(plStack_58._1_7_,1);
  plStack_60 = plVar26;
  func_0x0412d450(plVar26);
  puVar20 = (undefined4 *)plVar23[0x18];
  lStack_38 = lVar11;
  if (puVar20 < (undefined4 *)plVar23[0x19]) {
    *puVar20 = 1;
    puVar20 = puVar20 + 1;
LAB_0d2d3534:
    plVar23[0x18] = (long)puVar20;
    puVar20 = (undefined4 *)plVar23[0x1b];
    puStack_78 = (undefined4 *)plVar23[0x1c];
    if (puVar20 < puStack_78) {
      lVar11 = *(long *)(param_3 + 2);
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *puVar20 = *param_3;
      puVar20[1] = uVar5;
      puVar20[2] = uVar6;
      puVar20[3] = uVar7;
      if (lVar11 != 0) {
        LOCK();
        plVar10 = (long *)(lVar11 + 8);
        *plVar10 = *plVar10 + 1;
        UNLOCK();
      }
      puVar20 = puVar20 + 4;
    }
    else {
      lVar11 = plVar23[0x1a];
      lVar13 = (long)puVar20 - lVar11;
      lVar25 = lVar13 >> 4;
      uVar9 = lVar25 + 1;
      if (uVar9 >> 0x3c != 0) goto LAB_0d2d3fe4;
      uVar15 = (long)puStack_78 - lVar11 >> 3;
      if (uVar15 <= uVar9) {
        uVar15 = uVar9;
      }
      if (0x7fffffffffffffef < (ulong)((long)puStack_78 - lVar11)) {
        uVar15 = 0xfffffffffffffff;
      }
      if (uVar15 == 0) {
        lVar27 = 0;
      }
      else {
        if (0xfffffffffffffff < uVar15) goto LAB_0d2d3fe9;
        lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 << 4);
        if (lVar27 == 0) {
          lVar27 = 0;
          func_0x0eec74c0(uVar15 << 4,0);
        }
      }
      lVar24 = lVar27 + lVar13;
      lVar2 = *(long *)(param_3 + 2);
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      puVar20 = (undefined4 *)(lVar27 + lVar13);
      *puVar20 = *param_3;
      puVar20[1] = uVar5;
      puVar20[2] = uVar6;
      puVar20[3] = uVar7;
      if (lVar2 != 0) {
        LOCK();
        plVar10 = (long *)(lVar2 + 8);
        *plVar10 = *plVar10 + 1;
        UNLOCK();
        lVar11 = plVar23[0x1a];
        puStack_78 = (undefined4 *)plVar23[0x1c];
        lVar13 = plVar23[0x1b] - lVar11;
        lVar25 = lVar13 >> 4;
      }
      puVar20 = (undefined4 *)(lVar24 + 0x10);
      lVar24 = lVar24 + lVar25 * -0x10;
      func_0x0eee2f00(lVar24,lVar11,lVar13);
      plVar23[0x1a] = lVar24;
      plVar23[0x1b] = (long)puVar20;
      plVar23[0x1c] = uVar15 * 0x10 + lVar27;
      if (lVar11 != 0) {
        thunk_FUN_0ee326a0(lVar11,(long)puStack_78 - lVar11);
      }
    }
    plVar23[0x1b] = (long)puVar20;
    func_0x0412d520(plVar26);
    plVar26 = plVar23 + 5;
    bStack_40 = 1;
    plStack_48 = plVar26;
    func_0x0412d450(plVar26);
    lVar11 = lStack_38;
    uVar9 = (long)(int)lStack_38 + 0x9e3779b9;
    puVar19 = (undefined4 *)((uVar9 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + (lStack_38 >> 0x20) ^ uVar9)
    ;
    puVar14 = (undefined4 *)plVar23[1];
    if (puVar14 != (undefined4 *)0x0) {
      uVar9 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar9 >> 0x38 < 2) {
        puVar20 = (undefined4 *)((long)puVar14 - 1U & (ulong)puVar19);
      }
      else {
        puVar20 = puVar19;
        if (puVar14 <= puVar19) {
          puVar20 = (undefined4 *)((ulong)puVar19 % (ulong)puVar14);
        }
      }
      puVar3 = *(undefined8 **)(*plVar23 + (long)puVar20 * 8);
      if ((puVar3 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar3, plVar10 != (long *)0x0)) {
        if ((byte)(uVar9 >> 0x38) < 2) {
          do {
            if ((undefined4 *)plVar10[1] == puVar19) {
              if (plVar10[2] == lStack_38) goto LAB_0d2d3c0c;
            }
            else if ((undefined4 *)((ulong)plVar10[1] & (long)puVar14 - 1U) != puVar20) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            puVar16 = (undefined4 *)plVar10[1];
            if (puVar16 == puVar19) {
              if (plVar10[2] == lStack_38) goto LAB_0d2d3c0c;
            }
            else {
              if (puVar14 <= puVar16) {
                if (((ulong)puVar16 | (ulong)puVar14) >> 0x20 == 0) {
                  puVar16 = (undefined4 *)
                            (((ulong)puVar16 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff));
                }
                else {
                  puVar16 = (undefined4 *)((ulong)puVar16 % (ulong)puVar14);
                }
              }
              if (puVar16 != puVar20) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    uStack_50 = 1;
    *plVar10 = 0;
    plVar10[1] = (long)puVar19;
    plVar10[2] = lVar11;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plStack_60 = plVar10;
    plStack_58 = plVar23;
    if ((long)puVar14 < 0) {
      fVar30 = (float)puVar14;
      fVar29 = *(float *)(plVar23 + 4);
      if (puVar14 != (undefined4 *)0x0) goto LAB_0d2d38fe;
LAB_0d2d390f:
      uVar9 = 1;
      if ((undefined4 *)0x2 < puVar14) {
        uVar9 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
      }
      puVar16 = (undefined4 *)(uVar9 | (long)puVar14 * 2);
      fVar29 = (float)func_0x0eee3ab0((float)(plVar23[3] + 1) / fVar29);
      puVar20 = (undefined4 *)((long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29)
      ;
      if (puVar20 < puVar16) {
        puVar20 = puVar16;
      }
      puVar16 = (undefined4 *)0x2;
      if ((puVar20 == (undefined4 *)0x1) ||
         (puVar16 = puVar20, ((ulong)puVar20 & (long)puVar20 - 1U) == 0)) {
        bVar28 = puVar16 < puVar14;
        if (puVar16 <= puVar14) goto LAB_0d2d3a6c;
LAB_0d2d3984:
        if ((ulong)puVar16 >> 0x3d != 0) goto LAB_0d2d3fee;
        lVar11 = (long)puVar16 * 8;
        lVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar11);
        if (lVar25 == 0) {
          func_0x0eec74c0(lVar11,0);
        }
        lVar13 = *plVar23;
        *plVar23 = lVar25;
        if (lVar13 != 0) {
          thunk_FUN_0ee326a0(lVar13,plVar23[1] << 3);
          lVar25 = *plVar23;
        }
        plVar23[1] = (long)puVar16;
        func_0x0eee2dd0(lVar25,0,lVar11);
        plVar17 = (long *)plVar23[2];
        if (plVar17 != (long *)0x0) {
          puVar20 = (undefined4 *)plVar17[1];
          uVar9 = (long)puVar16 - 1;
          if (((ulong)puVar16 & uVar9) == 0) {
            *(long **)(lVar25 + ((ulong)puVar20 & uVar9) * 8) = plVar23 + 2;
            uVar15 = (ulong)puVar20 & uVar9;
            while (plVar22 = plVar17, plVar17 = (long *)*plVar22, plVar17 != (long *)0x0) {
              uVar21 = plVar17[1] & uVar9;
              if (uVar21 != uVar15) {
                if (*(long *)(lVar25 + uVar21 * 8) == 0) {
                  *(long **)(lVar25 + uVar21 * 8) = plVar22;
                  uVar15 = uVar21;
                }
                else {
                  *plVar22 = *plVar17;
                  *plVar17 = **(undefined8 **)(lVar25 + uVar21 * 8);
                  **(long **)(lVar25 + uVar21 * 8) = (long)plVar17;
                  plVar17 = plVar22;
                }
              }
            }
          }
          else {
            if (puVar16 <= puVar20) {
              if (((ulong)puVar20 | (ulong)puVar16) >> 0x20 == 0) {
                puVar20 = (undefined4 *)
                          (((ulong)puVar20 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
              }
              else {
                puVar20 = (undefined4 *)((ulong)puVar20 % (ulong)puVar16);
              }
            }
            *(long **)(lVar25 + (long)puVar20 * 8) = plVar23 + 2;
            plVar22 = (long *)*plVar17;
            while (plVar22 != (long *)0x0) {
              puVar14 = (undefined4 *)plVar22[1];
              if (puVar16 <= puVar14) {
                if (((ulong)puVar14 | (ulong)puVar16) >> 0x20 == 0) {
                  puVar14 = (undefined4 *)
                            (((ulong)puVar14 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
                }
                else {
                  puVar14 = (undefined4 *)((ulong)puVar14 % (ulong)puVar16);
                }
              }
              if (puVar14 != puVar20) {
                if (*(long *)(lVar25 + (long)puVar14 * 8) == 0) {
                  *(long **)(lVar25 + (long)puVar14 * 8) = plVar17;
                  puVar20 = puVar14;
                }
                else {
                  *plVar17 = *plVar22;
                  *plVar22 = **(long **)(lVar25 + (long)puVar14 * 8);
                  **(undefined8 **)(lVar25 + (long)puVar14 * 8) = plVar22;
                  plVar22 = plVar17;
                }
              }
              plVar17 = plVar22;
              plVar22 = (long *)*plVar17;
            }
          }
        }
      }
      else {
        puVar16 = (undefined4 *)func_0x0412c3f0();
        puVar14 = (undefined4 *)plVar23[1];
        bVar28 = puVar16 < puVar14;
        if (puVar14 < puVar16) goto LAB_0d2d3984;
LAB_0d2d3a6c:
        if (bVar28) {
          fVar29 = (float)func_0x0eee3ab0((float)(ulong)plVar23[3] / *(float *)(plVar23 + 4));
          puVar20 = (undefined4 *)
                    ((long)(fVar29 - _DAT_01198778) & (long)fVar29 >> 0x3f | (long)fVar29);
          if ((puVar14 < (undefined4 *)0x3) ||
             (uVar9 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555),
             uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
             1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
            puVar20 = (undefined4 *)func_0x0412c3f0(puVar20);
            if (puVar20 < puVar16) {
              puVar20 = puVar16;
            }
          }
          else {
            if ((undefined4 *)0x1 < puVar20) {
              lVar11 = 0x3f;
              if ((long)puVar20 - 1U != 0) {
                for (; (long)puVar20 - 1U >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              puVar20 = (undefined4 *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
            }
            if (puVar20 < puVar16) {
              puVar20 = puVar16;
            }
          }
          puVar16 = puVar20;
          if (puVar16 < puVar14) {
            if (puVar16 != (undefined4 *)0x0) goto LAB_0d2d3984;
            lVar11 = *plVar23;
            *plVar23 = 0;
            if (lVar11 != 0) {
              thunk_FUN_0ee326a0(lVar11,plVar23[1] << 3);
            }
            plVar23[1] = 0;
          }
        }
      }
      puVar14 = (undefined4 *)plVar23[1];
      if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
        puVar20 = (undefined4 *)((ulong)puVar19 & (long)puVar14 - 1U);
      }
      else {
        puVar20 = puVar19;
        if (puVar14 <= puVar19) {
          puVar20 = (undefined4 *)((ulong)puVar19 % (ulong)puVar14);
        }
      }
    }
    else {
      fVar30 = (float)(long)puVar14;
      fVar29 = *(float *)(plVar23 + 4);
      if (puVar14 == (undefined4 *)0x0) goto LAB_0d2d390f;
LAB_0d2d38fe:
      if (fVar30 * fVar29 < (float)(plVar23[3] + 1)) goto LAB_0d2d390f;
    }
    lVar11 = *plVar23;
    plVar17 = *(long **)(lVar11 + (long)puVar20 * 8);
    if (plVar17 == (long *)0x0) {
      *plVar10 = plVar23[2];
      plVar23[2] = (long)plVar10;
      *(long **)(lVar11 + (long)puVar20 * 8) = plVar23 + 2;
      if (*plVar10 != 0) {
        puVar20 = *(undefined4 **)(*plVar10 + 8);
        if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
          *(long **)(lVar11 + ((ulong)puVar20 & (long)puVar14 - 1U) * 8) = plVar10;
        }
        else {
          if (puVar14 <= puVar20) {
            if (((ulong)puVar20 | (ulong)puVar14) >> 0x20 == 0) {
              *(long **)(lVar11 + (((ulong)puVar20 & 0xffffffff) % ((ulong)puVar14 & 0xffffffff)) *
                                  8) = plVar10;
              goto LAB_0d2d3c08;
            }
            puVar20 = (undefined4 *)((ulong)puVar20 % (ulong)puVar14);
          }
          *(long **)(lVar11 + (long)puVar20 * 8) = plVar10;
        }
      }
    }
    else {
      *plVar10 = *plVar17;
      *plVar17 = (long)plVar10;
    }
LAB_0d2d3c08:
    plVar23[3] = plVar23[3] + 1;
LAB_0d2d3c0c:
    bVar28 = (*(byte *)(param_2 + 0x28) & 1) != 0;
    lVar11 = param_2 + 0x29;
    if (bVar28) {
      lVar11 = *(long *)(param_2 + 0x38);
    }
    uVar9 = (ulong)(*(byte *)(param_2 + 0x28) >> 1);
    if (bVar28) {
      uVar9 = *(ulong *)(param_2 + 0x30);
    }
    lVar11 = func_0x04883620(&plStack_60,lVar11,uVar9);
    plVar23 = (long *)plVar10[4];
    plVar17 = (long *)plVar10[3];
    for (plVar22 = plVar17; (plVar22 != plVar23 && (lVar11 != *plVar22)); plVar22 = plVar22 + 3) {
    }
    uVar18 = (undefined7)((ulong)plVar17 >> 8);
    if (plVar22 == plVar23) {
      if (plVar23 < (long *)plVar10[5]) {
        *plVar23 = lVar11;
        lVar11 = *(long *)(param_3 + 2);
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        *(undefined4 *)(plVar23 + 1) = *param_3;
        *(undefined4 *)((long)plVar23 + 0xc) = uVar5;
        *(undefined4 *)(plVar23 + 2) = uVar6;
        *(undefined4 *)((long)plVar23 + 0x14) = uVar7;
        if (lVar11 != 0) {
          LOCK();
          plVar17 = (long *)(lVar11 + 0x10);
          *plVar17 = *plVar17 + 1;
          UNLOCK();
        }
        plVar10[4] = (long)(plVar23 + 3);
        uVar9 = CONCAT71(uVar18,1);
      }
      else {
        lVar25 = (long)plVar23 - (long)plVar17;
        uVar9 = (lVar25 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_0d2d3ff3;
        lVar13 = plVar10[5] - (long)plVar17 >> 3;
        uVar15 = lVar13 * 0x5555555555555556;
        if (uVar9 < uVar15) {
          uVar9 = uVar15;
        }
        if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
          uVar9 = 0xaaaaaaaaaaaaaaa;
        }
        if (uVar9 == 0) {
          lVar13 = 0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < uVar9) goto LAB_0d2d3ff8;
          lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar9 * 0x18);
          if (lVar13 == 0) {
            func_0x0eec74c0(uVar9 * 0x18);
            lVar13 = 0;
          }
        }
        lVar27 = lVar13 + lVar25;
        *(long *)(lVar13 + lVar25) = lVar11;
        lVar11 = *(long *)(param_3 + 2);
        uVar5 = param_3[1];
        uVar6 = param_3[2];
        uVar7 = param_3[3];
        puVar20 = (undefined4 *)(lVar13 + 8 + lVar25);
        *puVar20 = *param_3;
        puVar20[1] = uVar5;
        puVar20[2] = uVar6;
        puVar20[3] = uVar7;
        if (lVar11 != 0) {
          LOCK();
          plVar26 = (long *)(lVar11 + 0x10);
          *plVar26 = *plVar26 + 1;
          UNLOCK();
          plVar17 = (long *)plVar10[3];
          plVar23 = (long *)plVar10[4];
          lVar25 = (long)plVar23 - (long)plVar17;
        }
        lVar11 = lVar27 + 0x18;
        lVar27 = lVar27 - lVar25;
        if (plVar17 != plVar23) {
          lVar25 = 0;
          do {
            *(undefined8 *)(lVar27 + lVar25) = *(undefined8 *)((long)plVar17 + lVar25);
            puVar3 = (undefined8 *)((long)plVar17 + lVar25 + 8);
            uVar12 = puVar3[1];
            puVar1 = (undefined8 *)(lVar27 + 8 + lVar25);
            *puVar1 = *puVar3;
            puVar1[1] = uVar12;
            puVar3 = (undefined8 *)((long)plVar17 + lVar25 + 8);
            *puVar3 = 0;
            puVar3[1] = 0;
            lVar24 = lVar25 + 0x18;
            lVar25 = lVar25 + 0x18;
          } while ((long *)((long)plVar17 + lVar24) != plVar23);
          do {
            if (plVar17[2] != 0) {
              func_0x0412c2d0();
            }
            plVar17 = plVar17 + 3;
          } while (plVar17 != plVar23);
          plVar17 = (long *)plVar10[3];
        }
        plVar10[3] = lVar27;
        plVar10[4] = lVar11;
        lVar25 = plVar10[5];
        plVar10[5] = lVar13 + uVar9 * 0x18;
        if (plVar17 == (long *)0x0) {
          plVar10[4] = lVar11;
          uVar9 = 0;
        }
        else {
          thunk_FUN_0ee326a0(plVar17,lVar25 - (long)plVar17);
          plVar10[4] = lVar11;
          uVar9 = CONCAT71((int7)((ulong)plVar17 >> 8),1);
          if ((bStack_40 & 1) == 0) goto LAB_0d2d3f02;
        }
        uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
        plVar26 = plStack_48;
      }
    }
    else {
      lVar11 = plVar22[2];
      if (lVar11 == 0) {
        uVar9 = CONCAT71(uVar18,1);
      }
      else {
        uVar9 = CONCAT71(uVar18,*(long *)(lVar11 + 8) == -1);
      }
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      if (*(long *)(param_3 + 2) != 0) {
        LOCK();
        plVar23 = (long *)(*(long *)(param_3 + 2) + 0x10);
        *plVar23 = *plVar23 + 1;
        UNLOCK();
        lVar11 = plVar22[2];
      }
      *(undefined4 *)(plVar22 + 1) = uVar5;
      *(undefined4 *)((long)plVar22 + 0xc) = uVar6;
      *(undefined4 *)(plVar22 + 2) = uVar7;
      *(undefined4 *)((long)plVar22 + 0x14) = uVar8;
      if (lVar11 != 0) {
        func_0x0412c2d0();
      }
    }
    func_0x0412d520(plVar26);
LAB_0d2d3f02:
    return uVar9 & 0xffffffff;
  }
  lVar11 = plVar23[0x17];
  lVar25 = (long)puVar20 - lVar11;
  uVar9 = (lVar25 >> 2) + 1;
  if (uVar9 >> 0x3e == 0) {
    uVar21 = plVar23[0x19] - lVar11;
    uVar15 = (long)uVar21 >> 1;
    if ((ulong)((long)uVar21 >> 1) <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x7ffffffffffffffb < uVar21) {
      uVar15 = 0x3fffffffffffffff;
    }
    if (uVar15 < 0x4000000000000000) {
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15 * 4);
      if (lVar13 == 0) {
        func_0x0eec74c0(uVar15 * 4,0);
      }
      *(undefined4 *)(lVar13 + lVar25) = 1;
      puVar20 = (undefined4 *)(lVar13 + lVar25 + 4);
      lVar27 = lVar13 + lVar25 + (lVar25 >> 2) * -4;
      func_0x0eee2f00(lVar27,lVar11,lVar25);
      plVar23[0x17] = lVar27;
      plVar23[0x18] = (long)puVar20;
      plVar23[0x19] = lVar13 + uVar15 * 4;
      if (lVar11 != 0) {
        thunk_FUN_0ee326a0(lVar11,uVar21);
      }
      goto LAB_0d2d3534;
    }
  }
  else {
    func_0x04aa1da0();
  }
  func_0x04882eb0();
LAB_0d2d3fe4:
  func_0x0d2e06e0();
LAB_0d2d3fe9:
  func_0x04882eb0();
LAB_0d2d3fee:
  func_0x04882eb0();
LAB_0d2d3ff3:
  func_0x0d2e06f0();
LAB_0d2d3ff8:
  uVar12 = func_0x04882eb0();
  func_0x0525af10(&plStack_48);
  uVar12 = func_0x0eee2d70(uVar12);
  uVar12 = func_0x04882e20(uVar12);
  uVar12 = func_0x04882e20(uVar12);
  uVar12 = func_0x04882e20(uVar12);
  func_0x0525af10(&plStack_60);
  func_0x0eee2d70(uVar12);
  pcVar4 = (code *)swi(3);
  uVar9 = (*pcVar4)();
  return uVar9;
}


