/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xce3eb00 (ELF vaddr 0xcd3eb00)
 * Label: JigsawBlockActor::vslot50
 * Body:  [[0ce3eb00, 0ce3eb09]]
 * Ghidra: wg_JigsawBlockActor__vslot50
 */


byte wg_JigsawBlockActor__vslot50(long param_1)

{
  return (*(byte *)(param_1 + 0x4c) & 0x10) >> 4;
}


