/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f330 (ELF vaddr 0xcd3f330)
 * Label: JigsawBlockActor::vslot70
 * Body:  [[0ce3f330, 0ce3f341]]
 * Ghidra: wg_JigsawBlockActor__vslot70
 */


void wg_JigsawBlockActor__vslot70(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x4c) = param_2 << 3 | *(byte *)(param_1 + 0x4c) & 0xf7;
  return;
}


