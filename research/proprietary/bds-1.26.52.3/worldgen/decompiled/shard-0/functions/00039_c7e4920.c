/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e4920 (ELF vaddr 0xc7e4920)
 * Label: SharedTypes::v1_26_30::SurfaceBuilderBiomeJsonComponent::vslot1
 * Body:  [[0c8e4920, 0c8e4967]]
 * Ghidra: wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot1
 */


void wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f3e38f8;
  if ((ulong)*(uint *)(param_1 + 0x3c) != 0xffffffff) {
    (**(code **)(&UNK_0f3e34e0 + (ulong)*(uint *)(param_1 + 0x3c) * 8))(&uStack_9,param_1 + 2);
  }
  func_0x0412a280(param_1,0x1e8);
  return;
}


