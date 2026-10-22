/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc641fc0 (ELF vaddr 0xc541fc0)
 * Label: caller-of-seed
 * Body:  [[0c641fc0, 0c64203c]]
 * Ghidra: FUN_0c641fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c641fc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f39e9a0;
  *(byte *)((long)param_1 + 0x133) = *(byte *)((long)param_1 + 0x133) | 8;
  *(byte *)((long)param_1 + 0x10a) = *(byte *)((long)param_1 + 0x10a) | 0x40;
  func_0x0c642050(param_1,&UNK_0c6421d0,0,0);
  func_0x0c6421e0(param_1,&UNK_0c642360,0,0);
  return;
}


