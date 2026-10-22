/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3eb10 (ELF vaddr 0xcd3eb10)
 * Label: JigsawBlockActor::vslot7
 * Body:  [[0ce3eb10, 0ce3eb19]]
 * Ghidra: wg_JigsawBlockActor__vslot7
 */


byte wg_JigsawBlockActor__vslot7(long param_1)

{
  return (*(byte *)(param_1 + 0x1c) & 0x10) >> 4;
}


