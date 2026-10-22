/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfe370 (ELF vaddr 0x5bfe370)
 * Label: caller-of-seed
 * Body:  [[05cfe370, 05cfe397]]
 * Ghidra: FUN_05cfe370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05cfe370(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    uVar2 = func_0x0c6e1d20(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return uVar2;
  }
  return in_RAX;
}


