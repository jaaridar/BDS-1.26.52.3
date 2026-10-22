/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412a280 (ELF vaddr 0x402a280)
 * Label: callee-of:0x493a160
 * Body:  [[0412a280, 0412a284]]
 * Ghidra: thunk_FUN_0ee326a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thunk_FUN_0ee326a0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}



/* ---- assembly ---- */
/* 0412a280 */  JMP 0x0ee326a0
