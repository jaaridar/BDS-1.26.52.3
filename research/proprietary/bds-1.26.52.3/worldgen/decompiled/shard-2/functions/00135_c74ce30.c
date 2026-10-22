/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc84ce30 (ELF vaddr 0xc74ce30)
 * Label: string:temperature
 * Body:  [[0c84ce30, 0c84ce6e]]
 * Ghidra: FUN_0c84ce30
 */


void FUN_0c84ce30(undefined1 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2,*param_1,&UNK_0141a29e,0);
                    /* WARNING: Could not recover jumptable at 0x0c84ce6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined4 *)(param_1 + 4),&UNK_0123ca5a,0);
  return;
}


