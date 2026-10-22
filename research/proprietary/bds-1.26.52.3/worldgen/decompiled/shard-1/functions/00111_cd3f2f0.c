/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f2f0 (ELF vaddr 0xcd3f2f0)
 * Label: JigsawBlockActor::vslot69
 * Body:  [[0ce3f2f0, 0ce3f301]]
 * Ghidra: wg_JigsawBlockActor__vslot69
 */


void wg_JigsawBlockActor__vslot69(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x4c) = param_2 << 4 | *(byte *)(param_1 + 0x4c) & 0xef;
  return;
}


