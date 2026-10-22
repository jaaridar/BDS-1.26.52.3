/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee24d30 (ELF vaddr 0xed24d30)
 * Label: callee-of:0x6146460
 * Body:  [[0ee24d30, 0ee24d91]]
 * Ghidra: FUN_0ee24d30
 */


void FUN_0ee24d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  if (param_1 != param_2) {
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      param_1[3] = param_2[3];
      uVar1 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = uVar1;
    }
    else {
      func_0x04885070(param_1 + 1,param_2[3],param_2[2]);
    }
  }
  *param_1 = *param_2;
  return;
}


