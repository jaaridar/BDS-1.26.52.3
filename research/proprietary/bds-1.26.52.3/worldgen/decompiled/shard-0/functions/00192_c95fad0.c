/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc95fad0
 * Label: Dimension::vslot0
 * Body:  [[0c95daa5, 0c95dac3] [0c95fac0, 0c95facc] [0c95fad0, 0c95fb0f] [0c95fb11, 0c95fb24]]
 * Ghidra: wg_Dimension__vslot0
 */


undefined1  [16] wg_Dimension__vslot0(long *param_1)

{
  char *in_RAX;
  ulong unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  undefined1 auVar1 [16];
  int in_stack_000000a0;
  long in_stack_000001e0;
  long in_stack_000001f0;
  undefined8 in_stack_000001f8;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  while( true ) {
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))();
    }
    if (unaff_R15 + -0x20 == unaff_R14) break;
    param_1 = *(long **)(unaff_R15 + -0x28);
    *(undefined8 *)(unaff_R15 + -0x28) = 0;
    unaff_R15 = unaff_R15 + -0x20;
  }
  func_0x0412a280(in_stack_000001e0,in_stack_000001f0 - in_stack_000001e0);
  if (0 < in_stack_000000a0) {
    in_stack_000001f8 = 0;
  }
  auVar1._8_8_ = unaff_RBX & 0xffffffff;
  auVar1._0_8_ = in_stack_000001f8;
  return auVar1;
}


