/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc64b2b0 (ELF vaddr 0xc54b2b0)
 * Label: caller-of-seed
 * Body:  [[0c64b2b0, 0c64b32f]]
 * Ghidra: FUN_0c64b2b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c64b2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f3aa880;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 0x14;
  func_0x0c661530(param_1,&UNK_0c6616b0,0,0);
  func_0x0c661760(param_1,&UNK_0c6618e0,0,0);
  *param_1 = &UNK_0f3a2bc0;
  return;
}


