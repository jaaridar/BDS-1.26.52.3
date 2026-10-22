/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6d17a0 (ELF vaddr 0xc5d17a0)
 * Label: caller-of-seed
 * Body:  [[0c6d17a0, 0c6d18a6]]
 * Ghidra: FUN_0c6d17a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6d17a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f42ab70;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = &UNK_04000040;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0cfc5ec0(param_1,&UNK_0cfc6040,0,0);
  func_0x0c6d1a60(param_1,&UNK_0cfc6050,0,0);
  *param_1 = &UNK_0f3c5c10;
  param_1[0x31] = _DAT_0f72b528;
  *(undefined4 *)(param_1 + 0x32) = _DAT_0f72b530;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_0f72b534;
  *(undefined4 *)((long)param_1 + 0x19c) = _DAT_0f72b53c;
  param_1[0x21] = 0;
  func_0x0c6d18c0(param_1,&UNK_0c6d1a40,0,1);
  func_0x0c6d1a60(param_1,&UNK_0cfc6050,0,1);
  return;
}


