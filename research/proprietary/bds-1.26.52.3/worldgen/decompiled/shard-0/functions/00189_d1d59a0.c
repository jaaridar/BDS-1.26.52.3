/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d59a0 (ELF vaddr 0xd1d59a0)
 * Label: br::worldgen::WorldGenRandom::vslot2
 * Body:  [[0d2d59a0, 0d2d59e5]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot2
 */


void wg_br__worldgen__WorldGenRandom__vslot2(long param_1)

{
  code *pcVar1;
  undefined1 uStack_11;
  undefined1 *puStack_10;
  undefined1 **ppuStack_8;
  
  puStack_10 = &uStack_11;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45eea8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


