/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd06b320 (ELF vaddr 0xcf6b320)
 * Label: caller-of-seed
 * Body:  [[0d06b320, 0d06b3d6]]
 * Ghidra: FUN_0d06b320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d06b320(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f447e20;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014ea9e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f59999a;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x21] = 0;
  func_0x0d06b3f0(param_1,&UNK_0d06b570,0,0);
  return;
}


