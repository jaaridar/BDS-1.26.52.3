/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecf8ed0 (ELF vaddr 0xebf8ed0)
 * Label: callee-of:0xeba2170
 * Body:  [[0ecf8ed0, 0ecf8f42]]
 * Ghidra: FUN_0ecf8ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecf8ed0(void)

{
  int iVar1;
  
  if ((DAT_0f772d70 == '\0') && (iVar1 = FUN_04108328(&DAT_0f772d70), iVar1 != 0)) {
    _DAT_0f772d68 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f772d70);
  }
  _DAT_0f772d48 = _DAT_0f772d68;
  _DAT_0f772d4c = 0xa6f15685;
  _DAT_0f772d50 = &UNK_01254a29;
  _DAT_0f772d58 = 0x22;
  return;
}


