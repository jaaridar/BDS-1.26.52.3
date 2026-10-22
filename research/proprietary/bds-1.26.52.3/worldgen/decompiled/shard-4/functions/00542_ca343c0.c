/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb343c0 (ELF vaddr 0xca343c0)
 * Label: callee-of:0xca2cd50
 * Body:  [[0cb343c0, 0cb3454c] [0cb34550, 0cb34588] [0cb34590, 0cb345fc] [0cb34600, 0cb34850] [0cb34860, 0cb34933] [0cb34940, 0cb34b4a] [0cb34b50, 0cb34c74] [0cb34c80, 0cb34fc8] [0cb34fd0, 0cb352a7] [0cb352b0, 0cb354c3] [0cb354d0, 0cb3553c] [0cb35540, 0cb3558a] [0cb35590, 0cb35692] [0cb356a0, 0cb35788] [0cb3581a, 0cb35856]]
 * Ghidra: FUN_0cb343c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb343c0(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  long *unaff_R12;
  ulong uVar23;
  long *plVar24;
  long *unaff_R13;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long *unaff_R15;
  long *plVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_68;
  int iStack_5c;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long lStack_38;
  
  plStack_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  plStack_58 = param_1 + 0x12;
  func_0x0412d450();
  if (((((((int)param_1[0x24] == (int)*param_2) &&
         (*(int *)((long)param_1 + 0x124) == *(int *)((long)param_2 + 4))) &&
        ((int)param_1[0x25] == (int)param_2[1])) &&
       ((*(int *)((long)param_1 + 300) == *(int *)((long)param_2 + 0xc) &&
        ((int)param_1[0x26] == (int)param_2[2])))) &&
      ((*(int *)((long)param_1 + 0x134) == *(int *)((long)param_2 + 0x14) &&
       (((int)param_1[0x27] == (int)param_2[3] &&
        (*(int *)((long)param_1 + 0x13c) == *(int *)((long)param_2 + 0x1c))))))) &&
     (((int)param_1[0x28] == (int)param_2[4] &&
      (((*(int *)((long)param_1 + 0x144) == *(int *)((long)param_2 + 0x24) &&
        ((int)param_1[0x29] == (int)param_2[5])) &&
       (*(int *)((long)param_1 + 0x14c) == *(int *)((long)param_2 + 0x2c))))))) goto LAB_0cb3560c;
  plVar29 = param_1 + 0x2d;
  uVar13 = (ulong)(int)param_2[5];
  lVar25 = param_1[0x2e];
  uVar17 = lVar25 - param_1[0x2d] >> 4;
  if (uVar17 < uVar13) {
    func_0x0cb56240(plVar29);
  }
  else if (uVar13 < uVar17) {
    lVar26 = param_1[0x2d] + uVar13 * 0x10;
    for (; lVar26 != lVar25; lVar25 = lVar25 + -0x10) {
      unaff_R12 = *(long **)(lVar25 + -8);
      if (unaff_R12 != (long *)0x0) {
        LOCK();
        plVar24 = unaff_R12 + 1;
        lVar14 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar14 == 0) {
          (**(code **)(*unaff_R12 + 0x10))(unaff_R12);
          func_0x0412c2d0(unaff_R12);
        }
      }
    }
    param_1[0x2e] = lVar26;
  }
  if ((char)param_1[0x30] == '\0') {
    uVar6 = *(uint *)(param_1 + 0x29);
    unaff_R13 = plVar29;
    if ((ulong)uVar6 != 0) {
      iVar19 = (int)param_1[0x25];
      unaff_R13 = (long *)(ulong)*(uint *)(param_1 + 0x24);
      iVar21 = *(int *)((long)param_1 + 0x124);
      lVar25 = 0;
      do {
        lVar26 = param_1[0x2a];
        lVar14 = *(long *)(lVar26 + lVar25);
        iVar22 = (int)unaff_R13;
        if (((((lVar14 == 0) || (*(int *)((long)param_2 + 0x24) < 1)) ||
             ((iVar22 < (int)*param_2 ||
              ((*(int *)((long)param_2 + 0xc) < iVar22 || (iVar21 < *(int *)((long)param_2 + 4))))))
             ) || ((int)param_2[2] < iVar21)) ||
           ((iVar19 < (int)param_2[1] || (*(int *)((long)param_2 + 0x14) < iVar19)))) {
LAB_0cb34910:
          if (*(int *)((long)param_1 + 300) <= iVar22) goto LAB_0cb3491d;
LAB_0cb34860:
          unaff_R13 = (long *)(ulong)(iVar22 + 1);
        }
        else {
          lVar28 = *plVar29;
          lVar18 = (long)((iVar22 - (int)*param_2) +
                          (iVar21 - *(int *)((long)param_2 + 4)) * *(int *)((long)param_2 + 0x24) +
                         (iVar19 - (int)param_2[1]) * (int)param_2[3]) * 0x10;
          uVar16 = *(undefined8 *)(lVar26 + 8 + lVar25);
          *(undefined8 *)(lVar26 + lVar25) = 0;
          ((undefined8 *)(lVar26 + lVar25))[1] = 0;
          *(long *)(lVar28 + lVar18) = lVar14;
          unaff_R12 = *(long **)(lVar28 + 8 + lVar18);
          *(undefined8 *)(lVar28 + 8 + lVar18) = uVar16;
          if (unaff_R12 == (long *)0x0) goto LAB_0cb34910;
          LOCK();
          plVar24 = unaff_R12 + 1;
          lVar26 = *plVar24;
          *plVar24 = *plVar24 + -1;
          UNLOCK();
          if (lVar26 != 0) goto LAB_0cb34910;
          plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,iVar21);
          (**(code **)(*unaff_R12 + 0x10))(unaff_R12);
          func_0x0412c2d0(unaff_R12);
          if (iVar22 < *(int *)((long)param_1 + 300)) goto LAB_0cb34860;
LAB_0cb3491d:
          unaff_R13 = (long *)(ulong)*(uint *)(param_1 + 0x24);
          if (iVar19 < *(int *)((long)param_1 + 0x134)) {
            iVar19 = iVar19 + 1;
          }
          else {
            iVar19 = (int)param_1[0x25];
            iVar21 = iVar21 + 1;
          }
        }
        lVar25 = lVar25 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar25);
    }
  }
  else {
    unaff_R13 = (long *)0x0;
    if ((ulong)*(uint *)(param_1 + 0x29) != 0) {
      iVar19 = (int)param_1[0x25];
      unaff_R12 = (long *)(ulong)*(uint *)(param_1 + 0x24);
      plStack_100._0_4_ = *(int *)((long)param_1 + 0x124);
      unaff_R13 = (long *)((ulong)*(uint *)(param_1 + 0x29) << 4);
      plVar24 = (long *)0x0;
      fVar34 = _DAT_011986e0;
      fVar35 = _DAT_01198b28;
      do {
        lVar25 = param_1[0x2a];
        lVar26 = *(long *)(lVar25 + (long)plVar24);
        iVar21 = (int)unaff_R12;
        if ((lVar26 != 0) && (0 < *(int *)((long)param_2 + 0x24))) {
          iVar22 = (int)*param_2;
          if (iVar21 <= *(int *)((long)param_2 + 0xc) && iVar22 <= iVar21) {
            iVar3 = *(int *)((long)param_2 + 4);
            plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,iVar3);
            if (iVar3 <= (int)plStack_100) {
              iVar4 = (int)param_2[2];
              plStack_f0 = (long *)CONCAT44(plStack_f0._4_4_,iVar4);
              if ((int)plStack_100 <= iVar4) {
                iVar5 = (int)param_2[1];
                if ((iVar5 <= iVar19) && (iVar19 <= *(int *)((long)param_2 + 0x14))) {
                  fVar32 = (float)(int)param_1[0x27] * fVar34 + fVar35;
                  fVar33 = (float)iVar21 -
                           (float)(*(int *)((long)param_1 + 300) + (int)param_1[0x24]) * fVar34;
                  fVar30 = (float)(int)plStack_100 -
                           (float)((int)param_1[0x26] + *(int *)((long)param_1 + 0x124)) * fVar34;
                  fVar31 = (float)iVar19 -
                           (float)(*(int *)((long)param_1 + 0x134) + (int)param_1[0x25]) * fVar34;
                  if ((fVar31 * fVar31 + fVar33 * fVar33 + fVar30 * fVar30 < fVar32 * fVar32) &&
                     (fVar33 = (float)(int)param_2[3] * fVar34 + fVar35,
                     fVar30 = (float)iVar21 -
                              (float)(*(int *)((long)param_2 + 0xc) + iVar22) * fVar34,
                     fVar32 = (float)(int)plStack_100 - (float)(iVar4 + iVar3) * fVar34,
                     fVar31 = (float)iVar19 -
                              (float)(*(int *)((long)param_2 + 0x14) + iVar5) * fVar34,
                     fVar31 * fVar31 + fVar30 * fVar30 + fVar32 * fVar32 < fVar33 * fVar33)) {
                    lVar14 = *plVar29;
                    lVar28 = (long)((iVar21 - iVar22) +
                                    ((int)plStack_100 - iVar3) * *(int *)((long)param_2 + 0x24) +
                                   (int)param_2[3] * (iVar19 - iVar5)) * 0x10;
                    uVar16 = *(undefined8 *)(lVar25 + 8 + (long)plVar24);
                    *(undefined8 *)(lVar25 + (long)plVar24) = 0;
                    ((undefined8 *)(lVar25 + (long)plVar24))[1] = 0;
                    *(long *)(lVar14 + lVar28) = lVar26;
                    plVar15 = *(long **)(lVar14 + 8 + lVar28);
                    *(undefined8 *)(lVar14 + 8 + lVar28) = uVar16;
                    if (plVar15 != (long *)0x0) {
                      LOCK();
                      plVar27 = plVar15 + 1;
                      lVar25 = *plVar27;
                      *plVar27 = *plVar27 + -1;
                      UNLOCK();
                      if (lVar25 == 0) {
                        (**(code **)(*plVar15 + 0x10))();
                        func_0x0412c2d0(plVar15);
                        fVar34 = _DAT_011986e0;
                        fVar35 = _DAT_01198b28;
                        plStack_c0 = plVar15;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (iVar21 < *(int *)((long)param_1 + 300)) {
          unaff_R12 = (long *)(ulong)(iVar21 + 1);
        }
        else {
          unaff_R12 = (long *)(ulong)*(uint *)(param_1 + 0x24);
          if (iVar19 < *(int *)((long)param_1 + 0x134)) {
            iVar19 = iVar19 + 1;
          }
          else {
            iVar19 = (int)param_1[0x25];
            plStack_100._0_4_ = (int)plStack_100 + 1;
          }
        }
        plVar24 = plVar24 + 2;
      } while (unaff_R13 != plVar24);
    }
  }
  if ((long *)param_1[4] != (long *)0x0) {
    plStack_a8 = (long *)param_1[0x2a];
    plStack_a0 = (long *)param_1[0x2b];
    (**(code **)(*(long *)param_1[4] + 0x30))();
  }
  lVar25 = *param_2;
  lVar26 = param_2[1];
  lVar14 = param_2[2];
  lVar28 = param_2[3];
  lVar18 = param_2[5];
  param_1[0x28] = param_2[4];
  param_1[0x29] = lVar18;
  param_1[0x26] = lVar14;
  param_1[0x27] = lVar28;
  param_1[0x24] = lVar25;
  param_1[0x25] = lVar26;
  plVar29 = (long *)param_1[0x2a];
  unaff_R15 = (long *)param_1[0x2b];
  lVar25 = param_1[0x2d];
  param_1[0x2d] = (long)plVar29;
  lVar26 = param_1[0x2b];
  iVar19 = *(int *)((long)param_1 + 0x15c);
  lVar14 = param_1[0x2c];
  *(int *)(param_1 + 0x2a) = (int)lVar25;
  *(int *)((long)param_1 + 0x154) = *(int *)((long)param_1 + 0x16c);
  *(int *)(param_1 + 0x2b) = (int)param_1[0x2e];
  *(int *)((long)param_1 + 0x15c) = *(int *)((long)param_1 + 0x174);
  param_1[0x2c] = param_1[0x2f];
  *(int *)(param_1 + 0x2e) = (int)lVar26;
  *(int *)((long)param_1 + 0x174) = iVar19;
  *(int *)(param_1 + 0x2f) = (int)lVar14;
  *(int *)((long)param_1 + 0x17c) = *(int *)((long)param_1 + 0x164);
  for (; plVar29 != unaff_R15; unaff_R15 = unaff_R15 + -2) {
    param_2 = (long *)unaff_R15[-1];
    if (param_2 != (long *)0x0) {
      LOCK();
      plVar24 = param_2 + 1;
      lVar25 = *plVar24;
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (lVar25 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        func_0x0412c2d0(param_2);
      }
    }
  }
  param_1[0x2e] = (long)plVar29;
  plStack_108 = param_1;
  if (param_1[10] == 0) goto LAB_0cb3560c;
  plStack_c0 = (long *)param_1[0x10];
  uVar6 = *(uint *)(param_1 + 0x29);
  unaff_R12 = (long *)(long)(int)uVar6;
  if (unaff_R12 == (long *)0x0) {
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    bVar12 = true;
    uVar13 = 0;
    lVar25 = 0;
    plStack_f0 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    plStack_100 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    unaff_R12 = (long *)0x0;
    goto LAB_0cb35389;
  }
  unaff_R13 = (long *)(ulong)uVar6;
  if ((int)uVar6 < 0) {
LAB_0cb35777:
    func_0x0caada50();
LAB_0cb3577c:
    uVar16 = func_0x05d94ab0();
    func_0x0412a280(plStack_f0,(long)plStack_d0 - (long)plStack_f0);
    func_0x0412d520(plStack_58);
    func_0x05d80ec0(&plStack_88);
    uVar16 = func_0x0eee2d70(uVar16);
    func_0x04882e20(uVar16);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  unaff_R15 = (long *)((long)unaff_R12 * 4);
  param_2 = (long *)((long)unaff_R12 * 0xc);
  param_1 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_2);
  if (param_1 == (long *)0x0) goto LAB_0cb3570e;
  do {
    plStack_d0 = (long *)((long)param_1 + (long)unaff_R12 * 0xc);
    param_2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,unaff_R15);
    if (param_2 == (long *)0x0) {
      func_0x0eec74c0(unaff_R15,0);
    }
    plStack_d8 = (long *)((long)param_2 + (long)unaff_R12 * 4);
    iVar19 = (int)plStack_108[0x24];
    iVar21 = *(int *)((long)plStack_108 + 0x124);
    iVar22 = (int)plStack_108[0x25];
    plStack_100 = param_2;
    plStack_f0 = param_1;
    if ((char)plStack_108[0x30] == '\0') {
      lVar25 = 0;
      plVar24 = (long *)0x0;
      plVar29 = param_2;
      do {
        if (*(long *)(plStack_108[0x2a] + lVar25) == 0) {
          if (plStack_d0 <= param_1) {
            lVar26 = (long)param_1 - (long)plStack_f0;
            uVar13 = (lVar26 >> 2) * -0x5555555555555555 + 1;
            if (uVar13 < 0x1555555555555556) {
              lVar28 = (long)plStack_d0 - (long)plStack_f0;
              lVar14 = lVar28 >> 2;
              uVar17 = lVar14 * 0x5555555555555556;
              if (uVar13 < uVar17) {
                uVar13 = uVar17;
              }
              if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
                uVar13 = 0x1555555555555555;
              }
              if (uVar13 < 0x1555555555555556) {
                lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0xc);
                if (lVar14 == 0) {
                  func_0x0eec74c0(uVar13 * 0xc,0);
                }
                plStack_d0 = (long *)(lVar14 + uVar13 * 0xc);
                *(int *)(lVar14 + lVar26) = iVar19;
                *(int *)(lVar14 + 4 + lVar26) = iVar21;
                *(int *)(lVar14 + 8 + lVar26) = iVar22;
                uVar13 = SUB168(SEXT816(lVar26) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                param_1 = (long *)(lVar14 + lVar26);
                plVar15 = (long *)(lVar14 + lVar26 + ((uVar13 >> 1) - ((long)uVar13 >> 0x3f)) * 0xc)
                ;
                func_0x0eee2f00(plVar15,plStack_f0,lVar26);
                if (plStack_f0 != (long *)0x0) {
                  func_0x0412a280(plStack_f0,lVar28);
                }
                goto joined_r0x0cb35175;
              }
              func_0x04882eb0();
            }
            func_0x0caada50();
LAB_0cb35754:
            func_0x04882eb0();
LAB_0cb35759:
            func_0x0533ee50();
            goto LAB_0cb3575e;
          }
          *(int *)param_1 = iVar19;
          *(int *)((long)param_1 + 4) = iVar21;
          *(int *)(param_1 + 1) = iVar22;
          plVar15 = plStack_f0;
joined_r0x0cb35175:
          plStack_f0 = plVar15;
          param_1 = (long *)((long)param_1 + 0xc);
          if (plVar29 < plStack_d8) {
            *(int *)plVar29 = (int)plVar24;
            plVar29 = (long *)((long)plVar29 + 4);
            iVar3 = *(int *)((long)plStack_108 + 300);
            param_2 = plStack_f0;
          }
          else {
            uStack_90 = (long)plVar29 - (long)plStack_100;
            lVar26 = (long)uStack_90 >> 2;
            uVar13 = lVar26 + 1;
            if (0x3fffffffffffffff < uVar13) goto LAB_0cb35759;
            uVar23 = (long)plStack_d8 - (long)plStack_100;
            uVar17 = (long)uVar23 >> 1;
            if ((ulong)((long)uVar23 >> 1) <= uVar13) {
              uVar17 = uVar13;
            }
            if (0x7ffffffffffffffb < uVar23) {
              uVar17 = 0x3fffffffffffffff;
            }
            if (0x3fffffffffffffff < uVar17) goto LAB_0cb35754;
            param_2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 4);
            if (param_2 == (long *)0x0) {
              func_0x0eec74c0(uVar17 * 4,0);
            }
            uVar13 = uStack_90;
            *(int *)((long)param_2 + uStack_90) = (int)plVar24;
            plStack_68 = (long *)((long)param_2 + lVar26 * -4 + uStack_90);
            func_0x0eee2f00(plStack_68,plStack_100,uStack_90);
            plVar29 = (long *)((long)param_2 + uVar13 + 4);
            plStack_d8 = (long *)((long)param_2 + uVar17 * 4);
            func_0x0412a280(plStack_100,uVar23);
            iVar3 = *(int *)((long)plStack_108 + 300);
            plStack_100 = plStack_68;
          }
          if (iVar3 <= iVar19) goto LAB_0cb35290;
LAB_0cb34f90:
          iVar19 = iVar19 + 1;
        }
        else {
          if (iVar19 < *(int *)((long)plStack_108 + 300)) goto LAB_0cb34f90;
LAB_0cb35290:
          iVar19 = (int)plStack_108[0x24];
          if (iVar22 < *(int *)((long)plStack_108 + 0x134)) {
            iVar22 = iVar22 + 1;
          }
          else {
            iVar22 = (int)plStack_108[0x25];
            iVar21 = iVar21 + 1;
          }
        }
        plVar24 = (long *)((long)plVar24 + 1);
        lVar25 = lVar25 + 0x10;
      } while (unaff_R13 != plVar24);
    }
    else {
      uVar13 = (ulong)unaff_R12 & 0xffffffff;
      lVar25 = 0;
      uVar17 = 0;
      fVar34 = _DAT_011986e0;
      fVar35 = _DAT_01198b28;
      uStack_90 = uVar13;
      do {
        if ((*(long *)(plStack_108[0x2a] + lVar25) != 0) ||
           (fVar32 = (float)iVar19 -
                     (float)(*(int *)((long)plStack_108 + 300) + (int)plStack_108[0x24]) * fVar34,
           fVar33 = (float)iVar21 -
                    (float)((int)plStack_108[0x26] + *(int *)((long)plStack_108 + 0x124)) * fVar34,
           fVar30 = (float)iVar22 -
                    (float)(*(int *)((long)plStack_108 + 0x134) + (int)plStack_108[0x25]) * fVar34,
           fVar31 = (float)(int)plStack_108[0x27] * fVar34 + fVar35,
           fVar31 * fVar31 <= fVar30 * fVar30 + fVar32 * fVar32 + fVar33 * fVar33)) {
LAB_0cb34c50:
          if (iVar19 < *(int *)((long)plStack_108 + 300)) goto LAB_0cb34b50;
LAB_0cb34c5d:
          iVar19 = (int)plStack_108[0x24];
          if (iVar22 < *(int *)((long)plStack_108 + 0x134)) {
            iVar22 = iVar22 + 1;
          }
          else {
            iVar22 = (int)plStack_108[0x25];
            iVar21 = iVar21 + 1;
          }
        }
        else {
          if (param_1 < plStack_d0) {
            *(int *)param_1 = iVar19;
            *(int *)((long)param_1 + 4) = iVar21;
            *(int *)(param_1 + 1) = iVar22;
            plVar29 = plStack_f0;
          }
          else {
            lVar26 = (long)param_1 - (long)plStack_f0;
            uVar13 = (lVar26 >> 2) * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar13) goto LAB_0cb35768;
            lVar28 = (long)plStack_d0 - (long)plStack_f0;
            lVar14 = lVar28 >> 2;
            uVar23 = lVar14 * 0x5555555555555556;
            if (uVar13 < uVar23) {
              uVar13 = uVar23;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar14 * -0x5555555555555555)) {
              uVar13 = 0x1555555555555555;
            }
            if (0x1555555555555555 < uVar13) goto LAB_0cb35763;
            lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0xc);
            if (lVar14 == 0) {
              func_0x0eec74c0(uVar13 * 0xc,0);
            }
            plStack_d0 = (long *)(lVar14 + uVar13 * 0xc);
            *(int *)(lVar14 + lVar26) = iVar19;
            *(int *)(lVar14 + 4 + lVar26) = iVar21;
            *(int *)(lVar14 + 8 + lVar26) = iVar22;
            uVar13 = SUB168(SEXT816(lVar26) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            param_1 = (long *)(lVar26 + lVar14);
            plVar29 = (long *)(lVar14 + lVar26 + ((uVar13 >> 1) - ((long)uVar13 >> 0x3f)) * 0xc);
            func_0x0eee2f00(plVar29,plStack_f0,lVar26);
            fVar34 = _DAT_011986e0;
            fVar35 = _DAT_01198b28;
            uVar13 = uStack_90;
            if (plStack_f0 != (long *)0x0) {
              func_0x0412a280(plStack_f0,lVar28);
              fVar34 = _DAT_011986e0;
              fVar35 = _DAT_01198b28;
              uVar13 = uStack_90;
            }
          }
          plStack_f0 = plVar29;
          param_1 = (long *)((long)param_1 + 0xc);
          if (param_2 < plStack_d8) {
            *(int *)param_2 = (int)uVar17;
            param_2 = (long *)((long)param_2 + 4);
            goto LAB_0cb34c50;
          }
          lVar26 = (long)param_2 - (long)plStack_100;
          uVar13 = (lVar26 >> 2) + 1;
          if (0x3fffffffffffffff < uVar13) goto LAB_0cb35772;
          uVar20 = (long)plStack_d8 - (long)plStack_100;
          uVar23 = (long)uVar20 >> 1;
          if ((ulong)((long)uVar20 >> 1) <= uVar13) {
            uVar23 = uVar13;
          }
          if (0x7ffffffffffffffb < uVar20) {
            uVar23 = 0x3fffffffffffffff;
          }
          if (0x3fffffffffffffff < uVar23) goto LAB_0cb3576d;
          lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (lVar14 == 0) {
            func_0x0eec74c0(uVar23 * 4,0);
          }
          *(int *)(lVar14 + lVar26) = (int)uVar17;
          plStack_68 = (long *)(lVar14 + lVar26 + (lVar26 >> 2) * -4);
          func_0x0eee2f00(plStack_68,plStack_100,lVar26);
          param_2 = (long *)(lVar26 + lVar14 + 4);
          plStack_d8 = (long *)(lVar14 + uVar23 * 4);
          func_0x0412a280(plStack_100,uVar20);
          plStack_100 = plStack_68;
          uVar13 = uStack_90;
          fVar34 = _DAT_011986e0;
          fVar35 = _DAT_01198b28;
          if (*(int *)((long)plStack_108 + 300) <= iVar19) goto LAB_0cb34c5d;
LAB_0cb34b50:
          iVar19 = iVar19 + 1;
        }
        uVar17 = uVar17 + 1;
        lVar25 = lVar25 + 0x10;
      } while (uVar13 != uVar17);
    }
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    lVar25 = (long)param_1 - (long)plStack_f0;
    if (lVar25 == 0) {
      uVar13 = 0;
      bVar12 = true;
      lVar25 = 0;
      unaff_R12 = (long *)0x0;
    }
    else {
      lVar26 = (long)param_1 - (long)plStack_f0 >> 2;
      uVar13 = lVar26 * -0x5555555555555555;
      if (uVar13 >> 0x3c != 0) goto LAB_0cb3577c;
      param_2 = (long *)(lVar26 * -0x5555555555555550);
      unaff_R12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_2);
      if (unaff_R12 == (long *)0x0) {
        func_0x0eec74c0(param_2,0);
      }
      bVar12 = false;
      plStack_a8 = unaff_R12;
      plStack_98 = unaff_R12 + lVar26 * -0xaaaaaaaaaaaaaaa;
      memset(unaff_R12,0,param_2);
      plStack_a0 = unaff_R12 + lVar26 * -0xaaaaaaaaaaaaaaa;
    }
LAB_0cb35389:
    lStack_38 = lVar25 + (long)plStack_f0;
    iStack_5c = (*(int *)((long)plStack_108 + 0x14c) * (int)plStack_108[0x27]) / 2;
    plVar29 = (long *)plStack_108[10];
    plStack_50 = unaff_R12;
    plStack_48 = plStack_a0;
    plStack_40 = plStack_f0;
    if (plVar29 == (long *)0x0) {
LAB_0cb3575e:
      func_0x04891200();
LAB_0cb35763:
      func_0x04882eb0();
LAB_0cb35768:
      func_0x0caada50();
LAB_0cb3576d:
      func_0x04882eb0();
LAB_0cb35772:
      func_0x0533ee50();
      goto LAB_0cb35777;
    }
    (**(code **)(*plVar29 + 0x30))(plVar29,&plStack_40,&plStack_50,&iStack_5c);
    plVar24 = plStack_80;
    plVar29 = plStack_88;
    if ((plStack_c0 != (long *)0x0) &&
       (lVar25 = (long)plStack_78 - (long)plStack_88, (ulong)(lVar25 >> 4) < uVar13)) {
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13 * 0x10);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(uVar13 * 0x10,0);
      }
      plVar27 = (long *)(((long)plVar24 - (long)plVar29) + (long)plVar15);
      param_2 = plVar15 + uVar13 * 2;
      func_0x0eee2f00(plVar15,plVar29,(long)plVar24 - (long)plVar29);
      plStack_88 = plVar15;
      plStack_80 = plVar27;
      plStack_78 = param_2;
      if (plVar29 != (long *)0x0) {
        func_0x0412a280(plVar29,lVar25);
      }
    }
    if (!bVar12) {
      lVar26 = uVar13 + (uVar13 == 0);
      lVar25 = 0;
      do {
        lVar14 = plStack_108[0x2a];
        lVar28 = (ulong)*(uint *)((long)plStack_100 + lVar25) * 0x10;
        puVar1 = (undefined4 *)((long)plStack_a8 + lVar25 * 4);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (undefined8 *)((long)plStack_a8 + lVar25 * 4);
        *puVar2 = 0;
        puVar2[1] = 0;
        param_2 = *(long **)(lVar14 + 8 + lVar28);
        puVar1 = (undefined4 *)(lVar14 + lVar28);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        if (param_2 != (long *)0x0) {
          LOCK();
          plVar29 = param_2 + 1;
          lVar18 = *plVar29;
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (lVar18 == 0) {
            (**(code **)(*param_2 + 0x10))(param_2);
            func_0x0412c2d0(param_2);
          }
        }
        if (plStack_c0 != (long *)0x0) {
          func_0x05d81250(&plStack_88,lVar14 + lVar28);
        }
        lVar25 = lVar25 + 4;
        lVar26 = lVar26 + -1;
        unaff_R12 = plStack_a8;
      } while (lVar26 != 0);
    }
    plVar29 = unaff_R12;
    plVar24 = plStack_a0;
    if (unaff_R12 != (long *)0x0) {
      for (; unaff_R12 != plVar24; plVar24 = plVar24 + -2) {
        param_2 = (long *)plVar24[-1];
        if (param_2 != (long *)0x0) {
          LOCK();
          plVar29 = param_2 + 1;
          lVar25 = *plVar29;
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (lVar25 == 0) {
            (**(code **)(*param_2 + 0x10))(param_2);
            func_0x0412c2d0(param_2);
          }
        }
        plVar29 = plStack_a8;
      }
      plStack_a0 = unaff_R12;
      func_0x0412a280(plVar29,(long)plStack_98 - (long)plVar29);
    }
    if (plStack_100 != (long *)0x0) {
      func_0x0412a280(plStack_100,(long)plStack_d8 - (long)plStack_100);
    }
    unaff_R13 = plStack_100;
    param_1 = plStack_108;
    unaff_R15 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      func_0x0412a280(plStack_f0,(long)plStack_d0 - (long)plStack_f0);
    }
