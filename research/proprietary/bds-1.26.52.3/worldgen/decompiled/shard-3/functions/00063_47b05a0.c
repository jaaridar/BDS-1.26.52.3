/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b05a0 (ELF vaddr 0x47b05a0)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[048b05a0, 048b06b4]]
 * Ghidra: FUN_048b05a0
 */


void FUN_048b05a0(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined8 uVar19;
  
  *(undefined4 *)(param_1 + 0x1c) = 1;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x18) = iVar2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  piVar4 = *(int **)(lVar3 + 0x50);
  for (piVar18 = *(int **)(lVar3 + 0x48); piVar18 != piVar4; piVar18 = piVar18 + 0x1a) {
    if (*piVar18 == iVar2) {
      if ((*(long *)(piVar18 + 0x10) != *(long *)(param_2 + 0x10)) ||
         (*(long *)(piVar18 + 0x12) != *(long *)(param_2 + 0x12))) {
        uVar19 = *(undefined8 *)(param_2 + 0x12);
        *(undefined8 *)(piVar18 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(piVar18 + 0x12) = uVar19;
        uVar19 = *(undefined8 *)param_2;
        uVar12 = *(undefined8 *)(param_2 + 2);
        uVar13 = *(undefined8 *)(param_2 + 4);
        uVar14 = *(undefined8 *)(param_2 + 6);
        iVar2 = param_2[8];
        iVar6 = param_2[9];
        iVar7 = param_2[10];
        iVar8 = param_2[0xb];
        iVar9 = param_2[0xd];
        iVar10 = param_2[0xe];
        iVar11 = param_2[0xf];
        piVar18[0xc] = param_2[0xc];
        piVar18[0xd] = iVar9;
        piVar18[0xe] = iVar10;
        piVar18[0xf] = iVar11;
        piVar18[8] = iVar2;
        piVar18[9] = iVar6;
        piVar18[10] = iVar7;
        piVar18[0xb] = iVar8;
        *(undefined8 *)(piVar18 + 4) = uVar13;
        *(undefined8 *)(piVar18 + 6) = uVar14;
        *(undefined8 *)piVar18 = uVar19;
        *(undefined8 *)(piVar18 + 2) = uVar12;
        piVar18[0x14] = param_2[0x14];
        iVar2 = param_2[0x16];
        iVar6 = param_2[0x17];
        iVar7 = param_2[0x18];
        iVar8 = param_2[0x19];
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        plVar5 = *(long **)(piVar18 + 0x18);
        piVar18[0x16] = iVar2;
        piVar18[0x17] = iVar6;
        piVar18[0x18] = iVar7;
        piVar18[0x19] = iVar8;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            if (plVar5[2] != 0) {
              LOCK();
              plVar1 = plVar5 + 2;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 != 0) {
                return;
              }
            }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x20))();
            return;
          }
        }
      }
      return;
    }
  }
  if (piVar4 < *(int **)(lVar3 + 0x58)) {
    uVar19 = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(piVar4 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(piVar4 + 0x12) = uVar19;
    uVar19 = *(undefined8 *)param_2;
    uVar12 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)(param_2 + 4);
    uVar14 = *(undefined8 *)(param_2 + 6);
    uVar15 = *(undefined8 *)(param_2 + 8);
    uVar16 = *(undefined8 *)(param_2 + 10);
    uVar17 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(piVar4 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(piVar4 + 0xe) = uVar17;
    *(undefined8 *)(piVar4 + 8) = uVar15;
    *(undefined8 *)(piVar4 + 10) = uVar16;
    *(undefined8 *)(piVar4 + 4) = uVar13;
    *(undefined8 *)(piVar4 + 6) = uVar14;
    *(undefined8 *)piVar4 = uVar19;
    *(undefined8 *)(piVar4 + 2) = uVar12;
    piVar4[0x14] = param_2[0x14];
    uVar19 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(piVar4 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(piVar4 + 0x18) = uVar19;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    *(int **)(lVar3 + 0x50) = piVar4 + 0x1a;
    return;
  }
  uVar19 = func_0x048b06d0(lVar3 + 0x48);
  *(undefined8 *)(lVar3 + 0x50) = uVar19;
  return;
}


