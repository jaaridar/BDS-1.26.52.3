/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65f2b0 (ELF vaddr 0xc55f2b0)
 * Label: caller-of-seed
 * Body:  [[0c65f2b0, 0c65f3af]]
 * Ghidra: FUN_0c65f2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c65f2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3c0738;
  *(undefined1 *)(param_1 + 0x75) = 2;
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
  *param_1 = &UNK_0f3a9788;
  *(undefined1 *)((long)param_1 + 0x131) = 0x17;
  param_1[0x21] = 0;
  return;
}


