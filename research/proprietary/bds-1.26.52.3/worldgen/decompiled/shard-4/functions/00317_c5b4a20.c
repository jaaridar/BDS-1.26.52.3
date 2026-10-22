/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b4a20 (ELF vaddr 0xc5b4a20)
 * Label: caller-of-seed
 * Body:  [[0c6b4a20, 0c6b4a89]]
 * Ghidra: FUN_0c6b4a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b4a20(undefined8 *param_1)

{
  func_0x0c6c7010();
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f3c0bb0;
  *(undefined1 *)((long)param_1 + 0x131) = 0x33;
  func_0x0c6b4aa0(param_1,&UNK_0c6b4c20,0,0);
  return;
}


