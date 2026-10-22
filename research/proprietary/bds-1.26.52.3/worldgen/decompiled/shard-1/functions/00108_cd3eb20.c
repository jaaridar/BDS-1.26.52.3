/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3eb20 (ELF vaddr 0xcd3eb20)
 * Label: JigsawBlockActor::vslot51
 * Body:  [[0ce3eb20, 0ce3eb41]]
 * Ghidra: wg_JigsawBlockActor__vslot51
 */


ulong wg_JigsawBlockActor__vslot51(long param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    return CONCAT71((int7)((ulong)*(long *)(param_1 + 0x90) >> 8),*(long *)(param_1 + 0x90) != 0);
  }
  return (ulong)(*(byte *)(param_1 + 0x88) >> 1 != 0);
}


