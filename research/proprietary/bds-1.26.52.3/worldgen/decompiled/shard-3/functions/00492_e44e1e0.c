/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe54e1e0 (ELF vaddr 0xe44e1e0)
 * Label: callee-of:0xe4118a0
 * Body:  [[0e54e1e0, 0e54e252]]
 * Ghidra: FUN_0e54e1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e54e1e0(void)

{
  int iVar1;
  
  if ((DAT_0f755d50 == '\0') && (iVar1 = func_0x04108328(&DAT_0f755d50), iVar1 != 0)) {
    _DAT_0f755d48 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f755d50);
  }
  _DAT_0f755d28 = _DAT_0f755d48;
  _DAT_0f755d2c = 0x973fb8a1;
  _DAT_0f755d30 = &UNK_013c0388;
  _DAT_0f755d38 = 0x48;
  return;
}


