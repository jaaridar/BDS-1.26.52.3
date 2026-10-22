/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc95fae0
 * Label: Dimension::vslot1
 * Body:  [[0c95fae0, 0c95fb1f]]
 * Ghidra: wg_Dimension__vslot1
 */


undefined1  [16] wg_Dimension__vslot1(void)

{
  long *plVar1;
  ulong unaff_RBX;
  long unaff_R14;
  long lVar2;
  long unaff_R15;
  undefined1 auVar3 [16];
  int in_stack_000000a0;
  long in_stack_000001e0;
  long in_stack_000001f0;
  undefined8 in_stack_000001f8;
  
  while (lVar2 = unaff_R15 + -0x20, lVar2 != unaff_R14) {
    plVar1 = *(long **)(unaff_R15 + -0x28);
    *(undefined8 *)(unaff_R15 + -0x28) = 0;
    unaff_R15 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  func_0x0412a280(in_stack_000001e0,in_stack_000001f0 - in_stack_000001e0);
  if (0 < in_stack_000000a0) {
    in_stack_000001f8 = 0;
  }
  auVar3._8_8_ = unaff_RBX & 0xffffffff;
  auVar3._0_8_ = in_stack_000001f8;
  return auVar3;
}


