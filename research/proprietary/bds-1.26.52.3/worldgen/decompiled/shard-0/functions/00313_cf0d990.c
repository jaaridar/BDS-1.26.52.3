/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd00d990 (ELF vaddr 0xcf0d990)
 * Label: caller-of-seed
 * Body:  [[0d00d990, 0d00dad2]]
 * Ghidra: FUN_0d00d990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d00d990(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  *param_1 = &UNK_0f4320e0;
  param_1[0x31] = (ulong)_DAT_01198a9c;
  *(undefined4 *)(param_1 + 0x32) = 0x3dcccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e53e0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f666666;
  *(ushort *)((long)param_1 + 0x10a) = *(ushort *)((long)param_1 + 0x10a) | 0x840;
  func_0x0c6cf060(param_1,0xf713e38);
  func_0x0d00daf0(param_1,&UNK_0d00dc70,0,0);
  func_0x0d00dd40(param_1,&UNK_0d00dec0,0,0);
  func_0x0d00e080(param_1,&UNK_0d00e200,0,0);
  return;
}



/* ---- referenced strings ----
 * 0x14e53e0  fff?
 */
