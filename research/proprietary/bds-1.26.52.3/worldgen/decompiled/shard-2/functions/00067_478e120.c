/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x488e120 (ELF vaddr 0x478e120)
 * Label: callee-of:0xda370f0
 * Body:  [[0488e120, 0488e18e]]
 * Ghidra: FUN_0488e120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0488e120(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f550ae8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f550ae8), iVar1 != 0)) {
    _DAT_0f550ae0 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    FUN_0410844d(&DAT_0f550ae8);
  }
  *param_1 = _DAT_0f550ae0;
  param_1[1] = 0x48b5725f;
  *(undefined **)(param_1 + 2) = &UNK_01221a3b;
  param_1[4] = 4;
  param_1[5] = 0;
  return;
}


