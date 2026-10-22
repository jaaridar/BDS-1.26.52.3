/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc656ad0 (ELF vaddr 0xc556ad0)
 * Label: caller-of-seed
 * Body:  [[0c656ad0, 0c656b3b]]
 * Ghidra: FUN_0c656ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c656ad0(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3a6b58;
  *(undefined1 *)((long)param_1 + 0x131) = 0x21;
  func_0x0c656b50(param_1,&UNK_0c656cd0,0,0);
  func_0x0c656d50(param_1,&UNK_0c656ed0,0,0);
  return;
}


