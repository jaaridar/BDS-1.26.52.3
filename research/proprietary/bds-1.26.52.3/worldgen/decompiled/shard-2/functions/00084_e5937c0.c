/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5937c0
 * Label: callee-of:0xe3f1ef0
 * Body:  [[0e5937c0, 0e5937c9] [0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0e5937c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0e5937c0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


