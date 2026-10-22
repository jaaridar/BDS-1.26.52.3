/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee32660 (ELF vaddr 0xed32660)
 * Label: callee2-of:0x402bf30
 * Body:  [[0ee32660, 0ee3269b]]
 * Ghidra: FUN_0ee32660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0ee32660(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,param_1);
  if (param_1 == 0 || lVar1 != 0) {
    return lVar1;
  }
  func_0x0eec74c0(param_1,0);
  return lVar1;
}


