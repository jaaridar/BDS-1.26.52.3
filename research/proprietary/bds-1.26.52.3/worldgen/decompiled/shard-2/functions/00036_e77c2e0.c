/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe87c2e0 (ELF vaddr 0xe77c2e0)
 * Label: SharedTypes::v1_21_100::SurfaceBuilderBiomeJsonComponent::vslot1
 * Body:  [[0e87c2e0, 0e87c327]]
 * Ghidra: wg_SharedTypes__v1_21_100__SurfaceBuilderBiomeJsonComponent__vslot1
 */


void wg_SharedTypes__v1_21_100__SurfaceBuilderBiomeJsonComponent__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f4cee40;
  if ((ulong)*(uint *)(param_1 + 0x3b) != 0xffffffff) {
    (**(code **)(&UNK_0f4ce2e0 + (ulong)*(uint *)(param_1 + 0x3b) * 8))(&uStack_9,param_1 + 1);
  }
  thunk_FUN_0ee326a0(param_1,0x1e0);
  return;
}


