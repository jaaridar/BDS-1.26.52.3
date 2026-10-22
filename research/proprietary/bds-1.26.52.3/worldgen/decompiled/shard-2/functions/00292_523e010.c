/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533e010 (ELF vaddr 0x523e010)
 * Label: caller-of-seed
 * Body:  [[0533e010, 0533e02d]]
 * Ghidra: FUN_0533e010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0533e010(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x10;
  uVar1 = func_0x0ca5ddd0(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


