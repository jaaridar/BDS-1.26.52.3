/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd044cc0 (ELF vaddr 0xcf44cc0)
 * Label: caller-of-seed
 * Body:  [[0d044cc0, 0d044d88]]
 * Ghidra: FUN_0d044cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d044cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f43d730;
  *(undefined4 *)(param_1 + 0x75) = 0x1e;
  *(undefined2 *)((long)param_1 + 0x131) = 0x82d;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e86e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  func_0x0d044e80(param_1,&UNK_0d045000,0,0);
  func_0x0d045020(param_1,&UNK_0d0451a0,0,0);
  return;
}


