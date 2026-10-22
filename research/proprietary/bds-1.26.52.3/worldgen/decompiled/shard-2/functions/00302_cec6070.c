/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc6070 (ELF vaddr 0xcec6070)
 * Label: caller-of-seed
 * Body:  [[0cfc6070, 0cfc60da]]
 * Ghidra: FUN_0cfc6070
 */


void FUN_0cfc6070(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f42ab70;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = &UNK_04000040;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0cfc5ec0(param_1,&UNK_0cfc6040,0,0);
  func_0x0c6d1a60(param_1,&UNK_0cfc6050,0,0);
  return;
}


