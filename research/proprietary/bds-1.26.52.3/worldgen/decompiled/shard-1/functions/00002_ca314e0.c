/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb314e0 (ELF vaddr 0xca314e0)
 * Label: WorldGenerator::vslot9
 * Body:  [[0cb314e0, 0cb31648] [0cb31650, 0cb31945] [0cb31950, 0cb31e94] [0cb31ea0, 0cb31f1b] [0cb31f20, 0cb32089] [0cb32090, 0cb320d0] [0cb320e0, 0cb32197] [0cb321a0, 0cb321de] [0cb321e0, 0cb3222d] [0cb32230, 0cb3234c] [0cb32350, 0cb32366] [0cb32370, 0cb3263d] [0cb326c2, 0cb3271e]]
 * Ghidra: wg_WorldGenerator__vslot9
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
wg_WorldGenerator__vslot9
          (undefined8 *param_1,long *param_2,undefined8 param_3,int param_4,undefined1 param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  float *pfVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_f8;
  int iStack_f4;
  long *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plStack_f0 = param_2;
  (**(code **)(*param_2 + 0x20))(&uStack_e8);
  if (CONCAT44(uStack_e4,uStack_e8) == 0) {
    (**(code **)(*plStack_f0 + 0x40))(&uStack_a8,plStack_f0,param_3,param_4,param_5);
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uVar4 = (undefined4)uStack_a0;
    uVar5 = uStack_a0._4_4_;
    uStack_a8 = (long *)0x0;
    uStack_a0 = (long *)0x0;
    plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
    uStack_e0 = uVar4;
    uStack_dc = uVar5;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        func_0x0412c2d0(plVar11);
      }
    }
    plVar11 = uStack_a0;
    if (uStack_a0 == (long *)0x0) {
LAB_0cb315a2:
      lVar12 = CONCAT44(uStack_e4,uStack_e8);
    }
    else {
      LOCK();
      plVar8 = uStack_a0 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 != 0) goto LAB_0cb315a2;
      (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
      func_0x0412c2d0(plVar11);
      lVar12 = CONCAT44(uStack_e4,uStack_e8);
    }
    if (lVar12 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
      if (plVar11 == (long *)0x0) {
        return param_1;
      }
      LOCK();
      plVar8 = plVar11 + 1;
      lVar12 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar12 != 0) {
        return param_1;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
      return param_1;
    }
    lVar14 = plStack_f0[5];
    lVar9 = plStack_f0[8];
    *(undefined8 *)(lVar12 + 0x1120) = *(undefined8 *)(lVar12 + 0x50);
    *(undefined4 *)(lVar12 + 0x1140) = *(undefined4 *)(lVar14 + 0x3c8);
    *(undefined8 *)(lVar12 + 0x1148) = *(undefined8 *)(lVar14 + 0x3d0);
    *(undefined4 *)(lVar12 + 0x1150) = *(undefined4 *)(lVar9 + 200);
    *(undefined4 *)(lVar12 + 0x1154) = *(undefined4 *)(lVar9 + 0xcc);
    pfVar18 = *(float **)(lVar14 + 0x3b0);
    pfVar1 = *(float **)(lVar14 + 0x3b8);
    if (pfVar18 != pfVar1) {
      bVar24 = *(byte *)(lVar12 + 0x113c);
      fVar30 = _DAT_011987f4;
      do {
        fVar31 = *pfVar18 - (float)(int)(*(int *)(lVar12 + 0x50) << 4 | 8);
        fVar32 = pfVar18[2] - (float)(int)(*(int *)(lVar12 + 0x54) << 4 | 8);
        fVar31 = fVar31 * fVar31 + fVar32 * fVar32;
        if (fVar31 < fVar30) {
          *(float *)(lVar12 + 0x1138) = pfVar18[4];
          uVar15 = *(undefined8 *)(pfVar18 + 2);
          *(undefined8 *)(lVar12 + 0x1128) = *(undefined8 *)pfVar18;
          *(undefined8 *)(lVar12 + 0x1130) = uVar15;
          fVar30 = fVar31;
          if ((bVar24 & 1) == 0) {
            *(undefined1 *)(lVar12 + 0x113c) = 1;
            bVar24 = 1;
          }
        }
        pfVar18 = pfVar18 + 5;
      } while (pfVar18 != pfVar1);
    }
    (**(code **)(**(long **)(CONCAT44(uStack_e4,uStack_e8) + 0x28) + 0x9f0))();
    cVar6 = *(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8);
  }
  else {
    cVar6 = *(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8);
  }
  if ((cVar6 == '\v') ||
     (((((long *)plStack_f0[4] != (long *)0x0 &&
        (cVar6 = (**(code **)(*(long *)plStack_f0[4] + 0xb08))(), cVar6 != '\0')) || (param_4 != 1))
      || ((CONCAT44(uStack_e4,uStack_e8) == 0 ||
          (cVar6 = (**(code **)(*plStack_f0 + 0x130))(), cVar6 == '\0')))))) {
LAB_0cb3251e:
    *param_1 = CONCAT44(uStack_e4,uStack_e8);
    param_1[1] = CONCAT44(uStack_dc,uStack_e0);
    return param_1;
  }
  plStack_90 = (long *)CONCAT44(uStack_e4,uStack_e8);
  plVar11 = (long *)CONCAT44(uStack_dc,uStack_e0);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
  }
  plStack_68 = plStack_90;
  uStack_60 = plVar11;
  uStack_40 = param_3;
  puStack_38 = param_1;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0f3f22b0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  *(undefined4 *)(plVar8 + 7) = 0x3f800000;
  plVar8[8] = 0;
  *(undefined4 *)(plVar8 + 9) = 0;
  plVar8[10] = 0;
  LOCK();
  plVar8[10] = 0;
  UNLOCK();
  plVar19 = (long *)plStack_f0[8];
  lVar9 = func_0x0eee2fc0();
  lVar14 = *plVar19;
  LOCK();
  lVar12 = plVar19[2];
  bVar29 = lVar14 == lVar12;
  if (bVar29) {
    plVar19[2] = lVar9;
    lVar12 = lVar14;
  }
  UNLOCK();
  plStack_88 = plVar19;
  if (!bVar29) {
    iVar17 = 3000;
    do {
      while( true ) {
        if ((lVar12 == lVar9) && (iVar7 = (int)plVar19[1] + 1, iVar7 != -1)) {
          *(int *)(plVar19 + 1) = iVar7;
          goto LAB_0cb317e6;
        }
        if (iVar17 == 0) break;
        iVar17 = iVar17 + -1;
        lVar14 = *plVar19;
        LOCK();
        lVar12 = plVar19[2];
        bVar29 = lVar14 == lVar12;
        if (bVar29) {
          plVar19[2] = lVar9;
          lVar12 = lVar14;
        }
        UNLOCK();
        if (bVar29) goto LAB_0cb317df;
      }
      func_0x0eee35d0();
      iVar17 = 0;
      lVar14 = *plStack_88;
      LOCK();
      lVar12 = plStack_88[2];
      bVar29 = lVar14 == lVar12;
      if (bVar29) {
        plStack_88[2] = lVar9;
        lVar12 = lVar14;
      }
      UNLOCK();
      plVar19 = plStack_88;
    } while (!bVar29);
  }
LAB_0cb317df:
  *(undefined4 *)(plVar19 + 1) = 1;
