/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6450d0 (ELF vaddr 0xc5450d0)
 * Label: caller-of-seed
 * Body:  [[0c6450d0, 0c645113]]
 * Ghidra: FUN_0c6450d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6450d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_0f3a8ee0;
  if ((*(byte *)(param_1 + 0x77) & 1) != 0) {
    FUN_0412a280(param_1[0x79],param_1[0x77] & 0xfffffffffffffffe);
  }
  uVar1 = func_0x0c6e1d20(param_1);
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


