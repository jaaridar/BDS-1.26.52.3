/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d59f0 (ELF vaddr 0xd1d59f0)
 * Label: br::worldgen::WorldGenRandom::vslot3
 * Body:  [[0d2d59f0, 0d2d5a3c]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot3
 */


void wg_br__worldgen__WorldGenRandom__vslot3(long param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 **ppuStack_8;
  
  puStack_10 = &uStack_14;
  uStack_14 = param_2;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45eeb8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  func_0x04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


