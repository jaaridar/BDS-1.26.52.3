/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcfc2490 (ELF vaddr 0xcec2490)
 * Label: caller-of-seed
 * Body:  [[0cfc2490, 0cfc24f4]]
 * Ghidra: FUN_0cfc2490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cfc2490(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f42a2a0;
  *(undefined2 *)((long)param_1 + 0x131) = 0xb39;
  func_0x0cfc2510(param_1,&UNK_0cfc2690,0,0);
  return;
}


