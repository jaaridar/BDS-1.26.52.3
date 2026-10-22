/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe177580 (ELF vaddr 0xe077580)
 * Label: callee-of:0xe055e60
 * Body:  [[0e177580, 0e1775f2]]
 * Ghidra: FUN_0e177580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e177580(void)

{
  int iVar1;
  
  if ((DAT_0f746bb0 == '\0') && (iVar1 = func_0x04108328(&DAT_0f746bb0), iVar1 != 0)) {
    _DAT_0f746ba8 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    FUN_0410844d(&DAT_0f746bb0);
  }
  _DAT_0f746b88 = _DAT_0f746ba8;
  _DAT_0f746b8c = 0xd2cc12da;
  _DAT_0f746b90 = &UNK_01355d7e;
  _DAT_0f746b98 = 0x54;
  return;
}


