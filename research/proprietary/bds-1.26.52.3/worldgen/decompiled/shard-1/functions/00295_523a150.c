/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533a150 (ELF vaddr 0x523a150)
 * Label: caller-of-seed
 * Body:  [[0533a150, 0533a16d]]
 * Ghidra: FUN_0533a150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0533a150(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -0x38;
  uVar1 = func_0x0ca5ddd0(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


