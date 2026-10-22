/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc834ad0 (ELF vaddr 0xc734ad0)
 * Label: caller-of-seed
 * Body:  [[0c834ad0, 0c834bb0]]
 * Ghidra: FUN_0c834ad0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c834ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3d94b8;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e4320;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3dcccccd;
  *(undefined2 *)((long)param_1 + 0x131) = 0x1b;
  lVar1 = func_0x0c834bd0(param_1,&UNK_0c834d50,0,0);
  *(undefined1 *)(lVar1 + 0x60) = 0;
  func_0x0c834e70(param_1,&UNK_0c834ff0,0,0);
  func_0x0c8350b0(param_1,&UNK_0c835230,0,0);
  return;
}


