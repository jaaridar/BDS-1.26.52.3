/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65c560 (ELF vaddr 0xc55c560)
 * Label: caller-of-seed
 * Body:  [[0c65c560, 0c65c576]]
 * Ghidra: FUN_0c65c560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c65c560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


