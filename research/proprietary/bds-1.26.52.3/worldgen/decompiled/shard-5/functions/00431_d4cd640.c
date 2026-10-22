/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5cd640 (ELF vaddr 0xd4cd640)
 * Label: caller-of-callee
 * Body:  [[0d5cd640, 0d5cd7c3] [0d5cd7d0, 0d5cdb15] [0d5cdb20, 0d5cdc7b] [0d5cdc80, 0d5cdcba] [0d5cdcc0, 0d5cdd2b] [0d5cdd30, 0d5cdee5] [0d5cdef0, 0d5cdf42] [0d5cdf50, 0d5cdf9c] [0d5cdfa0, 0d5ce082] [0d5ce090, 0d5ce195] [0d5ce1a0, 0d5ce26c] [0d5ce270, 0d5ce2df] [0d5ce2fe, 0d5ce314] [0d5ce34e, 0d5ce363]]
 * Ghidra: FUN_0d5cd640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d5cd640(long *param_1,long *param_2)

{
  long *plVar1;
  long **pplVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long *unaff_R14;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  bool bVar31;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  ulong uStack_38;
  
  if (param_1 == param_2) {
    *(short *)(param_1 + 3) = (short)param_2[3];
    lVar30 = param_2[8];
    uVar11 = (undefined4)param_2[7];
    uVar9 = *(undefined4 *)((long)param_2 + 0x3c);
    uVar12 = (undefined4)param_2[8];
    uVar10 = *(undefined4 *)((long)param_2 + 0x44);
  }
  else {
    lVar30 = *param_2;
    lVar29 = param_2[1];
    uVar26 = lVar29 - lVar30;
    lVar15 = *param_1;
    uVar24 = param_1[2];
    if (uVar24 - lVar15 < uVar26) {
      if (lVar15 != 0) {
        param_1[1] = lVar15;
        func_0x0412a280();
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        uVar24 = 0;
      }
      if ((long)uVar26 < 0) goto LAB_0d5ce2d9;
      uVar23 = uVar24 * 2;
      if (uVar24 * 2 <= uVar26) {
        uVar23 = uVar26;
      }
      uVar22 = 0x7fffffffffffffff;
      if (uVar24 < 0x3fffffffffffffff) {
        uVar22 = uVar23;
      }
      lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
      if (lVar13 == 0) {
        func_0x0eec74c0(uVar22,0);
      }
      *param_1 = lVar13;
      param_1[1] = lVar13;
      param_1[2] = uVar22 + lVar13;
      if (lVar29 != lVar30) {
        func_0x0eee2f00(lVar13,lVar30,uVar26);
      }
      lVar13 = lVar13 + uVar26;
LAB_0d5cd851:
      param_1[1] = lVar13;
    }
    else {
      lVar13 = param_1[1];
      if ((ulong)(lVar13 - lVar15) < uVar26) {
        lVar4 = (lVar13 - lVar15) + lVar30;
        if (lVar13 != lVar15) {
          func_0x0eee2ee0(lVar15,lVar30);
          lVar13 = param_1[1];
        }
        lVar29 = lVar29 - lVar4;
        if (lVar29 != 0) {
          func_0x0eee2ee0(lVar13,lVar4,lVar29);
        }
        lVar13 = lVar13 + lVar29;
        goto LAB_0d5cd851;
      }
      if (lVar29 != lVar30) {
        func_0x0eee2ee0(lVar15,lVar30,uVar26);
      }
      param_1[1] = lVar15 + uVar26;
    }
    *(short *)(param_1 + 3) = (short)param_2[3];
    plVar16 = param_1 + 4;
    bVar6 = *(byte *)(param_2 + 4);
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if ((bVar6 & 1) == 0) {
        param_1[6] = param_2[6];
        lVar30 = param_2[5];
        *plVar16 = param_2[4];
        param_1[5] = lVar30;
        lVar30 = param_2[8];
        uVar11 = (undefined4)param_2[7];
        uVar9 = *(undefined4 *)((long)param_2 + 0x3c);
        uVar12 = (undefined4)param_2[8];
        uVar10 = *(undefined4 *)((long)param_2 + 0x44);
      }
      else {
        func_0x04885070(plVar16,param_2[6],param_2[5]);
        lVar30 = param_2[8];
        uVar11 = (undefined4)param_2[7];
        uVar9 = *(undefined4 *)((long)param_2 + 0x3c);
        uVar12 = (undefined4)param_2[8];
        uVar10 = *(undefined4 *)((long)param_2 + 0x44);
      }
    }
    else {
      bVar31 = (bVar6 & 1) != 0;
      lVar30 = (long)param_2 + 0x21;
      if (bVar31) {
        lVar30 = param_2[6];
      }
      uVar24 = (ulong)(bVar6 >> 1);
      if (bVar31) {
        uVar24 = param_2[5];
      }
      func_0x04885120(plVar16,lVar30,uVar24);
      lVar30 = param_2[8];
      uVar11 = (undefined4)param_2[7];
      uVar9 = *(undefined4 *)((long)param_2 + 0x3c);
      uVar12 = (undefined4)param_2[8];
      uVar10 = *(undefined4 *)((long)param_2 + 0x44);
    }
  }
  if (lVar30 != 0) {
    LOCK();
    *(long *)(lVar30 + 8) = *(long *)(lVar30 + 8) + 1;
    UNLOCK();
  }
  plVar16 = (long *)param_1[8];
  *(undefined4 *)(param_1 + 7) = uVar11;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar12;
  *(undefined4 *)((long)param_1 + 0x44) = uVar10;
  plVar18 = plStack_68;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    lVar30 = *plVar20;
    *plVar20 = *plVar20 + -1;
    UNLOCK();
    if (lVar30 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      func_0x0412c2d0(plVar16);
      plVar18 = plStack_68;
    }
  }
  if (param_1 == param_2) {
    return param_1;
  }
  unaff_R14 = param_1 + 9;
  lVar30 = param_2[9];
  lVar29 = param_2[10];
  uVar26 = lVar29 - lVar30;
  plVar16 = (long *)param_1[9];
  uVar24 = param_1[0xb];
  uVar23 = uVar24 - (long)plVar16;
  if (uVar23 < uVar26) {
    uVar26 = (long)uVar26 >> 5;
    plStack_68 = plVar18;
    if (plVar16 != (long *)0x0) {
      plVar20 = (long *)param_1[10];
      plVar25 = plVar16;
      plStack_68 = unaff_R14;
      uStack_38 = uVar26;
      if (plVar16 != plVar20) {
        do {
          plVar18 = (long *)plVar20[-1];
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar25 = plVar18 + 1;
            lVar15 = *plVar25;
            *plVar25 = *plVar25 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              func_0x0412c2d0(plVar18);
            }
          }
          plVar20 = plVar20 + -4;
          func_0x04863610(plVar20);
        } while (plVar20 != plVar16);
        plVar25 = (long *)param_1[9];
        uVar23 = param_1[0xb] - (long)plVar25;
        unaff_R14 = plStack_68;
        plVar18 = plStack_68;
      }
      plStack_68 = plVar18;
      param_1[10] = (long)plVar16;
      func_0x0412a280(plVar25,uVar23);
      *unaff_R14 = 0;
      unaff_R14[1] = 0;
      unaff_R14[2] = 0;
      uVar24 = 0;
      uVar26 = uStack_38;
    }
    if (uVar26 >> 0x3b == 0) {
      uVar23 = (long)uVar24 >> 4;
      if ((ulong)((long)uVar24 >> 4) <= uVar26) {
        uVar23 = uVar26;
      }
      if (0x7fffffffffffffdf < uVar24) {
        uVar23 = 0x7ffffffffffffff;
      }
      if (uVar23 < 0x800000000000000) {
        plStack_40 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23 * 0x20);
        if (plStack_40 == (long *)0x0) {
          func_0x0eec74c0(uVar23 * 0x20,0);
        }
        param_1[9] = (long)plStack_40;
        param_1[10] = (long)plStack_40;
        param_1[0xb] = (long)(plStack_40 + uVar23 * 4);
        pplStack_58 = &plStack_40;
        pplStack_50 = &plStack_70;
        uStack_48 = 0;
        plVar16 = plStack_40;
        plStack_60 = unaff_R14;
        for (; unaff_R14 = plVar16, lVar30 != lVar29; lVar30 = lVar30 + 0x20) {
          plStack_70 = unaff_R14;
          func_0x04863480(unaff_R14,lVar30);
          lVar15 = *(long *)(lVar30 + 0x18);
          uVar11 = *(undefined4 *)(lVar30 + 0x14);
          uVar9 = *(undefined4 *)(lVar30 + 0x18);
          uVar12 = *(undefined4 *)(lVar30 + 0x1c);
          *(undefined4 *)(unaff_R14 + 2) = *(undefined4 *)(lVar30 + 0x10);
          *(undefined4 *)((long)unaff_R14 + 0x14) = uVar11;
          *(undefined4 *)(unaff_R14 + 3) = uVar9;
          *(undefined4 *)((long)unaff_R14 + 0x1c) = uVar12;
          if (lVar15 != 0) {
            LOCK();
            plVar16 = (long *)(lVar15 + 8);
            *plVar16 = *plVar16 + 1;
            UNLOCK();
          }
          plVar16 = plStack_70 + 4;
        }
        param_1[10] = (long)unaff_R14;
        plStack_70 = unaff_R14;
        goto LAB_0d5cdc1f;
      }
    }
    func_0x0d5d8060();
  }
  else {
    plVar20 = (long *)param_1[10];
    if ((ulong)((long)plVar20 - (long)plVar16) < uVar26) {
      lVar15 = ((long)plVar20 - (long)plVar16) + lVar30;
      plStack_68 = unaff_R14;
      if (plVar20 != plVar16) {
        do {
          func_0x04863740(plVar16,lVar30);
          uVar11 = *(undefined4 *)(lVar30 + 0x10);
          uVar9 = *(undefined4 *)(lVar30 + 0x14);
          uVar12 = *(undefined4 *)(lVar30 + 0x18);
          uVar10 = *(undefined4 *)(lVar30 + 0x1c);
          if (*(long *)(lVar30 + 0x18) != 0) {
            LOCK();
            plVar18 = (long *)(*(long *)(lVar30 + 0x18) + 8);
            *plVar18 = *plVar18 + 1;
            UNLOCK();
          }
          plVar18 = (long *)plVar16[3];
          *(undefined4 *)(plVar16 + 2) = uVar11;
          *(undefined4 *)((long)plVar16 + 0x14) = uVar9;
          *(undefined4 *)(plVar16 + 3) = uVar12;
          *(undefined4 *)((long)plVar16 + 0x1c) = uVar10;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar20 = plVar18 + 1;
            lVar13 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              func_0x0412c2d0(plVar18);
            }
          }
          lVar30 = lVar30 + 0x20;
          plVar16 = plVar16 + 4;
        } while (lVar30 != lVar15);
        plVar20 = (long *)param_1[10];
        unaff_R14 = plStack_68;
        plVar18 = plStack_68;
      }
      plStack_68 = plVar18;
      pplStack_58 = &plStack_40;
      pplStack_50 = &plStack_70;
      uStack_48 = 0;
      plStack_40 = plVar20;
      plStack_60 = unaff_R14;
      for (; plStack_70 = plVar20, lVar15 != lVar29; lVar15 = lVar15 + 0x20) {
        func_0x04863480(plVar20,lVar15);
        lVar30 = *(long *)(lVar15 + 0x18);
        uVar11 = *(undefined4 *)(lVar15 + 0x14);
        uVar9 = *(undefined4 *)(lVar15 + 0x18);
        uVar12 = *(undefined4 *)(lVar15 + 0x1c);
        *(undefined4 *)(plVar20 + 2) = *(undefined4 *)(lVar15 + 0x10);
        *(undefined4 *)((long)plVar20 + 0x14) = uVar11;
        *(undefined4 *)(plVar20 + 3) = uVar9;
        *(undefined4 *)((long)plVar20 + 0x1c) = uVar12;
        if (lVar30 != 0) {
          LOCK();
          plVar16 = (long *)(lVar30 + 8);
          *plVar16 = *plVar16 + 1;
          UNLOCK();
        }
        plVar20 = plStack_70 + 4;
      }
      param_1[10] = (long)plVar20;
    }
    else {
      plVar18 = plVar16;
      if (lVar30 == lVar29) {
        if (plVar16 != plVar20) {
LAB_0d5cdcd5:
          do {
            unaff_R14 = (long *)plVar20[-1];
            if (unaff_R14 != (long *)0x0) {
              LOCK();
              plVar25 = unaff_R14 + 1;
              lVar30 = *plVar25;
              *plVar25 = *plVar25 + -1;
              UNLOCK();
              if (lVar30 == 0) {
                (**(code **)(*unaff_R14 + 0x10))(unaff_R14);
                func_0x0412c2d0(unaff_R14);
              }
            }
            plVar20 = plVar20 + -4;
            func_0x04863610(plVar20);
          } while (plVar20 != plVar18);
        }
      }
      else {
        do {
          func_0x04863740(plVar18,lVar30);
          uVar11 = *(undefined4 *)(lVar30 + 0x10);
          uVar9 = *(undefined4 *)(lVar30 + 0x14);
          uVar12 = *(undefined4 *)(lVar30 + 0x18);
          uVar10 = *(undefined4 *)(lVar30 + 0x1c);
          if (*(long *)(lVar30 + 0x18) != 0) {
            LOCK();
            plVar20 = (long *)(*(long *)(lVar30 + 0x18) + 8);
            *plVar20 = *plVar20 + 1;
            UNLOCK();
          }
          unaff_R14 = (long *)plVar18[3];
          *(undefined4 *)(plVar18 + 2) = uVar11;
          *(undefined4 *)((long)plVar18 + 0x14) = uVar9;
          *(undefined4 *)(plVar18 + 3) = uVar12;
          *(undefined4 *)((long)plVar18 + 0x1c) = uVar10;
          if (unaff_R14 != (long *)0x0) {
            LOCK();
            plVar20 = unaff_R14 + 1;
            lVar15 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*unaff_R14 + 0x10))(unaff_R14);
              func_0x0412c2d0(unaff_R14);
            }
          }
          lVar30 = lVar30 + 0x20;
          plVar18 = plVar18 + 4;
          plVar16 = plVar16 + 4;
        } while (lVar30 != lVar29);
        plVar20 = (long *)param_1[10];
        if (plVar18 != plVar20) goto LAB_0d5cdcd5;
      }
      param_1[10] = (long)plVar16;
    }
