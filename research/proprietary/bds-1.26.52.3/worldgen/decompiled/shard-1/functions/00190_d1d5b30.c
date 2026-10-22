/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5b30 (ELF vaddr 0xd1d5b30)
 * Label: br::worldgen::WorldGenRandom::vslot7
 * Body:  [[0d2d5b30, 0d2d5b75]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot7
 */


void wg_br__worldgen__WorldGenRandom__vslot7(long param_1)

{
  code *pcVar1;
  undefined1 uStack_11;
  undefined1 *puStack_10;
  undefined1 **ppuStack_8;
  
  puStack_10 = &uStack_11;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45eef8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


