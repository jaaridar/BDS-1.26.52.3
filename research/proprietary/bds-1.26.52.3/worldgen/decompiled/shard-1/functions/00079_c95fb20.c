/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc95fb20
 * Label: Dimension::vslot16
 * Body:  [[0c95fb20, 0c95fb24]]
 * Ghidra: wg_Dimension__vslot16
 */


undefined1  [16] wg_Dimension__vslot16(void)

{
  ulong in_RCX;
  ulong unaff_RBX;
  undefined1 auVar1 [16];
  ulong in_stack_000001f8;
  
  auVar1._0_8_ = in_stack_000001f8 | in_RCX;
  auVar1._8_8_ = unaff_RBX & 0xffffffff;
  return auVar1;
}


