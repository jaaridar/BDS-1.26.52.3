/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1be5f0
 * Label: br::worldgen::processors::ProtectedBlock::vslot5
 * Body:  [[0d1be5f0, 0d1be6bd]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot5
 */


bool wg_br__worldgen__processors__ProtectedBlock__vslot5(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_RBX;
  int unaff_EBP;
  int iVar4;
  long *unaff_R14;
  long unaff_R15;
  undefined8 *puVar5;
  float extraout_XMM0_Da;
  undefined8 *unaff_retaddr;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  
  if (param_1 != (long *)0x0) {
    plVar3 = *(long **)(unaff_R15 + 8);
    uVar2 = (**(code **)(*param_1 + 0x68))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1f8))(plVar3,uVar2,0);
    if ((plVar3 != (long *)0x0) && ((*(byte *)(plVar3 + 0x40) & 2) != 0)) {
      (**(code **)(*plVar3 + 0x500))(&stack0x00000000,plVar3);
      iVar4 = 0;
      for (puVar5 = unaff_retaddr; puVar5 != in_stack_00000008; puVar5 = puVar5 + 1) {
        iVar1 = func_0x0c021810(0xe,*puVar5);
        if (iVar4 < iVar1) {
          iVar4 = iVar1;
        }
      }
      if (unaff_retaddr != (undefined8 *)0x0) {
        func_0x0412a280(unaff_retaddr,in_stack_00000010 - (long)unaff_retaddr);
      }
      if (unaff_EBP < iVar4) {
        unaff_EBP = iVar4;
      }
    }
  }
  (**(code **)(*unaff_R14 + 0x30))();
  return extraout_XMM0_Da <
         (float)unaff_EBP * *(float *)(unaff_RBX + 0x10) + *(float *)(unaff_RBX + 0xc);
}


