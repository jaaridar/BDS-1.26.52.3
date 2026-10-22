/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd03e950 (ELF vaddr 0xcf3e950)
 * Label: caller-of-seed
 * Body:  [[0d03e950, 0d03eb2f]]
 * Ghidra: FUN_0d03e950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d03e950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar2 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar2));
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
  *param_1 = &UNK_0f43c8f8;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    param_1[0x77] = param_4[2];
    uVar1 = param_4[1];
    param_1[0x75] = *param_4;
    param_1[0x76] = uVar1;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    param_1[0x7b] = param_5[2];
    uVar1 = param_5[1];
    param_1[0x79] = *param_5;
    param_1[0x7a] = uVar1;
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    param_1[0x7f] = param_6[2];
    uVar1 = param_6[1];
    param_1[0x7d] = *param_6;
    param_1[0x7e] = uVar1;
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  param_1[0x31] = (ulong)_DAT_01198a9c;
  *(undefined4 *)(param_1 + 0x32) = 0x3dcccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e1380;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f666666;
  func_0x0d03eb70(param_1,&UNK_0d03ecf0,0,0);
  return;
}


