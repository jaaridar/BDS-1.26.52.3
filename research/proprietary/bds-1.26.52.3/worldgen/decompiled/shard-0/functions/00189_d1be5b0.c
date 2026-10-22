/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1be5b0
 * Label: br::worldgen::processors::ProtectedBlock::vslot4
 * Body:  [[0d1be5b0, 0d1be65f]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot4
 */


bool wg_br__worldgen__processors__ProtectedBlock__vslot4(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  float extraout_XMM0_Da;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  if (*(long *)(param_3 + 0x78) == 0) {
    iVar2 = 0;
    plVar5 = *(long **)(param_3 + 0x28);
  }
  else {
    iVar2 = func_0x0c021810(0xe);
    plVar5 = *(long **)(param_3 + 0x28);
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = *(long **)(param_3 + 8);
    uVar4 = (**(code **)(*plVar5 + 0x68))();
    plVar5 = (long *)(**(code **)(*plVar1 + 0x1f8))(plVar1,uVar4,0);
    if ((plVar5 != (long *)0x0) && ((*(byte *)(plVar5 + 0x40) & 2) != 0)) {
      (**(code **)(*plVar5 + 0x500))(&puStack_48,plVar5);
      iVar6 = 0;
      for (puVar7 = puStack_48; puVar7 != puStack_40; puVar7 = puVar7 + 1) {
        iVar3 = func_0x0c021810(0xe,*puVar7);
        if (iVar6 < iVar3) {
          iVar6 = iVar3;
        }
      }
      if (puStack_48 != (undefined8 *)0x0) {
        func_0x0412a280(puStack_48,lStack_38 - (long)puStack_48);
      }
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2);
  return extraout_XMM0_Da < (float)iVar2 * *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
}


