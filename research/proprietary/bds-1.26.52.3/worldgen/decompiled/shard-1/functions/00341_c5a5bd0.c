/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6a5bd0 (ELF vaddr 0xc5a5bd0)
 * Label: caller-of-seed
 * Body:  [[0c6a5bd0, 0c6a5c58]]
 * Ghidra: FUN_0c6a5bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6a5bd0(undefined8 *param_1)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3be0b0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9d10;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x25] = _DAT_014e6320;
  param_1[0x21] = 0x8080;
  func_0x0c6a5c70(param_1,&UNK_0c6a5df0,0,0);
  return;
}


