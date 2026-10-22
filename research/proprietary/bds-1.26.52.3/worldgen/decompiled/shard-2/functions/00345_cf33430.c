/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd033430 (ELF vaddr 0xcf33430)
 * Label: caller-of-seed
 * Body:  [[0d033430, 0d0334e9]]
 * Ghidra: FUN_0d033430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d033430(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f439880;
  param_1[0x31] = _DAT_014e9ce0;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e2e70;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f59999a;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x21] = 0;
  *(undefined2 *)((long)param_1 + 0x131) = 0x82e;
  func_0x0d033500(param_1,&UNK_0d033680,0,0);
  return;
}


