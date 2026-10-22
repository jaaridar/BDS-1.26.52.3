/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc81a40 (ELF vaddr 0xcb81a40)
 * Label: callee-of:0x5a1f120
 * Body:  [[0cc81a40, 0cc81a4b]]
 * Ghidra: FUN_0cc81a40
 */


void FUN_0cc81a40(long *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0cc81a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,*param_2);
  return;
}


