/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf9e5e0 (ELF vaddr 0xce9e5e0)
 * Label: caller-of-seed
 * Body:  [[0cf9e5e0, 0cf9e6a7]]
 * Ghidra: FUN_0cf9e5e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf9e5e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f424ea8;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e68c0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 8;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0cf9e6c0(param_1,&UNK_0cf9e840,0,0);
  func_0x0cf9edd0(param_1,&UNK_0cf9ef50,0,0);
  return;
}


