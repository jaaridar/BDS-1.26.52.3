/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e0ab0 (ELF vaddr 0xd1e0ab0)
 * Label: callee-of:0x6146460
 * Body:  [[0d2e0ab0, 0d2e0acc]]
 * Ghidra: FUN_0d2e0ab0
 */


void FUN_0d2e0ab0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = &UNK_0f2bdd80;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x18);
  return;
}


