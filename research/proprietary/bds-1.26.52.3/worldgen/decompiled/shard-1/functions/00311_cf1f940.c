/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd01f940 (ELF vaddr 0xcf1f940)
 * Label: caller-of-seed
 * Body:  [[0d01f940, 0d01fa38]]
 * Ghidra: FUN_0d01f940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d01f940(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
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
  *param_1 = &UNK_0f434f48;
  param_1[0x31] = (ulong)_DAT_01198a50;
  *(undefined4 *)(param_1 + 0x32) = 0x3e000000;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e3800;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f600000;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  return;
}


