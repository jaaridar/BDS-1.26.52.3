/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe3b11d0 (ELF vaddr 0xe2b11d0)
 * Label: callee-of:0xe1e0460
 * Body:  [[0e3b11d0, 0e3b1242]]
 * Ghidra: FUN_0e3b11d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e3b11d0(void)

{
  int iVar1;
  
  if ((DAT_0f74fb50 == '\0') && (iVar1 = func_0x04108328(&DAT_0f74fb50), iVar1 != 0)) {
    _DAT_0f74fb48 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f74fb50);
  }
  _DAT_0f74fb28 = _DAT_0f74fb48;
  _DAT_0f74fb2c = 0x563a8f6e;
  _DAT_0f74fb30 = &UNK_0126be46;
  _DAT_0f74fb38 = 0x31;
  return;
}


