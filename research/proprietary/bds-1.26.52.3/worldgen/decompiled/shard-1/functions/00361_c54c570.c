/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc64c570 (ELF vaddr 0xc54c570)
 * Label: caller-of-seed
 * Body:  [[0c64c570, 0c64c627]]
 * Ghidra: FUN_0c64c570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c64c570(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x40;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0x40) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3a3460;
  param_1[0x31] = _DAT_014e7dd0;
  *(undefined4 *)(param_1 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)param_1 + 0x194) = _DAT_014e2e70;
  *(undefined4 *)((long)param_1 + 0x19c) = 0x3f59999a;
  *(undefined1 *)((long)param_1 + 0x136) = 0;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) & 0xe9;
  *(undefined1 *)((long)param_1 + 0x132) = 0xb;
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  param_1[0x21] = 0;
  func_0x0c64c640(param_1,&UNK_0c64c7c0,0,0);
  return;
}


