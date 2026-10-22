/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc838090 (ELF vaddr 0xc738090)
 * Label: caller-of-seed
 * Body:  [[0c838090, 0c83810c]]
 * Ghidra: FUN_0c838090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c838090(undefined8 *param_1)

{
  func_0x0c6c7010();
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f3d9d28;
  *(undefined1 *)((long)param_1 + 0x131) = 0x2b;
  func_0x0c838120(param_1,&UNK_0c8382a0,0,0);
  func_0x0c838480(param_1,&UNK_0c838600,0,0);
  return;
}


