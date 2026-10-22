/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e48d0 (ELF vaddr 0xc7e48d0)
 * Label: SharedTypes::v1_26_30::SurfaceBuilderBiomeJsonComponent::vslot0
 * Body:  [[0c8e48d0, 0c8e4914]]
 * Ghidra: wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f3e38f8;
  if ((ulong)*(uint *)(param_1 + 0x3c) != 0xffffffff) {
    (**(code **)(&UNK_0f3e34e0 + (ulong)*(uint *)(param_1 + 0x3c) * 8))(&uStack_9,param_1 + 2);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}


