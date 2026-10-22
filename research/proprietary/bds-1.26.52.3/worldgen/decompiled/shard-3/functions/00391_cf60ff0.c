/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd060ff0 (ELF vaddr 0xcf60ff0)
 * Label: caller-of-seed
 * Body:  [[0d060ff0, 0d061079]]
 * Ghidra: FUN_0d060ff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d060ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0xb8;
  if ((ulong)(_DAT_0f71e698 - _DAT_0f71e690) < 0xb8) {
    lVar1 = 8;
  }
  func_0x0c6c7010(param_1,param_2,param_3,*(undefined8 *)(_DAT_0f71e690 + lVar1));
  *param_1 = &UNK_0f444758;
  *(char *)(param_1 + 0x75) = (char)param_4;
  if (param_4 != 0) {
    *(undefined1 *)((long)param_1 + 0x137) = 0xf;
  }
  *(undefined4 *)((long)param_1 + 300) = 0x3f800000;
  func_0x0d061090(param_1,&UNK_0d061210,0,0);
  func_0x0d061310(param_1,&UNK_0d061490,0,0);
  return;
}


