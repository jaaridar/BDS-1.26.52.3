/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd00c9d0 (ELF vaddr 0xcf0c9d0)
 * Label: caller-of-seed
 * Body:  [[0d00c9d0, 0d00ca99]]
 * Ghidra: FUN_0d00c9d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d00c9d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f431818;
  param_1[0x31] = (ulong)_DAT_01198a50;
  *(undefined4 *)(param_1 + 0x32) = 0x3e000000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e62e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f600000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  func_0x0d00cab0(param_1,&UNK_0d00cc30,0,0);
  func_0x0d00ccc0(param_1,&UNK_0d00ce40,0,0);
  return;
}


