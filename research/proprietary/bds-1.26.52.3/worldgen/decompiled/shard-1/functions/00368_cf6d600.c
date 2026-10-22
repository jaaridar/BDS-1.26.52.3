/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd06d600 (ELF vaddr 0xcf6d600)
 * Label: caller-of-seed
 * Body:  [[0d06d600, 0d06d65b]]
 * Ghidra: FUN_0d06d600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d06d600(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f448f18;
  func_0x0d06d670(param_1,&UNK_0d06d7f0,0,0);
  return;
}


