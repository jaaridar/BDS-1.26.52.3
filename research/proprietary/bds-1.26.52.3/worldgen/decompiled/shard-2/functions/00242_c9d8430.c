/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad8430 (ELF vaddr 0xc9d8430)
 * Label: callee-of:0x51884e0
 * Body:  [[0cad8430, 0cad846d]]
 * Ghidra: FUN_0cad8430
 */


void FUN_0cad8430(undefined8 *param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  long lStack_10;
  
  *param_1 = &UNK_0f3ef960;
  uStack_28 = *(undefined4 *)(param_1 + 1);
  uStack_24 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 2);
  uStack_1c = *(undefined4 *)((long)param_1 + 0x14);
  uStack_18 = *(undefined1 *)(param_1 + 3);
  lStack_10 = func_0x0417cc60();
  lStack_10 = lStack_10 - param_1[4];
  func_0x0cad8200(&uStack_28);
  return;
}


