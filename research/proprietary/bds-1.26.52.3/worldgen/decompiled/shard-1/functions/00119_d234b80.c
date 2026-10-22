/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd334b80 (ELF vaddr 0xd234b80)
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot9
 * Body:  [[0d334b80, 0d334b8a]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot9
 */


ulong wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot9(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  return uVar1 ^ 1;
}


