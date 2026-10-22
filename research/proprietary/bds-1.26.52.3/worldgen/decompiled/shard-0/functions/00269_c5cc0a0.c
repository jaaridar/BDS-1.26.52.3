/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cc0a0 (ELF vaddr 0xc5cc0a0)
 * Label: JigsawBlock::vslot37
 * Body:  [[0c6cc0a0, 0c6cc0a9]]
 * Ghidra: wg_JigsawBlock__vslot37
 */


byte wg_JigsawBlock__vslot37(long param_1)

{
  return *(byte *)(param_1 + 0x134) & 1;
}


