/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc66f350 (ELF vaddr 0xc56f350)
 * Label: caller-of-seed
 * Body:  [[0c66f350, 0c66f417]]
 * Ghidra: FUN_0c66f350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c66f350(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3ad3d8;
  param_1[0x21] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e9260;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  func_0x0c66f430(param_1,&UNK_0c66f5b0,0,0);
  func_0x0c66f7f0(param_1,&UNK_0c66f970,0,0);
  return;
}


