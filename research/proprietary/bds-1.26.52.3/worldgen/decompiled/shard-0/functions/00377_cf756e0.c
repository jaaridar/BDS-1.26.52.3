/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0756e0 (ELF vaddr 0xcf756e0)
 * Label: caller-of-seed
 * Body:  [[0d0756e0, 0d075792]]
 * Ghidra: FUN_0d0756e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0756e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f44a8c8;
  *(undefined4 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e5300;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0d0757b0(param_1,&UNK_0d075930,0,0);
  return;
}


