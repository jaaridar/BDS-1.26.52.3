/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b5920 (ELF vaddr 0xc5b5920)
 * Label: caller-of-seed
 * Body:  [[0c6b5920, 0c6b59a3]]
 * Ghidra: FUN_0c6b5920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b5920(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3c0fe8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  func_0x0c6b59c0(param_1,&UNK_0c6b5b40,0,0);
  func_0x0c6b5bb0(param_1,&UNK_0c6b5d30,0,0);
  return;
}