LAB_0cb317e6:
  plStack_78 = plVar8 + 1;
  plStack_b0 = plStack_90 + 10;
  uStack_c8 = (long *)plStack_f0[8];
  plStack_b8 = (long *)((long)uStack_c8 + 0x18);
  uVar10 = (long)(int)plStack_90[10] + 0x9e3779b9;
  puVar22 = (undefined8 *)
            ((uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + (long)*(int *)((long)plStack_90 + 0x54) ^
            uVar10);
  puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
  plStack_48 = plVar11;
  if (puVar16 != (undefined8 *)0x0) {
    uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      param_1 = (undefined8 *)((long)puVar16 - 1U & (ulong)puVar22);
    }
    else {
      param_1 = puVar22;
      if (puVar16 <= puVar22) {
        param_1 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
      }
    }
    puVar26 = *(undefined8 **)(*plStack_b8 + (long)param_1 * 8);
    if ((puVar26 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar26, plVar11 != (long *)0x0)) {
      if ((byte)(uVar10 >> 0x38) < 2) {
        do {
          if ((undefined8 *)plVar11[1] == puVar22) {
            if (plVar11[2] == *plStack_b0) goto LAB_0cb31e35;
          }
          else if ((undefined8 *)((ulong)plVar11[1] & (long)puVar16 - 1U) != param_1) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar26 = (undefined8 *)plVar11[1];
          if (puVar26 == puVar22) {
            if (plVar11[2] == *plStack_b0) goto LAB_0cb31e35;
          }
          else {
            if (puVar16 <= puVar26) {
              if (((ulong)puVar26 | (ulong)puVar16) >> 0x20 == 0) {
                if ((undefined8 *)(((ulong)puVar26 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) ==
                    param_1) goto LAB_0cb319d4;
                break;
              }
              puVar26 = (undefined8 *)((ulong)puVar26 % (ulong)puVar16);
            }
            if (puVar26 != param_1) break;
          }
LAB_0cb319d4:
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uStack_a0 = plStack_b8;
  uStack_98 = 1;
  *plVar11 = 0;
  plVar11[1] = (long)puVar22;
  plVar11[2] = *plStack_b0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  fVar30 = (float)(*(long *)((long)uStack_c8 + 0x30) + 1);
  uStack_a8 = plVar11;
  if ((puVar16 == (undefined8 *)0x0) ||
     ((float)puVar16 * *(float *)((long)uStack_c8 + 0x38) < fVar30)) {
    uVar10 = 1;
    if ((undefined8 *)0x2 < puVar16) {
      uVar10 = (ulong)(((ulong)puVar16 & (long)puVar16 - 1U) != 0);
    }
    puVar28 = (undefined8 *)(uVar10 | (long)puVar16 * 2);
    fVar30 = (float)func_0x0eee3ab0(fVar30 / *(float *)((long)uStack_c8 + 0x38));
    puVar26 = (undefined8 *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
    if (puVar26 < puVar28) {
      puVar26 = puVar28;
    }
    puVar28 = (undefined8 *)0x2;
    if ((puVar26 != (undefined8 *)0x1) &&
       (puVar28 = puVar26, ((ulong)puVar26 & (long)puVar26 - 1U) != 0)) {
      puVar28 = (undefined8 *)func_0x0412c3f0();
      puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
    }
    if (puVar16 < puVar28) {
LAB_0cb31b8b:
      if ((ulong)puVar28 >> 0x3d != 0) {
        uVar15 = func_0x04882eb0();
        uVar15 = func_0x04882e20(uVar15);
        FUN_0cb57b80(&uStack_a8);
        func_0x0eee0720(plStack_88);
        LOCK();
        lVar12 = *plStack_78;
        *plStack_78 = *plStack_78 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
        FUN_04a7efb0(&plStack_68);
        FUN_04a7efb0(&uStack_e8);
        uVar15 = func_0x0eee2d70(uVar15);
        func_0x04882e20(uVar15);
        pcVar3 = (code *)swi(3);
        puVar16 = (undefined8 *)(*pcVar3)();
        return puVar16;
      }
      lStack_80 = (long)puVar28 * 8;
      puStack_50 = puVar28;
      lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar12 == 0) {
        func_0x0eec74c0(lStack_80,0);
      }
      lVar2 = (long)uStack_c8;
      lVar14 = *plStack_b8;
      *plStack_b8 = lVar12;
      puStack_58 = puVar22;
      if (lVar14 != 0) {
        func_0x0412a280(lVar14,*(long *)((long)uStack_c8 + 0x20) << 3);
        lVar12 = *(long *)(lVar2 + 0x18);
      }
      puVar16 = puStack_50;
      *(undefined8 **)(lVar2 + 0x20) = puStack_50;
      memset(lVar12,0,lStack_80);
      plVar19 = *(long **)(lVar2 + 0x28);
      puVar22 = puStack_58;
      if (plVar19 != (long *)0x0) {
        puVar26 = (undefined8 *)plVar19[1];
        uVar10 = (long)puVar16 - 1;
        if (((ulong)puVar16 & uVar10) == 0) {
          *(long *)(lVar12 + ((ulong)puVar26 & uVar10) * 8) = (long)uStack_c8 + 0x28;
          uVar13 = (ulong)puVar26 & uVar10;
          while (plVar27 = plVar19, plVar19 = (long *)*plVar27, plVar19 != (long *)0x0) {
            uVar20 = plVar19[1] & uVar10;
            if (uVar20 != uVar13) {
              if (*(long *)(lVar12 + uVar20 * 8) == 0) {
                *(long **)(lVar12 + uVar20 * 8) = plVar27;
                uVar13 = uVar20;
              }
              else {
                *plVar27 = *plVar19;
                *plVar19 = **(undefined8 **)(lVar12 + uVar20 * 8);
                **(long **)(lVar12 + uVar20 * 8) = (long)plVar19;
                plVar19 = plVar27;
              }
            }
          }
        }
        else {
          if (puVar16 <= puVar26) {
            if (((ulong)puVar26 | (ulong)puVar16) >> 0x20 == 0) {
              puVar26 = (undefined8 *)
                        (((ulong)puVar26 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
            }
            else {
              puVar26 = (undefined8 *)((ulong)puVar26 % (ulong)puVar16);
            }
          }
          *(long *)(lVar12 + (long)puVar26 * 8) = (long)uStack_c8 + 0x28;
          plVar27 = (long *)*plVar19;
          while (plVar27 != (long *)0x0) {
            puVar28 = (undefined8 *)plVar27[1];
            if (puVar16 <= puVar28) {
              if (((ulong)puVar28 | (ulong)puVar16) >> 0x20 == 0) {
                puVar28 = (undefined8 *)
                          (((ulong)puVar28 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff));
              }
              else {
                puVar28 = (undefined8 *)((ulong)puVar28 % (ulong)puVar16);
              }
            }
            if (puVar28 != puVar26) {
              if (*(long *)(lVar12 + (long)puVar28 * 8) == 0) {
                *(long **)(lVar12 + (long)puVar28 * 8) = plVar19;
                puVar26 = puVar28;
              }
              else {
                *plVar19 = *plVar27;
                *plVar27 = **(long **)(lVar12 + (long)puVar28 * 8);
                **(undefined8 **)(lVar12 + (long)puVar28 * 8) = plVar27;
                plVar27 = plVar19;
              }
            }
            plVar19 = plVar27;
            plVar27 = (long *)*plVar19;
          }
        }
      }
    }
    else if (puVar28 < puVar16) {
      fVar30 = (float)func_0x0eee3ab0((float)*(ulong *)((long)uStack_c8 + 0x30) /
                                      *(float *)((long)uStack_c8 + 0x38));
      puVar26 = (undefined8 *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
      ;
      if ((puVar16 < (undefined8 *)0x3) ||
         (uVar10 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555),
         uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
         1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puVar26 = (undefined8 *)func_0x0412c3f0();
      }
      else if ((undefined8 *)0x1 < puVar26) {
        lVar12 = 0x3f;
        if ((long)puVar26 - 1U != 0) {
          for (; (long)puVar26 - 1U >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        puVar26 = (undefined8 *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
      }
      lVar12 = (long)uStack_c8;
      if (puVar26 < puVar28) {
        puVar26 = puVar28;
      }
      if (puVar26 < puVar16) {
        puVar28 = puVar26;
        if (puVar26 != (undefined8 *)0x0) goto LAB_0cb31b8b;
        lVar14 = *plStack_b8;
        *plStack_b8 = 0;
        if (lVar14 != 0) {
          func_0x0412a280(lVar14,*(long *)((long)uStack_c8 + 0x20) << 3);
        }
        *(undefined8 *)(lVar12 + 0x20) = 0;
      }
    }
    puVar16 = *(undefined8 **)((long)uStack_c8 + 0x20);
    if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
      param_1 = (undefined8 *)((ulong)puVar22 & (long)puVar16 - 1U);
    }
    else {
      param_1 = puVar22;
      if (puVar16 <= puVar22) {
        param_1 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
      }
    }
  }
  lVar12 = *plStack_b8;
  plVar19 = *(long **)(lVar12 + (long)param_1 * 8);
  if (plVar19 == (long *)0x0) {
    *plVar11 = *(long *)((long)uStack_c8 + 0x28);
    *(long **)((long)uStack_c8 + 0x28) = plVar11;
    *(long *)(lVar12 + (long)param_1 * 8) = (long)uStack_c8 + 0x28;
    if (*plVar11 != 0) {
      puVar22 = *(undefined8 **)(*plVar11 + 8);
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        *(long **)(lVar12 + ((ulong)puVar22 & (long)puVar16 - 1U) * 8) = plVar11;
      }
      else {
        if (puVar16 <= puVar22) {
          if (((ulong)puVar22 | (ulong)puVar16) >> 0x20 == 0) {
            *(long **)(lVar12 + (((ulong)puVar22 & 0xffffffff) % ((ulong)puVar16 & 0xffffffff)) * 8)
                 = plVar11;
            goto LAB_0cb31e31;
          }
          puVar22 = (undefined8 *)((ulong)puVar22 % (ulong)puVar16);
        }
        *(long **)(lVar12 + (long)puVar22 * 8) = plVar11;
      }
    }
  }
  else {
    *plVar11 = *plVar19;
    *plVar19 = (long)plVar11;
  }
LAB_0cb31e31:
  *(long *)((long)uStack_c8 + 0x30) = *(long *)((long)uStack_c8 + 0x30) + 1;
LAB_0cb31e35:
  LOCK();
  plVar8[1] = plVar8[1] + 1;
  UNLOCK();
  plVar11[3] = (long)(plVar8 + 3);
  plVar19 = (long *)plVar11[4];
  plVar11[4] = (long)plVar8;
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    lVar12 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
  }
  uStack_c8 = plVar8 + 8;
  iVar17 = *(int *)((long)plStack_90 + 0x54);
  iStack_f8 = (int)plStack_90[10] + -1;
  do {
    iStack_f4 = iVar17 + -1;
    do {
      (**(code **)(*plStack_f0 + 0x20))(&uStack_a8,plStack_f0,&iStack_f8);
      plVar19 = uStack_a0;
      plVar11 = uStack_a8;
      if (uStack_a8 != (long *)0x0) {
        if (uStack_a0 != (long *)0x0) {
          LOCK();
          uStack_a0[2] = uStack_a0[2] + 1;
          UNLOCK();
        }
        lVar14 = plVar8[8];
        LOCK();
        lVar12 = plVar8[10];
        bVar29 = lVar14 == lVar12;
        if (bVar29) {
          plVar8[10] = lVar9;
          lVar12 = lVar14;
        }
        UNLOCK();
        if (!bVar29) {
          iVar17 = 3000;
          do {
            while( true ) {
              if ((lVar12 == lVar9) && (iVar7 = (int)plVar8[9] + 1, iVar7 != -1)) goto LAB_0cb31f5f;
              if (iVar17 == 0) break;
              iVar17 = iVar17 + -1;
              lVar14 = plVar8[8];
              LOCK();
              lVar12 = plVar8[10];
              bVar29 = lVar14 == lVar12;
              if (bVar29) {
                plVar8[10] = lVar9;
                lVar12 = lVar14;
              }
              UNLOCK();
              if (bVar29) goto LAB_0cb31f5a;
            }
            func_0x0eee35d0();
            iVar17 = 0;
            lVar14 = plVar8[8];
            LOCK();
            lVar12 = plVar8[10];
            bVar29 = lVar14 == lVar12;
            if (bVar29) {
              plVar8[10] = lVar9;
              lVar12 = lVar14;
            }
            UNLOCK();
          } while (!bVar29);
        }
LAB_0cb31f5a:
        iVar7 = 1;
LAB_0cb31f5f:
        *(int *)(plVar8 + 9) = iVar7;
        puStack_70 = (undefined1 *)&iStack_f8;
        lVar12 = func_0x0caaf3d0(plVar8 + 3,&iStack_f8,&UNK_01563a4f,&puStack_70,&uStack_c9);
        if (plVar19 != (long *)0x0) {
          LOCK();
          plVar19[2] = plVar19[2] + 1;
          UNLOCK();
        }
        *(long **)(lVar12 + 0x18) = plVar11;
        lVar14 = *(long *)(lVar12 + 0x20);
        *(long **)(lVar12 + 0x20) = plVar19;
        if (lVar14 != 0) {
          func_0x0412c2d0();
        }
        if (plVar8[10] == lVar9) {
          iVar17 = (int)plVar8[9];
          if (iVar17 == 1) {
            *(undefined4 *)(plVar8 + 9) = 0;
            plVar8[10] = plVar8[8];
          }
          else {
            if (iVar17 == 0) goto LAB_0cb31fc7;
            *(int *)(plVar8 + 9) = iVar17 + -1;
          }
        }
        else {
LAB_0cb31fc7:
          cVar6 = FUN_0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
          if (cVar6 != '\0') {
            _DAT_00000000 = 0xdeadc0de;
          }
        }
        if (plVar19 != (long *)0x0) {
          func_0x0412c2d0(plVar19);
        }
      }
      plVar11 = uStack_a0;
      if (uStack_a0 != (long *)0x0) {
        LOCK();
        plVar19 = uStack_a0 + 1;
        lVar12 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
          func_0x0412c2d0(plVar11);
        }
      }
      iVar17 = *(int *)((long)plStack_90 + 0x54);
      bVar29 = iStack_f4 <= iVar17;
      iStack_f4 = iStack_f4 + 1;
    } while (bVar29);
    iVar7 = (int)*plStack_b0;
    bVar29 = iStack_f8 <= iVar7;
    iStack_f8 = iStack_f8 + 1;
  } while (bVar29);
  iStack_f8 = iVar7 + -1;
LAB_0cb320aa:
  iVar23 = iVar17 + -1;
  if (*(long *)(plStack_f0[8] + 0x20) != 0) {
LAB_0cb320f7:
    plVar11 = uStack_60;
    uVar10 = *(ulong *)(plStack_f0[8] + 0x20);
    iStack_f4 = iVar23;
    if (uVar10 != 0) {
      uVar13 = (long)iStack_f8 + 0x9e3779b9;
      uVar13 = (long)iVar23 + 0x9e3779b9 + uVar13 * 0x40 + (uVar13 >> 2) ^ uVar13;
      uVar20 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
      uVar20 = ((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar20 >> 0x38 < 2) {
        uVar21 = uVar10 - 1 & uVar13;
      }
      else {
        uVar21 = uVar13;
        if (uVar10 <= uVar13) {
          uVar21 = uVar13 % uVar10;
        }
      }
      plVar19 = *(long **)(*(long *)(plStack_f0[8] + 0x18) + uVar21 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if ((byte)(uVar20 >> 0x38) < 2) {
          do {
            if (plVar19[1] == uVar13) {
              if (plVar19[2] == CONCAT44(iVar23,iStack_f8)) goto LAB_0cb32258;
            }
            else if ((plVar19[1] & uVar10 - 1) != uVar21) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar19[1];
            if (uVar20 == uVar13) {
              if (plVar19[2] == CONCAT44(iVar23,iStack_f8)) goto LAB_0cb32258;
            }
            else {
              if (uVar10 <= uVar20) {
                if ((uVar20 | uVar10) >> 0x20 == 0) {
                  if ((uVar20 & 0xffffffff) % (uVar10 & 0xffffffff) == uVar21) goto LAB_0cb321e6;
                  break;
                }
                uVar20 = uVar20 % uVar10;
              }
              if (uVar20 != uVar21) break;
            }
LAB_0cb321e6:
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0cb320e0;
  }
  iVar25 = iVar17 + 1;
  if (iVar17 + 1 < iVar23) {
    iVar25 = iVar23;
  }
  iStack_f4 = iVar25 + 1;
  goto LAB_0cb3209a;
LAB_0cb32258:
  lVar12 = plVar19[3];
  if (lVar12 == 0) goto LAB_0cb320e0;
  uStack_c8 = plStack_68;
  uStack_c0 = (undefined4)uStack_60;
  uStack_bc = uStack_60._4_4_;
  if (uStack_60 != (long *)0x0) {
    LOCK();
    uStack_60[2] = uStack_60[2] + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(lVar12 + 0x28);
  LOCK();
  lVar14 = *(long *)(lVar12 + 0x38);
  bVar29 = lVar2 == lVar14;
  if (bVar29) {
    *(long *)(lVar12 + 0x38) = lVar9;
    lVar14 = lVar2;
  }
  UNLOCK();
  if (!bVar29) {
    iVar17 = 3000;
    do {
      while( true ) {
        if ((lVar14 == lVar9) && (iVar7 = *(int *)(lVar12 + 0x30) + 1, iVar7 != -1)) {
          *(int *)(lVar12 + 0x30) = iVar7;
          goto LAB_0cb3229c;
        }
        if (iVar17 == 0) break;
        iVar17 = iVar17 + -1;
        lVar2 = *(long *)(lVar12 + 0x28);
        LOCK();
        lVar14 = *(long *)(lVar12 + 0x38);
        bVar29 = lVar2 == lVar14;
        if (bVar29) {
          *(long *)(lVar12 + 0x38) = lVar9;
          lVar14 = lVar2;
        }
        UNLOCK();
        if (bVar29) goto LAB_0cb32294;
      }
      func_0x0eee35d0();
      iVar17 = 0;
      lVar2 = *(long *)(lVar12 + 0x28);
      LOCK();
      lVar14 = *(long *)(lVar12 + 0x38);
      bVar29 = lVar2 == lVar14;
      if (bVar29) {
        *(long *)(lVar12 + 0x38) = lVar9;
        lVar14 = lVar2;
      }
      UNLOCK();
    } while (!bVar29);
  }
LAB_0cb32294:
  *(undefined4 *)(lVar12 + 0x30) = 1;
LAB_0cb3229c:
  uStack_a8 = plStack_b0;
  lVar14 = func_0x0caaf3d0(lVar12,plStack_b0,&UNK_01563a4f,&uStack_a8,&puStack_70);
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar11[2] = plVar11[2] + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(lVar14 + 0x20);
  *(undefined4 *)(lVar14 + 0x18) = (undefined4)uStack_c8;
  *(undefined4 *)(lVar14 + 0x1c) = uStack_c8._4_4_;
  *(undefined4 *)(lVar14 + 0x20) = uStack_c0;
  *(undefined4 *)(lVar14 + 0x24) = uStack_bc;
  if (lVar2 != 0) {
    func_0x0412c2d0();
  }
  if (*(long *)(lVar12 + 0x38) == lVar9) {
    iVar17 = *(int *)(lVar12 + 0x30);
    if (iVar17 == 1) {
      *(undefined4 *)(lVar12 + 0x30) = 0;
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar12 + 0x28);
    }
    else {
      if (iVar17 == 0) goto LAB_0cb32305;
      *(int *)(lVar12 + 0x30) = iVar17 + -1;
    }
  }
  else {
LAB_0cb32305:
    cVar6 = FUN_0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  if (plVar11 != (long *)0x0) {
    func_0x0412c2d0(plVar11);
  }
LAB_0cb320e0:
  iVar23 = iStack_f4 + 1;
  iVar17 = *(int *)((long)plStack_90 + 0x54);
  if (iVar17 < iStack_f4) goto LAB_0cb32090;
  goto LAB_0cb320f7;
LAB_0cb32090:
  iVar7 = (int)*plStack_b0;
  iStack_f4 = iVar23;
LAB_0cb3209a:
  plVar11 = plStack_48;
  iVar23 = iStack_f8 + 1;
  bVar29 = iVar7 < iStack_f8;
  iStack_f8 = iVar23;
  if (bVar29) goto LAB_0cb323d6;
  goto LAB_0cb320aa;
LAB_0cb323d6:
  if (plStack_88[2] == lVar9) {
    iVar17 = (int)plStack_88[1];
    if (iVar17 == 1) {
      *(undefined4 *)(plStack_88 + 1) = 0;
      plStack_88[2] = *plStack_88;
    }
    else {
      if (iVar17 == 0) goto LAB_0cb323fc;
      *(int *)(plStack_88 + 1) = iVar17 + -1;
    }
  }
  else {
LAB_0cb323fc:
    cVar6 = FUN_0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  LOCK();
  lVar12 = *plStack_78;
  *plStack_78 = *plStack_78 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    func_0x0412c2d0(plVar8);
  }
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar12 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      func_0x0412c2d0(plVar11);
    }
  }
  param_1 = puStack_38;
  if (*(char *)(CONCAT44(uStack_e4,uStack_e8) + 0xb8) == '\0') {
    func_0x0cb30ba0(plStack_f0[8],uStack_40,0);
  }
  else {
    func_0x0cb2f260(plStack_f0,*(undefined8 *)(CONCAT44(uStack_e4,uStack_e8) + 0x50));
  }
  goto LAB_0cb3251e;
}



/* ---- assembly ---- */
/* 0cb314e0 */  PUSH RBP
/* 0cb314e1 */  PUSH R15
/* 0cb314e3 */  PUSH R14
/* 0cb314e5 */  PUSH R13
/* 0cb314e7 */  PUSH R12
/* 0cb314e9 */  PUSH RBX
/* 0cb314ea */  SUB RSP,0xc8
/* 0cb314f1 */  MOV EBP,R8D
/* 0cb314f4 */  MOV EBX,ECX
/* 0cb314f6 */  MOV R12,RDX
/* 0cb314f9 */  MOV R15,RDI
/* 0cb314fc */  MOV RAX,qword ptr [RSI]
/* 0cb314ff */  LEA RDI,[RSP + 0x10]
/* 0cb31504 */  MOV qword ptr [RSP + 0x8],RSI
/* 0cb31509 */  CALL qword ptr [RAX + 0x20]
/* 0cb3150c */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb31511 */  TEST RAX,RAX
/* 0cb31514 */  JZ 0x0cb3152a
/* 0cb31516 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0cb3151d */  CMP AL,0xb
/* 0cb3151f */  JNZ 0x0cb316c7
/* 0cb31525 */  JMP 0x0cb3251e
/* 0cb3152a */  MOV RSI,qword ptr [RSP + 0x8]
/* 0cb3152f */  MOV RAX,qword ptr [RSI]
/* 0cb31532 */  MOVZX R8D,BPL
/* 0cb31536 */  LEA RDI,[RSP + 0x50]
/* 0cb3153b */  MOV RDX,R12
/* 0cb3153e */  MOV ECX,EBX
/* 0cb31540 */  CALL qword ptr [RAX + 0x40]
/* 0cb31543 */  MOVAPS XMM0,xmmword ptr [RSP + 0x50]
/* 0cb31548 */  XORPS XMM1,XMM1
/* 0cb3154b */  MOVAPS xmmword ptr [RSP + 0x50],XMM1
/* 0cb31550 */  MOV R14,qword ptr [RSP + 0x18]
/* 0cb31555 */  MOVAPS xmmword ptr [RSP + 0x10],XMM0
/* 0cb3155a */  TEST R14,R14
/* 0cb3155d */  JZ 0x0cb31582
/* 0cb3155f */  MOV RAX,-0x1
/* 0cb31566 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb3156c */  TEST RAX,RAX
/* 0cb3156f */  JNZ 0x0cb31582
/* 0cb31571 */  MOV RAX,qword ptr [R14]
/* 0cb31574 */  MOV RDI,R14
/* 0cb31577 */  CALL qword ptr [RAX + 0x10]
/* 0cb3157a */  MOV RDI,R14
/* 0cb3157d */  CALL 0x0412c2d0
/* 0cb31582 */  MOV R14,qword ptr [RSP + 0x58]
/* 0cb31587 */  TEST R14,R14
/* 0cb3158a */  JZ 0x0cb315a2
/* 0cb3158c */  MOV RAX,-0x1
/* 0cb31593 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb31599 */  TEST RAX,RAX
/* 0cb3159c */  JZ 0x0cb318c9
/* 0cb315a2 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb315a7 */  TEST RAX,RAX
/* 0cb315aa */  JZ 0x0cb318e8
/* 0cb315b0 */  MOV RCX,qword ptr [RSP + 0x8]
/* 0cb315b5 */  MOV RDX,qword ptr [RCX + 0x28]
/* 0cb315b9 */  MOV RCX,qword ptr [RCX + 0x40]
/* 0cb315bd */  MOV RSI,qword ptr [RAX + 0x50]
/* 0cb315c1 */  MOV qword ptr [RAX + 0x1120],RSI
/* 0cb315c8 */  MOV ESI,dword ptr [RDX + 0x3c8]
/* 0cb315ce */  MOV dword ptr [RAX + 0x1140],ESI
/* 0cb315d4 */  MOV RSI,qword ptr [RDX + 0x3d0]
/* 0cb315db */  MOV qword ptr [RAX + 0x1148],RSI
/* 0cb315e2 */  MOV ESI,dword ptr [RCX + 0xc8]
/* 0cb315e8 */  MOV dword ptr [RAX + 0x1150],ESI
/* 0cb315ee */  MOV ECX,dword ptr [RCX + 0xcc]
/* 0cb315f4 */  MOV dword ptr [RAX + 0x1154],ECX
/* 0cb315fa */  MOV RCX,qword ptr [RDX + 0x3b0]
/* 0cb31601 */  MOV RDX,qword ptr [RDX + 0x3b8]
/* 0cb31608 */  CMP RCX,RDX
/* 0cb3160b */  JZ 0x0cb316a1
/* 0cb31611 */  MOV ESI,dword ptr [RAX + 0x50]
/* 0cb31614 */  MOV EDI,dword ptr [RAX + 0x54]
/* 0cb31617 */  SHL ESI,0x4
/* 0cb3161a */  OR ESI,0x8
/* 0cb3161d */  XORPS XMM0,XMM0
/* 0cb31620 */  CVTSI2SS XMM0,ESI
/* 0cb31624 */  SHL EDI,0x4
/* 0cb31627 */  OR EDI,0x8
/* 0cb3162a */  XORPS XMM1,XMM1
/* 0cb3162d */  CVTSI2SS XMM1,EDI
/* 0cb31631 */  LEA RSI,[RAX + 0x1128]
/* 0cb31638 */  MOVZX EDI,byte ptr [RAX + 0x113c]
/* 0cb3163f */  MOVSS XMM3,dword ptr [0x011987f4]
/* 0cb31647 */  JMP 0x0cb3165f
/* 0cb31650 */  MOVAPS XMM2,XMM3
/* 0cb31653 */  ADD RCX,0x14
/* 0cb31657 */  MOVAPS XMM3,XMM2
/* 0cb3165a */  CMP RCX,RDX
/* 0cb3165d */  JZ 0x0cb316a1
/* 0cb3165f */  MOVSS XMM2,dword ptr [RCX]
/* 0cb31663 */  SUBSS XMM2,XMM0
/* 0cb31667 */  MOVSS XMM4,dword ptr [RCX + 0x8]
/* 0cb3166c */  SUBSS XMM4,XMM1
/* 0cb31670 */  MULSS XMM4,XMM4
/* 0cb31674 */  MULSS XMM2,XMM2
/* 0cb31678 */  ADDSS XMM2,XMM4
/* 0cb3167c */  UCOMISS XMM3,XMM2
/* 0cb3167f */  JBE 0x0cb31650
/* 0cb31681 */  MOV R8D,dword ptr [RCX + 0x10]
/* 0cb31685 */  MOV dword ptr [RSI + 0x10],R8D
/* 0cb31689 */  MOVUPS XMM3,xmmword ptr [RCX]
/* 0cb3168c */  MOVUPS xmmword ptr [RSI],XMM3
/* 0cb3168f */  TEST DIL,0x1
/* 0cb31693 */  JNZ 0x0cb31653
/* 0cb31695 */  MOV byte ptr [RAX + 0x113c],0x1
/* 0cb3169c */  MOV DIL,0x1
/* 0cb3169f */  JMP 0x0cb31653
/* 0cb316a1 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb316a6 */  MOV RDI,qword ptr [RAX + 0x28]
/* 0cb316aa */  MOV RAX,qword ptr [RDI]
/* 0cb316ad */  CALL qword ptr [RAX + 0x9f0]
/* 0cb316b3 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb316b8 */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0cb316bf */  CMP AL,0xb
/* 0cb316c1 */  JZ 0x0cb3251e
/* 0cb316c7 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0cb316cc */  MOV RDI,qword ptr [RAX + 0x20]
/* 0cb316d0 */  TEST RDI,RDI
/* 0cb316d3 */  JZ 0x0cb316e6
/* 0cb316d5 */  MOV RAX,qword ptr [RDI]
/* 0cb316d8 */  CALL qword ptr [RAX + 0xb08]
/* 0cb316de */  TEST AL,AL
/* 0cb316e0 */  JNZ 0x0cb3251e
/* 0cb316e6 */  CMP EBX,0x1
/* 0cb316e9 */  JNZ 0x0cb3251e
/* 0cb316ef */  CMP qword ptr [RSP + 0x10],0x0
/* 0cb316f5 */  JZ 0x0cb3251e
/* 0cb316fb */  MOV RDI,qword ptr [RSP + 0x8]
/* 0cb31700 */  MOV RAX,qword ptr [RDI]
/* 0cb31703 */  CALL qword ptr [RAX + 0x130]
/* 0cb31709 */  TEST AL,AL
/* 0cb3170b */  JZ 0x0cb3251e
/* 0cb31711 */  MOV qword ptr [RSP + 0xb8],R12
/* 0cb31719 */  MOV qword ptr [RSP + 0xc0],R15
/* 0cb31721 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb31726 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0cb3172b */  MOV qword ptr [RSP + 0x68],RAX
/* 0cb31730 */  MOV qword ptr [RSP + 0x90],RAX
/* 0cb31738 */  MOV qword ptr [RSP + 0x98],RBX
/* 0cb31740 */  TEST RBX,RBX
/* 0cb31743 */  JZ 0x0cb3174a
/* 0cb31745 */  INC.LOCK qword ptr [RBX + 0x8]
/* 0cb3174a */  LEA RDI,[0xf5463b0]
/* 0cb31751 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0cb31758 */  MOV ESI,0x58
/* 0cb3175d */  CALL qword ptr [RAX + 0x10]
/* 0cb31760 */  MOV R12,RAX
/* 0cb31763 */  TEST RAX,RAX
/* 0cb31766 */  JZ 0x0cb325ec
/* 0cb3176c */  XORPS XMM0,XMM0
/* 0cb3176f */  MOVUPS xmmword ptr [R12 + 0x8],XMM0
/* 0cb31775 */  LEA RAX,[0xf3f22b0]
/* 0cb3177c */  MOV qword ptr [R12],RAX
/* 0cb31780 */  MOVUPS xmmword ptr [R12 + 0x18],XMM0
/* 0cb31786 */  MOVUPS xmmword ptr [R12 + 0x28],XMM0
/* 0cb3178c */  MOV dword ptr [R12 + 0x38],0x3f800000
/* 0cb31795 */  MOV qword ptr [R12 + 0x40],0x0
/* 0cb3179e */  MOV dword ptr [R12 + 0x48],0x0
/* 0cb317a7 */  MOV qword ptr [R12 + 0x50],0x0
/* 0cb317b0 */  XOR EAX,EAX
/* 0cb317b2 */  XCHG qword ptr [R12 + 0x50],RAX
/* 0cb317b7 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0cb317bc */  MOV R14,qword ptr [RAX + 0x40]
/* 0cb317c0 */  CALL 0x0eee2fc0
/* 0cb317c5 */  MOV RDX,R14
/* 0cb317c8 */  MOV R13,RAX
/* 0cb317cb */  MOV RAX,qword ptr [R14]
/* 0cb317ce */  CMPXCHG.LOCK qword ptr [R14 + 0x10],R13
/* 0cb317d4 */  MOV qword ptr [RSP + 0x70],R14
/* 0cb317d9 */  JNZ 0x0cb31929
/* 0cb317df */  MOV dword ptr [RDX + 0x8],0x1
/* 0cb317e6 */  LEA RAX,[R12 + 0x8]
/* 0cb317eb */  MOV qword ptr [RSP + 0x80],RAX
/* 0cb317f3 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0cb317f8 */  LEA RAX,[RCX + 0x50]
/* 0cb317fc */  MOV qword ptr [RSP + 0x48],RAX
/* 0cb31801 */  MOV ESI,0x9e3779b9
/* 0cb31806 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0cb3180b */  MOV RDI,qword ptr [RAX + 0x40]
/* 0cb3180f */  MOV qword ptr [RSP + 0x30],RDI
/* 0cb31814 */  LEA RAX,[RDI + 0x18]
/* 0cb31818 */  MOV qword ptr [RSP + 0x40],RAX
/* 0cb3181d */  MOVSXD RAX,dword ptr [RCX + 0x50]
/* 0cb31821 */  ADD RAX,RSI
/* 0cb31824 */  MOVSXD RCX,dword ptr [RCX + 0x54]
/* 0cb31828 */  MOV RDX,RAX
/* 0cb3182b */  SHL RDX,0x6
/* 0cb3182f */  ADD RDX,RCX
/* 0cb31832 */  MOV RBP,RAX
/* 0cb31835 */  SHR RBP,0x2
/* 0cb31839 */  ADD RBP,RSI
/* 0cb3183c */  ADD RBP,RDX
/* 0cb3183f */  XOR RBP,RAX
/* 0cb31842 */  MOV R14,qword ptr [RDI + 0x20]
/* 0cb31846 */  MOV RCX,0x5555555555555555
/* 0cb31850 */  MOV RDX,0x3333333333333333
/* 0cb3185a */  MOV RDI,0xf0f0f0f0f0f0f0f
/* 0cb31864 */  MOV R8,0x101010101010101
/* 0cb3186e */  TEST R14,R14
/* 0cb31871 */  MOV qword ptr [RSP + 0xb0],RBX
/* 0cb31879 */  JZ 0x0cb31982
/* 0cb3187f */  MOV RAX,R14
/* 0cb31882 */  SHR RAX,0x1
/* 0cb31885 */  AND RAX,RCX
/* 0cb31888 */  MOV RCX,R14
/* 0cb3188b */  SUB RCX,RAX
/* 0cb3188e */  MOV RAX,RCX
/* 0cb31891 */  AND RAX,RDX
/* 0cb31894 */  SHR RCX,0x2
/* 0cb31898 */  AND RCX,RDX
/* 0cb3189b */  ADD RCX,RAX
/* 0cb3189e */  MOV RSI,RCX
/* 0cb318a1 */  SHR RSI,0x4
/* 0cb318a5 */  ADD RSI,RCX
/* 0cb318a8 */  AND RSI,RDI
/* 0cb318ab */  IMUL RSI,R8
/* 0cb318af */  SHR RSI,0x38
/* 0cb318b3 */  CMP RSI,0x1
/* 0cb318b7 */  JA 0x0cb31987
/* 0cb318bd */  LEA R15,[R14 + -0x1]
/* 0cb318c1 */  AND R15,RBP
/* 0cb318c4 */  JMP 0x0cb3199a
/* 0cb318c9 */  MOV RAX,qword ptr [R14]
/* 0cb318cc */  MOV RDI,R14
/* 0cb318cf */  CALL qword ptr [RAX + 0x10]
/* 0cb318d2 */  MOV RDI,R14
/* 0cb318d5 */  CALL 0x0412c2d0
/* 0cb318da */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb318df */  TEST RAX,RAX
/* 0cb318e2 */  JNZ 0x0cb315b0
/* 0cb318e8 */  XORPS XMM0,XMM0
/* 0cb318eb */  MOVUPS xmmword ptr [R15],XMM0
/* 0cb318ef */  MOV RBX,qword ptr [RSP + 0x18]
/* 0cb318f4 */  TEST RBX,RBX
/* 0cb318f7 */  JZ 0x0cb32527
/* 0cb318fd */  MOV RAX,-0x1
/* 0cb31904 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0cb3190a */  TEST RAX,RAX
/* 0cb3190d */  JNZ 0x0cb32527
/* 0cb31913 */  MOV RAX,qword ptr [RBX]
/* 0cb31916 */  MOV RDI,RBX
/* 0cb31919 */  CALL qword ptr [RAX + 0x10]
/* 0cb3191c */  MOV RDI,RBX
/* 0cb3191f */  CALL 0x0412c2d0
/* 0cb31924 */  JMP 0x0cb32527
/* 0cb31929 */  MOV ECX,0xbb8
/* 0cb3192e */  JMP 0x0cb3196b
/* 0cb31930 */  TEST ECX,ECX
/* 0cb31932 */  JZ 0x0cb31950
/* 0cb31934 */  DEC ECX
/* 0cb31936 */  MOV RAX,qword ptr [RDX]
/* 0cb31939 */  CMPXCHG.LOCK qword ptr [RDX + 0x10],R13
/* 0cb3193f */  JNZ 0x0cb3196b
/* 0cb31941 */  JMP 0x0cb317df
/* 0cb31950 */  CALL 0x0eee35d0
/* 0cb31955 */  MOV RDX,qword ptr [RSP + 0x70]
/* 0cb3195a */  XOR ECX,ECX
/* 0cb3195c */  MOV RAX,qword ptr [RDX]
/* 0cb3195f */  CMPXCHG.LOCK qword ptr [RDX + 0x10],R13
/* 0cb31965 */  JZ 0x0cb317df
/* 0cb3196b */  CMP RAX,R13
/* 0cb3196e */  JNZ 0x0cb31930
/* 0cb31970 */  MOV EAX,dword ptr [RDX + 0x8]
/* 0cb31973 */  INC EAX
/* 0cb31975 */  CMP EAX,-0x1
/* 0cb31978 */  JZ 0x0cb31930
/* 0cb3197a */  MOV dword ptr [RDX + 0x8],EAX
/* 0cb3197d */  JMP 0x0cb317e6
/* 0cb31982 */  JMP 0x0cb31a36
/* 0cb31987 */  MOV R15,RBP
/* 0cb3198a */  CMP RBP,R14
/* 0cb3198d */  JC 0x0cb3199a
/* 0cb3198f */  MOV RAX,RBP
/* 0cb31992 */  XOR EDX,EDX
/* 0cb31994 */  DIV R14
/* 0cb31997 */  MOV R15,RDX
/* 0cb3199a */  MOV RAX,qword ptr [RSP + 0x40]
/* 0cb3199f */  MOV RAX,qword ptr [RAX]
/* 0cb319a2 */  MOV RAX,qword ptr [RAX + R15*0x8]
/* 0cb319a6 */  TEST RAX,RAX
/* 0cb319a9 */  JZ 0x0cb31a36
/* 0cb319af */  MOV RBX,qword ptr [RAX]
/* 0cb319b2 */  TEST RBX,RBX
/* 0cb319b5 */  JZ 0x0cb31a36
/* 0cb319b7 */  MOV RAX,qword ptr [RSP + 0x48]
/* 0cb319bc */  MOV RCX,qword ptr [RAX]
/* 0cb319bf */  CMP ESI,0x2
/* 0cb319c2 */  JNC 0x0cb319dc
/* 0cb319c4 */  LEA RAX,[R14 + -0x1]
/* 0cb319c8 */  JMP 0x0cb31a25
/* 0cb319ca */  CMP qword ptr [RBX + 0x10],RCX
/* 0cb319ce */  JZ 0x0cb31e35
/* 0cb319d4 */  MOV RBX,qword ptr [RBX]
/* 0cb319d7 */  TEST RBX,RBX
/* 0cb319da */  JZ 0x0cb31a36
/* 0cb319dc */  MOV RAX,qword ptr [RBX + 0x8]
/* 0cb319e0 */  CMP RAX,RBP
/* 0cb319e3 */  JZ 0x0cb319ca
/* 0cb319e5 */  CMP RAX,R14
/* 0cb319e8 */  JC 0x0cb319fe
/* 0cb319ea */  MOV RDX,RAX
/* 0cb319ed */  OR RDX,R14
/* 0cb319f0 */  SHR RDX,0x20
/* 0cb319f4 */  JZ 0x0cb31a05
/* 0cb319f6 */  XOR EDX,EDX
/* 0cb319f8 */  DIV R14
/* 0cb319fb */  MOV RAX,RDX
/* 0cb319fe */  CMP RAX,R15
/* 0cb31a01 */  JZ 0x0cb319d4
/* 0cb31a03 */  JMP 0x0cb31a36
/* 0cb31a05 */  XOR EDX,EDX
/* 0cb31a07 */  DIV R14D
/* 0cb31a0a */  MOV EAX,EDX
/* 0cb31a0c */  CMP RAX,R15
/* 0cb31a0f */  JZ 0x0cb319d4
/* 0cb31a11 */  JMP 0x0cb31a36
/* 0cb31a13 */  CMP qword ptr [RBX + 0x10],RCX
/* 0cb31a17 */  JZ 0x0cb31e35
/* 0cb31a1d */  MOV RBX,qword ptr [RBX]
/* 0cb31a20 */  TEST RBX,RBX
/* 0cb31a23 */  JZ 0x0cb31a36
/* 0cb31a25 */  MOV RDX,qword ptr [RBX + 0x8]
/* 0cb31a29 */  CMP RDX,RBP
/* 0cb31a2c */  JZ 0x0cb31a13
/* 0cb31a2e */  AND RDX,RAX
/* 0cb31a31 */  CMP RDX,R15
/* 0cb31a34 */  JZ 0x0cb31a1d
/* 0cb31a36 */  LEA RDI,[0xf5463b0]
/* 0cb31a3d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0cb31a44 */  MOV ESI,0x28
/* 0cb31a49 */  CALL qword ptr [RAX + 0x10]
/* 0cb31a4c */  MOV RBX,RAX
/* 0cb31a4f */  TEST RAX,RAX
/* 0cb31a52 */  JZ 0x0cb325fd
/* 0cb31a58 */  MOV qword ptr [RSP + 0x50],RBX
/* 0cb31a5d */  MOV RAX,qword ptr [RSP + 0x40]
/* 0cb31a62 */  MOV qword ptr [RSP + 0x58],RAX
/* 0cb31a67 */  MOV qword ptr [RSP + 0x60],0x1
/* 0cb31a70 */  MOV qword ptr [RBX],0x0
/* 0cb31a77 */  MOV qword ptr [RBX + 0x8],RBP
/* 0cb31a7b */  MOV RAX,qword ptr [RSP + 0x48]
/* 0cb31a80 */  MOV RAX,qword ptr [RAX]
/* 0cb31a83 */  MOV qword ptr [RBX + 0x10],RAX
/* 0cb31a87 */  XORPS XMM0,XMM0
/* 0cb31a8a */  MOVUPS xmmword ptr [RBX + 0x18],XMM0
/* 0cb31a8e */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31a93 */  MOV RAX,qword ptr [RAX + 0x30]
/* 0cb31a97 */  INC RAX
/* 0cb31a9a */  JS 0x0cb31aa6
/* 0cb31a9c */  XORPS XMM0,XMM0
/* 0cb31a9f */  CVTSI2SS XMM0,RAX
/* 0cb31aa4 */  JMP 0x0cb31abe
/* 0cb31aa6 */  MOV RCX,RAX
/* 0cb31aa9 */  SHR RCX,0x1
/* 0cb31aac */  AND EAX,0x1
/* 0cb31aaf */  OR RAX,RCX
/* 0cb31ab2 */  XORPS XMM0,XMM0
/* 0cb31ab5 */  CVTSI2SS XMM0,RAX
/* 0cb31aba */  ADDSS XMM0,XMM0
/* 0cb31abe */  MOV RCX,R14
/* 0cb31ac1 */  SHR RCX,0x1
/* 0cb31ac4 */  MOV EAX,R14D
/* 0cb31ac7 */  AND EAX,0x1
/* 0cb31aca */  OR RAX,RCX
/* 0cb31acd */  TEST R14,R14
/* 0cb31ad0 */  JS 0x0cb31ad9
/* 0cb31ad2 */  CVTSI2SS XMM2,R14
/* 0cb31ad7 */  JMP 0x0cb31ae2
/* 0cb31ad9 */  CVTSI2SS XMM2,RAX
/* 0cb31ade */  ADDSS XMM2,XMM2
/* 0cb31ae2 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31ae7 */  MOVSS XMM1,dword ptr [RAX + 0x38]
/* 0cb31aec */  JZ 0x0cb31b04
/* 0cb31aee */  MULSS XMM2,XMM1
/* 0cb31af2 */  UCOMISS XMM0,XMM2
/* 0cb31af5 */  JA 0x0cb31b04
/* 0cb31af7 */  MOV RBP,R15
/* 0cb31afa */  MOV RSI,qword ptr [RSP + 0x30]
/* 0cb31aff */  JMP 0x0cb31e13
/* 0cb31b04 */  LEA RAX,[R14 + R14*0x1]
/* 0cb31b08 */  MOV R15D,0x1
/* 0cb31b0e */  CMP R14,0x3
/* 0cb31b12 */  JC 0x0cb31b22
/* 0cb31b14 */  LEA RCX,[R14 + -0x1]
/* 0cb31b18 */  XOR R15D,R15D
/* 0cb31b1b */  TEST R14,RCX
/* 0cb31b1e */  SETNZ R15B
/* 0cb31b22 */  OR R15,RAX
/* 0cb31b25 */  DIVSS XMM0,XMM1
/* 0cb31b29 */  CALL 0x0eee3ab0
/* 0cb31b2e */  CVTTSS2SI RAX,XMM0
/* 0cb31b33 */  MOV RCX,RAX
/* 0cb31b36 */  SAR RCX,0x3f
/* 0cb31b3a */  SUBSS XMM0,dword ptr [0x01198778]
/* 0cb31b42 */  CVTTSS2SI RDI,XMM0
/* 0cb31b47 */  AND RDI,RCX
/* 0cb31b4a */  OR RDI,RAX
/* 0cb31b4d */  CMP R15,RDI
/* 0cb31b50 */  CMOVA RDI,R15
/* 0cb31b54 */  MOV R15D,0x2
/* 0cb31b5a */  CMP RDI,0x1
/* 0cb31b5e */  JZ 0x0cb31b7f
/* 0cb31b60 */  LEA RAX,[RDI + -0x1]
/* 0cb31b64 */  TEST RDI,RAX
/* 0cb31b67 */  JNZ 0x0cb31b6e
/* 0cb31b69 */  MOV R15,RDI
/* 0cb31b6c */  JMP 0x0cb31b7f
/* 0cb31b6e */  CALL 0x0412c3f0
/* 0cb31b73 */  MOV R15,RAX
/* 0cb31b76 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31b7b */  MOV R14,qword ptr [RAX + 0x20]
/* 0cb31b7f */  CMP R15,R14
/* 0cb31b82 */  JBE 0x0cb31c91
/* 0cb31b88 */  MOV RDI,R15
/* 0cb31b8b */  MOV RAX,RDI
/* 0cb31b8e */  SHR RAX,0x3d
/* 0cb31b92 */  JNZ 0x0cb3261f
/* 0cb31b98 */  MOV qword ptr [RSP + 0xa8],RDI
/* 0cb31ba0 */  LEA RSI,[RDI*0x8]
/* 0cb31ba8 */  LEA RDI,[0xf5463b0]
/* 0cb31baf */  MOV RAX,qword ptr [0x0f5463b0]
/* 0cb31bb6 */  MOV qword ptr [RSP + 0x78],RSI
/* 0cb31bbb */  CALL qword ptr [RAX + 0x10]
/* 0cb31bbe */  MOV R15,RAX
/* 0cb31bc1 */  TEST RAX,RAX
/* 0cb31bc4 */  JZ 0x0cb3260e
/* 0cb31bca */  MOV qword ptr [RSP + 0xa0],RBP
/* 0cb31bd2 */  MOV RAX,qword ptr [RSP + 0x40]
/* 0cb31bd7 */  MOV RDI,qword ptr [RAX]
/* 0cb31bda */  MOV qword ptr [RAX],R15
/* 0cb31bdd */  TEST RDI,RDI
/* 0cb31be0 */  MOV R14,qword ptr [RSP + 0x30]
/* 0cb31be5 */  JZ 0x0cb31bf8
/* 0cb31be7 */  MOV RSI,qword ptr [R14 + 0x20]
/* 0cb31beb */  SHL RSI,0x3
/* 0cb31bef */  CALL 0x0412a280
/* 0cb31bf4 */  MOV R15,qword ptr [R14 + 0x18]
/* 0cb31bf8 */  MOV RBP,qword ptr [RSP + 0xa8]
/* 0cb31c00 */  MOV qword ptr [R14 + 0x20],RBP
/* 0cb31c04 */  MOV RDI,R15
/* 0cb31c07 */  XOR ESI,ESI
/* 0cb31c09 */  MOV RDX,qword ptr [RSP + 0x78]
/* 0cb31c0e */  CALL 0x0eee2dd0
/* 0cb31c13 */  MOV R8,RBP
/* 0cb31c16 */  MOV RSI,qword ptr [R14 + 0x28]
/* 0cb31c1a */  TEST RSI,RSI
/* 0cb31c1d */  MOV RBP,qword ptr [RSP + 0xa0]
/* 0cb31c25 */  JZ 0x0cb31dec
/* 0cb31c2b */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31c30 */  LEA RDI,[RAX + 0x28]
/* 0cb31c34 */  MOV RCX,qword ptr [RSI + 0x8]
/* 0cb31c38 */  LEA RAX,[R8 + -0x1]
/* 0cb31c3c */  TEST R8,RAX
/* 0cb31c3f */  JNZ 0x0cb31caf
/* 0cb31c41 */  AND RCX,RAX
/* 0cb31c44 */  MOV qword ptr [R15 + RCX*0x8],RDI
/* 0cb31c48 */  JMP 0x0cb31c4d
/* 0cb31c4a */  MOV RSI,RDX
/* 0cb31c4d */  MOV RDX,qword ptr [RSI]
/* 0cb31c50 */  TEST RDX,RDX
/* 0cb31c53 */  JZ 0x0cb31dec
/* 0cb31c59 */  MOV RDI,qword ptr [RDX + 0x8]
/* 0cb31c5d */  AND RDI,RAX
/* 0cb31c60 */  CMP RDI,RCX
/* 0cb31c63 */  JZ 0x0cb31c4a
/* 0cb31c65 */  CMP qword ptr [R15 + RDI*0x8],0x0
/* 0cb31c6a */  JZ 0x0cb31c85
/* 0cb31c6c */  MOV R8,qword ptr [RDX]
/* 0cb31c6f */  MOV qword ptr [RSI],R8
/* 0cb31c72 */  MOV R8,qword ptr [R15 + RDI*0x8]
/* 0cb31c76 */  MOV R8,qword ptr [R8]
/* 0cb31c79 */  MOV qword ptr [RDX],R8
/* 0cb31c7c */  MOV RDI,qword ptr [R15 + RDI*0x8]
/* 0cb31c80 */  MOV qword ptr [RDI],RDX
/* 0cb31c83 */  JMP 0x0cb31c4d
/* 0cb31c85 */  MOV qword ptr [R15 + RDI*0x8],RSI
/* 0cb31c89 */  MOV RSI,RDX
/* 0cb31c8c */  MOV RCX,RDI
/* 0cb31c8f */  JMP 0x0cb31c4d
/* 0cb31c91 */  JNC 0x0cb31dec
/* 0cb31c97 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31c9c */  MOV RAX,qword ptr [RAX + 0x30]
/* 0cb31ca0 */  TEST RAX,RAX
/* 0cb31ca3 */  JS 0x0cb31cd8
/* 0cb31ca5 */  XORPS XMM0,XMM0
/* 0cb31ca8 */  CVTSI2SS XMM0,RAX
/* 0cb31cad */  JMP 0x0cb31cf0
/* 0cb31caf */  CMP RCX,R8
/* 0cb31cb2 */  JC 0x0cb32577
/* 0cb31cb8 */  MOV RAX,RCX
/* 0cb31cbb */  OR RAX,R8
/* 0cb31cbe */  SHR RAX,0x20
/* 0cb31cc2 */  JZ 0x0cb3256e
/* 0cb31cc8 */  MOV RAX,RCX
/* 0cb31ccb */  XOR EDX,EDX
/* 0cb31ccd */  DIV R8
/* 0cb31cd0 */  MOV RCX,RDX
/* 0cb31cd3 */  JMP 0x0cb32577
/* 0cb31cd8 */  MOV RCX,RAX
/* 0cb31cdb */  SHR RCX,0x1
/* 0cb31cde */  AND EAX,0x1
/* 0cb31ce1 */  OR RAX,RCX
/* 0cb31ce4 */  XORPS XMM0,XMM0
/* 0cb31ce7 */  CVTSI2SS XMM0,RAX
/* 0cb31cec */  ADDSS XMM0,XMM0
/* 0cb31cf0 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0cb31cf5 */  DIVSS XMM0,dword ptr [RAX + 0x38]
/* 0cb31cfa */  CALL 0x0eee3ab0
/* 0cb31cff */  CVTTSS2SI RAX,XMM0
/* 0cb31d04 */  MOV RCX,RAX
/* 0cb31d07 */  SUBSS XMM0,dword ptr [0x01198778]
/* 0cb31d0f */  CVTTSS2SI RDI,XMM0
/* 0cb31d14 */  SAR RCX,0x3f
/* 0cb31d18 */  AND RDI,RCX
/* 0cb31d1b */  OR RDI,RAX
/* 0cb31d1e */  CMP R14,0x3
/* 0cb31d22 */  JC 0x0cb31da1
/* 0cb31d24 */  MOV RAX,R14
/* 0cb31d27 */  SHR RAX,0x1
/* 0cb31d2a */  MOV RCX,0x5555555555555555
/* 0cb31d34 */  AND RAX,RCX
/* 0cb31d37 */  MOV RCX,R14
/* 0cb31d3a */  SUB RCX,RAX
/* 0cb31d3d */  MOV RAX,RCX
/* 0cb31d40 */  SHR RAX,0x2
/* 0cb31d44 */  MOV RDX,0x3333333333333333
/* 0cb31d4e */  AND RCX,RDX
/* 0cb31d51 */  AND RAX,RDX
/* 0cb31d54 */  ADD RAX,RCX
/* 0cb31d57 */  MOV RCX,RAX
/* 0cb31d5a */  SHR RCX,0x4
/* 0cb31d5e */  ADD RCX,RAX
/* 0cb31d61 */  MOV RAX,0xf0f0f0f0f0f0f0f
/* 0cb31d6b */  AND RCX,RAX
/* 0cb31d6e */  MOV RAX,0x101010101010101
/* 0cb31d78 */  IMUL RCX,RAX
/* 0cb31d7c */  SHR RCX,0x38
/* 0cb31d80 */  CMP ECX,0x1
/* 0cb31d83 */  JA 0x0cb31da1
/* 0cb31d85 */  CMP RDI,0x2
/* 0cb31d89 */  JC 0x0cb31da9
/* 0cb31d8b */  DEC RDI
/* 0cb31d8e */  BSR RCX,RDI
/* 0cb31d92 */  XOR ECX,0x3f
/* 0cb31d95 */  NEG CL
/* 0cb31d97 */  MOV EDI,0x1
/* 0cb31d9c */  SHL RDI,CL
/* 0cb31d9f */  JMP 0x0cb31da9
/* 0cb31da1 */  CALL 0x0412c3f0
/* 0cb31da6 */  MOV RDI,RAX
/* 0cb31da9 */  CMP R15,RDI
/* 0cb31dac */  CMOVA RDI,R15
/* 0cb31db0 */  CMP RDI,R14
/* 0cb31db3 */  JNC 0x0cb31dec
/* 0cb31db5 */  TEST RDI,RDI
/* 0cb31db8 */  JNZ 0x0cb31b8b
/* 0cb31dbe */  MOV RAX,qword ptr [RSP + 0x40]
/* 0cb31dc3 */  MOV RDI,qword ptr [RAX]
/* 0cb31dc6 */  MOV qword ptr [RAX],0x0
/* 0cb31dcd */  TEST RDI,RDI
/* 0cb31dd0 */  MOV R14,qword ptr [RSP + 0x30]
/* 0cb31dd5 */  JZ 0x0cb31de4
/* 0cb31dd7 */  MOV RSI,qword ptr [R14 + 0x20]
/* 0cb31ddb */  SHL RSI,0x3
/* 0cb31ddf */  CALL 0x0412a280
/* 0cb31de4 */  MOV qword ptr [R14 + 0x20],0x0
/* 0cb31dec */  MOV RSI,qword ptr [RSP + 0x30]
/* 0cb31df1 */  MOV R14,qword ptr [RSI + 0x20]
/* 0cb31df5 */  LEA RAX,[R14 + -0x1]
/* 0cb31df9 */  TEST R14,RAX
/* 0cb31dfc */  JNZ 0x0cb31e03
/* 0cb31dfe */  AND RBP,RAX
/* 0cb31e01 */  JMP 0x0cb31e13
/* 0cb31e03 */  CMP RBP,R14
/* 0cb31e06 */  JC 0x0cb31e13
/* 0cb31e08 */  MOV RAX,RBP
/* 0cb31e0b */  XOR EDX,EDX
/* 0cb31e0d */  DIV R14
/* 0cb31e10 */  MOV RBP,RDX
/* 0cb31e13 */  MOV RAX,qword ptr [RSP + 0x40]
/* 0cb31e18 */  MOV RCX,qword ptr [RAX]
/* 0cb31e1b */  MOV RAX,qword ptr [RCX + RBP*0x8]
/* 0cb31e1f */  TEST RAX,RAX
/* 0cb31e22 */  JZ 0x0cb32435
/* 0cb31e28 */  MOV RCX,qword ptr [RAX]
/* 0cb31e2b */  MOV qword ptr [RBX],RCX
/* 0cb31e2e */  MOV qword ptr [RAX],RBX
/* 0cb31e31 */  INC qword ptr [RSI + 0x30]
/* 0cb31e35 */  LEA RBP,[R12 + 0x18]
/* 0cb31e3a */  INC.LOCK qword ptr [R12 + 0x8]
/* 0cb31e40 */  MOV qword ptr [RBX + 0x18],RBP
/* 0cb31e44 */  MOV R14,qword ptr [RBX + 0x20]
/* 0cb31e48 */  MOV qword ptr [RBX + 0x20],R12
/* 0cb31e4c */  TEST R14,R14
/* 0cb31e4f */  JZ 0x0cb31e74
/* 0cb31e51 */  MOV RAX,-0x1
/* 0cb31e58 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb31e5e */  TEST RAX,RAX
/* 0cb31e61 */  JNZ 0x0cb31e74
/* 0cb31e63 */  MOV RAX,qword ptr [R14]
/* 0cb31e66 */  MOV RDI,R14
/* 0cb31e69 */  CALL qword ptr [RAX + 0x10]
/* 0cb31e6c */  MOV RDI,R14
/* 0cb31e6f */  CALL 0x0412c2d0
/* 0cb31e74 */  MOV RAX,R12
/* 0cb31e77 */  ADD RAX,0x40
/* 0cb31e7b */  MOV qword ptr [RSP + 0x30],RAX
/* 0cb31e80 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0cb31e85 */  MOV EAX,dword ptr [RCX + 0x50]
/* 0cb31e88 */  DEC EAX
/* 0cb31e8a */  MOV dword ptr [RSP],EAX
/* 0cb31e8d */  MOV EAX,dword ptr [RCX + 0x54]
/* 0cb31e90 */  MOV R15,RSP
/* 0cb31e93 */  JMP 0x0cb31eb8
/* 0cb31ea0 */  MOV RCX,qword ptr [RSP + 0x48]
/* 0cb31ea5 */  MOV ECX,dword ptr [RCX]
/* 0cb31ea7 */  MOV EDX,dword ptr [RSP]
/* 0cb31eaa */  LEA ESI,[RDX + 0x1]
/* 0cb31ead */  MOV dword ptr [RSP],ESI
/* 0cb31eb0 */  CMP EDX,ECX
/* 0cb31eb2 */  JG 0x0cb32075
/* 0cb31eb8 */  DEC EAX
/* 0cb31eba */  MOV dword ptr [RSP + 0x4],EAX
/* 0cb31ebe */  JMP 0x0cb31ed7
/* 0cb31ec0 */  MOV ECX,dword ptr [RSP + 0x4]
/* 0cb31ec4 */  LEA EAX,[RCX + 0x1]
/* 0cb31ec7 */  MOV dword ptr [RSP + 0x4],EAX
/* 0cb31ecb */  MOV RAX,qword ptr [RSP + 0x68]
/* 0cb31ed0 */  MOV EAX,dword ptr [RAX + 0x54]
/* 0cb31ed3 */  CMP ECX,EAX
/* 0cb31ed5 */  JG 0x0cb31ea0
/* 0cb31ed7 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0cb31edc */  MOV RAX,qword ptr [RSI]
/* 0cb31edf */  LEA RDI,[RSP + 0x50]
/* 0cb31ee4 */  MOV RDX,R15
/* 0cb31ee7 */  CALL qword ptr [RAX + 0x20]
/* 0cb31eea */  MOV RBX,qword ptr [RSP + 0x50]
/* 0cb31eef */  TEST RBX,RBX
/* 0cb31ef2 */  JZ 0x0cb3202d
/* 0cb31ef8 */  MOV R14,qword ptr [RSP + 0x58]
/* 0cb31efd */  TEST R14,R14
/* 0cb31f00 */  JZ 0x0cb31f07
/* 0cb31f02 */  INC.LOCK qword ptr [R14 + 0x10]
/* 0cb31f07 */  MOV RAX,qword ptr [R12 + 0x40]
/* 0cb31f0c */  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
/* 0cb31f13 */  JZ 0x0cb31f5a
/* 0cb31f15 */  MOV ECX,0xbb8
/* 0cb31f1a */  JMP 0x0cb31f35
/* 0cb31f20 */  CALL 0x0eee35d0
/* 0cb31f25 */  XOR ECX,ECX
/* 0cb31f27 */  MOV RAX,qword ptr [R12 + 0x40]
/* 0cb31f2c */  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
/* 0cb31f33 */  JZ 0x0cb31f5a
/* 0cb31f35 */  CMP RAX,R13
/* 0cb31f38 */  JNZ 0x0cb31f46
/* 0cb31f3a */  MOV EAX,dword ptr [R12 + 0x48]
/* 0cb31f3f */  INC EAX
/* 0cb31f41 */  CMP EAX,-0x1
/* 0cb31f44 */  JNZ 0x0cb31f5f
/* 0cb31f46 */  TEST ECX,ECX
/* 0cb31f48 */  JZ 0x0cb31f20
/* 0cb31f4a */  DEC ECX
/* 0cb31f4c */  MOV RAX,qword ptr [R12 + 0x40]
/* 0cb31f51 */  CMPXCHG.LOCK qword ptr [R12 + 0x50],R13
/* 0cb31f58 */  JNZ 0x0cb31f35
/* 0cb31f5a */  MOV EAX,0x1
/* 0cb31f5f */  MOV dword ptr [R12 + 0x48],EAX
/* 0cb31f64 */  MOV qword ptr [RSP + 0x88],R15
/* 0cb31f6c */  MOV RDI,RBP
/* 0cb31f6f */  MOV RSI,R15
/* 0cb31f72 */  LEA RDX,[0x1563a4f]
/* 0cb31f79 */  LEA RCX,[RSP + 0x88]
/* 0cb31f81 */  LEA R8,[RSP + 0x2f]
/* 0cb31f86 */  CALL 0x0caaf3d0
/* 0cb31f8b */  TEST R14,R14
/* 0cb31f8e */  JZ 0x0cb31f95
/* 0cb31f90 */  INC.LOCK qword ptr [R14 + 0x10]
/* 0cb31f95 */  MOV qword ptr [RAX + 0x18],RBX
/* 0cb31f99 */  MOV RDI,qword ptr [RAX + 0x20]
/* 0cb31f9d */  MOV qword ptr [RAX + 0x20],R14
/* 0cb31fa1 */  TEST RDI,RDI
/* 0cb31fa4 */  JZ 0x0cb31fab
/* 0cb31fa6 */  CALL 0x0412c2d0
/* 0cb31fab */  MOV RAX,qword ptr [R12 + 0x50]
/* 0cb31fb0 */  CMP RAX,R13
/* 0cb31fb3 */  JNZ 0x0cb31fc7
/* 0cb31fb5 */  MOV EAX,dword ptr [R12 + 0x48]
/* 0cb31fba */  CMP EAX,0x1
/* 0cb31fbd */  JZ 0x0cb32005
/* 0cb31fbf */  TEST EAX,EAX
/* 0cb31fc1 */  JNZ 0x0cb32067
/* 0cb31fc7 */  LEA RDI,[0x1239425]
/* 0cb31fce */  LEA RSI,[0x1198d5e]
/* 0cb31fd5 */  MOV EDX,0x6d
/* 0cb31fda */  LEA RCX,[0x126e3df]
/* 0cb31fe1 */  LEA R8,[0x121f006]
/* 0cb31fe8 */  XOR EAX,EAX
/* 0cb31fea */  CALL 0x0eeddcf0
/* 0cb31fef */  TEST AL,AL
/* 0cb31ff1 */  JZ 0x0cb32020
/* 0cb31ff3 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0cb31ffe */  TEST R14,R14
/* 0cb32001 */  JNZ 0x0cb32025
/* 0cb32003 */  JMP 0x0cb3202d
/* 0cb32005 */  MOV dword ptr [R12 + 0x48],0x0
/* 0cb3200e */  MOV RAX,qword ptr [R12 + 0x40]
/* 0cb32013 */  MOV qword ptr [R12 + 0x50],RAX
/* 0cb32018 */  NOP dword ptr [RAX + RAX*0x1]
/* 0cb32020 */  TEST R14,R14
/* 0cb32023 */  JZ 0x0cb3202d
/* 0cb32025 */  MOV RDI,R14
/* 0cb32028 */  CALL 0x0412c2d0
/* 0cb3202d */  MOV R14,qword ptr [RSP + 0x58]
/* 0cb32032 */  TEST R14,R14
/* 0cb32035 */  JZ 0x0cb31ec0
/* 0cb3203b */  MOV RAX,-0x1
/* 0cb32042 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0cb32048 */  TEST RAX,RAX
/* 0cb3204b */  JNZ 0x0cb31ec0
/* 0cb32051 */  MOV RAX,qword ptr [R14]
/* 0cb32054 */  MOV RDI,R14
/* 0cb32057 */  CALL qword ptr [RAX + 0x10]
/* 0cb3205a */  MOV RDI,R14
/* 0cb3205d */  CALL 0x0412c2d0
/* 0cb32062 */  JMP 0x0cb31ec0
/* 0cb32067 */  DEC EAX
/* 0cb32069 */  MOV dword ptr [R12 + 0x48],EAX
/* 0cb3206e */  TEST R14,R14
/* 0cb32071 */  JNZ 0x0cb32025
/* 0cb32073 */  JMP 0x0cb3202d
/* 0cb32075 */  LEA EDX,[RCX + -0x1]
/* 0cb32078 */  MOV dword ptr [RSP],EDX
/* 0cb3207b */  LEA RBX,[RSP + 0x88]
/* 0cb32083 */  MOV EBP,0x9e3779b9
/* 0cb32088 */  JMP 0x0cb320aa
/* 0cb32090 */  MOV EDX,dword ptr [RSP]
/* 0cb32093 */  MOV RCX,qword ptr [RSP + 0x48]
/* 0cb32098 */  MOV ECX,dword ptr [RCX]
/* 0cb3209a */  LEA ESI,[RDX + 0x1]
/* 0cb3209d */  MOV dword ptr [RSP],ESI
/* 0cb320a0 */  CMP EDX,ECX
/* 0cb320a2 */  MOV EDX,ESI
/* 0cb320a4 */  JG 0x0cb323d6
/* 0cb320aa */  LEA ESI,[RAX + -0x1]
/* 0cb320ad */  MOV dword ptr [RSP + 0x4],ESI
/* 0cb320b1 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0cb320b6 */  MOV RDI,qword ptr [RDI + 0x40]
/* 0cb320ba */  CMP qword ptr [RDI + 0x20],0x0
/* 0cb320bf */  JNZ 0x0cb320f7
/* 0cb320c1 */  LEA EDI,[RAX + 0x1]
/* 0cb320c4 */  CMP ESI,EDI
/* 0cb320c6 */  CMOVG EDI,ESI
/* 0cb320c9 */  INC EDI
/* 0cb320cb */  MOV dword ptr [RSP + 0x4],EDI
/* 0cb320cf */  JMP 0x0cb3209a
/* 0cb320e0 */  MOV ECX,dword ptr [RSP + 0x4]
/* 0cb320e4 */  LEA ESI,[RCX + 0x1]
/* 0cb320e7 */  MOV dword ptr [RSP + 0x4],ESI
/* 0cb320eb */  MOV RAX,qword ptr [RSP + 0x68]
/* 0cb320f0 */  MOV EAX,dword ptr [RAX + 0x54]
/* 0cb320f3 */  CMP ECX,EAX
/* 0cb320f5 */  JG 0x0cb32090
/* 0cb320f7 */  MOV RAX,qword ptr [RSP + 0x8]
/* 0cb320fc */  MOV R8,qword ptr [RAX + 0x40]
/* 0cb32100 */  MOV RDI,qword ptr [R8 + 0x20]
/* 0cb32104 */  TEST RDI,RDI
/* 0cb32107 */  JZ 0x0cb320e0
/* 0cb32109 */  MOVSXD RAX,dword ptr [RSP]
/* 0cb3210d */  ADD RAX,RBP
/* 0cb32110 */  MOVSXD RCX,ESI
/* 0cb32113 */  MOV RDX,RAX
/* 0cb32116 */  SHL RDX,0x6
/* 0cb3211a */  MOV RSI,RAX
/* 0cb3211d */  SHR RSI,0x2
/* 0cb32121 */  ADD RCX,RBP
/* 0cb32124 */  ADD RCX,RDX
/* 0cb32127 */  ADD RCX,RSI
/* 0cb3212a */  XOR RCX,RAX
/* 0cb3212d */  MOV RAX,RDI
/* 0cb32130 */  SHR RAX,0x1
/* 0cb32133 */  MOV RDX,0x5555555555555555
/* 0cb3213d */  AND RAX,RDX
/* 0cb32140 */  MOV RDX,RDI
/* 0cb32143 */  SUB RDX,RAX
/* 0cb32146 */  MOV RAX,RDX
/* 0cb32149 */  MOV RSI,0x3333333333333333
/* 0cb32153 */  AND RAX,RSI
/* 0cb32156 */  SHR RDX,0x2
/* 0cb3215a */  AND RDX,RSI
/* 0cb3215d */  ADD RDX,RAX
/* 0cb32160 */  MOV R10,RDX
/* 0cb32163 */  SHR R10,0x4
/* 0cb32167 */  ADD R10,RDX
/* 0cb3216a */  MOV RAX,0xf0f0f0f0f0f0f0f
/* 0cb32174 */  AND R10,RAX
/* 0cb32177 */  MOV RAX,0x101010101010101
/* 0cb32181 */  IMUL R10,RAX
/* 0cb32185 */  SHR R10,0x38
/* 0cb32189 */  CMP R10,0x1
/* 0cb3218d */  JA 0x0cb321a0
/* 0cb3218f */  LEA RSI,[RDI + -0x1]
/* 0cb32193 */  AND RSI,RCX
/* 0cb32196 */  JMP 0x0cb321b3
/* 0cb321a0 */  MOV RSI,RCX
/* 0cb321a3 */  CMP RCX,RDI
/* 0cb321a6 */  JC 0x0cb321b3
/* 0cb321a8 */  MOV RAX,RCX
/* 0cb321ab */  XOR EDX,EDX
/* 0cb321ad */  DIV RDI
/* 0cb321b0 */  MOV RSI,RDX
/* 0cb321b3 */  MOV RAX,qword ptr [R8 + 0x18]
/* 0cb321b7 */  MOV RAX,qword ptr [RAX + RSI*0x8]
/* 0cb321bb */  TEST RAX,RAX
/* 0cb321be */  JZ 0x0cb320e0
/* 0cb321c4 */  MOV R8,qword ptr [RAX]
/* 0cb321c7 */  TEST R8,R8
/* 0cb321ca */  JZ 0x0cb320e0
/* 0cb321d0 */  MOV R9,qword ptr [RSP]
/* 0cb321d4 */  CMP R10D,0x2
/* 0cb321d8 */  JNC 0x0cb321f2
/* 0cb321da */  DEC RDI
/* 0cb321dd */  JMP 0x0cb32242
/* 0cb321e0 */  CMP qword ptr [R8 + 0x10],R9
/* 0cb321e4 */  JZ 0x0cb32258
/* 0cb321e6 */  MOV R8,qword ptr [R8]
/* 0cb321e9 */  TEST R8,R8
/* 0cb321ec */  JZ 0x0cb320e0
/* 0cb321f2 */  MOV RAX,qword ptr [R8 + 0x8]
/* 0cb321f6 */  CMP RAX,RCX
/* 0cb321f9 */  JZ 0x0cb321e0
/* 0cb321fb */  CMP RAX,RDI
/* 0cb321fe */  JC 0x0cb32214
/* 0cb32200 */  MOV RDX,RAX
/* 0cb32203 */  OR RDX,RDI
/* 0cb32206 */  SHR RDX,0x20
/* 0cb3220a */  JZ 0x0cb3221e
/* 0cb3220c */  XOR EDX,EDX
/* 0cb3220e */  DIV RDI
/* 0cb32211 */  MOV RAX,RDX
/* 0cb32214 */  CMP RAX,RSI
/* 0cb32217 */  JZ 0x0cb321e6
/* 0cb32219 */  JMP 0x0cb320e0
/* 0cb3221e */  XOR EDX,EDX
/* 0cb32220 */  DIV EDI
/* 0cb32222 */  MOV EAX,EDX
/* 0cb32224 */  CMP RAX,RSI
/* 0cb32227 */  JZ 0x0cb321e6
/* 0cb32229 */  JMP 0x0cb320e0
/* 0cb32230 */  CMP qword ptr [R8 + 0x10],R9
/* 0cb32234 */  JZ 0x0cb32258
/* 0cb32236 */  MOV R8,qword ptr [R8]
/* 0cb32239 */  TEST R8,R8
/* 0cb3223c */  JZ 0x0cb320e0
/* 0cb32242 */  MOV RAX,qword ptr [R8 + 0x8]
/* 0cb32246 */  CMP RAX,RCX
/* 0cb32249 */  JZ 0x0cb32230
/* 0cb3224b */  AND RAX,RDI
/* 0cb3224e */  CMP RAX,RSI
/* 0cb32251 */  JZ 0x0cb32236
/* 0cb32253 */  JMP 0x0cb320e0
/* 0cb32258 */  MOV R14,qword ptr [R8 + 0x18]
/* 0cb3225c */  TEST R14,R14
/* 0cb3225f */  JZ 0x0cb320e0
/* 0cb32265 */  MOV R15,qword ptr [RSP + 0x98]
/* 0cb3226d */  MOVAPS XMM0,xmmword ptr [RSP + 0x90]
/* 0cb32275 */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0cb3227a */  TEST R15,R15
/* 0cb3227d */  JZ 0x0cb32284
/* 0cb3227f */  INC.LOCK qword ptr [R15 + 0x10]
/* 0cb32284 */  MOV RAX,qword ptr [R14 + 0x28]
/* 0cb32288 */  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
/* 0cb3228e */  JNZ 0x0cb32346
/* 0cb32294 */  MOV dword ptr [R14 + 0x30],0x1
/* 0cb3229c */  LEA RBP,[R14 + 0x28]
/* 0cb322a0 */  MOV RSI,qword ptr [RSP + 0x48]
/* 0cb322a5 */  MOV qword ptr [RSP + 0x50],RSI
/* 0cb322aa */  MOV RDI,R14
/* 0cb322ad */  LEA RDX,[0x1563a4f]
/* 0cb322b4 */  LEA RCX,[RSP + 0x50]
/* 0cb322b9 */  MOV R8,RBX
/* 0cb322bc */  CALL 0x0caaf3d0
/* 0cb322c1 */  TEST R15,R15
/* 0cb322c4 */  JZ 0x0cb322cb
/* 0cb322c6 */  INC.LOCK qword ptr [R15 + 0x10]
/* 0cb322cb */  MOV RDI,qword ptr [RAX + 0x20]
/* 0cb322cf */  MOVAPS XMM0,xmmword ptr [RSP + 0x30]
/* 0cb322d4 */  MOVUPS xmmword ptr [RAX + 0x18],XMM0
/* 0cb322d8 */  TEST RDI,RDI
/* 0cb322db */  MOV EBP,0x9e3779b9
/* 0cb322e0 */  JZ 0x0cb322e7
/* 0cb322e2 */  CALL 0x0412c2d0
/* 0cb322e7 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0cb322eb */  CMP RAX,R13
/* 0cb322ee */  JNZ 0x0cb32305
/* 0cb322f0 */  MOV EAX,dword ptr [R14 + 0x30]
/* 0cb322f4 */  CMP EAX,0x1
/* 0cb322f7 */  JZ 0x0cb323a0
/* 0cb322fd */  TEST EAX,EAX
/* 0cb322ff */  JNZ 0x0cb323c6
/* 0cb32305 */  LEA RDI,[0x1239425]
/* 0cb3230c */  LEA RSI,[0x1198d5e]
/* 0cb32313 */  MOV EDX,0x6d
/* 0cb32318 */  LEA RCX,[0x126e3df]
/* 0cb3231f */  LEA R8,[0x121f006]
/* 0cb32326 */  XOR EAX,EAX
/* 0cb32328 */  CALL 0x0eeddcf0
/* 0cb3232d */  TEST AL,AL
/* 0cb3232f */  JZ 0x0cb323b0
/* 0cb32331 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0cb3233c */  TEST R15,R15
/* 0cb3233f */  JNZ 0x0cb323b9
/* 0cb32341 */  JMP 0x0cb320e0
/* 0cb32346 */  MOV ECX,0xbb8
/* 0cb3234b */  JMP 0x0cb32387
/* 0cb32350 */  TEST ECX,ECX
/* 0cb32352 */  JZ 0x0cb32370
/* 0cb32354 */  DEC ECX
/* 0cb32356 */  MOV RAX,qword ptr [R14 + 0x28]
/* 0cb3235a */  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
/* 0cb32360 */  JNZ 0x0cb32387
/* 0cb32362 */  JMP 0x0cb32294
/* 0cb32370 */  CALL 0x0eee35d0
/* 0cb32375 */  XOR ECX,ECX
/* 0cb32377 */  MOV RAX,qword ptr [R14 + 0x28]
/* 0cb3237b */  CMPXCHG.LOCK qword ptr [R14 + 0x38],R13
/* 0cb32381 */  JZ 0x0cb32294
/* 0cb32387 */  CMP RAX,R13
/* 0cb3238a */  JNZ 0x0cb32350
/* 0cb3238c */  MOV EAX,dword ptr [R14 + 0x30]
/* 0cb32390 */  INC EAX
/* 0cb32392 */  CMP EAX,-0x1
/* 0cb32395 */  JZ 0x0cb32350
/* 0cb32397 */  MOV dword ptr [R14 + 0x30],EAX
/* 0cb3239b */  JMP 0x0cb3229c
/* 0cb323a0 */  MOV dword ptr [R14 + 0x30],0x0
/* 0cb323a8 */  MOV RAX,qword ptr [R14 + 0x28]
/* 0cb323ac */  MOV qword ptr [R14 + 0x38],RAX
/* 0cb323b0 */  TEST R15,R15
/* 0cb323b3 */  JZ 0x0cb320e0
/* 0cb323b9 */  MOV RDI,R15
/* 0cb323bc */  CALL 0x0412c2d0
/* 0cb323c1 */  JMP 0x0cb320e0
/* 0cb323c6 */  DEC EAX
/* 0cb323c8 */  MOV dword ptr [R14 + 0x30],EAX
/* 0cb323cc */  TEST R15,R15
/* 0cb323cf */  JNZ 0x0cb323b9
/* 0cb323d1 */  JMP 0x0cb320e0
/* 0cb323d6 */  MOV RCX,qword ptr [RSP + 0x70]
/* 0cb323db */  MOV RAX,qword ptr [RCX + 0x10]
/* 0cb323df */  CMP RAX,R13
/* 0cb323e2 */  MOV RBX,qword ptr [RSP + 0xb0]
/* 0cb323ea */  JNZ 0x0cb323fc
/* 0cb323ec */  MOV EAX,dword ptr [RCX + 0x8]
/* 0cb323ef */  CMP EAX,0x1
/* 0cb323f2 */  JZ 0x0cb32471
/* 0cb323f4 */  TEST EAX,EAX
/* 0cb323f6 */  JNZ 0x0cb32481
/* 0cb323fc */  LEA RDI,[0x1239425]
/* 0cb32403 */  LEA RSI,[0x1198d5e]
/* 0cb3240a */  LEA RCX,[0x126e3df]
/* 0cb32411 */  LEA R8,[0x121f006]
/* 0cb32418 */  MOV EDX,0x6d
/* 0cb3241d */  XOR EAX,EAX
/* 0cb3241f */  CALL 0x0eeddcf0
/* 0cb32424 */  TEST AL,AL
/* 0cb32426 */  JZ 0x0cb32486
/* 0cb32428 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0cb32433 */  JMP 0x0cb32486
/* 0cb32435 */  LEA RAX,[RSI + 0x28]
/* 0cb32439 */  MOV RDX,qword ptr [RSI + 0x28]
/* 0cb3243d */  MOV qword ptr [RBX],RDX
/* 0cb32440 */  MOV qword ptr [RSI + 0x28],RBX
/* 0cb32444 */  MOV qword ptr [RCX + RBP*0x8],RAX
/* 0cb32448 */  MOV RAX,qword ptr [RBX]
/* 0cb3244b */  TEST RAX,RAX
/* 0cb3244e */  JZ 0x0cb31e31
/* 0cb32454 */  MOV RAX,qword ptr [RAX + 0x8]
/* 0cb32458 */  LEA RDX,[R14 + -0x1]
/* 0cb3245c */  TEST R14,RDX
/* 0cb3245f */  JNZ 0x0cb3253c
/* 0cb32465 */  AND RAX,RDX
/* 0cb32468 */  MOV qword ptr [RCX + RAX*0x8],RBX
/* 0cb3246c */  JMP 0x0cb31e31
/* 0cb32471 */  MOV dword ptr [RCX + 0x8],0x0
/* 0cb32478 */  MOV RAX,qword ptr [RCX]
/* 0cb3247b */  MOV qword ptr [RCX + 0x10],RAX
/* 0cb3247f */  JMP 0x0cb32486
/* 0cb32481 */  DEC EAX
/* 0cb32483 */  MOV dword ptr [RCX + 0x8],EAX
/* 0cb32486 */  MOV RAX,-0x1
/* 0cb3248d */  MOV RCX,qword ptr [RSP + 0x80]
/* 0cb32495 */  XADD.LOCK qword ptr [RCX],RAX
/* 0cb3249a */  TEST RAX,RAX
/* 0cb3249d */  JNZ 0x0cb324b1
/* 0cb3249f */  MOV RAX,qword ptr [R12]
/* 0cb324a3 */  MOV RDI,R12
/* 0cb324a6 */  CALL qword ptr [RAX + 0x10]
/* 0cb324a9 */  MOV RDI,R12
/* 0cb324ac */  CALL 0x0412c2d0
/* 0cb324b1 */  TEST RBX,RBX
/* 0cb324b4 */  JZ 0x0cb324d9
/* 0cb324b6 */  MOV RAX,-0x1
/* 0cb324bd */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0cb324c3 */  TEST RAX,RAX
/* 0cb324c6 */  JNZ 0x0cb324d9
/* 0cb324c8 */  MOV RAX,qword ptr [RBX]
/* 0cb324cb */  MOV RDI,RBX
/* 0cb324ce */  CALL qword ptr [RAX + 0x10]
/* 0cb324d1 */  MOV RDI,RBX
/* 0cb324d4 */  CALL 0x0412c2d0
/* 0cb324d9 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb324de */  MOVZX EAX,byte ptr [RAX + 0xb8]
/* 0cb324e5 */  TEST AL,AL
/* 0cb324e7 */  MOV R15,qword ptr [RSP + 0xc0]
/* 0cb324ef */  MOV RSI,qword ptr [RSP + 0xb8]
/* 0cb324f7 */  JZ 0x0cb3250e
/* 0cb324f9 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0cb324fe */  MOV RSI,qword ptr [RAX + 0x50]
/* 0cb32502 */  MOV RDI,qword ptr [RSP + 0x8]
/* 0cb32507 */  CALL 0x0cb2f260
/* 0cb3250c */  JMP 0x0cb3251e
/* 0cb3250e */  MOV RAX,qword ptr [RSP + 0x8]
/* 0cb32513 */  MOV RDI,qword ptr [RAX + 0x40]
/* 0cb32517 */  XOR EDX,EDX
/* 0cb32519 */  CALL 0x0cb30ba0
/* 0cb3251e */  MOVAPS XMM0,xmmword ptr [RSP + 0x10]
/* 0cb32523 */  MOVUPS xmmword ptr [R15],XMM0
/* 0cb32527 */  MOV RAX,R15
/* 0cb3252a */  ADD RSP,0xc8
/* 0cb32531 */  POP RBX
/* 0cb32532 */  POP R12
/* 0cb32534 */  POP R13
/* 0cb32536 */  POP R14
/* 0cb32538 */  POP R15
/* 0cb3253a */  POP RBP
/* 0cb3253b */  RET
/* 0cb3253c */  CMP RAX,R14
/* 0cb3253f */  JC 0x0cb32555
/* 0cb32541 */  MOV RDX,RAX
/* 0cb32544 */  OR RDX,R14
/* 0cb32547 */  SHR RDX,0x20
/* 0cb3254b */  JZ 0x0cb3255e
/* 0cb3254d */  XOR EDX,EDX
/* 0cb3254f */  DIV R14
/* 0cb32552 */  MOV RAX,RDX
/* 0cb32555 */  MOV qword ptr [RCX + RAX*0x8],RBX
/* 0cb32559 */  JMP 0x0cb31e31
/* 0cb3255e */  XOR EDX,EDX
/* 0cb32560 */  DIV R14D
/* 0cb32563 */  MOV EAX,EDX
/* 0cb32565 */  MOV qword ptr [RCX + RAX*0x8],RBX
/* 0cb32569 */  JMP 0x0cb31e31
/* 0cb3256e */  MOV EAX,ECX
/* 0cb32570 */  XOR EDX,EDX
/* 0cb32572 */  DIV R8D
/* 0cb32575 */  MOV ECX,EDX
/* 0cb32577 */  MOV qword ptr [R15 + RCX*0x8],RDI
/* 0cb3257b */  MOV RDI,qword ptr [RSI]
/* 0cb3257e */  JMP 0x0cb325a6
/* 0cb32580 */  MOV RDX,qword ptr [RDI]
/* 0cb32583 */  MOV qword ptr [RSI],RDX
/* 0cb32586 */  MOV RDX,qword ptr [R15 + RAX*0x8]
/* 0cb3258a */  MOV RDX,qword ptr [RDX]
/* 0cb3258d */  MOV qword ptr [RDI],RDX
/* 0cb32590 */  MOV RAX,qword ptr [R15 + RAX*0x8]
/* 0cb32594 */  MOV qword ptr [RAX],RDI
/* 0cb32597 */  MOV RDI,RSI
/* 0cb3259a */  MOV RAX,RCX
/* 0cb3259d */  MOV RSI,RDI
/* 0cb325a0 */  MOV RDI,qword ptr [RDI]
/* 0cb325a3 */  MOV RCX,RAX
/* 0cb325a6 */  TEST RDI,RDI
/* 0cb325a9 */  JZ 0x0cb31dec
/* 0cb325af */  MOV RAX,qword ptr [RDI + 0x8]
/* 0cb325b3 */  CMP RAX,R8
/* 0cb325b6 */  JC 0x0cb325cc
/* 0cb325b8 */  MOV RDX,RAX
/* 0cb325bb */  OR RDX,R8
/* 0cb325be */  SHR RDX,0x20
/* 0cb325c2 */  JZ 0x0cb325de
/* 0cb325c4 */  XOR EDX,EDX
/* 0cb325c6 */  DIV R8
/* 0cb325c9 */  MOV RAX,RDX
/* 0cb325cc */  CMP RAX,RCX
/* 0cb325cf */  JZ 0x0cb3259a
/* 0cb325d1 */  CMP qword ptr [R15 + RAX*0x8],0x0
/* 0cb325d6 */  JNZ 0x0cb32580
/* 0cb325d8 */  MOV qword ptr [R15 + RAX*0x8],RSI
/* 0cb325dc */  JMP 0x0cb3259d
/* 0cb325de */  XOR EDX,EDX
/* 0cb325e0 */  DIV R8D
/* 0cb325e3 */  MOV EAX,EDX
/* 0cb325e5 */  CMP RAX,RCX
/* 0cb325e8 */  JZ 0x0cb3259a
/* 0cb325ea */  JMP 0x0cb325d1
/* 0cb325ec */  MOV EDI,0x58
/* 0cb325f1 */  XOR ESI,ESI
/* 0cb325f3 */  CALL 0x0eec74c0
/* 0cb325f8 */  JMP 0x0cb3176c
/* 0cb325fd */  MOV EDI,0x28
/* 0cb32602 */  XOR ESI,ESI
/* 0cb32604 */  CALL 0x0eec74c0
/* 0cb32609 */  JMP 0x0cb31a58
/* 0cb3260e */  MOV RDI,qword ptr [RSP + 0x78]
/* 0cb32613 */  XOR ESI,ESI
/* 0cb32615 */  CALL 0x0eec74c0
/* 0cb3261a */  JMP 0x0cb31bca
/* 0cb3261f */  CALL 0x04882eb0
/* 0cb32624 */  MOV RDI,RAX
/* 0cb32627 */  CALL 0x04882e20
/* 0cb3262c */  MOV RBX,RAX
/* 0cb3262f */  LEA RDI,[RSP + 0x50]
/* 0cb32634 */  CALL 0x0cb57b80
/* 0cb32639 */  JMP 0x0cb326c2
/* 0cb326c2 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0cb326c7 */  CALL 0x0eee0720
/* 0cb326cc */  MOV RAX,-0x1
/* 0cb326d3 */  MOV RCX,qword ptr [RSP + 0x80]
/* 0cb326db */  XADD.LOCK qword ptr [RCX],RAX
/* 0cb326e0 */  TEST RAX,RAX
/* 0cb326e3 */  JNZ 0x0cb326f7
/* 0cb326e5 */  MOV RAX,qword ptr [R12]
/* 0cb326e9 */  MOV RDI,R12
/* 0cb326ec */  CALL qword ptr [RAX + 0x10]
/* 0cb326ef */  MOV RDI,R12
/* 0cb326f2 */  CALL 0x0412c2d0
/* 0cb326f7 */  LEA RDI,[RSP + 0x90]
/* 0cb326ff */  CALL 0x04a7efb0
/* 0cb32704 */  LEA RDI,[RSP + 0x10]
/* 0cb32709 */  CALL 0x04a7efb0
/* 0cb3270e */  MOV RDI,RBX
/* 0cb32711 */  CALL 0x0eee2d70
/* 0cb32716 */  MOV RDI,RAX
/* 0cb32719 */  CALL 0x04882e20
/* 0cb3271e */  INT3
