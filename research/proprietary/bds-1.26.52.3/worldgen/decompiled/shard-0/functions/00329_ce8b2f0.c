/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf8b2f0 (ELF vaddr 0xce8b2f0)
 * Label: caller-of-seed
 * Body:  [[0cf8b2f0, 0cf8b306]]
 * Ghidra: FUN_0cf8b2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cf8b2f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


