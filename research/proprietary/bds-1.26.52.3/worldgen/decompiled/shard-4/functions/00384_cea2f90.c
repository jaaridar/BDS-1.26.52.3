/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfa2f90 (ELF vaddr 0xcea2f90)
 * Label: caller-of-seed
 * Body:  [[0cfa2f90, 0cfa3067]]
 * Ghidra: FUN_0cfa2f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfa2f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f425718;
  *(undefined4 *)(param_1 + 0x75) = 0x3e99999a;
  param_1[0x31] = (ulong)_DAT_01198460;
  *(undefined4 *)(param_1 + 0x32) = 0x3e4ccccc;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e8b20;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f4ccccd;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0cfa3080(param_1,&UNK_0cfa3200,0,0);
  func_0x0cfa33b0(param_1,&UNK_0cfa3530,0,0);
  func_0x0cfa4220(param_1,&UNK_0cfa43a0,0,0);
  return;
}