LAB_0cb3560c:
    func_0x0412d520(plStack_58);
    plVar29 = (long *)param_1[0x10];
    if (plVar29 == (long *)0x0) goto LAB_0cb35674;
    if (((long)plStack_80 - (long)plStack_88 != -0x10) &&
       (plStack_80 == (long *)0x0 || plStack_88 != (long *)0x0)) {
      plStack_a8 = (long *)((long)plStack_80 - (long)plStack_88 >> 4);
      plStack_a0 = plStack_88;
      (**(code **)(*plVar29 + 0x30))(plVar29,&plStack_a8);
LAB_0cb35674:
      plVar24 = plStack_88;
      plVar29 = plStack_80;
      if (plStack_88 != (long *)0x0) {
        for (; plVar24 != plVar29; plVar29 = plVar29 + -2) {
          plVar15 = (long *)plVar29[-1];
          if (plVar15 != (long *)0x0) {
            LOCK();
            plVar27 = plVar15 + 1;
            lVar25 = *plVar27;
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (lVar25 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              func_0x0412c2d0(plVar15);
            }
          }
        }
        plStack_80 = plVar24;
        func_0x0412a280(plStack_88,(long)plStack_78 - (long)plStack_88);
      }
      return;
    }
    func_0x04890760();
LAB_0cb3570e:
    func_0x0eec74c0(param_2,0);
  } while( true );
}


