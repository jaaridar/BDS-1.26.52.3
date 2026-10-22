/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd077be0 (ELF vaddr 0xcf77be0)
 * Label: caller-of-seed
 * Body:  [[0d077be0, 0d077bf6]]
 * Ghidra: FUN_0d077be0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d077be0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


