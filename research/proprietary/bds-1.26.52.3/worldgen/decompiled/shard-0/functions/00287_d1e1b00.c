/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2e1b00 (ELF vaddr 0xd1e1b00)
 * Label: callee-of:0xd1d87a0
 * Body:  [[0d2e1b00, 0d2e1b33]]
 * Ghidra: FUN_0d2e1b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d2e1b00(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1] - param_1[2];
  if (lVar1 != 0) {
    param_1[2] = param_1[2] + (lVar1 + 0x1fU & 0xffffffffffffffe0);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return lVar1;
  }
  return 0;
}


