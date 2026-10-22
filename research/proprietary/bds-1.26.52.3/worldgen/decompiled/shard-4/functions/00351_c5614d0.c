/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6614d0 (ELF vaddr 0xc5614d0)
 * Label: caller-of-seed
 * Body:  [[0c6614d0, 0c66151a]]
 * Ghidra: FUN_0c6614d0
 */


void FUN_0c6614d0(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  return;
}


