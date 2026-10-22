/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd05a5a0 (ELF vaddr 0xcf5a5a0)
 * Label: caller-of-seed
 * Body:  [[0d05a5a0, 0d05a613]]
 * Ghidra: FUN_0d05a5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d05a5a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f4429a0;
  *(undefined1 *)(param_1 + 0x75) = param_4;
  *(undefined1 *)((long)param_1 + 0x3a9) = param_5;
  *(byte *)((long)param_1 + 0x134) = *(byte *)((long)param_1 + 0x134) | 0x40;
  func_0x0d05a630(param_1,&UNK_0d05a7b0,0,0);
  return;
}


