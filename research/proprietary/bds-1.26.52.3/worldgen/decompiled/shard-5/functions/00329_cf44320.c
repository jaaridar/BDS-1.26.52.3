/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd044320 (ELF vaddr 0xcf44320)
 * Label: caller-of-seed
 * Body:  [[0d044320, 0d044357]]
 * Ghidra: FUN_0d044320
 */


void FUN_0d044320(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f43d220;
  *(undefined1 *)((long)param_1 + 0x131) = 0x30;
  func_0x0d044370(param_1,&UNK_0d0444f0,0,0);
  return;
}


