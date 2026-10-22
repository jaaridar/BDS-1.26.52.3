/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd037d80 (ELF vaddr 0xcf37d80)
 * Label: caller-of-seed
 * Body:  [[0d037d80, 0d037e73]]
 * Ghidra: FUN_0d037d80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d037d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  
  lVar1 = 0xc0;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xc0) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *param_1 = &UNK_0f43aea8;
  param_1[0x21] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e3f80;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0d037e90(param_1,&UNK_0d038010,0,0);
  func_0x0d038030(param_1,&UNK_0d0381b0,0,0);
  func_0x0d0384c0(param_1,&UNK_0d038640,0,0);
  func_0x0d0386e0(param_1,&UNK_0d038860,0,0);
  return;
}


