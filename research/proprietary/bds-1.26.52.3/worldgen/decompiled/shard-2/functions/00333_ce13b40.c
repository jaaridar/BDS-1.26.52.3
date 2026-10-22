/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf13b40 (ELF vaddr 0xce13b40)
 * Label: caller-of-seed
 * Body:  [[0cf13b40, 0cf13bd6]]
 * Ghidra: FUN_0cf13b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cf13b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f40fbe8;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)((long)param_1 + 0x131) = 0x813;
  param_1[0x21] = 0;
  lVar1 = func_0x0cf13bf0(param_1,&UNK_0cf13d70,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  return;
}


