/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xceb5cc0
 * Label: string:minecraft:jigsaw
 * Body:  [[0ceb5cc0, 0ceb5d1b]]
 * Ghidra: FUN_0ceb5cc0
 */


void FUN_0ceb5cc0(void)

{
  code *in_RCX;
  code *in_stack_00000018;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if (in_stack_00000030 == 0) {
    (*in_RCX)(0);
    in_stack_00000030 = func_0x048aead0(in_stack_00000028);
  }
  (**(code **)(*(long *)**(undefined8 **)(in_stack_00000030 + 0x68) + 0x38))();
  if (in_stack_00000018 != (code *)0x0) {
    (*in_stack_00000018)(&stack0x00000000);
  }
  return;
}


