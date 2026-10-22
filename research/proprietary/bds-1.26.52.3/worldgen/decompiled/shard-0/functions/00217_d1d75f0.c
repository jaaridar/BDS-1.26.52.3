/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d75f0 (ELF vaddr 0xd1d75f0)
 * Label: br::worldgen::processors::BlockRules::BlockStateMatch::vslot2
 * Body:  [[0d2d75f0, 0d2d7605]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot2
 */


undefined8
wg_br__worldgen__processors__BlockRules__BlockStateMatch__vslot2(long param_1,long param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),
                  *(long *)(param_2 + 0x110) == *(long *)(*(long *)(param_1 + 8) + 0x110));
}


