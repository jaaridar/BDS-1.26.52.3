/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8499030
 * Label: string:Temperature
 * Body:  [[08499010, 08499039]]
 * Ghidra: FUN_08499030
 */


void FUN_08499030(void)

{
  long lVar1;
  long unaff_RBX;
  long unaff_R14;
  
  while (lVar1 = unaff_RBX, unaff_RBX = lVar1 + -0x20, unaff_RBX != unaff_R14) {
    if ((*(byte *)(lVar1 + -0x40) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar1 + -0x30),*(ulong *)(lVar1 + -0x40) & 0xfffffffffffffffe)
      ;
    }
  }
  return;
}


