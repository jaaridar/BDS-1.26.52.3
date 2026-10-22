/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd054a60 (ELF vaddr 0xcf54a60)
 * Label: caller-of-seed
 * Body:  [[0d054a60, 0d054b01]]
 * Ghidra: FUN_0d054a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d054a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x80;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x80) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f440f78;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 3;
  param_1[0x21] = 0x400;
  func_0x0d054b20(param_1,&UNK_0d054ca0,0,0);
  func_0x0d054d50(param_1,&UNK_0d054ed0,0,0);
  func_0x0d054ef0(param_1,&UNK_0d055070,0,0);
  return;
}


