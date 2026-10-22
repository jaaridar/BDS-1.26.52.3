/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc843420 (ELF vaddr 0xc743420)
 * Label: caller-of-seed
 * Body:  [[0c843420, 0c8434af]]
 * Ghidra: FUN_0c843420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c843420(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3add08;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x131) = 1;
  func_0x0c672180(param_1,&UNK_0c672300,0,0);
  *param_1 = &UNK_0f3daee8;
  *(undefined1 *)((long)param_1 + 0x131) = 0x26;
  func_0x0c8434d0(param_1,&UNK_0c843650,0,1);
  return;
}


