/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4905d10 (ELF vaddr 0x4805d10)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[04905d10, 04905d7e]]
 * Ghidra: FUN_04905d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04905d10(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f551cc0 == '\0') && (iVar1 = FUN_04108328(&DAT_0f551cc0), iVar1 != 0)) {
    _DAT_0f551cb8 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f551cc0);
  }
  *param_1 = _DAT_0f551cb8;
  param_1[1] = -0x41d75c11;
  *(undefined **)(param_1 + 2) = &UNK_013def13;
  param_1[4] = 0x2f;
  param_1[5] = 0;
  return;
}


