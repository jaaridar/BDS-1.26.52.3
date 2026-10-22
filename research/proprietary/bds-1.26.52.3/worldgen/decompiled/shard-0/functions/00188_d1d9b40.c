/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9b40 (ELF vaddr 0xd1d9b40)
 * Label: br::worldgen::StructureHeightProvider::vslot1
 * Body:  [[0d2d9b40, 0d2d9b84]]
 * Ghidra: wg_br__worldgen__StructureHeightProvider__vslot1
 */


void wg_br__worldgen__StructureHeightProvider__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f520;
  if ((ulong)*(uint *)(param_1 + 6) != 0xffffffff) {
    (**(code **)(&UNK_0f45ed90 + (ulong)*(uint *)(param_1 + 6) * 8))(&uStack_9,param_1 + 1);
  }
  func_0x0412a280(param_1,0x38);
  return;
}


