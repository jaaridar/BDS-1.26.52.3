/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd372c0
 * Label: string:Tint method logic varies, but often refers to the "rain" and
 * Body:  [[0cd372c0, 0cd373a9]]
 * Ghidra: FUN_0cd372c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cd372c0(void)

{
  ulong unaff_RBX;
  ulong unaff_R13;
  uint in_stack_00000040;
  undefined8 in_stack_00000050;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  long in_stack_00000098;
  long in_stack_000000a8;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  
  func_0x0412a280(in_stack_00000050,in_stack_00000040 & 0xfffffffe);
  if ((in_stack_000000d8 & unaff_RBX) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000000d8 & unaff_R13) - 8);
  }
  if ((in_stack_000000d0 & unaff_RBX) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(in_stack_000000d0 & unaff_R13) - 8);
  }
  if ((in_stack_000000b0 & 1) != 0) {
    func_0x0412a280(in_stack_000000c0,in_stack_000000b0 & 0xfffffffffffffffe);
  }
  if (in_stack_00000098 != 0) {
    func_0x0412a280(in_stack_00000098,in_stack_000000a8 << 3);
  }
  if ((in_stack_00000070 & 1) != 0) {
    func_0x0412a280(in_stack_00000080,in_stack_00000070 & 0xfffffffffffffffe);
  }
  return 0;
}


