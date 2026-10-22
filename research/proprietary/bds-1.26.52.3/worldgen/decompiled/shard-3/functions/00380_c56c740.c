/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc66c740 (ELF vaddr 0xc56c740)
 * Label: caller-of-seed
 * Body:  [[0c66c740, 0c66c7cb]]
 * Ghidra: FUN_0c66c740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c66c740(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3acf88;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c66ed20(param_1,0x429,0,0);
  return;
}


