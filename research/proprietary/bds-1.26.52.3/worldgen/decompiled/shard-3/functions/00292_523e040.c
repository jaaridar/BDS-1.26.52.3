/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533e040 (ELF vaddr 0x523e040)
 * Label: caller-of-seed
 * Body:  [[0533e040, 0533e05d]]
 * Ghidra: FUN_0533e040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0533e040(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x38;
  uVar1 = func_0x0ca5ddd0(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


