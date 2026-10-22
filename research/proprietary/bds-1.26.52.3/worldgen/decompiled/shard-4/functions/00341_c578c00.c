/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc678c00 (ELF vaddr 0xc578c00)
 * Label: caller-of-seed
 * Body:  [[0c678c00, 0c678cb4]]
 * Ghidra: FUN_0c678c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c678c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xa0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xa0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((long)param_1 + 0x3ac) = 0;
  *param_1 = &UNK_0f3b0990;
  param_1[0x31] = (ulong)_DAT_01198a08;
  *(undefined4 *)(param_1 + 0x32) = 0x3d800000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e6300;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f700000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x131) = 0x35;
  func_0x0c678cd0(param_1,&UNK_0c678e50,0,0);
  return;
}


