/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9de0 (ELF vaddr 0xd1d9de0)
 * Label: br::worldgen::WorldGenRandom::vslot1
 * Body:  [[0d2d9de0, 0d2d9e1a]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot1
 */


void wg_br__worldgen__WorldGenRandom__vslot1(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (**(code **)(&UNK_0f45ee28 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&uStack_9,param_1 + 8);
  }
  func_0x0412a280(param_1,0x38);
  return;
}


