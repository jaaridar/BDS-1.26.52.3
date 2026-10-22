/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5a90 (ELF vaddr 0xd1d5a90)
 * Label: br::worldgen::WorldGenRandom::vslot5
 * Body:  [[0d2d5a90, 0d2d5ad5]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot5
 */


void wg_br__worldgen__WorldGenRandom__vslot5(long param_1)

{
  code *pcVar1;
  undefined1 uStack_11;
  undefined1 *puStack_10;
  undefined1 **ppuStack_8;
  
  puStack_10 = &uStack_11;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45eed8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


