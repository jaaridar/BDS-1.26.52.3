/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe36ede0 (ELF vaddr 0xe26ede0)
 * Label: callee-of:0xe1df5f0
 * Body:  [[0e36ede0, 0e36ee52]]
 * Ghidra: FUN_0e36ede0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e36ede0(void)

{
  int iVar1;
  
  if ((DAT_0f74ea00 == '\0') && (iVar1 = FUN_04108328(&DAT_0f74ea00), iVar1 != 0)) {
    _DAT_0f74e9f8 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f74ea00);
  }
  _DAT_0f74e9d8 = _DAT_0f74e9f8;
  _DAT_0f74e9dc = 0x916d2675;
  _DAT_0f74e9e0 = &UNK_0121cbb1;
  _DAT_0f74e9e8 = 0x55;
  return;
}


