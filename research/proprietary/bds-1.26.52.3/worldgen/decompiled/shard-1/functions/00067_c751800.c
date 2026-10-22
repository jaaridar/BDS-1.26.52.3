/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851800 (ELF vaddr 0xc751800)
 * Label: FixedBiomeSource::vslot8
 * Body:  [[0c851800, 0c85180e]]
 * Ghidra: wg_FixedBiomeSource__vslot8
 */


undefined8 wg_FixedBiomeSource__vslot8(long param_1,short param_2)

{
  return CONCAT71((int7)((ulong)*(long *)(param_1 + 8) >> 8),
                  *(short *)(*(long *)(param_1 + 8) + 0x168) == param_2);
}


