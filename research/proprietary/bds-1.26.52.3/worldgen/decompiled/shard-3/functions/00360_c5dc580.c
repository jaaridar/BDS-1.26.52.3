/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6dc580 (ELF vaddr 0xc5dc580)
 * Label: caller-of-seed
 * Body:  [[0c6dc580, 0c6dc65a]]
 * Ghidra: FUN_0c6dc580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6dc580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  long lVar1;
  
  lVar1 = 0xa0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xa0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c8f10;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014ea710;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  param_1[0x21] = 0x400000;
  *(undefined2 *)((long)param_1 + 0x131) = 0x729;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x3a9) = param_5;
  func_0x0c6dc670(param_1,&UNK_0c6dc7f0,0,0);
  func_0x0c6dc810(param_1,&UNK_0c6dc990,0,0);
  return;
}


