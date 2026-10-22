/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88b58a0 (ELF vaddr 0x87b58a0)
 * Label: callee2-of:0x87b42d0
 * Body:  [[088b58a0, 088b590e]]
 * Ghidra: FUN_088b58a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088b58a0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f5dfd30 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5dfd30), iVar1 != 0)) {
    _DAT_0f5dfd28 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f5dfd30);
  }
  *param_1 = _DAT_0f5dfd28;
  param_1[1] = 0x19df2e83;
  *(undefined **)(param_1 + 2) = &UNK_013cbca6;
  param_1[4] = 0x18;
  param_1[5] = 0;
  return;
}


