/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f310 (ELF vaddr 0xcd3f310)
 * Label: JigsawBlockActor::vslot25
 * Body:  [[0ce3f310, 0ce3f321]]
 * Ghidra: wg_JigsawBlockActor__vslot25
 */


void wg_JigsawBlockActor__vslot25(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x1c) = param_2 << 4 | *(byte *)(param_1 + 0x1c) & 0xef;
  return;
}


