/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b0c50 (ELF vaddr 0xc5b0c50)
 * Label: caller-of-seed
 * Body:  [[0c6b0c50, 0c6b0cfe]]
 * Ghidra: FUN_0c6b0c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b0c50(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3bfa50;
  param_1[0x31] = (ulong)_DAT_01198630;
  *(undefined4 *)(param_1 + 0x32) = 0x3e800000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e4310;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f400000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 0x14;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c6b0d20(param_1,&UNK_0c6b0ea0,0,0);
  return;
}


