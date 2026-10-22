/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc64e170 (ELF vaddr 0xc54e170)
 * Label: caller-of-seed
 * Body:  [[0c64e170, 0c64e1af]]
 * Ghidra: FUN_0c64e170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c64e170(undefined8 *param_1)

{
  long lVar1;
  
  func_0x0c6c7010();
  *param_1 = &UNK_0f3a3ce8;
  lVar1 = func_0x0c64e1d0(param_1,&UNK_0c64e350,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}


