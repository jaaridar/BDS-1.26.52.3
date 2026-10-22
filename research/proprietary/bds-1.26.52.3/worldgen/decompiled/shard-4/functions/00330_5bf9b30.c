/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cf9b30 (ELF vaddr 0x5bf9b30)
 * Label: caller-of-seed
 * Body:  [[05cf9b30, 05cf9b46]]
 * Ghidra: FUN_05cf9b30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05cf9b30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


