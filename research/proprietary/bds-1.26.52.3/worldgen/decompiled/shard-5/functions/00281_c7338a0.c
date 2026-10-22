/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8338a0 (ELF vaddr 0xc7338a0)
 * Label: callee-of:0xd1be540
 * Body:  [[0c8338a0, 0c8339f4] [0c833a00, 0c833a6a]]
 * Ghidra: FUN_0c8338a0
 */


ulong FUN_0c8338a0(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_RBP;
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(param_1 + 0xd8);
  plVar2 = *(long **)(param_1 + 0xe0);
  if (plVar9 != plVar2) {
    lVar3 = *param_2;
    do {
      if (*plVar9 == lVar3) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (((long *)plVar9[4] == param_2) && (plVar9 == (long *)param_2[4])) goto LAB_0c833a46;
        bVar1 = *(byte *)(plVar9 + 1);
        if ((bVar1 & 1) == 0) {
          uVar7 = (ulong)(bVar1 >> 1);
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0c83393d;
LAB_0c833925:
          if (uVar7 != uVar6 >> 1) goto LAB_0c8338e6;
        }
        else {
          uVar7 = plVar9[2];
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0c833925;
LAB_0c83393d:
          if (uVar7 != param_2[2]) goto LAB_0c8338e6;
        }
        if ((bVar1 & 1) == 0) {
          lVar4 = (long)plVar9 + 9;
        }
        else {
          lVar4 = plVar9[3];
        }
        lVar8 = (long)param_2 + 9;
        if ((uVar6 & 1) != 0) {
          lVar8 = param_2[3];
        }
        iVar5 = func_0x0eee3000(lVar4,lVar8);
        if (iVar5 == 0) {
          plVar9[4] = (long)param_2;
          param_2[4] = (long)plVar9;
          goto LAB_0c833a46;
        }
      }
LAB_0c8338e6:
      plVar9[4] = 0;
      plVar9 = plVar9 + 5;
    } while (plVar9 != plVar2);
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x68) + 0x170);
  plVar2 = *(long **)(*(long *)(param_1 + 0x68) + 0x178);
  if (plVar9 != plVar2) {
    lVar3 = *param_2;
    do {
      if (*plVar9 == lVar3) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (((long *)plVar9[4] == param_2) && (plVar9 == (long *)param_2[4])) goto LAB_0c833a46;
        bVar1 = *(byte *)(plVar9 + 1);
        if ((bVar1 & 1) == 0) {
          uVar7 = (ulong)(bVar1 >> 1);
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) != 0) goto LAB_0c833a0d;
LAB_0c8339ea:
          if (uVar7 != uVar6 >> 1) goto LAB_0c8339ab;
        }
        else {
          uVar7 = plVar9[2];
          uVar6 = (ulong)*(byte *)(param_2 + 1);
          if ((*(byte *)(param_2 + 1) & 1) == 0) goto LAB_0c8339ea;
LAB_0c833a0d:
          if (uVar7 != param_2[2]) goto LAB_0c8339ab;
        }
        if ((bVar1 & 1) == 0) {
          lVar4 = (long)plVar9 + 9;
        }
        else {
          lVar4 = plVar9[3];
        }
        lVar8 = (long)param_2 + 9;
        if ((uVar6 & 1) != 0) {
          lVar8 = param_2[3];
        }
        iVar5 = func_0x0eee3000(lVar4,lVar8);
        if (iVar5 == 0) {
          plVar9[4] = (long)param_2;
          param_2[4] = (long)plVar9;
          goto LAB_0c833a46;
        }
      }
LAB_0c8339ab:
      plVar9[4] = 0;
      plVar9 = plVar9 + 5;
    } while (plVar9 != plVar2);
  }
  unaff_RBP = 0;
LAB_0c833a46:
  return unaff_RBP & 0xffffffff;
}


