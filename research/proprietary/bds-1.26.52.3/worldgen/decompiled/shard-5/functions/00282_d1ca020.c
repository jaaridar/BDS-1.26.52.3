/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ca020 (ELF vaddr 0xd1ca020)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d2ca020, 0d2ca054]]
 * Ghidra: FUN_0d2ca020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2ca020(byte *param_1)

{
  long lVar1;
  undefined8 in_RAX;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x50) = lVar1;
    in_RAX = FUN_0412a280(lVar1,*(long *)(param_1 + 0x58) - lVar1);
  }
  if ((*param_1 & 1) == 0) {
    return in_RAX;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(param_1 + 0x10));
  }
  return in_RAX;
}


