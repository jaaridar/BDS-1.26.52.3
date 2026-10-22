/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9e80
 * Label: JigsawStructurePostprocessAction::vslot1
 * Body:  [[0d1d9e80, 0d1d9ea5]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot1
 */


void wg_JigsawStructurePostprocessAction__vslot1(undefined8 param_1,int param_2)

{
  code *pcVar1;
  long unaff_RBP;
  ulong unaff_retaddr;
  undefined8 in_stack_00000010;
  
  *(int *)(unaff_RBP + 8) = *(int *)(unaff_RBP + 8) + param_2;
  func_0x0eee2d70();
  func_0x0412a280(in_stack_00000010,unaff_retaddr & 0xfffffffffffffffe);
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


