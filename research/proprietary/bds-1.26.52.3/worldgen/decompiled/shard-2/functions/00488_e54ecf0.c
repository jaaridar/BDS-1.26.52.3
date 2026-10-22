/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe64ecf0 (ELF vaddr 0xe54ecf0)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[0e64ecf0, 0e64ed62]]
 * Ghidra: FUN_0e64ecf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e64ecf0(void)

{
  int iVar1;
  
  if ((DAT_0f75bc68 == '\0') && (iVar1 = func_0x04108328(&DAT_0f75bc68), iVar1 != 0)) {
    _DAT_0f75bc60 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f75bc68);
  }
  _DAT_0f75bc40 = _DAT_0f75bc60;
  _DAT_0f75bc44 = 0xb8a3bfc;
  _DAT_0f75bc48 = &UNK_013f485d;
  _DAT_0f75bc50 = 0x47;
  return;
}


