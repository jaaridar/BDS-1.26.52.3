/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88bb210 (ELF vaddr 0x87bb210)
 * Label: callee2-of:0x87b9c40
 * Body:  [[088bb210, 088bb27e]]
 * Ghidra: FUN_088bb210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088bb210(int *param_1)

{
  int iVar1;
  
  if ((DAT_0f5dfde8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5dfde8), iVar1 != 0)) {
    _DAT_0f5dfde0 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f5dfde8);
  }
  *param_1 = _DAT_0f5dfde0;
  param_1[1] = 0xb83b353;
  *(undefined **)(param_1 + 2) = &UNK_0129272c;
  param_1[4] = 0x18;
  param_1[5] = 0;
  return;
}


