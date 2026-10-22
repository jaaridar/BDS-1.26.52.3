/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e2a10 (ELF vaddr 0xc5e2a10)
 * Label: callee-of:0xc5e1d20
 * Body:  [[0c6e2a10, 0c6e2a3b]]
 * Ghidra: FUN_0c6e2a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0c6e2a10(undefined8 *param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_0c6e2a10(*param_1);
    uVar1 = FUN_0c6e2a10(param_1[1]);
    if (param_1 != (undefined8 *)0x0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
    }
    return uVar1;
  }
  return in_RAX;
}


