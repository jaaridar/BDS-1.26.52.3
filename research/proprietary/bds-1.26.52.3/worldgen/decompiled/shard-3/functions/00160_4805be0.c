/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4905be0 (ELF vaddr 0x4805be0)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[04905be0, 04905c4e]]
 * Ghidra: FUN_04905be0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04905be0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f551bd8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f551bd8), iVar1 != 0)) {
    _DAT_0f551bd0 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f551bd8);
  }
  *param_1 = _DAT_0f551bd0;
  param_1[1] = 0xac66523;
  *(undefined **)(param_1 + 2) = &UNK_011ec0f0;
  param_1[4] = 0x2f;
  param_1[5] = 0;
  return;
}


