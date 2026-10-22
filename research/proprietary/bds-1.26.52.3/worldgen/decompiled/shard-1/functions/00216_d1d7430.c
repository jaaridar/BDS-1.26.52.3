/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d7430 (ELF vaddr 0xd1d7430)
 * Label: br::worldgen::processors::BlockRules::BlockMatch::vslot2
 * Body:  [[0d2d7430, 0d2d743b]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockMatch__vslot2
 */


undefined8 wg_br__worldgen__processors__BlockRules__BlockMatch__vslot2(long param_1,long param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_2 + 0x68) >> 8),
                  *(long *)(param_2 + 0x68) == *(long *)(param_1 + 8));
}


