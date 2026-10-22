/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc964ea0
 * Label: Dimension::vslot32
 * Body:  [[0c964ea0, 0c964ecd]]
 * Ghidra: wg_Dimension__vslot32
 */


undefined2 wg_Dimension__vslot32(undefined8 param_1,ulong param_2)

{
  undefined2 *puVar1;
  long unaff_RBX;
  
  func_0x0412a280(param_1,param_2 & 0xfffffffffffffffe);
  puVar1 = (undefined2 *)&UNK_01d3d754;
  if (unaff_RBX != 0) {
    puVar1 = (undefined2 *)(unaff_RBX + 0x28);
  }
  return *puVar1;
}


