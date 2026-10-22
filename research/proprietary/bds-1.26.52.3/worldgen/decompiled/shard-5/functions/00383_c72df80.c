/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc82df80 (ELF vaddr 0xc72df80)
 * Label: caller-of-seed
 * Body:  [[0c82df80, 0c82dfc8]]
 * Ghidra: FUN_0c82df80
 */


void FUN_0c82df80(undefined8 *param_1)

{
  func_0x0c6c7010();
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f3d8378;
  *(undefined1 *)((long)param_1 + 0x131) = 0x2a;
  func_0x0c82dfe0(param_1,&UNK_0c82e160,0,0);
  return;
}


