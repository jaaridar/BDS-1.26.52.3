/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6ca650 (ELF vaddr 0xc5ca650)
 * Label: JigsawBlock::vslot9
 * Body:  [[0c6ca650, 0c6ca65b]]
 * Ghidra: wg_JigsawBlock__vslot9
 */


void wg_JigsawBlock__vslot9
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0c6ca65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_5);
  return;
}


