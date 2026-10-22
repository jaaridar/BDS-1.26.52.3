/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533dfe0 (ELF vaddr 0x523dfe0)
 * Label: caller-of-seed
 * Body:  [[0533dfe0, 0533dffd]]
 * Ghidra: FUN_0533dfe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0533dfe0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + -8;
  uVar1 = wg_Dimension__vslot0(param_1);
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


