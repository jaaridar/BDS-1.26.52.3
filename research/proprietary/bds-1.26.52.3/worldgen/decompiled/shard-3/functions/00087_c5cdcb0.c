/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cdcb0 (ELF vaddr 0xc5cdcb0)
 * Label: JigsawBlock::vslot102
 * Body:  [[0c6cdcb0, 0c6cdcd0]]
 * Ghidra: wg_JigsawBlock__vslot102
 */


void wg_JigsawBlock__vslot102(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
  plVar1 = *(long **)(auVar2._0_8_ + 0x68);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x338);
                    /* WARNING: Could not recover jumptable at 0x0c6cdccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,auVar2._0_8_,auVar2._8_8_,UNRECOVERED_JUMPTABLE);
  return;
}


