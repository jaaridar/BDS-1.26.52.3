/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8e7ff0 (ELF vaddr 0xc7e7ff0)
 * Label: SharedTypes::Beta::SurfaceBuilderBiomeJsonComponent::vslot0
 * Body:  [[0c8e7ff0, 0c8e8034]]
 * Ghidra: wg_SharedTypes__Beta__SurfaceBuilderBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__Beta__SurfaceBuilderBiomeJsonComponent__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f3e3798;
  if ((ulong)*(uint *)(param_1 + 0x3c) != 0xffffffff) {
    (**(code **)(&UNK_0f3e34e0 + (ulong)*(uint *)(param_1 + 0x3c) * 8))(&uStack_9,param_1 + 2);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}


