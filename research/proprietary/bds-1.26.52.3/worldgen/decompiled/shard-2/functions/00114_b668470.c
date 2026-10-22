/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb668470
 * Label: string:CustomBiomeSourceConfig
 * Body:  [[0b668470, 0b6684ba]]
 * Ghidra: FUN_0b668470
 */


undefined8 FUN_0b668470(undefined8 param_1)

{
  long unaff_RBX;
  undefined8 unaff_R13;
  undefined8 unaff_R15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  func_0x0eee2f00(param_1,in_stack_00000020);
  *(undefined8 *)(unaff_RBX + 0x10) = unaff_R13;
  *(undefined8 *)(unaff_RBX + 0x18) = unaff_R15;
  *(undefined8 *)(unaff_RBX + 0x20) = in_stack_00000018;
  if (in_stack_00000020 != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010);
  }
  *(undefined8 *)(unaff_RBX + 0x18) = unaff_R15;
  return 3;
}