LAB_0d5cdc1f:
    plVar16 = (long *)param_2[0xc];
    plVar18 = (long *)param_2[0xd];
    uVar26 = (long)plVar18 - (long)plVar16;
    puVar14 = (undefined1 *)param_1[0xc];
    lVar30 = param_1[0xe];
    uVar24 = lVar30 - (long)puVar14;
    plStack_68 = plVar18;
    if (uVar26 <= uVar24) {
      puVar19 = (undefined1 *)param_1[0xd];
      if ((ulong)((long)puVar19 - (long)puVar14) < uVar26) {
        plVar20 = (long *)(((long)puVar19 - (long)puVar14) + (long)plVar16);
        if (puVar19 != puVar14) {
          lVar30 = 0;
          do {
            puVar14[lVar30] = *(undefined1 *)((long)plVar16 + lVar30);
            lVar29 = *(long *)((long)plVar16 + lVar30 + 0x10);
            puVar5 = (undefined4 *)((long)plVar16 + lVar30 + 8);
            uVar11 = *puVar5;
            uVar9 = puVar5[1];
            uVar12 = puVar5[2];
            uVar10 = puVar5[3];
            if (lVar29 != 0) {
              LOCK();
              plVar25 = (long *)(lVar29 + 8);
              *plVar25 = *plVar25 + 1;
              UNLOCK();
            }
            plVar25 = *(long **)(puVar14 + lVar30 + 0x10);
            puVar5 = (undefined4 *)(puVar14 + lVar30 + 8);
            *puVar5 = uVar11;
            puVar5[1] = uVar9;
            puVar5[2] = uVar12;
            puVar5[3] = uVar10;
            if (plVar25 != (long *)0x0) {
              LOCK();
              plVar1 = plVar25 + 1;
              lVar29 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar29 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
                func_0x0412c2d0(plVar25);
                plVar18 = plStack_68;
              }
            }
            lVar29 = lVar30 + 0x18;
            lVar30 = lVar30 + 0x18;
          } while ((long *)((long)plVar16 + lVar29) != plVar20);
          puVar19 = (undefined1 *)param_1[0xd];
        }
        if (plVar20 != plVar18) {
          lVar30 = 0;
          do {
            puVar19[lVar30] = *(undefined1 *)((long)plVar20 + lVar30);
            lVar29 = *(long *)((long)plVar20 + lVar30 + 0x10);
            puVar21 = (undefined8 *)((long)plVar20 + lVar30 + 8);
            uVar17 = puVar21[1];
            *(undefined8 *)(puVar19 + lVar30 + 8) = *puVar21;
            *(undefined8 *)((long)(puVar19 + lVar30 + 8) + 8) = uVar17;
            if (lVar29 != 0) {
              LOCK();
              plVar16 = (long *)(lVar29 + 8);
              *plVar16 = *plVar16 + 1;
              UNLOCK();
            }
            lVar15 = lVar30 + 0x18;
            lVar29 = lVar30 + 0x18;
            lVar30 = lVar15;
          } while ((long *)((long)plVar20 + lVar29) != plVar18);
          puVar19 = puVar19 + lVar15;
        }
        param_1[0xd] = (long)puVar19;
      }
      else {
        puVar27 = puVar14;
        if (plVar16 != plVar18) {
          do {
            *puVar27 = (char)*plVar16;
            lVar30 = plVar16[1];
            uVar11 = *(undefined4 *)((long)plVar16 + 0xc);
            lVar29 = plVar16[2];
            uVar9 = *(undefined4 *)((long)plVar16 + 0x14);
            if (plVar16[2] != 0) {
              LOCK();
              plVar20 = (long *)(plVar16[2] + 8);
              *plVar20 = *plVar20 + 1;
              UNLOCK();
            }
            plVar20 = *(long **)(puVar27 + 0x10);
            *(int *)(puVar27 + 8) = (int)lVar30;
            *(undefined4 *)(puVar27 + 0xc) = uVar11;
            *(int *)(puVar27 + 0x10) = (int)lVar29;
            *(undefined4 *)(puVar27 + 0x14) = uVar9;
            if (plVar20 != (long *)0x0) {
              LOCK();
              plVar25 = plVar20 + 1;
              lVar30 = *plVar25;
              *plVar25 = *plVar25 + -1;
              UNLOCK();
              if (lVar30 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                func_0x0412c2d0(plVar20);
                plVar18 = plStack_68;
              }
            }
            plVar16 = plVar16 + 3;
            puVar27 = puVar27 + 0x18;
            puVar14 = puVar14 + 0x18;
          } while (plVar16 != plVar18);
          puVar19 = (undefined1 *)param_1[0xd];
        }
        for (; puVar27 != puVar19; puVar19 = puVar19 + -0x18) {
          plVar16 = *(long **)(puVar19 + -8);
          if (plVar16 != (long *)0x0) {
            LOCK();
            plVar18 = plVar16 + 1;
            lVar30 = *plVar18;
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (lVar30 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              func_0x0412c2d0(plVar16);
            }
          }
        }
        param_1[0xd] = (long)puVar14;
      }
