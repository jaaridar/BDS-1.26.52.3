/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4790760
 * Label: callee-of:0x493b030
 * Body:  [[0479072f, 0479073b] [04790760, 04790780]]
 * Ghidra: FUN_04790760
 */


undefined8
FUN_04790760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  *param_4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  return 1;
}


