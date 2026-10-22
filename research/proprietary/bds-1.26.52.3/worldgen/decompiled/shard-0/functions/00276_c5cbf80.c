/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cbf80 (ELF vaddr 0xc5cbf80)
 * Label: JigsawBlock::vslot65
 * Body:  [[0c6cbf80, 0c6cbf88]]
 * Ghidra: wg_JigsawBlock__vslot65
 */


void wg_JigsawBlock__vslot65(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0c6cbf83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))();
  return;
}


