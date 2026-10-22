/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc676de0 (ELF vaddr 0xc576de0)
 * Label: caller-of-seed
 * Body:  [[0c676de0, 0c676eaa]]
 * Ghidra: FUN_0c676de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c676de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x0c6c7010();
  *param_1 = &UNK_0f3b0100;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e6db0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x131) = 10;
  func_0x0c676ec0(param_1,&UNK_0c677040,0,0);
  func_0x0c677060(param_1,&UNK_0c6771e0,0,0);
  return;
}


