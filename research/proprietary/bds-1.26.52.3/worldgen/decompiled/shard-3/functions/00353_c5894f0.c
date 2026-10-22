/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6894f0 (ELF vaddr 0xc5894f0)
 * Label: caller-of-seed
 * Body:  [[0c6894f0, 0c6895ae]]
 * Ghidra: FUN_0c6894f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c6894f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3b5758;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(ushort *)((long)param_1 + 0x133) = *(ushort *)((long)param_1 + 0x133) & 0xe9ff | 0x400;
  param_1[0x21] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e7dc0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 300) = 0x3f4ccccd;
  func_0x0c6895d0(param_1,&UNK_0c689750,0,0);
  return;
}


