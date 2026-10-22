/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee386e0 (ELF vaddr 0xed386e0)
 * Label: callee-of:0x524f1c0
 * Body:  [[0ee386e0, 0ee38718]]
 * Ghidra: FUN_0ee386e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ee386e0(ulong *param_1)

{
  if ((*param_1 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(*param_1 & 0xff00ffffffffffff) - 8);
  }
  *param_1 = 0;
  return;
}


