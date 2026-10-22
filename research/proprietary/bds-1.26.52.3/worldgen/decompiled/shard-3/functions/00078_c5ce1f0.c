/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ce1f0 (ELF vaddr 0xc5ce1f0)
 * Label: JigsawBlock::vslot48
 * Body:  [[0c6ce1f0, 0c6ce1fa]]
 * Ghidra: wg_JigsawBlock__vslot48
 */


byte wg_JigsawBlock__vslot48(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 0x20) + 3) ^ 1;
}


