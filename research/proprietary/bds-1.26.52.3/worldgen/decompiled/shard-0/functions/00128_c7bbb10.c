/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7bbb10
 * Label: string:BiomeData
 * Body:  [[0c7bbb10, 0c7bbb1e] [0c7bc7a3, 0c7bc7c9]]
 * Ghidra: FUN_0c7bbb10
 */


void FUN_0c7bbb10(undefined8 param_1,undefined8 param_2)

{
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  
  func_0x0d6bbef0(param_1,param_2,1);
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
  }
  return;
}


