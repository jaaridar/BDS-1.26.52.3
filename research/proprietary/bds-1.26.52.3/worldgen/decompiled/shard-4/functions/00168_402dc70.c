/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412dc70 (ELF vaddr 0x402dc70)
 * Label: callee-of:0x82e9c40
 * Body:  [[0412dc70, 0412dcab]]
 * Ghidra: FUN_0412dc70
 */


undefined8 FUN_0412dc70(void)

{
  int iVar1;
  
  if (DAT_0f547720 != '\0') {
    return 0xf53dbe0;
  }
  iVar1 = func_0x04108328(&DAT_0f547720);
  if (iVar1 != 0) {
    func_0x0410844d(&DAT_0f547720);
  }
  return 0xf53dbe0;
}


