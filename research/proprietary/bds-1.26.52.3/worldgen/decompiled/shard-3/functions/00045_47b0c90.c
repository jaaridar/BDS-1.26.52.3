/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b0c90
 * Label: callee-of:0x7e0b3b0
 * Body:  [[047b0c90, 047b0cfa] [047b0e34, 047b0e58]]
 * Ghidra: FUN_047b0c90
 */


uint FUN_047b0c90(undefined4 param_1)

{
  int iVar1;
  undefined8 in_stack_00000008;
  code *in_stack_00000010;
  undefined8 in_stack_00000020;
  code *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  iVar1 = (*in_stack_00000010)(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x04775950();
    if (iVar1 != 0) {
      iVar1 = (*in_stack_00000028)();
      if (iVar1 != 0) {
        iVar1 = func_0x04771420(in_stack_00000008);
        in_stack_00000020._4_4_ = (uint)(iVar1 == 0);
      }
    }
  }
  func_0x047729b0();
  func_0x047726d0(in_stack_00000030);
  return in_stack_00000020._4_4_;
}


