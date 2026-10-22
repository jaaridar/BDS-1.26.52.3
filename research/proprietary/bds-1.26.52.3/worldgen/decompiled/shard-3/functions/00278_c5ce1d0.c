/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ce1d0 (ELF vaddr 0xc5ce1d0)
 * Label: JigsawBlock::vslot100
 * Body:  [[0c6ce1d0, 0c6ce1e6]]
 * Ghidra: wg_JigsawBlock__vslot100
 */


void wg_JigsawBlock__vslot100(long param_1,byte *param_2)

{
  *(ushort *)(param_1 + 0x133) = *(ushort *)(param_1 + 0x133) & 0xfffe | (ushort)*param_2;
  return;
}


