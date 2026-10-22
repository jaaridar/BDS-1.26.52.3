/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf62450 (ELF vaddr 0xce62450)
 * Label: caller-of-seed
 * Body:  [[0cf62450, 0cf624d8]]
 * Ghidra: FUN_0cf62450
 */


void FUN_0cf62450(undefined8 *param_1)

{
  undefined4 in_R8D;
  
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
  *param_1 = &UNK_0f41d6c8;
  *(undefined4 *)(param_1 + 0x78) = in_R8D;
  return;
}


