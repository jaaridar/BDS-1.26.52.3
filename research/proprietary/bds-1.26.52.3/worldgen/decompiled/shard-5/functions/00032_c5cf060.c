/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cf060 (ELF vaddr 0xc5cf060)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c6cf060, 0c6cf090] [0c6cf0a0, 0c6cf0fd] [0c6cf100, 0c6cf1e2]]
 * Ghidra: FUN_0c6cf060
 */


long FUN_0c6cf060(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0x170);
  plVar5 = *(long **)(param_1 + 0x178);
  if (plVar9 != plVar5) {
    lVar2 = *param_2;
    do {
      if (*plVar9 == lVar2) {
        if (((long *)plVar9[4] == param_2) && (plVar9 == (long *)param_2[4])) {
          return param_1;
        }
        bVar1 = *(byte *)(plVar9 + 1);
        if ((bVar1 & 1) == 0) {
          uVar7 = (ulong)(bVar1 >> 1);
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0c6cf0f3;
LAB_0c6cf10e:
          if (uVar7 != param_2[2]) goto LAB_0c6cf0ad;
        }
        else {
          uVar7 = plVar9[2];
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0c6cf10e;
LAB_0c6cf0f3:
          if (uVar7 != uVar6 >> 1) goto LAB_0c6cf0ad;
        }
        if ((bVar1 & 1) == 0) {
          lVar3 = (long)plVar9 + 9;
        }
        else {
          lVar3 = plVar9[3];
        }
        lVar8 = (long)param_2 + 9;
        if ((uVar6 & 1) != 0) {
          lVar8 = param_2[3];
        }
        iVar4 = func_0x0eee3000(lVar3,lVar8);
        if (iVar4 == 0) {
          plVar9[4] = (long)param_2;
          param_2[4] = (long)plVar9;
          return param_1;
        }
      }
LAB_0c6cf0ad:
      plVar9[4] = 0;
      plVar9 = plVar9 + 5;
    } while (plVar9 != plVar5);
  }
  if (plVar5 < *(long **)(param_1 + 0x180)) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    if (plVar5 != param_2) {
      if ((*(byte *)(param_2 + 1) & 1) == 0) {
        plVar5[3] = param_2[3];
        lVar2 = param_2[2];
        plVar5[1] = param_2[1];
        plVar5[2] = lVar2;
      }
      else {
        func_0x04885070(plVar5 + 1,param_2[3],param_2[2]);
      }
    }
    *plVar5 = *param_2;
    plVar5 = plVar5 + 5;
    *(long **)(param_1 + 0x178) = plVar5;
  }
  else {
    plVar5 = (long *)func_0x04fa4bf0(param_1 + 0x170,param_2);
  }
  *(long **)(param_1 + 0x178) = plVar5;
  return param_1;
}


