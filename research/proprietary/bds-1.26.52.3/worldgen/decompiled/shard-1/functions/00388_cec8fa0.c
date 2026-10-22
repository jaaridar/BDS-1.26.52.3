/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc8fa0 (ELF vaddr 0xcec8fa0)
 * Label: caller-of-seed
 * Body:  [[0cfc8fa0, 0cfc8fb6]]
 * Ghidra: FUN_0cfc8fa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0cfc8fa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