LAB_0d5cdfec:
      pplVar2 = (long **)(param_1 + 0xf);
      *(int *)(param_1 + 0x13) = (int)param_2[0x13];
      puVar21 = (undefined8 *)param_2[0x11];
      if (param_1[0x10] != 0) {
        func_0x0eee2dd0(param_1[0xf],0,param_1[0x10] << 3);
        puVar28 = (undefined8 *)param_1[0x11];
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        while (puVar28 != (undefined8 *)0x0) {
          if (puVar21 == (undefined8 *)0x0) goto LAB_0d5ce235;
          if (puVar28 != puVar21) {
            pbVar3 = (byte *)(puVar28 + 2);
            bVar6 = *(byte *)(puVar21 + 2);
            if ((*pbVar3 & 1) == 0) {
              if ((bVar6 & 1) == 0) {
                puVar28[4] = puVar21[4];
                uVar17 = puVar21[3];
                *(undefined8 *)pbVar3 = puVar21[2];
                puVar28[3] = uVar17;
              }
              else {
                func_0x04885070(pbVar3,puVar21[4],puVar21[3]);
              }
            }
            else {
              bVar31 = (bVar6 & 1) != 0;
              lVar30 = (long)puVar21 + 0x11;
              if (bVar31) {
                lVar30 = puVar21[4];
              }
              uVar24 = (ulong)(bVar6 >> 1);
              if (bVar31) {
                uVar24 = puVar21[3];
              }
              func_0x04885120(pbVar3,lVar30,uVar24);
            }
          }
          uVar11 = *(undefined4 *)(puVar21 + 5);
          uVar9 = *(undefined4 *)((long)puVar21 + 0x2c);
          uVar12 = *(undefined4 *)(puVar21 + 6);
          uVar10 = *(undefined4 *)((long)puVar21 + 0x34);
          if (puVar21[6] != 0) {
            LOCK();
            plVar16 = (long *)(puVar21[6] + 8);
            *plVar16 = *plVar16 + 1;
            UNLOCK();
          }
          plVar16 = (long *)puVar28[6];
          *(undefined4 *)(puVar28 + 5) = uVar11;
          *(undefined4 *)((long)puVar28 + 0x2c) = uVar9;
          *(undefined4 *)(puVar28 + 6) = uVar12;
          *(undefined4 *)((long)puVar28 + 0x34) = uVar10;
          if (plVar16 != (long *)0x0) {
            LOCK();
            plVar18 = plVar16 + 1;
            lVar30 = *plVar18;
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (lVar30 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
              func_0x0412c2d0(plVar16);
            }
          }
          puVar7 = (undefined8 *)*puVar28;
          func_0x0d5d8080(pplVar2,puVar28);
          puVar21 = (undefined8 *)*puVar21;
          puVar28 = puVar7;
        }
      }
      if (puVar21 != (undefined8 *)0x0) {
        do {
          plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
          if (plVar16 == (long *)0x0) {
            func_0x0eec74c0(0x38,0);
          }
          pplStack_50 = (long **)0x0;
          *plVar16 = 0;
          plVar16[1] = 0;
          plStack_60 = plVar16;
          pplStack_58 = pplVar2;
          if ((*(byte *)(puVar21 + 2) & 1) == 0) {
            plVar16[4] = puVar21[4];
            lVar30 = puVar21[3];
            plVar16[2] = puVar21[2];
            plVar16[3] = lVar30;
          }
          else {
            func_0x0412e5e0(plVar16 + 2,puVar21[4],puVar21[3]);
          }
          lVar30 = puVar21[6];
          uVar11 = *(undefined4 *)((long)puVar21 + 0x2c);
          uVar9 = *(undefined4 *)(puVar21 + 6);
          uVar12 = *(undefined4 *)((long)puVar21 + 0x34);
          *(undefined4 *)(plVar16 + 5) = *(undefined4 *)(puVar21 + 5);
          *(undefined4 *)((long)plVar16 + 0x2c) = uVar11;
          *(undefined4 *)(plVar16 + 6) = uVar9;
          *(undefined4 *)((long)plVar16 + 0x34) = uVar12;
          if (lVar30 != 0) {
            LOCK();
            plVar18 = (long *)(lVar30 + 8);
            *plVar18 = *plVar18 + 1;
            UNLOCK();
          }
          pplStack_50 = (long **)CONCAT71(pplStack_50._1_7_,1);
          bVar31 = (*(byte *)(plVar16 + 2) & 1) != 0;
          lVar30 = (long)plVar16 + 0x11;
          if (bVar31) {
            lVar30 = plVar16[4];
          }
          uVar24 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
          if (bVar31) {
            uVar24 = plVar16[3];
          }
          lVar30 = func_0x04883620(&plStack_70,lVar30,uVar24);
          plVar16[1] = lVar30;
          func_0x0d5d8080(pplVar2,plStack_60);
          puVar21 = (undefined8 *)*puVar21;
        } while (puVar21 != (undefined8 *)0x0);
      }
      return param_1;
    }
    uVar26 = ((long)uVar26 >> 3) * -0x5555555555555555;
    if (puVar14 != (undefined1 *)0x0) {
      puVar19 = (undefined1 *)param_1[0xd];
      puVar27 = puVar14;
      if (puVar14 != puVar19) {
        do {
          plVar18 = *(long **)(puVar19 + -8);
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar20 = plVar18 + 1;
            lVar30 = *plVar20;
            *plVar20 = *plVar20 + -1;
            UNLOCK();
            if (lVar30 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              func_0x0412c2d0(plVar18);
            }
          }
          puVar19 = puVar19 + -0x18;
        } while (puVar19 != puVar14);
        uVar24 = param_1[0xe] - param_1[0xc];
        puVar27 = (undefined1 *)param_1[0xc];
      }
      param_1[0xd] = (long)puVar14;
      func_0x0412a280(puVar27,uVar24);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      lVar30 = 0;
      unaff_R14 = param_1;
    }
    if (uVar26 < 0xaaaaaaaaaaaaaab) {
      uVar24 = (lVar30 >> 3) * 0x5555555555555556;
      if (uVar26 < uVar24) {
        uVar26 = uVar24;
      }
      if (0x555555555555554 < (ulong)((lVar30 >> 3) * -0x5555555555555555)) {
        uVar26 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar26 < 0xaaaaaaaaaaaaaab) {
        puVar14 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26 * 0x18);
        if (puVar14 == (undefined1 *)0x0) {
          func_0x0eec74c0(uVar26 * 0x18,0);
        }
        param_1[0xc] = (long)puVar14;
        param_1[0xd] = (long)puVar14;
        param_1[0xe] = (long)(puVar14 + uVar26 * 0x18);
        for (; plVar16 != plStack_68; plVar16 = plVar16 + 3) {
          *puVar14 = (char)*plVar16;
          lVar30 = plVar16[2];
          lVar29 = plVar16[2];
          *(long *)(puVar14 + 8) = plVar16[1];
          *(long *)(puVar14 + 0x10) = lVar29;
          if (lVar30 != 0) {
            LOCK();
            plVar18 = (long *)(lVar30 + 8);
            *plVar18 = *plVar18 + 1;
            UNLOCK();
          }
          puVar14 = puVar14 + 0x18;
        }
        param_1[0xd] = (long)puVar14;
        goto LAB_0d5cdfec;
      }
    }
  }
  func_0x0d5d8070();
