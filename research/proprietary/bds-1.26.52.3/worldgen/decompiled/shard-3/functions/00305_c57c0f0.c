/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc67c0f0 (ELF vaddr 0xc57c0f0)
 * Label: caller-of-seed
 * Body:  [[0c67c0f0, 0c67c13f]]
 * Ghidra: FUN_0c67c0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c67c0f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3b1af0;
  func_0x0c6e6af0(param_1 + 0x75,param_4);
  func_0x0c67c170(param_1,&UNK_0c67c2f0,0,0);
  return;
}


