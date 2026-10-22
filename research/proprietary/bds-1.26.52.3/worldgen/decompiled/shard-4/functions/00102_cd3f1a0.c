/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f1a0 (ELF vaddr 0xcd3f1a0)
 * Label: JigsawBlockActor::vslot22
 * Body:  [[0ce3f1a0, 0ce3f1a4]]
 * Ghidra: wg_JigsawBlockActor__vslot22
 */


void wg_JigsawBlockActor__vslot22(long param_1)

{
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
  return;
}


