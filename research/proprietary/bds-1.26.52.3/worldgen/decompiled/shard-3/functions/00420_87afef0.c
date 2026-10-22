/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88afef0 (ELF vaddr 0x87afef0)
 * Label: callee2-of:0x87ae540
 * Body:  [[088afef0, 088aff5e]]
 * Ghidra: FUN_088afef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088afef0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f5dfc78 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5dfc78), iVar1 != 0)) {
    _DAT_0f5dfc70 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f5dfc78);
  }
  *param_1 = _DAT_0f5dfc70;
  param_1[1] = 0x2503c888;
  *(undefined **)(param_1 + 2) = &UNK_0136406d;
  param_1[4] = 0x30;
  param_1[5] = 0;
  return;
}


