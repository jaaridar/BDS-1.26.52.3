/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b0af0
 * Label: callee-of:0x871a310
 * Body:  [[047b0972, 047b0995] [047b0af0, 047b0b2c]]
 * Ghidra: FUN_047b0af0
 */


uint FUN_047b0af0(void)

{
  int iVar1;
  long in_RAX;
  long unaff_R12;
  uint unaff_R14D;
  code *in_stack_00000020;
  undefined8 in_stack_00000038;
  
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + -1;
  iVar1 = (*in_stack_00000020)();
  if (iVar1 != 0) {
    iVar1 = func_0x04775c10(*(undefined8 *)(unaff_R12 + 0x18));
    unaff_R14D = (uint)(iVar1 != 0);
  }
  func_0x047729b0();
  func_0x047726d0(in_stack_00000038);
  return unaff_R14D;
}


