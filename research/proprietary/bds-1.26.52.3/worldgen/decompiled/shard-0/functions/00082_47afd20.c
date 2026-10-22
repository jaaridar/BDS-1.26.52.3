/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48afd20 (ELF vaddr 0x47afd20)
 * Label: callee-of:0x871a310
 * Body:  [[048afd20, 048afe3c]]
 * Ghidra: FUN_048afd20
 */


void FUN_048afd20(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 2) {
    piVar8 = *(int **)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x60);
    iVar2 = *piVar8;
    while (iVar2 != *(int *)(param_1 + 0x18)) {
      piVar8 = piVar8 + 0x16;
      iVar2 = *piVar8;
    }
    lVar3 = *(long *)(piVar8 + 0xc);
    while (lVar3 != *(long *)(param_1 + 8)) {
      piVar8 = *(int **)(piVar8 + 0xe);
      lVar3 = *(long *)(piVar8 + 0xc);
    }
    piVar8[0x10] = *param_2;
    iVar2 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    plVar4 = *(long **)(piVar8 + 0x14);
    piVar8[0x12] = iVar2;
    piVar8[0x13] = iVar5;
    piVar8[0x14] = iVar6;
    piVar8[0x15] = iVar7;
  }
  else if (iVar2 == 1) {
    piVar8 = *(int **)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x48);
    iVar2 = *piVar8;
    while (iVar2 != *(int *)(param_1 + 0x18)) {
      piVar8 = piVar8 + 0x1a;
      iVar2 = *piVar8;
    }
    piVar8[0x14] = *param_2;
    iVar2 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    plVar4 = *(long **)(piVar8 + 0x18);
    piVar8[0x16] = iVar2;
    piVar8[0x17] = iVar5;
    piVar8[0x18] = iVar6;
    piVar8[0x19] = iVar7;
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *(int *)(lVar3 + 0x60) = *param_2;
    iVar2 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    plVar4 = *(long **)(lVar3 + 0x70);
    *(int *)(lVar3 + 0x68) = iVar2;
    *(int *)(lVar3 + 0x6c) = iVar5;
    *(int *)(lVar3 + 0x70) = iVar6;
    *(int *)(lVar3 + 0x74) = iVar7;
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (plVar4[2] != 0) {
        LOCK();
        plVar1 = plVar4 + 2;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))();
      return;
    }
  }
  return;
}


