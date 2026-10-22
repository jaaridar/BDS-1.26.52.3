/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3eb50 (ELF vaddr 0xcd3eb50)
 * Label: JigsawBlockActor::vslot8
 * Body:  [[0ce3eb50, 0ce3eb6b]]
 * Ghidra: wg_JigsawBlockActor__vslot8
 */


ulong wg_JigsawBlockActor__vslot8(long param_1)

{
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    return CONCAT71((int7)((ulong)*(long *)(param_1 + 0x60) >> 8),*(long *)(param_1 + 0x60) != 0);
  }
  return (ulong)(*(byte *)(param_1 + 0x58) >> 1 != 0);
}


