/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f350 (ELF vaddr 0xcd3f350)
 * Label: JigsawBlockActor::vslot26
 * Body:  [[0ce3f350, 0ce3f361]]
 * Ghidra: wg_JigsawBlockActor__vslot26
 */


void wg_JigsawBlockActor__vslot26(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x1c) = param_2 << 3 | *(byte *)(param_1 + 0x1c) & 0xf7;
  return;
}


