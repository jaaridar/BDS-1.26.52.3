/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3f1c0 (ELF vaddr 0xcd3f1c0)
 * Label: JigsawBlockActor::vslot23
 * Body:  [[0ce3f1c0, 0ce3f1c6]]
 * Ghidra: wg_JigsawBlockActor__vslot23
 */


byte wg_JigsawBlockActor__vslot23(long param_1)

{
  return *(byte *)(param_1 + 0x1c) & 1;
}


