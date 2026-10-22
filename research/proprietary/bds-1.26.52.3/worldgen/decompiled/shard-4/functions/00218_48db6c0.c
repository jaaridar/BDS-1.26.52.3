/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49db6c0 (ELF vaddr 0x48db6c0)
 * Label: callee-of:0x485d4d0
 * Body:  [[049db6c0, 049db74a] [049db750, 049db84d]]
 * Ghidra: FUN_049db6c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_049db6c0(long *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  bool bVar10;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 == (long *)0x0) {
    plVar4 = param_1 + 1;
    plVar6 = plVar4;
  }
  else {
    bVar10 = (*param_2 & 1) != 0;
    pbVar9 = param_2 + 1;
    if (bVar10) {
      pbVar9 = *(byte **)(param_2 + 0x10);
    }
    uVar8 = (ulong)(*param_2 >> 1);
    if (bVar10) {
      uVar8 = *(ulong *)(param_2 + 8);
    }
    do {
      while( true ) {
        plVar4 = plVar2;
        bVar10 = (*(byte *)(plVar4 + 4) & 1) != 0;
        lVar5 = (long)plVar4 + 0x21;
        if (bVar10) {
          lVar5 = plVar4[6];
        }
        uVar3 = (ulong)(*(byte *)(plVar4 + 4) >> 1);
        if (bVar10) {
          uVar3 = plVar4[5];
        }
        uVar7 = uVar8;
        if (uVar3 < uVar8) {
          uVar7 = uVar3;
        }
        iVar1 = func_0x0eee2ff0(pbVar9,lVar5,uVar7);
        if (iVar1 == 0) break;
        if (-1 < iVar1) goto LAB_049db755;
LAB_049db700:
        plVar2 = (long *)*plVar4;
        plVar6 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_049db78d;
      }
      if (uVar8 < uVar3) goto LAB_049db700;
LAB_049db755:
      iVar1 = func_0x0eee2ff0(lVar5,pbVar9,uVar7);
      if (iVar1 == 0) {
        if (uVar8 <= uVar3) {
          return plVar4;
        }
      }
      else if (-1 < iVar1) {
        return plVar4;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar6 = plVar4 + 1;
  }
LAB_049db78d:
  plVar2 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (plVar2 == (long *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  if ((*param_3 & 1) == 0) {
    plVar2[6] = *(long *)(param_3 + 0x10);
    lVar5 = *(long *)(param_3 + 8);
    plVar2[4] = *(long *)param_3;
    plVar2[5] = lVar5;
  }
  else {
    func_0x0412e5e0(plVar2 + 4,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  plVar2[7] = 0;
  plVar2[8] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar4;
  *plVar6 = (long)plVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x048bed00(param_1[1],plVar2);
  param_1[2] = param_1[2] + 1;
  return plVar2;
}


