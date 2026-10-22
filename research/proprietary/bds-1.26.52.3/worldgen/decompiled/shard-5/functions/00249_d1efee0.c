/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2efee0 (ELF vaddr 0xd1efee0)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2efee0, 0d2effc9] [0d2effd0, 0d2f0229] [0d2f0230, 0d2f026b] [0d2f0270, 0d2f02cd] [0d2f02d0, 0d2f04f8] [0d2f0500, 0d2f05d8] [0d2f0650, 0d2f069c]]
 * Ghidra: FUN_0d2efee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d2efee0(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  int *piStack_110;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  uint uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  piStack_a8 = (int *)0x0;
  piStack_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  puStack_60 = param_1;
  piVar9 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (piVar9 == (int *)0x0) goto LAB_0d2f05a0;
  do {
    piStack_98 = piVar9 + 0x50;
    piStack_a8 = piVar9;
    piStack_a0 = piVar9;
    piVar10 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
    if (piVar10 == (int *)0x0) {
      func_0x0eec74c0(0x280,0);
    }
    piVar22 = piVar10 + 0xa0;
    plVar11 = param_2 + 5;
    uStack_78 = CONCAT31(uStack_78._1_3_,1);
    plStack_80 = plVar11;
    func_0x0412d550(plVar11);
    plStack_d8 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    plVar23 = (long *)param_2[2];
    if (plVar23 == (long *)0x0) {
LAB_0d2f01c8:
      func_0x0412d610(plVar11);
    }
    else {
      do {
        lVar14 = plVar23[4];
        plVar1 = plStack_d8;
        plVar11 = plStack_80;
        for (lVar26 = plVar23[3]; plStack_d8 = plVar1, plStack_80 = plVar11, lVar26 != lVar14;
            lVar26 = lVar26 + 0x18) {
          if ((*(long *)(lVar26 + 0x10) != 0) &&
             (plVar11 = (long *)func_0x0412c300(), plStack_38 = plVar11, plVar11 != (long *)0x0)) {
            lVar19 = *(long *)(lVar26 + 8);
            lStack_40 = lVar19;
            if ((lVar19 != 0) &&
               ((*(long *)(lVar19 + 0x38) != *(long *)(lVar19 + 0x40) &&
                (*(char *)(*(long *)(lVar19 + 0x30) + 8) != '\0')))) {
              LOCK();
              plVar11[1] = plVar11[1] + 1;
              UNLOCK();
              lStack_50 = lVar19;
              plStack_48 = plVar11;
              if (plStack_d0 < plStack_c8) {
                *plStack_d0 = lVar19;
                plStack_d0[1] = (long)plVar11;
              }
              else {
                lVar25 = (long)plStack_d0 - (long)plVar1;
                piVar9 = (int *)((lVar25 >> 4) + 1);
                if ((int *)0xfffffffffffffff < piVar9) {
                  func_0x0ca7baa0();
                  piVar20 = piVar22;
LAB_0d2f05c7:
                  uVar15 = FUN_04882eb0();
                  uVar15 = func_0x04882e20(uVar15);
                  if (lVar19 != 0) goto LAB_0d2f0667;
                  while (piStack_a8 == (int *)0x0) {
                    func_0x0eee2d70(uVar15);
LAB_0d2f0667:
                    piVar20 = (int *)((long)piVar20 - lVar19);
                    func_0x0412a280(lVar19,piVar20);
                  }
                  piStack_a0 = piStack_a8;
                  func_0x0412a280(piStack_a8,(long)piStack_98 - (long)piStack_a8);
                  func_0x0eee2d70(uVar15);
                  pcVar4 = (code *)swi(3);
                  puVar16 = (undefined8 *)(*pcVar4)();
                  return puVar16;
                }
                uVar18 = (long)plStack_c8 - (long)plVar1;
                piVar20 = (int *)((long)uVar18 >> 3);
                if ((int *)((long)uVar18 >> 3) <= piVar9) {
                  piVar20 = piVar9;
                }
                if (0x7fffffffffffffef < uVar18) {
                  piVar20 = (int *)0xfffffffffffffff;
                }
                if ((int *)0xfffffffffffffff < piVar20) goto LAB_0d2f05c7;
                lVar21 = (long)piVar20 * 0x10;
                lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
                if (lVar12 == 0) {
                  func_0x0eec74c0(lVar21,0);
                }
                plStack_c8 = (long *)(lVar21 + lVar12);
                *(long *)(lVar12 + lVar25) = lVar19;
                *(long **)(lVar12 + 8 + lVar25) = plVar11;
                plStack_d0 = (long *)(lVar12 + lVar25);
                plStack_d8 = (long *)(lVar12 + lVar25 + (lVar25 >> 4) * -0x10);
                func_0x0eee2f00(plStack_d8,plVar1,lVar25);
                if (plVar1 != (long *)0x0) {
                  func_0x0412a280(plVar1,uVar18);
                }
              }
              plStack_d0 = plStack_d0 + 2;
            }
            LOCK();
            plVar1 = plVar11 + 1;
            lVar19 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              func_0x0412c2d0(plVar11);
            }
          }
          plVar1 = plStack_d8;
          plVar11 = plStack_80;
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
      if ((uStack_78 & 1) != 0) goto LAB_0d2f01c8;
    }
    plStack_58 = plStack_d0;
    piStack_110 = piVar10;
    if (plStack_d8 == plStack_d0) {
joined_r0x0d2f04e8:
      if (plStack_d8 != (long *)0x0) {
        for (; plStack_d8 != plStack_d0; plStack_d0 = plStack_d0 + -2) {
          plVar11 = (long *)plStack_d0[-1];
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar23 = plVar11 + 1;
            lVar26 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              func_0x0412c2d0(plVar11);
            }
          }
        }
        func_0x0412a280(plStack_d8,(long)plStack_c8 - (long)plStack_d8);
      }
      *puStack_60 = piStack_a8;
      puStack_60[1] = piStack_a0;
      puStack_60[2] = piStack_98;
      puStack_60[3] = piStack_110;
      puStack_60[4] = piVar10;
      puStack_60[5] = piVar22;
      return puStack_60;
    }
    iVar17 = (int)param_3 * 0x10;
    uVar24 = (uint)(param_3 >> 0x1c) & 0xfffffff0;
    plVar11 = plStack_d8;
    while( true ) {
      puVar16 = *(undefined8 **)(*plVar11 + 0x38);
      puVar13 = *(undefined8 **)(*plVar11 + 0x40);
      puStack_90 = puVar13;
      plStack_88 = plVar11;
      if (puVar16 != puVar13) break;
LAB_0d2f0230:
      plVar11 = plStack_88 + 2;
      if (plVar11 == plStack_58) goto joined_r0x0d2f04e8;
    }
LAB_0d2f0297:
    param_2 = (long *)*puVar16;
    if ((((*(int *)((long)param_2 + 0xc) < iVar17 + -0xc) || (iVar17 + 0x1b < (int)*param_2)) ||
        (*(int *)((long)param_2 + 0x14) < (int)(uVar24 - 0xc))) ||
       ((int)(uVar24 + 0x1b) < (int)param_2[1])) goto LAB_0d2f028e;
    piVar9 = (int *)param_2[7];
    piVar20 = (int *)param_2[8];
    if (piVar9 == piVar20) goto LAB_0d2f045c;
LAB_0d2f02f1:
    piVar2 = piStack_110;
    if (((*piVar9 < iVar17) || (iVar17 + 0x1b < *piVar9)) ||
       ((piVar9[2] < (int)uVar24 || ((int)(uVar24 + 0x1b) < piVar9[2])))) {
LAB_0d2f02e4:
      piStack_110 = piVar2;
      piVar9 = piVar9 + 5;
      if (piVar9 == piVar20) break;
      goto LAB_0d2f02f1;
    }
    if (piVar10 < piVar22) {
      piVar10[4] = piVar9[4];
      iVar5 = piVar9[1];
      iVar6 = piVar9[2];
      iVar7 = piVar9[3];
      *piVar10 = *piVar9;
      piVar10[1] = iVar5;
      piVar10[2] = iVar6;
      piVar10[3] = iVar7;
      piVar10 = piVar10 + 5;
      goto LAB_0d2f02e4;
    }
    lVar26 = (long)piVar10 - (long)piStack_110;
    param_3 = (lVar26 >> 2) * -0x3333333333333333 + 1;
    if (param_3 < 0xccccccccccccccd) {
      param_2 = (long *)((long)piVar22 - (long)piStack_110);
      uVar18 = ((long)param_2 >> 2) * -0x6666666666666666;
      if (param_3 < uVar18) {
        param_3 = uVar18;
      }
      if (0x666666666666665 < (ulong)(((long)param_2 >> 2) * -0x3333333333333333)) {
        param_3 = 0xccccccccccccccc;
      }
      if (param_3 < 0xccccccccccccccd) {
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_3 * 0x14);
        if (lVar14 == 0) {
          func_0x0eec74c0(param_3 * 0x14,0);
        }
        piVar22 = (int *)(lVar14 + param_3 * 0x14);
        *(int *)(lVar14 + 0x10 + lVar26) = piVar9[4];
        iVar5 = piVar9[1];
        iVar6 = piVar9[2];
        iVar7 = piVar9[3];
        piVar10 = (int *)(lVar14 + lVar26);
        *piVar10 = *piVar9;
        piVar10[1] = iVar5;
        piVar10[2] = iVar6;
        piVar10[3] = iVar7;
        lVar19 = SUB168(SEXT816(lVar26) * SEXT816(-0x6666666666666667),8);
        piVar10 = (int *)(lVar14 + lVar26 + 0x14);
        piVar2 = (int *)(lVar14 + lVar26 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x14);
        func_0x0eee2f00(piVar2,piStack_110,lVar26);
        if (piStack_110 != (int *)0x0) {
          func_0x0412a280(piStack_110,param_2);
        }
        goto LAB_0d2f02e4;
      }
      FUN_04882eb0();
    }
    func_0x0629e090();
LAB_0d2f05a0:
    func_0x0eec74c0(0x140,0);
  } while( true );
  param_2 = (long *)*puVar16;
LAB_0d2f045c:
  uVar3 = *(undefined1 *)(*(long *)(*plStack_88 + 0x30) + 8);
  cVar8 = (**(code **)(*(long *)param_2[3] + 0x28))();
  puVar13 = puStack_90;
  if (cVar8 == '\0') {
    uStack_78 = *(uint *)(param_2 + 1);
    plStack_80 = (long *)*param_2;
    uStack_6c = *(undefined4 *)((long)param_2 + 0x14);
    uStack_74 = *(undefined8 *)((long)param_2 + 0xc);
    uStack_64 = (undefined4)param_2[4];
    uStack_68 = uVar3;
    func_0x0d2e04c0(&piStack_a8,&plStack_80);
    puVar13 = puStack_90;
  }
LAB_0d2f028e:
  puVar16 = puVar16 + 1;
  if (puVar16 == puVar13) goto LAB_0d2f0230;
  goto LAB_0d2f0297;
}


