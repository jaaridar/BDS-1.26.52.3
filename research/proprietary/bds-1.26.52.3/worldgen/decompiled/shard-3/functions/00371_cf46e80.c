/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd046e80 (ELF vaddr 0xcf46e80)
 * Label: caller-of-seed
 * Body:  [[0d046e80, 0d046f00]]
 * Ghidra: FUN_0d046e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d046e80(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f43db68;
  *(undefined2 *)((long)param_1 + 0x131) = 0xb31;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e86e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0d046f20(param_1,&UNK_0d0470a0,0,0);
  return;
}


