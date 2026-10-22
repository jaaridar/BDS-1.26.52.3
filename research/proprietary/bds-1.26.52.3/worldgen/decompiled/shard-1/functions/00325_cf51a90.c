/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd051a90 (ELF vaddr 0xcf51a90)
 * Label: caller-of-seed
 * Body:  [[0d051a90, 0d051bd8]]
 * Ghidra: FUN_0d051a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d051a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3acf88;
  param_1[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0c66ed20(param_1,0x429,0,0);
  *param_1 = &UNK_0f43fdd8;
  param_1[0x75] = _DAT_014e75b0;
  *(undefined4 *)(param_1 + 0x76) = 0x3ea00000;
  *(undefined8 *)((long)param_1 + 0x3b4) = _DAT_014e30f0;
  *(undefined4 *)((long)param_1 + 0x3bc) = 0x3f300000;
  param_1[0x78] = _DAT_014e10c0;
  *(undefined4 *)(param_1 + 0x79) = 0x3e400000;
  *(undefined8 *)((long)param_1 + 0x3cc) = _DAT_014e9a20;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0x3f500000;
  func_0x0c6cf060(param_1,0xf713e38);
  func_0x0d051bf0(param_1,&UNK_0d051d70,0,0);
  return;
}


