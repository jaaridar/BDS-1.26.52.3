/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88aa100 (ELF vaddr 0x87aa100)
 * Label: callee-of:0x871a310
 * Body:  [[088aa100, 088aa16e]]
 * Ghidra: FUN_088aa100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088aa100(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f5dfbc0 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5dfbc0), iVar1 != 0)) {
    _DAT_0f5dfbb8 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f5dfbc0);
  }
  *param_1 = _DAT_0f5dfbb8;
  param_1[1] = 0x4e0a3f05;
  *(undefined **)(param_1 + 2) = &UNK_013ffdba;
  param_1[4] = 0x2d;
  param_1[5] = 0;
  return;
}


