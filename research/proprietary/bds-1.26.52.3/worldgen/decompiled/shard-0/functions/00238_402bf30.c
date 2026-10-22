/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412bf30 (ELF vaddr 0x402bf30)
 * Label: callee-of:0x517ab30
 * Body:  [[0412bf30, 0412bf95]]
 * Ghidra: FUN_0412bf30
 */


void FUN_0412bf30(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &UNK_0eeec838;
  lVar1 = func_0x0eee2e90(param_2);
  plVar2 = (long *)func_0x0ee32660(lVar1 + 0x19);
  *plVar2 = lVar1;
  plVar2[1] = lVar1;
  *(undefined4 *)(plVar2 + 2) = 0;
  func_0x0eee2f00(plVar2 + 3,param_2,lVar1 + 1);
  param_1[1] = plVar2 + 3;
  return;
}


