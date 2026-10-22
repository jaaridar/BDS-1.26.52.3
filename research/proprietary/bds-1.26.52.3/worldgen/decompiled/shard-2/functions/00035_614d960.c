/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624d960 (ELF vaddr 0x614d960)
 * Label: br::worldgen::WorldGenRandom::vslot0
 * Body:  [[0624d960, 0624d994]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot0
 */


void wg_br__worldgen__WorldGenRandom__vslot0(long param_1)

{
  undefined1 uStack_9;
  
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    (**(code **)(&UNK_0f023e10 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&uStack_9,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}


