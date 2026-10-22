/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe20d100 (ELF vaddr 0xe10d100)
 * Label: callee-of:0xe056cf0
 * Body:  [[0e20d100, 0e20d172]]
 * Ghidra: FUN_0e20d100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e20d100(void)

{
  int iVar1;
  
  if ((DAT_0f747fb8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f747fb8), iVar1 != 0)) {
    _DAT_0f747fb0 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f747fb8);
  }
  _DAT_0f747f90 = _DAT_0f747fb0;
  _DAT_0f747f94 = 0xf4d43cc5;
  _DAT_0f747f98 = &UNK_0133af45;
  _DAT_0f747fa0 = 0x30;
  return;
}