LAB_0d5ce2d9:
  uVar17 = func_0x0d5d7fb0();
  func_0x04108700(uVar17);
  func_0x0d5d89d0(unaff_R14);
  uVar17 = func_0x04108a60();
  func_0x0d5d8a50(&plStack_60);
  func_0x0eee2d70(uVar17);
  pcVar8 = (code *)swi(3);
  plVar16 = (long *)(*pcVar8)();
  return plVar16;
LAB_0d5ce235:
  puVar21 = (undefined8 *)*puVar28;
  plVar16 = (long *)puVar28[6];
  if (plVar16 == (long *)0x0) {
LAB_0d5ce253:
    bVar6 = *(byte *)(puVar28 + 2);
  }
  else {
    LOCK();
    plVar18 = plVar16 + 1;
    lVar30 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar30 != 0) goto LAB_0d5ce253;
    (**(code **)(*plVar16 + 0x10))(plVar16);
    func_0x0412c2d0(plVar16);
    bVar6 = *(byte *)(puVar28 + 2);
  }
  if ((bVar6 & 1) != 0) {
    func_0x0412a280(puVar28[4],puVar28[2] & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar28,0x38);
  puVar28 = puVar21;
  if (puVar21 == (undefined8 *)0x0) {
    return param_1;
  }
  goto LAB_0d5ce235;
}


