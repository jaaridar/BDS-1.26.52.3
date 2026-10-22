/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f1b0 (ELF vaddr 0xcd3f1b0)
 * Label: JigsawBlockActor::vslot66
 * Body:  [[0ce3f1b0, 0ce3f1b6]]
 * Ghidra: wg_JigsawBlockActor__vslot66
 */


byte wg_JigsawBlockActor__vslot66(long param_1)

{
  return *(byte *)(param_1 + 0x4c) & 1;
}


