/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ab5f90 (ELF vaddr 0x59b5f90)
 * Label: callee-of:0xc95fb20
 * Body:  [[05ab5f90, 05ab5ffe]]
 * Ghidra: FUN_05ab5f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05ab5f90(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f559288 == '\0') && (iVar1 = func_0x04108328(&DAT_0f559288), iVar1 != 0)) {
    _DAT_0f559280 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f559288);
  }
  *param_1 = _DAT_0f559280;
  param_1[1] = -0x2b8d9b6f;
  *(undefined **)(param_1 + 2) = &UNK_0128b9c1;
  param_1[4] = 0x17;
  param_1[5] = 0;
  return;
}


