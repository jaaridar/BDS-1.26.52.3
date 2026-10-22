/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6242c50 (ELF vaddr 0x6142c50)
 * Label: callee-of:0x61416e0
 * Body:  [[06242c50, 06242c96]]
 * Ghidra: FUN_06242c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06242c50(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x0629d8f0(param_1 + 1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    uVar2 = func_0x0d328aa0(lVar1);
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return uVar2;
  }
  return uVar2;
}


