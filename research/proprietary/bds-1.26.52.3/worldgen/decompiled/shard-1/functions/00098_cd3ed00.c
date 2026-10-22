/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ed00 (ELF vaddr 0xcd3ed00)
 * Label: JigsawBlockActor::vslot11
 * Body:  [[0ce3ed00, 0ce3ed09]]
 * Ghidra: wg_JigsawBlockActor__vslot11
 */


byte wg_JigsawBlockActor__vslot11(long param_1)

{
  return (*(byte *)(param_1 + 0x1c) & 8) >> 3;
}


