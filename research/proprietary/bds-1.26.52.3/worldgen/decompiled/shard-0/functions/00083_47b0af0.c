/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0af0 (ELF vaddr 0x47b0af0)
 * Label: callee-of:0x871a310
 * Body:  [[048b0af0, 048b0b5e]]
 * Ghidra: FUN_048b0af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048b0af0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550a30 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550a30), iVar1 != 0)) {
    _DAT_0f550a28 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f550a30);
  }
  *param_1 = _DAT_0f550a28;
  param_1[1] = -0x45dcb126;
  *(undefined **)(param_1 + 2) = &UNK_01447205;
  param_1[4] = 0x2f;
  param_1[5] = 0;
  return;
}


