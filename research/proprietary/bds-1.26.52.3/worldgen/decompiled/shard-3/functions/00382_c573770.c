/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc673770 (ELF vaddr 0xc573770)
 * Label: caller-of-seed
 * Body:  [[0c673770, 0c67379f]]
 * Ghidra: FUN_0c673770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c673770(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f3aace8;
  func_0x04abe980(param_1 + 0x75);
  uVar1 = func_0x0c6e1d20(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


