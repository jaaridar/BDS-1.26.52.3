/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5bd0 (ELF vaddr 0xd1d5bd0)
 * Label: br::worldgen::WorldGenRandom::vslot9
 * Body:  [[0d2d5bd0, 0d2d5c1c]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot9
 */


void wg_br__worldgen__WorldGenRandom__vslot9(long param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 **ppuStack_8;
  
  puStack_10 = &uStack_14;
  uStack_14 = param_2;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45ef18 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


