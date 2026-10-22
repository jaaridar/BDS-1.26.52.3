/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd00b540 (ELF vaddr 0xcf0b540)
 * Label: caller-of-seed
 * Body:  [[0d00b540, 0d00b5d6]]
 * Ghidra: FUN_0d00b540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d00b540(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f4306b8;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9720;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  func_0x0d00b5f0(param_1,&UNK_0d00b770,0,0);
  func_0x0d00b830(param_1,&UNK_0d00b9b0,0,0);
  return;
}


