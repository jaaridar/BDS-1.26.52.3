/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2c80f0 (ELF vaddr 0xd1c80f0)
 * Label: br::worldgen::StructureHeightProvider::vslot0
 * Body:  [[0d2c80f0, 0d2c812e]]
 * Ghidra: wg_br__worldgen__StructureHeightProvider__vslot0
 */


void wg_br__worldgen__StructureHeightProvider__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f520;
  if ((ulong)*(uint *)(param_1 + 6) != 0xffffffff) {
    (**(code **)(&UNK_0f45ed90 + (ulong)*(uint *)(param_1 + 6) * 8))(&uStack_9,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return;
}


