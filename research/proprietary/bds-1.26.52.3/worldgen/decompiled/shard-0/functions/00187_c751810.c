/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851810 (ELF vaddr 0xc751810)
 * Label: FixedBiomeSource::vslot9
 * Body:  [[0c851810, 0c85181e]]
 * Ghidra: wg_FixedBiomeSource__vslot9
 */


undefined8 wg_FixedBiomeSource__vslot9(long param_1,long param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),
                  *(long *)(*(long *)(param_1 + 8) + 400) == param_2);
}


