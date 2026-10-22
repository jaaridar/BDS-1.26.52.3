/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6242ca0 (ELF vaddr 0x6142ca0)
 * Label: callee-of:0x61416e0
 * Body:  [[06242ca0, 06242cc7]]
 * Ghidra: FUN_06242ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06242ca0(long *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    uVar2 = func_0x0d328aa0(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return uVar2;
  }
  return in_RAX;
}


