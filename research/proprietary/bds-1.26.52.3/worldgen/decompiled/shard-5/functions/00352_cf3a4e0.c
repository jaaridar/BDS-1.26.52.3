/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd03a4e0 (ELF vaddr 0xcf3a4e0)
 * Label: caller-of-seed
 * Body:  [[0d03a4e0, 0d03a54e]]
 * Ghidra: FUN_0d03a4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d03a4e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f43b350;
  func_0x0d03a570(param_1,&UNK_0d03a6f0,0,0);
  func_0x0d03a930(param_1,&UNK_0d03aab0,0,0);
  return;
}


