/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee326a0 (ELF vaddr 0xed326a0)
 * Label: fn_0xed326a0
 * Body:  [[0ee326a0, 0ee326bb]]
 * Ghidra: FUN_0ee326a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ee326a0(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


