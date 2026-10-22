/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533dfb0 (ELF vaddr 0x523dfb0)
 * Label: caller-of-seed
 * Body:  [[0533dfb0, 0533dfc6]]
 * Ghidra: FUN_0533dfb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0533dfb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0ca5ddd0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


