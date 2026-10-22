/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8ade20 (ELF vaddr 0xc7ade20)
 * Label: string:temperature
 * Body:  [[0c8ade20, 0c8ade5e]]
 * Ghidra: FUN_0c8ade20
 */


void FUN_0c8ade20(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*param_3,&UNK_0141a29e,0);
                    /* WARNING: Could not recover jumptable at 0x0c8ade5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_3 + 4),&UNK_0123ca5a,0);
  return;
}


