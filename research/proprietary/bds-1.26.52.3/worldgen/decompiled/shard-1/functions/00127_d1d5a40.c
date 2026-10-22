/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d5a40 (ELF vaddr 0xd1d5a40)
 * Label: br::worldgen::WorldGenRandom::vslot4
 * Body:  [[0d2d5a40, 0d2d5a85]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot4
 */


void wg_br__worldgen__WorldGenRandom__vslot4(long param_1)

{
  code *pcVar1;
  undefined1 uStack_11;
  undefined1 *puStack_10;
  undefined1 **ppuStack_8;
  
  puStack_10 = &uStack_11;
  if ((ulong)*(uint *)(param_1 + 0x30) != 0xffffffff) {
    ppuStack_8 = &puStack_10;
    (**(code **)(&UNK_0f45eec8 + (ulong)*(uint *)(param_1 + 0x30) * 8))(&ppuStack_8,param_1 + 8);
    return;
  }
  FUN_04931450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


