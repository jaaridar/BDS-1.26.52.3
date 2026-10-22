/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6c8850 (ELF vaddr 0xc5c8850)
 * Label: JigsawBlock::vslot93
 * Body:  [[0c6c8850, 0c6c885c]]
 * Ghidra: wg_JigsawBlock__vslot93
 */


byte wg_JigsawBlock__vslot93(long param_1)

{
  return (*(byte *)(param_1 + 0x133) & 4) >> 2;
}


