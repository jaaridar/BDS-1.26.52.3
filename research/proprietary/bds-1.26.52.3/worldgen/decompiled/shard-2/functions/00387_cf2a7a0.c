/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd02a7a0 (ELF vaddr 0xcf2a7a0)
 * Label: caller-of-seed
 * Body:  [[0d02a7a0, 0d02a84f]]
 * Ghidra: FUN_0d02a7a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d02a7a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f437a30;
  param_1[0x31] = (ulong)_DAT_01198a08;
  *(undefined4 *)(param_1 + 0x32) = 0x3e000000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e6300;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f600000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0d02a870(param_1,&UNK_0d02a9f0,0,0);
  func_0x0d02abd0(param_1,&UNK_0d02ad50,0,0);
  return;
}


