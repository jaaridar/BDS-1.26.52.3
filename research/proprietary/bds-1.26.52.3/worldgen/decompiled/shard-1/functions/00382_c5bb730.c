/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6bb730 (ELF vaddr 0xc5bb730)
 * Label: caller-of-seed
 * Body:  [[0c6bb730, 0c6bb825]]
 * Ghidra: FUN_0c6bb730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6bb730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c31c8;
  *(undefined2 *)((long)param_1 + 0x131) = 0xb0c;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e3f80;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c6bb840(param_1,&UNK_0c6bb9c0,0,0);
  func_0x0c6bb9d0(param_1,&UNK_0c6bbb50,0,0);
  func_0x0c6bbe30(param_1,&UNK_0c6bbfb0,0,0);
  func_0x0c6bc870(param_1,&UNK_0c6bc9f0,0,0);
  return;
}


