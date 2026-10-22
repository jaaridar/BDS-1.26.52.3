/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7edc70
 * Label: string:minecraft:biome
 * Body:  [[0c7edb98, 0c7edbb4] [0c7edc70, 0c7edc77] [0c7ee08b, 0c7ee0b5]]
 * Ghidra: FUN_0c7edc70
 */


void FUN_0c7edc70(void)

{
  long in_RAX;
  long in_RCX;
  long unaff_R14;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  
  (**(code **)(in_RCX + in_RAX * 8))();
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 2;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,in_stack_00000030 & 0xfffffffffffffffe);
  }
  return;
}


