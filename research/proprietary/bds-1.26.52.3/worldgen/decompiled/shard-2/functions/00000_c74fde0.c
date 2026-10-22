/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc84fde0 (ELF vaddr 0xc74fde0)
 * Label: FixedBiomeSource::vslot3
 * Body:  [[0c84fde0, 0c84fdea]]
 * Ghidra: wg_FixedBiomeSource__vslot3
 */


undefined1 * wg_FixedBiomeSource__vslot3(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  return param_1;
}



/* ---- assembly ---- */
/* 0c84fde0 */  MOV RAX,RDI
/* 0c84fde3 */  MOV byte ptr [RDI],0x0
/* 0c84fde6 */  MOV byte ptr [RDI + 0x8],0x0
/* 0c84fdea */  RET
