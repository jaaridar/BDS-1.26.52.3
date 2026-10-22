/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6b32d0 (ELF vaddr 0xc5b32d0)
 * Label: caller-of-seed
 * Body:  [[0c6b32d0, 0c6b33b2]]
 * Ghidra: FUN_0c6b32d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6b32d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 uint param_5)

{
  ulong uVar1;
  
  uVar1 = 1;
  if ((ulong)param_5 <= (ulong)(_DAT_0f71e698 - _DAT_0f71e690 >> 3)) {
    uVar1 = (ulong)param_5;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + uVar1 * 8));
  *param_1 = &UNK_0f3c0738;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined4 *)((long)param_1 + 300) = 0x3f000000;
  param_1[0x31] = (ulong)_DAT_011985b0;
  *(undefined4 *)(param_1 + 0x32) = 0x3ccccccd;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e68d0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f79999a;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x21] = 0x8000;
  *(undefined1 *)((long)param_1 + 0x131) = 2;
  func_0x0c6b33d0(param_1,&UNK_0c6b3550,0,0);
  func_0x0c6b3570(param_1,&UNK_0c6b36f0,0,0);
  return;
}


