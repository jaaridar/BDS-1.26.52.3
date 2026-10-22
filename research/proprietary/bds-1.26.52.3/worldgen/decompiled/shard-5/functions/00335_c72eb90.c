/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc82eb90 (ELF vaddr 0xc72eb90)
 * Label: caller-of-seed
 * Body:  [[0c82eb90, 0c82ebfe]]
 * Ghidra: FUN_0c82eb90
 */


void FUN_0c82eb90(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3dc4c0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0x10000;
  *(undefined4 *)((long)param_1 + 300) = 0x3e4ccccd;
  func_0x0c82ec30(param_1,&UNK_0c82edb0,0,0);
  return;
}


