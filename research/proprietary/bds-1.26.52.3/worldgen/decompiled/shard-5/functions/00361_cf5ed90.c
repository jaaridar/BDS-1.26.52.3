/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd05ed90 (ELF vaddr 0xcf5ed90)
 * Label: caller-of-seed
 * Body:  [[0d05ed90, 0d05ee1e]]
 * Ghidra: FUN_0d05ed90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d05ed90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f443658;
  param_1[0x5d] = 0x400000001;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  func_0x0d05ee40(param_1,&UNK_0d05efc0,0,0);
  if (*(char *)(param_1 + 0x75) == '\x01') {
    func_0x0d05f060(param_1,&UNK_0d05f1e0,0,0);
  }
  return;
}


