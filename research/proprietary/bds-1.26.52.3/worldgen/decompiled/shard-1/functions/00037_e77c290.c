/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe87c290 (ELF vaddr 0xe77c290)
 * Label: SharedTypes::v1_21_100::SurfaceBuilderBiomeJsonComponent::vslot0
 * Body:  [[0e87c290, 0e87c2d4]]
 * Ghidra: wg_SharedTypes__v1_21_100__SurfaceBuilderBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__v1_21_100__SurfaceBuilderBiomeJsonComponent__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f4cee40;
  if ((ulong)*(uint *)(param_1 + 0x3b) != 0xffffffff) {
    (**(code **)(&UNK_0f4ce2e0 + (ulong)*(uint *)(param_1 + 0x3b) * 8))(&uStack_9,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  return;
}


