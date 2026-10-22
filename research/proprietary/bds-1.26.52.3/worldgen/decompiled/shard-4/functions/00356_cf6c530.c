/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd06c530 (ELF vaddr 0xcf6c530)
 * Label: caller-of-seed
 * Body:  [[0d06c530, 0d06c5a2]]
 * Ghidra: FUN_0d06c530
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d06c530(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f448ae0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 0xb;
  func_0x0d06c5c0(param_1,&UNK_0d06c740,0,0);
  func_0x0d06ca30(param_1,&UNK_0d06cbb0,0,0);
  return;
}


