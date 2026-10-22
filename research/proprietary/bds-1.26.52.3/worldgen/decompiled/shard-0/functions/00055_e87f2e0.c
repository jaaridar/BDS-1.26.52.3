/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe87f2e0
 * Label: callee-of:0xe875070
 * Body:  [[0e87f272, 0e87f29e] [0e87f2d3, 0e87f2ed]]
 * Ghidra: FUN_0e87f2e0
 */


void FUN_0e87f2e0(void)

{
  long *unaff_RBX;
  undefined8 *unaff_R14;
  long unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  func_0x0eec74c0(0x18,0);
  unaff_R14[2] = in_stack_00000010;
  *unaff_R14 = unaff_retaddr;
  unaff_R14[1] = in_stack_00000008;
  *unaff_RBX = (long)unaff_R14;
  unaff_RBX[5] = unaff_R15;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = (long)&UNK_048b1e80;
  return;
}


