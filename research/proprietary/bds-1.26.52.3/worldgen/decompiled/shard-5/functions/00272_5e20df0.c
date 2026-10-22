/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5f20df0 (ELF vaddr 0x5e20df0)
 * Label: callee-of:0xc961580
 * Body:  [[05f20df0, 05f20e2a]]
 * Ghidra: FUN_05f20df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05f20df0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_05f20df0(param_1,*param_2);
    uVar1 = FUN_05f20df0(param_1,param_2[1]);
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_2);
    }
    return uVar1;
  }
  return in_RAX;
}


