/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc641d80 (ELF vaddr 0xc541d80)
 * Label: caller-of-seed
 * Body:  [[0c641d80, 0c641de2]]
 * Ghidra: FUN_0c641d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c641d80(undefined8 *param_1)

{
  func_0x0c6c7010();
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f39e568;
  func_0x0c641e00(param_1,&UNK_0c641f80,0,0);
  return;
}


