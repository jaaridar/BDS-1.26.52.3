/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3ecf0 (ELF vaddr 0xcd3ecf0)
 * Label: JigsawBlockActor::vslot54
 * Body:  [[0ce3ecf0, 0ce3ecf9]]
 * Ghidra: wg_JigsawBlockActor__vslot54
 */


byte wg_JigsawBlockActor__vslot54(long param_1)

{
  return (*(byte *)(param_1 + 0x4c) & 8) >> 3;
}


