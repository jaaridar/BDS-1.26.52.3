/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb61a20 (ELF vaddr 0xda61a20)
 * Label: callee2-of:0xda5fe60
 * Body:  [[0db61a20, 0db61a8e]]
 * Ghidra: FUN_0db61a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db61a20(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f737170 == '\0') && (iVar1 = func_0x04108328(&DAT_0f737170), iVar1 != 0)) {
    _DAT_0f737168 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f737170);
  }
  *param_1 = _DAT_0f737168;
  param_1[1] = -0x157a05ad;
  *(undefined **)(param_1 + 2) = &UNK_0147216c;
  param_1[4] = 0x12;
  param_1[5] = 0;
  return;
}


