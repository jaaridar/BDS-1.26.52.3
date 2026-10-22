/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b7660 (ELF vaddr 0xc5b7660)
 * Label: caller-of-seed
 * Body:  [[0c6b7660, 0c6b76bf]]
 * Ghidra: FUN_0c6b7660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b7660(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3c1420;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0c6b76e0(param_1,&UNK_0c6b7860,0,0);
  return;
}


