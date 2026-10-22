/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b46f0 (ELF vaddr 0x47b46f0)
 * Label: callee-of:0xe1d0880
 * Body:  [[048b46f0, 048b475e]]
 * Ghidra: FUN_048b46f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_048b46f0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550778 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550778), iVar1 != 0)) {
    _DAT_0f550770 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f550778);
  }
  *param_1 = _DAT_0f550770;
  param_1[1] = -0x2cc4263b;
  *(undefined **)(param_1 + 2) = &UNK_0128a91f;
  param_1[4] = 0x12;
  param_1[5] = 0;
  return;
}


