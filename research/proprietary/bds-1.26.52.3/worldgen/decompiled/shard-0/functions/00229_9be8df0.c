/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9ce8df0 (ELF vaddr 0x9be8df0)
 * Label: callee-of:0xc95fb20
 * Body:  [[09ce8df0, 09ce8e5e]]
 * Ghidra: FUN_09ce8df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09ce8df0(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f649990 == '\0') && (iVar1 = func_0x04108328(&DAT_0f649990), iVar1 != 0)) {
    _DAT_0f649988 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    FUN_0410844d(&DAT_0f649990);
  }
  *param_1 = _DAT_0f649988;
  param_1[1] = -0x1a3b76f7;
  *(undefined **)(param_1 + 2) = &UNK_0149f3b0;
  param_1[4] = 0x13;
  param_1[5] = 0;
  return;
}


